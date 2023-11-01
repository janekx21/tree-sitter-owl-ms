module.exports = grammar({
  name: 'owl2manchestersyntax', // TODO find a better name
  conflicts: $ => [[$.datatype_frame]],
  rules: {
    source_file: $ => $.ontology_document,

    // https://www.w3.org/TR/owl2-manchester-syntax/

    // 2.1 IRIs, Integers, Literals, and Entities
    iri: $ => choice($.full_iri, $.abbreviated_iri, $.simple_iri),
    full_iri: $ => seq('<', $._iri_rfc3987, '>'),
    abbreviated_iri: $ => $._pname_ln,
    simple_iri: $ => $._pn_local,
    prefix_name: $ => /([A-Za-z][A-Za-z0-9_\-\.]*)?:/,

    datatype: $ =>
      choice($._datatype_iri, 'integer', 'decimal', 'float', 'string'),
    _datatype_iri: $ => $.iri,
    _class_iri: $ => $.iri,
    _annotation_property_iri: $ => $.iri,
    _ontology_iri: $ => $.iri,
    _data_property_iri: $ => $.iri,
    _version_iri: $ => $.iri,
    _object_property_iri: $ => $.iri,

    non_negative_integer: $ => choice($._zero, $._positive_integer),
    _positive_integer: $ => seq($._non_zero, repeat($._digit)),
    _digits: $ => repeat1($._digit),
    _digit: $ => choice($._zero, $._non_zero),
    _non_zero: $ => /[1-9]/,
    _zero: $ => '0',

    literal: $ =>
      choice(
        // TODO
        // $.typed_literal,
        $._string_literal_no_language,
        // $.string_literal_with_language,
        $._integer_literal,
        // $.decimal_literal,
        // $.floating_point_literal,
      ),
    _integer_literal: $ => seq(optional(choice('+', '-')), $._digits),
    _string_literal_no_language: $ => $._quotedString,
    _quotedString: $ => /"([^"\\]|\\\\|\\")*"/,

    // 2.2 Ontologies and Annotations
    ontology_document: $ => seq(repeat($.prefix_declaration), $.ontology),
    ontology: $ =>
      seq(
        'Ontology:',
        optional(seq($._ontology_iri, optional($._version_iri))),
        /* TODO import and annotations */ repeat($.frame),
      ),

    frame: $ =>
      choice($.datatype_frame, $.class_frame, $.object_property_frame), // TODO dataPropertyFrame annotationPropertyFrame individualFrame misc
    prefix_declaration: $ => seq('Prefix:', $.prefix_name, $.full_iri),

    annotations: $ => seq('Annotations:', $.annotation_annotated_list),
    annotation: $ => seq($._annotation_property_iri, $.annotation_target),
    annotation_target: $ => choice($.iri, $.literal), // TODO nodeID

    // 2.3  Property and Datatype Expressions
    object_property_expression: $ =>
      choice($._object_property_iri, $.inverse_object_property),
    inverse_object_property: $ => seq('inverse', $._object_property_iri),

    data_property_expression: $ => $._data_property_iri,
    data_primary: $ => seq(optional('not'), $.data_atomic),
    data_atomic: $ => choice($.datatype), // TODO

    data_range: $ => sep1($.data_conjunction, 'or'),
    data_conjunction: $ => sep1($.data_primary, 'and'),
    data_primary: $ => seq(optional('not'), $.data_atomic),
    data_atomic: $ =>
      choice(
        $.datatype,
        seq('{', /* TODO literal list */ '}'),
        $.datatype_restriction,
        seq('(', $.data_range, ')'),
      ),
    datatype_restriction: $ =>
      seq($.datatype, '[', sep1(seq($.facet, $._restriction_value), ','), ']'),

    facet: $ =>
      choice(
        'length',
        'minLength',
        'maxLength',
        'pattern',
        'langRange',
        '<=',
        '<',
        '>=',
        '>',
      ),

    _restriction_value: $ => $.literal,

    // 2.4 Descriptions
    description: $ => sep1($.conjunction, 'or'),

    conjunction: $ =>
      choice(
        seq(
          $._class_iri,
          'that',
          optional('not'),
          $.restriction,
          repeat(seq('and', optional('not'), $.restriction)),
        ),
        sep1($.primary, 'and'),
      ),

    primary: $ => seq(optional('not'), choice($.restriction, $.atomic)),

    restriction: $ =>
      choice(
        seq($.data_property_expression, 'only', $.primary),
        seq(
          $.data_property_expression,
          'exactly',
          $.non_negative_integer,
          optional($.data_primary),
        ),
        /* TODO many rules */
      ),

    atomic: $ =>
      choice(
        $._class_iri,
        /* TODO individualList */
        seq('(', $.description, ')'),
      ),

    // 2.5 Frames and Miscellaneous

    datatype_frame: $ =>
      seq(
        'Datatype:',
        $.datatype,
        repeat(seq('Annotations:', $.annotation_annotated_list)),
        optional(seq('EquivalentTo:', $.annotations, $.data_range)),
        repeat(seq('Annotations:', $.annotation_annotated_list)),
      ),

    class_frame: $ =>
      seq(
        'Class:',
        $._class_iri,
        repeat(
          choice(
            seq('SubClassOf:', $.description_annotated_list),
            seq('Annotations:', $.annotation_annotated_list),
          ),
        ),
      ), // TODO equivaltentto disjointwith disjointuniionof haskey

    object_property_frame: $ =>
      seq(
        'ObjectProperty:',
        $._object_property_iri,
        repeat(
          choice(
            seq('Annotations:', $.annotation_annotated_list),
            seq('Domain:', $.description_annotated_list),
            seq('Range:', $.description_annotated_list),
            seq('SubPropertyOf:', $.object_property_expression_annotated_list),
            seq('EquivalentTo:', $.object_property_expression_annotated_list),
            seq('DisjointWith:', $.object_property_expression_annotated_list),
            seq('InverseOf:', $.object_property_expression_annotated_list),
            seq(
              'Characteristics:',
              $.object_property_characteristic_annotated_list,
            ),
            seq(
              'SubPropertyChain:',
              $.annotations,
              sep1($.object_property_expression, 'o'),
            ),
          ),
        ),
      ),

    object_property_characteristic: $ =>
      choice(
        'Functional',
        'InverseFunctional',
        'Reflexive',
        'Irreflexive',
        'Symmetric',
        'Asymmetric',
        'Transitive',
      ),

    // Annotated Lists
    description_annotated_list: $ =>
      annotated_list($.annotations, $.description),
    annotation_annotated_list: $ => annotated_list($.annotations, $.annotation),
    object_property_expression_annotated_list: $ =>
      annotated_list($.annotations, $.object_property_expression),
    object_property_characteristic_annotated_list: $ =>
      annotated_list($.annotations, $.object_property_characteristic),

    // IRI [RFC 3987]
    // TODO finish
    _iri_rfc3987: $ =>
      seq(
        $._scheme,
        ':',
        $._ihier_part,
        optional($._iquery),
        optional($._ifragment),
      ),
    _scheme: $ => /[A-Za-z][A-Za-z0-9+\-\.]*/,
    _ihier_part: $ => seq('//', $._iauthority, $._ipath_abempty), // TODO not finished
    _iauthority: $ =>
      seq(
        optional(seq($._iuserinfo, '@')),
        $._ihost,
        optional(seq(':', $._port)),
      ),
    _iuserinfo: $ => $._iunreserved, // TODO not done
    _ihost: $ => $._iunreserved, // TODO not done
    _iunreserved: $ => /[A-Za-z0-9_\-\.\~]+/, // TODO not done
    _port: $ => /[0-9]*/,
    _ipath_abempty: $ => repeat1(seq('/', $._isegment)),
    _isegment: $ => $._iunreserved, // TODO not done
    _iquery: $ => /\?[A-Za-z0-9_\-\.\~\/\?]*/, // TODO not done
    _ifragment: $ => /\#[A-Za-z0-9_\-\.\~\/\?]*/, // TODO not done

    // https://www.w3.org/TR/2008/REC-rdf-sparql-query-20080115/
    // TODO make more strict
    _pn_local: $ => /[A-Za-z0-9_\-\.]+/,
    _pname_ln: $ => /[A-Za-z0-9_\-\.]*:[A-Za-z0-9_\-\.]+/,
    // _pn_prefix: $ => /[A-Za-z0-9_\-\.]+/,
    // _pname_ln: $ => seq(optional($._pn_prefix), ':', $._pn_local),
  },
})

// Util Functions

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}

function annotated_list(annotations, nt) {
  return sep1(seq(optional(annotations), nt), ',')
}

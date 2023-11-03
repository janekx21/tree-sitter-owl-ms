module.exports = grammar({
  name: 'owl2ms',
  conflicts: $ => [
    [$.datatype_frame],
    [$._data_property_iri, $._object_property_iri],
    [$._datatype_iri, $._class_iri],
  ],
  extras: $ => [/[ \t\n\r]/ /*, TODO $._line_comment*/],
  rules: {
    // My rules
    source_file: $ => $.ontology_document,
    // _line_comment: _ => token(seq('#', /.*/)), // https://github.com/tree-sitter/tree-sitter-rust/blob/master/grammar.js

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
    _annotation_property_iri_annotated_list: $ => $.iri,
    _individual_iri: $ => $.iri,
    individual: $ => choice($._individual_iri, $.node_id),
    node_id: $ => seq('_:', $._pn_local),

    non_negative_integer: $ => choice($._zero, $._positive_integer),
    _positive_integer: $ => seq($._non_zero, repeat($._digit)),
    _digits: $ => repeat1($._digit),
    _digit: $ => choice($._zero, $._non_zero),
    _non_zero: $ => /[1-9]/,
    _zero: $ => '0',

    literal: $ =>
      choice(
        $._typed_literal,
        $._string_literal_no_language,
        $._string_literal_with_language,
        $._integer_literal,
        $._decimal_literal,
        $._floating_point_literal,
      ),
    _decimal_literal: $ =>
      seq(optional(choice('+', '-')), $._digits, '.', $._digits),
    _floating_point_literal: $ =>
      seq(
        optional(choice('+', '-')),
        choice(
          seq($._digits, optional(seq('.', $._digits)), optional($._exponent)),
          seq('.', $._digits, optional($._exponent)),
        ),
        choice('f', 'F'),
      ),
    _integer_literal: $ => seq(optional(choice('+', '-')), $._digits),
    _exponent: $ =>
      seq(choice('e', 'E'), optional(choice('+', '-')), $._digits),
    _string_literal_no_language: $ => $._quoted_string,
    _quoted_string: $ => /"([^"\\]|\\\\|\\")*"/,
    _string_literal_with_language: $ => seq($._quoted_string, $._language_tag),
    _language_tag: $ => /@[a-zA-Z\-]+/, // TODO make more strict https://www.rfc-editor.org/rfc/bcp/bcp47.txt
    _typed_literal: $ => seq($._lexial_value, '^^', $.datatype),
    _lexial_value: $ => $._quoted_string,

    // 2.2 Ontologies and Annotations
    ontology_document: $ => seq(repeat($.prefix_declaration), $.ontology),
    ontology: $ =>
      seq(
        'Ontology:',
        optional(seq($._ontology_iri, optional($._version_iri))),
        repeat($.import),
        repeat($.annotations),
        repeat($.frame),
      ),

    import: $ => seq('Import:', $.iri),

    frame: $ =>
      choice(
        $.datatype_frame,
        $.class_frame,
        $.object_property_frame,
        $.data_property_frame,
        $.annotation_property_frame,
        $.individual_frame,
        $.misc,
      ),
    prefix_declaration: $ => seq('Prefix:', $.prefix_name, $.full_iri),

    annotations: $ => seq('Annotations:', $.annotation_annotated_list),
    annotation: $ => seq($._annotation_property_iri, $.annotation_target),
    annotation_target: $ => choice($.iri, $.literal, $.node_id),

    // 2.3  Property and Datatype Expressions
    object_property_expression: $ =>
      choice($._object_property_iri, $.inverse_object_property),
    inverse_object_property: $ => seq('inverse', $._object_property_iri),
    data_property_expression: $ => $._data_property_iri,

    data_property_expression: $ => $._data_property_iri,
    data_primary: $ => seq(optional('not'), $.data_atomic),
    data_atomic: $ =>
      choice(
        $.datatype,
        seq('{', $.literal_list, '}'),
        $.datatype_restriction,
        seq('(', $.data_range, ')'),
      ),

    data_range: $ => sep1($.data_conjunction, 'or'),
    data_conjunction: $ => sep1($.data_primary, 'and'),
    data_primary: $ => seq(optional('not'), $.data_atomic),
    data_atomic: $ =>
      choice(
        $.datatype,
        seq('{', $.literal_list, '}'),
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
        seq($.data_property_expression, 'some', $.primary),
        seq($.data_property_expression, 'some', $.data_primary),
        seq($.data_property_expression, 'only', $.primary),
        seq($.data_property_expression, 'only', $.data_primary),
        seq($.data_property_expression, 'Self'),
        seq(
          $.data_property_expression,
          'min',
          $.non_negative_integer,
          optional($.primary),
        ),
        seq(
          $.data_property_expression,
          'min',
          $.non_negative_integer,
          optional($.data_primary),
        ),
        seq(
          $.data_property_expression,
          'max',
          $.non_negative_integer,
          optional($.primary),
        ),
        seq(
          $.data_property_expression,
          'max',
          $.non_negative_integer,
          optional($.data_primary),
        ),
        seq(
          $.data_property_expression,
          'exactly',
          $.non_negative_integer,
          optional($.primary),
        ),
        seq(
          $.data_property_expression,
          'exactly',
          $.non_negative_integer,
          optional($.data_primary),
        ),
        seq($.object_property_expression, 'value', $.individual),
        seq($.data_property_expression, 'value', $.literal),
      ),

    atomic: $ =>
      choice(
        $._class_iri,
        seq('{', $.individual_list, '}'),
        seq('(', $.description, ')'),
      ),

    // 2.5 Frames and Miscellaneous

    datatype_frame: $ =>
      seq(
        'Datatype:',
        $.datatype,
        repeat(seq('Annotations:', $.annotation_annotated_list)),
        optional(seq('EquivalentTo:', optional($.annotations), $.data_range)),
        repeat(seq('Annotations:', $.annotation_annotated_list)),
      ),

    class_frame: $ =>
      seq(
        'Class:',
        $._class_iri,
        repeat(
          choice(
            seq('Annotations:', $.annotation_annotated_list),
            seq('SubClassOf:', $.description_annotated_list),
            seq('EquivalentTo:', $.description_annotated_list),
            seq('DisjointWith:', $.description_annotated_list),
            seq(
              'DisjointUnionOf:',
              optional($.annotations),
              $.description_2list,
            ),
            seq(
              'HasKey:',
              optional($.annotations),
              repeat1(
                choice(
                  $.object_property_expression,
                  $.data_property_expression,
                ),
              ),
            ),
          ),
        ),
      ),

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
              optional($.annotations),
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

    data_property_frame: $ =>
      seq(
        'DataProperty:',
        $._data_property_iri,
        repeat(
          choice(
            seq('Annotations:', $.annotation_annotated_list),
            seq('Domain:', $.description_annotated_list),
            seq('Range:', $.data_range_annotated_list),
            seq('Characteristics:', optional($.annotations), 'Functional'),
            seq('SubPropertyOf:', $.data_property_expression_annotated_list),
            seq('EquivalentTo:', $.data_property_expression_annotated_list),
            seq('DisjointWith:', $.data_property_expression_annotated_list),
          ),
        ),
      ),

    annotation_property_frame: $ =>
      seq(
        'AnnotationProperty:',
        $._annotation_property_iri,
        repeat(
          choice(
            seq('Annotations:', $.annotation_annotated_list),
            seq('Domain:', $.iri_annotated_list),
            seq('Range:', $.iri_annotated_list),
            seq('SubPropertyOf:', $.annotation_property_iri_annotated_list),
          ),
        ),
      ),

    individual_frame: $ =>
      seq(
        'Individual:',
        $.individual,
        repeat(
          choice(
            seq('Annotations:', $.annotation_annotated_list),
            seq('Types:', $.description_annotated_list),
            seq('Facts:', $.fact_annotated_list),
            seq('SameAs:', $.individual_annotated_list),
            seq('DifferentFrom:', $.individual_annotated_list),
          ),
        ),
      ),

    fact: $ =>
      seq(
        optional('not'),
        choice($.object_property_fact, $.data_property_fact),
      ),
    object_property_fact: $ => seq($._object_property_iri, $.individual),
    data_property_fact: $ => seq($._data_property_iri, $.literal),

    misc: $ =>
      choice(
        seq('EquivalentClasses:', optional($.annotations), $.description_2list), // optional annotations is not to spec. spec wrong?
        seq('DisjointClasses:', optional($.annotations), $.description_2list),
        seq(
          'EquivalentProperties:',
          optional($.annotations),
          $.object_property_2list,
        ),
        seq(
          'DisjointProperties:',
          optional($.annotations),
          $.object_property_2list,
        ),
        seq(
          'EquivalentProperties:',
          optional($.annotations),
          $.data_property_2list,
        ),
        seq(
          'DisjointProperties:',
          optional($.annotations),
          $.data_property_2list,
        ),
        seq('SameIndividual:', optional($.annotations), $.individual_2list),
        seq(
          'DifferentIndividuals:',
          optional($.annotations),
          $.individual_2list,
        ),
      ),

    // Annotated Lists
    description_annotated_list: $ =>
      annotated_list($.annotations, $.description),
    annotation_annotated_list: $ => annotated_list($.annotations, $.annotation),
    object_property_expression_annotated_list: $ =>
      annotated_list($.annotations, $.object_property_expression),
    object_property_characteristic_annotated_list: $ =>
      annotated_list($.annotations, $.object_property_characteristic),
    data_range_annotated_list: $ => annotated_list($.annotations, $.data_range),
    data_property_expression_annotated_list: $ =>
      annotated_list($.annotations, $.data_property_expression),
    iri_annotated_list: $ => annotated_list($.annotations, $.iri),
    annotation_property_iri_annotated_list: $ =>
      annotated_list($.annotations, $._annotation_property_iri),
    individual_annotated_list: $ => annotated_list($.annotations, $.individual),
    fact_annotated_list: $ => annotated_list($.annotations, $.fact),

    // List2
    description_2list: $ => seq($.description, ',', sep1($.description, ',')),
    object_property_2list: $ =>
      seq(
        $.object_property_expression,
        ',',
        sep1($.object_property_expression, ','),
      ), // This is not correct to the grammar. Grammar is missing "objectProperty" Is the grammar wrong?
    // resolved using https://github.com/spechub/Hets/blob/master/OWL2/ParseMS.hs
    data_property_2list: $ =>
      seq(
        $.data_property_expression,
        ',',
        sep1($.data_property_expression, ','),
      ), // same as with object_property
    individual_2list: $ => seq($.individual, ',', sep1($.individual, ',')),

    // List
    individual_list: $ => sep1($.individual, ','),
    literal_list: $ => sep1($.literal, ','),

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
    _iunreserved: $ => /[A-Za-z0-9_\-\.\~:%]*/, // TODO not done
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

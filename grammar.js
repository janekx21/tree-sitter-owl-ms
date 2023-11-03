module.exports = grammar({
  name: 'owl2ms',
  conflicts: $ => [
    [$.datatype_frame],
    [$.datatype, $._atomic],
    [$._object_property_expression, $._restriction],
    [$._object_property_expression, $.data_property_2list],
    [$._object_property_expression],
  ],
  extras: $ => [/[ \t\n\r]/ /*, TODO $._line_comment*/],
  rules: {
    // My rules
    source_file: $ => seq(repeat($.prefix_declaration), $.ontology), // ontology_document
    // _line_comment: _ => token(seq('#', /.*/)), // https://github.com/tree-sitter/tree-sitter-rust/blob/master/grammar.js

    // https://www.w3.org/TR/owl2-manchester-syntax/

    // 2.1 IRIs, Integers, Literals, and Entities
    _iri: $ => choice($.full_iri, $.abbreviated_iri, $.simple_iri),
    full_iri: $ => seq('<', $._iri_rfc3987, '>'),
    abbreviated_iri: $ => $._pname_ln,
    simple_iri: $ => $._pn_local,
    prefix_name: $ => /([A-Za-z][A-Za-z0-9_\-\.]*)?:/,

    datatype: $ => choice($._iri, 'integer', 'decimal', 'float', 'string'),
    individual: $ => choice($._iri, $.node_id),
    node_id: $ => seq('_:', $._pn_local),

    non_negative_integer: $ => choice($._zero, $._positive_integer),
    _positive_integer: $ => seq($._non_zero, repeat($._digit)),
    _digits: $ => repeat1($._digit),
    _digit: $ => choice($._zero, $._non_zero),
    _non_zero: $ => /[1-9]/,
    _zero: $ => '0',

    _literal: $ =>
      choice(
        $.typed_literal,
        $.string_literal_no_language,
        $.string_literal_with_language,
        $.integer_literal,
        $.decimal_literal,
        $.floating_point_literal,
      ),

    decimal_literal: $ =>
      seq(optional(choice('+', '-')), $._digits, '.', $._digits),
    floating_point_literal: $ =>
      seq(
        optional(choice('+', '-')),
        choice(
          seq($._digits, optional(seq('.', $._digits)), optional($._exponent)),
          seq('.', $._digits, optional($._exponent)),
        ),
        choice('f', 'F'),
      ),
    integer_literal: $ => seq(optional(choice('+', '-')), $._digits),
    _exponent: $ =>
      seq(choice('e', 'E'), optional(choice('+', '-')), $._digits),
    string_literal_no_language: $ => $._quoted_string,
    string_literal_with_language: $ => seq($._quoted_string, $._language_tag),
    _quoted_string: $ => /"([^"\\]|\\\\|\\")*"/,
    _language_tag: $ => /@[a-zA-Z\-]+/, // TODO make more strict https://www.rfc-editor.org/rfc/bcp/bcp47.txt
    typed_literal: $ => seq($._lexial_value, '^^', $.datatype),
    _lexial_value: $ => $._quoted_string,

    // 2.2 Ontologies and Annotations
    prefix_declaration: $ => seq('Prefix:', $.prefix_name, $.full_iri),

    ontology: $ =>
      seq(
        'Ontology:',
        optional(seq($._iri, optional($._iri))),
        field('imports', repeat($.import)),
        field('annotations', repeat($._annotations)),
        field('frames', repeat($._frame)),
      ),

    import: $ => seq('Import:', $._iri),

    _frame: $ =>
      choice(
        $.datatype_frame,
        $.class_frame,
        $.object_property_frame,
        $.data_property_frame,
        $.annotation_property_frame,
        $.individual_frame,
        $.misc,
      ),

    _annotations: $ => seq('Annotations:', $._annotation_annotated_list),
    annotation: $ =>
      seq(field('source', $._iri), field('target', $._annotation_target)),
    _annotation_target: $ => choice($._iri, $._literal, $.node_id),

    // 2.3  Property and Datatype Expressions
    _object_property_expression: $ => seq(optional('inverse'), $._iri),

    data_range: $ => sep1($._data_conjunction, 'or'),
    _data_conjunction: $ => sep1($._data_primary, 'and'),
    _data_primary: $ => seq(optional('not'), $._data_atomic),
    _data_atomic: $ =>
      choice(
        $.datatype,
        seq('{', $._literal_list, '}'),
        $._datatype_restriction,
        seq('(', $.data_range, ')'),
      ),
    _datatype_restriction: $ =>
      seq($.datatype, '[', sep1(seq($.facet, $._literal), ','), ']'),

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

    // 2.4 Descriptions
    description: $ => sep1($._conjunction, 'or'),

    _conjunction: $ =>
      choice(
        seq(
          $._iri,
          'that',
          optional('not'),
          $._restriction,
          repeat(seq('and', optional('not'), $._restriction)),
        ),
        sep1($._primary, 'and'),
      ),

    _primary: $ => seq(optional('not'), choice($._restriction, $._atomic)),

    _restriction: $ =>
      choice(
        seq($._iri, 'some', $._primary),
        seq($._iri, 'some', $._data_primary),
        seq($._iri, 'only', $._primary),
        seq($._iri, 'only', $._data_primary),
        seq($._iri, 'Self'),
        seq($._iri, 'min', $.non_negative_integer, optional($._primary)),
        seq($._iri, 'min', $.non_negative_integer, optional($._data_primary)),
        seq($._iri, 'max', $.non_negative_integer, optional($._primary)),
        seq($._iri, 'max', $.non_negative_integer, optional($._data_primary)),
        seq($._iri, 'exactly', $.non_negative_integer, optional($._primary)),
        seq(
          $._iri,
          'exactly',
          $.non_negative_integer,
          optional($._data_primary),
        ),
        seq($._object_property_expression, 'value', $.individual),
        seq($._iri, 'value', $._literal),
      ),

    _atomic: $ =>
      choice(
        $._iri,
        seq('{', $._individual_list, '}'),
        seq('(', $.description, ')'),
      ),

    // 2.5 Frames and Miscellaneous

    datatype_frame: $ =>
      seq(
        'Datatype:',
        $.datatype,
        repeat($._annotations),
        field(
          'equivalent_to',
          optional(
            seq('EquivalentTo:', optional($._annotations), $.data_range),
          ),
        ),
        repeat($._annotations),
      ),

    class_frame: $ =>
      seq(
        'Class:',
        $._iri,
        repeat(
          choice(
            $._annotations,
            seq(
              'SubClassOf:',
              alias($._description_annotated_list, $.sub_class_of_list),
            ),
            seq(
              'EquivalentTo:',
              alias($._description_annotated_list, $.equivalent_to_list),
            ),
            seq(
              'DisjointWith:',
              alias($._description_annotated_list, $.disjoint_with_list),
            ),
            seq(
              'DisjointUnionOf:',
              optional($._annotations),
              alias($.description_2list, $.disjoint_union_of_list),
            ),
            $.has_key_list,
          ),
        ),
      ),

    has_key_list: $ =>
      seq(
        'HasKey:',
        optional($._annotations),
        repeat1($._object_property_expression),
      ),

    object_property_frame: $ =>
      seq(
        'ObjectProperty:',
        $._iri,
        repeat(
          choice(
            $._annotations,
            seq('Domain:', $._description_annotated_list),
            seq('Range:', $._description_annotated_list),
            seq('SubPropertyOf:', $._object_property_expression_annotated_list),
            seq('EquivalentTo:', $._object_property_expression_annotated_list),
            seq('DisjointWith:', $._object_property_expression_annotated_list),
            seq('InverseOf:', $._object_property_expression_annotated_list),
            seq(
              'Characteristics:',
              $.object_property_characteristic_annotated_list,
            ),
            seq(
              'SubPropertyChain:',
              optional($._annotations),
              sep1($._object_property_expression, 'o'),
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
        $._iri,
        repeat(
          choice(
            $._annotations,
            seq('Domain:', alias($._description_annotated_list, $.domain_list)),
            seq('Range:', alias($.data_range_annotated_list, $.range_list)),
            seq('Characteristics:', optional($._annotations), 'Functional'),
            seq(
              'SubPropertyOf:',
              alias($._iri_annotated_list, $.sub_property_of_list),
            ),
            seq(
              'EquivalentTo:',
              alias($._iri_annotated_list, $.equivalent_to_list),
            ),
            seq(
              'DisjointWith:',
              alias($._iri_annotated_list, $.disjoint_with_list),
            ),
          ),
        ),
      ),

    annotation_property_frame: $ =>
      seq(
        'AnnotationProperty:',
        $._iri,
        repeat(
          choice(
            $._annotations,
            seq('Domain:', $._iri_annotated_list),
            seq('Range:', $._iri_annotated_list),
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
            $._annotations,
            seq('Types:', $._description_annotated_list),
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
    object_property_fact: $ => seq($._iri, $.individual),
    data_property_fact: $ => seq($._iri, $._literal),

    misc: $ =>
      choice(
        seq(
          'EquivalentClasses:',
          optional($._annotations),
          $.description_2list,
        ), // optional annotations is not to spec. spec wrong?
        seq('DisjointClasses:', optional($._annotations), $.description_2list),
        seq(
          'EquivalentProperties:',
          optional($._annotations),
          $.object_property_2list,
        ),
        seq(
          'DisjointProperties:',
          optional($._annotations),
          $.object_property_2list,
        ),
        seq(
          'EquivalentProperties:',
          optional($._annotations),
          $.data_property_2list,
        ),
        seq(
          'DisjointProperties:',
          optional($._annotations),
          $.data_property_2list,
        ),
        seq('SameIndividual:', optional($._annotations), $.individual_2list),
        seq(
          'DifferentIndividuals:',
          optional($._annotations),
          $.individual_2list,
        ),
      ),

    // Annotated Lists
    _description_annotated_list: $ =>
      annotated_list($._annotations, $.description),
    _annotation_annotated_list: $ =>
      annotated_list($._annotations, $.annotation),
    _object_property_expression_annotated_list: $ =>
      annotated_list($._annotations, $._object_property_expression),
    object_property_characteristic_annotated_list: $ =>
      annotated_list($._annotations, $.object_property_characteristic),
    data_range_annotated_list: $ =>
      annotated_list($._annotations, $.data_range),
    _iri_annotated_list: $ => annotated_list($._annotations, $._iri),
    _iri_annotated_list: $ => annotated_list($._annotations, $._iri),
    annotation_property_iri_annotated_list: $ =>
      annotated_list($._annotations, $._iri),
    individual_annotated_list: $ =>
      annotated_list($._annotations, $.individual),
    fact_annotated_list: $ => annotated_list($._annotations, $.fact),

    // List2
    description_2list: $ => seq($.description, ',', sep1($.description, ',')),
    object_property_2list: $ =>
      seq(
        $._object_property_expression,
        ',',
        sep1($._object_property_expression, ','),
      ), // This is not correct to the grammar. Grammar is missing "objectProperty" Is the grammar wrong?
    // resolved using https://github.com/spechub/Hets/blob/master/OWL2/ParseMS.hs
    data_property_2list: $ => seq($._iri, ',', sep1($._iri, ',')), // same as with object_property
    individual_2list: $ => seq($.individual, ',', sep1($.individual, ',')),

    // List
    _individual_list: $ => sep1($.individual, ','),
    _literal_list: $ => sep1($._literal, ','),

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

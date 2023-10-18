module.exports = grammar({
  name: 'owl2manchestersyntax', // todo

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $.ontology_document,

    // https://www.w3.org/TR/owl2-manchester-syntax/
    
    // 2.1 IRIs, Integers, Literals, and Entities 
    iri: $ => choice($.full_iri, $.abbreviated_iri, $.simple_iri),
    full_iri: $ => seq('<', $._iri_rfc3987, '>'),
    abbreviated_iri: $ => $._pname_ln,
    simple_iri: $ => $._pn_local,
    prefix_name: $ => /([A-Za-z][A-Za-z0-9_\-\.]*)?:/,
    

    datatype: $ => choice($._datatype_iri, 'integer', 'decimal', 'float', 'string'),
    _datatype_iri: $ => $.iri,
    _class_iri: $ => $.iri,
    _annotation_property_iri: $ => $.iri,
    _ontology_iri: $ => $.iri,

    
    // 2.2 Ontologies and Annotations
    ontology_document: $ => seq(repeat($.prefix_declaration), $.ontology),
    ontology: $ => seq('Ontology:', optional($._ontology_iri), repeat($.frame)),
    frame: $ => choice($.datatype_frame, $.class_frame),
    prefix_declaration: $ => seq('Prefix:', $.prefix_name, $.full_iri),

    annotations: $ => seq('Annotations:', $.annotation_annotated_list),
    annotation: $ => seq($._annotation_property_iri, $.annotation_target),
    annotation_target: $ => $.iri, // todo

    // 2.4 Descriptions
    description: $ => seq($.conjunction, repeat(seq('or', $.conjunction))),
    conjunction: $ => choice(seq($._class_iri, 'that', optional('not'), $.restriction, repeat(seq('and', optional('not'), $.restriction))),
      seq($.primary, repeat(seq('and', $.primary)))
    ),
    primary: $ => seq(optional('not'), choice($.restriction, $.atomic)),
    restriction: $ => 'some', // todo
    atomic: $ => choice($._class_iri, seq('(', $.description, ')')), // todo


    // 2.5 Frames and Miscellaneous 
    datatype_frame: $ => seq('Datatype:', $.datatype),
    // , repeat(seq('Annotations:', $.annotation_annotated_list))
    class_frame: $ => seq('Class:', $._class_iri, repeat(choice(seq('SubClassOf:', $.description_annotated_list)))),


    // Annotated Lists
    // description_annotated_list: $ => seq(optional($.annotations), $.description, repeat(seq(',', optional($.annotations), $.description))),
    description_annotated_list: $ => annotated_list($.annotations, $.description),
    annotation_annotated_list: $ => prec.left(seq(optional($.annotations), $.annotation, repeat(seq(',', $.annotations)))),

    // IRI [RFC 3987]
    // todo finish
    _iri_rfc3987: $ => seq($._scheme, ':', $._ihier_part, optional($._iquery), optional($._ifragment)),
    _scheme: $ => /[A-Za-z][A-Za-z0-9+\-\.]*/,
    _ihier_part: $ => seq('//', $._iauthority, $._ipath_abempty), // todo not finished
    _iauthority: $ => seq(optional(seq($._iuserinfo, '@')), $._ihost, optional(seq(':', $._port))),
    _iuserinfo: $ => $._iunreserved, // todo not done
    _ihost: $ => $._iunreserved, // todo not done 
    _iunreserved: $ => /[A-Za-z0-9_\-\.\~]+/, // todo not done
    _port: $ => /[0-9]*/,
    _ipath_abempty: $ => repeat1(seq('/', $._isegment)),
    _isegment: $ => $._iunreserved, // todo not done
    _iquery: $ => /\?[A-Za-z0-9_\-\.\~\/\?]*/, // todo not done
    _ifragment: $ => /\#[A-Za-z0-9_\-\.\~\/\?]*/, // todo not done


    // https://www.w3.org/TR/2008/REC-rdf-sparql-query-20080115/
    // todo make more strict
    _pn_local: $ => /[A-Za-z0-9_\-\.]+/,
    _pname_ln: $ => /[A-Za-z0-9_\-\.]*:[A-Za-z0-9_\-\.]+/,
    // _pn_prefix: $ => /[A-Za-z0-9_\-\.]+/,
    // _pname_ln: $ => seq(optional($._pn_prefix), ':', $._pn_local),
  }
});

// Util Functions

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}


function annotated_list(annotations, nt){
  return sep1(seq(optional(annotations), nt), ',');
}

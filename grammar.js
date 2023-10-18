module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $.ontology_document,

    
    // 2.1 IRIs, Integers, Literals, and Entities 
    iri: $ => choice($.full_iri, $.simple_iri),
    full_iri: $ => seq('<', $.iri_rfc3987, '>'),
    simple_iri: $ => $._pn_local,
    prefix_name: $ => /([A-Za-z][A-Za-z0-9_\-\.]*)?:/,
    

    datatype: $ => choice($._datatype_iri, 'integer', 'decimal', 'float', 'string'),
    _datatype_iri: $ => $.iri,

    
    // 2.2 Ontologies and Annotations
    ontology_document: $ => seq(repeat($.prefix_declaration), $.ontology),
    ontology: $ => seq('Ontology:', repeat($.frame)),
    frame: $ => choice($.datatype_frame),
    prefix_declaration: $ => seq('Prefix:', $.prefix_name, $.full_iri),


    // 2.5 Frames and Miscellaneous 
    datatype_frame: $ => seq('Datatype:', $.datatype),
    // , repeat(seq('Annotations:', $.annotation_annotated_list))


    // IRI [RFC 3987]
    // todo finish
    iri_rfc3987: $ => seq($.scheme, ':', $.ihier_part, optional($.iquery), optional($.ifragment)),
    scheme: $ => /[A-Za-z][A-Za-z0-9+\-\.]*/,
    ihier_part: $ => seq('//', $.iauthority, $.ipath_abempty), // todo not finished
    iauthority: $ => seq(optional(seq($.iuserinfo, '@')), $.ihost, optional(seq(':', $.port))),
    iuserinfo: $ => $.iunreserved, // todo not done
    ihost: $ => $.iunreserved, // todo not done 
    iunreserved: $ => /[A-Za-z0-9_\-\.\~]+/, // todo not done
    port: $ => /[0-9]*/,
    ipath_abempty: $ => repeat1(seq('/', $.isegment)),
    isegment: $ => $.iunreserved, // todo not done
    iquery: $ => /\?[A-Za-z0-9_\-\.\~\/\?]*/, // todo not done
    ifragment: $ => /\#[A-Za-z0-9_\-\.\~\/\?]*/, // todo not done


    // https://www.w3.org/TR/2008/REC-rdf-sparql-query-20080115/
    _pn_local: $ => /[A-Za-z0-9_\-\.]+/, // todo make more strict
  }
});

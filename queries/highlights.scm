

"{" @punctuation.bracket
"}" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

"," @punctuation.delimiter
"o" @punctuation.delimiter

"integer" @keyword
"decimal" @keyword
"float" @keyword
"string" @keyword
"Ontology:" @keyword
"Import:" @keyword
"Annotations:" @keyword
"Datatype:" @keyword
"EquivalentTo:" @keyword
"Class:" @keyword
"SubClassOf:" @keyword
"EquivalentTo:" @keyword
"DisjointWith:" @keyword
"DisjointUnionOf:" @keyword
"HasKey:" @keyword
"ObjectProperty:" @keyword
"Domain:" @keyword
"Range:" @keyword
"SubPropertyOf:" @keyword
"InverseOf:" @keyword
"Characteristics:" @keyword
"SubPropertyChain:" @keyword
"DataProperty:" @keyword
"AnnotationProperty:" @keyword
"Individual:" @keyword
"Types:" @keyword
"Facts:" @keyword
"SameAs:" @keyword
"DifferentFrom:" @keyword

"EquivalentClasses:" @keyword
"DisjointClasses:" @keyword
"EquivalentProperties:" @keyword
"DisjointProperties:" @keyword
"SameIndividual:" @keyword
"DifferentIndividuals:" @keyword

"Functional" @keyword
"InverseFunctional" @keyword
"Reflexive" @keyword
"Irreflexive" @keyword
"Symmetric" @keyword
"Asymmetric" @keyword
"Transitive" @keyword

"inverse" @operator
"or" @operator
"and" @operator
"not" @operator
"length" @operator
"minLength" @operator
"maxLength" @operator
"pattern" @operator
"langRange" @operator
"<=" @operator
"<" @operator
">=" @operator
">" @operator
"that" @operator
"some" @operator
"only" @operator
"min" @operator
"max" @operator
"exactly" @operator
"value" @operator

"Self" @variable.buildin

(string_literal_no_language) @string
(string_literal_with_language) @string
(integer_literal) @number
(decimal_literal) @number
(floating_point_literal) @number
(non_negative_integer) @number
(typed_literal) @constant.builtin

(full_iri) @type
(abbreviated_iri) @type
(simple_iri) @type
(prefix_name) @type

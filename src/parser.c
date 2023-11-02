#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 961
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 214
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  sym_prefix_name = 3,
  anon_sym_integer = 4,
  anon_sym_decimal = 5,
  anon_sym_float = 6,
  anon_sym_string = 7,
  anon_sym__COLON = 8,
  sym__non_zero = 9,
  sym__zero = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  anon_sym_DOT = 13,
  anon_sym_f = 14,
  anon_sym_F = 15,
  anon_sym_e = 16,
  anon_sym_E = 17,
  sym__quoted_string = 18,
  sym__language_tag = 19,
  anon_sym_CARET_CARET = 20,
  anon_sym_Ontology_COLON = 21,
  anon_sym_Prefix_COLON = 22,
  anon_sym_Annotations_COLON = 23,
  anon_sym_inverse = 24,
  anon_sym_not = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_or = 30,
  anon_sym_and = 31,
  anon_sym_LBRACK = 32,
  anon_sym_COMMA = 33,
  anon_sym_RBRACK = 34,
  anon_sym_length = 35,
  anon_sym_minLength = 36,
  anon_sym_maxLength = 37,
  anon_sym_pattern = 38,
  anon_sym_langRange = 39,
  anon_sym_LT_EQ = 40,
  anon_sym_GT_EQ = 41,
  anon_sym_that = 42,
  anon_sym_some = 43,
  anon_sym_only = 44,
  anon_sym_Self = 45,
  anon_sym_min = 46,
  anon_sym_max = 47,
  anon_sym_exactly = 48,
  anon_sym_value = 49,
  anon_sym_Datatype_COLON = 50,
  anon_sym_EquivalentTo_COLON = 51,
  anon_sym_Class_COLON = 52,
  anon_sym_SubClassOf_COLON = 53,
  anon_sym_DisjointWith_COLON = 54,
  anon_sym_DisjointUnionOf_COLON = 55,
  anon_sym_HasKey_COLON = 56,
  anon_sym_ObjectProperty_COLON = 57,
  anon_sym_Domain_COLON = 58,
  anon_sym_Range_COLON = 59,
  anon_sym_SubPropertyOf_COLON = 60,
  anon_sym_InverseOf_COLON = 61,
  anon_sym_Characteristics_COLON = 62,
  anon_sym_SubPropertyChain_COLON = 63,
  anon_sym_o = 64,
  anon_sym_Functional = 65,
  anon_sym_InverseFunctional = 66,
  anon_sym_Reflexive = 67,
  anon_sym_Irreflexive = 68,
  anon_sym_Symmetric = 69,
  anon_sym_Asymmetric = 70,
  anon_sym_Transitive = 71,
  anon_sym_DataProperty_COLON = 72,
  anon_sym_AnnotationProperty_COLON = 73,
  anon_sym_Individual_COLON = 74,
  anon_sym_Types_COLON = 75,
  anon_sym_Facts_COLON = 76,
  anon_sym_SameAs_COLON = 77,
  anon_sym_DifferentFrom_COLON = 78,
  anon_sym_EquivalentClasses_COLON = 79,
  anon_sym_DisjointClasses_COLON = 80,
  anon_sym_EquivalentProperties_COLON = 81,
  anon_sym_DisjointProperties_COLON = 82,
  anon_sym_SameIndividual_COLON = 83,
  anon_sym_DifferentIndividuals_COLON = 84,
  anon_sym_COLON = 85,
  sym__scheme = 86,
  anon_sym_SLASH_SLASH = 87,
  anon_sym_AT = 88,
  sym__iunreserved = 89,
  sym__port = 90,
  anon_sym_SLASH = 91,
  sym__iquery = 92,
  sym__ifragment = 93,
  sym__pn_local = 94,
  sym__pname_ln = 95,
  sym_source_file = 96,
  sym_iri = 97,
  sym_full_iri = 98,
  sym_abbreviated_iri = 99,
  sym_simple_iri = 100,
  sym_datatype = 101,
  sym__datatype_iri = 102,
  sym__class_iri = 103,
  sym__annotation_property_iri = 104,
  sym__ontology_iri = 105,
  sym__data_property_iri = 106,
  sym__version_iri = 107,
  sym__object_property_iri = 108,
  sym__individual_iri = 109,
  sym_individual = 110,
  sym_node_id = 111,
  sym_non_negative_integer = 112,
  sym__positive_integer = 113,
  aux_sym__digits = 114,
  sym__digit = 115,
  sym_literal = 116,
  sym__decimal_literal = 117,
  sym__floating_point_literal = 118,
  sym__integer_literal = 119,
  sym__exponent = 120,
  sym__string_literal_no_language = 121,
  sym__string_literal_with_language = 122,
  sym__typed_literal = 123,
  sym__lexial_value = 124,
  sym_ontology_document = 125,
  sym_ontology = 126,
  sym_frame = 127,
  sym_prefix_declaration = 128,
  sym_annotations = 129,
  sym_annotation = 130,
  sym_annotation_target = 131,
  sym_object_property_expression = 132,
  sym_inverse_object_property = 133,
  sym_data_property_expression = 134,
  sym_data_primary = 135,
  sym_data_atomic = 136,
  sym_data_range = 137,
  sym_data_conjunction = 138,
  sym_datatype_restriction = 139,
  sym_facet = 140,
  sym__restriction_value = 141,
  sym_description = 142,
  sym_conjunction = 143,
  sym_primary = 144,
  sym_restriction = 145,
  sym_atomic = 146,
  sym_datatype_frame = 147,
  sym_class_frame = 148,
  sym_object_property_frame = 149,
  sym_object_property_characteristic = 150,
  sym_data_property_frame = 151,
  sym_annotation_property_frame = 152,
  sym_individual_frame = 153,
  sym_fact = 154,
  sym_object_property_fact = 155,
  sym_data_property_fact = 156,
  sym_misc = 157,
  sym_description_annotated_list = 158,
  sym_annotation_annotated_list = 159,
  sym_object_property_expression_annotated_list = 160,
  sym_object_property_characteristic_annotated_list = 161,
  sym_data_range_annotated_list = 162,
  sym_data_property_expression_annotated_list = 163,
  sym_iri_annotated_list = 164,
  sym_annotation_property_iri_annotated_list = 165,
  sym_individual_annotated_list = 166,
  sym_fact_annotated_list = 167,
  sym_description_2list = 168,
  sym_object_property_2list = 169,
  sym_data_property_2list = 170,
  sym_individual_2list = 171,
  sym_individual_list = 172,
  sym_literal_list = 173,
  sym__iri_rfc3987 = 174,
  sym__ihier_part = 175,
  sym__iauthority = 176,
  sym__iuserinfo = 177,
  sym__ihost = 178,
  aux_sym__ipath_abempty = 179,
  sym__isegment = 180,
  aux_sym__positive_integer_repeat1 = 181,
  aux_sym_ontology_document_repeat1 = 182,
  aux_sym_ontology_repeat1 = 183,
  aux_sym_ontology_repeat2 = 184,
  aux_sym_data_range_repeat1 = 185,
  aux_sym_data_conjunction_repeat1 = 186,
  aux_sym_datatype_restriction_repeat1 = 187,
  aux_sym_description_repeat1 = 188,
  aux_sym_conjunction_repeat1 = 189,
  aux_sym_conjunction_repeat2 = 190,
  aux_sym_datatype_frame_repeat1 = 191,
  aux_sym_class_frame_repeat1 = 192,
  aux_sym_class_frame_repeat2 = 193,
  aux_sym_object_property_frame_repeat1 = 194,
  aux_sym_object_property_frame_repeat2 = 195,
  aux_sym_data_property_frame_repeat1 = 196,
  aux_sym_annotation_property_frame_repeat1 = 197,
  aux_sym_individual_frame_repeat1 = 198,
  aux_sym_description_annotated_list_repeat1 = 199,
  aux_sym_annotation_annotated_list_repeat1 = 200,
  aux_sym_object_property_expression_annotated_list_repeat1 = 201,
  aux_sym_object_property_characteristic_annotated_list_repeat1 = 202,
  aux_sym_data_range_annotated_list_repeat1 = 203,
  aux_sym_data_property_expression_annotated_list_repeat1 = 204,
  aux_sym_iri_annotated_list_repeat1 = 205,
  aux_sym_annotation_property_iri_annotated_list_repeat1 = 206,
  aux_sym_individual_annotated_list_repeat1 = 207,
  aux_sym_fact_annotated_list_repeat1 = 208,
  aux_sym_description_2list_repeat1 = 209,
  aux_sym_object_property_2list_repeat1 = 210,
  aux_sym_data_property_2list_repeat1 = 211,
  aux_sym_individual_2list_repeat1 = 212,
  aux_sym_literal_list_repeat1 = 213,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_prefix_name] = "prefix_name",
  [anon_sym_integer] = "integer",
  [anon_sym_decimal] = "decimal",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym__COLON] = "_:",
  [sym__non_zero] = "_non_zero",
  [sym__zero] = "_zero",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_f] = "f",
  [anon_sym_F] = "F",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [sym__quoted_string] = "_quoted_string",
  [sym__language_tag] = "_language_tag",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_Ontology_COLON] = "Ontology:",
  [anon_sym_Prefix_COLON] = "Prefix:",
  [anon_sym_Annotations_COLON] = "Annotations:",
  [anon_sym_inverse] = "inverse",
  [anon_sym_not] = "not",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_length] = "length",
  [anon_sym_minLength] = "minLength",
  [anon_sym_maxLength] = "maxLength",
  [anon_sym_pattern] = "pattern",
  [anon_sym_langRange] = "langRange",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_that] = "that",
  [anon_sym_some] = "some",
  [anon_sym_only] = "only",
  [anon_sym_Self] = "Self",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_exactly] = "exactly",
  [anon_sym_value] = "value",
  [anon_sym_Datatype_COLON] = "Datatype:",
  [anon_sym_EquivalentTo_COLON] = "EquivalentTo:",
  [anon_sym_Class_COLON] = "Class:",
  [anon_sym_SubClassOf_COLON] = "SubClassOf:",
  [anon_sym_DisjointWith_COLON] = "DisjointWith:",
  [anon_sym_DisjointUnionOf_COLON] = "DisjointUnionOf:",
  [anon_sym_HasKey_COLON] = "HasKey:",
  [anon_sym_ObjectProperty_COLON] = "ObjectProperty:",
  [anon_sym_Domain_COLON] = "Domain:",
  [anon_sym_Range_COLON] = "Range:",
  [anon_sym_SubPropertyOf_COLON] = "SubPropertyOf:",
  [anon_sym_InverseOf_COLON] = "InverseOf:",
  [anon_sym_Characteristics_COLON] = "Characteristics:",
  [anon_sym_SubPropertyChain_COLON] = "SubPropertyChain:",
  [anon_sym_o] = "o",
  [anon_sym_Functional] = "Functional",
  [anon_sym_InverseFunctional] = "InverseFunctional",
  [anon_sym_Reflexive] = "Reflexive",
  [anon_sym_Irreflexive] = "Irreflexive",
  [anon_sym_Symmetric] = "Symmetric",
  [anon_sym_Asymmetric] = "Asymmetric",
  [anon_sym_Transitive] = "Transitive",
  [anon_sym_DataProperty_COLON] = "DataProperty:",
  [anon_sym_AnnotationProperty_COLON] = "AnnotationProperty:",
  [anon_sym_Individual_COLON] = "Individual:",
  [anon_sym_Types_COLON] = "Types:",
  [anon_sym_Facts_COLON] = "Facts:",
  [anon_sym_SameAs_COLON] = "SameAs:",
  [anon_sym_DifferentFrom_COLON] = "DifferentFrom:",
  [anon_sym_EquivalentClasses_COLON] = "EquivalentClasses:",
  [anon_sym_DisjointClasses_COLON] = "DisjointClasses:",
  [anon_sym_EquivalentProperties_COLON] = "EquivalentProperties:",
  [anon_sym_DisjointProperties_COLON] = "DisjointProperties:",
  [anon_sym_SameIndividual_COLON] = "SameIndividual:",
  [anon_sym_DifferentIndividuals_COLON] = "DifferentIndividuals:",
  [anon_sym_COLON] = ":",
  [sym__scheme] = "_scheme",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_AT] = "@",
  [sym__iunreserved] = "_iunreserved",
  [sym__port] = "_port",
  [anon_sym_SLASH] = "/",
  [sym__iquery] = "_iquery",
  [sym__ifragment] = "_ifragment",
  [sym__pn_local] = "_pn_local",
  [sym__pname_ln] = "_pname_ln",
  [sym_source_file] = "source_file",
  [sym_iri] = "iri",
  [sym_full_iri] = "full_iri",
  [sym_abbreviated_iri] = "abbreviated_iri",
  [sym_simple_iri] = "simple_iri",
  [sym_datatype] = "datatype",
  [sym__datatype_iri] = "_datatype_iri",
  [sym__class_iri] = "_class_iri",
  [sym__annotation_property_iri] = "_annotation_property_iri",
  [sym__ontology_iri] = "_ontology_iri",
  [sym__data_property_iri] = "_data_property_iri",
  [sym__version_iri] = "_version_iri",
  [sym__object_property_iri] = "_object_property_iri",
  [sym__individual_iri] = "_individual_iri",
  [sym_individual] = "individual",
  [sym_node_id] = "node_id",
  [sym_non_negative_integer] = "non_negative_integer",
  [sym__positive_integer] = "_positive_integer",
  [aux_sym__digits] = "_digits",
  [sym__digit] = "_digit",
  [sym_literal] = "literal",
  [sym__decimal_literal] = "_decimal_literal",
  [sym__floating_point_literal] = "_floating_point_literal",
  [sym__integer_literal] = "_integer_literal",
  [sym__exponent] = "_exponent",
  [sym__string_literal_no_language] = "_string_literal_no_language",
  [sym__string_literal_with_language] = "_string_literal_with_language",
  [sym__typed_literal] = "_typed_literal",
  [sym__lexial_value] = "_lexial_value",
  [sym_ontology_document] = "ontology_document",
  [sym_ontology] = "ontology",
  [sym_frame] = "frame",
  [sym_prefix_declaration] = "prefix_declaration",
  [sym_annotations] = "annotations",
  [sym_annotation] = "annotation",
  [sym_annotation_target] = "annotation_target",
  [sym_object_property_expression] = "object_property_expression",
  [sym_inverse_object_property] = "inverse_object_property",
  [sym_data_property_expression] = "data_property_expression",
  [sym_data_primary] = "data_primary",
  [sym_data_atomic] = "data_atomic",
  [sym_data_range] = "data_range",
  [sym_data_conjunction] = "data_conjunction",
  [sym_datatype_restriction] = "datatype_restriction",
  [sym_facet] = "facet",
  [sym__restriction_value] = "_restriction_value",
  [sym_description] = "description",
  [sym_conjunction] = "conjunction",
  [sym_primary] = "primary",
  [sym_restriction] = "restriction",
  [sym_atomic] = "atomic",
  [sym_datatype_frame] = "datatype_frame",
  [sym_class_frame] = "class_frame",
  [sym_object_property_frame] = "object_property_frame",
  [sym_object_property_characteristic] = "object_property_characteristic",
  [sym_data_property_frame] = "data_property_frame",
  [sym_annotation_property_frame] = "annotation_property_frame",
  [sym_individual_frame] = "individual_frame",
  [sym_fact] = "fact",
  [sym_object_property_fact] = "object_property_fact",
  [sym_data_property_fact] = "data_property_fact",
  [sym_misc] = "misc",
  [sym_description_annotated_list] = "description_annotated_list",
  [sym_annotation_annotated_list] = "annotation_annotated_list",
  [sym_object_property_expression_annotated_list] = "object_property_expression_annotated_list",
  [sym_object_property_characteristic_annotated_list] = "object_property_characteristic_annotated_list",
  [sym_data_range_annotated_list] = "data_range_annotated_list",
  [sym_data_property_expression_annotated_list] = "data_property_expression_annotated_list",
  [sym_iri_annotated_list] = "iri_annotated_list",
  [sym_annotation_property_iri_annotated_list] = "annotation_property_iri_annotated_list",
  [sym_individual_annotated_list] = "individual_annotated_list",
  [sym_fact_annotated_list] = "fact_annotated_list",
  [sym_description_2list] = "description_2list",
  [sym_object_property_2list] = "object_property_2list",
  [sym_data_property_2list] = "data_property_2list",
  [sym_individual_2list] = "individual_2list",
  [sym_individual_list] = "individual_list",
  [sym_literal_list] = "literal_list",
  [sym__iri_rfc3987] = "_iri_rfc3987",
  [sym__ihier_part] = "_ihier_part",
  [sym__iauthority] = "_iauthority",
  [sym__iuserinfo] = "_iuserinfo",
  [sym__ihost] = "_ihost",
  [aux_sym__ipath_abempty] = "_ipath_abempty",
  [sym__isegment] = "_isegment",
  [aux_sym__positive_integer_repeat1] = "_positive_integer_repeat1",
  [aux_sym_ontology_document_repeat1] = "ontology_document_repeat1",
  [aux_sym_ontology_repeat1] = "ontology_repeat1",
  [aux_sym_ontology_repeat2] = "ontology_repeat2",
  [aux_sym_data_range_repeat1] = "data_range_repeat1",
  [aux_sym_data_conjunction_repeat1] = "data_conjunction_repeat1",
  [aux_sym_datatype_restriction_repeat1] = "datatype_restriction_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_datatype_frame_repeat1] = "datatype_frame_repeat1",
  [aux_sym_class_frame_repeat1] = "class_frame_repeat1",
  [aux_sym_class_frame_repeat2] = "class_frame_repeat2",
  [aux_sym_object_property_frame_repeat1] = "object_property_frame_repeat1",
  [aux_sym_object_property_frame_repeat2] = "object_property_frame_repeat2",
  [aux_sym_data_property_frame_repeat1] = "data_property_frame_repeat1",
  [aux_sym_annotation_property_frame_repeat1] = "annotation_property_frame_repeat1",
  [aux_sym_individual_frame_repeat1] = "individual_frame_repeat1",
  [aux_sym_description_annotated_list_repeat1] = "description_annotated_list_repeat1",
  [aux_sym_annotation_annotated_list_repeat1] = "annotation_annotated_list_repeat1",
  [aux_sym_object_property_expression_annotated_list_repeat1] = "object_property_expression_annotated_list_repeat1",
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = "object_property_characteristic_annotated_list_repeat1",
  [aux_sym_data_range_annotated_list_repeat1] = "data_range_annotated_list_repeat1",
  [aux_sym_data_property_expression_annotated_list_repeat1] = "data_property_expression_annotated_list_repeat1",
  [aux_sym_iri_annotated_list_repeat1] = "iri_annotated_list_repeat1",
  [aux_sym_annotation_property_iri_annotated_list_repeat1] = "annotation_property_iri_annotated_list_repeat1",
  [aux_sym_individual_annotated_list_repeat1] = "individual_annotated_list_repeat1",
  [aux_sym_fact_annotated_list_repeat1] = "fact_annotated_list_repeat1",
  [aux_sym_description_2list_repeat1] = "description_2list_repeat1",
  [aux_sym_object_property_2list_repeat1] = "object_property_2list_repeat1",
  [aux_sym_data_property_2list_repeat1] = "data_property_2list_repeat1",
  [aux_sym_individual_2list_repeat1] = "individual_2list_repeat1",
  [aux_sym_literal_list_repeat1] = "literal_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_prefix_name] = sym_prefix_name,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym__COLON] = anon_sym__COLON,
  [sym__non_zero] = sym__non_zero,
  [sym__zero] = sym__zero,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [sym__quoted_string] = sym__quoted_string,
  [sym__language_tag] = sym__language_tag,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_Ontology_COLON] = anon_sym_Ontology_COLON,
  [anon_sym_Prefix_COLON] = anon_sym_Prefix_COLON,
  [anon_sym_Annotations_COLON] = anon_sym_Annotations_COLON,
  [anon_sym_inverse] = anon_sym_inverse,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_minLength] = anon_sym_minLength,
  [anon_sym_maxLength] = anon_sym_maxLength,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_langRange] = anon_sym_langRange,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_Self] = anon_sym_Self,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_Datatype_COLON] = anon_sym_Datatype_COLON,
  [anon_sym_EquivalentTo_COLON] = anon_sym_EquivalentTo_COLON,
  [anon_sym_Class_COLON] = anon_sym_Class_COLON,
  [anon_sym_SubClassOf_COLON] = anon_sym_SubClassOf_COLON,
  [anon_sym_DisjointWith_COLON] = anon_sym_DisjointWith_COLON,
  [anon_sym_DisjointUnionOf_COLON] = anon_sym_DisjointUnionOf_COLON,
  [anon_sym_HasKey_COLON] = anon_sym_HasKey_COLON,
  [anon_sym_ObjectProperty_COLON] = anon_sym_ObjectProperty_COLON,
  [anon_sym_Domain_COLON] = anon_sym_Domain_COLON,
  [anon_sym_Range_COLON] = anon_sym_Range_COLON,
  [anon_sym_SubPropertyOf_COLON] = anon_sym_SubPropertyOf_COLON,
  [anon_sym_InverseOf_COLON] = anon_sym_InverseOf_COLON,
  [anon_sym_Characteristics_COLON] = anon_sym_Characteristics_COLON,
  [anon_sym_SubPropertyChain_COLON] = anon_sym_SubPropertyChain_COLON,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_Functional] = anon_sym_Functional,
  [anon_sym_InverseFunctional] = anon_sym_InverseFunctional,
  [anon_sym_Reflexive] = anon_sym_Reflexive,
  [anon_sym_Irreflexive] = anon_sym_Irreflexive,
  [anon_sym_Symmetric] = anon_sym_Symmetric,
  [anon_sym_Asymmetric] = anon_sym_Asymmetric,
  [anon_sym_Transitive] = anon_sym_Transitive,
  [anon_sym_DataProperty_COLON] = anon_sym_DataProperty_COLON,
  [anon_sym_AnnotationProperty_COLON] = anon_sym_AnnotationProperty_COLON,
  [anon_sym_Individual_COLON] = anon_sym_Individual_COLON,
  [anon_sym_Types_COLON] = anon_sym_Types_COLON,
  [anon_sym_Facts_COLON] = anon_sym_Facts_COLON,
  [anon_sym_SameAs_COLON] = anon_sym_SameAs_COLON,
  [anon_sym_DifferentFrom_COLON] = anon_sym_DifferentFrom_COLON,
  [anon_sym_EquivalentClasses_COLON] = anon_sym_EquivalentClasses_COLON,
  [anon_sym_DisjointClasses_COLON] = anon_sym_DisjointClasses_COLON,
  [anon_sym_EquivalentProperties_COLON] = anon_sym_EquivalentProperties_COLON,
  [anon_sym_DisjointProperties_COLON] = anon_sym_DisjointProperties_COLON,
  [anon_sym_SameIndividual_COLON] = anon_sym_SameIndividual_COLON,
  [anon_sym_DifferentIndividuals_COLON] = anon_sym_DifferentIndividuals_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__scheme] = sym__scheme,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_AT] = anon_sym_AT,
  [sym__iunreserved] = sym__iunreserved,
  [sym__port] = sym__port,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym__iquery] = sym__iquery,
  [sym__ifragment] = sym__ifragment,
  [sym__pn_local] = sym__pn_local,
  [sym__pname_ln] = sym__pname_ln,
  [sym_source_file] = sym_source_file,
  [sym_iri] = sym_iri,
  [sym_full_iri] = sym_full_iri,
  [sym_abbreviated_iri] = sym_abbreviated_iri,
  [sym_simple_iri] = sym_simple_iri,
  [sym_datatype] = sym_datatype,
  [sym__datatype_iri] = sym__datatype_iri,
  [sym__class_iri] = sym__class_iri,
  [sym__annotation_property_iri] = sym__annotation_property_iri,
  [sym__ontology_iri] = sym__ontology_iri,
  [sym__data_property_iri] = sym__data_property_iri,
  [sym__version_iri] = sym__version_iri,
  [sym__object_property_iri] = sym__object_property_iri,
  [sym__individual_iri] = sym__individual_iri,
  [sym_individual] = sym_individual,
  [sym_node_id] = sym_node_id,
  [sym_non_negative_integer] = sym_non_negative_integer,
  [sym__positive_integer] = sym__positive_integer,
  [aux_sym__digits] = aux_sym__digits,
  [sym__digit] = sym__digit,
  [sym_literal] = sym_literal,
  [sym__decimal_literal] = sym__decimal_literal,
  [sym__floating_point_literal] = sym__floating_point_literal,
  [sym__integer_literal] = sym__integer_literal,
  [sym__exponent] = sym__exponent,
  [sym__string_literal_no_language] = sym__string_literal_no_language,
  [sym__string_literal_with_language] = sym__string_literal_with_language,
  [sym__typed_literal] = sym__typed_literal,
  [sym__lexial_value] = sym__lexial_value,
  [sym_ontology_document] = sym_ontology_document,
  [sym_ontology] = sym_ontology,
  [sym_frame] = sym_frame,
  [sym_prefix_declaration] = sym_prefix_declaration,
  [sym_annotations] = sym_annotations,
  [sym_annotation] = sym_annotation,
  [sym_annotation_target] = sym_annotation_target,
  [sym_object_property_expression] = sym_object_property_expression,
  [sym_inverse_object_property] = sym_inverse_object_property,
  [sym_data_property_expression] = sym_data_property_expression,
  [sym_data_primary] = sym_data_primary,
  [sym_data_atomic] = sym_data_atomic,
  [sym_data_range] = sym_data_range,
  [sym_data_conjunction] = sym_data_conjunction,
  [sym_datatype_restriction] = sym_datatype_restriction,
  [sym_facet] = sym_facet,
  [sym__restriction_value] = sym__restriction_value,
  [sym_description] = sym_description,
  [sym_conjunction] = sym_conjunction,
  [sym_primary] = sym_primary,
  [sym_restriction] = sym_restriction,
  [sym_atomic] = sym_atomic,
  [sym_datatype_frame] = sym_datatype_frame,
  [sym_class_frame] = sym_class_frame,
  [sym_object_property_frame] = sym_object_property_frame,
  [sym_object_property_characteristic] = sym_object_property_characteristic,
  [sym_data_property_frame] = sym_data_property_frame,
  [sym_annotation_property_frame] = sym_annotation_property_frame,
  [sym_individual_frame] = sym_individual_frame,
  [sym_fact] = sym_fact,
  [sym_object_property_fact] = sym_object_property_fact,
  [sym_data_property_fact] = sym_data_property_fact,
  [sym_misc] = sym_misc,
  [sym_description_annotated_list] = sym_description_annotated_list,
  [sym_annotation_annotated_list] = sym_annotation_annotated_list,
  [sym_object_property_expression_annotated_list] = sym_object_property_expression_annotated_list,
  [sym_object_property_characteristic_annotated_list] = sym_object_property_characteristic_annotated_list,
  [sym_data_range_annotated_list] = sym_data_range_annotated_list,
  [sym_data_property_expression_annotated_list] = sym_data_property_expression_annotated_list,
  [sym_iri_annotated_list] = sym_iri_annotated_list,
  [sym_annotation_property_iri_annotated_list] = sym_annotation_property_iri_annotated_list,
  [sym_individual_annotated_list] = sym_individual_annotated_list,
  [sym_fact_annotated_list] = sym_fact_annotated_list,
  [sym_description_2list] = sym_description_2list,
  [sym_object_property_2list] = sym_object_property_2list,
  [sym_data_property_2list] = sym_data_property_2list,
  [sym_individual_2list] = sym_individual_2list,
  [sym_individual_list] = sym_individual_list,
  [sym_literal_list] = sym_literal_list,
  [sym__iri_rfc3987] = sym__iri_rfc3987,
  [sym__ihier_part] = sym__ihier_part,
  [sym__iauthority] = sym__iauthority,
  [sym__iuserinfo] = sym__iuserinfo,
  [sym__ihost] = sym__ihost,
  [aux_sym__ipath_abempty] = aux_sym__ipath_abempty,
  [sym__isegment] = sym__isegment,
  [aux_sym__positive_integer_repeat1] = aux_sym__positive_integer_repeat1,
  [aux_sym_ontology_document_repeat1] = aux_sym_ontology_document_repeat1,
  [aux_sym_ontology_repeat1] = aux_sym_ontology_repeat1,
  [aux_sym_ontology_repeat2] = aux_sym_ontology_repeat2,
  [aux_sym_data_range_repeat1] = aux_sym_data_range_repeat1,
  [aux_sym_data_conjunction_repeat1] = aux_sym_data_conjunction_repeat1,
  [aux_sym_datatype_restriction_repeat1] = aux_sym_datatype_restriction_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_datatype_frame_repeat1] = aux_sym_datatype_frame_repeat1,
  [aux_sym_class_frame_repeat1] = aux_sym_class_frame_repeat1,
  [aux_sym_class_frame_repeat2] = aux_sym_class_frame_repeat2,
  [aux_sym_object_property_frame_repeat1] = aux_sym_object_property_frame_repeat1,
  [aux_sym_object_property_frame_repeat2] = aux_sym_object_property_frame_repeat2,
  [aux_sym_data_property_frame_repeat1] = aux_sym_data_property_frame_repeat1,
  [aux_sym_annotation_property_frame_repeat1] = aux_sym_annotation_property_frame_repeat1,
  [aux_sym_individual_frame_repeat1] = aux_sym_individual_frame_repeat1,
  [aux_sym_description_annotated_list_repeat1] = aux_sym_description_annotated_list_repeat1,
  [aux_sym_annotation_annotated_list_repeat1] = aux_sym_annotation_annotated_list_repeat1,
  [aux_sym_object_property_expression_annotated_list_repeat1] = aux_sym_object_property_expression_annotated_list_repeat1,
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = aux_sym_object_property_characteristic_annotated_list_repeat1,
  [aux_sym_data_range_annotated_list_repeat1] = aux_sym_data_range_annotated_list_repeat1,
  [aux_sym_data_property_expression_annotated_list_repeat1] = aux_sym_data_property_expression_annotated_list_repeat1,
  [aux_sym_iri_annotated_list_repeat1] = aux_sym_iri_annotated_list_repeat1,
  [aux_sym_annotation_property_iri_annotated_list_repeat1] = aux_sym_annotation_property_iri_annotated_list_repeat1,
  [aux_sym_individual_annotated_list_repeat1] = aux_sym_individual_annotated_list_repeat1,
  [aux_sym_fact_annotated_list_repeat1] = aux_sym_fact_annotated_list_repeat1,
  [aux_sym_description_2list_repeat1] = aux_sym_description_2list_repeat1,
  [aux_sym_object_property_2list_repeat1] = aux_sym_object_property_2list_repeat1,
  [aux_sym_data_property_2list_repeat1] = aux_sym_data_property_2list_repeat1,
  [aux_sym_individual_2list_repeat1] = aux_sym_individual_2list_repeat1,
  [aux_sym_literal_list_repeat1] = aux_sym_literal_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_prefix_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__non_zero] = {
    .visible = false,
    .named = true,
  },
  [sym__zero] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__language_tag] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ontology_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prefix_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Annotations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minLength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxLength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_langRange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Datatype_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EquivalentTo_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Class_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SubClassOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DisjointWith_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DisjointUnionOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HasKey_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ObjectProperty_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Domain_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Range_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SubPropertyOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InverseOf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Characteristics_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SubPropertyChain_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Functional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InverseFunctional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Reflexive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Irreflexive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Symmetric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Asymmetric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Transitive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DataProperty_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AnnotationProperty_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Individual_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Types_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Facts_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SameAs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DifferentFrom_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EquivalentClasses_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DisjointClasses_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EquivalentProperties_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DisjointProperties_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SameIndividual_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DifferentIndividuals_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__scheme] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__iunreserved] = {
    .visible = false,
    .named = true,
  },
  [sym__port] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__iquery] = {
    .visible = false,
    .named = true,
  },
  [sym__ifragment] = {
    .visible = false,
    .named = true,
  },
  [sym__pn_local] = {
    .visible = false,
    .named = true,
  },
  [sym__pname_ln] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_full_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_abbreviated_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym__datatype_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__class_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__annotation_property_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__ontology_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__data_property_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__version_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__object_property_iri] = {
    .visible = false,
    .named = true,
  },
  [sym__individual_iri] = {
    .visible = false,
    .named = true,
  },
  [sym_individual] = {
    .visible = true,
    .named = true,
  },
  [sym_node_id] = {
    .visible = true,
    .named = true,
  },
  [sym_non_negative_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__positive_integer] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__digits] = {
    .visible = false,
    .named = false,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__floating_point_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__exponent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_no_language] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_with_language] = {
    .visible = false,
    .named = true,
  },
  [sym__typed_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__lexial_value] = {
    .visible = false,
    .named = true,
  },
  [sym_ontology_document] = {
    .visible = true,
    .named = true,
  },
  [sym_ontology] = {
    .visible = true,
    .named = true,
  },
  [sym_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_target] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inverse_object_property] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_data_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_data_atomic] = {
    .visible = true,
    .named = true,
  },
  [sym_data_range] = {
    .visible = true,
    .named = true,
  },
  [sym_data_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_facet] = {
    .visible = true,
    .named = true,
  },
  [sym__restriction_value] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_class_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_characteristic] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_property_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_individual_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_misc] = {
    .visible = true,
    .named = true,
  },
  [sym_description_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_expression_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_characteristic_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_data_range_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_expression_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_iri_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_property_iri_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_individual_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_description_2list] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_2list] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_2list] = {
    .visible = true,
    .named = true,
  },
  [sym_individual_2list] = {
    .visible = true,
    .named = true,
  },
  [sym_individual_list] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_list] = {
    .visible = true,
    .named = true,
  },
  [sym__iri_rfc3987] = {
    .visible = false,
    .named = true,
  },
  [sym__ihier_part] = {
    .visible = false,
    .named = true,
  },
  [sym__iauthority] = {
    .visible = false,
    .named = true,
  },
  [sym__iuserinfo] = {
    .visible = false,
    .named = true,
  },
  [sym__ihost] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__ipath_abempty] = {
    .visible = false,
    .named = false,
  },
  [sym__isegment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__positive_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ontology_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ontology_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ontology_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_range_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datatype_restriction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datatype_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_frame_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_frame_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_property_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_property_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_individual_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_expression_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_range_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_property_expression_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_iri_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_property_iri_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_individual_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fact_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_2list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_property_2list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_property_2list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_individual_2list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 2,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 2,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 26,
  [33] = 29,
  [34] = 28,
  [35] = 28,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 29,
  [40] = 40,
  [41] = 26,
  [42] = 29,
  [43] = 43,
  [44] = 28,
  [45] = 26,
  [46] = 46,
  [47] = 47,
  [48] = 43,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 43,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 2,
  [72] = 72,
  [73] = 73,
  [74] = 43,
  [75] = 26,
  [76] = 24,
  [77] = 28,
  [78] = 29,
  [79] = 25,
  [80] = 80,
  [81] = 31,
  [82] = 27,
  [83] = 83,
  [84] = 30,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 86,
  [89] = 86,
  [90] = 86,
  [91] = 86,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 43,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 99,
  [102] = 99,
  [103] = 103,
  [104] = 103,
  [105] = 99,
  [106] = 106,
  [107] = 107,
  [108] = 99,
  [109] = 99,
  [110] = 110,
  [111] = 99,
  [112] = 112,
  [113] = 103,
  [114] = 99,
  [115] = 115,
  [116] = 99,
  [117] = 117,
  [118] = 103,
  [119] = 119,
  [120] = 103,
  [121] = 121,
  [122] = 103,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 121,
  [148] = 100,
  [149] = 149,
  [150] = 117,
  [151] = 110,
  [152] = 152,
  [153] = 153,
  [154] = 145,
  [155] = 155,
  [156] = 145,
  [157] = 157,
  [158] = 158,
  [159] = 107,
  [160] = 160,
  [161] = 106,
  [162] = 162,
  [163] = 163,
  [164] = 112,
  [165] = 115,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 119,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 145,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 7,
  [181] = 110,
  [182] = 182,
  [183] = 183,
  [184] = 9,
  [185] = 4,
  [186] = 106,
  [187] = 8,
  [188] = 8,
  [189] = 9,
  [190] = 190,
  [191] = 107,
  [192] = 112,
  [193] = 115,
  [194] = 194,
  [195] = 125,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 137,
  [203] = 203,
  [204] = 7,
  [205] = 119,
  [206] = 206,
  [207] = 92,
  [208] = 126,
  [209] = 117,
  [210] = 131,
  [211] = 211,
  [212] = 212,
  [213] = 128,
  [214] = 4,
  [215] = 215,
  [216] = 100,
  [217] = 121,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 158,
  [222] = 146,
  [223] = 223,
  [224] = 106,
  [225] = 225,
  [226] = 107,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 225,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 229,
  [236] = 128,
  [237] = 112,
  [238] = 119,
  [239] = 220,
  [240] = 232,
  [241] = 121,
  [242] = 110,
  [243] = 125,
  [244] = 170,
  [245] = 225,
  [246] = 246,
  [247] = 117,
  [248] = 248,
  [249] = 115,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 100,
  [254] = 232,
  [255] = 225,
  [256] = 178,
  [257] = 257,
  [258] = 155,
  [259] = 259,
  [260] = 137,
  [261] = 261,
  [262] = 232,
  [263] = 263,
  [264] = 264,
  [265] = 24,
  [266] = 266,
  [267] = 267,
  [268] = 158,
  [269] = 155,
  [270] = 270,
  [271] = 271,
  [272] = 270,
  [273] = 273,
  [274] = 146,
  [275] = 125,
  [276] = 170,
  [277] = 178,
  [278] = 278,
  [279] = 270,
  [280] = 270,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 270,
  [288] = 288,
  [289] = 289,
  [290] = 137,
  [291] = 291,
  [292] = 25,
  [293] = 128,
  [294] = 270,
  [295] = 295,
  [296] = 93,
  [297] = 178,
  [298] = 298,
  [299] = 299,
  [300] = 98,
  [301] = 97,
  [302] = 95,
  [303] = 303,
  [304] = 31,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 155,
  [314] = 158,
  [315] = 315,
  [316] = 27,
  [317] = 317,
  [318] = 318,
  [319] = 309,
  [320] = 320,
  [321] = 309,
  [322] = 4,
  [323] = 8,
  [324] = 170,
  [325] = 94,
  [326] = 326,
  [327] = 309,
  [328] = 9,
  [329] = 7,
  [330] = 330,
  [331] = 146,
  [332] = 332,
  [333] = 309,
  [334] = 309,
  [335] = 30,
  [336] = 336,
  [337] = 26,
  [338] = 29,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 30,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 28,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 364,
  [367] = 364,
  [368] = 364,
  [369] = 369,
  [370] = 24,
  [371] = 371,
  [372] = 372,
  [373] = 364,
  [374] = 374,
  [375] = 375,
  [376] = 24,
  [377] = 25,
  [378] = 25,
  [379] = 379,
  [380] = 380,
  [381] = 364,
  [382] = 100,
  [383] = 30,
  [384] = 115,
  [385] = 385,
  [386] = 30,
  [387] = 31,
  [388] = 106,
  [389] = 112,
  [390] = 390,
  [391] = 119,
  [392] = 392,
  [393] = 393,
  [394] = 31,
  [395] = 27,
  [396] = 110,
  [397] = 397,
  [398] = 121,
  [399] = 117,
  [400] = 400,
  [401] = 107,
  [402] = 27,
  [403] = 30,
  [404] = 404,
  [405] = 128,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 125,
  [410] = 410,
  [411] = 411,
  [412] = 137,
  [413] = 406,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 24,
  [419] = 24,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 424,
  [426] = 426,
  [427] = 25,
  [428] = 25,
  [429] = 429,
  [430] = 430,
  [431] = 273,
  [432] = 422,
  [433] = 424,
  [434] = 25,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 424,
  [439] = 424,
  [440] = 424,
  [441] = 422,
  [442] = 442,
  [443] = 271,
  [444] = 422,
  [445] = 43,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 285,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 422,
  [456] = 422,
  [457] = 457,
  [458] = 24,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 27,
  [463] = 31,
  [464] = 464,
  [465] = 30,
  [466] = 466,
  [467] = 467,
  [468] = 459,
  [469] = 27,
  [470] = 31,
  [471] = 460,
  [472] = 460,
  [473] = 31,
  [474] = 459,
  [475] = 475,
  [476] = 476,
  [477] = 459,
  [478] = 30,
  [479] = 27,
  [480] = 460,
  [481] = 25,
  [482] = 460,
  [483] = 24,
  [484] = 459,
  [485] = 459,
  [486] = 460,
  [487] = 30,
  [488] = 488,
  [489] = 27,
  [490] = 490,
  [491] = 31,
  [492] = 492,
  [493] = 492,
  [494] = 494,
  [495] = 492,
  [496] = 30,
  [497] = 492,
  [498] = 498,
  [499] = 30,
  [500] = 492,
  [501] = 492,
  [502] = 502,
  [503] = 11,
  [504] = 504,
  [505] = 492,
  [506] = 492,
  [507] = 507,
  [508] = 30,
  [509] = 509,
  [510] = 30,
  [511] = 511,
  [512] = 95,
  [513] = 513,
  [514] = 513,
  [515] = 513,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 93,
  [522] = 522,
  [523] = 30,
  [524] = 513,
  [525] = 513,
  [526] = 526,
  [527] = 94,
  [528] = 513,
  [529] = 529,
  [530] = 530,
  [531] = 513,
  [532] = 513,
  [533] = 97,
  [534] = 98,
  [535] = 535,
  [536] = 536,
  [537] = 9,
  [538] = 7,
  [539] = 539,
  [540] = 540,
  [541] = 536,
  [542] = 4,
  [543] = 536,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 536,
  [551] = 551,
  [552] = 546,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 536,
  [558] = 15,
  [559] = 16,
  [560] = 38,
  [561] = 561,
  [562] = 536,
  [563] = 536,
  [564] = 8,
  [565] = 13,
  [566] = 566,
  [567] = 40,
  [568] = 21,
  [569] = 569,
  [570] = 536,
  [571] = 12,
  [572] = 536,
  [573] = 14,
  [574] = 19,
  [575] = 37,
  [576] = 17,
  [577] = 20,
  [578] = 36,
  [579] = 22,
  [580] = 157,
  [581] = 8,
  [582] = 4,
  [583] = 9,
  [584] = 7,
  [585] = 585,
  [586] = 289,
  [587] = 11,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 97,
  [595] = 98,
  [596] = 593,
  [597] = 593,
  [598] = 598,
  [599] = 599,
  [600] = 94,
  [601] = 95,
  [602] = 593,
  [603] = 592,
  [604] = 599,
  [605] = 605,
  [606] = 592,
  [607] = 599,
  [608] = 598,
  [609] = 609,
  [610] = 593,
  [611] = 592,
  [612] = 599,
  [613] = 598,
  [614] = 598,
  [615] = 615,
  [616] = 93,
  [617] = 593,
  [618] = 618,
  [619] = 592,
  [620] = 599,
  [621] = 94,
  [622] = 598,
  [623] = 93,
  [624] = 98,
  [625] = 97,
  [626] = 95,
  [627] = 627,
  [628] = 593,
  [629] = 592,
  [630] = 599,
  [631] = 593,
  [632] = 599,
  [633] = 593,
  [634] = 598,
  [635] = 599,
  [636] = 592,
  [637] = 599,
  [638] = 598,
  [639] = 639,
  [640] = 7,
  [641] = 639,
  [642] = 642,
  [643] = 643,
  [644] = 37,
  [645] = 645,
  [646] = 38,
  [647] = 4,
  [648] = 14,
  [649] = 649,
  [650] = 21,
  [651] = 639,
  [652] = 8,
  [653] = 12,
  [654] = 9,
  [655] = 655,
  [656] = 656,
  [657] = 17,
  [658] = 36,
  [659] = 19,
  [660] = 22,
  [661] = 40,
  [662] = 662,
  [663] = 663,
  [664] = 639,
  [665] = 20,
  [666] = 15,
  [667] = 16,
  [668] = 13,
  [669] = 669,
  [670] = 669,
  [671] = 157,
  [672] = 672,
  [673] = 289,
  [674] = 669,
  [675] = 11,
  [676] = 669,
  [677] = 669,
  [678] = 11,
  [679] = 11,
  [680] = 680,
  [681] = 669,
  [682] = 93,
  [683] = 95,
  [684] = 95,
  [685] = 94,
  [686] = 686,
  [687] = 687,
  [688] = 97,
  [689] = 11,
  [690] = 93,
  [691] = 93,
  [692] = 95,
  [693] = 94,
  [694] = 98,
  [695] = 97,
  [696] = 98,
  [697] = 697,
  [698] = 97,
  [699] = 98,
  [700] = 700,
  [701] = 94,
  [702] = 9,
  [703] = 703,
  [704] = 20,
  [705] = 37,
  [706] = 706,
  [707] = 119,
  [708] = 121,
  [709] = 12,
  [710] = 112,
  [711] = 13,
  [712] = 712,
  [713] = 40,
  [714] = 7,
  [715] = 22,
  [716] = 14,
  [717] = 706,
  [718] = 9,
  [719] = 110,
  [720] = 8,
  [721] = 17,
  [722] = 706,
  [723] = 19,
  [724] = 8,
  [725] = 117,
  [726] = 706,
  [727] = 107,
  [728] = 106,
  [729] = 40,
  [730] = 706,
  [731] = 4,
  [732] = 38,
  [733] = 7,
  [734] = 13,
  [735] = 15,
  [736] = 38,
  [737] = 16,
  [738] = 36,
  [739] = 15,
  [740] = 14,
  [741] = 16,
  [742] = 742,
  [743] = 22,
  [744] = 706,
  [745] = 93,
  [746] = 21,
  [747] = 706,
  [748] = 12,
  [749] = 17,
  [750] = 40,
  [751] = 706,
  [752] = 94,
  [753] = 95,
  [754] = 19,
  [755] = 13,
  [756] = 37,
  [757] = 38,
  [758] = 20,
  [759] = 36,
  [760] = 19,
  [761] = 16,
  [762] = 97,
  [763] = 36,
  [764] = 15,
  [765] = 20,
  [766] = 4,
  [767] = 7,
  [768] = 14,
  [769] = 12,
  [770] = 4,
  [771] = 9,
  [772] = 115,
  [773] = 21,
  [774] = 706,
  [775] = 22,
  [776] = 17,
  [777] = 37,
  [778] = 21,
  [779] = 8,
  [780] = 98,
  [781] = 100,
  [782] = 21,
  [783] = 783,
  [784] = 784,
  [785] = 14,
  [786] = 786,
  [787] = 125,
  [788] = 788,
  [789] = 789,
  [790] = 4,
  [791] = 788,
  [792] = 786,
  [793] = 289,
  [794] = 40,
  [795] = 783,
  [796] = 789,
  [797] = 784,
  [798] = 783,
  [799] = 38,
  [800] = 13,
  [801] = 784,
  [802] = 789,
  [803] = 786,
  [804] = 789,
  [805] = 784,
  [806] = 784,
  [807] = 19,
  [808] = 783,
  [809] = 789,
  [810] = 786,
  [811] = 811,
  [812] = 788,
  [813] = 8,
  [814] = 17,
  [815] = 22,
  [816] = 16,
  [817] = 789,
  [818] = 289,
  [819] = 36,
  [820] = 20,
  [821] = 784,
  [822] = 37,
  [823] = 15,
  [824] = 786,
  [825] = 784,
  [826] = 12,
  [827] = 9,
  [828] = 789,
  [829] = 786,
  [830] = 783,
  [831] = 7,
  [832] = 832,
  [833] = 789,
  [834] = 834,
  [835] = 835,
  [836] = 289,
  [837] = 137,
  [838] = 788,
  [839] = 788,
  [840] = 786,
  [841] = 783,
  [842] = 784,
  [843] = 784,
  [844] = 789,
  [845] = 783,
  [846] = 128,
  [847] = 788,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 289,
  [857] = 857,
  [858] = 858,
  [859] = 447,
  [860] = 860,
  [861] = 861,
  [862] = 862,
  [863] = 863,
  [864] = 864,
  [865] = 865,
  [866] = 865,
  [867] = 865,
  [868] = 868,
  [869] = 869,
  [870] = 870,
  [871] = 871,
  [872] = 862,
  [873] = 873,
  [874] = 874,
  [875] = 863,
  [876] = 862,
  [877] = 868,
  [878] = 869,
  [879] = 865,
  [880] = 862,
  [881] = 869,
  [882] = 882,
  [883] = 883,
  [884] = 863,
  [885] = 885,
  [886] = 865,
  [887] = 868,
  [888] = 869,
  [889] = 889,
  [890] = 862,
  [891] = 863,
  [892] = 862,
  [893] = 869,
  [894] = 868,
  [895] = 863,
  [896] = 868,
  [897] = 869,
  [898] = 863,
  [899] = 862,
  [900] = 865,
  [901] = 869,
  [902] = 868,
  [903] = 865,
  [904] = 868,
  [905] = 865,
  [906] = 865,
  [907] = 865,
  [908] = 865,
  [909] = 863,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 911,
  [916] = 912,
  [917] = 913,
  [918] = 912,
  [919] = 911,
  [920] = 913,
  [921] = 921,
  [922] = 922,
  [923] = 911,
  [924] = 913,
  [925] = 925,
  [926] = 926,
  [927] = 913,
  [928] = 912,
  [929] = 913,
  [930] = 911,
  [931] = 931,
  [932] = 911,
  [933] = 911,
  [934] = 934,
  [935] = 935,
  [936] = 936,
  [937] = 911,
  [938] = 911,
  [939] = 939,
  [940] = 940,
  [941] = 941,
  [942] = 913,
  [943] = 912,
  [944] = 912,
  [945] = 911,
  [946] = 911,
  [947] = 947,
  [948] = 948,
  [949] = 949,
  [950] = 950,
  [951] = 951,
  [952] = 952,
  [953] = 953,
  [954] = 913,
  [955] = 939,
  [956] = 956,
  [957] = 912,
  [958] = 958,
  [959] = 959,
  [960] = 960,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(509);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(660);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == '+') ADVANCE(529);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '-') ADVANCE(530);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(658);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == ':') ADVANCE(651);
      if (lookahead == '<') ADVANCE(511);
      if (lookahead == '>') ADVANCE(513);
      if (lookahead == '?') ADVANCE(659);
      if (lookahead == '@') ADVANCE(654);
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(227);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'H') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(293);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(364);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(368);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead == ']') ADVANCE(571);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'f') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '}') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '+') ADVANCE(529);
      if (lookahead == '-') ADVANCE(531);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '_') ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(550);
      if (lookahead == '\\') ADVANCE(489);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '@') ADVANCE(492);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '@') ADVANCE(492);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '@') ADVANCE(492);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'A') ADVANCE(393);
      if (lookahead == 'E') ADVANCE(546);
      if (lookahead == 'F') ADVANCE(542);
      if (lookahead == 'I') ADVANCE(307);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(481);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == '_') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 19:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 20:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 21:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == '_') ADVANCE(1010);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 23:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 24:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 26:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '@') ADVANCE(492);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == '_') ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 27:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '@') ADVANCE(492);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 28:
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '@') ADVANCE(492);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(653);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(523);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(593);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(633);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(607);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(631);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(605);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(601);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(554);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(635);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(589);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(553);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(611);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(629);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(595);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(555);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(625);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(597);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(591);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(637);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(609);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(603);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(647);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(613);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(641);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(599);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(615);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(639);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(627);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(645);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(649);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(643);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == '_') ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(849);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(401);
      if (lookahead == 'I') ADVANCE(304);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(276);
      if (lookahead == 'P') ADVANCE(369);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(230);
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(277);
      if (lookahead == 'P') ADVANCE(390);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(277);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == 'U') ADVANCE(326);
      if (lookahead == 'W') ADVANCE(246);
      END_STATE();
    case 72:
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == 'P') ADVANCE(392);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == 'P') ADVANCE(392);
      if (lookahead == 'T') ADVANCE(339);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(459);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(459);
      if (lookahead == 'O') ADVANCE(208);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(371);
      if (lookahead == 'I') ADVANCE(329);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(304);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(329);
      END_STATE();
    case 79:
      if (lookahead == 'K') ADVANCE(164);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 81:
      if (lookahead == 'L') ADVANCE(180);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(208);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(209);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 85:
      if (lookahead == 'P') ADVANCE(387);
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(389);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(391);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 89:
      if (lookahead == '^') ADVANCE(552);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(622);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(196);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 202:
      if (lookahead == 'f') ADVANCE(582);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 207:
      if (lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 208:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 209:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(425);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(427);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(483);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(572);
      END_STATE();
    case 225:
      if (lookahead == 'h') ADVANCE(574);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(573);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 261:
      if (lookahead == 'j') ADVANCE(346);
      END_STATE();
    case 262:
      if (lookahead == 'j') ADVANCE(184);
      END_STATE();
    case 263:
      if (lookahead == 'j') ADVANCE(347);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 's') ADVANCE(488);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 361:
      if (lookahead == 'q') ADVANCE(454);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(488);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(191);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 454:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 461:
      if (lookahead == 'v') ADVANCE(232);
      END_STATE();
    case 462:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 463:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 464:
      if (lookahead == 'v') ADVANCE(159);
      END_STATE();
    case 465:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 466:
      if (lookahead == 'v') ADVANCE(254);
      END_STATE();
    case 467:
      if (lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 468:
      if (lookahead == 'v') ADVANCE(198);
      END_STATE();
    case 469:
      if (lookahead == 'v') ADVANCE(127);
      END_STATE();
    case 470:
      if (lookahead == 'x') ADVANCE(586);
      END_STATE();
    case 471:
      if (lookahead == 'x') ADVANCE(585);
      END_STATE();
    case 472:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 473:
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 474:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 475:
      if (lookahead == 'x') ADVANCE(236);
      END_STATE();
    case 476:
      if (lookahead == 'x') ADVANCE(250);
      END_STATE();
    case 477:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 478:
      if (lookahead == 'y') ADVANCE(587);
      END_STATE();
    case 479:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 480:
      if (lookahead == 'y') ADVANCE(581);
      END_STATE();
    case 481:
      if (lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 482:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 483:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 484:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 485:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 486:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 487:
      if (lookahead == 'y') ADVANCE(354);
      END_STATE();
    case 488:
      if (lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 489:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 490:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(490)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 491:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(491)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1011);
      END_STATE();
    case 492:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 493:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 494:
      if (eof) ADVANCE(509);
      if (lookahead == '#') ADVANCE(660);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == '>') ADVANCE(512);
      if (lookahead == '?') ADVANCE(659);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(776);
      if (lookahead == 'D') ADVANCE(686);
      if (lookahead == 'E') ADVANCE(883);
      if (lookahead == 'I') ADVANCE(823);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'R') ADVANCE(698);
      if (lookahead == 'S') ADVANCE(690);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(494)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 495:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(776);
      if (lookahead == 'D') ADVANCE(686);
      if (lookahead == 'E') ADVANCE(883);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'R') ADVANCE(698);
      if (lookahead == 'S') ADVANCE(692);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(495)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 496:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(776);
      if (lookahead == 'D') ADVANCE(686);
      if (lookahead == 'E') ADVANCE(883);
      if (lookahead == 'I') ADVANCE(823);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'R') ADVANCE(698);
      if (lookahead == 'S') ADVANCE(690);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(496)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 497:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(776);
      if (lookahead == 'D') ADVANCE(686);
      if (lookahead == 'E') ADVANCE(883);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'R') ADVANCE(698);
      if (lookahead == 'S') ADVANCE(692);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(497)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 498:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == 'D') ADVANCE(688);
      if (lookahead == 'E') ADVANCE(883);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(691);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(498)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 499:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == 'D') ADVANCE(687);
      if (lookahead == 'E') ADVANCE(884);
      if (lookahead == 'F') ADVANCE(709);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == 'T') ADVANCE(979);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(499)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 500:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == 'D') ADVANCE(689);
      if (lookahead == 'E') ADVANCE(884);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(693);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(500)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 501:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == 'D') ADVANCE(688);
      if (lookahead == 'E') ADVANCE(883);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(691);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(501)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 502:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == 'D') ADVANCE(687);
      if (lookahead == 'E') ADVANCE(884);
      if (lookahead == 'F') ADVANCE(709);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == 'T') ADVANCE(979);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(502)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 503:
      if (eof) ADVANCE(509);
      if (lookahead == '(') ADVANCE(563);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == 'D') ADVANCE(689);
      if (lookahead == 'E') ADVANCE(884);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(693);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 'f') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(503)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 504:
      if (eof) ADVANCE(509);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == ':') ADVANCE(651);
      if (lookahead == '<') ADVANCE(511);
      if (lookahead == '>') ADVANCE(513);
      if (lookahead == '@') ADVANCE(654);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(227);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(538);
      if (lookahead == 'H') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(328);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(123);
      if (lookahead == ']') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '}') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(504)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 505:
      if (eof) ADVANCE(509);
      if (lookahead == ')') ADVANCE(564);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == ':') ADVANCE(651);
      if (lookahead == '@') ADVANCE(492);
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(227);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(361);
      if (lookahead == 'F') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(293);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(364);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(368);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead == ']') ADVANCE(571);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == '}') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505)
      END_STATE();
    case 506:
      if (eof) ADVANCE(509);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '0') ADVANCE(527);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'C') ADVANCE(275);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(549);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'I') ADVANCE(331);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'S') ADVANCE(97);
      if (lookahead == 'T') ADVANCE(477);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 507:
      if (eof) ADVANCE(509);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == 'D') ADVANCE(688);
      if (lookahead == 'E') ADVANCE(883);
      if (lookahead == 'H') ADVANCE(701);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(691);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 508:
      if (eof) ADVANCE(509);
      if (lookahead == ',') ADVANCE(570);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '<') ADVANCE(510);
      if (lookahead == 'A') ADVANCE(832);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == 'D') ADVANCE(689);
      if (lookahead == 'E') ADVANCE(884);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == 'S') ADVANCE(693);
      if (lookahead == ']') ADVANCE(571);
      if (lookahead == '}') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(577);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(578);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__non_zero);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__non_zero);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__zero);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(855);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'q') ADVANCE(454);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'q') ADVANCE(460);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__language_tag);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_minLength);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_maxLength);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_langRange);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == 'L') ADVANCE(180);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DisjointUnionOf_COLON);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_DisjointUnionOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_HasKey_COLON);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_HasKey_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Functional);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_InverseFunctional);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_Reflexive);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_Irreflexive);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_Symmetric);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_Asymmetric);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_Transitive);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_DataProperty_COLON);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_DataProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_AnnotationProperty_COLON);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_AnnotationProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_Individual_COLON);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_Individual_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_Types_COLON);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_Types_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_Facts_COLON);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_Facts_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SameAs_COLON);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_SameAs_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_DifferentFrom_COLON);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DifferentFrom_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_EquivalentClasses_COLON);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_EquivalentClasses_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_DisjointClasses_COLON);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_DisjointClasses_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_EquivalentProperties_COLON);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_EquivalentProperties_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_DisjointProperties_COLON);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DisjointProperties_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_SameIndividual_COLON);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_SameIndividual_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_DifferentIndividuals_COLON);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_DifferentIndividuals_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__iunreserved);
      if (lookahead == '%' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(653);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'A') ADVANCE(926);
      if (lookahead == 'I') ADVANCE(829);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'C') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'C') ADVANCE(812);
      if (lookahead == 'P') ADVANCE(905);
      if (lookahead == 'U') ADVANCE(842);
      if (lookahead == 'W') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'C') ADVANCE(812);
      if (lookahead == 'P') ADVANCE(905);
      if (lookahead == 'W') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'C') ADVANCE(812);
      if (lookahead == 'P') ADVANCE(905);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'C') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'C') ADVANCE(817);
      if (lookahead == 'P') ADVANCE(907);
      if (lookahead == 'T') ADVANCE(856);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'C') ADVANCE(817);
      if (lookahead == 'P') ADVANCE(907);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'F') ADVANCE(893);
      if (lookahead == 'I') ADVANCE(847);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'I') ADVANCE(829);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'I') ADVANCE(847);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'K') ADVANCE(754);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'O') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'O') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'O') ADVANCE(768);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'O') ADVANCE(769);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'P') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'P') ADVANCE(902);
      if (lookahead == 't') ADVANCE(973);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'P') ADVANCE(904);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'P') ADVANCE(906);
      if (lookahead == 's') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'P') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'P') ADVANCE(908);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(911);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(942);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == 'o') ADVANCE(819);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(942);
      if (lookahead == 'i') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(942);
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(942);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == 'u') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == 'u') ADVANCE(716);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == 'u') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(892);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(810);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(946);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(909);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(927);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(811);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(913);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(955);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'a') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'b') ADVANCE(804);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'b') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'b') ADVANCE(666);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'b') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'c') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'c') ADVANCE(959);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'c') ADVANCE(918);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(963);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'v') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(964);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(965);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(983);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(985);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(890);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(978);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(923);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(897);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(770);
      if (lookahead == 's') ADVANCE(803);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(770);
      if (lookahead == 's') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(770);
      if (lookahead == 's') ADVANCE(806);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(986);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(992);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(1004);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(1005);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(771);
      if (lookahead == 's') ADVANCE(806);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'g') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'g') ADVANCE(737);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'g') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(695);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(990);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(710);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(967);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(917);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(828);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(837);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(858);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(859);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(860);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(969);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(758);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'i') ADVANCE(971);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'j') ADVANCE(864);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'j') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'j') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'j') ADVANCE(866);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(855);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(744);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(708);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'm') ADVANCE(1009);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(970);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(984);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(960);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(997);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(862);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(915);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(863);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(868);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(729);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(844);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(845);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(681);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(931);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(991);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(846);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(852);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(843);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(875);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(947);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(951);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(787);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(794);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(957);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(877);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(878);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(879);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(880);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'o') ADVANCE(882);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(750);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(752);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(759);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(761);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'q') ADVANCE(962);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'q') ADVANCE(966);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(912);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(785);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(743);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(783);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(940);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(949);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(945);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(950);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(753);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(952);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(867);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(869);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(870);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(871);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(873);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(872);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(982);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(748);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(948);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(995);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(996);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(998);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(1000);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(1001);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(1002);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(1006);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(1007);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(1008);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(928);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 's') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(777);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(665);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(974);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(975);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(745);
      if (lookahead == 'v') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(980);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(784);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(799);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(976);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(977);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(746);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(796);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(800);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(779);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'v') ADVANCE(780);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'v') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'v') ADVANCE(792);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'v') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'v') ADVANCE(797);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'v') ADVANCE(711);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(874);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(662);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(989);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(993);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(999);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(1003);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(881);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(674);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(626);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(648);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(642);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(616);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(640);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(646);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(650);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(632);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(636);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(638);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1011);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1012);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 494},
  [3] = {.lex_state = 495},
  [4] = {.lex_state = 505},
  [5] = {.lex_state = 501},
  [6] = {.lex_state = 502},
  [7] = {.lex_state = 505},
  [8] = {.lex_state = 505},
  [9] = {.lex_state = 505},
  [10] = {.lex_state = 503},
  [11] = {.lex_state = 505},
  [12] = {.lex_state = 505},
  [13] = {.lex_state = 505},
  [14] = {.lex_state = 505},
  [15] = {.lex_state = 505},
  [16] = {.lex_state = 505},
  [17] = {.lex_state = 505},
  [18] = {.lex_state = 505},
  [19] = {.lex_state = 505},
  [20] = {.lex_state = 505},
  [21] = {.lex_state = 505},
  [22] = {.lex_state = 505},
  [23] = {.lex_state = 505},
  [24] = {.lex_state = 504},
  [25] = {.lex_state = 504},
  [26] = {.lex_state = 496},
  [27] = {.lex_state = 504},
  [28] = {.lex_state = 496},
  [29] = {.lex_state = 496},
  [30] = {.lex_state = 504},
  [31] = {.lex_state = 504},
  [32] = {.lex_state = 497},
  [33] = {.lex_state = 497},
  [34] = {.lex_state = 497},
  [35] = {.lex_state = 498},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 498},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 498},
  [42] = {.lex_state = 499},
  [43] = {.lex_state = 494},
  [44] = {.lex_state = 499},
  [45] = {.lex_state = 499},
  [46] = {.lex_state = 505},
  [47] = {.lex_state = 505},
  [48] = {.lex_state = 495},
  [49] = {.lex_state = 505},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 505},
  [52] = {.lex_state = 508},
  [53] = {.lex_state = 505},
  [54] = {.lex_state = 507},
  [55] = {.lex_state = 507},
  [56] = {.lex_state = 505},
  [57] = {.lex_state = 505},
  [58] = {.lex_state = 505},
  [59] = {.lex_state = 505},
  [60] = {.lex_state = 507},
  [61] = {.lex_state = 505},
  [62] = {.lex_state = 505},
  [63] = {.lex_state = 501},
  [64] = {.lex_state = 505},
  [65] = {.lex_state = 508},
  [66] = {.lex_state = 505},
  [67] = {.lex_state = 505},
  [68] = {.lex_state = 505},
  [69] = {.lex_state = 505},
  [70] = {.lex_state = 505},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 505},
  [73] = {.lex_state = 505},
  [74] = {.lex_state = 502},
  [75] = {.lex_state = 500},
  [76] = {.lex_state = 506},
  [77] = {.lex_state = 500},
  [78] = {.lex_state = 500},
  [79] = {.lex_state = 506},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 506},
  [82] = {.lex_state = 506},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 506},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 505},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 503},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 505},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 505},
  [107] = {.lex_state = 505},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 505},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 505},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 505},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 505},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 505},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 505},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 505},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 505},
  [128] = {.lex_state = 505},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 505},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 505},
  [137] = {.lex_state = 505},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 505},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 505},
  [148] = {.lex_state = 505},
  [149] = {.lex_state = 505},
  [150] = {.lex_state = 505},
  [151] = {.lex_state = 505},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 507},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 505},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 505},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 505},
  [164] = {.lex_state = 505},
  [165] = {.lex_state = 505},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 505},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 505},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 507},
  [181] = {.lex_state = 505},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 507},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 505},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 507},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 505},
  [192] = {.lex_state = 505},
  [193] = {.lex_state = 505},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 505},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 505},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 505},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 507},
  [208] = {.lex_state = 507},
  [209] = {.lex_state = 505},
  [210] = {.lex_state = 507},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 505},
  [213] = {.lex_state = 505},
  [214] = {.lex_state = 507},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 505},
  [217] = {.lex_state = 505},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 505},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 505},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 505},
  [237] = {.lex_state = 505},
  [238] = {.lex_state = 505},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 505},
  [242] = {.lex_state = 505},
  [243] = {.lex_state = 505},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 505},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 505},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 505},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 505},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 505},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 505},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 505},
  [294] = {.lex_state = 10},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 10},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 10},
  [322] = {.lex_state = 508},
  [323] = {.lex_state = 508},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 508},
  [329] = {.lex_state = 508},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 10},
  [334] = {.lex_state = 10},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 3},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 9},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 3},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 11},
  [367] = {.lex_state = 11},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 17},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 6},
  [377] = {.lex_state = 17},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 11},
  [382] = {.lex_state = 505},
  [383] = {.lex_state = 17},
  [384] = {.lex_state = 505},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 6},
  [387] = {.lex_state = 8},
  [388] = {.lex_state = 505},
  [389] = {.lex_state = 505},
  [390] = {.lex_state = 16},
  [391] = {.lex_state = 505},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 62},
  [394] = {.lex_state = 17},
  [395] = {.lex_state = 17},
  [396] = {.lex_state = 505},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 505},
  [399] = {.lex_state = 505},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 505},
  [402] = {.lex_state = 8},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 505},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 63},
  [409] = {.lex_state = 505},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 505},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 62},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 19},
  [419] = {.lex_state = 18},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 10},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 10},
  [425] = {.lex_state = 10},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 18},
  [428] = {.lex_state = 19},
  [429] = {.lex_state = 11},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 10},
  [434] = {.lex_state = 20},
  [435] = {.lex_state = 63},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 10},
  [441] = {.lex_state = 10},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 10},
  [445] = {.lex_state = 4},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 10},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 11},
  [460] = {.lex_state = 11},
  [461] = {.lex_state = 61},
  [462] = {.lex_state = 22},
  [463] = {.lex_state = 22},
  [464] = {.lex_state = 62},
  [465] = {.lex_state = 18},
  [466] = {.lex_state = 61},
  [467] = {.lex_state = 11},
  [468] = {.lex_state = 11},
  [469] = {.lex_state = 23},
  [470] = {.lex_state = 24},
  [471] = {.lex_state = 11},
  [472] = {.lex_state = 11},
  [473] = {.lex_state = 23},
  [474] = {.lex_state = 11},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 20},
  [479] = {.lex_state = 24},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 11},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 11},
  [485] = {.lex_state = 11},
  [486] = {.lex_state = 11},
  [487] = {.lex_state = 19},
  [488] = {.lex_state = 27},
  [489] = {.lex_state = 25},
  [490] = {.lex_state = 16},
  [491] = {.lex_state = 25},
  [492] = {.lex_state = 16},
  [493] = {.lex_state = 16},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 16},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 16},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 24},
  [500] = {.lex_state = 16},
  [501] = {.lex_state = 16},
  [502] = {.lex_state = 62},
  [503] = {.lex_state = 9},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 16},
  [506] = {.lex_state = 16},
  [507] = {.lex_state = 27},
  [508] = {.lex_state = 23},
  [509] = {.lex_state = 62},
  [510] = {.lex_state = 22},
  [511] = {.lex_state = 61},
  [512] = {.lex_state = 9},
  [513] = {.lex_state = 64},
  [514] = {.lex_state = 64},
  [515] = {.lex_state = 64},
  [516] = {.lex_state = 64},
  [517] = {.lex_state = 64},
  [518] = {.lex_state = 64},
  [519] = {.lex_state = 64},
  [520] = {.lex_state = 26},
  [521] = {.lex_state = 9},
  [522] = {.lex_state = 64},
  [523] = {.lex_state = 25},
  [524] = {.lex_state = 64},
  [525] = {.lex_state = 64},
  [526] = {.lex_state = 26},
  [527] = {.lex_state = 9},
  [528] = {.lex_state = 64},
  [529] = {.lex_state = 64},
  [530] = {.lex_state = 64},
  [531] = {.lex_state = 64},
  [532] = {.lex_state = 64},
  [533] = {.lex_state = 9},
  [534] = {.lex_state = 9},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 64},
  [537] = {.lex_state = 9},
  [538] = {.lex_state = 9},
  [539] = {.lex_state = 26},
  [540] = {.lex_state = 26},
  [541] = {.lex_state = 64},
  [542] = {.lex_state = 9},
  [543] = {.lex_state = 64},
  [544] = {.lex_state = 11},
  [545] = {.lex_state = 64},
  [546] = {.lex_state = 26},
  [547] = {.lex_state = 11},
  [548] = {.lex_state = 28},
  [549] = {.lex_state = 26},
  [550] = {.lex_state = 64},
  [551] = {.lex_state = 26},
  [552] = {.lex_state = 26},
  [553] = {.lex_state = 26},
  [554] = {.lex_state = 11},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 64},
  [557] = {.lex_state = 64},
  [558] = {.lex_state = 9},
  [559] = {.lex_state = 9},
  [560] = {.lex_state = 9},
  [561] = {.lex_state = 11},
  [562] = {.lex_state = 64},
  [563] = {.lex_state = 64},
  [564] = {.lex_state = 9},
  [565] = {.lex_state = 9},
  [566] = {.lex_state = 11},
  [567] = {.lex_state = 9},
  [568] = {.lex_state = 9},
  [569] = {.lex_state = 26},
  [570] = {.lex_state = 64},
  [571] = {.lex_state = 9},
  [572] = {.lex_state = 64},
  [573] = {.lex_state = 9},
  [574] = {.lex_state = 9},
  [575] = {.lex_state = 9},
  [576] = {.lex_state = 9},
  [577] = {.lex_state = 9},
  [578] = {.lex_state = 9},
  [579] = {.lex_state = 9},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 1},
  [582] = {.lex_state = 1},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 1},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 9},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 64},
  [589] = {.lex_state = 504},
  [590] = {.lex_state = 504},
  [591] = {.lex_state = 64},
  [592] = {.lex_state = 504},
  [593] = {.lex_state = 28},
  [594] = {.lex_state = 10},
  [595] = {.lex_state = 10},
  [596] = {.lex_state = 28},
  [597] = {.lex_state = 28},
  [598] = {.lex_state = 504},
  [599] = {.lex_state = 28},
  [600] = {.lex_state = 10},
  [601] = {.lex_state = 10},
  [602] = {.lex_state = 28},
  [603] = {.lex_state = 504},
  [604] = {.lex_state = 28},
  [605] = {.lex_state = 28},
  [606] = {.lex_state = 504},
  [607] = {.lex_state = 28},
  [608] = {.lex_state = 504},
  [609] = {.lex_state = 28},
  [610] = {.lex_state = 28},
  [611] = {.lex_state = 504},
  [612] = {.lex_state = 28},
  [613] = {.lex_state = 504},
  [614] = {.lex_state = 504},
  [615] = {.lex_state = 28},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 28},
  [618] = {.lex_state = 28},
  [619] = {.lex_state = 504},
  [620] = {.lex_state = 28},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 504},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 64},
  [628] = {.lex_state = 28},
  [629] = {.lex_state = 504},
  [630] = {.lex_state = 28},
  [631] = {.lex_state = 28},
  [632] = {.lex_state = 28},
  [633] = {.lex_state = 28},
  [634] = {.lex_state = 504},
  [635] = {.lex_state = 28},
  [636] = {.lex_state = 504},
  [637] = {.lex_state = 28},
  [638] = {.lex_state = 504},
  [639] = {.lex_state = 28},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 28},
  [642] = {.lex_state = 28},
  [643] = {.lex_state = 28},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 28},
  [650] = {.lex_state = 10},
  [651] = {.lex_state = 28},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 10},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 28},
  [657] = {.lex_state = 10},
  [658] = {.lex_state = 10},
  [659] = {.lex_state = 10},
  [660] = {.lex_state = 10},
  [661] = {.lex_state = 10},
  [662] = {.lex_state = 28},
  [663] = {.lex_state = 28},
  [664] = {.lex_state = 28},
  [665] = {.lex_state = 10},
  [666] = {.lex_state = 10},
  [667] = {.lex_state = 10},
  [668] = {.lex_state = 10},
  [669] = {.lex_state = 505},
  [670] = {.lex_state = 505},
  [671] = {.lex_state = 505},
  [672] = {.lex_state = 28},
  [673] = {.lex_state = 10},
  [674] = {.lex_state = 505},
  [675] = {.lex_state = 27},
  [676] = {.lex_state = 505},
  [677] = {.lex_state = 505},
  [678] = {.lex_state = 11},
  [679] = {.lex_state = 26},
  [680] = {.lex_state = 28},
  [681] = {.lex_state = 505},
  [682] = {.lex_state = 11},
  [683] = {.lex_state = 27},
  [684] = {.lex_state = 26},
  [685] = {.lex_state = 26},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 504},
  [688] = {.lex_state = 11},
  [689] = {.lex_state = 28},
  [690] = {.lex_state = 27},
  [691] = {.lex_state = 26},
  [692] = {.lex_state = 11},
  [693] = {.lex_state = 11},
  [694] = {.lex_state = 27},
  [695] = {.lex_state = 27},
  [696] = {.lex_state = 26},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 26},
  [699] = {.lex_state = 11},
  [700] = {.lex_state = 504},
  [701] = {.lex_state = 27},
  [702] = {.lex_state = 27},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 11},
  [705] = {.lex_state = 11},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 505},
  [708] = {.lex_state = 505},
  [709] = {.lex_state = 11},
  [710] = {.lex_state = 505},
  [711] = {.lex_state = 26},
  [712] = {.lex_state = 494},
  [713] = {.lex_state = 26},
  [714] = {.lex_state = 11},
  [715] = {.lex_state = 27},
  [716] = {.lex_state = 26},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 11},
  [719] = {.lex_state = 505},
  [720] = {.lex_state = 11},
  [721] = {.lex_state = 27},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 27},
  [724] = {.lex_state = 27},
  [725] = {.lex_state = 505},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 505},
  [728] = {.lex_state = 505},
  [729] = {.lex_state = 11},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 26},
  [732] = {.lex_state = 26},
  [733] = {.lex_state = 27},
  [734] = {.lex_state = 11},
  [735] = {.lex_state = 26},
  [736] = {.lex_state = 27},
  [737] = {.lex_state = 11},
  [738] = {.lex_state = 11},
  [739] = {.lex_state = 11},
  [740] = {.lex_state = 27},
  [741] = {.lex_state = 26},
  [742] = {.lex_state = 494},
  [743] = {.lex_state = 11},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 28},
  [746] = {.lex_state = 27},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 26},
  [749] = {.lex_state = 11},
  [750] = {.lex_state = 27},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 28},
  [753] = {.lex_state = 28},
  [754] = {.lex_state = 11},
  [755] = {.lex_state = 27},
  [756] = {.lex_state = 26},
  [757] = {.lex_state = 11},
  [758] = {.lex_state = 26},
  [759] = {.lex_state = 26},
  [760] = {.lex_state = 26},
  [761] = {.lex_state = 27},
  [762] = {.lex_state = 28},
  [763] = {.lex_state = 27},
  [764] = {.lex_state = 27},
  [765] = {.lex_state = 27},
  [766] = {.lex_state = 27},
  [767] = {.lex_state = 26},
  [768] = {.lex_state = 11},
  [769] = {.lex_state = 27},
  [770] = {.lex_state = 11},
  [771] = {.lex_state = 26},
  [772] = {.lex_state = 505},
  [773] = {.lex_state = 11},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 26},
  [776] = {.lex_state = 26},
  [777] = {.lex_state = 27},
  [778] = {.lex_state = 26},
  [779] = {.lex_state = 26},
  [780] = {.lex_state = 28},
  [781] = {.lex_state = 505},
  [782] = {.lex_state = 28},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 28},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 505},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 28},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 11},
  [794] = {.lex_state = 28},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 28},
  [800] = {.lex_state = 28},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 28},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 28},
  [814] = {.lex_state = 28},
  [815] = {.lex_state = 28},
  [816] = {.lex_state = 28},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 27},
  [819] = {.lex_state = 28},
  [820] = {.lex_state = 28},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 28},
  [823] = {.lex_state = 28},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 28},
  [827] = {.lex_state = 28},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 28},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 655},
  [835] = {.lex_state = 494},
  [836] = {.lex_state = 26},
  [837] = {.lex_state = 505},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 505},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 28},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 504},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 494},
  [862] = {.lex_state = 504},
  [863] = {.lex_state = 504},
  [864] = {.lex_state = 655},
  [865] = {.lex_state = 490},
  [866] = {.lex_state = 490},
  [867] = {.lex_state = 490},
  [868] = {.lex_state = 504},
  [869] = {.lex_state = 504},
  [870] = {.lex_state = 505},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 504},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 504},
  [876] = {.lex_state = 504},
  [877] = {.lex_state = 504},
  [878] = {.lex_state = 504},
  [879] = {.lex_state = 490},
  [880] = {.lex_state = 504},
  [881] = {.lex_state = 504},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 495},
  [884] = {.lex_state = 504},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 490},
  [887] = {.lex_state = 504},
  [888] = {.lex_state = 504},
  [889] = {.lex_state = 505},
  [890] = {.lex_state = 504},
  [891] = {.lex_state = 504},
  [892] = {.lex_state = 504},
  [893] = {.lex_state = 504},
  [894] = {.lex_state = 504},
  [895] = {.lex_state = 504},
  [896] = {.lex_state = 504},
  [897] = {.lex_state = 504},
  [898] = {.lex_state = 504},
  [899] = {.lex_state = 504},
  [900] = {.lex_state = 490},
  [901] = {.lex_state = 504},
  [902] = {.lex_state = 504},
  [903] = {.lex_state = 490},
  [904] = {.lex_state = 504},
  [905] = {.lex_state = 490},
  [906] = {.lex_state = 490},
  [907] = {.lex_state = 490},
  [908] = {.lex_state = 490},
  [909] = {.lex_state = 504},
  [910] = {.lex_state = 655},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 491},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 491},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 491},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 65},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 491},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 491},
  [944] = {.lex_state = 491},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 656},
  [951] = {.lex_state = 494},
  [952] = {.lex_state = 494},
  [953] = {.lex_state = 656},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 491},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym__COLON] = ACTIONS(1),
    [sym__non_zero] = ACTIONS(1),
    [sym__zero] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_Ontology_COLON] = ACTIONS(1),
    [anon_sym_Prefix_COLON] = ACTIONS(1),
    [anon_sym_Annotations_COLON] = ACTIONS(1),
    [anon_sym_inverse] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_minLength] = ACTIONS(1),
    [anon_sym_maxLength] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_langRange] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_Self] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_Datatype_COLON] = ACTIONS(1),
    [anon_sym_EquivalentTo_COLON] = ACTIONS(1),
    [anon_sym_Class_COLON] = ACTIONS(1),
    [anon_sym_SubClassOf_COLON] = ACTIONS(1),
    [anon_sym_DisjointWith_COLON] = ACTIONS(1),
    [anon_sym_DisjointUnionOf_COLON] = ACTIONS(1),
    [anon_sym_HasKey_COLON] = ACTIONS(1),
    [anon_sym_ObjectProperty_COLON] = ACTIONS(1),
    [anon_sym_Domain_COLON] = ACTIONS(1),
    [anon_sym_Range_COLON] = ACTIONS(1),
    [anon_sym_SubPropertyOf_COLON] = ACTIONS(1),
    [anon_sym_InverseOf_COLON] = ACTIONS(1),
    [anon_sym_Characteristics_COLON] = ACTIONS(1),
    [anon_sym_SubPropertyChain_COLON] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_Functional] = ACTIONS(1),
    [anon_sym_InverseFunctional] = ACTIONS(1),
    [anon_sym_Reflexive] = ACTIONS(1),
    [anon_sym_Irreflexive] = ACTIONS(1),
    [anon_sym_Symmetric] = ACTIONS(1),
    [anon_sym_Asymmetric] = ACTIONS(1),
    [anon_sym_Transitive] = ACTIONS(1),
    [anon_sym_DataProperty_COLON] = ACTIONS(1),
    [anon_sym_AnnotationProperty_COLON] = ACTIONS(1),
    [anon_sym_Individual_COLON] = ACTIONS(1),
    [anon_sym_Types_COLON] = ACTIONS(1),
    [anon_sym_Facts_COLON] = ACTIONS(1),
    [anon_sym_SameAs_COLON] = ACTIONS(1),
    [anon_sym_DifferentFrom_COLON] = ACTIONS(1),
    [anon_sym_EquivalentClasses_COLON] = ACTIONS(1),
    [anon_sym_DisjointClasses_COLON] = ACTIONS(1),
    [anon_sym_EquivalentProperties_COLON] = ACTIONS(1),
    [anon_sym_DisjointProperties_COLON] = ACTIONS(1),
    [anon_sym_SameIndividual_COLON] = ACTIONS(1),
    [anon_sym_DifferentIndividuals_COLON] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__iquery] = ACTIONS(1),
    [sym__ifragment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(960),
    [sym_ontology_document] = STATE(959),
    [sym_ontology] = STATE(958),
    [sym_prefix_declaration] = STATE(703),
    [aux_sym_ontology_document_repeat1] = STATE(703),
    [anon_sym_Ontology_COLON] = ACTIONS(3),
    [anon_sym_Prefix_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(70), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 23,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [101] = 23,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(27), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(70), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 21,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [200] = 1,
    ACTIONS(29), 51,
      ts_builtin_sym_end,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
      anon_sym_value,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [254] = 23,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(31), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(70), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 20,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [352] = 23,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(70), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 19,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [449] = 1,
    ACTIONS(35), 49,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
      anon_sym_value,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [501] = 1,
    ACTIONS(37), 49,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
      anon_sym_value,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [553] = 1,
    ACTIONS(39), 49,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
      anon_sym_value,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [605] = 23,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(41), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(70), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 14,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [697] = 3,
    ACTIONS(45), 1,
      sym__language_tag,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(43), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [748] = 1,
    ACTIONS(49), 43,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [794] = 1,
    ACTIONS(51), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [839] = 1,
    ACTIONS(53), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [884] = 1,
    ACTIONS(55), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [929] = 1,
    ACTIONS(57), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [974] = 1,
    ACTIONS(59), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1019] = 5,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_that,
    ACTIONS(70), 1,
      anon_sym_value,
    ACTIONS(68), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(61), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1072] = 1,
    ACTIONS(73), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1117] = 1,
    ACTIONS(75), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1162] = 1,
    ACTIONS(77), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1207] = 1,
    ACTIONS(79), 41,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1251] = 3,
    ACTIONS(70), 1,
      anon_sym_value,
    ACTIONS(68), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(66), 34,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1299] = 8,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_e,
    ACTIONS(91), 1,
      anon_sym_E,
    STATE(904), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1357] = 8,
    ACTIONS(89), 1,
      anon_sym_e,
    ACTIONS(91), 1,
      anon_sym_E,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1415] = 4,
    ACTIONS(103), 2,
      sym__non_zero,
      sym__zero,
    STATE(28), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(101), 30,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [1464] = 7,
    ACTIONS(89), 1,
      anon_sym_e,
    ACTIONS(91), 1,
      anon_sym_E,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(107), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1519] = 4,
    ACTIONS(113), 2,
      sym__non_zero,
      sym__zero,
    STATE(28), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(111), 30,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [1568] = 4,
    ACTIONS(120), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(118), 30,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [1617] = 4,
    ACTIONS(127), 1,
      anon_sym_E,
    ACTIONS(124), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 35,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1666] = 7,
    ACTIONS(89), 1,
      anon_sym_e,
    ACTIONS(91), 1,
      anon_sym_E,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(131), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1721] = 4,
    ACTIONS(133), 2,
      sym__non_zero,
      sym__zero,
    STATE(34), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(101), 28,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [1768] = 4,
    ACTIONS(135), 2,
      sym__non_zero,
      sym__zero,
    STATE(32), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(118), 28,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [1815] = 4,
    ACTIONS(137), 2,
      sym__non_zero,
      sym__zero,
    STATE(34), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(111), 28,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [1862] = 4,
    ACTIONS(140), 2,
      sym__non_zero,
      sym__zero,
    STATE(35), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(111), 27,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [1908] = 1,
    ACTIONS(143), 37,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1948] = 1,
    ACTIONS(145), 37,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [1988] = 1,
    ACTIONS(147), 37,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2028] = 4,
    ACTIONS(149), 2,
      sym__non_zero,
      sym__zero,
    STATE(41), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(118), 27,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [2074] = 1,
    ACTIONS(151), 37,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2114] = 4,
    ACTIONS(153), 2,
      sym__non_zero,
      sym__zero,
    STATE(35), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(101), 27,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [2160] = 4,
    ACTIONS(155), 2,
      sym__non_zero,
      sym__zero,
    STATE(45), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(118), 26,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [2205] = 2,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(159), 30,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [2246] = 4,
    ACTIONS(161), 2,
      sym__non_zero,
      sym__zero,
    STATE(44), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(111), 26,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [2291] = 4,
    ACTIONS(164), 2,
      sym__non_zero,
      sym__zero,
    STATE(44), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(101), 26,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [2336] = 2,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2375] = 1,
    ACTIONS(170), 34,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2412] = 2,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(159), 28,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [2451] = 1,
    ACTIONS(172), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2487] = 26,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(174), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(719), 1,
      sym__class_iri,
    STATE(725), 1,
      sym_primary,
    STATE(846), 1,
      sym_conjunction,
    STATE(925), 1,
      sym_description,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(948), 1,
      sym_data_range,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [2573] = 1,
    ACTIONS(166), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2609] = 19,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(182), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(184), 1,
      anon_sym_Class_COLON,
    ACTIONS(186), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(188), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(190), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(192), 1,
      anon_sym_Individual_COLON,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    ACTIONS(194), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(196), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(198), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(65), 2,
      sym_iri,
      sym__ontology_iri,
    STATE(135), 2,
      sym_annotations,
      aux_sym_ontology_repeat1,
    STATE(233), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [2681] = 1,
    ACTIONS(204), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2717] = 11,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_inverse,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    STATE(157), 1,
      sym_iri,
    STATE(207), 1,
      sym__data_property_iri,
    STATE(208), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(55), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(210), 18,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2773] = 11,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 1,
      anon_sym_LT,
    ACTIONS(225), 1,
      anon_sym_inverse,
    ACTIONS(228), 1,
      sym__pn_local,
    ACTIONS(231), 1,
      sym__pname_ln,
    STATE(157), 1,
      sym_iri,
    STATE(207), 1,
      sym__data_property_iri,
    STATE(208), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(55), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(223), 18,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2829] = 1,
    ACTIONS(234), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2865] = 1,
    ACTIONS(236), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2901] = 1,
    ACTIONS(238), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2937] = 1,
    ACTIONS(240), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [2973] = 11,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_inverse,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_iri,
    STATE(207), 1,
      sym__data_property_iri,
    STATE(208), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(55), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(244), 18,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3029] = 1,
    ACTIONS(246), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3065] = 1,
    ACTIONS(248), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3101] = 2,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(159), 27,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [3139] = 1,
    ACTIONS(250), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3175] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(180), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(182), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(184), 1,
      anon_sym_Class_COLON,
    ACTIONS(186), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(188), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(190), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(192), 1,
      anon_sym_Individual_COLON,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(196), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(198), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(129), 2,
      sym_iri,
      sym__version_iri,
    STATE(130), 2,
      sym_annotations,
      aux_sym_ontology_repeat1,
    STATE(248), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [3247] = 1,
    ACTIONS(254), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3283] = 1,
    ACTIONS(256), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3319] = 1,
    ACTIONS(258), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3355] = 1,
    ACTIONS(7), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3391] = 1,
    ACTIONS(260), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3427] = 23,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(174), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(70), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [3507] = 1,
    ACTIONS(262), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3543] = 1,
    ACTIONS(264), 32,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3578] = 2,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(159), 26,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [3615] = 4,
    ACTIONS(266), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(101), 21,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [3655] = 9,
    ACTIONS(87), 1,
      anon_sym_f,
    ACTIONS(89), 1,
      anon_sym_e,
    ACTIONS(91), 1,
      anon_sym_E,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_F,
    STATE(904), 1,
      sym__exponent,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(84), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3705] = 4,
    ACTIONS(274), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(111), 21,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [3745] = 4,
    ACTIONS(277), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(118), 21,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [3785] = 9,
    ACTIONS(89), 1,
      anon_sym_e,
    ACTIONS(91), 1,
      anon_sym_E,
    ACTIONS(97), 1,
      anon_sym_f,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_F,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(84), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3835] = 1,
    ACTIONS(283), 30,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3868] = 8,
    ACTIONS(89), 1,
      anon_sym_e,
    ACTIONS(91), 1,
      anon_sym_E,
    ACTIONS(131), 1,
      anon_sym_f,
    ACTIONS(285), 1,
      anon_sym_F,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(84), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3915] = 8,
    ACTIONS(89), 1,
      anon_sym_e,
    ACTIONS(91), 1,
      anon_sym_E,
    ACTIONS(107), 1,
      anon_sym_f,
    ACTIONS(287), 1,
      anon_sym_F,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(84), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3962] = 1,
    ACTIONS(289), 30,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [3995] = 4,
    ACTIONS(127), 2,
      anon_sym_F,
      anon_sym_E,
    ACTIONS(291), 2,
      sym__non_zero,
      sym__zero,
    STATE(84), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_e,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [4034] = 18,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    ACTIONS(298), 1,
      anon_sym_PLUS,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      sym__quoted_string,
    STATE(849), 1,
      sym_individual,
    STATE(857), 1,
      sym_literal,
    STATE(913), 1,
      sym__lexial_value,
    STATE(926), 1,
      sym_individual_list,
    STATE(940), 1,
      sym_literal_list,
    ACTIONS(296), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [4100] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(41), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(69), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [4172] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(27), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(69), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [4244] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(174), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(69), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [4316] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(69), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [4388] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(69), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [4460] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(31), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(69), 2,
      sym_data_primary,
      sym_primary,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [4532] = 1,
    ACTIONS(306), 28,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
      anon_sym_value,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [4563] = 3,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [4597] = 3,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [4631] = 3,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [4665] = 2,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(159), 21,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [4697] = 3,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [4731] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(147), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [4765] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(321), 1,
      anon_sym_PLUS,
    ACTIONS(323), 1,
      anon_sym_DASH,
    STATE(36), 1,
      sym_annotation_target,
    STATE(929), 1,
      sym__lexial_value,
    ACTIONS(319), 2,
      sym__non_zero,
      sym__zero,
    STATE(370), 2,
      aux_sym__digits,
      sym__digit,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(37), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [4822] = 3,
    ACTIONS(327), 1,
      anon_sym_and,
    STATE(112), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(325), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [4855] = 15,
    ACTIONS(329), 1,
      anon_sym_LT,
    ACTIONS(331), 1,
      anon_sym__COLON,
    ACTIONS(335), 1,
      anon_sym_PLUS,
    ACTIONS(337), 1,
      anon_sym_DASH,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym__quoted_string,
    ACTIONS(343), 1,
      sym__pn_local,
    ACTIONS(345), 1,
      sym__pname_ln,
    STATE(658), 1,
      sym_annotation_target,
    STATE(942), 1,
      sym__lexial_value,
    ACTIONS(333), 2,
      sym__non_zero,
      sym__zero,
    STATE(376), 2,
      aux_sym__digits,
      sym__digit,
    STATE(644), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(652), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(665), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [4912] = 15,
    ACTIONS(347), 1,
      anon_sym_LT,
    ACTIONS(349), 1,
      anon_sym__COLON,
    ACTIONS(353), 1,
      anon_sym_PLUS,
    ACTIONS(355), 1,
      anon_sym_DASH,
    ACTIONS(357), 1,
      anon_sym_DOT,
    ACTIONS(359), 1,
      sym__quoted_string,
    ACTIONS(361), 1,
      sym__pn_local,
    ACTIONS(363), 1,
      sym__pname_ln,
    STATE(759), 1,
      sym_annotation_target,
    STATE(917), 1,
      sym__lexial_value,
    ACTIONS(351), 2,
      sym__non_zero,
      sym__zero,
    STATE(419), 2,
      aux_sym__digits,
      sym__digit,
    STATE(756), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(779), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(758), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [4969] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(64), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [5034] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(64), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [5099] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    STATE(36), 1,
      sym_annotation_target,
    STATE(929), 1,
      sym__lexial_value,
    ACTIONS(365), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(37), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5156] = 3,
    ACTIONS(371), 1,
      anon_sym_and,
    STATE(106), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(240), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [5189] = 3,
    ACTIONS(327), 1,
      anon_sym_and,
    STATE(106), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(374), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [5222] = 15,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym__COLON,
    ACTIONS(382), 1,
      anon_sym_PLUS,
    ACTIONS(384), 1,
      anon_sym_DASH,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      sym__quoted_string,
    ACTIONS(390), 1,
      sym__pn_local,
    ACTIONS(392), 1,
      sym__pname_ln,
    STATE(578), 1,
      sym_annotation_target,
    STATE(920), 1,
      sym__lexial_value,
    ACTIONS(380), 2,
      sym__non_zero,
      sym__zero,
    STATE(265), 2,
      aux_sym__digits,
      sym__digit,
    STATE(564), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(575), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(577), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5279] = 15,
    ACTIONS(394), 1,
      anon_sym_LT,
    ACTIONS(396), 1,
      anon_sym__COLON,
    ACTIONS(400), 1,
      anon_sym_PLUS,
    ACTIONS(402), 1,
      anon_sym_DASH,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      sym__quoted_string,
    ACTIONS(408), 1,
      sym__pn_local,
    ACTIONS(410), 1,
      sym__pname_ln,
    STATE(738), 1,
      sym_annotation_target,
    STATE(927), 1,
      sym__lexial_value,
    ACTIONS(398), 2,
      sym__non_zero,
      sym__zero,
    STATE(418), 2,
      aux_sym__digits,
      sym__digit,
    STATE(705), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(720), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(704), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5336] = 2,
    ACTIONS(412), 1,
      anon_sym_that,
    ACTIONS(256), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [5367] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    ACTIONS(298), 1,
      anon_sym_PLUS,
    ACTIONS(300), 1,
      anon_sym_DASH,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      sym__quoted_string,
    STATE(36), 1,
      sym_annotation_target,
    STATE(929), 1,
      sym__lexial_value,
    ACTIONS(296), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(37), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5424] = 3,
    ACTIONS(327), 1,
      anon_sym_and,
    STATE(106), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [5457] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(64), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [5522] = 15,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(418), 1,
      anon_sym__COLON,
    ACTIONS(422), 1,
      anon_sym_PLUS,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(428), 1,
      sym__quoted_string,
    ACTIONS(430), 1,
      sym__pn_local,
    ACTIONS(432), 1,
      sym__pname_ln,
    STATE(819), 1,
      sym_annotation_target,
    STATE(954), 1,
      sym__lexial_value,
    ACTIONS(420), 2,
      sym__non_zero,
      sym__zero,
    STATE(483), 2,
      aux_sym__digits,
      sym__digit,
    STATE(813), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(822), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(820), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5579] = 3,
    ACTIONS(434), 1,
      anon_sym_and,
    STATE(115), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(258), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [5612] = 15,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(439), 1,
      anon_sym__COLON,
    ACTIONS(443), 1,
      anon_sym_PLUS,
    ACTIONS(445), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(449), 1,
      sym__quoted_string,
    ACTIONS(451), 1,
      sym__pn_local,
    ACTIONS(453), 1,
      sym__pname_ln,
    STATE(763), 1,
      sym_annotation_target,
    STATE(924), 1,
      sym__lexial_value,
    ACTIONS(441), 2,
      sym__non_zero,
      sym__zero,
    STATE(458), 2,
      aux_sym__digits,
      sym__digit,
    STATE(724), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(777), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(765), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5669] = 3,
    ACTIONS(457), 1,
      anon_sym_and,
    STATE(119), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(455), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [5702] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(64), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [5767] = 3,
    ACTIONS(457), 1,
      anon_sym_and,
    STATE(115), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(459), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [5800] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(64), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [5865] = 3,
    ACTIONS(327), 1,
      anon_sym_and,
    STATE(107), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [5898] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(18), 1,
      sym_iri,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(64), 1,
      sym_data_atomic,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [5963] = 14,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(465), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(467), 1,
      anon_sym_Class_COLON,
    ACTIONS(469), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(471), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(473), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(475), 1,
      anon_sym_Individual_COLON,
    ACTIONS(477), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(479), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(481), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(218), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(404), 2,
      sym_annotations,
      aux_sym_ontology_repeat1,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [6017] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(196), 1,
      sym_annotations,
    STATE(347), 1,
      sym_description_2list,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(719), 1,
      sym__class_iri,
    STATE(725), 1,
      sym_primary,
    STATE(846), 1,
      sym_conjunction,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(955), 1,
      sym_description,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6085] = 3,
    ACTIONS(491), 1,
      anon_sym_or,
    STATE(125), 1,
      aux_sym_description_repeat1,
    ACTIONS(264), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6117] = 1,
    ACTIONS(494), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_value,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6145] = 3,
    ACTIONS(498), 1,
      anon_sym_and,
    STATE(127), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(496), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6177] = 3,
    ACTIONS(503), 1,
      anon_sym_or,
    STATE(137), 1,
      aux_sym_description_repeat1,
    ACTIONS(501), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6209] = 14,
    ACTIONS(463), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(465), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(467), 1,
      anon_sym_Class_COLON,
    ACTIONS(469), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(471), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(473), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(475), 1,
      anon_sym_Individual_COLON,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(479), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(481), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(123), 2,
      sym_annotations,
      aux_sym_ontology_repeat1,
    STATE(234), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [6263] = 14,
    ACTIONS(463), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(465), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(467), 1,
      anon_sym_Class_COLON,
    ACTIONS(469), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(471), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(473), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(475), 1,
      anon_sym_Individual_COLON,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(479), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(481), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(234), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(404), 2,
      sym_annotations,
      aux_sym_ontology_repeat1,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [6317] = 1,
    ACTIONS(507), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_value,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6345] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(240), 1,
      sym_annotations,
    STATE(242), 1,
      sym__class_iri,
    STATE(247), 1,
      sym_primary,
    STATE(293), 1,
      sym_conjunction,
    STATE(331), 1,
      sym_description,
    STATE(379), 1,
      sym_description_annotated_list,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6413] = 3,
    ACTIONS(513), 1,
      anon_sym_and,
    STATE(136), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(511), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6445] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(181), 1,
      sym__class_iri,
    STATE(209), 1,
      sym_primary,
    STATE(236), 1,
      sym_conjunction,
    STATE(254), 1,
      sym_annotations,
    STATE(274), 1,
      sym_description,
    STATE(347), 1,
      sym_description_annotated_list,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6513] = 14,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(465), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(467), 1,
      anon_sym_Class_COLON,
    ACTIONS(469), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(471), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(473), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(475), 1,
      anon_sym_Individual_COLON,
    ACTIONS(477), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(479), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(481), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(248), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(404), 2,
      sym_annotations,
      aux_sym_ontology_repeat1,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [6567] = 3,
    ACTIONS(513), 1,
      anon_sym_and,
    STATE(127), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(517), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6599] = 3,
    ACTIONS(503), 1,
      anon_sym_or,
    STATE(125), 1,
      aux_sym_description_repeat1,
    ACTIONS(519), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6631] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(206), 1,
      sym_annotations,
    STATE(504), 1,
      sym_description_2list,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(719), 1,
      sym__class_iri,
    STATE(725), 1,
      sym_primary,
    STATE(846), 1,
      sym_conjunction,
    STATE(939), 1,
      sym_description,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6699] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(110), 1,
      sym__class_iri,
    STATE(117), 1,
      sym_primary,
    STATE(128), 1,
      sym_conjunction,
    STATE(146), 1,
      sym_description,
    STATE(232), 1,
      sym_annotations,
    STATE(263), 1,
      sym_description_annotated_list,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6767] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(150), 1,
      sym_primary,
    STATE(151), 1,
      sym__class_iri,
    STATE(213), 1,
      sym_conjunction,
    STATE(222), 1,
      sym_description,
    STATE(262), 1,
      sym_annotations,
    STATE(305), 1,
      sym_description_annotated_list,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6835] = 3,
    ACTIONS(527), 1,
      anon_sym_o,
    STATE(172), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(525), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6866] = 3,
    ACTIONS(527), 1,
      anon_sym_o,
    STATE(162), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(529), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6897] = 1,
    ACTIONS(496), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6924] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(531), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6955] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(83), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(110), 1,
      sym__class_iri,
    STATE(117), 1,
      sym_primary,
    STATE(128), 1,
      sym_conjunction,
    STATE(245), 1,
      sym_annotations,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7020] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(535), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7051] = 3,
    ACTIONS(539), 1,
      anon_sym_and,
    STATE(159), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7082] = 3,
    ACTIONS(539), 1,
      anon_sym_and,
    STATE(164), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(325), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7113] = 3,
    ACTIONS(543), 1,
      anon_sym_or,
    STATE(149), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(541), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7144] = 3,
    ACTIONS(546), 1,
      anon_sym_and,
    STATE(171), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(455), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7175] = 2,
    ACTIONS(548), 1,
      anon_sym_that,
    ACTIONS(256), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7204] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(550), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7235] = 3,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(554), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7266] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(83), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(230), 1,
      sym_annotations,
    STATE(242), 1,
      sym__class_iri,
    STATE(247), 1,
      sym_primary,
    STATE(293), 1,
      sym_conjunction,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7331] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(559), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7362] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(83), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(150), 1,
      sym_primary,
    STATE(151), 1,
      sym__class_iri,
    STATE(213), 1,
      sym_conjunction,
    STATE(255), 1,
      sym_annotations,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7427] = 2,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(561), 20,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [7456] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(559), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7487] = 3,
    ACTIONS(539), 1,
      anon_sym_and,
    STATE(161), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(374), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7518] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(564), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7549] = 3,
    ACTIONS(569), 1,
      anon_sym_and,
    STATE(161), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(240), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7580] = 3,
    ACTIONS(527), 1,
      anon_sym_o,
    STATE(172), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(572), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7611] = 3,
    ACTIONS(576), 1,
      anon_sym_or,
    STATE(173), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(574), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7642] = 3,
    ACTIONS(539), 1,
      anon_sym_and,
    STATE(161), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7673] = 3,
    ACTIONS(578), 1,
      anon_sym_and,
    STATE(165), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(258), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7704] = 3,
    ACTIONS(527), 1,
      anon_sym_o,
    STATE(141), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(572), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7735] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(581), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7766] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(581), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7797] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(583), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7828] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(289), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7859] = 3,
    ACTIONS(546), 1,
      anon_sym_and,
    STATE(165), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(459), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7890] = 3,
    ACTIONS(590), 1,
      anon_sym_o,
    STATE(172), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(588), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7921] = 3,
    ACTIONS(576), 1,
      anon_sym_or,
    STATE(149), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(593), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7952] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(583), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [7983] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(483), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(83), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(181), 1,
      sym__class_iri,
    STATE(209), 1,
      sym_primary,
    STATE(225), 1,
      sym_annotations,
    STATE(236), 1,
      sym_conjunction,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8048] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(595), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8079] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(597), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(250), 1,
      sym_data_range,
    STATE(266), 1,
      sym_annotations,
    STATE(305), 1,
      sym_data_range_annotated_list,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [8140] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(605), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8171] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(607), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8202] = 2,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(609), 20,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [8230] = 2,
    ACTIONS(611), 1,
      anon_sym_that,
    ACTIONS(256), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8258] = 7,
    ACTIONS(613), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(622), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(625), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(182), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(619), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(616), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(529), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8296] = 1,
    ACTIONS(628), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8322] = 2,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(630), 20,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [8350] = 1,
    ACTIONS(29), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8376] = 3,
    ACTIONS(632), 1,
      anon_sym_and,
    STATE(186), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(240), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8406] = 1,
    ACTIONS(37), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8432] = 2,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(635), 20,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [8460] = 1,
    ACTIONS(39), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8486] = 7,
    ACTIONS(639), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(645), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(647), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(182), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(643), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(641), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(637), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8524] = 3,
    ACTIONS(649), 1,
      anon_sym_and,
    STATE(186), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(374), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8554] = 3,
    ACTIONS(649), 1,
      anon_sym_and,
    STATE(186), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8584] = 3,
    ACTIONS(651), 1,
      anon_sym_and,
    STATE(193), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(258), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8614] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(597), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(264), 1,
      sym_annotations,
    STATE(430), 1,
      sym_data_range,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [8672] = 3,
    ACTIONS(654), 1,
      anon_sym_or,
    STATE(195), 1,
      aux_sym_description_repeat1,
    ACTIONS(264), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8702] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(346), 1,
      sym_description_2list,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(719), 1,
      sym__class_iri,
    STATE(725), 1,
      sym_primary,
    STATE(846), 1,
      sym_conjunction,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(955), 1,
      sym_description,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8764] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(597), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(267), 1,
      sym_annotations,
    STATE(420), 1,
      sym_data_range,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [8822] = 1,
    ACTIONS(657), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8848] = 1,
    ACTIONS(588), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8874] = 1,
    ACTIONS(659), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8900] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(597), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(282), 1,
      sym_annotations,
    STATE(286), 1,
      sym_data_range,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [8958] = 3,
    ACTIONS(661), 1,
      anon_sym_or,
    STATE(195), 1,
      aux_sym_description_repeat1,
    ACTIONS(519), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8988] = 1,
    ACTIONS(554), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9014] = 1,
    ACTIONS(35), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9040] = 3,
    ACTIONS(663), 1,
      anon_sym_and,
    STATE(193), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(459), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9070] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(494), 1,
      sym_description_2list,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(719), 1,
      sym__class_iri,
    STATE(725), 1,
      sym_primary,
    STATE(846), 1,
      sym_conjunction,
    STATE(939), 1,
      sym_description,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9132] = 2,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(665), 20,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [9160] = 2,
    ACTIONS(494), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(667), 20,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [9188] = 3,
    ACTIONS(663), 1,
      anon_sym_and,
    STATE(205), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(455), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9218] = 2,
    ACTIONS(507), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(669), 20,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [9246] = 7,
    ACTIONS(639), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(645), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(647), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(190), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(643), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(641), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(671), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9284] = 1,
    ACTIONS(541), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9310] = 3,
    ACTIONS(661), 1,
      anon_sym_or,
    STATE(202), 1,
      aux_sym_description_repeat1,
    ACTIONS(501), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9340] = 2,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(673), 20,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [9368] = 1,
    ACTIONS(564), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9394] = 3,
    ACTIONS(649), 1,
      anon_sym_and,
    STATE(192), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(325), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9424] = 3,
    ACTIONS(649), 1,
      anon_sym_and,
    STATE(191), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9454] = 12,
    ACTIONS(465), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(467), 1,
      anon_sym_Class_COLON,
    ACTIONS(469), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(471), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(473), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(475), 1,
      anon_sym_Individual_COLON,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(479), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(481), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(246), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [9501] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(677), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9530] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(181), 1,
      sym__class_iri,
    STATE(209), 1,
      sym_primary,
    STATE(236), 1,
      sym_conjunction,
    STATE(303), 1,
      sym_description,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9589] = 3,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(559), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9618] = 3,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(535), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9647] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(683), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9676] = 3,
    ACTIONS(685), 1,
      anon_sym_and,
    STATE(224), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(240), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9705] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(80), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(181), 1,
      sym__class_iri,
    STATE(209), 1,
      sym_primary,
    STATE(236), 1,
      sym_conjunction,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9764] = 3,
    ACTIONS(688), 1,
      anon_sym_and,
    STATE(224), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(374), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9793] = 3,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(690), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9822] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(695), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9851] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(396), 1,
      sym__class_iri,
    STATE(399), 1,
      sym_primary,
    STATE(405), 1,
      sym_conjunction,
    STATE(431), 1,
      sym_description,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9910] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(80), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(242), 1,
      sym__class_iri,
    STATE(247), 1,
      sym_primary,
    STATE(293), 1,
      sym_conjunction,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9969] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(701), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9998] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(110), 1,
      sym__class_iri,
    STATE(117), 1,
      sym_primary,
    STATE(128), 1,
      sym_conjunction,
    STATE(158), 1,
      sym_description,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10057] = 12,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(467), 1,
      anon_sym_Class_COLON,
    ACTIONS(469), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(471), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(473), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(475), 1,
      anon_sym_Individual_COLON,
    ACTIONS(477), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(479), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(481), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(246), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [10104] = 12,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(467), 1,
      anon_sym_Class_COLON,
    ACTIONS(469), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(471), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(473), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(475), 1,
      anon_sym_Individual_COLON,
    ACTIONS(477), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(479), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(481), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(246), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [10151] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(181), 1,
      sym__class_iri,
    STATE(209), 1,
      sym_primary,
    STATE(236), 1,
      sym_conjunction,
    STATE(273), 1,
      sym_description,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10210] = 3,
    ACTIONS(706), 1,
      anon_sym_or,
    STATE(260), 1,
      aux_sym_description_repeat1,
    ACTIONS(501), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10239] = 3,
    ACTIONS(688), 1,
      anon_sym_and,
    STATE(224), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10268] = 3,
    ACTIONS(708), 1,
      anon_sym_and,
    STATE(249), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(459), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10297] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(303), 1,
      sym_description,
    STATE(396), 1,
      sym__class_iri,
    STATE(399), 1,
      sym_primary,
    STATE(405), 1,
      sym_conjunction,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10356] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(242), 1,
      sym__class_iri,
    STATE(247), 1,
      sym_primary,
    STATE(293), 1,
      sym_conjunction,
    STATE(314), 1,
      sym_description,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10415] = 3,
    ACTIONS(688), 1,
      anon_sym_and,
    STATE(226), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10444] = 2,
    ACTIONS(710), 1,
      anon_sym_that,
    ACTIONS(256), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10471] = 3,
    ACTIONS(712), 1,
      anon_sym_or,
    STATE(243), 1,
      aux_sym_description_repeat1,
    ACTIONS(264), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10500] = 3,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(289), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10529] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(80), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(110), 1,
      sym__class_iri,
    STATE(117), 1,
      sym_primary,
    STATE(128), 1,
      sym_conjunction,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10588] = 12,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
    ACTIONS(720), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(723), 1,
      anon_sym_Class_COLON,
    ACTIONS(726), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(729), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(732), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(735), 1,
      anon_sym_Individual_COLON,
    ACTIONS(738), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(741), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(744), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(246), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [10635] = 3,
    ACTIONS(708), 1,
      anon_sym_and,
    STATE(238), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(455), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10664] = 12,
    ACTIONS(465), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(467), 1,
      anon_sym_Class_COLON,
    ACTIONS(469), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(471), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(473), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(475), 1,
      anon_sym_Individual_COLON,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
    ACTIONS(477), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(479), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(481), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(246), 2,
      sym_frame,
      aux_sym_ontology_repeat2,
    STATE(498), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [10711] = 3,
    ACTIONS(747), 1,
      anon_sym_and,
    STATE(249), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(258), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10740] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(750), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10769] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(719), 1,
      sym__class_iri,
    STATE(725), 1,
      sym_primary,
    STATE(846), 1,
      sym_conjunction,
    STATE(925), 1,
      sym_description,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10828] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(752), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10857] = 3,
    ACTIONS(688), 1,
      anon_sym_and,
    STATE(237), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(325), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10886] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(181), 1,
      sym__class_iri,
    STATE(209), 1,
      sym_primary,
    STATE(236), 1,
      sym_conjunction,
    STATE(268), 1,
      sym_description,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10945] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(80), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(150), 1,
      sym_primary,
    STATE(151), 1,
      sym__class_iri,
    STATE(213), 1,
      sym_conjunction,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11004] = 3,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(605), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11033] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(754), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11062] = 3,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(559), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11091] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(752), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11120] = 3,
    ACTIONS(706), 1,
      anon_sym_or,
    STATE(243), 1,
      aux_sym_description_repeat1,
    ACTIONS(519), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11149] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(677), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11178] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(150), 1,
      sym_primary,
    STATE(151), 1,
      sym__class_iri,
    STATE(213), 1,
      sym_conjunction,
    STATE(221), 1,
      sym_description,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11237] = 1,
    ACTIONS(529), 22,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11262] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(420), 1,
      sym_data_range,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [11314] = 8,
    ACTIONS(760), 1,
      anon_sym_DOT,
    STATE(902), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(758), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(762), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(335), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(756), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11352] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(252), 1,
      sym_data_range,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [11404] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(423), 1,
      sym_data_range,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [11456] = 3,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(559), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11484] = 3,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(559), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11512] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(73), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(181), 1,
      sym__class_iri,
    STATE(209), 1,
      sym_primary,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11568] = 3,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(766), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11596] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(73), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(242), 1,
      sym__class_iri,
    STATE(247), 1,
      sym_primary,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11652] = 3,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(770), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11680] = 3,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(269), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(535), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11708] = 3,
    ACTIONS(772), 1,
      anon_sym_or,
    STATE(275), 1,
      aux_sym_description_repeat1,
    ACTIONS(264), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11736] = 3,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(289), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11764] = 3,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(605), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11792] = 1,
    ACTIONS(690), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11816] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(73), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(396), 1,
      sym__class_iri,
    STATE(399), 1,
      sym_primary,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11872] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(73), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(719), 1,
      sym__class_iri,
    STATE(725), 1,
      sym_primary,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11928] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(948), 1,
      sym_data_range,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [11980] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(163), 1,
      sym_data_conjunction,
    STATE(283), 1,
      sym_data_range,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [12032] = 1,
    ACTIONS(778), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12056] = 1,
    ACTIONS(780), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12080] = 3,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(782), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12108] = 1,
    ACTIONS(701), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12132] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(73), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(110), 1,
      sym__class_iri,
    STATE(117), 1,
      sym_primary,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12188] = 7,
    ACTIONS(789), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(795), 1,
      anon_sym_Domain_COLON,
    ACTIONS(798), 1,
      anon_sym_Range_COLON,
    ACTIONS(801), 1,
      anon_sym_Characteristics_COLON,
    STATE(288), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(792), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(787), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12224] = 1,
    ACTIONS(804), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12248] = 3,
    ACTIONS(806), 1,
      anon_sym_or,
    STATE(275), 1,
      aux_sym_description_repeat1,
    ACTIONS(519), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12276] = 7,
    ACTIONS(810), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(814), 1,
      anon_sym_Domain_COLON,
    ACTIONS(816), 1,
      anon_sym_Range_COLON,
    ACTIONS(818), 1,
      anon_sym_Characteristics_COLON,
    STATE(288), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(812), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(808), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12312] = 8,
    ACTIONS(822), 1,
      anon_sym_DOT,
    STATE(901), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(758), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(824), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(335), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(820), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12350] = 3,
    ACTIONS(806), 1,
      anon_sym_or,
    STATE(290), 1,
      aux_sym_description_repeat1,
    ACTIONS(501), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12378] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(73), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(150), 1,
      sym_primary,
    STATE(151), 1,
      sym__class_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12434] = 7,
    ACTIONS(810), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(814), 1,
      anon_sym_Domain_COLON,
    ACTIONS(816), 1,
      anon_sym_Range_COLON,
    ACTIONS(818), 1,
      anon_sym_Characteristics_COLON,
    STATE(291), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(812), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(826), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12470] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12497] = 3,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(605), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12524] = 6,
    ACTIONS(834), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(838), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(840), 1,
      anon_sym_HasKey_COLON,
    STATE(332), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(836), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(832), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12557] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(133), 1,
      sym_data_primary,
    STATE(212), 1,
      sym_data_conjunction,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [12606] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(147), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12633] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12660] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12687] = 1,
    ACTIONS(782), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12710] = 7,
    STATE(899), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(847), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(849), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(348), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(845), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12745] = 1,
    ACTIONS(787), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12768] = 6,
    ACTIONS(834), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(838), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(840), 1,
      anon_sym_HasKey_COLON,
    STATE(298), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(836), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(851), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12801] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(853), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12828] = 3,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(857), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12855] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(68), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12908] = 3,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(862), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12935] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(867), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12962] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(869), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12989] = 3,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(559), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13016] = 3,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(559), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13043] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(867), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13070] = 7,
    STATE(898), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(847), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(875), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(348), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(873), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [13105] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(877), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13132] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(879), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13159] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(68), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13212] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(879), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13239] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(68), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13292] = 2,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(673), 14,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [13317] = 2,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(635), 14,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [13342] = 3,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(289), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13369] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13396] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(884), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13423] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(68), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13476] = 2,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(630), 14,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [13501] = 2,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(609), 14,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
      sym__pn_local,
  [13526] = 1,
    ACTIONS(886), 20,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13549] = 3,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(535), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13576] = 6,
    ACTIONS(888), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(894), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(897), 1,
      anon_sym_HasKey_COLON,
    STATE(332), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(891), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(206), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13609] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(68), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13662] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(68), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13715] = 4,
    ACTIONS(900), 2,
      sym__non_zero,
      sym__zero,
    STATE(335), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 11,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [13744] = 3,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(903), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13770] = 4,
    ACTIONS(907), 2,
      sym__non_zero,
      sym__zero,
    STATE(358), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(99), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(101), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [13798] = 4,
    ACTIONS(909), 2,
      sym__non_zero,
      sym__zero,
    STATE(337), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(116), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(118), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [13826] = 1,
    ACTIONS(911), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13848] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(913), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13874] = 6,
    ACTIONS(919), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(921), 1,
      anon_sym_Types_COLON,
    ACTIONS(923), 1,
      anon_sym_Facts_COLON,
    STATE(342), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(925), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(917), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13906] = 6,
    ACTIONS(929), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(932), 1,
      anon_sym_Types_COLON,
    ACTIONS(935), 1,
      anon_sym_Facts_COLON,
    STATE(342), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(938), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(927), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13938] = 6,
    ACTIONS(919), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(921), 1,
      anon_sym_Types_COLON,
    ACTIONS(923), 1,
      anon_sym_Facts_COLON,
    STATE(341), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(925), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(941), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13970] = 3,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(943), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13996] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(599), 1,
      anon_sym_not,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(53), 1,
      sym_data_atomic,
    STATE(143), 1,
      sym_data_primary,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [14042] = 1,
    ACTIONS(242), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14064] = 1,
    ACTIONS(206), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_DisjointUnionOf_COLON,
      anon_sym_HasKey_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14086] = 4,
    ACTIONS(945), 2,
      sym__non_zero,
      sym__zero,
    STATE(348), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 10,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [14114] = 3,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(903), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14140] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(948), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14166] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(948), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14192] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(950), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14218] = 3,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(955), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14244] = 1,
    ACTIONS(957), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14266] = 1,
    ACTIONS(959), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14288] = 3,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(961), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14314] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(966), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14340] = 4,
    ACTIONS(968), 2,
      sym__non_zero,
      sym__zero,
    STATE(358), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(109), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(111), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [14368] = 1,
    ACTIONS(971), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14390] = 1,
    ACTIONS(862), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14412] = 1,
    ACTIONS(973), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14434] = 1,
    ACTIONS(857), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14456] = 1,
    ACTIONS(975), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14478] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14525] = 1,
    ACTIONS(977), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14546] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14593] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14640] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14687] = 5,
    ACTIONS(981), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(985), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(380), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(983), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(979), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14716] = 8,
    ACTIONS(87), 1,
      anon_sym_f,
    ACTIONS(272), 1,
      anon_sym_F,
    ACTIONS(989), 1,
      anon_sym_DOT,
    STATE(904), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(987), 2,
      sym__non_zero,
      sym__zero,
    STATE(383), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14751] = 1,
    ACTIONS(950), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14772] = 5,
    ACTIONS(993), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(999), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(372), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(996), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(991), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14801] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14848] = 1,
    ACTIONS(961), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14869] = 1,
    ACTIONS(1002), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14890] = 8,
    ACTIONS(1006), 1,
      anon_sym_DOT,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1004), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1008), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(386), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(756), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14925] = 8,
    ACTIONS(97), 1,
      anon_sym_f,
    ACTIONS(281), 1,
      anon_sym_F,
    ACTIONS(1010), 1,
      anon_sym_DOT,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(987), 2,
      sym__non_zero,
      sym__zero,
    STATE(383), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14960] = 8,
    ACTIONS(1012), 1,
      anon_sym_DOT,
    STATE(878), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1004), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1014), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(386), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(820), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14995] = 1,
    ACTIONS(927), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_Types_COLON,
      anon_sym_Facts_COLON,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15016] = 5,
    ACTIONS(981), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(985), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(372), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(983), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(1016), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15045] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(67), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(66), 2,
      sym_restriction,
      sym_atomic,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15092] = 3,
    ACTIONS(1018), 1,
      anon_sym_and,
    STATE(389), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(325), 15,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15116] = 4,
    ACTIONS(127), 1,
      anon_sym_F,
    ACTIONS(1020), 2,
      sym__non_zero,
      sym__zero,
    STATE(383), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 12,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_e,
      anon_sym_E,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15142] = 3,
    ACTIONS(1023), 1,
      anon_sym_and,
    STATE(384), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(258), 15,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15166] = 9,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    STATE(857), 1,
      sym_literal,
    STATE(913), 1,
      sym__lexial_value,
    STATE(940), 1,
      sym_literal_list,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1026), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [15202] = 4,
    ACTIONS(1030), 2,
      sym__non_zero,
      sym__zero,
    STATE(386), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 8,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [15228] = 7,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1033), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1035), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(403), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(845), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(129), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15260] = 3,
    ACTIONS(1037), 1,
      anon_sym_and,
    STATE(388), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(240), 15,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15284] = 3,
    ACTIONS(1018), 1,
      anon_sym_and,
    STATE(388), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 15,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15308] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(51), 1,
      sym_datatype_restriction,
    STATE(64), 1,
      sym_data_atomic,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [15348] = 3,
    ACTIONS(1040), 1,
      anon_sym_and,
    STATE(384), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(459), 15,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15372] = 1,
    ACTIONS(991), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15392] = 13,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    ACTIONS(1042), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1044), 1,
      anon_sym_inverse,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(157), 1,
      sym_iri,
    STATE(429), 1,
      sym_annotations,
    STATE(935), 1,
      sym_data_property_expression,
    STATE(936), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(504), 2,
      sym_object_property_2list,
      sym_data_property_2list,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15436] = 7,
    ACTIONS(131), 1,
      anon_sym_f,
    ACTIONS(285), 1,
      anon_sym_F,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(987), 2,
      sym__non_zero,
      sym__zero,
    STATE(383), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15468] = 7,
    ACTIONS(107), 1,
      anon_sym_f,
    ACTIONS(287), 1,
      anon_sym_F,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(987), 2,
      sym__non_zero,
      sym__zero,
    STATE(383), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15500] = 2,
    ACTIONS(1046), 1,
      anon_sym_that,
    ACTIONS(256), 16,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15522] = 8,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    STATE(913), 1,
      sym__lexial_value,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1026), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(853), 2,
      sym_literal,
      sym__restriction_value,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [15556] = 3,
    ACTIONS(1018), 1,
      anon_sym_and,
    STATE(401), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 15,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15580] = 3,
    ACTIONS(1040), 1,
      anon_sym_and,
    STATE(391), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(455), 15,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15604] = 8,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    STATE(913), 1,
      sym__lexial_value,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1026), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(871), 2,
      sym_literal,
      sym__restriction_value,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [15638] = 3,
    ACTIONS(1018), 1,
      anon_sym_and,
    STATE(388), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(374), 15,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15662] = 7,
    STATE(884), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1033), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1048), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(403), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(873), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(105), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15694] = 4,
    ACTIONS(1050), 2,
      sym__non_zero,
      sym__zero,
    STATE(403), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 7,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [15719] = 3,
    ACTIONS(1055), 1,
      anon_sym_Annotations_COLON,
    STATE(404), 2,
      sym_annotations,
      aux_sym_ontology_repeat1,
    ACTIONS(1053), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15742] = 3,
    ACTIONS(1058), 1,
      anon_sym_or,
    STATE(412), 1,
      aux_sym_description_repeat1,
    ACTIONS(501), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15765] = 8,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    STATE(69), 1,
      sym_literal,
    STATE(929), 1,
      sym__lexial_value,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1060), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [15798] = 4,
    ACTIONS(1065), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1068), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(414), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1062), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15823] = 13,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1072), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1074), 1,
      anon_sym_not,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(317), 1,
      sym_fact,
    STATE(379), 1,
      sym_fact_annotated_list,
    STATE(417), 1,
      sym__data_property_iri,
    STATE(488), 1,
      sym_annotations,
    STATE(549), 1,
      sym__object_property_iri,
    STATE(580), 1,
      sym_iri,
    STATE(339), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15866] = 3,
    ACTIONS(1080), 1,
      anon_sym_or,
    STATE(409), 1,
      aux_sym_description_repeat1,
    ACTIONS(264), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15889] = 4,
    ACTIONS(1085), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1087), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(407), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1083), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15914] = 4,
    ACTIONS(1085), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1091), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(410), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1089), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15939] = 3,
    ACTIONS(1058), 1,
      anon_sym_or,
    STATE(409), 1,
      aux_sym_description_repeat1,
    ACTIONS(519), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15962] = 8,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    STATE(69), 1,
      sym_literal,
    STATE(929), 1,
      sym__lexial_value,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1026), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [15995] = 3,
    ACTIONS(1065), 1,
      anon_sym_Annotations_COLON,
    STATE(414), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1068), 14,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16018] = 8,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    STATE(874), 1,
      sym_literal,
    STATE(913), 1,
      sym__lexial_value,
    ACTIONS(298), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1026), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [16051] = 11,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_inverse,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    ACTIONS(1042), 1,
      anon_sym_Annotations_COLON,
    STATE(157), 1,
      sym_iri,
    STATE(207), 1,
      sym__data_property_iri,
    STATE(467), 1,
      sym_annotations,
    STATE(208), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(54), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16090] = 8,
    ACTIONS(304), 1,
      sym__quoted_string,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    STATE(363), 1,
      sym_literal,
    STATE(929), 1,
      sym__lexial_value,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1060), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
    STATE(20), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [16123] = 8,
    ACTIONS(1095), 1,
      anon_sym_DOT,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(756), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1093), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1097), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(487), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16155] = 8,
    ACTIONS(1101), 1,
      anon_sym_DOT,
    STATE(896), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(756), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1099), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1103), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(465), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16187] = 3,
    ACTIONS(1085), 1,
      anon_sym_Annotations_COLON,
    STATE(426), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1105), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16209] = 3,
    ACTIONS(1085), 1,
      anon_sym_Annotations_COLON,
    STATE(414), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1105), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16231] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1107), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(216), 1,
      sym_restriction,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(671), 1,
      sym_iri,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16271] = 3,
    ACTIONS(1085), 1,
      anon_sym_Annotations_COLON,
    STATE(436), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1109), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16293] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1111), 1,
      anon_sym_not,
    STATE(59), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(671), 1,
      sym_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16333] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1113), 1,
      anon_sym_not,
    STATE(59), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(671), 1,
      sym_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16373] = 3,
    ACTIONS(1085), 1,
      anon_sym_Annotations_COLON,
    STATE(414), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1109), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16395] = 8,
    ACTIONS(1115), 1,
      anon_sym_DOT,
    STATE(897), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(820), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1099), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1117), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(465), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16427] = 8,
    ACTIONS(1119), 1,
      anon_sym_DOT,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(820), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1093), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1121), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(487), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16459] = 11,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    ACTIONS(1044), 1,
      anon_sym_inverse,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(157), 1,
      sym_iri,
    STATE(935), 1,
      sym_data_property_expression,
    STATE(936), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(494), 2,
      sym_object_property_2list,
      sym_data_property_2list,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16497] = 3,
    ACTIONS(1085), 1,
      anon_sym_Annotations_COLON,
    STATE(421), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1123), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16519] = 3,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(770), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16541] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1127), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(671), 1,
      sym_iri,
    STATE(781), 1,
      sym_restriction,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16581] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1129), 1,
      anon_sym_not,
    STATE(59), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(671), 1,
      sym_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16621] = 8,
    ACTIONS(1133), 1,
      anon_sym_DOT,
    STATE(893), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(820), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1131), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1135), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(478), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16653] = 12,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1072), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1074), 1,
      anon_sym_not,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(360), 1,
      sym_fact,
    STATE(417), 1,
      sym__data_property_iri,
    STATE(507), 1,
      sym_annotations,
    STATE(549), 1,
      sym__object_property_iri,
    STATE(580), 1,
      sym_iri,
    STATE(339), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16693] = 3,
    ACTIONS(1085), 1,
      anon_sym_Annotations_COLON,
    STATE(414), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1137), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16715] = 1,
    ACTIONS(1139), 15,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16733] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1141), 1,
      anon_sym_not,
    STATE(59), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(671), 1,
      sym_iri,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16773] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1143), 1,
      anon_sym_not,
    STATE(59), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(671), 1,
      sym_iri,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16813] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1145), 1,
      anon_sym_not,
    STATE(59), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(671), 1,
      sym_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16853] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1147), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(148), 1,
      sym_restriction,
    STATE(671), 1,
      sym_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16893] = 3,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_data_property_2list_repeat1,
    ACTIONS(1149), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16915] = 3,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(766), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16937] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1154), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(382), 1,
      sym_restriction,
    STATE(671), 1,
      sym_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16977] = 2,
    ACTIONS(157), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(159), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [16997] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1156), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17019] = 3,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1139), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17041] = 3,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1164), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17063] = 3,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(453), 1,
      aux_sym_data_property_2list_repeat1,
    ACTIONS(1168), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17085] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1172), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17107] = 3,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(782), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17129] = 1,
    ACTIONS(1068), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17147] = 3,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_data_property_2list_repeat1,
    ACTIONS(1179), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17169] = 3,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1181), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17191] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1183), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(253), 1,
      sym_restriction,
    STATE(671), 1,
      sym_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17231] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1185), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(100), 1,
      sym_restriction,
    STATE(671), 1,
      sym_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17271] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1187), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17293] = 8,
    ACTIONS(1189), 1,
      anon_sym_DOT,
    STATE(894), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(756), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1131), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1191), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(478), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17325] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(72), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(671), 1,
      sym_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17362] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(398), 1,
      sym_restriction,
    STATE(671), 1,
      sym_iri,
    STATE(676), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17399] = 10,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    ACTIONS(1193), 1,
      anon_sym_Annotations_COLON,
    STATE(504), 1,
      sym_individual_2list,
    STATE(520), 1,
      sym_annotations,
    STATE(934), 1,
      sym_individual,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17434] = 7,
    STATE(909), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(873), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1195), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1197), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17463] = 7,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(845), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1195), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1199), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17492] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1042), 1,
      anon_sym_Annotations_COLON,
    STATE(176), 1,
      sym_object_property_expression,
    STATE(263), 1,
      sym_object_property_expression_annotated_list,
    STATE(544), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [17527] = 4,
    ACTIONS(1201), 2,
      sym__non_zero,
      sym__zero,
    STATE(465), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 7,
      anon_sym__COLON,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [17550] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    ACTIONS(1193), 1,
      anon_sym_Annotations_COLON,
    STATE(326), 1,
      sym_individual,
    STATE(379), 1,
      sym_individual_annotated_list,
    STATE(551), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [17585] = 9,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_inverse,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    STATE(157), 1,
      sym_iri,
    STATE(207), 1,
      sym__data_property_iri,
    STATE(208), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(60), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17618] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(72), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(671), 1,
      sym_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17655] = 7,
    STATE(895), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(873), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1204), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1206), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(508), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17684] = 7,
    STATE(892), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(845), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1208), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1210), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(499), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17713] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(217), 1,
      sym_restriction,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(671), 1,
      sym_iri,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17750] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(241), 1,
      sym_restriction,
    STATE(671), 1,
      sym_iri,
    STATE(674), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17787] = 7,
    STATE(890), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(845), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1204), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1212), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(508), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17816] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(72), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(670), 1,
      sym_data_property_expression,
    STATE(671), 1,
      sym_iri,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17853] = 1,
    ACTIONS(1149), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17870] = 1,
    ACTIONS(1156), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [17887] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(72), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(671), 1,
      sym_iri,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17924] = 4,
    ACTIONS(1214), 2,
      sym__non_zero,
      sym__zero,
    STATE(478), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [17947] = 7,
    STATE(891), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(873), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1208), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1217), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(499), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17976] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(147), 1,
      sym_restriction,
    STATE(671), 1,
      sym_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18013] = 8,
    ACTIONS(820), 1,
      sym__pn_local,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1219), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1223), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(496), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18044] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(121), 1,
      sym_restriction,
    STATE(671), 1,
      sym_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18081] = 8,
    ACTIONS(756), 1,
      sym__pn_local,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    STATE(868), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1219), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1227), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(496), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18112] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(72), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(671), 1,
      sym_iri,
    STATE(681), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18149] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(72), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(671), 1,
      sym_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18186] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(669), 1,
      sym_data_property_expression,
    STATE(671), 1,
      sym_iri,
    STATE(708), 1,
      sym_restriction,
    STATE(941), 1,
      sym_object_property_expression,
    STATE(126), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18223] = 4,
    ACTIONS(1229), 2,
      sym__non_zero,
      sym__zero,
    STATE(487), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [18246] = 10,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1074), 1,
      anon_sym_not,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(320), 1,
      sym_fact,
    STATE(417), 1,
      sym__data_property_iri,
    STATE(549), 1,
      sym__object_property_iri,
    STATE(580), 1,
      sym_iri,
    STATE(339), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18280] = 7,
    ACTIONS(873), 1,
      sym__pn_local,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1232), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1234), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(523), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18308] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(411), 1,
      sym_datatype,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18336] = 7,
    ACTIONS(845), 1,
      sym__pn_local,
    STATE(872), 1,
      sym__exponent,
    ACTIONS(91), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1232), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1236), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(523), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18364] = 7,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(451), 1,
      sym__pn_local,
    ACTIONS(453), 1,
      sym__pname_ln,
    STATE(746), 1,
      sym_datatype,
    STATE(769), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(724), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1238), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18392] = 7,
    ACTIONS(329), 1,
      anon_sym_LT,
    ACTIONS(343), 1,
      sym__pn_local,
    ACTIONS(345), 1,
      sym__pname_ln,
    STATE(650), 1,
      sym_datatype,
    STATE(653), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(652), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1240), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18420] = 1,
    ACTIONS(1242), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [18436] = 7,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(430), 1,
      sym__pn_local,
    ACTIONS(432), 1,
      sym__pname_ln,
    STATE(782), 1,
      sym_datatype,
    STATE(826), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(813), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1244), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18464] = 4,
    ACTIONS(1246), 2,
      sym__non_zero,
      sym__zero,
    STATE(496), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 6,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18486] = 7,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    STATE(21), 1,
      sym_datatype,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18514] = 1,
    ACTIONS(1249), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [18530] = 4,
    ACTIONS(1251), 2,
      sym__non_zero,
      sym__zero,
    STATE(499), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [18552] = 7,
    ACTIONS(347), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      sym__pn_local,
    ACTIONS(363), 1,
      sym__pname_ln,
    STATE(778), 1,
      sym_datatype,
    STATE(748), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(779), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1254), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18580] = 7,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(390), 1,
      sym__pn_local,
    ACTIONS(392), 1,
      sym__pname_ln,
    STATE(568), 1,
      sym_datatype,
    STATE(571), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(564), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1256), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18608] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1042), 1,
      anon_sym_Annotations_COLON,
    STATE(203), 1,
      sym_object_property_expression,
    STATE(566), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [18640] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1260), 1,
      sym__language_tag,
    ACTIONS(43), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1258), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18662] = 1,
    ACTIONS(1262), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [18678] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(21), 1,
      sym_datatype,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18706] = 7,
    ACTIONS(394), 1,
      anon_sym_LT,
    ACTIONS(408), 1,
      sym__pn_local,
    ACTIONS(410), 1,
      sym__pname_ln,
    STATE(773), 1,
      sym_datatype,
    STATE(709), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(720), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1264), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18734] = 10,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1074), 1,
      anon_sym_not,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(355), 1,
      sym_fact,
    STATE(417), 1,
      sym__data_property_iri,
    STATE(549), 1,
      sym__object_property_iri,
    STATE(580), 1,
      sym_iri,
    STATE(339), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18768] = 4,
    ACTIONS(1266), 2,
      sym__non_zero,
      sym__zero,
    STATE(508), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [18790] = 9,
    ACTIONS(1042), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1269), 1,
      anon_sym_LT,
    ACTIONS(1271), 1,
      anon_sym_inverse,
    ACTIONS(1273), 1,
      sym__pn_local,
    ACTIONS(1275), 1,
      sym__pname_ln,
    STATE(142), 1,
      sym_object_property_expression,
    STATE(547), 1,
      sym_annotations,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(187), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18822] = 4,
    ACTIONS(1277), 2,
      sym__non_zero,
      sym__zero,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 6,
      anon_sym__COLON,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18844] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    ACTIONS(1193), 1,
      anon_sym_Annotations_COLON,
    STATE(362), 1,
      sym_individual,
    STATE(569), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [18876] = 4,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1280), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18897] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(631), 1,
      sym_annotations,
    STATE(690), 1,
      sym_annotation,
    STATE(818), 1,
      sym_annotation_annotated_list,
    STATE(116), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18928] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(617), 1,
      sym_annotations,
    STATE(691), 1,
      sym_annotation,
    STATE(836), 1,
      sym_annotation_annotated_list,
    STATE(102), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18959] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(597), 1,
      sym_annotations,
    STATE(745), 1,
      sym_annotation,
    STATE(856), 1,
      sym_annotation_annotated_list,
    STATE(114), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18990] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(93), 1,
      sym_annotation,
    STATE(263), 1,
      sym_annotation_annotated_list,
    STATE(602), 1,
      sym_annotations,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19021] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(93), 1,
      sym_annotation,
    STATE(347), 1,
      sym_annotation_annotated_list,
    STATE(602), 1,
      sym_annotations,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19052] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(93), 1,
      sym_annotation,
    STATE(305), 1,
      sym_annotation_annotated_list,
    STATE(602), 1,
      sym_annotations,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19083] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(93), 1,
      sym_annotation,
    STATE(452), 1,
      sym_annotation_annotated_list,
    STATE(602), 1,
      sym_annotations,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19114] = 8,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(494), 1,
      sym_individual_2list,
    STATE(934), 1,
      sym_individual,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19143] = 4,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    STATE(512), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1286), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19164] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(257), 1,
      sym_data_property_expression,
    STATE(305), 1,
      sym_data_property_expression_annotated_list,
    STATE(609), 1,
      sym_annotations,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19195] = 4,
    ACTIONS(1288), 2,
      sym__non_zero,
      sym__zero,
    STATE(523), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(127), 5,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [19216] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(610), 1,
      sym_annotations,
    STATE(682), 1,
      sym_annotation,
    STATE(793), 1,
      sym_annotation_annotated_list,
    STATE(109), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19247] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(521), 1,
      sym_annotation,
    STATE(586), 1,
      sym_annotation_annotated_list,
    STATE(593), 1,
      sym_annotations,
    STATE(108), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19278] = 8,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(849), 1,
      sym_individual,
    STATE(926), 1,
      sym_individual_list,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19307] = 4,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    STATE(533), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1280), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19328] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(596), 1,
      sym_annotations,
    STATE(616), 1,
      sym_annotation,
    STATE(673), 1,
      sym_annotation_annotated_list,
    STATE(101), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19359] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(93), 1,
      sym_annotation,
    STATE(392), 1,
      sym_annotation_annotated_list,
    STATE(602), 1,
      sym_annotations,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19390] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(296), 1,
      sym_annotation,
    STATE(379), 1,
      sym_annotation_annotated_list,
    STATE(628), 1,
      sym_annotations,
    STATE(105), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19421] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(93), 1,
      sym_annotation,
    STATE(289), 1,
      sym_annotation_annotated_list,
    STATE(602), 1,
      sym_annotations,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19452] = 9,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(289), 1,
      sym_annotation_annotated_list,
    STATE(623), 1,
      sym_annotation,
    STATE(633), 1,
      sym_annotations,
    STATE(99), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19483] = 4,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1291), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19504] = 4,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(147), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1293), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19525] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(457), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [19551] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(38), 1,
      sym_annotation,
    STATE(607), 1,
      sym_annotations,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19579] = 2,
    ACTIONS(39), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(630), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19595] = 2,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(609), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19611] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(448), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [19637] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(69), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [19663] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(38), 1,
      sym_annotation,
    STATE(637), 1,
      sym_annotations,
    STATE(105), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19691] = 2,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(673), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19707] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(620), 1,
      sym_annotations,
    STATE(732), 1,
      sym_annotation,
    STATE(102), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19735] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(174), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [19761] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(392), 1,
      sym_annotation_property_iri_annotated_list,
    STATE(649), 1,
      sym_annotations,
    STATE(340), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19789] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(437), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [19815] = 7,
    ACTIONS(1269), 1,
      anon_sym_LT,
    ACTIONS(1271), 1,
      anon_sym_inverse,
    ACTIONS(1273), 1,
      sym__pn_local,
    ACTIONS(1275), 1,
      sym__pname_ln,
    STATE(166), 1,
      sym_object_property_expression,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(187), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19841] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(417), 1,
      sym__data_property_iri,
    STATE(549), 1,
      sym__object_property_iri,
    STATE(580), 1,
      sym_iri,
    STATE(359), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19869] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(361), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [19895] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(612), 1,
      sym_annotations,
    STATE(757), 1,
      sym_annotation,
    STATE(109), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19923] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(315), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [19949] = 7,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(437), 1,
      sym_individual,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19975] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(343), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20001] = 7,
    ACTIONS(1269), 1,
      anon_sym_LT,
    ACTIONS(1271), 1,
      anon_sym_inverse,
    ACTIONS(1273), 1,
      sym__pn_local,
    ACTIONS(1275), 1,
      sym__pname_ln,
    STATE(199), 1,
      sym_object_property_expression,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(187), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20027] = 5,
    ACTIONS(1298), 1,
      anon_sym_Annotations_COLON,
    STATE(179), 1,
      sym_object_property_characteristic,
    STATE(263), 1,
      sym_object_property_characteristic_annotated_list,
    STATE(655), 1,
      sym_annotations,
    ACTIONS(1300), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20049] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(278), 1,
      sym_data_property_expression,
    STATE(618), 1,
      sym_annotations,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20077] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(560), 1,
      sym_annotation,
    STATE(635), 1,
      sym_annotations,
    STATE(108), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20105] = 2,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1302), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20121] = 2,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1304), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20137] = 2,
    ACTIONS(147), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1293), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20153] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(476), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [20179] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(38), 1,
      sym_annotation,
    STATE(632), 1,
      sym_annotations,
    STATE(99), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20207] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(599), 1,
      sym_annotations,
    STATE(799), 1,
      sym_annotation,
    STATE(114), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20235] = 2,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(635), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20251] = 2,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1306), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20267] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(198), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(126), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [20293] = 2,
    ACTIONS(151), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1308), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20309] = 2,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1310), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20325] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(294), 1,
      anon_sym__COLON,
    STATE(354), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(47), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20351] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(630), 1,
      sym_annotations,
    STATE(736), 1,
      sym_annotation,
    STATE(116), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20379] = 2,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1312), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20395] = 8,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(604), 1,
      sym_annotations,
    STATE(646), 1,
      sym_annotation,
    STATE(101), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20423] = 2,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1314), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20439] = 2,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1316), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20455] = 2,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1318), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20471] = 2,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1320), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20487] = 2,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1322), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20503] = 2,
    ACTIONS(143), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1324), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20519] = 2,
    ACTIONS(79), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1326), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20535] = 4,
    ACTIONS(68), 2,
      anon_sym_PLUS,
      sym__quoted_string,
    ACTIONS(1328), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1330), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1332), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
  [20554] = 2,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(635), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [20569] = 2,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(673), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [20584] = 2,
    ACTIONS(39), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(630), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [20599] = 2,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(609), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [20614] = 4,
    ACTIONS(1298), 1,
      anon_sym_Annotations_COLON,
    STATE(215), 1,
      sym_object_property_characteristic,
    STATE(645), 1,
      sym_annotations,
    ACTIONS(1300), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20633] = 2,
    ACTIONS(804), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1334), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20648] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1336), 1,
      sym__language_tag,
    ACTIONS(1258), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(43), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20667] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(643), 1,
      sym_annotations,
    STATE(374), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20692] = 3,
    STATE(400), 1,
      sym_facet,
    ACTIONS(1338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1340), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [20709] = 3,
    STATE(397), 1,
      sym_facet,
    ACTIONS(1338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1340), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [20726] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(344), 1,
      sym_iri,
    STATE(392), 1,
      sym_iri_annotated_list,
    STATE(672), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20753] = 5,
    STATE(878), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1342), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [20773] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(527), 1,
      sym_annotation,
    STATE(108), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20795] = 4,
    ACTIONS(1344), 1,
      anon_sym_COMMA,
    STATE(595), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1291), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(314), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20813] = 4,
    ACTIONS(1346), 1,
      anon_sym_COMMA,
    STATE(595), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1293), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(147), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20831] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(600), 1,
      sym_annotation,
    STATE(101), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20853] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(752), 1,
      sym_annotation,
    STATE(114), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20875] = 5,
    STATE(872), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1349), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [20895] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(794), 1,
      sym_annotation,
    STATE(114), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20917] = 4,
    ACTIONS(1344), 1,
      anon_sym_COMMA,
    STATE(594), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1280), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(312), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20935] = 4,
    ACTIONS(1344), 1,
      anon_sym_COMMA,
    STATE(595), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1280), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(312), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20953] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(94), 1,
      sym_annotation,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20975] = 5,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1351), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [20995] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(661), 1,
      sym_annotation,
    STATE(101), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21017] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(449), 1,
      sym_data_property_expression,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21039] = 5,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21059] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(40), 1,
      sym_annotation,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21081] = 5,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1353), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21101] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(261), 1,
      sym_data_property_expression,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21123] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(693), 1,
      sym_annotation,
    STATE(109), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21145] = 5,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1355), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21165] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(729), 1,
      sym_annotation,
    STATE(109), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21187] = 5,
    STATE(890), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1357), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21207] = 5,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(131), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21227] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(475), 1,
      sym_data_property_expression,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21249] = 4,
    ACTIONS(1344), 1,
      anon_sym_COMMA,
    STATE(601), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1286), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21267] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(685), 1,
      sym_annotation,
    STATE(102), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21289] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(284), 1,
      sym_data_property_expression,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21311] = 5,
    STATE(897), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1359), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21331] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(713), 1,
      sym_annotation,
    STATE(102), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21353] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(625), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21369] = 5,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1363), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21389] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(626), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21405] = 3,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    STATE(624), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(147), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21421] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(624), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21437] = 3,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(624), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21453] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(371), 1,
      sym_iri,
    STATE(680), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21477] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(325), 1,
      sym_annotation,
    STATE(105), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21499] = 5,
    STATE(901), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1368), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21519] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(750), 1,
      sym_annotation,
    STATE(116), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21541] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(701), 1,
      sym_annotation,
    STATE(116), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21563] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(40), 1,
      sym_annotation,
    STATE(99), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21585] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(621), 1,
      sym_annotation,
    STATE(99), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21607] = 5,
    STATE(892), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1370), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21627] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(567), 1,
      sym_annotation,
    STATE(108), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21649] = 5,
    STATE(893), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1372), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21669] = 6,
    ACTIONS(1070), 1,
      anon_sym_LT,
    ACTIONS(1076), 1,
      sym__pn_local,
    ACTIONS(1078), 1,
      sym__pname_ln,
    STATE(40), 1,
      sym_annotation,
    STATE(105), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(581), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21691] = 5,
    STATE(899), 1,
      sym__exponent,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1374), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [21711] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(131), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21730] = 2,
    ACTIONS(609), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21743] = 5,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(202), 1,
      sym__pname_ln,
    STATE(131), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(323), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21762] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(306), 2,
      sym_iri,
      sym__class_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21781] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(375), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21800] = 2,
    ACTIONS(1318), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21813] = 2,
    STATE(200), 1,
      sym_object_property_characteristic,
    ACTIONS(1300), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21826] = 2,
    ACTIONS(1293), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(147), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21839] = 2,
    ACTIONS(673), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21852] = 2,
    ACTIONS(1314), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21865] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(351), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21884] = 2,
    ACTIONS(1310), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21897] = 5,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    STATE(210), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21916] = 2,
    ACTIONS(635), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21929] = 2,
    ACTIONS(1312), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21942] = 2,
    ACTIONS(630), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(39), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21955] = 2,
    STATE(168), 1,
      sym_object_property_characteristic,
    ACTIONS(1300), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21968] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(369), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21987] = 2,
    ACTIONS(1320), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22000] = 2,
    ACTIONS(1324), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22013] = 2,
    ACTIONS(1316), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22026] = 2,
    ACTIONS(1326), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(79), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22039] = 2,
    ACTIONS(1308), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(151), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22052] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(295), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22071] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(211), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22090] = 5,
    ACTIONS(1269), 1,
      anon_sym_LT,
    ACTIONS(1273), 1,
      sym__pn_local,
    ACTIONS(1275), 1,
      sym__pname_ln,
    STATE(131), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(187), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22109] = 2,
    ACTIONS(1322), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22122] = 2,
    ACTIONS(1302), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22135] = 2,
    ACTIONS(1304), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22148] = 2,
    ACTIONS(1306), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22161] = 4,
    ACTIONS(1378), 1,
      anon_sym_Self,
    ACTIONS(1382), 1,
      anon_sym_value,
    ACTIONS(1376), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1380), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22177] = 4,
    ACTIONS(1378), 1,
      anon_sym_Self,
    ACTIONS(1382), 1,
      anon_sym_value,
    ACTIONS(1384), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1386), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22193] = 2,
    ACTIONS(70), 1,
      anon_sym_value,
    ACTIONS(68), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22205] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(349), 1,
      sym_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22223] = 2,
    ACTIONS(1334), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(804), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [22235] = 4,
    ACTIONS(1378), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1388), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1390), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22251] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1394), 1,
      sym__language_tag,
    ACTIONS(1258), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22267] = 4,
    ACTIONS(1378), 1,
      anon_sym_Self,
    ACTIONS(1382), 1,
      anon_sym_value,
    ACTIONS(1396), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1398), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22283] = 4,
    ACTIONS(1378), 1,
      anon_sym_Self,
    ACTIONS(1382), 1,
      anon_sym_value,
    ACTIONS(1400), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1402), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22299] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1404), 1,
      sym__language_tag,
    ACTIONS(1258), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22315] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1406), 1,
      sym__language_tag,
    ACTIONS(1258), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22331] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(365), 1,
      sym_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22349] = 4,
    ACTIONS(1378), 1,
      anon_sym_Self,
    ACTIONS(1382), 1,
      anon_sym_value,
    ACTIONS(1408), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1410), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22365] = 4,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(692), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22380] = 4,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1280), 2,
      anon_sym_not,
      sym__pn_local,
  [22395] = 4,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(696), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1280), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22410] = 4,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(698), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1280), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22425] = 3,
    ACTIONS(1418), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1420), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(687), 2,
      aux_sym__digits,
      sym__digit,
  [22438] = 3,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1422), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [22451] = 4,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22466] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1258), 1,
      sym__pn_local,
    ACTIONS(1424), 1,
      sym__language_tag,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22481] = 4,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    STATE(683), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym_not,
      sym__pn_local,
  [22496] = 4,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(684), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22511] = 4,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1280), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22526] = 4,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1280), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22541] = 4,
    ACTIONS(1426), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(147), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym_not,
      sym__pn_local,
  [22556] = 4,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym_not,
      sym__pn_local,
  [22571] = 4,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(696), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(147), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22586] = 1,
    ACTIONS(1432), 6,
      sym__non_zero,
      sym__zero,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__quoted_string,
  [22595] = 4,
    ACTIONS(1416), 1,
      anon_sym_COMMA,
    STATE(696), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22610] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(147), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22625] = 3,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1437), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [22638] = 4,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    STATE(695), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1280), 2,
      anon_sym_not,
      sym__pn_local,
  [22653] = 2,
    ACTIONS(630), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22663] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(949), 1,
      sym_ontology,
    STATE(832), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [22677] = 2,
    ACTIONS(1322), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22687] = 2,
    ACTIONS(1318), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22697] = 3,
    ACTIONS(1441), 1,
      anon_sym_DOT,
    ACTIONS(1439), 2,
      sym__non_zero,
      sym__zero,
    STATE(428), 2,
      aux_sym__digits,
      sym__digit,
  [22709] = 3,
    ACTIONS(1443), 1,
      anon_sym_and,
    STATE(772), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(459), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [22721] = 3,
    ACTIONS(1445), 1,
      anon_sym_and,
    STATE(727), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [22733] = 2,
    ACTIONS(1312), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22743] = 3,
    ACTIONS(1445), 1,
      anon_sym_and,
    STATE(728), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(414), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [22755] = 2,
    ACTIONS(1306), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22765] = 3,
    ACTIONS(1449), 1,
      anon_sym_SLASH,
    STATE(742), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1447), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [22777] = 2,
    ACTIONS(1308), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22787] = 2,
    ACTIONS(609), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22797] = 2,
    ACTIONS(1326), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22807] = 2,
    ACTIONS(1314), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22817] = 3,
    ACTIONS(1453), 1,
      anon_sym_DOT,
    ACTIONS(1451), 2,
      sym__non_zero,
      sym__zero,
    STATE(377), 2,
      aux_sym__digits,
      sym__digit,
  [22829] = 2,
    ACTIONS(630), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22839] = 2,
    ACTIONS(1455), 1,
      anon_sym_that,
    ACTIONS(256), 4,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
  [22849] = 2,
    ACTIONS(635), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22859] = 2,
    ACTIONS(1320), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22869] = 3,
    ACTIONS(1459), 1,
      anon_sym_DOT,
    ACTIONS(1457), 2,
      sym__non_zero,
      sym__zero,
    STATE(378), 2,
      aux_sym__digits,
      sym__digit,
  [22881] = 2,
    ACTIONS(1316), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22891] = 2,
    ACTIONS(635), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22901] = 3,
    ACTIONS(1443), 1,
      anon_sym_and,
    STATE(707), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(455), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [22913] = 3,
    ACTIONS(1453), 1,
      anon_sym_DOT,
    ACTIONS(1461), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [22925] = 3,
    ACTIONS(1445), 1,
      anon_sym_and,
    STATE(728), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(374), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [22937] = 3,
    ACTIONS(1463), 1,
      anon_sym_and,
    STATE(728), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(240), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [22949] = 2,
    ACTIONS(1308), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22959] = 3,
    ACTIONS(1468), 1,
      anon_sym_DOT,
    ACTIONS(1466), 2,
      sym__non_zero,
      sym__zero,
    STATE(434), 2,
      aux_sym__digits,
      sym__digit,
  [22971] = 2,
    ACTIONS(673), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22981] = 2,
    ACTIONS(1293), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22991] = 2,
    ACTIONS(609), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23001] = 2,
    ACTIONS(1306), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23011] = 2,
    ACTIONS(1302), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23021] = 2,
    ACTIONS(1293), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23031] = 2,
    ACTIONS(1304), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23041] = 2,
    ACTIONS(1324), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23051] = 2,
    ACTIONS(1302), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23061] = 2,
    ACTIONS(1314), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23071] = 2,
    ACTIONS(1304), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23081] = 3,
    ACTIONS(1472), 1,
      anon_sym_SLASH,
    STATE(742), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1470), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [23093] = 2,
    ACTIONS(1326), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23103] = 3,
    ACTIONS(1453), 1,
      anon_sym_DOT,
    ACTIONS(1475), 2,
      sym__non_zero,
      sym__zero,
    STATE(79), 2,
      aux_sym__digits,
      sym__digit,
  [23115] = 4,
    ACTIONS(1286), 1,
      sym__pn_local,
    ACTIONS(1477), 1,
      anon_sym_COMMA,
    STATE(753), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23129] = 2,
    ACTIONS(1310), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23139] = 3,
    ACTIONS(1481), 1,
      anon_sym_DOT,
    ACTIONS(1479), 2,
      sym__non_zero,
      sym__zero,
    STATE(481), 2,
      aux_sym__digits,
      sym__digit,
  [23151] = 2,
    ACTIONS(1312), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23161] = 2,
    ACTIONS(1320), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23171] = 2,
    ACTIONS(1308), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23181] = 3,
    ACTIONS(1485), 1,
      anon_sym_DOT,
    ACTIONS(1483), 2,
      sym__non_zero,
      sym__zero,
    STATE(427), 2,
      aux_sym__digits,
      sym__digit,
  [23193] = 4,
    ACTIONS(1280), 1,
      sym__pn_local,
    ACTIONS(1477), 1,
      anon_sym_COMMA,
    STATE(762), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23207] = 4,
    ACTIONS(1280), 1,
      sym__pn_local,
    ACTIONS(1477), 1,
      anon_sym_COMMA,
    STATE(780), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23221] = 2,
    ACTIONS(1316), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23231] = 2,
    ACTIONS(1306), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23241] = 2,
    ACTIONS(1318), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23251] = 2,
    ACTIONS(1293), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23261] = 2,
    ACTIONS(1322), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23271] = 2,
    ACTIONS(1324), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23281] = 2,
    ACTIONS(1316), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23291] = 2,
    ACTIONS(1304), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23301] = 4,
    ACTIONS(1291), 1,
      sym__pn_local,
    ACTIONS(1477), 1,
      anon_sym_COMMA,
    STATE(780), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23315] = 2,
    ACTIONS(1324), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23325] = 2,
    ACTIONS(1302), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23335] = 2,
    ACTIONS(1322), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23345] = 2,
    ACTIONS(673), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23355] = 2,
    ACTIONS(609), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23365] = 2,
    ACTIONS(1314), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23375] = 2,
    ACTIONS(1312), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23385] = 2,
    ACTIONS(673), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23395] = 2,
    ACTIONS(630), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23405] = 3,
    ACTIONS(1487), 1,
      anon_sym_and,
    STATE(772), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(258), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23417] = 2,
    ACTIONS(1310), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23427] = 3,
    ACTIONS(1492), 1,
      anon_sym_DOT,
    ACTIONS(1490), 2,
      sym__non_zero,
      sym__zero,
    STATE(292), 2,
      aux_sym__digits,
      sym__digit,
  [23439] = 2,
    ACTIONS(1326), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23449] = 2,
    ACTIONS(1320), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23459] = 2,
    ACTIONS(1318), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23469] = 2,
    ACTIONS(1310), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23479] = 2,
    ACTIONS(635), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23489] = 4,
    ACTIONS(1293), 1,
      sym__pn_local,
    ACTIONS(1494), 1,
      anon_sym_COMMA,
    STATE(780), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(147), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23503] = 3,
    ACTIONS(1445), 1,
      anon_sym_and,
    STATE(710), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(325), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23515] = 2,
    ACTIONS(1310), 1,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23524] = 2,
    ACTIONS(1497), 2,
      sym__non_zero,
      sym__zero,
    STATE(603), 2,
      aux_sym__digits,
      sym__digit,
  [23533] = 2,
    ACTIONS(1499), 2,
      sym__non_zero,
      sym__zero,
    STATE(489), 2,
      aux_sym__digits,
      sym__digit,
  [23542] = 2,
    ACTIONS(1314), 1,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23551] = 2,
    ACTIONS(1501), 2,
      sym__non_zero,
      sym__zero,
    STATE(622), 2,
      aux_sym__digits,
      sym__digit,
  [23560] = 3,
    ACTIONS(1503), 1,
      anon_sym_or,
    STATE(787), 1,
      aux_sym_description_repeat1,
    ACTIONS(264), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23571] = 4,
    ACTIONS(1506), 1,
      sym__non_zero,
    ACTIONS(1508), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(63), 1,
      sym__positive_integer,
  [23584] = 2,
    ACTIONS(1510), 2,
      sym__non_zero,
      sym__zero,
    STATE(304), 2,
      aux_sym__digits,
      sym__digit,
  [23593] = 2,
    ACTIONS(673), 1,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23602] = 4,
    ACTIONS(1512), 1,
      sym__non_zero,
    ACTIONS(1514), 1,
      sym__zero,
    STATE(10), 1,
      sym_non_negative_integer,
    STATE(96), 1,
      sym__positive_integer,
  [23615] = 2,
    ACTIONS(1516), 2,
      sym__non_zero,
      sym__zero,
    STATE(613), 2,
      aux_sym__digits,
      sym__digit,
  [23624] = 2,
    ACTIONS(804), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1334), 2,
      anon_sym_inverse,
      sym__pn_local,
  [23633] = 2,
    ACTIONS(1308), 1,
      sym__pn_local,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23642] = 2,
    ACTIONS(1518), 2,
      sym__non_zero,
      sym__zero,
    STATE(619), 2,
      aux_sym__digits,
      sym__digit,
  [23651] = 2,
    ACTIONS(1520), 2,
      sym__non_zero,
      sym__zero,
    STATE(394), 2,
      aux_sym__digits,
      sym__digit,
  [23660] = 2,
    ACTIONS(1522), 2,
      sym__non_zero,
      sym__zero,
    STATE(395), 2,
      aux_sym__digits,
      sym__digit,
  [23669] = 2,
    ACTIONS(1524), 2,
      sym__non_zero,
      sym__zero,
    STATE(629), 2,
      aux_sym__digits,
      sym__digit,
  [23678] = 2,
    ACTIONS(1293), 1,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23687] = 2,
    ACTIONS(1306), 1,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23696] = 2,
    ACTIONS(1526), 2,
      sym__non_zero,
      sym__zero,
    STATE(82), 2,
      aux_sym__digits,
      sym__digit,
  [23705] = 2,
    ACTIONS(1528), 2,
      sym__non_zero,
      sym__zero,
    STATE(81), 2,
      aux_sym__digits,
      sym__digit,
  [23714] = 2,
    ACTIONS(1530), 2,
      sym__non_zero,
      sym__zero,
    STATE(638), 2,
      aux_sym__digits,
      sym__digit,
  [23723] = 2,
    ACTIONS(1532), 2,
      sym__non_zero,
      sym__zero,
    STATE(470), 2,
      aux_sym__digits,
      sym__digit,
  [23732] = 2,
    ACTIONS(1534), 2,
      sym__non_zero,
      sym__zero,
    STATE(479), 2,
      aux_sym__digits,
      sym__digit,
  [23741] = 2,
    ACTIONS(1536), 2,
      sym__non_zero,
      sym__zero,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [23750] = 2,
    ACTIONS(1316), 1,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23759] = 2,
    ACTIONS(1538), 2,
      sym__non_zero,
      sym__zero,
    STATE(636), 2,
      aux_sym__digits,
      sym__digit,
  [23768] = 2,
    ACTIONS(1540), 2,
      sym__non_zero,
      sym__zero,
    STATE(491), 2,
      aux_sym__digits,
      sym__digit,
  [23777] = 2,
    ACTIONS(1542), 2,
      sym__non_zero,
      sym__zero,
    STATE(634), 2,
      aux_sym__digits,
      sym__digit,
  [23786] = 2,
    ACTIONS(1544), 2,
      sym__non_zero,
      sym__zero,
    STATE(700), 2,
      aux_sym__digits,
      sym__digit,
  [23795] = 4,
    ACTIONS(1546), 1,
      sym__non_zero,
    ACTIONS(1548), 1,
      sym__zero,
    STATE(6), 1,
      sym_non_negative_integer,
    STATE(74), 1,
      sym__positive_integer,
  [23808] = 2,
    ACTIONS(635), 1,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23817] = 2,
    ACTIONS(1320), 1,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23826] = 2,
    ACTIONS(1326), 1,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23835] = 2,
    ACTIONS(1304), 1,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23844] = 2,
    ACTIONS(1550), 2,
      sym__non_zero,
      sym__zero,
    STATE(31), 2,
      aux_sym__digits,
      sym__digit,
  [23853] = 2,
    ACTIONS(804), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1334), 2,
      anon_sym_not,
      sym__pn_local,
  [23862] = 2,
    ACTIONS(1324), 1,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23871] = 2,
    ACTIONS(1322), 1,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23880] = 2,
    ACTIONS(1552), 2,
      sym__non_zero,
      sym__zero,
    STATE(316), 2,
      aux_sym__digits,
      sym__digit,
  [23889] = 2,
    ACTIONS(1318), 1,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23898] = 2,
    ACTIONS(1302), 1,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23907] = 2,
    ACTIONS(1554), 2,
      sym__non_zero,
      sym__zero,
    STATE(614), 2,
      aux_sym__digits,
      sym__digit,
  [23916] = 2,
    ACTIONS(1556), 2,
      sym__non_zero,
      sym__zero,
    STATE(462), 2,
      aux_sym__digits,
      sym__digit,
  [23925] = 2,
    ACTIONS(1312), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23934] = 2,
    ACTIONS(630), 1,
      sym__pn_local,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23943] = 2,
    ACTIONS(1558), 2,
      sym__non_zero,
      sym__zero,
    STATE(463), 2,
      aux_sym__digits,
      sym__digit,
  [23952] = 2,
    ACTIONS(1560), 2,
      sym__non_zero,
      sym__zero,
    STATE(598), 2,
      aux_sym__digits,
      sym__digit,
  [23961] = 2,
    ACTIONS(1562), 2,
      sym__non_zero,
      sym__zero,
    STATE(611), 2,
      aux_sym__digits,
      sym__digit,
  [23970] = 2,
    ACTIONS(609), 1,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23979] = 3,
    ACTIONS(1564), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(1566), 1,
      anon_sym_Prefix_COLON,
    STATE(832), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [23990] = 2,
    ACTIONS(1569), 2,
      sym__non_zero,
      sym__zero,
    STATE(387), 2,
      aux_sym__digits,
      sym__digit,
  [23999] = 4,
    ACTIONS(1571), 1,
      sym__iunreserved,
    STATE(861), 1,
      sym__iauthority,
    STATE(889), 1,
      sym__ihost,
    STATE(921), 1,
      sym__iuserinfo,
  [24012] = 1,
    ACTIONS(1470), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [24019] = 2,
    ACTIONS(804), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1334), 2,
      anon_sym__COLON,
      sym__pn_local,
  [24028] = 3,
    ACTIONS(1573), 1,
      anon_sym_or,
    STATE(787), 1,
      aux_sym_description_repeat1,
    ACTIONS(519), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24039] = 4,
    ACTIONS(1575), 1,
      sym__non_zero,
    ACTIONS(1577), 1,
      sym__zero,
    STATE(3), 1,
      sym_non_negative_integer,
    STATE(48), 1,
      sym__positive_integer,
  [24052] = 4,
    ACTIONS(1579), 1,
      sym__non_zero,
    ACTIONS(1581), 1,
      sym__zero,
    STATE(71), 1,
      sym_non_negative_integer,
    STATE(445), 1,
      sym__positive_integer,
  [24065] = 2,
    ACTIONS(1583), 2,
      sym__non_zero,
      sym__zero,
    STATE(608), 2,
      aux_sym__digits,
      sym__digit,
  [24074] = 2,
    ACTIONS(1585), 2,
      sym__non_zero,
      sym__zero,
    STATE(592), 2,
      aux_sym__digits,
      sym__digit,
  [24083] = 2,
    ACTIONS(1587), 2,
      sym__non_zero,
      sym__zero,
    STATE(402), 2,
      aux_sym__digits,
      sym__digit,
  [24092] = 2,
    ACTIONS(1589), 2,
      sym__non_zero,
      sym__zero,
    STATE(469), 2,
      aux_sym__digits,
      sym__digit,
  [24101] = 2,
    ACTIONS(1591), 2,
      sym__non_zero,
      sym__zero,
    STATE(473), 2,
      aux_sym__digits,
      sym__digit,
  [24110] = 2,
    ACTIONS(1593), 2,
      sym__non_zero,
      sym__zero,
    STATE(606), 2,
      aux_sym__digits,
      sym__digit,
  [24119] = 3,
    ACTIONS(1573), 1,
      anon_sym_or,
    STATE(837), 1,
      aux_sym_description_repeat1,
    ACTIONS(501), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24130] = 4,
    ACTIONS(1595), 1,
      sym__non_zero,
    ACTIONS(1597), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(43), 1,
      sym__positive_integer,
  [24143] = 3,
    ACTIONS(1298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1599), 1,
      anon_sym_Functional,
    STATE(914), 1,
      sym_annotations,
  [24153] = 3,
    ACTIONS(1601), 1,
      anon_sym_RBRACE,
    ACTIONS(1603), 1,
      anon_sym_COMMA,
    STATE(860), 1,
      aux_sym_individual_2list_repeat1,
  [24163] = 3,
    ACTIONS(1605), 1,
      anon_sym_RBRACE,
    ACTIONS(1607), 1,
      anon_sym_COMMA,
    STATE(850), 1,
      aux_sym_literal_list_repeat1,
  [24173] = 3,
    ACTIONS(1610), 1,
      anon_sym_RBRACE,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    STATE(850), 1,
      aux_sym_literal_list_repeat1,
  [24183] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1616), 1,
      anon_sym_RBRACK,
    STATE(855), 1,
      aux_sym_datatype_restriction_repeat1,
  [24193] = 3,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
    ACTIONS(1618), 1,
      anon_sym_RBRACK,
    STATE(852), 1,
      aux_sym_datatype_restriction_repeat1,
  [24203] = 3,
    ACTIONS(1620), 1,
      anon_sym_GT,
    ACTIONS(1622), 1,
      sym__iquery,
    ACTIONS(1624), 1,
      sym__ifragment,
  [24213] = 3,
    ACTIONS(1626), 1,
      anon_sym_COMMA,
    ACTIONS(1629), 1,
      anon_sym_RBRACK,
    STATE(855), 1,
      aux_sym_datatype_restriction_repeat1,
  [24223] = 2,
    ACTIONS(1334), 1,
      sym__pn_local,
    ACTIONS(804), 2,
      anon_sym_LT,
      sym__pname_ln,
  [24231] = 3,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    ACTIONS(1631), 1,
      anon_sym_RBRACE,
    STATE(851), 1,
      aux_sym_literal_list_repeat1,
  [24241] = 2,
    ACTIONS(1635), 1,
      anon_sym_AT,
    ACTIONS(1633), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [24249] = 3,
    ACTIONS(1139), 1,
      anon_sym_RBRACE,
    ACTIONS(1637), 1,
      anon_sym_COMMA,
    STATE(859), 1,
      aux_sym_individual_2list_repeat1,
  [24259] = 3,
    ACTIONS(1603), 1,
      anon_sym_COMMA,
    ACTIONS(1640), 1,
      anon_sym_RBRACE,
    STATE(859), 1,
      aux_sym_individual_2list_repeat1,
  [24269] = 2,
    ACTIONS(1449), 1,
      anon_sym_SLASH,
    STATE(712), 1,
      aux_sym__ipath_abempty,
  [24276] = 1,
    ACTIONS(1642), 2,
      anon_sym_f,
      anon_sym_F,
  [24281] = 1,
    ACTIONS(1644), 2,
      anon_sym_f,
      anon_sym_F,
  [24286] = 2,
    ACTIONS(1646), 1,
      sym__iunreserved,
    STATE(835), 1,
      sym__isegment,
  [24293] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(930), 1,
      sym__iri_rfc3987,
  [24300] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(945), 1,
      sym__iri_rfc3987,
  [24307] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(946), 1,
      sym__iri_rfc3987,
  [24314] = 1,
    ACTIONS(1351), 2,
      anon_sym_f,
      anon_sym_F,
  [24319] = 1,
    ACTIONS(1349), 2,
      anon_sym_f,
      anon_sym_F,
  [24324] = 2,
    ACTIONS(1650), 1,
      anon_sym_COLON,
    ACTIONS(1652), 1,
      anon_sym_SLASH,
  [24331] = 1,
    ACTIONS(1654), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [24336] = 1,
    ACTIONS(1656), 2,
      anon_sym_f,
      anon_sym_F,
  [24341] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(882), 1,
      sym_full_iri,
  [24348] = 1,
    ACTIONS(1605), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [24353] = 1,
    ACTIONS(1658), 2,
      anon_sym_f,
      anon_sym_F,
  [24358] = 1,
    ACTIONS(107), 2,
      anon_sym_f,
      anon_sym_F,
  [24363] = 1,
    ACTIONS(1342), 2,
      anon_sym_f,
      anon_sym_F,
  [24368] = 1,
    ACTIONS(1353), 2,
      anon_sym_f,
      anon_sym_F,
  [24373] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(938), 1,
      sym__iri_rfc3987,
  [24380] = 1,
    ACTIONS(1660), 2,
      anon_sym_f,
      anon_sym_F,
  [24385] = 1,
    ACTIONS(131), 2,
      anon_sym_f,
      anon_sym_F,
  [24390] = 1,
    ACTIONS(1662), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [24395] = 2,
    ACTIONS(1664), 1,
      anon_sym_SLASH_SLASH,
    STATE(854), 1,
      sym__ihier_part,
  [24402] = 1,
    ACTIONS(1666), 2,
      anon_sym_f,
      anon_sym_F,
  [24407] = 2,
    ACTIONS(1668), 1,
      anon_sym_GT,
    ACTIONS(1670), 1,
      sym__ifragment,
  [24414] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(919), 1,
      sym__iri_rfc3987,
  [24421] = 1,
    ACTIONS(1355), 2,
      anon_sym_f,
      anon_sym_F,
  [24426] = 1,
    ACTIONS(1357), 2,
      anon_sym_f,
      anon_sym_F,
  [24431] = 2,
    ACTIONS(1672), 1,
      anon_sym_COLON,
    ACTIONS(1674), 1,
      anon_sym_SLASH,
  [24438] = 1,
    ACTIONS(1676), 2,
      anon_sym_f,
      anon_sym_F,
  [24443] = 1,
    ACTIONS(1678), 2,
      anon_sym_f,
      anon_sym_F,
  [24448] = 1,
    ACTIONS(1680), 2,
      anon_sym_f,
      anon_sym_F,
  [24453] = 1,
    ACTIONS(1370), 2,
      anon_sym_f,
      anon_sym_F,
  [24458] = 1,
    ACTIONS(1372), 2,
      anon_sym_f,
      anon_sym_F,
  [24463] = 1,
    ACTIONS(1682), 2,
      anon_sym_f,
      anon_sym_F,
  [24468] = 1,
    ACTIONS(1359), 2,
      anon_sym_f,
      anon_sym_F,
  [24473] = 1,
    ACTIONS(1363), 2,
      anon_sym_f,
      anon_sym_F,
  [24478] = 1,
    ACTIONS(1684), 2,
      anon_sym_f,
      anon_sym_F,
  [24483] = 1,
    ACTIONS(1686), 2,
      anon_sym_f,
      anon_sym_F,
  [24488] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(937), 1,
      sym__iri_rfc3987,
  [24495] = 1,
    ACTIONS(1374), 2,
      anon_sym_f,
      anon_sym_F,
  [24500] = 1,
    ACTIONS(1368), 2,
      anon_sym_f,
      anon_sym_F,
  [24505] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(933), 1,
      sym__iri_rfc3987,
  [24512] = 1,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
  [24517] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(911), 1,
      sym__iri_rfc3987,
  [24524] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(932), 1,
      sym__iri_rfc3987,
  [24531] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(923), 1,
      sym__iri_rfc3987,
  [24538] = 2,
    ACTIONS(1648), 1,
      sym__scheme,
    STATE(915), 1,
      sym__iri_rfc3987,
  [24545] = 1,
    ACTIONS(1688), 2,
      anon_sym_f,
      anon_sym_F,
  [24550] = 2,
    ACTIONS(1690), 1,
      sym__iunreserved,
    STATE(870), 1,
      sym__ihost,
  [24557] = 1,
    ACTIONS(1692), 1,
      anon_sym_GT,
  [24561] = 1,
    ACTIONS(1694), 1,
      sym__pn_local,
  [24565] = 1,
    ACTIONS(1696), 1,
      anon_sym_CARET_CARET,
  [24569] = 1,
    ACTIONS(1698), 1,
      anon_sym_Functional,
  [24573] = 1,
    ACTIONS(1700), 1,
      anon_sym_GT,
  [24577] = 1,
    ACTIONS(1702), 1,
      sym__pn_local,
  [24581] = 1,
    ACTIONS(1704), 1,
      anon_sym_CARET_CARET,
  [24585] = 1,
    ACTIONS(1706), 1,
      sym__pn_local,
  [24589] = 1,
    ACTIONS(1708), 1,
      anon_sym_GT,
  [24593] = 1,
    ACTIONS(1710), 1,
      anon_sym_CARET_CARET,
  [24597] = 1,
    ACTIONS(1712), 1,
      anon_sym_AT,
  [24601] = 1,
    ACTIONS(1714), 1,
      sym_prefix_name,
  [24605] = 1,
    ACTIONS(1716), 1,
      anon_sym_GT,
  [24609] = 1,
    ACTIONS(1718), 1,
      anon_sym_CARET_CARET,
  [24613] = 1,
    ACTIONS(1720), 1,
      anon_sym_RPAREN,
  [24617] = 1,
    ACTIONS(1720), 1,
      anon_sym_RBRACE,
  [24621] = 1,
    ACTIONS(1722), 1,
      anon_sym_CARET_CARET,
  [24625] = 1,
    ACTIONS(1724), 1,
      sym__pn_local,
  [24629] = 1,
    ACTIONS(1726), 1,
      anon_sym_CARET_CARET,
  [24633] = 1,
    ACTIONS(1728), 1,
      anon_sym_GT,
  [24637] = 1,
    ACTIONS(1668), 1,
      anon_sym_GT,
  [24641] = 1,
    ACTIONS(1730), 1,
      anon_sym_GT,
  [24645] = 1,
    ACTIONS(1732), 1,
      anon_sym_GT,
  [24649] = 1,
    ACTIONS(1734), 1,
      anon_sym_COMMA,
  [24653] = 1,
    ACTIONS(1736), 1,
      anon_sym_COMMA,
  [24657] = 1,
    ACTIONS(1738), 1,
      anon_sym_COMMA,
  [24661] = 1,
    ACTIONS(1740), 1,
      anon_sym_GT,
  [24665] = 1,
    ACTIONS(1742), 1,
      anon_sym_GT,
  [24669] = 1,
    ACTIONS(1744), 1,
      anon_sym_COMMA,
  [24673] = 1,
    ACTIONS(1746), 1,
      anon_sym_RBRACE,
  [24677] = 1,
    ACTIONS(1748), 1,
      anon_sym_value,
  [24681] = 1,
    ACTIONS(1750), 1,
      anon_sym_CARET_CARET,
  [24685] = 1,
    ACTIONS(1752), 1,
      sym__pn_local,
  [24689] = 1,
    ACTIONS(1754), 1,
      sym__pn_local,
  [24693] = 1,
    ACTIONS(1756), 1,
      anon_sym_GT,
  [24697] = 1,
    ACTIONS(1758), 1,
      anon_sym_GT,
  [24701] = 1,
    ACTIONS(1760), 1,
      anon_sym_COLON,
  [24705] = 1,
    ACTIONS(1746), 1,
      anon_sym_RPAREN,
  [24709] = 1,
    ACTIONS(1762), 1,
      ts_builtin_sym_end,
  [24713] = 1,
    ACTIONS(1764), 1,
      sym__port,
  [24717] = 1,
    ACTIONS(1766), 1,
      anon_sym_SLASH,
  [24721] = 1,
    ACTIONS(1652), 1,
      anon_sym_SLASH,
  [24725] = 1,
    ACTIONS(1768), 1,
      sym__port,
  [24729] = 1,
    ACTIONS(1770), 1,
      anon_sym_CARET_CARET,
  [24733] = 1,
    ACTIONS(1772), 1,
      anon_sym_COMMA,
  [24737] = 1,
    ACTIONS(1774), 1,
      anon_sym_GT,
  [24741] = 1,
    ACTIONS(1776), 1,
      sym__pn_local,
  [24745] = 1,
    ACTIONS(1778), 1,
      ts_builtin_sym_end,
  [24749] = 1,
    ACTIONS(1780), 1,
      ts_builtin_sym_end,
  [24753] = 1,
    ACTIONS(1782), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 254,
  [SMALL_STATE(6)] = 352,
  [SMALL_STATE(7)] = 449,
  [SMALL_STATE(8)] = 501,
  [SMALL_STATE(9)] = 553,
  [SMALL_STATE(10)] = 605,
  [SMALL_STATE(11)] = 697,
  [SMALL_STATE(12)] = 748,
  [SMALL_STATE(13)] = 794,
  [SMALL_STATE(14)] = 839,
  [SMALL_STATE(15)] = 884,
  [SMALL_STATE(16)] = 929,
  [SMALL_STATE(17)] = 974,
  [SMALL_STATE(18)] = 1019,
  [SMALL_STATE(19)] = 1072,
  [SMALL_STATE(20)] = 1117,
  [SMALL_STATE(21)] = 1162,
  [SMALL_STATE(22)] = 1207,
  [SMALL_STATE(23)] = 1251,
  [SMALL_STATE(24)] = 1299,
  [SMALL_STATE(25)] = 1357,
  [SMALL_STATE(26)] = 1415,
  [SMALL_STATE(27)] = 1464,
  [SMALL_STATE(28)] = 1519,
  [SMALL_STATE(29)] = 1568,
  [SMALL_STATE(30)] = 1617,
  [SMALL_STATE(31)] = 1666,
  [SMALL_STATE(32)] = 1721,
  [SMALL_STATE(33)] = 1768,
  [SMALL_STATE(34)] = 1815,
  [SMALL_STATE(35)] = 1862,
  [SMALL_STATE(36)] = 1908,
  [SMALL_STATE(37)] = 1948,
  [SMALL_STATE(38)] = 1988,
  [SMALL_STATE(39)] = 2028,
  [SMALL_STATE(40)] = 2074,
  [SMALL_STATE(41)] = 2114,
  [SMALL_STATE(42)] = 2160,
  [SMALL_STATE(43)] = 2205,
  [SMALL_STATE(44)] = 2246,
  [SMALL_STATE(45)] = 2291,
  [SMALL_STATE(46)] = 2336,
  [SMALL_STATE(47)] = 2375,
  [SMALL_STATE(48)] = 2412,
  [SMALL_STATE(49)] = 2451,
  [SMALL_STATE(50)] = 2487,
  [SMALL_STATE(51)] = 2573,
  [SMALL_STATE(52)] = 2609,
  [SMALL_STATE(53)] = 2681,
  [SMALL_STATE(54)] = 2717,
  [SMALL_STATE(55)] = 2773,
  [SMALL_STATE(56)] = 2829,
  [SMALL_STATE(57)] = 2865,
  [SMALL_STATE(58)] = 2901,
  [SMALL_STATE(59)] = 2937,
  [SMALL_STATE(60)] = 2973,
  [SMALL_STATE(61)] = 3029,
  [SMALL_STATE(62)] = 3065,
  [SMALL_STATE(63)] = 3101,
  [SMALL_STATE(64)] = 3139,
  [SMALL_STATE(65)] = 3175,
  [SMALL_STATE(66)] = 3247,
  [SMALL_STATE(67)] = 3283,
  [SMALL_STATE(68)] = 3319,
  [SMALL_STATE(69)] = 3355,
  [SMALL_STATE(70)] = 3391,
  [SMALL_STATE(71)] = 3427,
  [SMALL_STATE(72)] = 3507,
  [SMALL_STATE(73)] = 3543,
  [SMALL_STATE(74)] = 3578,
  [SMALL_STATE(75)] = 3615,
  [SMALL_STATE(76)] = 3655,
  [SMALL_STATE(77)] = 3705,
  [SMALL_STATE(78)] = 3745,
  [SMALL_STATE(79)] = 3785,
  [SMALL_STATE(80)] = 3835,
  [SMALL_STATE(81)] = 3868,
  [SMALL_STATE(82)] = 3915,
  [SMALL_STATE(83)] = 3962,
  [SMALL_STATE(84)] = 3995,
  [SMALL_STATE(85)] = 4034,
  [SMALL_STATE(86)] = 4100,
  [SMALL_STATE(87)] = 4172,
  [SMALL_STATE(88)] = 4244,
  [SMALL_STATE(89)] = 4316,
  [SMALL_STATE(90)] = 4388,
  [SMALL_STATE(91)] = 4460,
  [SMALL_STATE(92)] = 4532,
  [SMALL_STATE(93)] = 4563,
  [SMALL_STATE(94)] = 4597,
  [SMALL_STATE(95)] = 4631,
  [SMALL_STATE(96)] = 4665,
  [SMALL_STATE(97)] = 4697,
  [SMALL_STATE(98)] = 4731,
  [SMALL_STATE(99)] = 4765,
  [SMALL_STATE(100)] = 4822,
  [SMALL_STATE(101)] = 4855,
  [SMALL_STATE(102)] = 4912,
  [SMALL_STATE(103)] = 4969,
  [SMALL_STATE(104)] = 5034,
  [SMALL_STATE(105)] = 5099,
  [SMALL_STATE(106)] = 5156,
  [SMALL_STATE(107)] = 5189,
  [SMALL_STATE(108)] = 5222,
  [SMALL_STATE(109)] = 5279,
  [SMALL_STATE(110)] = 5336,
  [SMALL_STATE(111)] = 5367,
  [SMALL_STATE(112)] = 5424,
  [SMALL_STATE(113)] = 5457,
  [SMALL_STATE(114)] = 5522,
  [SMALL_STATE(115)] = 5579,
  [SMALL_STATE(116)] = 5612,
  [SMALL_STATE(117)] = 5669,
  [SMALL_STATE(118)] = 5702,
  [SMALL_STATE(119)] = 5767,
  [SMALL_STATE(120)] = 5800,
  [SMALL_STATE(121)] = 5865,
  [SMALL_STATE(122)] = 5898,
  [SMALL_STATE(123)] = 5963,
  [SMALL_STATE(124)] = 6017,
  [SMALL_STATE(125)] = 6085,
  [SMALL_STATE(126)] = 6117,
  [SMALL_STATE(127)] = 6145,
  [SMALL_STATE(128)] = 6177,
  [SMALL_STATE(129)] = 6209,
  [SMALL_STATE(130)] = 6263,
  [SMALL_STATE(131)] = 6317,
  [SMALL_STATE(132)] = 6345,
  [SMALL_STATE(133)] = 6413,
  [SMALL_STATE(134)] = 6445,
  [SMALL_STATE(135)] = 6513,
  [SMALL_STATE(136)] = 6567,
  [SMALL_STATE(137)] = 6599,
  [SMALL_STATE(138)] = 6631,
  [SMALL_STATE(139)] = 6699,
  [SMALL_STATE(140)] = 6767,
  [SMALL_STATE(141)] = 6835,
  [SMALL_STATE(142)] = 6866,
  [SMALL_STATE(143)] = 6897,
  [SMALL_STATE(144)] = 6924,
  [SMALL_STATE(145)] = 6955,
  [SMALL_STATE(146)] = 7020,
  [SMALL_STATE(147)] = 7051,
  [SMALL_STATE(148)] = 7082,
  [SMALL_STATE(149)] = 7113,
  [SMALL_STATE(150)] = 7144,
  [SMALL_STATE(151)] = 7175,
  [SMALL_STATE(152)] = 7204,
  [SMALL_STATE(153)] = 7235,
  [SMALL_STATE(154)] = 7266,
  [SMALL_STATE(155)] = 7331,
  [SMALL_STATE(156)] = 7362,
  [SMALL_STATE(157)] = 7427,
  [SMALL_STATE(158)] = 7456,
  [SMALL_STATE(159)] = 7487,
  [SMALL_STATE(160)] = 7518,
  [SMALL_STATE(161)] = 7549,
  [SMALL_STATE(162)] = 7580,
  [SMALL_STATE(163)] = 7611,
  [SMALL_STATE(164)] = 7642,
  [SMALL_STATE(165)] = 7673,
  [SMALL_STATE(166)] = 7704,
  [SMALL_STATE(167)] = 7735,
  [SMALL_STATE(168)] = 7766,
  [SMALL_STATE(169)] = 7797,
  [SMALL_STATE(170)] = 7828,
  [SMALL_STATE(171)] = 7859,
  [SMALL_STATE(172)] = 7890,
  [SMALL_STATE(173)] = 7921,
  [SMALL_STATE(174)] = 7952,
  [SMALL_STATE(175)] = 7983,
  [SMALL_STATE(176)] = 8048,
  [SMALL_STATE(177)] = 8079,
  [SMALL_STATE(178)] = 8140,
  [SMALL_STATE(179)] = 8171,
  [SMALL_STATE(180)] = 8202,
  [SMALL_STATE(181)] = 8230,
  [SMALL_STATE(182)] = 8258,
  [SMALL_STATE(183)] = 8296,
  [SMALL_STATE(184)] = 8322,
  [SMALL_STATE(185)] = 8350,
  [SMALL_STATE(186)] = 8376,
  [SMALL_STATE(187)] = 8406,
  [SMALL_STATE(188)] = 8432,
  [SMALL_STATE(189)] = 8460,
  [SMALL_STATE(190)] = 8486,
  [SMALL_STATE(191)] = 8524,
  [SMALL_STATE(192)] = 8554,
  [SMALL_STATE(193)] = 8584,
  [SMALL_STATE(194)] = 8614,
  [SMALL_STATE(195)] = 8672,
  [SMALL_STATE(196)] = 8702,
  [SMALL_STATE(197)] = 8764,
  [SMALL_STATE(198)] = 8822,
  [SMALL_STATE(199)] = 8848,
  [SMALL_STATE(200)] = 8874,
  [SMALL_STATE(201)] = 8900,
  [SMALL_STATE(202)] = 8958,
  [SMALL_STATE(203)] = 8988,
  [SMALL_STATE(204)] = 9014,
  [SMALL_STATE(205)] = 9040,
  [SMALL_STATE(206)] = 9070,
  [SMALL_STATE(207)] = 9132,
  [SMALL_STATE(208)] = 9160,
  [SMALL_STATE(209)] = 9188,
  [SMALL_STATE(210)] = 9218,
  [SMALL_STATE(211)] = 9246,
  [SMALL_STATE(212)] = 9284,
  [SMALL_STATE(213)] = 9310,
  [SMALL_STATE(214)] = 9340,
  [SMALL_STATE(215)] = 9368,
  [SMALL_STATE(216)] = 9394,
  [SMALL_STATE(217)] = 9424,
  [SMALL_STATE(218)] = 9454,
  [SMALL_STATE(219)] = 9501,
  [SMALL_STATE(220)] = 9530,
  [SMALL_STATE(221)] = 9589,
  [SMALL_STATE(222)] = 9618,
  [SMALL_STATE(223)] = 9647,
  [SMALL_STATE(224)] = 9676,
  [SMALL_STATE(225)] = 9705,
  [SMALL_STATE(226)] = 9764,
  [SMALL_STATE(227)] = 9793,
  [SMALL_STATE(228)] = 9822,
  [SMALL_STATE(229)] = 9851,
  [SMALL_STATE(230)] = 9910,
  [SMALL_STATE(231)] = 9969,
  [SMALL_STATE(232)] = 9998,
  [SMALL_STATE(233)] = 10057,
  [SMALL_STATE(234)] = 10104,
  [SMALL_STATE(235)] = 10151,
  [SMALL_STATE(236)] = 10210,
  [SMALL_STATE(237)] = 10239,
  [SMALL_STATE(238)] = 10268,
  [SMALL_STATE(239)] = 10297,
  [SMALL_STATE(240)] = 10356,
  [SMALL_STATE(241)] = 10415,
  [SMALL_STATE(242)] = 10444,
  [SMALL_STATE(243)] = 10471,
  [SMALL_STATE(244)] = 10500,
  [SMALL_STATE(245)] = 10529,
  [SMALL_STATE(246)] = 10588,
  [SMALL_STATE(247)] = 10635,
  [SMALL_STATE(248)] = 10664,
  [SMALL_STATE(249)] = 10711,
  [SMALL_STATE(250)] = 10740,
  [SMALL_STATE(251)] = 10769,
  [SMALL_STATE(252)] = 10828,
  [SMALL_STATE(253)] = 10857,
  [SMALL_STATE(254)] = 10886,
  [SMALL_STATE(255)] = 10945,
  [SMALL_STATE(256)] = 11004,
  [SMALL_STATE(257)] = 11033,
  [SMALL_STATE(258)] = 11062,
  [SMALL_STATE(259)] = 11091,
  [SMALL_STATE(260)] = 11120,
  [SMALL_STATE(261)] = 11149,
  [SMALL_STATE(262)] = 11178,
  [SMALL_STATE(263)] = 11237,
  [SMALL_STATE(264)] = 11262,
  [SMALL_STATE(265)] = 11314,
  [SMALL_STATE(266)] = 11352,
  [SMALL_STATE(267)] = 11404,
  [SMALL_STATE(268)] = 11456,
  [SMALL_STATE(269)] = 11484,
  [SMALL_STATE(270)] = 11512,
  [SMALL_STATE(271)] = 11568,
  [SMALL_STATE(272)] = 11596,
  [SMALL_STATE(273)] = 11652,
  [SMALL_STATE(274)] = 11680,
  [SMALL_STATE(275)] = 11708,
  [SMALL_STATE(276)] = 11736,
  [SMALL_STATE(277)] = 11764,
  [SMALL_STATE(278)] = 11792,
  [SMALL_STATE(279)] = 11816,
  [SMALL_STATE(280)] = 11872,
  [SMALL_STATE(281)] = 11928,
  [SMALL_STATE(282)] = 11980,
  [SMALL_STATE(283)] = 12032,
  [SMALL_STATE(284)] = 12056,
  [SMALL_STATE(285)] = 12080,
  [SMALL_STATE(286)] = 12108,
  [SMALL_STATE(287)] = 12132,
  [SMALL_STATE(288)] = 12188,
  [SMALL_STATE(289)] = 12224,
  [SMALL_STATE(290)] = 12248,
  [SMALL_STATE(291)] = 12276,
  [SMALL_STATE(292)] = 12312,
  [SMALL_STATE(293)] = 12350,
  [SMALL_STATE(294)] = 12378,
  [SMALL_STATE(295)] = 12434,
  [SMALL_STATE(296)] = 12470,
  [SMALL_STATE(297)] = 12497,
  [SMALL_STATE(298)] = 12524,
  [SMALL_STATE(299)] = 12557,
  [SMALL_STATE(300)] = 12606,
  [SMALL_STATE(301)] = 12633,
  [SMALL_STATE(302)] = 12660,
  [SMALL_STATE(303)] = 12687,
  [SMALL_STATE(304)] = 12710,
  [SMALL_STATE(305)] = 12745,
  [SMALL_STATE(306)] = 12768,
  [SMALL_STATE(307)] = 12801,
  [SMALL_STATE(308)] = 12828,
  [SMALL_STATE(309)] = 12855,
  [SMALL_STATE(310)] = 12908,
  [SMALL_STATE(311)] = 12935,
  [SMALL_STATE(312)] = 12962,
  [SMALL_STATE(313)] = 12989,
  [SMALL_STATE(314)] = 13016,
  [SMALL_STATE(315)] = 13043,
  [SMALL_STATE(316)] = 13070,
  [SMALL_STATE(317)] = 13105,
  [SMALL_STATE(318)] = 13132,
  [SMALL_STATE(319)] = 13159,
  [SMALL_STATE(320)] = 13212,
  [SMALL_STATE(321)] = 13239,
  [SMALL_STATE(322)] = 13292,
  [SMALL_STATE(323)] = 13317,
  [SMALL_STATE(324)] = 13342,
  [SMALL_STATE(325)] = 13369,
  [SMALL_STATE(326)] = 13396,
  [SMALL_STATE(327)] = 13423,
  [SMALL_STATE(328)] = 13476,
  [SMALL_STATE(329)] = 13501,
  [SMALL_STATE(330)] = 13526,
  [SMALL_STATE(331)] = 13549,
  [SMALL_STATE(332)] = 13576,
  [SMALL_STATE(333)] = 13609,
  [SMALL_STATE(334)] = 13662,
  [SMALL_STATE(335)] = 13715,
  [SMALL_STATE(336)] = 13744,
  [SMALL_STATE(337)] = 13770,
  [SMALL_STATE(338)] = 13798,
  [SMALL_STATE(339)] = 13826,
  [SMALL_STATE(340)] = 13848,
  [SMALL_STATE(341)] = 13874,
  [SMALL_STATE(342)] = 13906,
  [SMALL_STATE(343)] = 13938,
  [SMALL_STATE(344)] = 13970,
  [SMALL_STATE(345)] = 13996,
  [SMALL_STATE(346)] = 14042,
  [SMALL_STATE(347)] = 14064,
  [SMALL_STATE(348)] = 14086,
  [SMALL_STATE(349)] = 14114,
  [SMALL_STATE(350)] = 14140,
  [SMALL_STATE(351)] = 14166,
  [SMALL_STATE(352)] = 14192,
  [SMALL_STATE(353)] = 14218,
  [SMALL_STATE(354)] = 14244,
  [SMALL_STATE(355)] = 14266,
  [SMALL_STATE(356)] = 14288,
  [SMALL_STATE(357)] = 14314,
  [SMALL_STATE(358)] = 14340,
  [SMALL_STATE(359)] = 14368,
  [SMALL_STATE(360)] = 14390,
  [SMALL_STATE(361)] = 14412,
  [SMALL_STATE(362)] = 14434,
  [SMALL_STATE(363)] = 14456,
  [SMALL_STATE(364)] = 14478,
  [SMALL_STATE(365)] = 14525,
  [SMALL_STATE(366)] = 14546,
  [SMALL_STATE(367)] = 14593,
  [SMALL_STATE(368)] = 14640,
  [SMALL_STATE(369)] = 14687,
  [SMALL_STATE(370)] = 14716,
  [SMALL_STATE(371)] = 14751,
  [SMALL_STATE(372)] = 14772,
  [SMALL_STATE(373)] = 14801,
  [SMALL_STATE(374)] = 14848,
  [SMALL_STATE(375)] = 14869,
  [SMALL_STATE(376)] = 14890,
  [SMALL_STATE(377)] = 14925,
  [SMALL_STATE(378)] = 14960,
  [SMALL_STATE(379)] = 14995,
  [SMALL_STATE(380)] = 15016,
  [SMALL_STATE(381)] = 15045,
  [SMALL_STATE(382)] = 15092,
  [SMALL_STATE(383)] = 15116,
  [SMALL_STATE(384)] = 15142,
  [SMALL_STATE(385)] = 15166,
  [SMALL_STATE(386)] = 15202,
  [SMALL_STATE(387)] = 15228,
  [SMALL_STATE(388)] = 15260,
  [SMALL_STATE(389)] = 15284,
  [SMALL_STATE(390)] = 15308,
  [SMALL_STATE(391)] = 15348,
  [SMALL_STATE(392)] = 15372,
  [SMALL_STATE(393)] = 15392,
  [SMALL_STATE(394)] = 15436,
  [SMALL_STATE(395)] = 15468,
  [SMALL_STATE(396)] = 15500,
  [SMALL_STATE(397)] = 15522,
  [SMALL_STATE(398)] = 15556,
  [SMALL_STATE(399)] = 15580,
  [SMALL_STATE(400)] = 15604,
  [SMALL_STATE(401)] = 15638,
  [SMALL_STATE(402)] = 15662,
  [SMALL_STATE(403)] = 15694,
  [SMALL_STATE(404)] = 15719,
  [SMALL_STATE(405)] = 15742,
  [SMALL_STATE(406)] = 15765,
  [SMALL_STATE(407)] = 15798,
  [SMALL_STATE(408)] = 15823,
  [SMALL_STATE(409)] = 15866,
  [SMALL_STATE(410)] = 15889,
  [SMALL_STATE(411)] = 15914,
  [SMALL_STATE(412)] = 15939,
  [SMALL_STATE(413)] = 15962,
  [SMALL_STATE(414)] = 15995,
  [SMALL_STATE(415)] = 16018,
  [SMALL_STATE(416)] = 16051,
  [SMALL_STATE(417)] = 16090,
  [SMALL_STATE(418)] = 16123,
  [SMALL_STATE(419)] = 16155,
  [SMALL_STATE(420)] = 16187,
  [SMALL_STATE(421)] = 16209,
  [SMALL_STATE(422)] = 16231,
  [SMALL_STATE(423)] = 16271,
  [SMALL_STATE(424)] = 16293,
  [SMALL_STATE(425)] = 16333,
  [SMALL_STATE(426)] = 16373,
  [SMALL_STATE(427)] = 16395,
  [SMALL_STATE(428)] = 16427,
  [SMALL_STATE(429)] = 16459,
  [SMALL_STATE(430)] = 16497,
  [SMALL_STATE(431)] = 16519,
  [SMALL_STATE(432)] = 16541,
  [SMALL_STATE(433)] = 16581,
  [SMALL_STATE(434)] = 16621,
  [SMALL_STATE(435)] = 16653,
  [SMALL_STATE(436)] = 16693,
  [SMALL_STATE(437)] = 16715,
  [SMALL_STATE(438)] = 16733,
  [SMALL_STATE(439)] = 16773,
  [SMALL_STATE(440)] = 16813,
  [SMALL_STATE(441)] = 16853,
  [SMALL_STATE(442)] = 16893,
  [SMALL_STATE(443)] = 16915,
  [SMALL_STATE(444)] = 16937,
  [SMALL_STATE(445)] = 16977,
  [SMALL_STATE(446)] = 16997,
  [SMALL_STATE(447)] = 17019,
  [SMALL_STATE(448)] = 17041,
  [SMALL_STATE(449)] = 17063,
  [SMALL_STATE(450)] = 17085,
  [SMALL_STATE(451)] = 17107,
  [SMALL_STATE(452)] = 17129,
  [SMALL_STATE(453)] = 17147,
  [SMALL_STATE(454)] = 17169,
  [SMALL_STATE(455)] = 17191,
  [SMALL_STATE(456)] = 17231,
  [SMALL_STATE(457)] = 17271,
  [SMALL_STATE(458)] = 17293,
  [SMALL_STATE(459)] = 17325,
  [SMALL_STATE(460)] = 17362,
  [SMALL_STATE(461)] = 17399,
  [SMALL_STATE(462)] = 17434,
  [SMALL_STATE(463)] = 17463,
  [SMALL_STATE(464)] = 17492,
  [SMALL_STATE(465)] = 17527,
  [SMALL_STATE(466)] = 17550,
  [SMALL_STATE(467)] = 17585,
  [SMALL_STATE(468)] = 17618,
  [SMALL_STATE(469)] = 17655,
  [SMALL_STATE(470)] = 17684,
  [SMALL_STATE(471)] = 17713,
  [SMALL_STATE(472)] = 17750,
  [SMALL_STATE(473)] = 17787,
  [SMALL_STATE(474)] = 17816,
  [SMALL_STATE(475)] = 17853,
  [SMALL_STATE(476)] = 17870,
  [SMALL_STATE(477)] = 17887,
  [SMALL_STATE(478)] = 17924,
  [SMALL_STATE(479)] = 17947,
  [SMALL_STATE(480)] = 17976,
  [SMALL_STATE(481)] = 18013,
  [SMALL_STATE(482)] = 18044,
  [SMALL_STATE(483)] = 18081,
  [SMALL_STATE(484)] = 18112,
  [SMALL_STATE(485)] = 18149,
  [SMALL_STATE(486)] = 18186,
  [SMALL_STATE(487)] = 18223,
  [SMALL_STATE(488)] = 18246,
  [SMALL_STATE(489)] = 18280,
  [SMALL_STATE(490)] = 18308,
  [SMALL_STATE(491)] = 18336,
  [SMALL_STATE(492)] = 18364,
  [SMALL_STATE(493)] = 18392,
  [SMALL_STATE(494)] = 18420,
  [SMALL_STATE(495)] = 18436,
  [SMALL_STATE(496)] = 18464,
  [SMALL_STATE(497)] = 18486,
  [SMALL_STATE(498)] = 18514,
  [SMALL_STATE(499)] = 18530,
  [SMALL_STATE(500)] = 18552,
  [SMALL_STATE(501)] = 18580,
  [SMALL_STATE(502)] = 18608,
  [SMALL_STATE(503)] = 18640,
  [SMALL_STATE(504)] = 18662,
  [SMALL_STATE(505)] = 18678,
  [SMALL_STATE(506)] = 18706,
  [SMALL_STATE(507)] = 18734,
  [SMALL_STATE(508)] = 18768,
  [SMALL_STATE(509)] = 18790,
  [SMALL_STATE(510)] = 18822,
  [SMALL_STATE(511)] = 18844,
  [SMALL_STATE(512)] = 18876,
  [SMALL_STATE(513)] = 18897,
  [SMALL_STATE(514)] = 18928,
  [SMALL_STATE(515)] = 18959,
  [SMALL_STATE(516)] = 18990,
  [SMALL_STATE(517)] = 19021,
  [SMALL_STATE(518)] = 19052,
  [SMALL_STATE(519)] = 19083,
  [SMALL_STATE(520)] = 19114,
  [SMALL_STATE(521)] = 19143,
  [SMALL_STATE(522)] = 19164,
  [SMALL_STATE(523)] = 19195,
  [SMALL_STATE(524)] = 19216,
  [SMALL_STATE(525)] = 19247,
  [SMALL_STATE(526)] = 19278,
  [SMALL_STATE(527)] = 19307,
  [SMALL_STATE(528)] = 19328,
  [SMALL_STATE(529)] = 19359,
  [SMALL_STATE(530)] = 19390,
  [SMALL_STATE(531)] = 19421,
  [SMALL_STATE(532)] = 19452,
  [SMALL_STATE(533)] = 19483,
  [SMALL_STATE(534)] = 19504,
  [SMALL_STATE(535)] = 19525,
  [SMALL_STATE(536)] = 19551,
  [SMALL_STATE(537)] = 19579,
  [SMALL_STATE(538)] = 19595,
  [SMALL_STATE(539)] = 19611,
  [SMALL_STATE(540)] = 19637,
  [SMALL_STATE(541)] = 19663,
  [SMALL_STATE(542)] = 19691,
  [SMALL_STATE(543)] = 19707,
  [SMALL_STATE(544)] = 19735,
  [SMALL_STATE(545)] = 19761,
  [SMALL_STATE(546)] = 19789,
  [SMALL_STATE(547)] = 19815,
  [SMALL_STATE(548)] = 19841,
  [SMALL_STATE(549)] = 19869,
  [SMALL_STATE(550)] = 19895,
  [SMALL_STATE(551)] = 19923,
  [SMALL_STATE(552)] = 19949,
  [SMALL_STATE(553)] = 19975,
  [SMALL_STATE(554)] = 20001,
  [SMALL_STATE(555)] = 20027,
  [SMALL_STATE(556)] = 20049,
  [SMALL_STATE(557)] = 20077,
  [SMALL_STATE(558)] = 20105,
  [SMALL_STATE(559)] = 20121,
  [SMALL_STATE(560)] = 20137,
  [SMALL_STATE(561)] = 20153,
  [SMALL_STATE(562)] = 20179,
  [SMALL_STATE(563)] = 20207,
  [SMALL_STATE(564)] = 20235,
  [SMALL_STATE(565)] = 20251,
  [SMALL_STATE(566)] = 20267,
  [SMALL_STATE(567)] = 20293,
  [SMALL_STATE(568)] = 20309,
  [SMALL_STATE(569)] = 20325,
  [SMALL_STATE(570)] = 20351,
  [SMALL_STATE(571)] = 20379,
  [SMALL_STATE(572)] = 20395,
  [SMALL_STATE(573)] = 20423,
  [SMALL_STATE(574)] = 20439,
  [SMALL_STATE(575)] = 20455,
  [SMALL_STATE(576)] = 20471,
  [SMALL_STATE(577)] = 20487,
  [SMALL_STATE(578)] = 20503,
  [SMALL_STATE(579)] = 20519,
  [SMALL_STATE(580)] = 20535,
  [SMALL_STATE(581)] = 20554,
  [SMALL_STATE(582)] = 20569,
  [SMALL_STATE(583)] = 20584,
  [SMALL_STATE(584)] = 20599,
  [SMALL_STATE(585)] = 20614,
  [SMALL_STATE(586)] = 20633,
  [SMALL_STATE(587)] = 20648,
  [SMALL_STATE(588)] = 20667,
  [SMALL_STATE(589)] = 20692,
  [SMALL_STATE(590)] = 20709,
  [SMALL_STATE(591)] = 20726,
  [SMALL_STATE(592)] = 20753,
  [SMALL_STATE(593)] = 20773,
  [SMALL_STATE(594)] = 20795,
  [SMALL_STATE(595)] = 20813,
  [SMALL_STATE(596)] = 20831,
  [SMALL_STATE(597)] = 20853,
  [SMALL_STATE(598)] = 20875,
  [SMALL_STATE(599)] = 20895,
  [SMALL_STATE(600)] = 20917,
  [SMALL_STATE(601)] = 20935,
  [SMALL_STATE(602)] = 20953,
  [SMALL_STATE(603)] = 20975,
  [SMALL_STATE(604)] = 20995,
  [SMALL_STATE(605)] = 21017,
  [SMALL_STATE(606)] = 21039,
  [SMALL_STATE(607)] = 21059,
  [SMALL_STATE(608)] = 21081,
  [SMALL_STATE(609)] = 21101,
  [SMALL_STATE(610)] = 21123,
  [SMALL_STATE(611)] = 21145,
  [SMALL_STATE(612)] = 21165,
  [SMALL_STATE(613)] = 21187,
  [SMALL_STATE(614)] = 21207,
  [SMALL_STATE(615)] = 21227,
  [SMALL_STATE(616)] = 21249,
  [SMALL_STATE(617)] = 21267,
  [SMALL_STATE(618)] = 21289,
  [SMALL_STATE(619)] = 21311,
  [SMALL_STATE(620)] = 21331,
  [SMALL_STATE(621)] = 21353,
  [SMALL_STATE(622)] = 21369,
  [SMALL_STATE(623)] = 21389,
  [SMALL_STATE(624)] = 21405,
  [SMALL_STATE(625)] = 21421,
  [SMALL_STATE(626)] = 21437,
  [SMALL_STATE(627)] = 21453,
  [SMALL_STATE(628)] = 21477,
  [SMALL_STATE(629)] = 21499,
  [SMALL_STATE(630)] = 21519,
  [SMALL_STATE(631)] = 21541,
  [SMALL_STATE(632)] = 21563,
  [SMALL_STATE(633)] = 21585,
  [SMALL_STATE(634)] = 21607,
  [SMALL_STATE(635)] = 21627,
  [SMALL_STATE(636)] = 21649,
  [SMALL_STATE(637)] = 21669,
  [SMALL_STATE(638)] = 21691,
  [SMALL_STATE(639)] = 21711,
  [SMALL_STATE(640)] = 21730,
  [SMALL_STATE(641)] = 21743,
  [SMALL_STATE(642)] = 21762,
  [SMALL_STATE(643)] = 21781,
  [SMALL_STATE(644)] = 21800,
  [SMALL_STATE(645)] = 21813,
  [SMALL_STATE(646)] = 21826,
  [SMALL_STATE(647)] = 21839,
  [SMALL_STATE(648)] = 21852,
  [SMALL_STATE(649)] = 21865,
  [SMALL_STATE(650)] = 21884,
  [SMALL_STATE(651)] = 21897,
  [SMALL_STATE(652)] = 21916,
  [SMALL_STATE(653)] = 21929,
  [SMALL_STATE(654)] = 21942,
  [SMALL_STATE(655)] = 21955,
  [SMALL_STATE(656)] = 21968,
  [SMALL_STATE(657)] = 21987,
  [SMALL_STATE(658)] = 22000,
  [SMALL_STATE(659)] = 22013,
  [SMALL_STATE(660)] = 22026,
  [SMALL_STATE(661)] = 22039,
  [SMALL_STATE(662)] = 22052,
  [SMALL_STATE(663)] = 22071,
  [SMALL_STATE(664)] = 22090,
  [SMALL_STATE(665)] = 22109,
  [SMALL_STATE(666)] = 22122,
  [SMALL_STATE(667)] = 22135,
  [SMALL_STATE(668)] = 22148,
  [SMALL_STATE(669)] = 22161,
  [SMALL_STATE(670)] = 22177,
  [SMALL_STATE(671)] = 22193,
  [SMALL_STATE(672)] = 22205,
  [SMALL_STATE(673)] = 22223,
  [SMALL_STATE(674)] = 22235,
  [SMALL_STATE(675)] = 22251,
  [SMALL_STATE(676)] = 22267,
  [SMALL_STATE(677)] = 22283,
  [SMALL_STATE(678)] = 22299,
  [SMALL_STATE(679)] = 22315,
  [SMALL_STATE(680)] = 22331,
  [SMALL_STATE(681)] = 22349,
  [SMALL_STATE(682)] = 22365,
  [SMALL_STATE(683)] = 22380,
  [SMALL_STATE(684)] = 22395,
  [SMALL_STATE(685)] = 22410,
  [SMALL_STATE(686)] = 22425,
  [SMALL_STATE(687)] = 22438,
  [SMALL_STATE(688)] = 22451,
  [SMALL_STATE(689)] = 22466,
  [SMALL_STATE(690)] = 22481,
  [SMALL_STATE(691)] = 22496,
  [SMALL_STATE(692)] = 22511,
  [SMALL_STATE(693)] = 22526,
  [SMALL_STATE(694)] = 22541,
  [SMALL_STATE(695)] = 22556,
  [SMALL_STATE(696)] = 22571,
  [SMALL_STATE(697)] = 22586,
  [SMALL_STATE(698)] = 22595,
  [SMALL_STATE(699)] = 22610,
  [SMALL_STATE(700)] = 22625,
  [SMALL_STATE(701)] = 22638,
  [SMALL_STATE(702)] = 22653,
  [SMALL_STATE(703)] = 22663,
  [SMALL_STATE(704)] = 22677,
  [SMALL_STATE(705)] = 22687,
  [SMALL_STATE(706)] = 22697,
  [SMALL_STATE(707)] = 22709,
  [SMALL_STATE(708)] = 22721,
  [SMALL_STATE(709)] = 22733,
  [SMALL_STATE(710)] = 22743,
  [SMALL_STATE(711)] = 22755,
  [SMALL_STATE(712)] = 22765,
  [SMALL_STATE(713)] = 22777,
  [SMALL_STATE(714)] = 22787,
  [SMALL_STATE(715)] = 22797,
  [SMALL_STATE(716)] = 22807,
  [SMALL_STATE(717)] = 22817,
  [SMALL_STATE(718)] = 22829,
  [SMALL_STATE(719)] = 22839,
  [SMALL_STATE(720)] = 22849,
  [SMALL_STATE(721)] = 22859,
  [SMALL_STATE(722)] = 22869,
  [SMALL_STATE(723)] = 22881,
  [SMALL_STATE(724)] = 22891,
  [SMALL_STATE(725)] = 22901,
  [SMALL_STATE(726)] = 22913,
  [SMALL_STATE(727)] = 22925,
  [SMALL_STATE(728)] = 22937,
  [SMALL_STATE(729)] = 22949,
  [SMALL_STATE(730)] = 22959,
  [SMALL_STATE(731)] = 22971,
  [SMALL_STATE(732)] = 22981,
  [SMALL_STATE(733)] = 22991,
  [SMALL_STATE(734)] = 23001,
  [SMALL_STATE(735)] = 23011,
  [SMALL_STATE(736)] = 23021,
  [SMALL_STATE(737)] = 23031,
  [SMALL_STATE(738)] = 23041,
  [SMALL_STATE(739)] = 23051,
  [SMALL_STATE(740)] = 23061,
  [SMALL_STATE(741)] = 23071,
  [SMALL_STATE(742)] = 23081,
  [SMALL_STATE(743)] = 23093,
  [SMALL_STATE(744)] = 23103,
  [SMALL_STATE(745)] = 23115,
  [SMALL_STATE(746)] = 23129,
  [SMALL_STATE(747)] = 23139,
  [SMALL_STATE(748)] = 23151,
  [SMALL_STATE(749)] = 23161,
  [SMALL_STATE(750)] = 23171,
  [SMALL_STATE(751)] = 23181,
  [SMALL_STATE(752)] = 23193,
  [SMALL_STATE(753)] = 23207,
  [SMALL_STATE(754)] = 23221,
  [SMALL_STATE(755)] = 23231,
  [SMALL_STATE(756)] = 23241,
  [SMALL_STATE(757)] = 23251,
  [SMALL_STATE(758)] = 23261,
  [SMALL_STATE(759)] = 23271,
  [SMALL_STATE(760)] = 23281,
  [SMALL_STATE(761)] = 23291,
  [SMALL_STATE(762)] = 23301,
  [SMALL_STATE(763)] = 23315,
  [SMALL_STATE(764)] = 23325,
  [SMALL_STATE(765)] = 23335,
  [SMALL_STATE(766)] = 23345,
  [SMALL_STATE(767)] = 23355,
  [SMALL_STATE(768)] = 23365,
  [SMALL_STATE(769)] = 23375,
  [SMALL_STATE(770)] = 23385,
  [SMALL_STATE(771)] = 23395,
  [SMALL_STATE(772)] = 23405,
  [SMALL_STATE(773)] = 23417,
  [SMALL_STATE(774)] = 23427,
  [SMALL_STATE(775)] = 23439,
  [SMALL_STATE(776)] = 23449,
  [SMALL_STATE(777)] = 23459,
  [SMALL_STATE(778)] = 23469,
  [SMALL_STATE(779)] = 23479,
  [SMALL_STATE(780)] = 23489,
  [SMALL_STATE(781)] = 23503,
  [SMALL_STATE(782)] = 23515,
  [SMALL_STATE(783)] = 23524,
  [SMALL_STATE(784)] = 23533,
  [SMALL_STATE(785)] = 23542,
  [SMALL_STATE(786)] = 23551,
  [SMALL_STATE(787)] = 23560,
  [SMALL_STATE(788)] = 23571,
  [SMALL_STATE(789)] = 23584,
  [SMALL_STATE(790)] = 23593,
  [SMALL_STATE(791)] = 23602,
  [SMALL_STATE(792)] = 23615,
  [SMALL_STATE(793)] = 23624,
  [SMALL_STATE(794)] = 23633,
  [SMALL_STATE(795)] = 23642,
  [SMALL_STATE(796)] = 23651,
  [SMALL_STATE(797)] = 23660,
  [SMALL_STATE(798)] = 23669,
  [SMALL_STATE(799)] = 23678,
  [SMALL_STATE(800)] = 23687,
  [SMALL_STATE(801)] = 23696,
  [SMALL_STATE(802)] = 23705,
  [SMALL_STATE(803)] = 23714,
  [SMALL_STATE(804)] = 23723,
  [SMALL_STATE(805)] = 23732,
  [SMALL_STATE(806)] = 23741,
  [SMALL_STATE(807)] = 23750,
  [SMALL_STATE(808)] = 23759,
  [SMALL_STATE(809)] = 23768,
  [SMALL_STATE(810)] = 23777,
  [SMALL_STATE(811)] = 23786,
  [SMALL_STATE(812)] = 23795,
  [SMALL_STATE(813)] = 23808,
  [SMALL_STATE(814)] = 23817,
  [SMALL_STATE(815)] = 23826,
  [SMALL_STATE(816)] = 23835,
  [SMALL_STATE(817)] = 23844,
  [SMALL_STATE(818)] = 23853,
  [SMALL_STATE(819)] = 23862,
  [SMALL_STATE(820)] = 23871,
  [SMALL_STATE(821)] = 23880,
  [SMALL_STATE(822)] = 23889,
  [SMALL_STATE(823)] = 23898,
  [SMALL_STATE(824)] = 23907,
  [SMALL_STATE(825)] = 23916,
  [SMALL_STATE(826)] = 23925,
  [SMALL_STATE(827)] = 23934,
  [SMALL_STATE(828)] = 23943,
  [SMALL_STATE(829)] = 23952,
  [SMALL_STATE(830)] = 23961,
  [SMALL_STATE(831)] = 23970,
  [SMALL_STATE(832)] = 23979,
  [SMALL_STATE(833)] = 23990,
  [SMALL_STATE(834)] = 23999,
  [SMALL_STATE(835)] = 24012,
  [SMALL_STATE(836)] = 24019,
  [SMALL_STATE(837)] = 24028,
  [SMALL_STATE(838)] = 24039,
  [SMALL_STATE(839)] = 24052,
  [SMALL_STATE(840)] = 24065,
  [SMALL_STATE(841)] = 24074,
  [SMALL_STATE(842)] = 24083,
  [SMALL_STATE(843)] = 24092,
  [SMALL_STATE(844)] = 24101,
  [SMALL_STATE(845)] = 24110,
  [SMALL_STATE(846)] = 24119,
  [SMALL_STATE(847)] = 24130,
  [SMALL_STATE(848)] = 24143,
  [SMALL_STATE(849)] = 24153,
  [SMALL_STATE(850)] = 24163,
  [SMALL_STATE(851)] = 24173,
  [SMALL_STATE(852)] = 24183,
  [SMALL_STATE(853)] = 24193,
  [SMALL_STATE(854)] = 24203,
  [SMALL_STATE(855)] = 24213,
  [SMALL_STATE(856)] = 24223,
  [SMALL_STATE(857)] = 24231,
  [SMALL_STATE(858)] = 24241,
  [SMALL_STATE(859)] = 24249,
  [SMALL_STATE(860)] = 24259,
  [SMALL_STATE(861)] = 24269,
  [SMALL_STATE(862)] = 24276,
  [SMALL_STATE(863)] = 24281,
  [SMALL_STATE(864)] = 24286,
  [SMALL_STATE(865)] = 24293,
  [SMALL_STATE(866)] = 24300,
  [SMALL_STATE(867)] = 24307,
  [SMALL_STATE(868)] = 24314,
  [SMALL_STATE(869)] = 24319,
  [SMALL_STATE(870)] = 24324,
  [SMALL_STATE(871)] = 24331,
  [SMALL_STATE(872)] = 24336,
  [SMALL_STATE(873)] = 24341,
  [SMALL_STATE(874)] = 24348,
  [SMALL_STATE(875)] = 24353,
  [SMALL_STATE(876)] = 24358,
  [SMALL_STATE(877)] = 24363,
  [SMALL_STATE(878)] = 24368,
  [SMALL_STATE(879)] = 24373,
  [SMALL_STATE(880)] = 24380,
  [SMALL_STATE(881)] = 24385,
  [SMALL_STATE(882)] = 24390,
  [SMALL_STATE(883)] = 24395,
  [SMALL_STATE(884)] = 24402,
  [SMALL_STATE(885)] = 24407,
  [SMALL_STATE(886)] = 24414,
  [SMALL_STATE(887)] = 24421,
  [SMALL_STATE(888)] = 24426,
  [SMALL_STATE(889)] = 24431,
  [SMALL_STATE(890)] = 24438,
  [SMALL_STATE(891)] = 24443,
  [SMALL_STATE(892)] = 24448,
  [SMALL_STATE(893)] = 24453,
  [SMALL_STATE(894)] = 24458,
  [SMALL_STATE(895)] = 24463,
  [SMALL_STATE(896)] = 24468,
  [SMALL_STATE(897)] = 24473,
  [SMALL_STATE(898)] = 24478,
  [SMALL_STATE(899)] = 24483,
  [SMALL_STATE(900)] = 24488,
  [SMALL_STATE(901)] = 24495,
  [SMALL_STATE(902)] = 24500,
  [SMALL_STATE(903)] = 24505,
  [SMALL_STATE(904)] = 24512,
  [SMALL_STATE(905)] = 24517,
  [SMALL_STATE(906)] = 24524,
  [SMALL_STATE(907)] = 24531,
  [SMALL_STATE(908)] = 24538,
  [SMALL_STATE(909)] = 24545,
  [SMALL_STATE(910)] = 24550,
  [SMALL_STATE(911)] = 24557,
  [SMALL_STATE(912)] = 24561,
  [SMALL_STATE(913)] = 24565,
  [SMALL_STATE(914)] = 24569,
  [SMALL_STATE(915)] = 24573,
  [SMALL_STATE(916)] = 24577,
  [SMALL_STATE(917)] = 24581,
  [SMALL_STATE(918)] = 24585,
  [SMALL_STATE(919)] = 24589,
  [SMALL_STATE(920)] = 24593,
  [SMALL_STATE(921)] = 24597,
  [SMALL_STATE(922)] = 24601,
  [SMALL_STATE(923)] = 24605,
  [SMALL_STATE(924)] = 24609,
  [SMALL_STATE(925)] = 24613,
  [SMALL_STATE(926)] = 24617,
  [SMALL_STATE(927)] = 24621,
  [SMALL_STATE(928)] = 24625,
  [SMALL_STATE(929)] = 24629,
  [SMALL_STATE(930)] = 24633,
  [SMALL_STATE(931)] = 24637,
  [SMALL_STATE(932)] = 24641,
  [SMALL_STATE(933)] = 24645,
  [SMALL_STATE(934)] = 24649,
  [SMALL_STATE(935)] = 24653,
  [SMALL_STATE(936)] = 24657,
  [SMALL_STATE(937)] = 24661,
  [SMALL_STATE(938)] = 24665,
  [SMALL_STATE(939)] = 24669,
  [SMALL_STATE(940)] = 24673,
  [SMALL_STATE(941)] = 24677,
  [SMALL_STATE(942)] = 24681,
  [SMALL_STATE(943)] = 24685,
  [SMALL_STATE(944)] = 24689,
  [SMALL_STATE(945)] = 24693,
  [SMALL_STATE(946)] = 24697,
  [SMALL_STATE(947)] = 24701,
  [SMALL_STATE(948)] = 24705,
  [SMALL_STATE(949)] = 24709,
  [SMALL_STATE(950)] = 24713,
  [SMALL_STATE(951)] = 24717,
  [SMALL_STATE(952)] = 24721,
  [SMALL_STATE(953)] = 24725,
  [SMALL_STATE(954)] = 24729,
  [SMALL_STATE(955)] = 24733,
  [SMALL_STATE(956)] = 24737,
  [SMALL_STATE(957)] = 24741,
  [SMALL_STATE(958)] = 24745,
  [SMALL_STATE(959)] = 24749,
  [SMALL_STATE(960)] = 24753,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_no_language, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_with_language, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__datatype_iri, 1), REDUCE(sym__class_iri, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datatype_iri, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_iri, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_iri, 1),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__data_property_iri, 1), REDUCE(sym__object_property_iri, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_literal, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(30),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(34),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_target, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(44),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat2, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(886),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(651),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(180),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(184),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat2, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(77),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(84),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(944),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 3),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(536),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(918),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(424),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(957),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(327),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(287),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2), SHIFT_REPEAT(345),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_object_property, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(299),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(502),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 2),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__data_property_iri, 1), REDUCE(sym__object_property_iri, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(585),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(440),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(321),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(145),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(554),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(516),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(464),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(139),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(555),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(509),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(439),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(334),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(294),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_expression, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_property_expression, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inverse_object_property, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 3),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(433),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 2),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(556),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(201),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(270),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(156),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(490),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(642),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(663),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(662),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(656),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(553),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(138),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(393),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(461),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(309),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 1),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 1),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_2list, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_2list, 3),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(272),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(175),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2), SHIFT_REPEAT(220),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(518),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(522),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(140),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(177),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(848),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(541),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_literal, 3),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 2),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 2), SHIFT_REPEAT(511),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 2),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 2), SHIFT_REPEAT(435),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_literal, 4),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 2),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(154),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(517),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(134),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(124),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(416),
  [900] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(335),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(530),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(132),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(408),
  [938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(466),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 1),
  [945] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(348),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 2),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(627),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 2),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(588),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 3),
  [968] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(358),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_fact, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_fact, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(529),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(591),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(545),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 3),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(383),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(333),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(386),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(425),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(403),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(531),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), REDUCE(sym_datatype_frame, 4),
  [1065] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), SHIFT_REPEAT(519),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(279),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(844),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_2list_repeat1, 2),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_2list_repeat1, 2), SHIFT_REPEAT(615),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_2list_repeat1, 2),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_2list_repeat1, 2), SHIFT_REPEAT(561),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2), SHIFT_REPEAT(546),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_2list, 3),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_2list, 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_2list, 4),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2), SHIFT_REPEAT(239),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_2list, 4),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_2list, 4),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_2list, 3),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(465),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(478),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(487),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(496),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [1251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(499),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_no_language, 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [1266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(508),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(510),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 2),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 1),
  [1288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(523),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 3),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(557),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 6),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 5),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 4),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typed_literal, 3),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 3),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 2),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_target, 1),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_with_language, 2),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_iri, 1),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_property_iri, 1),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_property_iri, 1),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(572),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(562),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(570),
  [1429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(543),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facet, 1),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(550),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(438),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [1472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(864),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(319),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(563),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(280),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [1566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(922),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_list, 1),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2),
  [1607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(415),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 2),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(589),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 1),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [1637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2), SHIFT_REPEAT(552),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_list, 2),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1782] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_owl2manchestersyntax(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

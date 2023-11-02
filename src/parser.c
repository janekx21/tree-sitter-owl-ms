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
#define STATE_COUNT 969
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 217
#define ALIAS_COUNT 0
#define TOKEN_COUNT 97
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
  anon_sym_Import_COLON = 22,
  anon_sym_Prefix_COLON = 23,
  anon_sym_Annotations_COLON = 24,
  anon_sym_inverse = 25,
  anon_sym_not = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_or = 31,
  anon_sym_and = 32,
  anon_sym_LBRACK = 33,
  anon_sym_COMMA = 34,
  anon_sym_RBRACK = 35,
  anon_sym_length = 36,
  anon_sym_minLength = 37,
  anon_sym_maxLength = 38,
  anon_sym_pattern = 39,
  anon_sym_langRange = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_that = 43,
  anon_sym_some = 44,
  anon_sym_only = 45,
  anon_sym_Self = 46,
  anon_sym_min = 47,
  anon_sym_max = 48,
  anon_sym_exactly = 49,
  anon_sym_value = 50,
  anon_sym_Datatype_COLON = 51,
  anon_sym_EquivalentTo_COLON = 52,
  anon_sym_Class_COLON = 53,
  anon_sym_SubClassOf_COLON = 54,
  anon_sym_DisjointWith_COLON = 55,
  anon_sym_DisjointUnionOf_COLON = 56,
  anon_sym_HasKey_COLON = 57,
  anon_sym_ObjectProperty_COLON = 58,
  anon_sym_Domain_COLON = 59,
  anon_sym_Range_COLON = 60,
  anon_sym_SubPropertyOf_COLON = 61,
  anon_sym_InverseOf_COLON = 62,
  anon_sym_Characteristics_COLON = 63,
  anon_sym_SubPropertyChain_COLON = 64,
  anon_sym_o = 65,
  anon_sym_Functional = 66,
  anon_sym_InverseFunctional = 67,
  anon_sym_Reflexive = 68,
  anon_sym_Irreflexive = 69,
  anon_sym_Symmetric = 70,
  anon_sym_Asymmetric = 71,
  anon_sym_Transitive = 72,
  anon_sym_DataProperty_COLON = 73,
  anon_sym_AnnotationProperty_COLON = 74,
  anon_sym_Individual_COLON = 75,
  anon_sym_Types_COLON = 76,
  anon_sym_Facts_COLON = 77,
  anon_sym_SameAs_COLON = 78,
  anon_sym_DifferentFrom_COLON = 79,
  anon_sym_EquivalentClasses_COLON = 80,
  anon_sym_DisjointClasses_COLON = 81,
  anon_sym_EquivalentProperties_COLON = 82,
  anon_sym_DisjointProperties_COLON = 83,
  anon_sym_SameIndividual_COLON = 84,
  anon_sym_DifferentIndividuals_COLON = 85,
  anon_sym_COLON = 86,
  sym__scheme = 87,
  anon_sym_SLASH_SLASH = 88,
  anon_sym_AT = 89,
  sym__iunreserved = 90,
  sym__port = 91,
  anon_sym_SLASH = 92,
  sym__iquery = 93,
  sym__ifragment = 94,
  sym__pn_local = 95,
  sym__pname_ln = 96,
  sym_source_file = 97,
  sym_iri = 98,
  sym_full_iri = 99,
  sym_abbreviated_iri = 100,
  sym_simple_iri = 101,
  sym_datatype = 102,
  sym__datatype_iri = 103,
  sym__class_iri = 104,
  sym__annotation_property_iri = 105,
  sym__ontology_iri = 106,
  sym__data_property_iri = 107,
  sym__version_iri = 108,
  sym__object_property_iri = 109,
  sym__individual_iri = 110,
  sym_individual = 111,
  sym_node_id = 112,
  sym_non_negative_integer = 113,
  sym__positive_integer = 114,
  aux_sym__digits = 115,
  sym__digit = 116,
  sym_literal = 117,
  sym__decimal_literal = 118,
  sym__floating_point_literal = 119,
  sym__integer_literal = 120,
  sym__exponent = 121,
  sym__string_literal_no_language = 122,
  sym__string_literal_with_language = 123,
  sym__typed_literal = 124,
  sym__lexial_value = 125,
  sym_ontology_document = 126,
  sym_ontology = 127,
  sym_import = 128,
  sym_frame = 129,
  sym_prefix_declaration = 130,
  sym_annotations = 131,
  sym_annotation = 132,
  sym_annotation_target = 133,
  sym_object_property_expression = 134,
  sym_inverse_object_property = 135,
  sym_data_property_expression = 136,
  sym_data_primary = 137,
  sym_data_atomic = 138,
  sym_data_range = 139,
  sym_data_conjunction = 140,
  sym_datatype_restriction = 141,
  sym_facet = 142,
  sym__restriction_value = 143,
  sym_description = 144,
  sym_conjunction = 145,
  sym_primary = 146,
  sym_restriction = 147,
  sym_atomic = 148,
  sym_datatype_frame = 149,
  sym_class_frame = 150,
  sym_object_property_frame = 151,
  sym_object_property_characteristic = 152,
  sym_data_property_frame = 153,
  sym_annotation_property_frame = 154,
  sym_individual_frame = 155,
  sym_fact = 156,
  sym_object_property_fact = 157,
  sym_data_property_fact = 158,
  sym_misc = 159,
  sym_description_annotated_list = 160,
  sym_annotation_annotated_list = 161,
  sym_object_property_expression_annotated_list = 162,
  sym_object_property_characteristic_annotated_list = 163,
  sym_data_range_annotated_list = 164,
  sym_data_property_expression_annotated_list = 165,
  sym_iri_annotated_list = 166,
  sym_annotation_property_iri_annotated_list = 167,
  sym_individual_annotated_list = 168,
  sym_fact_annotated_list = 169,
  sym_description_2list = 170,
  sym_object_property_2list = 171,
  sym_data_property_2list = 172,
  sym_individual_2list = 173,
  sym_individual_list = 174,
  sym_literal_list = 175,
  sym__iri_rfc3987 = 176,
  sym__ihier_part = 177,
  sym__iauthority = 178,
  sym__iuserinfo = 179,
  sym__ihost = 180,
  aux_sym__ipath_abempty = 181,
  sym__isegment = 182,
  aux_sym__positive_integer_repeat1 = 183,
  aux_sym_ontology_document_repeat1 = 184,
  aux_sym_ontology_repeat1 = 185,
  aux_sym_ontology_repeat2 = 186,
  aux_sym_ontology_repeat3 = 187,
  aux_sym_data_range_repeat1 = 188,
  aux_sym_data_conjunction_repeat1 = 189,
  aux_sym_datatype_restriction_repeat1 = 190,
  aux_sym_description_repeat1 = 191,
  aux_sym_conjunction_repeat1 = 192,
  aux_sym_conjunction_repeat2 = 193,
  aux_sym_datatype_frame_repeat1 = 194,
  aux_sym_class_frame_repeat1 = 195,
  aux_sym_class_frame_repeat2 = 196,
  aux_sym_object_property_frame_repeat1 = 197,
  aux_sym_object_property_frame_repeat2 = 198,
  aux_sym_data_property_frame_repeat1 = 199,
  aux_sym_annotation_property_frame_repeat1 = 200,
  aux_sym_individual_frame_repeat1 = 201,
  aux_sym_description_annotated_list_repeat1 = 202,
  aux_sym_annotation_annotated_list_repeat1 = 203,
  aux_sym_object_property_expression_annotated_list_repeat1 = 204,
  aux_sym_object_property_characteristic_annotated_list_repeat1 = 205,
  aux_sym_data_range_annotated_list_repeat1 = 206,
  aux_sym_data_property_expression_annotated_list_repeat1 = 207,
  aux_sym_iri_annotated_list_repeat1 = 208,
  aux_sym_annotation_property_iri_annotated_list_repeat1 = 209,
  aux_sym_individual_annotated_list_repeat1 = 210,
  aux_sym_fact_annotated_list_repeat1 = 211,
  aux_sym_description_2list_repeat1 = 212,
  aux_sym_object_property_2list_repeat1 = 213,
  aux_sym_data_property_2list_repeat1 = 214,
  aux_sym_individual_2list_repeat1 = 215,
  aux_sym_literal_list_repeat1 = 216,
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
  [anon_sym_Import_COLON] = "Import:",
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
  [sym_import] = "import",
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
  [aux_sym_ontology_repeat3] = "ontology_repeat3",
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
  [anon_sym_Import_COLON] = anon_sym_Import_COLON,
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
  [sym_import] = sym_import,
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
  [aux_sym_ontology_repeat3] = aux_sym_ontology_repeat3,
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
  [anon_sym_Import_COLON] = {
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
  [sym_import] = {
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
  [aux_sym_ontology_repeat3] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 2,
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
  [32] = 30,
  [33] = 28,
  [34] = 27,
  [35] = 35,
  [36] = 30,
  [37] = 37,
  [38] = 38,
  [39] = 28,
  [40] = 40,
  [41] = 27,
  [42] = 30,
  [43] = 27,
  [44] = 28,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 45,
  [51] = 51,
  [52] = 52,
  [53] = 45,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 2,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 45,
  [74] = 74,
  [75] = 25,
  [76] = 23,
  [77] = 27,
  [78] = 28,
  [79] = 30,
  [80] = 31,
  [81] = 81,
  [82] = 26,
  [83] = 29,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 85,
  [88] = 85,
  [89] = 85,
  [90] = 85,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 45,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 106,
  [109] = 106,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 106,
  [115] = 106,
  [116] = 113,
  [117] = 113,
  [118] = 113,
  [119] = 113,
  [120] = 113,
  [121] = 121,
  [122] = 113,
  [123] = 113,
  [124] = 124,
  [125] = 125,
  [126] = 113,
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
  [147] = 110,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 104,
  [152] = 125,
  [153] = 124,
  [154] = 111,
  [155] = 155,
  [156] = 150,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 121,
  [164] = 150,
  [165] = 105,
  [166] = 150,
  [167] = 167,
  [168] = 103,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 112,
  [183] = 183,
  [184] = 184,
  [185] = 92,
  [186] = 186,
  [187] = 144,
  [188] = 4,
  [189] = 189,
  [190] = 121,
  [191] = 191,
  [192] = 8,
  [193] = 7,
  [194] = 194,
  [195] = 134,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 104,
  [201] = 127,
  [202] = 136,
  [203] = 125,
  [204] = 124,
  [205] = 6,
  [206] = 206,
  [207] = 112,
  [208] = 208,
  [209] = 110,
  [210] = 210,
  [211] = 111,
  [212] = 212,
  [213] = 213,
  [214] = 6,
  [215] = 7,
  [216] = 8,
  [217] = 4,
  [218] = 105,
  [219] = 130,
  [220] = 220,
  [221] = 103,
  [222] = 222,
  [223] = 223,
  [224] = 177,
  [225] = 112,
  [226] = 110,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 174,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 176,
  [236] = 236,
  [237] = 130,
  [238] = 159,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 134,
  [244] = 244,
  [245] = 231,
  [246] = 241,
  [247] = 247,
  [248] = 105,
  [249] = 249,
  [250] = 103,
  [251] = 223,
  [252] = 252,
  [253] = 127,
  [254] = 254,
  [255] = 244,
  [256] = 241,
  [257] = 257,
  [258] = 167,
  [259] = 111,
  [260] = 124,
  [261] = 261,
  [262] = 231,
  [263] = 231,
  [264] = 264,
  [265] = 121,
  [266] = 125,
  [267] = 104,
  [268] = 241,
  [269] = 269,
  [270] = 270,
  [271] = 134,
  [272] = 159,
  [273] = 130,
  [274] = 274,
  [275] = 167,
  [276] = 174,
  [277] = 4,
  [278] = 278,
  [279] = 279,
  [280] = 274,
  [281] = 281,
  [282] = 282,
  [283] = 127,
  [284] = 177,
  [285] = 274,
  [286] = 176,
  [287] = 287,
  [288] = 274,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 23,
  [296] = 25,
  [297] = 297,
  [298] = 274,
  [299] = 8,
  [300] = 7,
  [301] = 6,
  [302] = 302,
  [303] = 303,
  [304] = 274,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 100,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 31,
  [313] = 29,
  [314] = 314,
  [315] = 307,
  [316] = 316,
  [317] = 26,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 97,
  [324] = 324,
  [325] = 167,
  [326] = 177,
  [327] = 307,
  [328] = 98,
  [329] = 329,
  [330] = 330,
  [331] = 307,
  [332] = 174,
  [333] = 307,
  [334] = 101,
  [335] = 335,
  [336] = 176,
  [337] = 337,
  [338] = 102,
  [339] = 307,
  [340] = 159,
  [341] = 341,
  [342] = 26,
  [343] = 27,
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
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 28,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 25,
  [372] = 369,
  [373] = 373,
  [374] = 23,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 23,
  [379] = 379,
  [380] = 369,
  [381] = 369,
  [382] = 382,
  [383] = 383,
  [384] = 369,
  [385] = 369,
  [386] = 25,
  [387] = 387,
  [388] = 388,
  [389] = 112,
  [390] = 29,
  [391] = 391,
  [392] = 26,
  [393] = 393,
  [394] = 26,
  [395] = 395,
  [396] = 111,
  [397] = 110,
  [398] = 105,
  [399] = 29,
  [400] = 31,
  [401] = 124,
  [402] = 31,
  [403] = 125,
  [404] = 404,
  [405] = 405,
  [406] = 104,
  [407] = 103,
  [408] = 121,
  [409] = 409,
  [410] = 410,
  [411] = 127,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 26,
  [416] = 416,
  [417] = 417,
  [418] = 130,
  [419] = 419,
  [420] = 412,
  [421] = 421,
  [422] = 422,
  [423] = 134,
  [424] = 424,
  [425] = 424,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 427,
  [430] = 427,
  [431] = 424,
  [432] = 25,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 427,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 23,
  [444] = 444,
  [445] = 23,
  [446] = 446,
  [447] = 424,
  [448] = 427,
  [449] = 279,
  [450] = 25,
  [451] = 45,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 303,
  [456] = 270,
  [457] = 25,
  [458] = 23,
  [459] = 459,
  [460] = 424,
  [461] = 461,
  [462] = 427,
  [463] = 463,
  [464] = 464,
  [465] = 424,
  [466] = 26,
  [467] = 26,
  [468] = 468,
  [469] = 29,
  [470] = 470,
  [471] = 31,
  [472] = 29,
  [473] = 31,
  [474] = 468,
  [475] = 26,
  [476] = 468,
  [477] = 470,
  [478] = 470,
  [479] = 23,
  [480] = 468,
  [481] = 25,
  [482] = 482,
  [483] = 470,
  [484] = 470,
  [485] = 31,
  [486] = 486,
  [487] = 487,
  [488] = 29,
  [489] = 470,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 468,
  [494] = 468,
  [495] = 26,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 11,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 497,
  [505] = 497,
  [506] = 497,
  [507] = 497,
  [508] = 508,
  [509] = 497,
  [510] = 31,
  [511] = 497,
  [512] = 26,
  [513] = 513,
  [514] = 26,
  [515] = 26,
  [516] = 516,
  [517] = 497,
  [518] = 29,
  [519] = 519,
  [520] = 100,
  [521] = 102,
  [522] = 522,
  [523] = 101,
  [524] = 524,
  [525] = 519,
  [526] = 98,
  [527] = 97,
  [528] = 519,
  [529] = 519,
  [530] = 530,
  [531] = 519,
  [532] = 532,
  [533] = 533,
  [534] = 519,
  [535] = 26,
  [536] = 519,
  [537] = 537,
  [538] = 519,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 18,
  [544] = 6,
  [545] = 545,
  [546] = 4,
  [547] = 547,
  [548] = 545,
  [549] = 549,
  [550] = 545,
  [551] = 545,
  [552] = 542,
  [553] = 553,
  [554] = 545,
  [555] = 555,
  [556] = 37,
  [557] = 557,
  [558] = 558,
  [559] = 545,
  [560] = 545,
  [561] = 545,
  [562] = 21,
  [563] = 563,
  [564] = 20,
  [565] = 565,
  [566] = 14,
  [567] = 567,
  [568] = 13,
  [569] = 569,
  [570] = 7,
  [571] = 12,
  [572] = 572,
  [573] = 573,
  [574] = 40,
  [575] = 17,
  [576] = 545,
  [577] = 577,
  [578] = 24,
  [579] = 579,
  [580] = 16,
  [581] = 581,
  [582] = 582,
  [583] = 35,
  [584] = 8,
  [585] = 19,
  [586] = 38,
  [587] = 11,
  [588] = 588,
  [589] = 297,
  [590] = 4,
  [591] = 591,
  [592] = 160,
  [593] = 8,
  [594] = 7,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 6,
  [599] = 101,
  [600] = 600,
  [601] = 102,
  [602] = 600,
  [603] = 603,
  [604] = 97,
  [605] = 605,
  [606] = 606,
  [607] = 98,
  [608] = 606,
  [609] = 605,
  [610] = 600,
  [611] = 603,
  [612] = 600,
  [613] = 613,
  [614] = 606,
  [615] = 605,
  [616] = 100,
  [617] = 617,
  [618] = 606,
  [619] = 605,
  [620] = 603,
  [621] = 600,
  [622] = 603,
  [623] = 606,
  [624] = 624,
  [625] = 605,
  [626] = 626,
  [627] = 603,
  [628] = 600,
  [629] = 97,
  [630] = 606,
  [631] = 100,
  [632] = 102,
  [633] = 101,
  [634] = 98,
  [635] = 635,
  [636] = 605,
  [637] = 603,
  [638] = 605,
  [639] = 600,
  [640] = 605,
  [641] = 600,
  [642] = 603,
  [643] = 605,
  [644] = 606,
  [645] = 600,
  [646] = 4,
  [647] = 17,
  [648] = 13,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 21,
  [653] = 37,
  [654] = 16,
  [655] = 655,
  [656] = 650,
  [657] = 8,
  [658] = 658,
  [659] = 24,
  [660] = 40,
  [661] = 12,
  [662] = 650,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 38,
  [667] = 650,
  [668] = 668,
  [669] = 18,
  [670] = 6,
  [671] = 35,
  [672] = 20,
  [673] = 7,
  [674] = 14,
  [675] = 19,
  [676] = 297,
  [677] = 677,
  [678] = 678,
  [679] = 677,
  [680] = 160,
  [681] = 11,
  [682] = 677,
  [683] = 677,
  [684] = 684,
  [685] = 11,
  [686] = 11,
  [687] = 677,
  [688] = 688,
  [689] = 677,
  [690] = 100,
  [691] = 691,
  [692] = 98,
  [693] = 97,
  [694] = 102,
  [695] = 695,
  [696] = 101,
  [697] = 697,
  [698] = 11,
  [699] = 98,
  [700] = 97,
  [701] = 100,
  [702] = 100,
  [703] = 102,
  [704] = 101,
  [705] = 97,
  [706] = 102,
  [707] = 98,
  [708] = 101,
  [709] = 709,
  [710] = 710,
  [711] = 18,
  [712] = 35,
  [713] = 710,
  [714] = 112,
  [715] = 125,
  [716] = 12,
  [717] = 24,
  [718] = 19,
  [719] = 719,
  [720] = 40,
  [721] = 17,
  [722] = 6,
  [723] = 24,
  [724] = 710,
  [725] = 7,
  [726] = 710,
  [727] = 103,
  [728] = 8,
  [729] = 13,
  [730] = 21,
  [731] = 21,
  [732] = 8,
  [733] = 7,
  [734] = 105,
  [735] = 710,
  [736] = 124,
  [737] = 37,
  [738] = 110,
  [739] = 6,
  [740] = 17,
  [741] = 40,
  [742] = 19,
  [743] = 37,
  [744] = 20,
  [745] = 14,
  [746] = 16,
  [747] = 20,
  [748] = 121,
  [749] = 14,
  [750] = 111,
  [751] = 751,
  [752] = 752,
  [753] = 710,
  [754] = 100,
  [755] = 17,
  [756] = 710,
  [757] = 38,
  [758] = 40,
  [759] = 12,
  [760] = 97,
  [761] = 98,
  [762] = 13,
  [763] = 19,
  [764] = 710,
  [765] = 13,
  [766] = 35,
  [767] = 18,
  [768] = 14,
  [769] = 38,
  [770] = 20,
  [771] = 101,
  [772] = 18,
  [773] = 4,
  [774] = 21,
  [775] = 6,
  [776] = 38,
  [777] = 12,
  [778] = 4,
  [779] = 7,
  [780] = 104,
  [781] = 37,
  [782] = 710,
  [783] = 16,
  [784] = 24,
  [785] = 35,
  [786] = 16,
  [787] = 8,
  [788] = 102,
  [789] = 4,
  [790] = 790,
  [791] = 790,
  [792] = 792,
  [793] = 793,
  [794] = 793,
  [795] = 134,
  [796] = 37,
  [797] = 4,
  [798] = 798,
  [799] = 16,
  [800] = 17,
  [801] = 790,
  [802] = 792,
  [803] = 798,
  [804] = 297,
  [805] = 793,
  [806] = 40,
  [807] = 793,
  [808] = 792,
  [809] = 790,
  [810] = 21,
  [811] = 811,
  [812] = 792,
  [813] = 793,
  [814] = 793,
  [815] = 792,
  [816] = 790,
  [817] = 13,
  [818] = 811,
  [819] = 819,
  [820] = 798,
  [821] = 790,
  [822] = 24,
  [823] = 19,
  [824] = 792,
  [825] = 38,
  [826] = 297,
  [827] = 18,
  [828] = 35,
  [829] = 811,
  [830] = 14,
  [831] = 811,
  [832] = 20,
  [833] = 12,
  [834] = 8,
  [835] = 793,
  [836] = 811,
  [837] = 811,
  [838] = 7,
  [839] = 6,
  [840] = 840,
  [841] = 811,
  [842] = 792,
  [843] = 792,
  [844] = 844,
  [845] = 845,
  [846] = 297,
  [847] = 798,
  [848] = 130,
  [849] = 793,
  [850] = 798,
  [851] = 790,
  [852] = 793,
  [853] = 792,
  [854] = 798,
  [855] = 127,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 861,
  [862] = 862,
  [863] = 863,
  [864] = 297,
  [865] = 865,
  [866] = 866,
  [867] = 867,
  [868] = 454,
  [869] = 869,
  [870] = 870,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 874,
  [875] = 873,
  [876] = 876,
  [877] = 870,
  [878] = 873,
  [879] = 879,
  [880] = 880,
  [881] = 880,
  [882] = 882,
  [883] = 871,
  [884] = 884,
  [885] = 876,
  [886] = 873,
  [887] = 870,
  [888] = 870,
  [889] = 880,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 893,
  [894] = 873,
  [895] = 871,
  [896] = 876,
  [897] = 870,
  [898] = 871,
  [899] = 880,
  [900] = 870,
  [901] = 876,
  [902] = 880,
  [903] = 871,
  [904] = 876,
  [905] = 871,
  [906] = 880,
  [907] = 873,
  [908] = 870,
  [909] = 876,
  [910] = 873,
  [911] = 876,
  [912] = 873,
  [913] = 873,
  [914] = 873,
  [915] = 871,
  [916] = 873,
  [917] = 880,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 919,
  [924] = 921,
  [925] = 920,
  [926] = 919,
  [927] = 920,
  [928] = 921,
  [929] = 929,
  [930] = 919,
  [931] = 931,
  [932] = 932,
  [933] = 933,
  [934] = 921,
  [935] = 920,
  [936] = 921,
  [937] = 919,
  [938] = 921,
  [939] = 939,
  [940] = 919,
  [941] = 941,
  [942] = 942,
  [943] = 943,
  [944] = 919,
  [945] = 919,
  [946] = 946,
  [947] = 919,
  [948] = 948,
  [949] = 921,
  [950] = 920,
  [951] = 920,
  [952] = 919,
  [953] = 919,
  [954] = 954,
  [955] = 955,
  [956] = 956,
  [957] = 957,
  [958] = 958,
  [959] = 959,
  [960] = 960,
  [961] = 961,
  [962] = 921,
  [963] = 946,
  [964] = 964,
  [965] = 920,
  [966] = 966,
  [967] = 967,
  [968] = 968,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(514);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '/') ADVANCE(665);
      if (lookahead == '0') ADVANCE(532);
      if (lookahead == ':') ADVANCE(658);
      if (lookahead == '<') ADVANCE(516);
      if (lookahead == '>') ADVANCE(518);
      if (lookahead == '?') ADVANCE(666);
      if (lookahead == '@') ADVANCE(661);
      if (lookahead == 'A') ADVANCE(304);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(546);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(284);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'P') ADVANCE(367);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead == '[') ADVANCE(576);
      if (lookahead == ']') ADVANCE(578);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '}') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '+') ADVANCE(534);
      if (lookahead == '-') ADVANCE(536);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '_') ADVANCE(1023);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(494);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(540);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(540);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '0') ADVANCE(532);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == 'E') ADVANCE(551);
      if (lookahead == 'F') ADVANCE(547);
      if (lookahead == 'I') ADVANCE(308);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(486);
      if (lookahead == 'T') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == '_') ADVANCE(1023);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 19:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 20:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 21:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == '_') ADVANCE(1023);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 23:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 24:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 26:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '_') ADVANCE(1023);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 27:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 28:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(660);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(528);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(600);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(640);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(614);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(638);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(612);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(608);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(559);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(561);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(642);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(596);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(558);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(618);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(636);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(602);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(562);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(632);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(604);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(598);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(644);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(616);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(610);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(654);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(620);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(648);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(606);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(622);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(646);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(634);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(652);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(656);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(650);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == '_') ADVANCE(1023);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(406);
      if (lookahead == 'I') ADVANCE(305);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(277);
      if (lookahead == 'P') ADVANCE(372);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(231);
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(278);
      if (lookahead == 'P') ADVANCE(394);
      END_STATE();
    case 72:
      if (lookahead == 'C') ADVANCE(278);
      if (lookahead == 'P') ADVANCE(394);
      if (lookahead == 'U') ADVANCE(327);
      if (lookahead == 'W') ADVANCE(247);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == 'P') ADVANCE(396);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(342);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(464);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(464);
      if (lookahead == 'O') ADVANCE(209);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(330);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(305);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(330);
      END_STATE();
    case 80:
      if (lookahead == 'K') ADVANCE(165);
      END_STATE();
    case 81:
      if (lookahead == 'L') ADVANCE(177);
      END_STATE();
    case 82:
      if (lookahead == 'L') ADVANCE(181);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(209);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(212);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(391);
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(393);
      END_STATE();
    case 88:
      if (lookahead == 'P') ADVANCE(395);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == '^') ADVANCE(557);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(263);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(629);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(574);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'v') ADVANCE(197);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(589);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 206:
      if (lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 207:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 208:
      if (lookahead == 'f') ADVANCE(179);
      END_STATE();
    case 209:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(526);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(429);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(430);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(432);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(488);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 225:
      if (lookahead == 'h') ADVANCE(579);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(581);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(580);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 262:
      if (lookahead == 'j') ADVANCE(348);
      END_STATE();
    case 263:
      if (lookahead == 'j') ADVANCE(184);
      END_STATE();
    case 264:
      if (lookahead == 'j') ADVANCE(349);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 291:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 364:
      if (lookahead == 'q') ADVANCE(459);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(192);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 465:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 466:
      if (lookahead == 'v') ADVANCE(233);
      END_STATE();
    case 467:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 468:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 469:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 470:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 471:
      if (lookahead == 'v') ADVANCE(255);
      END_STATE();
    case 472:
      if (lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 473:
      if (lookahead == 'v') ADVANCE(199);
      END_STATE();
    case 474:
      if (lookahead == 'v') ADVANCE(128);
      END_STATE();
    case 475:
      if (lookahead == 'x') ADVANCE(593);
      END_STATE();
    case 476:
      if (lookahead == 'x') ADVANCE(592);
      END_STATE();
    case 477:
      if (lookahead == 'x') ADVANCE(81);
      END_STATE();
    case 478:
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 479:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 480:
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 481:
      if (lookahead == 'x') ADVANCE(251);
      END_STATE();
    case 482:
      if (lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 483:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 484:
      if (lookahead == 'y') ADVANCE(588);
      END_STATE();
    case 485:
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 486:
      if (lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 487:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 488:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 489:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 490:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 491:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 492:
      if (lookahead == 'y') ADVANCE(357);
      END_STATE();
    case 493:
      if (lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 494:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 495:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(495)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 496:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(496)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 497:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 498:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 499:
      if (eof) ADVANCE(514);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '>') ADVANCE(517);
      if (lookahead == '?') ADVANCE(666);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(783);
      if (lookahead == 'D') ADVANCE(693);
      if (lookahead == 'E') ADVANCE(893);
      if (lookahead == 'I') ADVANCE(831);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'R') ADVANCE(705);
      if (lookahead == 'S') ADVANCE(697);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(499)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 500:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(783);
      if (lookahead == 'D') ADVANCE(693);
      if (lookahead == 'E') ADVANCE(893);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'R') ADVANCE(705);
      if (lookahead == 'S') ADVANCE(699);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(500)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 501:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(783);
      if (lookahead == 'D') ADVANCE(693);
      if (lookahead == 'E') ADVANCE(893);
      if (lookahead == 'I') ADVANCE(831);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'R') ADVANCE(705);
      if (lookahead == 'S') ADVANCE(697);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(501)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 502:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(783);
      if (lookahead == 'D') ADVANCE(693);
      if (lookahead == 'E') ADVANCE(893);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'R') ADVANCE(705);
      if (lookahead == 'S') ADVANCE(699);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(502)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 503:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(816);
      if (lookahead == 'D') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(893);
      if (lookahead == 'H') ADVANCE(708);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(503)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 504:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(816);
      if (lookahead == 'D') ADVANCE(694);
      if (lookahead == 'E') ADVANCE(894);
      if (lookahead == 'F') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(710);
      if (lookahead == 'T') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(504)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 505:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(856);
      if (lookahead == 'C') ADVANCE(816);
      if (lookahead == 'D') ADVANCE(696);
      if (lookahead == 'E') ADVANCE(894);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(700);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 506:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(816);
      if (lookahead == 'D') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(893);
      if (lookahead == 'H') ADVANCE(708);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 507:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(816);
      if (lookahead == 'D') ADVANCE(694);
      if (lookahead == 'E') ADVANCE(894);
      if (lookahead == 'F') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(710);
      if (lookahead == 'T') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 508:
      if (eof) ADVANCE(514);
      if (lookahead == '(') ADVANCE(570);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(856);
      if (lookahead == 'C') ADVANCE(816);
      if (lookahead == 'D') ADVANCE(696);
      if (lookahead == 'E') ADVANCE(894);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(700);
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 509:
      if (eof) ADVANCE(514);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == '0') ADVANCE(532);
      if (lookahead == ':') ADVANCE(658);
      if (lookahead == '<') ADVANCE(516);
      if (lookahead == '>') ADVANCE(518);
      if (lookahead == '@') ADVANCE(661);
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(543);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(329);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(124);
      if (lookahead == ']') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == '}') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 510:
      if (eof) ADVANCE(514);
      if (lookahead == ')') ADVANCE(571);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == ':') ADVANCE(658);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == 'A') ADVANCE(304);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(364);
      if (lookahead == 'F') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(284);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'P') ADVANCE(367);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead == '[') ADVANCE(576);
      if (lookahead == ']') ADVANCE(578);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(312);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead == '}') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(510)
      END_STATE();
    case 511:
      if (eof) ADVANCE(514);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '0') ADVANCE(532);
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(276);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(554);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'I') ADVANCE(332);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(485);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'f') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(511)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 512:
      if (eof) ADVANCE(514);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(816);
      if (lookahead == 'D') ADVANCE(695);
      if (lookahead == 'E') ADVANCE(893);
      if (lookahead == 'H') ADVANCE(708);
      if (lookahead == 'I') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(512)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 513:
      if (eof) ADVANCE(514);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'C') ADVANCE(816);
      if (lookahead == 'D') ADVANCE(696);
      if (lookahead == 'E') ADVANCE(894);
      if (lookahead == 'I') ADVANCE(825);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead == 'S') ADVANCE(700);
      if (lookahead == ']') ADVANCE(578);
      if (lookahead == '}') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(513)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(584);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(585);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__non_zero);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__non_zero);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__zero);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'q') ADVANCE(459);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'q') ADVANCE(465);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__language_tag);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_Import_COLON);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_Import_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_minLength);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_maxLength);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_langRange);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == 'L') ADVANCE(181);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == 'L') ADVANCE(177);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_DisjointUnionOf_COLON);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_DisjointUnionOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_HasKey_COLON);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_HasKey_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_Functional);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_InverseFunctional);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_Reflexive);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_Irreflexive);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_Symmetric);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_Asymmetric);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_Transitive);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_DataProperty_COLON);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_DataProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_AnnotationProperty_COLON);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_AnnotationProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_Individual_COLON);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_Individual_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_Types_COLON);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_Types_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_Facts_COLON);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_Facts_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_SameAs_COLON);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_SameAs_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DifferentFrom_COLON);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_DifferentFrom_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_EquivalentClasses_COLON);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_EquivalentClasses_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DisjointClasses_COLON);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_DisjointClasses_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_EquivalentProperties_COLON);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_EquivalentProperties_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_DisjointProperties_COLON);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_DisjointProperties_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_SameIndividual_COLON);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_SameIndividual_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_DifferentIndividuals_COLON);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_DifferentIndividuals_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__iunreserved);
      if (lookahead == '%' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(662);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(660);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'A') ADVANCE(937);
      if (lookahead == 'I') ADVANCE(837);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'C') ADVANCE(785);
      if (lookahead == 'O') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'C') ADVANCE(819);
      if (lookahead == 'P') ADVANCE(916);
      if (lookahead == 'U') ADVANCE(850);
      if (lookahead == 'W') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'C') ADVANCE(819);
      if (lookahead == 'P') ADVANCE(916);
      if (lookahead == 'W') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'C') ADVANCE(819);
      if (lookahead == 'P') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'C') ADVANCE(821);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'C') ADVANCE(824);
      if (lookahead == 'P') ADVANCE(918);
      if (lookahead == 'T') ADVANCE(864);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'C') ADVANCE(824);
      if (lookahead == 'P') ADVANCE(918);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'F') ADVANCE(903);
      if (lookahead == 'I') ADVANCE(855);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'I') ADVANCE(837);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'I') ADVANCE(855);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'K') ADVANCE(761);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'O') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'O') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'O') ADVANCE(775);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'O') ADVANCE(776);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'P') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'P') ADVANCE(913);
      if (lookahead == 't') ADVANCE(985);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'P') ADVANCE(915);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'P') ADVANCE(917);
      if (lookahead == 's') ADVANCE(1000);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'P') ADVANCE(917);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'P') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(770);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(779);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(771);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(953);
      if (lookahead == 'i') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'u') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'u') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'u') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(902);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(817);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(823);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(957);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(829);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(965);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(967);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(940);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'b') ADVANCE(811);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'b') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'b') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'b') ADVANCE(689);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'c') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'c') ADVANCE(971);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'c') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'c') ADVANCE(966);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'c') ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(975);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'v') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(976);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(977);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(897);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(997);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(782);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(931);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(847);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(912);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(907);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(859);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 's') ADVANCE(810);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 's') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(998);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(1004);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(1016);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(1017);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 's') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'g') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'g') ADVANCE(744);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'g') ADVANCE(748);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'h') ADVANCE(702);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'h') ADVANCE(1002);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(979);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(928);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(839);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(946);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(828);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(846);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(868);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(981);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(984);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'j') ADVANCE(872);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'j') ADVANCE(743);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'j') ADVANCE(873);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'j') ADVANCE(874);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(999);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(769);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(883);
      if (lookahead == 'n') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'm') ADVANCE(1021);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(954);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(781);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(780);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(737);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(982);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(996);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(945);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(947);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(1009);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(948);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(949);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(955);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(870);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(800);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(871);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(877);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(852);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(942);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(703);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(1003);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(835);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(860);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(851);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(963);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(794);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(797);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(908);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(969);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(890);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'o') ADVANCE(892);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(875);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(746);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(759);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(764);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(768);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'q') ADVANCE(974);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'q') ADVANCE(978);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(923);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(792);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(869);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(750);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(711);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(951);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(952);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(960);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(962);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(964);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(876);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(970);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(881);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1000);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(959);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1007);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1008);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1010);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1012);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1013);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1014);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1018);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1019);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(1020);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(927);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(758);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(784);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(752);
      if (lookahead == 'v') ADVANCE(754);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(752);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(992);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(789);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(1022);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(989);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(753);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(803);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(807);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 't') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(808);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'v') ADVANCE(787);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'v') ADVANCE(692);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'v') ADVANCE(799);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'v') ADVANCE(754);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'v') ADVANCE(804);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'v') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'y') ADVANCE(884);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'y') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'y') ADVANCE(1001);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'y') ADVANCE(1005);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'y') ADVANCE(1011);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'y') ADVANCE(1015);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'y') ADVANCE(891);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == 'y') ADVANCE(681);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(619);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(655);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(623);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(647);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(635);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(653);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(651);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(639);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(643);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(645);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 499},
  [3] = {.lex_state = 500},
  [4] = {.lex_state = 510},
  [5] = {.lex_state = 506},
  [6] = {.lex_state = 510},
  [7] = {.lex_state = 510},
  [8] = {.lex_state = 510},
  [9] = {.lex_state = 507},
  [10] = {.lex_state = 508},
  [11] = {.lex_state = 510},
  [12] = {.lex_state = 510},
  [13] = {.lex_state = 510},
  [14] = {.lex_state = 510},
  [15] = {.lex_state = 510},
  [16] = {.lex_state = 510},
  [17] = {.lex_state = 510},
  [18] = {.lex_state = 510},
  [19] = {.lex_state = 510},
  [20] = {.lex_state = 510},
  [21] = {.lex_state = 510},
  [22] = {.lex_state = 510},
  [23] = {.lex_state = 509},
  [24] = {.lex_state = 510},
  [25] = {.lex_state = 509},
  [26] = {.lex_state = 509},
  [27] = {.lex_state = 501},
  [28] = {.lex_state = 501},
  [29] = {.lex_state = 509},
  [30] = {.lex_state = 501},
  [31] = {.lex_state = 509},
  [32] = {.lex_state = 502},
  [33] = {.lex_state = 502},
  [34] = {.lex_state = 502},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 503},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 503},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 503},
  [42] = {.lex_state = 504},
  [43] = {.lex_state = 504},
  [44] = {.lex_state = 504},
  [45] = {.lex_state = 499},
  [46] = {.lex_state = 513},
  [47] = {.lex_state = 513},
  [48] = {.lex_state = 510},
  [49] = {.lex_state = 510},
  [50] = {.lex_state = 500},
  [51] = {.lex_state = 510},
  [52] = {.lex_state = 512},
  [53] = {.lex_state = 506},
  [54] = {.lex_state = 510},
  [55] = {.lex_state = 510},
  [56] = {.lex_state = 510},
  [57] = {.lex_state = 510},
  [58] = {.lex_state = 510},
  [59] = {.lex_state = 510},
  [60] = {.lex_state = 510},
  [61] = {.lex_state = 510},
  [62] = {.lex_state = 510},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 510},
  [65] = {.lex_state = 510},
  [66] = {.lex_state = 510},
  [67] = {.lex_state = 510},
  [68] = {.lex_state = 512},
  [69] = {.lex_state = 512},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 510},
  [72] = {.lex_state = 510},
  [73] = {.lex_state = 507},
  [74] = {.lex_state = 510},
  [75] = {.lex_state = 511},
  [76] = {.lex_state = 511},
  [77] = {.lex_state = 505},
  [78] = {.lex_state = 505},
  [79] = {.lex_state = 505},
  [80] = {.lex_state = 511},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 511},
  [83] = {.lex_state = 511},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 510},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 508},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 510},
  [104] = {.lex_state = 510},
  [105] = {.lex_state = 510},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 510},
  [111] = {.lex_state = 510},
  [112] = {.lex_state = 510},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 510},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 510},
  [125] = {.lex_state = 510},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 510},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 510},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 510},
  [134] = {.lex_state = 510},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 510},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 510},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 510},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 510},
  [152] = {.lex_state = 510},
  [153] = {.lex_state = 510},
  [154] = {.lex_state = 510},
  [155] = {.lex_state = 510},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 510},
  [158] = {.lex_state = 510},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 512},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 510},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 510},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 510},
  [169] = {.lex_state = 510},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 510},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 512},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 512},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 510},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 510},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 510},
  [201] = {.lex_state = 510},
  [202] = {.lex_state = 512},
  [203] = {.lex_state = 510},
  [204] = {.lex_state = 510},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 510},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 510},
  [210] = {.lex_state = 510},
  [211] = {.lex_state = 510},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 512},
  [215] = {.lex_state = 512},
  [216] = {.lex_state = 512},
  [217] = {.lex_state = 512},
  [218] = {.lex_state = 510},
  [219] = {.lex_state = 510},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 510},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 510},
  [226] = {.lex_state = 510},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 510},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 510},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 510},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 510},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 510},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 510},
  [260] = {.lex_state = 510},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 510},
  [266] = {.lex_state = 510},
  [267] = {.lex_state = 510},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 510},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 510},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 513},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 510},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 513},
  [300] = {.lex_state = 513},
  [301] = {.lex_state = 513},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 10},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 10},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 10},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 10},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 7},
  [343] = {.lex_state = 3},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 9},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 3},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 11},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 11},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 11},
  [381] = {.lex_state = 11},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 11},
  [386] = {.lex_state = 6},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 510},
  [390] = {.lex_state = 8},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 17},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 510},
  [397] = {.lex_state = 510},
  [398] = {.lex_state = 510},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 17},
  [401] = {.lex_state = 510},
  [402] = {.lex_state = 8},
  [403] = {.lex_state = 510},
  [404] = {.lex_state = 16},
  [405] = {.lex_state = 63},
  [406] = {.lex_state = 510},
  [407] = {.lex_state = 510},
  [408] = {.lex_state = 510},
  [409] = {.lex_state = 63},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 510},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 64},
  [415] = {.lex_state = 8},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 510},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 510},
  [424] = {.lex_state = 10},
  [425] = {.lex_state = 10},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 10},
  [432] = {.lex_state = 19},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 18},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 10},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 4},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 64},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 20},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 11},
  [460] = {.lex_state = 10},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 10},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 10},
  [466] = {.lex_state = 18},
  [467] = {.lex_state = 20},
  [468] = {.lex_state = 11},
  [469] = {.lex_state = 23},
  [470] = {.lex_state = 11},
  [471] = {.lex_state = 24},
  [472] = {.lex_state = 24},
  [473] = {.lex_state = 23},
  [474] = {.lex_state = 11},
  [475] = {.lex_state = 19},
  [476] = {.lex_state = 11},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 11},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 11},
  [485] = {.lex_state = 22},
  [486] = {.lex_state = 62},
  [487] = {.lex_state = 62},
  [488] = {.lex_state = 22},
  [489] = {.lex_state = 11},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 63},
  [493] = {.lex_state = 11},
  [494] = {.lex_state = 11},
  [495] = {.lex_state = 21},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 16},
  [498] = {.lex_state = 63},
  [499] = {.lex_state = 16},
  [500] = {.lex_state = 9},
  [501] = {.lex_state = 27},
  [502] = {.lex_state = 27},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 16},
  [505] = {.lex_state = 16},
  [506] = {.lex_state = 16},
  [507] = {.lex_state = 16},
  [508] = {.lex_state = 62},
  [509] = {.lex_state = 16},
  [510] = {.lex_state = 25},
  [511] = {.lex_state = 16},
  [512] = {.lex_state = 24},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 22},
  [515] = {.lex_state = 23},
  [516] = {.lex_state = 63},
  [517] = {.lex_state = 16},
  [518] = {.lex_state = 25},
  [519] = {.lex_state = 65},
  [520] = {.lex_state = 9},
  [521] = {.lex_state = 9},
  [522] = {.lex_state = 65},
  [523] = {.lex_state = 9},
  [524] = {.lex_state = 65},
  [525] = {.lex_state = 65},
  [526] = {.lex_state = 9},
  [527] = {.lex_state = 9},
  [528] = {.lex_state = 65},
  [529] = {.lex_state = 65},
  [530] = {.lex_state = 65},
  [531] = {.lex_state = 65},
  [532] = {.lex_state = 65},
  [533] = {.lex_state = 26},
  [534] = {.lex_state = 65},
  [535] = {.lex_state = 25},
  [536] = {.lex_state = 65},
  [537] = {.lex_state = 65},
  [538] = {.lex_state = 65},
  [539] = {.lex_state = 26},
  [540] = {.lex_state = 65},
  [541] = {.lex_state = 65},
  [542] = {.lex_state = 26},
  [543] = {.lex_state = 9},
  [544] = {.lex_state = 9},
  [545] = {.lex_state = 65},
  [546] = {.lex_state = 9},
  [547] = {.lex_state = 26},
  [548] = {.lex_state = 65},
  [549] = {.lex_state = 11},
  [550] = {.lex_state = 65},
  [551] = {.lex_state = 65},
  [552] = {.lex_state = 26},
  [553] = {.lex_state = 26},
  [554] = {.lex_state = 65},
  [555] = {.lex_state = 65},
  [556] = {.lex_state = 9},
  [557] = {.lex_state = 26},
  [558] = {.lex_state = 11},
  [559] = {.lex_state = 65},
  [560] = {.lex_state = 65},
  [561] = {.lex_state = 65},
  [562] = {.lex_state = 9},
  [563] = {.lex_state = 11},
  [564] = {.lex_state = 9},
  [565] = {.lex_state = 11},
  [566] = {.lex_state = 9},
  [567] = {.lex_state = 11},
  [568] = {.lex_state = 9},
  [569] = {.lex_state = 28},
  [570] = {.lex_state = 9},
  [571] = {.lex_state = 9},
  [572] = {.lex_state = 26},
  [573] = {.lex_state = 11},
  [574] = {.lex_state = 9},
  [575] = {.lex_state = 9},
  [576] = {.lex_state = 65},
  [577] = {.lex_state = 65},
  [578] = {.lex_state = 9},
  [579] = {.lex_state = 26},
  [580] = {.lex_state = 9},
  [581] = {.lex_state = 26},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 9},
  [584] = {.lex_state = 9},
  [585] = {.lex_state = 9},
  [586] = {.lex_state = 9},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 509},
  [589] = {.lex_state = 9},
  [590] = {.lex_state = 1},
  [591] = {.lex_state = 509},
  [592] = {.lex_state = 1},
  [593] = {.lex_state = 1},
  [594] = {.lex_state = 1},
  [595] = {.lex_state = 65},
  [596] = {.lex_state = 65},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 1},
  [599] = {.lex_state = 10},
  [600] = {.lex_state = 28},
  [601] = {.lex_state = 10},
  [602] = {.lex_state = 28},
  [603] = {.lex_state = 509},
  [604] = {.lex_state = 10},
  [605] = {.lex_state = 28},
  [606] = {.lex_state = 509},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 509},
  [609] = {.lex_state = 28},
  [610] = {.lex_state = 28},
  [611] = {.lex_state = 509},
  [612] = {.lex_state = 28},
  [613] = {.lex_state = 28},
  [614] = {.lex_state = 509},
  [615] = {.lex_state = 28},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 28},
  [618] = {.lex_state = 509},
  [619] = {.lex_state = 28},
  [620] = {.lex_state = 509},
  [621] = {.lex_state = 28},
  [622] = {.lex_state = 509},
  [623] = {.lex_state = 509},
  [624] = {.lex_state = 28},
  [625] = {.lex_state = 28},
  [626] = {.lex_state = 28},
  [627] = {.lex_state = 509},
  [628] = {.lex_state = 28},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 509},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 65},
  [636] = {.lex_state = 28},
  [637] = {.lex_state = 509},
  [638] = {.lex_state = 28},
  [639] = {.lex_state = 28},
  [640] = {.lex_state = 28},
  [641] = {.lex_state = 28},
  [642] = {.lex_state = 509},
  [643] = {.lex_state = 28},
  [644] = {.lex_state = 509},
  [645] = {.lex_state = 28},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 28},
  [650] = {.lex_state = 28},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 10},
  [655] = {.lex_state = 28},
  [656] = {.lex_state = 28},
  [657] = {.lex_state = 10},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 10},
  [660] = {.lex_state = 10},
  [661] = {.lex_state = 10},
  [662] = {.lex_state = 28},
  [663] = {.lex_state = 28},
  [664] = {.lex_state = 28},
  [665] = {.lex_state = 28},
  [666] = {.lex_state = 10},
  [667] = {.lex_state = 28},
  [668] = {.lex_state = 28},
  [669] = {.lex_state = 10},
  [670] = {.lex_state = 10},
  [671] = {.lex_state = 10},
  [672] = {.lex_state = 10},
  [673] = {.lex_state = 10},
  [674] = {.lex_state = 10},
  [675] = {.lex_state = 10},
  [676] = {.lex_state = 10},
  [677] = {.lex_state = 510},
  [678] = {.lex_state = 28},
  [679] = {.lex_state = 510},
  [680] = {.lex_state = 510},
  [681] = {.lex_state = 27},
  [682] = {.lex_state = 510},
  [683] = {.lex_state = 510},
  [684] = {.lex_state = 28},
  [685] = {.lex_state = 11},
  [686] = {.lex_state = 26},
  [687] = {.lex_state = 510},
  [688] = {.lex_state = 28},
  [689] = {.lex_state = 510},
  [690] = {.lex_state = 11},
  [691] = {.lex_state = 509},
  [692] = {.lex_state = 26},
  [693] = {.lex_state = 26},
  [694] = {.lex_state = 11},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 11},
  [697] = {.lex_state = 509},
  [698] = {.lex_state = 28},
  [699] = {.lex_state = 11},
  [700] = {.lex_state = 11},
  [701] = {.lex_state = 27},
  [702] = {.lex_state = 26},
  [703] = {.lex_state = 27},
  [704] = {.lex_state = 27},
  [705] = {.lex_state = 27},
  [706] = {.lex_state = 26},
  [707] = {.lex_state = 27},
  [708] = {.lex_state = 26},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 11},
  [712] = {.lex_state = 11},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 510},
  [715] = {.lex_state = 510},
  [716] = {.lex_state = 11},
  [717] = {.lex_state = 11},
  [718] = {.lex_state = 26},
  [719] = {.lex_state = 499},
  [720] = {.lex_state = 26},
  [721] = {.lex_state = 26},
  [722] = {.lex_state = 11},
  [723] = {.lex_state = 27},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 11},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 510},
  [728] = {.lex_state = 11},
  [729] = {.lex_state = 27},
  [730] = {.lex_state = 26},
  [731] = {.lex_state = 27},
  [732] = {.lex_state = 27},
  [733] = {.lex_state = 27},
  [734] = {.lex_state = 510},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 510},
  [737] = {.lex_state = 26},
  [738] = {.lex_state = 510},
  [739] = {.lex_state = 27},
  [740] = {.lex_state = 11},
  [741] = {.lex_state = 11},
  [742] = {.lex_state = 11},
  [743] = {.lex_state = 27},
  [744] = {.lex_state = 26},
  [745] = {.lex_state = 11},
  [746] = {.lex_state = 27},
  [747] = {.lex_state = 11},
  [748] = {.lex_state = 510},
  [749] = {.lex_state = 26},
  [750] = {.lex_state = 510},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 499},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 28},
  [755] = {.lex_state = 27},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 11},
  [758] = {.lex_state = 27},
  [759] = {.lex_state = 26},
  [760] = {.lex_state = 28},
  [761] = {.lex_state = 28},
  [762] = {.lex_state = 11},
  [763] = {.lex_state = 27},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 26},
  [766] = {.lex_state = 26},
  [767] = {.lex_state = 26},
  [768] = {.lex_state = 27},
  [769] = {.lex_state = 27},
  [770] = {.lex_state = 27},
  [771] = {.lex_state = 28},
  [772] = {.lex_state = 27},
  [773] = {.lex_state = 27},
  [774] = {.lex_state = 11},
  [775] = {.lex_state = 26},
  [776] = {.lex_state = 26},
  [777] = {.lex_state = 27},
  [778] = {.lex_state = 11},
  [779] = {.lex_state = 26},
  [780] = {.lex_state = 510},
  [781] = {.lex_state = 11},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 11},
  [784] = {.lex_state = 26},
  [785] = {.lex_state = 27},
  [786] = {.lex_state = 26},
  [787] = {.lex_state = 26},
  [788] = {.lex_state = 28},
  [789] = {.lex_state = 26},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 510},
  [796] = {.lex_state = 28},
  [797] = {.lex_state = 28},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 28},
  [800] = {.lex_state = 28},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 11},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 28},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 28},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 28},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 28},
  [823] = {.lex_state = 28},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 28},
  [826] = {.lex_state = 27},
  [827] = {.lex_state = 28},
  [828] = {.lex_state = 28},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 28},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 28},
  [833] = {.lex_state = 28},
  [834] = {.lex_state = 28},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 28},
  [839] = {.lex_state = 28},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 499},
  [845] = {.lex_state = 662},
  [846] = {.lex_state = 26},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 510},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 510},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 28},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 509},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 499},
  [870] = {.lex_state = 509},
  [871] = {.lex_state = 509},
  [872] = {.lex_state = 662},
  [873] = {.lex_state = 495},
  [874] = {.lex_state = 510},
  [875] = {.lex_state = 495},
  [876] = {.lex_state = 509},
  [877] = {.lex_state = 509},
  [878] = {.lex_state = 495},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 509},
  [881] = {.lex_state = 509},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 509},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 509},
  [886] = {.lex_state = 495},
  [887] = {.lex_state = 509},
  [888] = {.lex_state = 509},
  [889] = {.lex_state = 509},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 500},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 510},
  [894] = {.lex_state = 495},
  [895] = {.lex_state = 509},
  [896] = {.lex_state = 509},
  [897] = {.lex_state = 509},
  [898] = {.lex_state = 509},
  [899] = {.lex_state = 509},
  [900] = {.lex_state = 509},
  [901] = {.lex_state = 509},
  [902] = {.lex_state = 509},
  [903] = {.lex_state = 509},
  [904] = {.lex_state = 509},
  [905] = {.lex_state = 509},
  [906] = {.lex_state = 509},
  [907] = {.lex_state = 495},
  [908] = {.lex_state = 509},
  [909] = {.lex_state = 509},
  [910] = {.lex_state = 495},
  [911] = {.lex_state = 509},
  [912] = {.lex_state = 495},
  [913] = {.lex_state = 495},
  [914] = {.lex_state = 495},
  [915] = {.lex_state = 509},
  [916] = {.lex_state = 495},
  [917] = {.lex_state = 509},
  [918] = {.lex_state = 662},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 496},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 496},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 496},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 66},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 496},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 496},
  [951] = {.lex_state = 496},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 0},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 663},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 499},
  [961] = {.lex_state = 499},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 663},
  [965] = {.lex_state = 496},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 0},
  [968] = {.lex_state = 0},
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
    [anon_sym_Import_COLON] = ACTIONS(1),
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
    [sym_source_file] = STATE(968),
    [sym_ontology_document] = STATE(967),
    [sym_ontology] = STATE(966),
    [sym_prefix_declaration] = STATE(751),
    [aux_sym_ontology_document_repeat1] = STATE(751),
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
    ACTIONS(29), 52,
      ts_builtin_sym_end,
      anon_sym_Ontology_COLON,
      anon_sym_Import_COLON,
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
  [255] = 23,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [353] = 1,
    ACTIONS(33), 50,
      ts_builtin_sym_end,
      anon_sym_Import_COLON,
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
  [406] = 1,
    ACTIONS(35), 50,
      ts_builtin_sym_end,
      anon_sym_Import_COLON,
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
  [459] = 1,
    ACTIONS(37), 50,
      ts_builtin_sym_end,
      anon_sym_Import_COLON,
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
  [512] = 23,
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
    ACTIONS(39), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [609] = 23,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [701] = 3,
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
  [752] = 1,
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
  [798] = 1,
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
  [843] = 1,
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
  [888] = 5,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_that,
    ACTIONS(64), 1,
      anon_sym_value,
    ACTIONS(62), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(55), 33,
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
  [941] = 1,
    ACTIONS(67), 42,
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
  [986] = 1,
    ACTIONS(69), 42,
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
  [1031] = 1,
    ACTIONS(71), 42,
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
  [1076] = 1,
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
  [1121] = 1,
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
  [1166] = 1,
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
  [1211] = 3,
    ACTIONS(64), 1,
      anon_sym_value,
    ACTIONS(62), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(60), 34,
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
  [1259] = 8,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_e,
    ACTIONS(89), 1,
      anon_sym_E,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(79), 31,
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
  [1317] = 1,
    ACTIONS(91), 41,
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
  [1361] = 8,
    ACTIONS(87), 1,
      anon_sym_e,
    ACTIONS(89), 1,
      anon_sym_E,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(911), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
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
  [1419] = 4,
    ACTIONS(104), 1,
      anon_sym_E,
    ACTIONS(101), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 35,
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
  [1468] = 4,
    ACTIONS(110), 2,
      sym__non_zero,
      sym__zero,
    STATE(28), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(108), 30,
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
  [1517] = 4,
    ACTIONS(116), 2,
      sym__non_zero,
      sym__zero,
    STATE(28), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(114), 30,
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
  [1566] = 7,
    ACTIONS(87), 1,
      anon_sym_e,
    ACTIONS(89), 1,
      anon_sym_E,
    STATE(871), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(121), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(119), 31,
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
  [1621] = 4,
    ACTIONS(127), 2,
      sym__non_zero,
      sym__zero,
    STATE(27), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(125), 30,
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
  [1670] = 7,
    ACTIONS(87), 1,
      anon_sym_e,
    ACTIONS(89), 1,
      anon_sym_E,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(131), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
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
  [1725] = 4,
    ACTIONS(133), 2,
      sym__non_zero,
      sym__zero,
    STATE(34), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(125), 28,
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
  [1772] = 4,
    ACTIONS(135), 2,
      sym__non_zero,
      sym__zero,
    STATE(33), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(114), 28,
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
  [1819] = 4,
    ACTIONS(138), 2,
      sym__non_zero,
      sym__zero,
    STATE(33), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(108), 28,
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
  [1866] = 1,
    ACTIONS(140), 37,
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
  [1906] = 4,
    ACTIONS(142), 2,
      sym__non_zero,
      sym__zero,
    STATE(41), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(125), 27,
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
  [1952] = 1,
    ACTIONS(144), 37,
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
  [1992] = 1,
    ACTIONS(146), 37,
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
  [2032] = 4,
    ACTIONS(148), 2,
      sym__non_zero,
      sym__zero,
    STATE(39), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(114), 27,
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
  [2078] = 1,
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
  [2118] = 4,
    ACTIONS(153), 2,
      sym__non_zero,
      sym__zero,
    STATE(39), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(108), 27,
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
  [2164] = 4,
    ACTIONS(155), 2,
      sym__non_zero,
      sym__zero,
    STATE(43), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(125), 26,
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
  [2209] = 4,
    ACTIONS(157), 2,
      sym__non_zero,
      sym__zero,
    STATE(44), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(108), 26,
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
  [2254] = 4,
    ACTIONS(159), 2,
      sym__non_zero,
      sym__zero,
    STATE(44), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(114), 26,
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
  [2299] = 2,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(164), 30,
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
  [2340] = 21,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(170), 1,
      anon_sym_Import_COLON,
    ACTIONS(172), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(174), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(176), 1,
      anon_sym_Class_COLON,
    ACTIONS(178), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(180), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(182), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(184), 1,
      anon_sym_Individual_COLON,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    ACTIONS(186), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(188), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(190), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(47), 2,
      sym_iri,
      sym__ontology_iri,
    STATE(94), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(142), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(229), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [2419] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(170), 1,
      anon_sym_Import_COLON,
    ACTIONS(172), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(174), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(176), 1,
      anon_sym_Class_COLON,
    ACTIONS(178), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(180), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(182), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(184), 1,
      anon_sym_Individual_COLON,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(188), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(190), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(93), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(96), 2,
      sym_iri,
      sym__version_iri,
    STATE(138), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(242), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [2498] = 2,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 33,
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
  [2537] = 1,
    ACTIONS(202), 34,
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
  [2574] = 2,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(164), 28,
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
  [2613] = 1,
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
  [2649] = 11,
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
    STATE(160), 1,
      sym_iri,
    STATE(185), 1,
      sym__data_property_iri,
    STATE(187), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(69), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(216), 3,
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
  [2705] = 2,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(164), 27,
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
  [2743] = 1,
    ACTIONS(218), 33,
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
  [2779] = 1,
    ACTIONS(220), 33,
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
  [2815] = 1,
    ACTIONS(222), 33,
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
  [2851] = 1,
    ACTIONS(224), 33,
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
  [2887] = 1,
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
  [2923] = 1,
    ACTIONS(226), 33,
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
  [2959] = 1,
    ACTIONS(228), 33,
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
  [2995] = 1,
    ACTIONS(230), 33,
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
  [3031] = 1,
    ACTIONS(232), 33,
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
  [3067] = 23,
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
    ACTIONS(234), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    ACTIONS(7), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(65), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [3147] = 1,
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
  [3183] = 1,
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
  [3219] = 1,
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
  [3255] = 1,
    ACTIONS(242), 33,
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
  [3291] = 11,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_inverse,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(160), 1,
      sym_iri,
    STATE(185), 1,
      sym__data_property_iri,
    STATE(187), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(69), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(216), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(246), 18,
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
  [3347] = 11,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      anon_sym_LT,
    ACTIONS(255), 1,
      anon_sym_inverse,
    ACTIONS(258), 1,
      sym__pn_local,
    ACTIONS(261), 1,
      sym__pname_ln,
    STATE(160), 1,
      sym_iri,
    STATE(185), 1,
      sym__data_property_iri,
    STATE(187), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(69), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(216), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(253), 18,
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
  [3403] = 26,
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
    ACTIONS(234), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(727), 1,
      sym__class_iri,
    STATE(734), 1,
      sym_primary,
    STATE(855), 1,
      sym_conjunction,
    STATE(932), 1,
      sym_description,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(957), 1,
      sym_data_range,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [3489] = 1,
    ACTIONS(198), 33,
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
  [3525] = 1,
    ACTIONS(264), 33,
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
  [3561] = 2,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(164), 26,
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
  [3598] = 1,
    ACTIONS(266), 32,
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
  [3633] = 9,
    ACTIONS(87), 1,
      anon_sym_e,
    ACTIONS(89), 1,
      anon_sym_E,
    ACTIONS(97), 1,
      anon_sym_f,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_F,
    STATE(911), 1,
      sym__exponent,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(82), 2,
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
  [3683] = 9,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_e,
    ACTIONS(89), 1,
      anon_sym_E,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_F,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(82), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(79), 21,
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
  [3733] = 4,
    ACTIONS(278), 2,
      sym__non_zero,
      sym__zero,
    STATE(78), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(108), 21,
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
  [3773] = 4,
    ACTIONS(280), 2,
      sym__non_zero,
      sym__zero,
    STATE(78), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(114), 21,
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
  [3813] = 4,
    ACTIONS(283), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(125), 21,
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
  [3853] = 8,
    ACTIONS(87), 1,
      anon_sym_e,
    ACTIONS(89), 1,
      anon_sym_E,
    ACTIONS(131), 1,
      anon_sym_f,
    ACTIONS(285), 1,
      anon_sym_F,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(82), 2,
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
  [3900] = 1,
    ACTIONS(287), 30,
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
  [3933] = 4,
    ACTIONS(104), 2,
      anon_sym_F,
      anon_sym_E,
    ACTIONS(289), 2,
      sym__non_zero,
      sym__zero,
    STATE(82), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 24,
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
  [3972] = 8,
    ACTIONS(87), 1,
      anon_sym_e,
    ACTIONS(89), 1,
      anon_sym_E,
    ACTIONS(121), 1,
      anon_sym_f,
    ACTIONS(292), 1,
      anon_sym_F,
    STATE(871), 1,
      sym__exponent,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(82), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(119), 21,
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
  [4019] = 1,
    ACTIONS(294), 30,
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
  [4052] = 21,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [4124] = 21,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [4196] = 21,
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
    ACTIONS(234), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [4268] = 21,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [4340] = 21,
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
    ACTIONS(39), 1,
      anon_sym_not,
    STATE(12), 1,
      sym__datatype_iri,
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [4412] = 21,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(57), 1,
      sym__class_iri,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(58), 2,
      sym_data_primary,
      sym_primary,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [4484] = 18,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      sym__quoted_string,
    STATE(857), 1,
      sym_individual,
    STATE(865), 1,
      sym_literal,
    STATE(921), 1,
      sym__lexial_value,
    STATE(933), 1,
      sym_individual_list,
    STATE(955), 1,
      sym_literal_list,
    ACTIONS(298), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [4550] = 1,
    ACTIONS(308), 28,
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
  [4581] = 16,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      anon_sym_Import_COLON,
    ACTIONS(314), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(140), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(254), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(387), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [4642] = 16,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      anon_sym_Import_COLON,
    ACTIONS(314), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(138), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(242), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(387), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [4703] = 16,
    ACTIONS(312), 1,
      anon_sym_Import_COLON,
    ACTIONS(314), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(135), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(234), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(387), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [4764] = 16,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      anon_sym_Import_COLON,
    ACTIONS(314), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(95), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(140), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(254), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [4825] = 3,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 25,
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
  [4859] = 3,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 25,
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
  [4893] = 2,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(164), 21,
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
  [4925] = 3,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(340), 25,
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
  [4959] = 3,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(342), 25,
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
  [4993] = 3,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(144), 25,
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
  [5027] = 2,
    ACTIONS(347), 1,
      anon_sym_that,
    ACTIONS(224), 25,
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
  [5058] = 3,
    ACTIONS(349), 1,
      anon_sym_and,
    STATE(104), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(226), 24,
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
  [5091] = 3,
    ACTIONS(354), 1,
      anon_sym_and,
    STATE(121), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(352), 24,
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
  [5124] = 19,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(51), 1,
      sym_data_atomic,
    STATE(57), 1,
      sym__class_iri,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [5189] = 19,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(51), 1,
      sym_data_atomic,
    STATE(57), 1,
      sym__class_iri,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [5254] = 19,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(51), 1,
      sym_data_atomic,
    STATE(57), 1,
      sym__class_iri,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [5319] = 19,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(51), 1,
      sym_data_atomic,
    STATE(57), 1,
      sym__class_iri,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [5384] = 3,
    ACTIONS(358), 1,
      anon_sym_and,
    STATE(125), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(356), 24,
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
  [5417] = 3,
    ACTIONS(360), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(242), 24,
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
  [5450] = 3,
    ACTIONS(358), 1,
      anon_sym_and,
    STATE(124), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 24,
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
  [5483] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(367), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_annotation_target,
    STATE(936), 1,
      sym__lexial_value,
    ACTIONS(365), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(35), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5540] = 19,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(51), 1,
      sym_data_atomic,
    STATE(57), 1,
      sym__class_iri,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [5605] = 19,
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
    STATE(15), 1,
      sym_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(51), 1,
      sym_data_atomic,
    STATE(57), 1,
      sym__class_iri,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
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
  [5670] = 15,
    ACTIONS(371), 1,
      anon_sym_LT,
    ACTIONS(373), 1,
      anon_sym__COLON,
    ACTIONS(377), 1,
      anon_sym_PLUS,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      sym__quoted_string,
    ACTIONS(385), 1,
      sym__pn_local,
    ACTIONS(387), 1,
      sym__pname_ln,
    STATE(776), 1,
      sym_annotation_target,
    STATE(924), 1,
      sym__lexial_value,
    ACTIONS(375), 2,
      sym__non_zero,
      sym__zero,
    STATE(450), 2,
      aux_sym__digits,
      sym__digit,
    STATE(766), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(787), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(767), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5727] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      sym__quoted_string,
    STATE(38), 1,
      sym_annotation_target,
    STATE(936), 1,
      sym__lexial_value,
    ACTIONS(298), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(35), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5784] = 15,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(391), 1,
      anon_sym__COLON,
    ACTIONS(395), 1,
      anon_sym_PLUS,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      anon_sym_DOT,
    ACTIONS(401), 1,
      sym__quoted_string,
    ACTIONS(403), 1,
      sym__pn_local,
    ACTIONS(405), 1,
      sym__pname_ln,
    STATE(757), 1,
      sym_annotation_target,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(393), 2,
      sym__non_zero,
      sym__zero,
    STATE(432), 2,
      aux_sym__digits,
      sym__digit,
    STATE(712), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(728), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(711), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5841] = 15,
    ACTIONS(407), 1,
      anon_sym_LT,
    ACTIONS(409), 1,
      anon_sym__COLON,
    ACTIONS(413), 1,
      anon_sym_PLUS,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(419), 1,
      sym__quoted_string,
    ACTIONS(421), 1,
      sym__pn_local,
    ACTIONS(423), 1,
      sym__pname_ln,
    STATE(769), 1,
      sym_annotation_target,
    STATE(938), 1,
      sym__lexial_value,
    ACTIONS(411), 2,
      sym__non_zero,
      sym__zero,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
    STATE(732), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(785), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(772), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5898] = 15,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(427), 1,
      anon_sym__COLON,
    ACTIONS(431), 1,
      anon_sym_PLUS,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(437), 1,
      sym__quoted_string,
    ACTIONS(439), 1,
      sym__pn_local,
    ACTIONS(441), 1,
      sym__pname_ln,
    STATE(825), 1,
      sym_annotation_target,
    STATE(962), 1,
      sym__lexial_value,
    ACTIONS(429), 2,
      sym__non_zero,
      sym__zero,
    STATE(481), 2,
      aux_sym__digits,
      sym__digit,
    STATE(828), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(834), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(827), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [5955] = 3,
    ACTIONS(354), 1,
      anon_sym_and,
    STATE(104), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(443), 24,
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
  [5988] = 15,
    ACTIONS(445), 1,
      anon_sym_LT,
    ACTIONS(447), 1,
      anon_sym__COLON,
    ACTIONS(451), 1,
      anon_sym_PLUS,
    ACTIONS(453), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      sym__quoted_string,
    ACTIONS(459), 1,
      sym__pn_local,
    ACTIONS(461), 1,
      sym__pname_ln,
    STATE(666), 1,
      sym_annotation_target,
    STATE(949), 1,
      sym__lexial_value,
    ACTIONS(449), 2,
      sym__non_zero,
      sym__zero,
    STATE(386), 2,
      aux_sym__digits,
      sym__digit,
    STATE(657), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(671), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(669), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [6045] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    ACTIONS(304), 1,
      anon_sym_DOT,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(465), 1,
      anon_sym_PLUS,
    ACTIONS(467), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_annotation_target,
    STATE(936), 1,
      sym__lexial_value,
    ACTIONS(463), 2,
      sym__non_zero,
      sym__zero,
    STATE(371), 2,
      aux_sym__digits,
      sym__digit,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(35), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [6102] = 3,
    ACTIONS(358), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(469), 24,
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
  [6135] = 3,
    ACTIONS(358), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 24,
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
  [6168] = 15,
    ACTIONS(471), 1,
      anon_sym_LT,
    ACTIONS(473), 1,
      anon_sym__COLON,
    ACTIONS(477), 1,
      anon_sym_PLUS,
    ACTIONS(479), 1,
      anon_sym_DASH,
    ACTIONS(481), 1,
      anon_sym_DOT,
    ACTIONS(483), 1,
      sym__quoted_string,
    ACTIONS(485), 1,
      sym__pn_local,
    ACTIONS(487), 1,
      sym__pname_ln,
    STATE(586), 1,
      sym_annotation_target,
    STATE(928), 1,
      sym__lexial_value,
    ACTIONS(475), 2,
      sym__non_zero,
      sym__zero,
    STATE(296), 2,
      aux_sym__digits,
      sym__digit,
    STATE(583), 3,
      sym_iri,
      sym_node_id,
      sym_literal,
    STATE(584), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(543), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [6225] = 3,
    ACTIONS(491), 1,
      anon_sym_or,
    STATE(130), 1,
      aux_sym_description_repeat1,
    ACTIONS(489), 23,
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
  [6257] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(495), 1,
      anon_sym_not,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(194), 1,
      sym_annotations,
    STATE(349), 1,
      sym_description_2list,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(727), 1,
      sym__class_iri,
    STATE(734), 1,
      sym_primary,
    STATE(855), 1,
      sym_conjunction,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(963), 1,
      sym_description,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6325] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(221), 1,
      sym__class_iri,
    STATE(246), 1,
      sym_annotations,
    STATE(253), 1,
      sym_conjunction,
    STATE(284), 1,
      sym_description,
    STATE(349), 1,
      sym_description_annotated_list,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6393] = 3,
    ACTIONS(491), 1,
      anon_sym_or,
    STATE(134), 1,
      aux_sym_description_repeat1,
    ACTIONS(503), 23,
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
  [6425] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(165), 1,
      sym_primary,
    STATE(168), 1,
      sym__class_iri,
    STATE(201), 1,
      sym_conjunction,
    STATE(224), 1,
      sym_description,
    STATE(241), 1,
      sym_annotations,
    STATE(330), 1,
      sym_description_annotated_list,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6493] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(103), 1,
      sym__class_iri,
    STATE(105), 1,
      sym_primary,
    STATE(127), 1,
      sym_conjunction,
    STATE(177), 1,
      sym_description,
    STATE(239), 1,
      sym_description_annotated_list,
    STATE(256), 1,
      sym_annotations,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6561] = 3,
    ACTIONS(511), 1,
      anon_sym_and,
    STATE(143), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(509), 23,
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
  [6593] = 3,
    ACTIONS(513), 1,
      anon_sym_or,
    STATE(134), 1,
      aux_sym_description_repeat1,
    ACTIONS(266), 23,
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
  [6625] = 14,
    ACTIONS(314), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(228), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(421), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [6679] = 1,
    ACTIONS(518), 25,
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
  [6707] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(495), 1,
      anon_sym_not,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(212), 1,
      sym_annotations,
    STATE(513), 1,
      sym_description_2list,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(727), 1,
      sym__class_iri,
    STATE(734), 1,
      sym_primary,
    STATE(855), 1,
      sym_conjunction,
    STATE(946), 1,
      sym_description,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6775] = 14,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(254), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(421), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [6829] = 21,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(520), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(248), 1,
      sym_primary,
    STATE(250), 1,
      sym__class_iri,
    STATE(268), 1,
      sym_annotations,
    STATE(283), 1,
      sym_conjunction,
    STATE(326), 1,
      sym_description,
    STATE(383), 1,
      sym_description_annotated_list,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6897] = 14,
    ACTIONS(314), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(234), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(421), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [6951] = 3,
    ACTIONS(511), 1,
      anon_sym_and,
    STATE(133), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(522), 23,
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
  [6983] = 14,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(242), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(421), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [7037] = 3,
    ACTIONS(526), 1,
      anon_sym_and,
    STATE(143), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(524), 23,
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
  [7069] = 1,
    ACTIONS(529), 25,
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
  [7097] = 3,
    ACTIONS(533), 1,
      anon_sym_o,
    STATE(148), 1,
      aux_sym_object_property_frame_repeat1,
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
  [7128] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
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
  [7159] = 3,
    ACTIONS(539), 1,
      anon_sym_and,
    STATE(152), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(356), 22,
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
  [7190] = 3,
    ACTIONS(543), 1,
      anon_sym_o,
    STATE(148), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(541), 22,
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
  [7221] = 3,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(546), 22,
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
  [7252] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(84), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(103), 1,
      sym__class_iri,
    STATE(105), 1,
      sym_primary,
    STATE(127), 1,
      sym_conjunction,
    STATE(263), 1,
      sym_annotations,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7317] = 3,
    ACTIONS(551), 1,
      anon_sym_and,
    STATE(151), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(226), 22,
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
  [7348] = 3,
    ACTIONS(539), 1,
      anon_sym_and,
    STATE(154), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 22,
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
  [7379] = 3,
    ACTIONS(539), 1,
      anon_sym_and,
    STATE(154), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(469), 22,
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
  [7410] = 3,
    ACTIONS(554), 1,
      anon_sym_and,
    STATE(154), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(242), 22,
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
  [7441] = 1,
    ACTIONS(524), 24,
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
  [7468] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(84), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(165), 1,
      sym_primary,
    STATE(168), 1,
      sym__class_iri,
    STATE(201), 1,
      sym_conjunction,
    STATE(231), 1,
      sym_annotations,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7533] = 3,
    ACTIONS(559), 1,
      anon_sym_or,
    STATE(157), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(557), 22,
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
  [7564] = 3,
    ACTIONS(564), 1,
      anon_sym_or,
    STATE(157), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(562), 22,
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
  [7595] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(566), 22,
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
  [7626] = 2,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(570), 20,
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
  [7655] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(573), 22,
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
  [7686] = 3,
    ACTIONS(533), 1,
      anon_sym_o,
    STATE(148), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(575), 22,
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
  [7717] = 3,
    ACTIONS(577), 1,
      anon_sym_and,
    STATE(151), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(443), 22,
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
  [7748] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(84), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(221), 1,
      sym__class_iri,
    STATE(245), 1,
      sym_annotations,
    STATE(253), 1,
      sym_conjunction,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7813] = 3,
    ACTIONS(577), 1,
      anon_sym_and,
    STATE(163), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(352), 22,
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
  [7844] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(493), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(520), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(84), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(248), 1,
      sym_primary,
    STATE(250), 1,
      sym__class_iri,
    STATE(262), 1,
      sym_annotations,
    STATE(283), 1,
      sym_conjunction,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7909] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(566), 22,
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
  [7940] = 2,
    ACTIONS(579), 1,
      anon_sym_that,
    ACTIONS(224), 23,
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
  [7969] = 3,
    ACTIONS(564), 1,
      anon_sym_or,
    STATE(158), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(581), 22,
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
  [8000] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(170), 1,
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
  [8031] = 3,
    ACTIONS(533), 1,
      anon_sym_o,
    STATE(145), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(575), 22,
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
  [8062] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
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
  [8093] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(592), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(264), 1,
      sym_data_range,
    STATE(287), 1,
      sym_annotations,
    STATE(330), 1,
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
  [8154] = 3,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(294), 22,
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
  [8185] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(603), 22,
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
  [8216] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(174), 1,
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
  [8247] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_description_annotated_list_repeat1,
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
  [8278] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
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
  [8309] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(609), 22,
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
  [8340] = 3,
    ACTIONS(533), 1,
      anon_sym_o,
    STATE(162), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(611), 22,
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
  [8371] = 3,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(613), 22,
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
  [8402] = 3,
    ACTIONS(539), 1,
      anon_sym_and,
    STATE(153), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 22,
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
  [8433] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(603), 22,
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
  [8464] = 1,
    ACTIONS(615), 23,
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
  [8490] = 2,
    ACTIONS(308), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(617), 20,
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
  [8518] = 7,
    ACTIONS(619), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(628), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(631), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(186), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(625), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(622), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(611), 13,
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
  [8556] = 2,
    ACTIONS(529), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(634), 20,
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
  [8584] = 1,
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
  [8610] = 1,
    ACTIONS(583), 23,
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
  [8636] = 3,
    ACTIONS(636), 1,
      anon_sym_and,
    STATE(200), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(443), 21,
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
  [8666] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(592), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(282), 1,
      sym_annotations,
    STATE(435), 1,
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
  [8724] = 1,
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
  [8750] = 1,
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
  [8776] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(495), 1,
      anon_sym_not,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(368), 1,
      sym_description_2list,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(727), 1,
      sym__class_iri,
    STATE(734), 1,
      sym_primary,
    STATE(855), 1,
      sym_conjunction,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(963), 1,
      sym_description,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8838] = 3,
    ACTIONS(638), 1,
      anon_sym_or,
    STATE(195), 1,
      aux_sym_description_repeat1,
    ACTIONS(266), 21,
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
  [8868] = 1,
    ACTIONS(641), 23,
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
  [8894] = 1,
    ACTIONS(643), 23,
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
  [8920] = 7,
    ACTIONS(647), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(653), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(655), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(186), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(651), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(649), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(645), 13,
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
  [8958] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(592), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(278), 1,
      sym_annotations,
    STATE(441), 1,
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
  [9016] = 3,
    ACTIONS(657), 1,
      anon_sym_and,
    STATE(200), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(226), 21,
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
  [9046] = 3,
    ACTIONS(660), 1,
      anon_sym_or,
    STATE(219), 1,
      aux_sym_description_repeat1,
    ACTIONS(489), 21,
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
  [9076] = 2,
    ACTIONS(518), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(662), 20,
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
  [9104] = 3,
    ACTIONS(664), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 21,
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
  [9134] = 3,
    ACTIONS(664), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(469), 21,
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
  [9164] = 1,
    ACTIONS(33), 23,
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
  [9190] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(592), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(292), 1,
      sym_annotations,
    STATE(293), 1,
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
  [9248] = 3,
    ACTIONS(664), 1,
      anon_sym_and,
    STATE(204), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 21,
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
  [9278] = 1,
    ACTIONS(546), 23,
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
  [9304] = 3,
    ACTIONS(664), 1,
      anon_sym_and,
    STATE(203), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(356), 21,
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
  [9334] = 1,
    ACTIONS(557), 23,
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
  [9360] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(242), 21,
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
  [9390] = 19,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(495), 1,
      anon_sym_not,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(496), 1,
      sym_description_2list,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(727), 1,
      sym__class_iri,
    STATE(734), 1,
      sym_primary,
    STATE(855), 1,
      sym_conjunction,
    STATE(946), 1,
      sym_description,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9452] = 7,
    ACTIONS(647), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(653), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(655), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(198), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(651), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(649), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(669), 13,
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
  [9490] = 2,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(671), 20,
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
  [9518] = 2,
    ACTIONS(35), 3,
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
  [9546] = 2,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(675), 20,
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
  [9574] = 2,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(677), 20,
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
  [9602] = 3,
    ACTIONS(636), 1,
      anon_sym_and,
    STATE(190), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(352), 21,
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
  [9632] = 3,
    ACTIONS(660), 1,
      anon_sym_or,
    STATE(195), 1,
      aux_sym_description_repeat1,
    ACTIONS(503), 21,
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
  [9662] = 1,
    ACTIONS(541), 23,
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
  [9688] = 2,
    ACTIONS(679), 1,
      anon_sym_that,
    ACTIONS(224), 22,
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
  [9716] = 12,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
    ACTIONS(683), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(686), 1,
      anon_sym_Class_COLON,
    ACTIONS(689), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(692), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(695), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(698), 1,
      anon_sym_Individual_COLON,
    ACTIONS(701), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(704), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(707), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [9763] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(221), 1,
      sym__class_iri,
    STATE(253), 1,
      sym_conjunction,
    STATE(309), 1,
      sym_description,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9822] = 3,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(607), 20,
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
  [9851] = 3,
    ACTIONS(712), 1,
      anon_sym_and,
    STATE(260), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 20,
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
  [9880] = 3,
    ACTIONS(712), 1,
      anon_sym_and,
    STATE(266), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(356), 20,
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
  [9909] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(714), 20,
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
  [9938] = 12,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [9985] = 12,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [10032] = 3,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(294), 20,
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
  [10061] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(81), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(165), 1,
      sym_primary,
    STATE(168), 1,
      sym__class_iri,
    STATE(201), 1,
      sym_conjunction,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10120] = 3,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(724), 20,
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
  [10149] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(495), 1,
      anon_sym_not,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(727), 1,
      sym__class_iri,
    STATE(734), 1,
      sym_primary,
    STATE(855), 1,
      sym_conjunction,
    STATE(932), 1,
      sym_description,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10208] = 12,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [10255] = 3,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(230), 1,
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
  [10284] = 3,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(728), 20,
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
  [10313] = 3,
    ACTIONS(733), 1,
      anon_sym_or,
    STATE(243), 1,
      aux_sym_description_repeat1,
    ACTIONS(503), 20,
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
  [10342] = 3,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(566), 20,
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
  [10371] = 1,
    ACTIONS(611), 22,
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
  [10396] = 3,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(735), 20,
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
  [10425] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(165), 1,
      sym_primary,
    STATE(168), 1,
      sym__class_iri,
    STATE(201), 1,
      sym_conjunction,
    STATE(258), 1,
      sym_description,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10484] = 12,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [10531] = 3,
    ACTIONS(739), 1,
      anon_sym_or,
    STATE(243), 1,
      aux_sym_description_repeat1,
    ACTIONS(266), 20,
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
  [10560] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(398), 1,
      sym_primary,
    STATE(407), 1,
      sym__class_iri,
    STATE(411), 1,
      sym_conjunction,
    STATE(455), 1,
      sym_description,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10619] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(81), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(221), 1,
      sym__class_iri,
    STATE(253), 1,
      sym_conjunction,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10678] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(221), 1,
      sym__class_iri,
    STATE(253), 1,
      sym_conjunction,
    STATE(275), 1,
      sym_description,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10737] = 3,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(744), 20,
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
  [10766] = 3,
    ACTIONS(746), 1,
      anon_sym_and,
    STATE(265), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(352), 20,
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
  [10795] = 3,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(748), 20,
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
  [10824] = 2,
    ACTIONS(750), 1,
      anon_sym_that,
    ACTIONS(224), 21,
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
  [10851] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(309), 1,
      sym_description,
    STATE(398), 1,
      sym_primary,
    STATE(407), 1,
      sym__class_iri,
    STATE(411), 1,
      sym_conjunction,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10910] = 3,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(748), 20,
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
  [10939] = 3,
    ACTIONS(733), 1,
      anon_sym_or,
    STATE(237), 1,
      aux_sym_description_repeat1,
    ACTIONS(489), 20,
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
  [10968] = 12,
    ACTIONS(316), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(318), 1,
      anon_sym_Class_COLON,
    ACTIONS(320), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(322), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(324), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(326), 1,
      anon_sym_Individual_COLON,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(330), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(332), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 2,
      sym_frame,
      aux_sym_ontology_repeat3,
    STATE(503), 7,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
  [11015] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(221), 1,
      sym__class_iri,
    STATE(253), 1,
      sym_conjunction,
    STATE(303), 1,
      sym_description,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11074] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(103), 1,
      sym__class_iri,
    STATE(105), 1,
      sym_primary,
    STATE(127), 1,
      sym_conjunction,
    STATE(167), 1,
      sym_description,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11133] = 3,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
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
  [11162] = 3,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(566), 20,
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
  [11191] = 3,
    ACTIONS(754), 1,
      anon_sym_and,
    STATE(259), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(242), 20,
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
  [11220] = 3,
    ACTIONS(712), 1,
      anon_sym_and,
    STATE(259), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(469), 20,
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
  [11249] = 3,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
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
  [11278] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(520), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(81), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(248), 1,
      sym_primary,
    STATE(250), 1,
      sym__class_iri,
    STATE(283), 1,
      sym_conjunction,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11337] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(81), 1,
      sym_description,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(103), 1,
      sym__class_iri,
    STATE(105), 1,
      sym_primary,
    STATE(127), 1,
      sym_conjunction,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11396] = 3,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(757), 20,
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
  [11425] = 3,
    ACTIONS(746), 1,
      anon_sym_and,
    STATE(267), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(443), 20,
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
  [11454] = 3,
    ACTIONS(712), 1,
      anon_sym_and,
    STATE(259), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 20,
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
  [11483] = 3,
    ACTIONS(759), 1,
      anon_sym_and,
    STATE(267), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(226), 20,
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
  [11512] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(520), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(248), 1,
      sym_primary,
    STATE(250), 1,
      sym__class_iri,
    STATE(283), 1,
      sym_conjunction,
    STATE(325), 1,
      sym_description,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11571] = 7,
    ACTIONS(764), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(768), 1,
      anon_sym_Domain_COLON,
    ACTIONS(770), 1,
      anon_sym_Range_COLON,
    ACTIONS(772), 1,
      anon_sym_Characteristics_COLON,
    STATE(302), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(766), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(762), 13,
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
  [11607] = 3,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(774), 19,
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
  [11635] = 3,
    ACTIONS(778), 1,
      anon_sym_or,
    STATE(271), 1,
      aux_sym_description_repeat1,
    ACTIONS(266), 19,
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
  [11663] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(566), 19,
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
  [11691] = 3,
    ACTIONS(783), 1,
      anon_sym_or,
    STATE(271), 1,
      aux_sym_description_repeat1,
    ACTIONS(503), 19,
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
  [11719] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(520), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(74), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(248), 1,
      sym_primary,
    STATE(250), 1,
      sym__class_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11775] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(566), 19,
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
  [11803] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(294), 19,
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
  [11831] = 2,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(677), 15,
      anon_sym_Import_COLON,
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
  [11857] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(452), 1,
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
  [11909] = 3,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(788), 19,
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
  [11937] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(495), 1,
      anon_sym_not,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(74), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(727), 1,
      sym__class_iri,
    STATE(734), 1,
      sym_primary,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11993] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(957), 1,
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
  [12045] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(441), 1,
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
  [12097] = 3,
    ACTIONS(783), 1,
      anon_sym_or,
    STATE(273), 1,
      aux_sym_description_repeat1,
    ACTIONS(489), 19,
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
  [12125] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(607), 19,
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
  [12153] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(74), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(165), 1,
      sym_primary,
    STATE(168), 1,
      sym__class_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12209] = 3,
    ACTIONS(781), 1,
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
  [12237] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
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
  [12289] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(74), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(103), 1,
      sym__class_iri,
    STATE(105), 1,
      sym_primary,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12345] = 1,
    ACTIONS(728), 21,
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
  [12369] = 1,
    ACTIONS(793), 21,
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
  [12393] = 1,
    ACTIONS(795), 21,
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
  [12417] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(169), 1,
      sym_data_conjunction,
    STATE(291), 1,
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
  [12469] = 1,
    ACTIONS(714), 21,
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
  [12493] = 7,
    ACTIONS(764), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(768), 1,
      anon_sym_Domain_COLON,
    ACTIONS(770), 1,
      anon_sym_Range_COLON,
    ACTIONS(772), 1,
      anon_sym_Characteristics_COLON,
    STATE(269), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(766), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(797), 13,
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
  [12529] = 8,
    ACTIONS(803), 1,
      anon_sym_DOT,
    STATE(908), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(801), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(805), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(317), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(79), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(799), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12567] = 8,
    ACTIONS(809), 1,
      anon_sym_DOT,
    STATE(909), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(801), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(811), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(317), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(807), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12605] = 1,
    ACTIONS(813), 21,
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
  [12629] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(74), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(398), 1,
      sym_primary,
    STATE(407), 1,
      sym__class_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12685] = 2,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(675), 15,
      anon_sym_Import_COLON,
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
  [12711] = 2,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(673), 15,
      anon_sym_Import_COLON,
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
  [12737] = 2,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(671), 15,
      anon_sym_Import_COLON,
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
  [12763] = 7,
    ACTIONS(817), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(823), 1,
      anon_sym_Domain_COLON,
    ACTIONS(826), 1,
      anon_sym_Range_COLON,
    ACTIONS(829), 1,
      anon_sym_Characteristics_COLON,
    STATE(302), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(820), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(815), 13,
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
  [12799] = 3,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(832), 19,
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
  [12827] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(74), 1,
      sym_conjunction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(221), 1,
      sym__class_iri,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12883] = 3,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(834), 18,
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
  [12910] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(838), 18,
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
  [12937] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12990] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(340), 18,
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
  [13017] = 1,
    ACTIONS(788), 20,
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
  [13040] = 6,
    ACTIONS(846), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(850), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(852), 1,
      anon_sym_HasKey_COLON,
    STATE(329), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(848), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(844), 13,
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
  [13073] = 3,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(854), 18,
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
  [13100] = 7,
    STATE(906), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(858), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(860), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(342), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(856), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [13135] = 7,
    STATE(905), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(858), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(864), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(342), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(119), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(862), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [13170] = 3,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(866), 18,
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
  [13197] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13250] = 3,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(871), 18,
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
  [13277] = 4,
    ACTIONS(876), 2,
      sym__non_zero,
      sym__zero,
    STATE(317), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 11,
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
  [13306] = 3,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(834), 18,
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
  [13333] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(316), 1,
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
  [13360] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(881), 18,
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
  [13387] = 3,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(883), 18,
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
  [13414] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(881), 18,
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
  [13441] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 18,
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
  [13468] = 6,
    ACTIONS(885), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(891), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(894), 1,
      anon_sym_HasKey_COLON,
    STATE(324), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(888), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(244), 13,
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
  [13501] = 3,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(566), 18,
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
  [13528] = 3,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(607), 18,
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
  [13555] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13608] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 18,
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
  [13635] = 6,
    ACTIONS(846), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(850), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(852), 1,
      anon_sym_HasKey_COLON,
    STATE(324), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(848), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(899), 13,
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
  [13668] = 1,
    ACTIONS(815), 20,
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
  [13691] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13744] = 3,
    ACTIONS(901), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(294), 18,
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
  [13771] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(520), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13824] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(342), 18,
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
  [13851] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(141), 1,
      sym_data_primary,
    STATE(210), 1,
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
  [13900] = 3,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    STATE(332), 1,
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
  [13927] = 1,
    ACTIONS(904), 20,
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
  [13950] = 3,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(144), 18,
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
  [13977] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(495), 1,
      anon_sym_not,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(59), 1,
      sym_primary,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(72), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14030] = 3,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(566), 18,
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
  [14057] = 1,
    ACTIONS(909), 19,
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
  [14079] = 4,
    ACTIONS(911), 2,
      sym__non_zero,
      sym__zero,
    STATE(342), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 10,
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
  [14107] = 4,
    ACTIONS(914), 2,
      sym__non_zero,
      sym__zero,
    STATE(362), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(106), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(108), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [14135] = 3,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(916), 17,
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
  [14161] = 3,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(916), 17,
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
  [14187] = 3,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(920), 17,
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
  [14213] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(594), 1,
      anon_sym_not,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
    STATE(155), 1,
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
  [14259] = 4,
    ACTIONS(924), 2,
      sym__non_zero,
      sym__zero,
    STATE(343), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(123), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(125), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [14287] = 1,
    ACTIONS(244), 19,
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
  [14309] = 3,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(920), 17,
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
  [14335] = 1,
    ACTIONS(926), 19,
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
  [14357] = 1,
    ACTIONS(928), 19,
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
  [14379] = 1,
    ACTIONS(930), 19,
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
  [14401] = 3,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(932), 17,
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
  [14427] = 6,
    ACTIONS(936), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(939), 1,
      anon_sym_Types_COLON,
    ACTIONS(942), 1,
      anon_sym_Facts_COLON,
    STATE(355), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(945), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(934), 13,
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
  [14459] = 3,
    ACTIONS(950), 1,
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
  [14485] = 3,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(953), 17,
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
  [14511] = 1,
    ACTIONS(955), 19,
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
  [14533] = 3,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(957), 17,
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
  [14559] = 3,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(959), 17,
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
  [14585] = 3,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(964), 17,
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
  [14611] = 4,
    ACTIONS(966), 2,
      sym__non_zero,
      sym__zero,
    STATE(362), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(112), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(114), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [14639] = 1,
    ACTIONS(969), 19,
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
  [14661] = 6,
    ACTIONS(973), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(975), 1,
      anon_sym_Types_COLON,
    ACTIONS(977), 1,
      anon_sym_Facts_COLON,
    STATE(355), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(979), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(971), 13,
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
  [14693] = 6,
    ACTIONS(973), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(975), 1,
      anon_sym_Types_COLON,
    ACTIONS(977), 1,
      anon_sym_Facts_COLON,
    STATE(364), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(979), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(981), 13,
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
  [14725] = 1,
    ACTIONS(871), 19,
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
  [14747] = 1,
    ACTIONS(866), 19,
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
  [14769] = 1,
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
  [14791] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14838] = 5,
    ACTIONS(985), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(991), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(370), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(988), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(983), 13,
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
  [14867] = 8,
    ACTIONS(97), 1,
      anon_sym_f,
    ACTIONS(272), 1,
      anon_sym_F,
    ACTIONS(996), 1,
      anon_sym_DOT,
    STATE(911), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(994), 2,
      sym__non_zero,
      sym__zero,
    STATE(394), 2,
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
  [14902] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14949] = 5,
    ACTIONS(1000), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1004), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(377), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(1002), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(998), 13,
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
  [14978] = 8,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(276), 1,
      anon_sym_F,
    ACTIONS(1006), 1,
      anon_sym_DOT,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(994), 2,
      sym__non_zero,
      sym__zero,
    STATE(394), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(79), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15013] = 1,
    ACTIONS(1008), 18,
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
  [15034] = 1,
    ACTIONS(1010), 18,
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
  [15055] = 5,
    ACTIONS(1000), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1004), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(370), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(1002), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(1012), 13,
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
  [15084] = 8,
    ACTIONS(1016), 1,
      anon_sym_DOT,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1014), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1018), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(392), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(799), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(79), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15119] = 1,
    ACTIONS(948), 18,
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
  [15140] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15187] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15234] = 1,
    ACTIONS(959), 18,
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
  [15255] = 1,
    ACTIONS(934), 18,
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
  [15276] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15323] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_iri,
    STATE(57), 1,
      sym__class_iri,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(56), 2,
      sym_restriction,
      sym_atomic,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15370] = 8,
    ACTIONS(1020), 1,
      anon_sym_DOT,
    STATE(885), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1014), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1022), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(392), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(807), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15405] = 3,
    ACTIONS(1026), 1,
      anon_sym_Import_COLON,
    STATE(387), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    ACTIONS(1024), 14,
      ts_builtin_sym_end,
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
  [15429] = 9,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(1031), 1,
      anon_sym_DOT,
    STATE(865), 1,
      sym_literal,
    STATE(921), 1,
      sym__lexial_value,
    STATE(955), 1,
      sym_literal_list,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1029), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [15465] = 3,
    ACTIONS(1033), 1,
      anon_sym_and,
    STATE(401), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 15,
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
  [15489] = 7,
    STATE(895), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1035), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1037), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(415), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(862), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(119), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15521] = 1,
    ACTIONS(983), 17,
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
  [15541] = 4,
    ACTIONS(1039), 2,
      sym__non_zero,
      sym__zero,
    STATE(392), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 8,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [15567] = 8,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(1031), 1,
      anon_sym_DOT,
    STATE(921), 1,
      sym__lexial_value,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1029), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    STATE(884), 2,
      sym_literal,
      sym__restriction_value,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [15601] = 4,
    ACTIONS(104), 1,
      anon_sym_F,
    ACTIONS(1042), 2,
      sym__non_zero,
      sym__zero,
    STATE(394), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 12,
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
  [15627] = 8,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(1031), 1,
      anon_sym_DOT,
    STATE(921), 1,
      sym__lexial_value,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1029), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    STATE(861), 2,
      sym_literal,
      sym__restriction_value,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [15661] = 3,
    ACTIONS(1045), 1,
      anon_sym_and,
    STATE(396), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(242), 15,
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
  [15685] = 3,
    ACTIONS(1033), 1,
      anon_sym_and,
    STATE(403), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(356), 15,
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
  [15709] = 3,
    ACTIONS(1048), 1,
      anon_sym_and,
    STATE(408), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(352), 15,
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
  [15733] = 7,
    ACTIONS(121), 1,
      anon_sym_f,
    ACTIONS(292), 1,
      anon_sym_F,
    STATE(871), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(994), 2,
      sym__non_zero,
      sym__zero,
    STATE(394), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(119), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15765] = 7,
    ACTIONS(131), 1,
      anon_sym_f,
    ACTIONS(285), 1,
      anon_sym_F,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(994), 2,
      sym__non_zero,
      sym__zero,
    STATE(394), 2,
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
  [15797] = 3,
    ACTIONS(1033), 1,
      anon_sym_and,
    STATE(396), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(469), 15,
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
  [15821] = 7,
    STATE(889), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1035), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1050), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(415), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(856), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(129), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15853] = 3,
    ACTIONS(1033), 1,
      anon_sym_and,
    STATE(396), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 15,
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
  [15877] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_datatype,
    STATE(51), 1,
      sym_data_atomic,
    STATE(71), 1,
      sym_datatype_restriction,
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
  [15917] = 13,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    ACTIONS(1052), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1054), 1,
      anon_sym_inverse,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(160), 1,
      sym_iri,
    STATE(459), 1,
      sym_annotations,
    STATE(942), 1,
      sym_data_property_expression,
    STATE(943), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(513), 2,
      sym_object_property_2list,
      sym_data_property_2list,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15961] = 3,
    ACTIONS(1056), 1,
      anon_sym_and,
    STATE(406), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(226), 15,
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
  [15985] = 2,
    ACTIONS(1059), 1,
      anon_sym_that,
    ACTIONS(224), 16,
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
  [16007] = 3,
    ACTIONS(1048), 1,
      anon_sym_and,
    STATE(406), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(443), 15,
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
  [16031] = 11,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_inverse,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    ACTIONS(1052), 1,
      anon_sym_Annotations_COLON,
    STATE(160), 1,
      sym_iri,
    STATE(185), 1,
      sym__data_property_iri,
    STATE(482), 1,
      sym_annotations,
    STATE(187), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(68), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(216), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16070] = 3,
    ACTIONS(1063), 1,
      anon_sym_Annotations_COLON,
    STATE(410), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1061), 14,
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
  [16093] = 3,
    ACTIONS(1066), 1,
      anon_sym_or,
    STATE(418), 1,
      aux_sym_description_repeat1,
    ACTIONS(489), 14,
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
  [16116] = 8,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(1031), 1,
      anon_sym_DOT,
    STATE(58), 1,
      sym_literal,
    STATE(936), 1,
      sym__lexial_value,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1068), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [16149] = 4,
    ACTIONS(1061), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(1063), 1,
      anon_sym_Annotations_COLON,
    STATE(410), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1070), 13,
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
  [16174] = 13,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1075), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1077), 1,
      anon_sym_not,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(306), 1,
      sym_fact,
    STATE(383), 1,
      sym_fact_annotated_list,
    STATE(416), 1,
      sym__data_property_iri,
    STATE(501), 1,
      sym_annotations,
    STATE(572), 1,
      sym__object_property_iri,
    STATE(592), 1,
      sym_iri,
    STATE(341), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16217] = 4,
    ACTIONS(1083), 2,
      sym__non_zero,
      sym__zero,
    STATE(415), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 7,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [16242] = 8,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(1031), 1,
      anon_sym_DOT,
    STATE(352), 1,
      sym_literal,
    STATE(936), 1,
      sym__lexial_value,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1068), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [16275] = 4,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1090), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(419), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1086), 13,
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
  [16300] = 3,
    ACTIONS(1066), 1,
      anon_sym_or,
    STATE(423), 1,
      aux_sym_description_repeat1,
    ACTIONS(503), 14,
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
  [16323] = 4,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1094), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(413), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1092), 13,
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
  [16348] = 8,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(1031), 1,
      anon_sym_DOT,
    STATE(58), 1,
      sym_literal,
    STATE(936), 1,
      sym__lexial_value,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1029), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [16381] = 3,
    ACTIONS(1098), 1,
      anon_sym_Annotations_COLON,
    STATE(421), 2,
      sym_annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1096), 13,
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
  [16404] = 8,
    ACTIONS(306), 1,
      sym__quoted_string,
    ACTIONS(1031), 1,
      anon_sym_DOT,
    STATE(879), 1,
      sym_literal,
    STATE(921), 1,
      sym__lexial_value,
    ACTIONS(300), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1029), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    STATE(18), 6,
      sym__decimal_literal,
      sym__floating_point_literal,
      sym__integer_literal,
      sym__string_literal_no_language,
      sym__string_literal_with_language,
      sym__typed_literal,
  [16437] = 3,
    ACTIONS(1101), 1,
      anon_sym_or,
    STATE(423), 1,
      aux_sym_description_repeat1,
    ACTIONS(266), 14,
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
  [16460] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1104), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(209), 1,
      sym_restriction,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(680), 1,
      sym_iri,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16500] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1106), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(147), 1,
      sym_restriction,
    STATE(680), 1,
      sym_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16540] = 1,
    ACTIONS(1108), 15,
      ts_builtin_sym_end,
      anon_sym_Import_COLON,
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
  [16558] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1110), 1,
      anon_sym_not,
    STATE(67), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(680), 1,
      sym_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16598] = 3,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1112), 13,
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
  [16620] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1116), 1,
      anon_sym_not,
    STATE(67), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(680), 1,
      sym_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16660] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1118), 1,
      anon_sym_not,
    STATE(67), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(680), 1,
      sym_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16700] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1120), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(680), 1,
      sym_iri,
    STATE(738), 1,
      sym_restriction,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16740] = 8,
    ACTIONS(1124), 1,
      anon_sym_DOT,
    STATE(896), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(807), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1122), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1126), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(475), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16772] = 3,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    STATE(410), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1128), 13,
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
  [16794] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym_data_property_2list_repeat1,
    ACTIONS(1130), 13,
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
  [16816] = 3,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    STATE(437), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1134), 13,
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
  [16838] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1136), 1,
      anon_sym_not,
    STATE(67), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(680), 1,
      sym_iri,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16878] = 3,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    STATE(410), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1138), 13,
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
  [16900] = 3,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym_data_property_2list_repeat1,
    ACTIONS(1140), 13,
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
  [16922] = 3,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    STATE(410), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1145), 13,
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
  [16944] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1147), 13,
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
  [16966] = 3,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    STATE(439), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1138), 13,
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
  [16988] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1152), 13,
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
  [17010] = 8,
    ACTIONS(1158), 1,
      anon_sym_DOT,
    STATE(870), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(799), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1156), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1160), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(466), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17042] = 1,
    ACTIONS(1061), 15,
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
  [17060] = 8,
    ACTIONS(1162), 1,
      anon_sym_DOT,
    STATE(897), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(799), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1122), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1164), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(475), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17092] = 1,
    ACTIONS(1166), 15,
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
  [17110] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1168), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(226), 1,
      sym_restriction,
    STATE(680), 1,
      sym_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17150] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1170), 1,
      anon_sym_not,
    STATE(67), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(680), 1,
      sym_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17190] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(788), 13,
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
  [17212] = 8,
    ACTIONS(1175), 1,
      anon_sym_DOT,
    STATE(904), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(807), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1156), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1177), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(466), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17244] = 2,
    ACTIONS(162), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(164), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [17264] = 3,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    STATE(433), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1145), 13,
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
  [17286] = 12,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1075), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1077), 1,
      anon_sym_not,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(366), 1,
      sym_fact,
    STATE(416), 1,
      sym__data_property_iri,
    STATE(502), 1,
      sym_annotations,
    STATE(572), 1,
      sym__object_property_iri,
    STATE(592), 1,
      sym_iri,
    STATE(341), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17326] = 3,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1166), 13,
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
  [17348] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_description_2list_repeat1,
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
  [17370] = 3,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(774), 13,
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
  [17392] = 8,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    STATE(901), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(807), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1184), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1188), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17424] = 8,
    ACTIONS(1190), 1,
      anon_sym_DOT,
    STATE(900), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(799), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1184), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1192), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17456] = 11,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    ACTIONS(1054), 1,
      anon_sym_inverse,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(160), 1,
      sym_iri,
    STATE(942), 1,
      sym_data_property_expression,
    STATE(943), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(496), 2,
      sym_object_property_2list,
      sym_data_property_2list,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17494] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1194), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(110), 1,
      sym_restriction,
    STATE(680), 1,
      sym_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17534] = 3,
    ACTIONS(1114), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1196), 13,
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
  [17556] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1198), 1,
      anon_sym_not,
    STATE(67), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(680), 1,
      sym_iri,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17596] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_data_property_2list_repeat1,
    ACTIONS(1200), 13,
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
  [17618] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1202), 13,
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
  [17640] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1204), 1,
      anon_sym_not,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(397), 1,
      sym_restriction,
    STATE(680), 1,
      sym_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17680] = 4,
    ACTIONS(1206), 2,
      sym__non_zero,
      sym__zero,
    STATE(466), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 7,
      anon_sym__COLON,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [17703] = 4,
    ACTIONS(1209), 2,
      sym__non_zero,
      sym__zero,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [17726] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(66), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(680), 1,
      sym_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17763] = 7,
    STATE(903), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(862), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1212), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1214), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(515), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17792] = 11,
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
    STATE(112), 1,
      sym_restriction,
    STATE(680), 1,
      sym_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17829] = 7,
    STATE(899), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(856), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1216), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1218), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(512), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17858] = 7,
    STATE(898), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(862), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1216), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1220), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(512), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17887] = 7,
    STATE(902), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(856), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1212), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1222), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(515), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17916] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(66), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(680), 1,
      sym_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17953] = 4,
    ACTIONS(1224), 2,
      sym__non_zero,
      sym__zero,
    STATE(475), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [17976] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(66), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(680), 1,
      sym_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18013] = 11,
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
    STATE(182), 1,
      sym_restriction,
    STATE(680), 1,
      sym_iri,
    STATE(687), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18050] = 11,
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
    STATE(225), 1,
      sym_restriction,
    STATE(680), 1,
      sym_iri,
    STATE(682), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18087] = 8,
    ACTIONS(799), 1,
      sym__pn_local,
    ACTIONS(1229), 1,
      anon_sym_DOT,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1227), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1231), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(495), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18118] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(66), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(680), 1,
      sym_iri,
    STATE(689), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18155] = 8,
    ACTIONS(807), 1,
      sym__pn_local,
    ACTIONS(1233), 1,
      anon_sym_DOT,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1227), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1235), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(495), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18186] = 9,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_inverse,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    STATE(160), 1,
      sym_iri,
    STATE(185), 1,
      sym__data_property_iri,
    STATE(187), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(52), 3,
      sym_object_property_expression,
      sym_data_property_expression,
      aux_sym_class_frame_repeat1,
    STATE(216), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18219] = 11,
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
    STATE(389), 1,
      sym_restriction,
    STATE(680), 1,
      sym_iri,
    STATE(683), 1,
      sym_data_property_expression,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18256] = 11,
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
    STATE(207), 1,
      sym_restriction,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(680), 1,
      sym_iri,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18293] = 7,
    STATE(917), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(856), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1237), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1239), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(514), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18322] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    ACTIONS(1241), 1,
      anon_sym_Annotations_COLON,
    STATE(321), 1,
      sym_individual,
    STATE(383), 1,
      sym_individual_annotated_list,
    STATE(581), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [18357] = 10,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    ACTIONS(1241), 1,
      anon_sym_Annotations_COLON,
    STATE(513), 1,
      sym_individual_2list,
    STATE(533), 1,
      sym_annotations,
    STATE(941), 1,
      sym_individual,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18392] = 7,
    STATE(915), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(862), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1237), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1243), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(514), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18421] = 11,
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
    STATE(677), 1,
      sym_data_property_expression,
    STATE(680), 1,
      sym_iri,
    STATE(714), 1,
      sym_restriction,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18458] = 1,
    ACTIONS(1140), 14,
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
  [18475] = 1,
    ACTIONS(1147), 14,
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
  [18492] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1052), 1,
      anon_sym_Annotations_COLON,
    STATE(181), 1,
      sym_object_property_expression,
    STATE(239), 1,
      sym_object_property_expression_annotated_list,
    STATE(563), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [18527] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(66), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(679), 1,
      sym_data_property_expression,
    STATE(680), 1,
      sym_iri,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18564] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(66), 1,
      sym_restriction,
    STATE(92), 1,
      sym__data_property_iri,
    STATE(677), 1,
      sym_data_property_expression,
    STATE(680), 1,
      sym_iri,
    STATE(948), 1,
      sym_object_property_expression,
    STATE(144), 2,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18601] = 4,
    ACTIONS(1245), 2,
      sym__non_zero,
      sym__zero,
    STATE(495), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 6,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18623] = 1,
    ACTIONS(1248), 13,
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
  [18639] = 7,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    STATE(17), 1,
      sym_datatype,
    STATE(12), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18667] = 9,
    ACTIONS(1052), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1250), 1,
      anon_sym_LT,
    ACTIONS(1252), 1,
      anon_sym_inverse,
    ACTIONS(1254), 1,
      sym__pn_local,
    ACTIONS(1256), 1,
      sym__pname_ln,
    STATE(180), 1,
      sym_object_property_expression,
    STATE(565), 1,
      sym_annotations,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(192), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18699] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(417), 1,
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
  [18727] = 4,
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
  [18749] = 10,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1077), 1,
      anon_sym_not,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(322), 1,
      sym_fact,
    STATE(416), 1,
      sym__data_property_iri,
    STATE(572), 1,
      sym__object_property_iri,
    STATE(592), 1,
      sym_iri,
    STATE(341), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18783] = 10,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1077), 1,
      anon_sym_not,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(363), 1,
      sym_fact,
    STATE(416), 1,
      sym__data_property_iri,
    STATE(572), 1,
      sym__object_property_iri,
    STATE(592), 1,
      sym_iri,
    STATE(341), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18817] = 1,
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
  [18833] = 7,
    ACTIONS(371), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      sym__pn_local,
    ACTIONS(387), 1,
      sym__pname_ln,
    STATE(721), 1,
      sym_datatype,
    STATE(759), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(787), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1264), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18861] = 7,
    ACTIONS(425), 1,
      anon_sym_LT,
    ACTIONS(439), 1,
      sym__pn_local,
    ACTIONS(441), 1,
      sym__pname_ln,
    STATE(800), 1,
      sym_datatype,
    STATE(833), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(834), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1266), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18889] = 7,
    ACTIONS(471), 1,
      anon_sym_LT,
    ACTIONS(485), 1,
      sym__pn_local,
    ACTIONS(487), 1,
      sym__pname_ln,
    STATE(575), 1,
      sym_datatype,
    STATE(571), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(584), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1268), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [18917] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(17), 1,
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
  [18945] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    ACTIONS(1241), 1,
      anon_sym_Annotations_COLON,
    STATE(367), 1,
      sym_individual,
    STATE(553), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [18977] = 7,
    ACTIONS(407), 1,
      anon_sym_LT,
    ACTIONS(421), 1,
      sym__pn_local,
    ACTIONS(423), 1,
      sym__pname_ln,
    STATE(755), 1,
      sym_datatype,
    STATE(777), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(732), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1270), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [19005] = 7,
    ACTIONS(856), 1,
      sym__pn_local,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1272), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1274), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(535), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [19033] = 7,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(403), 1,
      sym__pn_local,
    ACTIONS(405), 1,
      sym__pname_ln,
    STATE(740), 1,
      sym_datatype,
    STATE(716), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(728), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1276), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [19061] = 4,
    ACTIONS(1278), 2,
      sym__non_zero,
      sym__zero,
    STATE(512), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [19083] = 1,
    ACTIONS(1281), 13,
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
  [19099] = 4,
    ACTIONS(1283), 2,
      sym__non_zero,
      sym__zero,
    STATE(514), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 6,
      anon_sym__COLON,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [19121] = 4,
    ACTIONS(1286), 2,
      sym__non_zero,
      sym__zero,
    STATE(515), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [19143] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1052), 1,
      anon_sym_Annotations_COLON,
    STATE(189), 1,
      sym_object_property_expression,
    STATE(549), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [19175] = 7,
    ACTIONS(445), 1,
      anon_sym_LT,
    ACTIONS(459), 1,
      sym__pn_local,
    ACTIONS(461), 1,
      sym__pname_ln,
    STATE(647), 1,
      sym_datatype,
    STATE(661), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(657), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(1289), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [19203] = 7,
    ACTIONS(862), 1,
      sym__pn_local,
    STATE(883), 1,
      sym__exponent,
    ACTIONS(89), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1272), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1291), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(535), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [19231] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(520), 1,
      sym_annotation,
    STATE(589), 1,
      sym_annotation_annotated_list,
    STATE(645), 1,
      sym_annotations,
    STATE(126), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19262] = 4,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(526), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(340), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1295), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19283] = 4,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    STATE(521), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1299), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19304] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation,
    STATE(349), 1,
      sym_annotation_annotated_list,
    STATE(610), 1,
      sym_annotations,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19335] = 4,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(521), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(342), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1304), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19356] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation,
    STATE(444), 1,
      sym_annotation_annotated_list,
    STATE(610), 1,
      sym_annotations,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19387] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation,
    STATE(297), 1,
      sym_annotation_annotated_list,
    STATE(610), 1,
      sym_annotations,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19418] = 4,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(521), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1306), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19439] = 4,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1306), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19460] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(600), 1,
      sym_annotations,
    STATE(616), 1,
      sym_annotation,
    STATE(676), 1,
      sym_annotation_annotated_list,
    STATE(122), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19491] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(602), 1,
      sym_annotations,
    STATE(754), 1,
      sym_annotation,
    STATE(864), 1,
      sym_annotation_annotated_list,
    STATE(120), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19522] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation,
    STATE(391), 1,
      sym_annotation_annotated_list,
    STATE(610), 1,
      sym_annotations,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19553] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(612), 1,
      sym_annotations,
    STATE(690), 1,
      sym_annotation,
    STATE(804), 1,
      sym_annotation_annotated_list,
    STATE(118), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19584] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation,
    STATE(239), 1,
      sym_annotation_annotated_list,
    STATE(610), 1,
      sym_annotations,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19615] = 8,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(496), 1,
      sym_individual_2list,
    STATE(941), 1,
      sym_individual,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19644] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(297), 1,
      sym_annotation_annotated_list,
    STATE(631), 1,
      sym_annotation,
    STATE(641), 1,
      sym_annotations,
    STATE(123), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19675] = 4,
    ACTIONS(1308), 2,
      sym__non_zero,
      sym__zero,
    STATE(535), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 5,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [19696] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(639), 1,
      sym_annotations,
    STATE(701), 1,
      sym_annotation,
    STATE(826), 1,
      sym_annotation_annotated_list,
    STATE(119), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19727] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(308), 1,
      sym_annotation,
    STATE(383), 1,
      sym_annotation_annotated_list,
    STATE(628), 1,
      sym_annotations,
    STATE(113), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19758] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(621), 1,
      sym_annotations,
    STATE(702), 1,
      sym_annotation,
    STATE(846), 1,
      sym_annotation_annotated_list,
    STATE(116), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19789] = 8,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(857), 1,
      sym_individual,
    STATE(933), 1,
      sym_individual_list,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19818] = 9,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation,
    STATE(330), 1,
      sym_annotation_annotated_list,
    STATE(610), 1,
      sym_annotations,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19849] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(240), 1,
      sym_data_property_expression,
    STATE(330), 1,
      sym_data_property_expression_annotated_list,
    STATE(617), 1,
      sym_annotations,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19880] = 7,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(446), 1,
      sym_individual,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19906] = 2,
    ACTIONS(71), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1311), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19922] = 2,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(671), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19938] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(625), 1,
      sym_annotations,
    STATE(737), 1,
      sym_annotation,
    STATE(116), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19966] = 2,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(677), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19982] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(464), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20008] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(619), 1,
      sym_annotations,
    STATE(781), 1,
      sym_annotation,
    STATE(118), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20036] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(197), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [20062] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(636), 1,
      sym_annotations,
    STATE(113), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20090] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(605), 1,
      sym_annotations,
    STATE(796), 1,
      sym_annotation,
    STATE(120), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20118] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(446), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20144] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(358), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20170] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(556), 1,
      sym_annotation,
    STATE(643), 1,
      sym_annotations,
    STATE(126), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20198] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(391), 1,
      sym_annotation_property_iri_annotated_list,
    STATE(655), 1,
      sym_annotations,
    STATE(357), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20226] = 2,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1299), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20242] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(58), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20268] = 7,
    ACTIONS(1250), 1,
      anon_sym_LT,
    ACTIONS(1252), 1,
      anon_sym_inverse,
    ACTIONS(1254), 1,
      sym__pn_local,
    ACTIONS(1256), 1,
      sym__pname_ln,
    STATE(220), 1,
      sym_object_property_expression,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(192), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20294] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(640), 1,
      sym_annotations,
    STATE(123), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20322] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(638), 1,
      sym_annotations,
    STATE(743), 1,
      sym_annotation,
    STATE(119), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20350] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(615), 1,
      sym_annotations,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20378] = 2,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1313), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20394] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(172), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [20420] = 2,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1315), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20436] = 7,
    ACTIONS(1250), 1,
      anon_sym_LT,
    ACTIONS(1252), 1,
      anon_sym_inverse,
    ACTIONS(1254), 1,
      sym__pn_local,
    ACTIONS(1256), 1,
      sym__pname_ln,
    STATE(171), 1,
      sym_object_property_expression,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(192), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20462] = 2,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1317), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20478] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(461), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [20504] = 2,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1319), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20520] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(416), 1,
      sym__data_property_iri,
    STATE(572), 1,
      sym__object_property_iri,
    STATE(592), 1,
      sym_iri,
    STATE(351), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20548] = 2,
    ACTIONS(35), 5,
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
  [20564] = 2,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1321), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20580] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(353), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20606] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(491), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(144), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [20632] = 2,
    ACTIONS(151), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1323), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20648] = 2,
    ACTIONS(69), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1325), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20664] = 8,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(609), 1,
      sym_annotations,
    STATE(653), 1,
      sym_annotation,
    STATE(122), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20692] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(289), 1,
      sym_data_property_expression,
    STATE(626), 1,
      sym_annotations,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20720] = 2,
    ACTIONS(91), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1327), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20736] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(365), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20762] = 2,
    ACTIONS(67), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1329), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20778] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(296), 1,
      anon_sym__COLON,
    STATE(305), 1,
      sym_individual,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 3,
      sym_iri,
      sym__individual_iri,
      sym_node_id,
  [20804] = 5,
    ACTIONS(1331), 1,
      anon_sym_Annotations_COLON,
    STATE(146), 1,
      sym_object_property_characteristic,
    STATE(239), 1,
      sym_object_property_characteristic_annotated_list,
    STATE(658), 1,
      sym_annotations,
    ACTIONS(1333), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20826] = 2,
    ACTIONS(140), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1335), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20842] = 2,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(675), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20858] = 2,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1337), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20874] = 2,
    ACTIONS(146), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1339), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20890] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1341), 1,
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
  [20909] = 3,
    STATE(395), 1,
      sym_facet,
    ACTIONS(1343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1345), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [20926] = 2,
    ACTIONS(813), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1347), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20941] = 2,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(677), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [20956] = 3,
    STATE(393), 1,
      sym_facet,
    ACTIONS(1343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1345), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [20973] = 4,
    ACTIONS(62), 2,
      anon_sym_PLUS,
      sym__quoted_string,
    ACTIONS(1349), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1351), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1353), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
  [20992] = 2,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(675), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [21007] = 2,
    ACTIONS(35), 4,
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
  [21022] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(649), 1,
      sym_annotations,
    STATE(379), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21047] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(354), 1,
      sym_iri,
    STATE(391), 1,
      sym_iri_annotated_list,
    STATE(678), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21074] = 4,
    ACTIONS(1331), 1,
      anon_sym_Annotations_COLON,
    STATE(208), 1,
      sym_object_property_characteristic,
    STATE(651), 1,
      sym_annotations,
    ACTIONS(1333), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21093] = 2,
    ACTIONS(33), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(671), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [21108] = 4,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(601), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1304), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(342), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21126] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(604), 1,
      sym_annotation,
    STATE(122), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21148] = 4,
    ACTIONS(1357), 1,
      anon_sym_COMMA,
    STATE(601), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1299), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21166] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(760), 1,
      sym_annotation,
    STATE(120), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21188] = 5,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1360), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21208] = 4,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(599), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1306), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(336), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21226] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(806), 1,
      sym_annotation,
    STATE(120), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21248] = 5,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1362), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21268] = 4,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(601), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1306), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(336), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21286] = 5,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1364), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21306] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(660), 1,
      sym_annotation,
    STATE(122), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21328] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21350] = 5,
    STATE(889), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1366), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21370] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(700), 1,
      sym_annotation,
    STATE(118), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21392] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(463), 1,
      sym_data_property_expression,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21414] = 5,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21434] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(40), 1,
      sym_annotation,
    STATE(117), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21456] = 4,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(607), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(1295), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(340), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21474] = 6,
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
  [21496] = 5,
    STATE(897), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1368), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21516] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(741), 1,
      sym_annotation,
    STATE(118), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21538] = 5,
    STATE(902), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1370), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21558] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(693), 1,
      sym_annotation,
    STATE(116), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21580] = 5,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(131), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21600] = 5,
    STATE(870), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1372), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21620] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(490), 1,
      sym_data_property_expression,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21642] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(720), 1,
      sym_annotation,
    STATE(116), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21664] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(290), 1,
      sym_data_property_expression,
    STATE(92), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21686] = 5,
    STATE(917), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1374), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21706] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(323), 1,
      sym_annotation,
    STATE(113), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21728] = 3,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    STATE(633), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21744] = 5,
    STATE(908), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1378), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21764] = 3,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    STATE(634), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(340), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21780] = 3,
    ACTIONS(1380), 1,
      anon_sym_COMMA,
    STATE(632), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(144), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21796] = 3,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    STATE(632), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(342), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21812] = 3,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    STATE(632), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21828] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1293), 1,
      anon_sym_Annotations_COLON,
    STATE(382), 1,
      sym_iri,
    STATE(688), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21852] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(40), 1,
      sym_annotation,
    STATE(113), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21874] = 5,
    STATE(906), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1383), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [21894] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(758), 1,
      sym_annotation,
    STATE(119), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21916] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(705), 1,
      sym_annotation,
    STATE(119), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21938] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(40), 1,
      sym_annotation,
    STATE(123), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21960] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(629), 1,
      sym_annotation,
    STATE(123), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21982] = 5,
    STATE(899), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1385), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [22002] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(574), 1,
      sym_annotation,
    STATE(126), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22024] = 5,
    STATE(900), 1,
      sym__exponent,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1387), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [22044] = 6,
    ACTIONS(1073), 1,
      anon_sym_LT,
    ACTIONS(1079), 1,
      sym__pn_local,
    ACTIONS(1081), 1,
      sym__pname_ln,
    STATE(527), 1,
      sym_annotation,
    STATE(126), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(593), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22066] = 2,
    ACTIONS(677), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22079] = 2,
    ACTIONS(1325), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(69), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22092] = 2,
    ACTIONS(1319), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22105] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(376), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22124] = 5,
    ACTIONS(1250), 1,
      anon_sym_LT,
    ACTIONS(1254), 1,
      sym__pn_local,
    ACTIONS(1256), 1,
      sym__pname_ln,
    STATE(136), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(192), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22143] = 2,
    STATE(196), 1,
      sym_object_property_characteristic,
    ACTIONS(1333), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [22156] = 2,
    ACTIONS(1313), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22169] = 2,
    ACTIONS(1299), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22182] = 2,
    ACTIONS(1329), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(67), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22195] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(350), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22214] = 5,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(214), 1,
      sym__pn_local,
    ACTIONS(216), 1,
      sym__pname_ln,
    STATE(202), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(216), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22233] = 2,
    ACTIONS(675), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22246] = 2,
    STATE(183), 1,
      sym_object_property_characteristic,
    ACTIONS(1333), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [22259] = 2,
    ACTIONS(1327), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(91), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22272] = 2,
    ACTIONS(1323), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(151), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22285] = 2,
    ACTIONS(1321), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22298] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(136), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22317] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(373), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22336] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(294), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22355] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(213), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22374] = 2,
    ACTIONS(1339), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(146), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22387] = 5,
    ACTIONS(168), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      sym__pn_local,
    ACTIONS(194), 1,
      sym__pname_ln,
    STATE(136), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(299), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22406] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(310), 2,
      sym_iri,
      sym__class_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22425] = 2,
    ACTIONS(1311), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22438] = 2,
    ACTIONS(671), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22451] = 2,
    ACTIONS(1335), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(140), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22464] = 2,
    ACTIONS(1315), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22477] = 2,
    ACTIONS(673), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22490] = 2,
    ACTIONS(1317), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22503] = 2,
    ACTIONS(1337), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22516] = 2,
    ACTIONS(1347), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(813), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [22528] = 4,
    ACTIONS(1391), 1,
      anon_sym_Self,
    ACTIONS(1395), 1,
      anon_sym_value,
    ACTIONS(1389), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1393), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22544] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(345), 1,
      sym_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22562] = 4,
    ACTIONS(1391), 1,
      anon_sym_Self,
    ACTIONS(1395), 1,
      anon_sym_value,
    ACTIONS(1397), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1399), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22578] = 2,
    ACTIONS(64), 1,
      anon_sym_value,
    ACTIONS(62), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22590] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1401), 1,
      sym__language_tag,
    ACTIONS(1258), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22606] = 4,
    ACTIONS(1391), 1,
      anon_sym_Self,
    ACTIONS(1407), 1,
      anon_sym_value,
    ACTIONS(1403), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1405), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22622] = 4,
    ACTIONS(1391), 1,
      anon_sym_Self,
    ACTIONS(1395), 1,
      anon_sym_value,
    ACTIONS(1409), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1411), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22638] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(426), 1,
      sym_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22656] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1413), 1,
      sym__language_tag,
    ACTIONS(1258), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22672] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1415), 1,
      sym__language_tag,
    ACTIONS(1258), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22688] = 4,
    ACTIONS(1391), 1,
      anon_sym_Self,
    ACTIONS(1395), 1,
      anon_sym_value,
    ACTIONS(1417), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1419), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22704] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(375), 1,
      sym_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22722] = 4,
    ACTIONS(1391), 1,
      anon_sym_Self,
    ACTIONS(1395), 1,
      anon_sym_value,
    ACTIONS(1421), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1423), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [22738] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(340), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1295), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22753] = 3,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1427), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [22766] = 4,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(706), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22781] = 4,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(708), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22796] = 4,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(144), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1299), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22811] = 3,
    ACTIONS(1434), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1436), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(697), 2,
      aux_sym__digits,
      sym__digit,
  [22824] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1304), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22839] = 3,
    ACTIONS(81), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1438), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [22852] = 4,
    ACTIONS(47), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1258), 1,
      sym__pn_local,
    ACTIONS(1440), 1,
      sym__language_tag,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22867] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22882] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(696), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22897] = 4,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(707), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(340), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1295), 2,
      anon_sym_not,
      sym__pn_local,
  [22912] = 4,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(692), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(340), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1295), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22927] = 4,
    ACTIONS(1444), 1,
      anon_sym_COMMA,
    STATE(703), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(144), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1299), 2,
      anon_sym_not,
      sym__pn_local,
  [22942] = 4,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(703), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1304), 2,
      anon_sym_not,
      sym__pn_local,
  [22957] = 4,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(704), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym_not,
      sym__pn_local,
  [22972] = 4,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(706), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(144), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1299), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22987] = 4,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(703), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym_not,
      sym__pn_local,
  [23002] = 4,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(706), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1304), 2,
      anon_sym__COLON,
      sym__pn_local,
  [23017] = 1,
    ACTIONS(1450), 6,
      sym__non_zero,
      sym__zero,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__quoted_string,
  [23026] = 3,
    ACTIONS(1454), 1,
      anon_sym_DOT,
    ACTIONS(1452), 2,
      sym__non_zero,
      sym__zero,
    STATE(458), 2,
      aux_sym__digits,
      sym__digit,
  [23038] = 2,
    ACTIONS(1311), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23048] = 2,
    ACTIONS(1335), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23058] = 3,
    ACTIONS(1458), 1,
      anon_sym_DOT,
    ACTIONS(1456), 2,
      sym__non_zero,
      sym__zero,
    STATE(445), 2,
      aux_sym__digits,
      sym__digit,
  [23070] = 3,
    ACTIONS(1460), 1,
      anon_sym_and,
    STATE(736), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23082] = 3,
    ACTIONS(1460), 1,
      anon_sym_and,
    STATE(750), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(363), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23094] = 2,
    ACTIONS(1321), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23104] = 2,
    ACTIONS(1327), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23114] = 2,
    ACTIONS(1337), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23124] = 3,
    ACTIONS(1464), 1,
      anon_sym_SLASH,
    STATE(752), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1462), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [23136] = 2,
    ACTIONS(1323), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23146] = 2,
    ACTIONS(1325), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23156] = 2,
    ACTIONS(671), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23166] = 2,
    ACTIONS(1327), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23176] = 3,
    ACTIONS(1468), 1,
      anon_sym_DOT,
    ACTIONS(1466), 2,
      sym__non_zero,
      sym__zero,
    STATE(374), 2,
      aux_sym__digits,
      sym__digit,
  [23188] = 2,
    ACTIONS(673), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23198] = 3,
    ACTIONS(1472), 1,
      anon_sym_DOT,
    ACTIONS(1470), 2,
      sym__non_zero,
      sym__zero,
    STATE(378), 2,
      aux_sym__digits,
      sym__digit,
  [23210] = 2,
    ACTIONS(1474), 1,
      anon_sym_that,
    ACTIONS(224), 4,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
  [23220] = 2,
    ACTIONS(675), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23230] = 2,
    ACTIONS(1319), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23240] = 2,
    ACTIONS(1313), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23250] = 2,
    ACTIONS(1313), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23260] = 2,
    ACTIONS(675), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23270] = 2,
    ACTIONS(673), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23280] = 3,
    ACTIONS(1476), 1,
      anon_sym_and,
    STATE(748), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(352), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23292] = 3,
    ACTIONS(1468), 1,
      anon_sym_DOT,
    ACTIONS(1478), 2,
      sym__non_zero,
      sym__zero,
    STATE(23), 2,
      aux_sym__digits,
      sym__digit,
  [23304] = 3,
    ACTIONS(1460), 1,
      anon_sym_and,
    STATE(750), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(469), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23316] = 2,
    ACTIONS(1299), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23326] = 3,
    ACTIONS(1460), 1,
      anon_sym_and,
    STATE(715), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(356), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23338] = 2,
    ACTIONS(671), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23348] = 2,
    ACTIONS(1325), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23358] = 2,
    ACTIONS(1323), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23368] = 2,
    ACTIONS(1337), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23378] = 2,
    ACTIONS(1299), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23388] = 2,
    ACTIONS(1315), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23398] = 2,
    ACTIONS(1317), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23408] = 2,
    ACTIONS(1329), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23418] = 2,
    ACTIONS(1315), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23428] = 3,
    ACTIONS(1476), 1,
      anon_sym_and,
    STATE(780), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(443), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23440] = 2,
    ACTIONS(1317), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23450] = 3,
    ACTIONS(1480), 1,
      anon_sym_and,
    STATE(750), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(242), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23462] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(956), 1,
      sym_ontology,
    STATE(840), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [23476] = 3,
    ACTIONS(1485), 1,
      anon_sym_SLASH,
    STATE(752), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1483), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [23488] = 3,
    ACTIONS(1468), 1,
      anon_sym_DOT,
    ACTIONS(1488), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
  [23500] = 4,
    ACTIONS(1295), 1,
      sym__pn_local,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(761), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(340), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23514] = 2,
    ACTIONS(1325), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23524] = 3,
    ACTIONS(1494), 1,
      anon_sym_DOT,
    ACTIONS(1492), 2,
      sym__non_zero,
      sym__zero,
    STATE(479), 2,
      aux_sym__digits,
      sym__digit,
  [23536] = 2,
    ACTIONS(1339), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23546] = 2,
    ACTIONS(1323), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23556] = 2,
    ACTIONS(1321), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23566] = 4,
    ACTIONS(1306), 1,
      sym__pn_local,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(771), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23580] = 4,
    ACTIONS(1306), 1,
      sym__pn_local,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(788), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(336), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23594] = 2,
    ACTIONS(1319), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23604] = 2,
    ACTIONS(1337), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23614] = 3,
    ACTIONS(1498), 1,
      anon_sym_DOT,
    ACTIONS(1496), 2,
      sym__non_zero,
      sym__zero,
    STATE(443), 2,
      aux_sym__digits,
      sym__digit,
  [23626] = 2,
    ACTIONS(1319), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23636] = 2,
    ACTIONS(1335), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23646] = 2,
    ACTIONS(1311), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23656] = 2,
    ACTIONS(1317), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23666] = 2,
    ACTIONS(1339), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23676] = 2,
    ACTIONS(1315), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23686] = 4,
    ACTIONS(1304), 1,
      sym__pn_local,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(788), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23700] = 2,
    ACTIONS(1311), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23710] = 2,
    ACTIONS(677), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23720] = 2,
    ACTIONS(1313), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23730] = 2,
    ACTIONS(671), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23740] = 2,
    ACTIONS(1339), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23750] = 2,
    ACTIONS(1321), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23760] = 2,
    ACTIONS(677), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23770] = 2,
    ACTIONS(673), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23780] = 3,
    ACTIONS(1500), 1,
      anon_sym_and,
    STATE(780), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(226), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [23792] = 2,
    ACTIONS(1299), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23802] = 3,
    ACTIONS(1505), 1,
      anon_sym_DOT,
    ACTIONS(1503), 2,
      sym__non_zero,
      sym__zero,
    STATE(295), 2,
      aux_sym__digits,
      sym__digit,
  [23814] = 2,
    ACTIONS(1329), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23824] = 2,
    ACTIONS(1327), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23834] = 2,
    ACTIONS(1335), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23844] = 2,
    ACTIONS(1329), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23854] = 2,
    ACTIONS(675), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23864] = 4,
    ACTIONS(1299), 1,
      sym__pn_local,
    ACTIONS(1507), 1,
      anon_sym_COMMA,
    STATE(788), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(144), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23878] = 2,
    ACTIONS(677), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23888] = 2,
    ACTIONS(1510), 2,
      sym__non_zero,
      sym__zero,
    STATE(614), 2,
      aux_sym__digits,
      sym__digit,
  [23897] = 2,
    ACTIONS(1512), 2,
      sym__non_zero,
      sym__zero,
    STATE(606), 2,
      aux_sym__digits,
      sym__digit,
  [23906] = 2,
    ACTIONS(1514), 2,
      sym__non_zero,
      sym__zero,
    STATE(312), 2,
      aux_sym__digits,
      sym__digit,
  [23915] = 2,
    ACTIONS(1516), 2,
      sym__non_zero,
      sym__zero,
    STATE(313), 2,
      aux_sym__digits,
      sym__digit,
  [23924] = 2,
    ACTIONS(1518), 2,
      sym__non_zero,
      sym__zero,
    STATE(518), 2,
      aux_sym__digits,
      sym__digit,
  [23933] = 3,
    ACTIONS(1520), 1,
      anon_sym_or,
    STATE(795), 1,
      aux_sym_description_repeat1,
    ACTIONS(266), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23944] = 2,
    ACTIONS(1299), 1,
      sym__pn_local,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23953] = 2,
    ACTIONS(677), 1,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23962] = 4,
    ACTIONS(1523), 1,
      sym__non_zero,
    ACTIONS(1525), 1,
      sym__zero,
    STATE(10), 1,
      sym_non_negative_integer,
    STATE(99), 1,
      sym__positive_integer,
  [23975] = 2,
    ACTIONS(1329), 1,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23984] = 2,
    ACTIONS(1325), 1,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23993] = 2,
    ACTIONS(1527), 2,
      sym__non_zero,
      sym__zero,
    STATE(623), 2,
      aux_sym__digits,
      sym__digit,
  [24002] = 2,
    ACTIONS(1529), 2,
      sym__non_zero,
      sym__zero,
    STATE(400), 2,
      aux_sym__digits,
      sym__digit,
  [24011] = 4,
    ACTIONS(1531), 1,
      sym__non_zero,
    ACTIONS(1533), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(53), 1,
      sym__positive_integer,
  [24024] = 2,
    ACTIONS(813), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1347), 2,
      anon_sym_inverse,
      sym__pn_local,
  [24033] = 2,
    ACTIONS(1535), 2,
      sym__non_zero,
      sym__zero,
    STATE(399), 2,
      aux_sym__digits,
      sym__digit,
  [24042] = 2,
    ACTIONS(1323), 1,
      sym__pn_local,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24051] = 2,
    ACTIONS(1537), 2,
      sym__non_zero,
      sym__zero,
    STATE(83), 2,
      aux_sym__digits,
      sym__digit,
  [24060] = 2,
    ACTIONS(1539), 2,
      sym__non_zero,
      sym__zero,
    STATE(80), 2,
      aux_sym__digits,
      sym__digit,
  [24069] = 2,
    ACTIONS(1541), 2,
      sym__non_zero,
      sym__zero,
    STATE(630), 2,
      aux_sym__digits,
      sym__digit,
  [24078] = 2,
    ACTIONS(1313), 1,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24087] = 2,
    ACTIONS(1543), 2,
      sym__non_zero,
      sym__zero,
    STATE(637), 2,
      aux_sym__digits,
      sym__digit,
  [24096] = 2,
    ACTIONS(1545), 2,
      sym__non_zero,
      sym__zero,
    STATE(471), 2,
      aux_sym__digits,
      sym__digit,
  [24105] = 2,
    ACTIONS(1547), 2,
      sym__non_zero,
      sym__zero,
    STATE(472), 2,
      aux_sym__digits,
      sym__digit,
  [24114] = 2,
    ACTIONS(1549), 2,
      sym__non_zero,
      sym__zero,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [24123] = 2,
    ACTIONS(1551), 2,
      sym__non_zero,
      sym__zero,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
  [24132] = 2,
    ACTIONS(1553), 2,
      sym__non_zero,
      sym__zero,
    STATE(644), 2,
      aux_sym__digits,
      sym__digit,
  [24141] = 2,
    ACTIONS(1319), 1,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24150] = 2,
    ACTIONS(1555), 2,
      sym__non_zero,
      sym__zero,
    STATE(642), 2,
      aux_sym__digits,
      sym__digit,
  [24159] = 2,
    ACTIONS(1557), 2,
      sym__non_zero,
      sym__zero,
    STATE(691), 2,
      aux_sym__digits,
      sym__digit,
  [24168] = 4,
    ACTIONS(1559), 1,
      sym__non_zero,
    ACTIONS(1561), 1,
      sym__zero,
    STATE(9), 1,
      sym_non_negative_integer,
    STATE(73), 1,
      sym__positive_integer,
  [24181] = 2,
    ACTIONS(1563), 2,
      sym__non_zero,
      sym__zero,
    STATE(618), 2,
      aux_sym__digits,
      sym__digit,
  [24190] = 2,
    ACTIONS(1327), 1,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24199] = 2,
    ACTIONS(1337), 1,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24208] = 2,
    ACTIONS(1565), 2,
      sym__non_zero,
      sym__zero,
    STATE(31), 2,
      aux_sym__digits,
      sym__digit,
  [24217] = 2,
    ACTIONS(1339), 1,
      sym__pn_local,
    ACTIONS(146), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24226] = 2,
    ACTIONS(813), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1347), 2,
      anon_sym_not,
      sym__pn_local,
  [24235] = 2,
    ACTIONS(1311), 1,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24244] = 2,
    ACTIONS(1335), 1,
      sym__pn_local,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24253] = 2,
    ACTIONS(1567), 2,
      sym__non_zero,
      sym__zero,
    STATE(627), 2,
      aux_sym__digits,
      sym__digit,
  [24262] = 2,
    ACTIONS(1317), 1,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24271] = 2,
    ACTIONS(1569), 2,
      sym__non_zero,
      sym__zero,
    STATE(622), 2,
      aux_sym__digits,
      sym__digit,
  [24280] = 2,
    ACTIONS(1315), 1,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24289] = 2,
    ACTIONS(1321), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24298] = 2,
    ACTIONS(675), 1,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24307] = 2,
    ACTIONS(1571), 2,
      sym__non_zero,
      sym__zero,
    STATE(488), 2,
      aux_sym__digits,
      sym__digit,
  [24316] = 2,
    ACTIONS(1573), 2,
      sym__non_zero,
      sym__zero,
    STATE(620), 2,
      aux_sym__digits,
      sym__digit,
  [24325] = 2,
    ACTIONS(1575), 2,
      sym__non_zero,
      sym__zero,
    STATE(603), 2,
      aux_sym__digits,
      sym__digit,
  [24334] = 2,
    ACTIONS(673), 1,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24343] = 2,
    ACTIONS(671), 1,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24352] = 3,
    ACTIONS(1577), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(1579), 1,
      anon_sym_Prefix_COLON,
    STATE(840), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [24363] = 2,
    ACTIONS(1582), 2,
      sym__non_zero,
      sym__zero,
    STATE(611), 2,
      aux_sym__digits,
      sym__digit,
  [24372] = 2,
    ACTIONS(1584), 2,
      sym__non_zero,
      sym__zero,
    STATE(485), 2,
      aux_sym__digits,
      sym__digit,
  [24381] = 2,
    ACTIONS(1586), 2,
      sym__non_zero,
      sym__zero,
    STATE(402), 2,
      aux_sym__digits,
      sym__digit,
  [24390] = 1,
    ACTIONS(1483), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [24397] = 4,
    ACTIONS(1588), 1,
      sym__iunreserved,
    STATE(869), 1,
      sym__iauthority,
    STATE(893), 1,
      sym__ihost,
    STATE(929), 1,
      sym__iuserinfo,
  [24410] = 2,
    ACTIONS(813), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1347), 2,
      anon_sym__COLON,
      sym__pn_local,
  [24419] = 4,
    ACTIONS(1590), 1,
      sym__non_zero,
    ACTIONS(1592), 1,
      sym__zero,
    STATE(3), 1,
      sym_non_negative_integer,
    STATE(50), 1,
      sym__positive_integer,
  [24432] = 3,
    ACTIONS(1594), 1,
      anon_sym_or,
    STATE(795), 1,
      aux_sym_description_repeat1,
    ACTIONS(503), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24443] = 2,
    ACTIONS(1596), 2,
      sym__non_zero,
      sym__zero,
    STATE(390), 2,
      aux_sym__digits,
      sym__digit,
  [24452] = 4,
    ACTIONS(1598), 1,
      sym__non_zero,
    ACTIONS(1600), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(45), 1,
      sym__positive_integer,
  [24465] = 2,
    ACTIONS(1602), 2,
      sym__non_zero,
      sym__zero,
    STATE(608), 2,
      aux_sym__digits,
      sym__digit,
  [24474] = 2,
    ACTIONS(1604), 2,
      sym__non_zero,
      sym__zero,
    STATE(469), 2,
      aux_sym__digits,
      sym__digit,
  [24483] = 2,
    ACTIONS(1606), 2,
      sym__non_zero,
      sym__zero,
    STATE(473), 2,
      aux_sym__digits,
      sym__digit,
  [24492] = 4,
    ACTIONS(1608), 1,
      sym__non_zero,
    ACTIONS(1610), 1,
      sym__zero,
    STATE(63), 1,
      sym_non_negative_integer,
    STATE(451), 1,
      sym__positive_integer,
  [24505] = 3,
    ACTIONS(1594), 1,
      anon_sym_or,
    STATE(848), 1,
      aux_sym_description_repeat1,
    ACTIONS(489), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24516] = 3,
    ACTIONS(1331), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1612), 1,
      anon_sym_Functional,
    STATE(922), 1,
      sym_annotations,
  [24526] = 3,
    ACTIONS(1614), 1,
      anon_sym_RBRACE,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    STATE(867), 1,
      aux_sym_individual_2list_repeat1,
  [24536] = 3,
    ACTIONS(1618), 1,
      anon_sym_GT,
    ACTIONS(1620), 1,
      sym__iquery,
    ACTIONS(1622), 1,
      sym__ifragment,
  [24546] = 3,
    ACTIONS(1624), 1,
      anon_sym_RBRACE,
    ACTIONS(1626), 1,
      anon_sym_COMMA,
    STATE(859), 1,
      aux_sym_literal_list_repeat1,
  [24556] = 3,
    ACTIONS(1629), 1,
      anon_sym_RBRACE,
    ACTIONS(1631), 1,
      anon_sym_COMMA,
    STATE(859), 1,
      aux_sym_literal_list_repeat1,
  [24566] = 3,
    ACTIONS(1633), 1,
      anon_sym_COMMA,
    ACTIONS(1635), 1,
      anon_sym_RBRACK,
    STATE(862), 1,
      aux_sym_datatype_restriction_repeat1,
  [24576] = 3,
    ACTIONS(1633), 1,
      anon_sym_COMMA,
    ACTIONS(1637), 1,
      anon_sym_RBRACK,
    STATE(863), 1,
      aux_sym_datatype_restriction_repeat1,
  [24586] = 3,
    ACTIONS(1639), 1,
      anon_sym_COMMA,
    ACTIONS(1642), 1,
      anon_sym_RBRACK,
    STATE(863), 1,
      aux_sym_datatype_restriction_repeat1,
  [24596] = 2,
    ACTIONS(1347), 1,
      sym__pn_local,
    ACTIONS(813), 2,
      anon_sym_LT,
      sym__pname_ln,
  [24604] = 3,
    ACTIONS(1631), 1,
      anon_sym_COMMA,
    ACTIONS(1644), 1,
      anon_sym_RBRACE,
    STATE(860), 1,
      aux_sym_literal_list_repeat1,
  [24614] = 2,
    ACTIONS(1648), 1,
      anon_sym_AT,
    ACTIONS(1646), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [24622] = 3,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    ACTIONS(1650), 1,
      anon_sym_RBRACE,
    STATE(868), 1,
      aux_sym_individual_2list_repeat1,
  [24632] = 3,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    ACTIONS(1652), 1,
      anon_sym_COMMA,
    STATE(868), 1,
      aux_sym_individual_2list_repeat1,
  [24642] = 2,
    ACTIONS(1464), 1,
      anon_sym_SLASH,
    STATE(719), 1,
      aux_sym__ipath_abempty,
  [24649] = 1,
    ACTIONS(1374), 2,
      anon_sym_f,
      anon_sym_F,
  [24654] = 1,
    ACTIONS(1655), 2,
      anon_sym_f,
      anon_sym_F,
  [24659] = 2,
    ACTIONS(1657), 1,
      sym__iunreserved,
    STATE(844), 1,
      sym__isegment,
  [24666] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(937), 1,
      sym__iri_rfc3987,
  [24673] = 2,
    ACTIONS(1661), 1,
      anon_sym_COLON,
    ACTIONS(1663), 1,
      anon_sym_SLASH,
  [24680] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(953), 1,
      sym__iri_rfc3987,
  [24687] = 1,
    ACTIONS(1362), 2,
      anon_sym_f,
      anon_sym_F,
  [24692] = 1,
    ACTIONS(1360), 2,
      anon_sym_f,
      anon_sym_F,
  [24697] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(952), 1,
      sym__iri_rfc3987,
  [24704] = 1,
    ACTIONS(1624), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [24709] = 1,
    ACTIONS(121), 2,
      anon_sym_f,
      anon_sym_F,
  [24714] = 1,
    ACTIONS(1665), 2,
      anon_sym_f,
      anon_sym_F,
  [24719] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(890), 1,
      sym_full_iri,
  [24726] = 1,
    ACTIONS(1667), 2,
      anon_sym_f,
      anon_sym_F,
  [24731] = 1,
    ACTIONS(1669), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [24736] = 1,
    ACTIONS(1364), 2,
      anon_sym_f,
      anon_sym_F,
  [24741] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(947), 1,
      sym__iri_rfc3987,
  [24748] = 1,
    ACTIONS(1366), 2,
      anon_sym_f,
      anon_sym_F,
  [24753] = 1,
    ACTIONS(131), 2,
      anon_sym_f,
      anon_sym_F,
  [24758] = 1,
    ACTIONS(1671), 2,
      anon_sym_f,
      anon_sym_F,
  [24763] = 1,
    ACTIONS(1673), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [24768] = 2,
    ACTIONS(1675), 1,
      anon_sym_SLASH_SLASH,
    STATE(858), 1,
      sym__ihier_part,
  [24775] = 2,
    ACTIONS(1677), 1,
      anon_sym_GT,
    ACTIONS(1679), 1,
      sym__ifragment,
  [24782] = 2,
    ACTIONS(1681), 1,
      anon_sym_COLON,
    ACTIONS(1683), 1,
      anon_sym_SLASH,
  [24789] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(926), 1,
      sym__iri_rfc3987,
  [24796] = 1,
    ACTIONS(1685), 2,
      anon_sym_f,
      anon_sym_F,
  [24801] = 1,
    ACTIONS(1368), 2,
      anon_sym_f,
      anon_sym_F,
  [24806] = 1,
    ACTIONS(1370), 2,
      anon_sym_f,
      anon_sym_F,
  [24811] = 1,
    ACTIONS(1687), 2,
      anon_sym_f,
      anon_sym_F,
  [24816] = 1,
    ACTIONS(1689), 2,
      anon_sym_f,
      anon_sym_F,
  [24821] = 1,
    ACTIONS(1385), 2,
      anon_sym_f,
      anon_sym_F,
  [24826] = 1,
    ACTIONS(1387), 2,
      anon_sym_f,
      anon_sym_F,
  [24831] = 1,
    ACTIONS(1691), 2,
      anon_sym_f,
      anon_sym_F,
  [24836] = 1,
    ACTIONS(1693), 2,
      anon_sym_f,
      anon_sym_F,
  [24841] = 1,
    ACTIONS(1372), 2,
      anon_sym_f,
      anon_sym_F,
  [24846] = 1,
    ACTIONS(1695), 2,
      anon_sym_f,
      anon_sym_F,
  [24851] = 1,
    ACTIONS(1697), 2,
      anon_sym_f,
      anon_sym_F,
  [24856] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(945), 1,
      sym__iri_rfc3987,
  [24863] = 1,
    ACTIONS(1383), 2,
      anon_sym_f,
      anon_sym_F,
  [24868] = 1,
    ACTIONS(1378), 2,
      anon_sym_f,
      anon_sym_F,
  [24873] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(944), 1,
      sym__iri_rfc3987,
  [24880] = 1,
    ACTIONS(85), 2,
      anon_sym_f,
      anon_sym_F,
  [24885] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(940), 1,
      sym__iri_rfc3987,
  [24892] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(919), 1,
      sym__iri_rfc3987,
  [24899] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(930), 1,
      sym__iri_rfc3987,
  [24906] = 1,
    ACTIONS(1699), 2,
      anon_sym_f,
      anon_sym_F,
  [24911] = 2,
    ACTIONS(1659), 1,
      sym__scheme,
    STATE(923), 1,
      sym__iri_rfc3987,
  [24918] = 1,
    ACTIONS(1701), 2,
      anon_sym_f,
      anon_sym_F,
  [24923] = 2,
    ACTIONS(1703), 1,
      sym__iunreserved,
    STATE(874), 1,
      sym__ihost,
  [24930] = 1,
    ACTIONS(1705), 1,
      anon_sym_GT,
  [24934] = 1,
    ACTIONS(1707), 1,
      sym__pn_local,
  [24938] = 1,
    ACTIONS(1709), 1,
      anon_sym_CARET_CARET,
  [24942] = 1,
    ACTIONS(1711), 1,
      anon_sym_Functional,
  [24946] = 1,
    ACTIONS(1713), 1,
      anon_sym_GT,
  [24950] = 1,
    ACTIONS(1715), 1,
      anon_sym_CARET_CARET,
  [24954] = 1,
    ACTIONS(1717), 1,
      sym__pn_local,
  [24958] = 1,
    ACTIONS(1719), 1,
      anon_sym_GT,
  [24962] = 1,
    ACTIONS(1721), 1,
      sym__pn_local,
  [24966] = 1,
    ACTIONS(1723), 1,
      anon_sym_CARET_CARET,
  [24970] = 1,
    ACTIONS(1725), 1,
      anon_sym_AT,
  [24974] = 1,
    ACTIONS(1727), 1,
      anon_sym_GT,
  [24978] = 1,
    ACTIONS(1729), 1,
      sym_prefix_name,
  [24982] = 1,
    ACTIONS(1731), 1,
      anon_sym_RPAREN,
  [24986] = 1,
    ACTIONS(1731), 1,
      anon_sym_RBRACE,
  [24990] = 1,
    ACTIONS(1733), 1,
      anon_sym_CARET_CARET,
  [24994] = 1,
    ACTIONS(1735), 1,
      sym__pn_local,
  [24998] = 1,
    ACTIONS(1737), 1,
      anon_sym_CARET_CARET,
  [25002] = 1,
    ACTIONS(1739), 1,
      anon_sym_GT,
  [25006] = 1,
    ACTIONS(1741), 1,
      anon_sym_CARET_CARET,
  [25010] = 1,
    ACTIONS(1677), 1,
      anon_sym_GT,
  [25014] = 1,
    ACTIONS(1743), 1,
      anon_sym_GT,
  [25018] = 1,
    ACTIONS(1745), 1,
      anon_sym_COMMA,
  [25022] = 1,
    ACTIONS(1747), 1,
      anon_sym_COMMA,
  [25026] = 1,
    ACTIONS(1749), 1,
      anon_sym_COMMA,
  [25030] = 1,
    ACTIONS(1751), 1,
      anon_sym_GT,
  [25034] = 1,
    ACTIONS(1753), 1,
      anon_sym_GT,
  [25038] = 1,
    ACTIONS(1755), 1,
      anon_sym_COMMA,
  [25042] = 1,
    ACTIONS(1757), 1,
      anon_sym_GT,
  [25046] = 1,
    ACTIONS(1759), 1,
      anon_sym_value,
  [25050] = 1,
    ACTIONS(1761), 1,
      anon_sym_CARET_CARET,
  [25054] = 1,
    ACTIONS(1763), 1,
      sym__pn_local,
  [25058] = 1,
    ACTIONS(1765), 1,
      sym__pn_local,
  [25062] = 1,
    ACTIONS(1767), 1,
      anon_sym_GT,
  [25066] = 1,
    ACTIONS(1769), 1,
      anon_sym_GT,
  [25070] = 1,
    ACTIONS(1771), 1,
      anon_sym_COLON,
  [25074] = 1,
    ACTIONS(1773), 1,
      anon_sym_RBRACE,
  [25078] = 1,
    ACTIONS(1775), 1,
      ts_builtin_sym_end,
  [25082] = 1,
    ACTIONS(1773), 1,
      anon_sym_RPAREN,
  [25086] = 1,
    ACTIONS(1777), 1,
      sym__port,
  [25090] = 1,
    ACTIONS(1779), 1,
      anon_sym_GT,
  [25094] = 1,
    ACTIONS(1781), 1,
      anon_sym_SLASH,
  [25098] = 1,
    ACTIONS(1663), 1,
      anon_sym_SLASH,
  [25102] = 1,
    ACTIONS(1783), 1,
      anon_sym_CARET_CARET,
  [25106] = 1,
    ACTIONS(1785), 1,
      anon_sym_COMMA,
  [25110] = 1,
    ACTIONS(1787), 1,
      sym__port,
  [25114] = 1,
    ACTIONS(1789), 1,
      sym__pn_local,
  [25118] = 1,
    ACTIONS(1791), 1,
      ts_builtin_sym_end,
  [25122] = 1,
    ACTIONS(1793), 1,
      ts_builtin_sym_end,
  [25126] = 1,
    ACTIONS(1795), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 353,
  [SMALL_STATE(7)] = 406,
  [SMALL_STATE(8)] = 459,
  [SMALL_STATE(9)] = 512,
  [SMALL_STATE(10)] = 609,
  [SMALL_STATE(11)] = 701,
  [SMALL_STATE(12)] = 752,
  [SMALL_STATE(13)] = 798,
  [SMALL_STATE(14)] = 843,
  [SMALL_STATE(15)] = 888,
  [SMALL_STATE(16)] = 941,
  [SMALL_STATE(17)] = 986,
  [SMALL_STATE(18)] = 1031,
  [SMALL_STATE(19)] = 1076,
  [SMALL_STATE(20)] = 1121,
  [SMALL_STATE(21)] = 1166,
  [SMALL_STATE(22)] = 1211,
  [SMALL_STATE(23)] = 1259,
  [SMALL_STATE(24)] = 1317,
  [SMALL_STATE(25)] = 1361,
  [SMALL_STATE(26)] = 1419,
  [SMALL_STATE(27)] = 1468,
  [SMALL_STATE(28)] = 1517,
  [SMALL_STATE(29)] = 1566,
  [SMALL_STATE(30)] = 1621,
  [SMALL_STATE(31)] = 1670,
  [SMALL_STATE(32)] = 1725,
  [SMALL_STATE(33)] = 1772,
  [SMALL_STATE(34)] = 1819,
  [SMALL_STATE(35)] = 1866,
  [SMALL_STATE(36)] = 1906,
  [SMALL_STATE(37)] = 1952,
  [SMALL_STATE(38)] = 1992,
  [SMALL_STATE(39)] = 2032,
  [SMALL_STATE(40)] = 2078,
  [SMALL_STATE(41)] = 2118,
  [SMALL_STATE(42)] = 2164,
  [SMALL_STATE(43)] = 2209,
  [SMALL_STATE(44)] = 2254,
  [SMALL_STATE(45)] = 2299,
  [SMALL_STATE(46)] = 2340,
  [SMALL_STATE(47)] = 2419,
  [SMALL_STATE(48)] = 2498,
  [SMALL_STATE(49)] = 2537,
  [SMALL_STATE(50)] = 2574,
  [SMALL_STATE(51)] = 2613,
  [SMALL_STATE(52)] = 2649,
  [SMALL_STATE(53)] = 2705,
  [SMALL_STATE(54)] = 2743,
  [SMALL_STATE(55)] = 2779,
  [SMALL_STATE(56)] = 2815,
  [SMALL_STATE(57)] = 2851,
  [SMALL_STATE(58)] = 2887,
  [SMALL_STATE(59)] = 2923,
  [SMALL_STATE(60)] = 2959,
  [SMALL_STATE(61)] = 2995,
  [SMALL_STATE(62)] = 3031,
  [SMALL_STATE(63)] = 3067,
  [SMALL_STATE(64)] = 3147,
  [SMALL_STATE(65)] = 3183,
  [SMALL_STATE(66)] = 3219,
  [SMALL_STATE(67)] = 3255,
  [SMALL_STATE(68)] = 3291,
  [SMALL_STATE(69)] = 3347,
  [SMALL_STATE(70)] = 3403,
  [SMALL_STATE(71)] = 3489,
  [SMALL_STATE(72)] = 3525,
  [SMALL_STATE(73)] = 3561,
  [SMALL_STATE(74)] = 3598,
  [SMALL_STATE(75)] = 3633,
  [SMALL_STATE(76)] = 3683,
  [SMALL_STATE(77)] = 3733,
  [SMALL_STATE(78)] = 3773,
  [SMALL_STATE(79)] = 3813,
  [SMALL_STATE(80)] = 3853,
  [SMALL_STATE(81)] = 3900,
  [SMALL_STATE(82)] = 3933,
  [SMALL_STATE(83)] = 3972,
  [SMALL_STATE(84)] = 4019,
  [SMALL_STATE(85)] = 4052,
  [SMALL_STATE(86)] = 4124,
  [SMALL_STATE(87)] = 4196,
  [SMALL_STATE(88)] = 4268,
  [SMALL_STATE(89)] = 4340,
  [SMALL_STATE(90)] = 4412,
  [SMALL_STATE(91)] = 4484,
  [SMALL_STATE(92)] = 4550,
  [SMALL_STATE(93)] = 4581,
  [SMALL_STATE(94)] = 4642,
  [SMALL_STATE(95)] = 4703,
  [SMALL_STATE(96)] = 4764,
  [SMALL_STATE(97)] = 4825,
  [SMALL_STATE(98)] = 4859,
  [SMALL_STATE(99)] = 4893,
  [SMALL_STATE(100)] = 4925,
  [SMALL_STATE(101)] = 4959,
  [SMALL_STATE(102)] = 4993,
  [SMALL_STATE(103)] = 5027,
  [SMALL_STATE(104)] = 5058,
  [SMALL_STATE(105)] = 5091,
  [SMALL_STATE(106)] = 5124,
  [SMALL_STATE(107)] = 5189,
  [SMALL_STATE(108)] = 5254,
  [SMALL_STATE(109)] = 5319,
  [SMALL_STATE(110)] = 5384,
  [SMALL_STATE(111)] = 5417,
  [SMALL_STATE(112)] = 5450,
  [SMALL_STATE(113)] = 5483,
  [SMALL_STATE(114)] = 5540,
  [SMALL_STATE(115)] = 5605,
  [SMALL_STATE(116)] = 5670,
  [SMALL_STATE(117)] = 5727,
  [SMALL_STATE(118)] = 5784,
  [SMALL_STATE(119)] = 5841,
  [SMALL_STATE(120)] = 5898,
  [SMALL_STATE(121)] = 5955,
  [SMALL_STATE(122)] = 5988,
  [SMALL_STATE(123)] = 6045,
  [SMALL_STATE(124)] = 6102,
  [SMALL_STATE(125)] = 6135,
  [SMALL_STATE(126)] = 6168,
  [SMALL_STATE(127)] = 6225,
  [SMALL_STATE(128)] = 6257,
  [SMALL_STATE(129)] = 6325,
  [SMALL_STATE(130)] = 6393,
  [SMALL_STATE(131)] = 6425,
  [SMALL_STATE(132)] = 6493,
  [SMALL_STATE(133)] = 6561,
  [SMALL_STATE(134)] = 6593,
  [SMALL_STATE(135)] = 6625,
  [SMALL_STATE(136)] = 6679,
  [SMALL_STATE(137)] = 6707,
  [SMALL_STATE(138)] = 6775,
  [SMALL_STATE(139)] = 6829,
  [SMALL_STATE(140)] = 6897,
  [SMALL_STATE(141)] = 6951,
  [SMALL_STATE(142)] = 6983,
  [SMALL_STATE(143)] = 7037,
  [SMALL_STATE(144)] = 7069,
  [SMALL_STATE(145)] = 7097,
  [SMALL_STATE(146)] = 7128,
  [SMALL_STATE(147)] = 7159,
  [SMALL_STATE(148)] = 7190,
  [SMALL_STATE(149)] = 7221,
  [SMALL_STATE(150)] = 7252,
  [SMALL_STATE(151)] = 7317,
  [SMALL_STATE(152)] = 7348,
  [SMALL_STATE(153)] = 7379,
  [SMALL_STATE(154)] = 7410,
  [SMALL_STATE(155)] = 7441,
  [SMALL_STATE(156)] = 7468,
  [SMALL_STATE(157)] = 7533,
  [SMALL_STATE(158)] = 7564,
  [SMALL_STATE(159)] = 7595,
  [SMALL_STATE(160)] = 7626,
  [SMALL_STATE(161)] = 7655,
  [SMALL_STATE(162)] = 7686,
  [SMALL_STATE(163)] = 7717,
  [SMALL_STATE(164)] = 7748,
  [SMALL_STATE(165)] = 7813,
  [SMALL_STATE(166)] = 7844,
  [SMALL_STATE(167)] = 7909,
  [SMALL_STATE(168)] = 7940,
  [SMALL_STATE(169)] = 7969,
  [SMALL_STATE(170)] = 8000,
  [SMALL_STATE(171)] = 8031,
  [SMALL_STATE(172)] = 8062,
  [SMALL_STATE(173)] = 8093,
  [SMALL_STATE(174)] = 8154,
  [SMALL_STATE(175)] = 8185,
  [SMALL_STATE(176)] = 8216,
  [SMALL_STATE(177)] = 8247,
  [SMALL_STATE(178)] = 8278,
  [SMALL_STATE(179)] = 8309,
  [SMALL_STATE(180)] = 8340,
  [SMALL_STATE(181)] = 8371,
  [SMALL_STATE(182)] = 8402,
  [SMALL_STATE(183)] = 8433,
  [SMALL_STATE(184)] = 8464,
  [SMALL_STATE(185)] = 8490,
  [SMALL_STATE(186)] = 8518,
  [SMALL_STATE(187)] = 8556,
  [SMALL_STATE(188)] = 8584,
  [SMALL_STATE(189)] = 8610,
  [SMALL_STATE(190)] = 8636,
  [SMALL_STATE(191)] = 8666,
  [SMALL_STATE(192)] = 8724,
  [SMALL_STATE(193)] = 8750,
  [SMALL_STATE(194)] = 8776,
  [SMALL_STATE(195)] = 8838,
  [SMALL_STATE(196)] = 8868,
  [SMALL_STATE(197)] = 8894,
  [SMALL_STATE(198)] = 8920,
  [SMALL_STATE(199)] = 8958,
  [SMALL_STATE(200)] = 9016,
  [SMALL_STATE(201)] = 9046,
  [SMALL_STATE(202)] = 9076,
  [SMALL_STATE(203)] = 9104,
  [SMALL_STATE(204)] = 9134,
  [SMALL_STATE(205)] = 9164,
  [SMALL_STATE(206)] = 9190,
  [SMALL_STATE(207)] = 9248,
  [SMALL_STATE(208)] = 9278,
  [SMALL_STATE(209)] = 9304,
  [SMALL_STATE(210)] = 9334,
  [SMALL_STATE(211)] = 9360,
  [SMALL_STATE(212)] = 9390,
  [SMALL_STATE(213)] = 9452,
  [SMALL_STATE(214)] = 9490,
  [SMALL_STATE(215)] = 9518,
  [SMALL_STATE(216)] = 9546,
  [SMALL_STATE(217)] = 9574,
  [SMALL_STATE(218)] = 9602,
  [SMALL_STATE(219)] = 9632,
  [SMALL_STATE(220)] = 9662,
  [SMALL_STATE(221)] = 9688,
  [SMALL_STATE(222)] = 9716,
  [SMALL_STATE(223)] = 9763,
  [SMALL_STATE(224)] = 9822,
  [SMALL_STATE(225)] = 9851,
  [SMALL_STATE(226)] = 9880,
  [SMALL_STATE(227)] = 9909,
  [SMALL_STATE(228)] = 9938,
  [SMALL_STATE(229)] = 9985,
  [SMALL_STATE(230)] = 10032,
  [SMALL_STATE(231)] = 10061,
  [SMALL_STATE(232)] = 10120,
  [SMALL_STATE(233)] = 10149,
  [SMALL_STATE(234)] = 10208,
  [SMALL_STATE(235)] = 10255,
  [SMALL_STATE(236)] = 10284,
  [SMALL_STATE(237)] = 10313,
  [SMALL_STATE(238)] = 10342,
  [SMALL_STATE(239)] = 10371,
  [SMALL_STATE(240)] = 10396,
  [SMALL_STATE(241)] = 10425,
  [SMALL_STATE(242)] = 10484,
  [SMALL_STATE(243)] = 10531,
  [SMALL_STATE(244)] = 10560,
  [SMALL_STATE(245)] = 10619,
  [SMALL_STATE(246)] = 10678,
  [SMALL_STATE(247)] = 10737,
  [SMALL_STATE(248)] = 10766,
  [SMALL_STATE(249)] = 10795,
  [SMALL_STATE(250)] = 10824,
  [SMALL_STATE(251)] = 10851,
  [SMALL_STATE(252)] = 10910,
  [SMALL_STATE(253)] = 10939,
  [SMALL_STATE(254)] = 10968,
  [SMALL_STATE(255)] = 11015,
  [SMALL_STATE(256)] = 11074,
  [SMALL_STATE(257)] = 11133,
  [SMALL_STATE(258)] = 11162,
  [SMALL_STATE(259)] = 11191,
  [SMALL_STATE(260)] = 11220,
  [SMALL_STATE(261)] = 11249,
  [SMALL_STATE(262)] = 11278,
  [SMALL_STATE(263)] = 11337,
  [SMALL_STATE(264)] = 11396,
  [SMALL_STATE(265)] = 11425,
  [SMALL_STATE(266)] = 11454,
  [SMALL_STATE(267)] = 11483,
  [SMALL_STATE(268)] = 11512,
  [SMALL_STATE(269)] = 11571,
  [SMALL_STATE(270)] = 11607,
  [SMALL_STATE(271)] = 11635,
  [SMALL_STATE(272)] = 11663,
  [SMALL_STATE(273)] = 11691,
  [SMALL_STATE(274)] = 11719,
  [SMALL_STATE(275)] = 11775,
  [SMALL_STATE(276)] = 11803,
  [SMALL_STATE(277)] = 11831,
  [SMALL_STATE(278)] = 11857,
  [SMALL_STATE(279)] = 11909,
  [SMALL_STATE(280)] = 11937,
  [SMALL_STATE(281)] = 11993,
  [SMALL_STATE(282)] = 12045,
  [SMALL_STATE(283)] = 12097,
  [SMALL_STATE(284)] = 12125,
  [SMALL_STATE(285)] = 12153,
  [SMALL_STATE(286)] = 12209,
  [SMALL_STATE(287)] = 12237,
  [SMALL_STATE(288)] = 12289,
  [SMALL_STATE(289)] = 12345,
  [SMALL_STATE(290)] = 12369,
  [SMALL_STATE(291)] = 12393,
  [SMALL_STATE(292)] = 12417,
  [SMALL_STATE(293)] = 12469,
  [SMALL_STATE(294)] = 12493,
  [SMALL_STATE(295)] = 12529,
  [SMALL_STATE(296)] = 12567,
  [SMALL_STATE(297)] = 12605,
  [SMALL_STATE(298)] = 12629,
  [SMALL_STATE(299)] = 12685,
  [SMALL_STATE(300)] = 12711,
  [SMALL_STATE(301)] = 12737,
  [SMALL_STATE(302)] = 12763,
  [SMALL_STATE(303)] = 12799,
  [SMALL_STATE(304)] = 12827,
  [SMALL_STATE(305)] = 12883,
  [SMALL_STATE(306)] = 12910,
  [SMALL_STATE(307)] = 12937,
  [SMALL_STATE(308)] = 12990,
  [SMALL_STATE(309)] = 13017,
  [SMALL_STATE(310)] = 13040,
  [SMALL_STATE(311)] = 13073,
  [SMALL_STATE(312)] = 13100,
  [SMALL_STATE(313)] = 13135,
  [SMALL_STATE(314)] = 13170,
  [SMALL_STATE(315)] = 13197,
  [SMALL_STATE(316)] = 13250,
  [SMALL_STATE(317)] = 13277,
  [SMALL_STATE(318)] = 13306,
  [SMALL_STATE(319)] = 13333,
  [SMALL_STATE(320)] = 13360,
  [SMALL_STATE(321)] = 13387,
  [SMALL_STATE(322)] = 13414,
  [SMALL_STATE(323)] = 13441,
  [SMALL_STATE(324)] = 13468,
  [SMALL_STATE(325)] = 13501,
  [SMALL_STATE(326)] = 13528,
  [SMALL_STATE(327)] = 13555,
  [SMALL_STATE(328)] = 13608,
  [SMALL_STATE(329)] = 13635,
  [SMALL_STATE(330)] = 13668,
  [SMALL_STATE(331)] = 13691,
  [SMALL_STATE(332)] = 13744,
  [SMALL_STATE(333)] = 13771,
  [SMALL_STATE(334)] = 13824,
  [SMALL_STATE(335)] = 13851,
  [SMALL_STATE(336)] = 13900,
  [SMALL_STATE(337)] = 13927,
  [SMALL_STATE(338)] = 13950,
  [SMALL_STATE(339)] = 13977,
  [SMALL_STATE(340)] = 14030,
  [SMALL_STATE(341)] = 14057,
  [SMALL_STATE(342)] = 14079,
  [SMALL_STATE(343)] = 14107,
  [SMALL_STATE(344)] = 14135,
  [SMALL_STATE(345)] = 14161,
  [SMALL_STATE(346)] = 14187,
  [SMALL_STATE(347)] = 14213,
  [SMALL_STATE(348)] = 14259,
  [SMALL_STATE(349)] = 14287,
  [SMALL_STATE(350)] = 14309,
  [SMALL_STATE(351)] = 14335,
  [SMALL_STATE(352)] = 14357,
  [SMALL_STATE(353)] = 14379,
  [SMALL_STATE(354)] = 14401,
  [SMALL_STATE(355)] = 14427,
  [SMALL_STATE(356)] = 14459,
  [SMALL_STATE(357)] = 14485,
  [SMALL_STATE(358)] = 14511,
  [SMALL_STATE(359)] = 14533,
  [SMALL_STATE(360)] = 14559,
  [SMALL_STATE(361)] = 14585,
  [SMALL_STATE(362)] = 14611,
  [SMALL_STATE(363)] = 14639,
  [SMALL_STATE(364)] = 14661,
  [SMALL_STATE(365)] = 14693,
  [SMALL_STATE(366)] = 14725,
  [SMALL_STATE(367)] = 14747,
  [SMALL_STATE(368)] = 14769,
  [SMALL_STATE(369)] = 14791,
  [SMALL_STATE(370)] = 14838,
  [SMALL_STATE(371)] = 14867,
  [SMALL_STATE(372)] = 14902,
  [SMALL_STATE(373)] = 14949,
  [SMALL_STATE(374)] = 14978,
  [SMALL_STATE(375)] = 15013,
  [SMALL_STATE(376)] = 15034,
  [SMALL_STATE(377)] = 15055,
  [SMALL_STATE(378)] = 15084,
  [SMALL_STATE(379)] = 15119,
  [SMALL_STATE(380)] = 15140,
  [SMALL_STATE(381)] = 15187,
  [SMALL_STATE(382)] = 15234,
  [SMALL_STATE(383)] = 15255,
  [SMALL_STATE(384)] = 15276,
  [SMALL_STATE(385)] = 15323,
  [SMALL_STATE(386)] = 15370,
  [SMALL_STATE(387)] = 15405,
  [SMALL_STATE(388)] = 15429,
  [SMALL_STATE(389)] = 15465,
  [SMALL_STATE(390)] = 15489,
  [SMALL_STATE(391)] = 15521,
  [SMALL_STATE(392)] = 15541,
  [SMALL_STATE(393)] = 15567,
  [SMALL_STATE(394)] = 15601,
  [SMALL_STATE(395)] = 15627,
  [SMALL_STATE(396)] = 15661,
  [SMALL_STATE(397)] = 15685,
  [SMALL_STATE(398)] = 15709,
  [SMALL_STATE(399)] = 15733,
  [SMALL_STATE(400)] = 15765,
  [SMALL_STATE(401)] = 15797,
  [SMALL_STATE(402)] = 15821,
  [SMALL_STATE(403)] = 15853,
  [SMALL_STATE(404)] = 15877,
  [SMALL_STATE(405)] = 15917,
  [SMALL_STATE(406)] = 15961,
  [SMALL_STATE(407)] = 15985,
  [SMALL_STATE(408)] = 16007,
  [SMALL_STATE(409)] = 16031,
  [SMALL_STATE(410)] = 16070,
  [SMALL_STATE(411)] = 16093,
  [SMALL_STATE(412)] = 16116,
  [SMALL_STATE(413)] = 16149,
  [SMALL_STATE(414)] = 16174,
  [SMALL_STATE(415)] = 16217,
  [SMALL_STATE(416)] = 16242,
  [SMALL_STATE(417)] = 16275,
  [SMALL_STATE(418)] = 16300,
  [SMALL_STATE(419)] = 16323,
  [SMALL_STATE(420)] = 16348,
  [SMALL_STATE(421)] = 16381,
  [SMALL_STATE(422)] = 16404,
  [SMALL_STATE(423)] = 16437,
  [SMALL_STATE(424)] = 16460,
  [SMALL_STATE(425)] = 16500,
  [SMALL_STATE(426)] = 16540,
  [SMALL_STATE(427)] = 16558,
  [SMALL_STATE(428)] = 16598,
  [SMALL_STATE(429)] = 16620,
  [SMALL_STATE(430)] = 16660,
  [SMALL_STATE(431)] = 16700,
  [SMALL_STATE(432)] = 16740,
  [SMALL_STATE(433)] = 16772,
  [SMALL_STATE(434)] = 16794,
  [SMALL_STATE(435)] = 16816,
  [SMALL_STATE(436)] = 16838,
  [SMALL_STATE(437)] = 16878,
  [SMALL_STATE(438)] = 16900,
  [SMALL_STATE(439)] = 16922,
  [SMALL_STATE(440)] = 16944,
  [SMALL_STATE(441)] = 16966,
  [SMALL_STATE(442)] = 16988,
  [SMALL_STATE(443)] = 17010,
  [SMALL_STATE(444)] = 17042,
  [SMALL_STATE(445)] = 17060,
  [SMALL_STATE(446)] = 17092,
  [SMALL_STATE(447)] = 17110,
  [SMALL_STATE(448)] = 17150,
  [SMALL_STATE(449)] = 17190,
  [SMALL_STATE(450)] = 17212,
  [SMALL_STATE(451)] = 17244,
  [SMALL_STATE(452)] = 17264,
  [SMALL_STATE(453)] = 17286,
  [SMALL_STATE(454)] = 17326,
  [SMALL_STATE(455)] = 17348,
  [SMALL_STATE(456)] = 17370,
  [SMALL_STATE(457)] = 17392,
  [SMALL_STATE(458)] = 17424,
  [SMALL_STATE(459)] = 17456,
  [SMALL_STATE(460)] = 17494,
  [SMALL_STATE(461)] = 17534,
  [SMALL_STATE(462)] = 17556,
  [SMALL_STATE(463)] = 17596,
  [SMALL_STATE(464)] = 17618,
  [SMALL_STATE(465)] = 17640,
  [SMALL_STATE(466)] = 17680,
  [SMALL_STATE(467)] = 17703,
  [SMALL_STATE(468)] = 17726,
  [SMALL_STATE(469)] = 17763,
  [SMALL_STATE(470)] = 17792,
  [SMALL_STATE(471)] = 17829,
  [SMALL_STATE(472)] = 17858,
  [SMALL_STATE(473)] = 17887,
  [SMALL_STATE(474)] = 17916,
  [SMALL_STATE(475)] = 17953,
  [SMALL_STATE(476)] = 17976,
  [SMALL_STATE(477)] = 18013,
  [SMALL_STATE(478)] = 18050,
  [SMALL_STATE(479)] = 18087,
  [SMALL_STATE(480)] = 18118,
  [SMALL_STATE(481)] = 18155,
  [SMALL_STATE(482)] = 18186,
  [SMALL_STATE(483)] = 18219,
  [SMALL_STATE(484)] = 18256,
  [SMALL_STATE(485)] = 18293,
  [SMALL_STATE(486)] = 18322,
  [SMALL_STATE(487)] = 18357,
  [SMALL_STATE(488)] = 18392,
  [SMALL_STATE(489)] = 18421,
  [SMALL_STATE(490)] = 18458,
  [SMALL_STATE(491)] = 18475,
  [SMALL_STATE(492)] = 18492,
  [SMALL_STATE(493)] = 18527,
  [SMALL_STATE(494)] = 18564,
  [SMALL_STATE(495)] = 18601,
  [SMALL_STATE(496)] = 18623,
  [SMALL_STATE(497)] = 18639,
  [SMALL_STATE(498)] = 18667,
  [SMALL_STATE(499)] = 18699,
  [SMALL_STATE(500)] = 18727,
  [SMALL_STATE(501)] = 18749,
  [SMALL_STATE(502)] = 18783,
  [SMALL_STATE(503)] = 18817,
  [SMALL_STATE(504)] = 18833,
  [SMALL_STATE(505)] = 18861,
  [SMALL_STATE(506)] = 18889,
  [SMALL_STATE(507)] = 18917,
  [SMALL_STATE(508)] = 18945,
  [SMALL_STATE(509)] = 18977,
  [SMALL_STATE(510)] = 19005,
  [SMALL_STATE(511)] = 19033,
  [SMALL_STATE(512)] = 19061,
  [SMALL_STATE(513)] = 19083,
  [SMALL_STATE(514)] = 19099,
  [SMALL_STATE(515)] = 19121,
  [SMALL_STATE(516)] = 19143,
  [SMALL_STATE(517)] = 19175,
  [SMALL_STATE(518)] = 19203,
  [SMALL_STATE(519)] = 19231,
  [SMALL_STATE(520)] = 19262,
  [SMALL_STATE(521)] = 19283,
  [SMALL_STATE(522)] = 19304,
  [SMALL_STATE(523)] = 19335,
  [SMALL_STATE(524)] = 19356,
  [SMALL_STATE(525)] = 19387,
  [SMALL_STATE(526)] = 19418,
  [SMALL_STATE(527)] = 19439,
  [SMALL_STATE(528)] = 19460,
  [SMALL_STATE(529)] = 19491,
  [SMALL_STATE(530)] = 19522,
  [SMALL_STATE(531)] = 19553,
  [SMALL_STATE(532)] = 19584,
  [SMALL_STATE(533)] = 19615,
  [SMALL_STATE(534)] = 19644,
  [SMALL_STATE(535)] = 19675,
  [SMALL_STATE(536)] = 19696,
  [SMALL_STATE(537)] = 19727,
  [SMALL_STATE(538)] = 19758,
  [SMALL_STATE(539)] = 19789,
  [SMALL_STATE(540)] = 19818,
  [SMALL_STATE(541)] = 19849,
  [SMALL_STATE(542)] = 19880,
  [SMALL_STATE(543)] = 19906,
  [SMALL_STATE(544)] = 19922,
  [SMALL_STATE(545)] = 19938,
  [SMALL_STATE(546)] = 19966,
  [SMALL_STATE(547)] = 19982,
  [SMALL_STATE(548)] = 20008,
  [SMALL_STATE(549)] = 20036,
  [SMALL_STATE(550)] = 20062,
  [SMALL_STATE(551)] = 20090,
  [SMALL_STATE(552)] = 20118,
  [SMALL_STATE(553)] = 20144,
  [SMALL_STATE(554)] = 20170,
  [SMALL_STATE(555)] = 20198,
  [SMALL_STATE(556)] = 20226,
  [SMALL_STATE(557)] = 20242,
  [SMALL_STATE(558)] = 20268,
  [SMALL_STATE(559)] = 20294,
  [SMALL_STATE(560)] = 20322,
  [SMALL_STATE(561)] = 20350,
  [SMALL_STATE(562)] = 20378,
  [SMALL_STATE(563)] = 20394,
  [SMALL_STATE(564)] = 20420,
  [SMALL_STATE(565)] = 20436,
  [SMALL_STATE(566)] = 20462,
  [SMALL_STATE(567)] = 20478,
  [SMALL_STATE(568)] = 20504,
  [SMALL_STATE(569)] = 20520,
  [SMALL_STATE(570)] = 20548,
  [SMALL_STATE(571)] = 20564,
  [SMALL_STATE(572)] = 20580,
  [SMALL_STATE(573)] = 20606,
  [SMALL_STATE(574)] = 20632,
  [SMALL_STATE(575)] = 20648,
  [SMALL_STATE(576)] = 20664,
  [SMALL_STATE(577)] = 20692,
  [SMALL_STATE(578)] = 20720,
  [SMALL_STATE(579)] = 20736,
  [SMALL_STATE(580)] = 20762,
  [SMALL_STATE(581)] = 20778,
  [SMALL_STATE(582)] = 20804,
  [SMALL_STATE(583)] = 20826,
  [SMALL_STATE(584)] = 20842,
  [SMALL_STATE(585)] = 20858,
  [SMALL_STATE(586)] = 20874,
  [SMALL_STATE(587)] = 20890,
  [SMALL_STATE(588)] = 20909,
  [SMALL_STATE(589)] = 20926,
  [SMALL_STATE(590)] = 20941,
  [SMALL_STATE(591)] = 20956,
  [SMALL_STATE(592)] = 20973,
  [SMALL_STATE(593)] = 20992,
  [SMALL_STATE(594)] = 21007,
  [SMALL_STATE(595)] = 21022,
  [SMALL_STATE(596)] = 21047,
  [SMALL_STATE(597)] = 21074,
  [SMALL_STATE(598)] = 21093,
  [SMALL_STATE(599)] = 21108,
  [SMALL_STATE(600)] = 21126,
  [SMALL_STATE(601)] = 21148,
  [SMALL_STATE(602)] = 21166,
  [SMALL_STATE(603)] = 21188,
  [SMALL_STATE(604)] = 21208,
  [SMALL_STATE(605)] = 21226,
  [SMALL_STATE(606)] = 21248,
  [SMALL_STATE(607)] = 21268,
  [SMALL_STATE(608)] = 21286,
  [SMALL_STATE(609)] = 21306,
  [SMALL_STATE(610)] = 21328,
  [SMALL_STATE(611)] = 21350,
  [SMALL_STATE(612)] = 21370,
  [SMALL_STATE(613)] = 21392,
  [SMALL_STATE(614)] = 21414,
  [SMALL_STATE(615)] = 21434,
  [SMALL_STATE(616)] = 21456,
  [SMALL_STATE(617)] = 21474,
  [SMALL_STATE(618)] = 21496,
  [SMALL_STATE(619)] = 21516,
  [SMALL_STATE(620)] = 21538,
  [SMALL_STATE(621)] = 21558,
  [SMALL_STATE(622)] = 21580,
  [SMALL_STATE(623)] = 21600,
  [SMALL_STATE(624)] = 21620,
  [SMALL_STATE(625)] = 21642,
  [SMALL_STATE(626)] = 21664,
  [SMALL_STATE(627)] = 21686,
  [SMALL_STATE(628)] = 21706,
  [SMALL_STATE(629)] = 21728,
  [SMALL_STATE(630)] = 21744,
  [SMALL_STATE(631)] = 21764,
  [SMALL_STATE(632)] = 21780,
  [SMALL_STATE(633)] = 21796,
  [SMALL_STATE(634)] = 21812,
  [SMALL_STATE(635)] = 21828,
  [SMALL_STATE(636)] = 21852,
  [SMALL_STATE(637)] = 21874,
  [SMALL_STATE(638)] = 21894,
  [SMALL_STATE(639)] = 21916,
  [SMALL_STATE(640)] = 21938,
  [SMALL_STATE(641)] = 21960,
  [SMALL_STATE(642)] = 21982,
  [SMALL_STATE(643)] = 22002,
  [SMALL_STATE(644)] = 22024,
  [SMALL_STATE(645)] = 22044,
  [SMALL_STATE(646)] = 22066,
  [SMALL_STATE(647)] = 22079,
  [SMALL_STATE(648)] = 22092,
  [SMALL_STATE(649)] = 22105,
  [SMALL_STATE(650)] = 22124,
  [SMALL_STATE(651)] = 22143,
  [SMALL_STATE(652)] = 22156,
  [SMALL_STATE(653)] = 22169,
  [SMALL_STATE(654)] = 22182,
  [SMALL_STATE(655)] = 22195,
  [SMALL_STATE(656)] = 22214,
  [SMALL_STATE(657)] = 22233,
  [SMALL_STATE(658)] = 22246,
  [SMALL_STATE(659)] = 22259,
  [SMALL_STATE(660)] = 22272,
  [SMALL_STATE(661)] = 22285,
  [SMALL_STATE(662)] = 22298,
  [SMALL_STATE(663)] = 22317,
  [SMALL_STATE(664)] = 22336,
  [SMALL_STATE(665)] = 22355,
  [SMALL_STATE(666)] = 22374,
  [SMALL_STATE(667)] = 22387,
  [SMALL_STATE(668)] = 22406,
  [SMALL_STATE(669)] = 22425,
  [SMALL_STATE(670)] = 22438,
  [SMALL_STATE(671)] = 22451,
  [SMALL_STATE(672)] = 22464,
  [SMALL_STATE(673)] = 22477,
  [SMALL_STATE(674)] = 22490,
  [SMALL_STATE(675)] = 22503,
  [SMALL_STATE(676)] = 22516,
  [SMALL_STATE(677)] = 22528,
  [SMALL_STATE(678)] = 22544,
  [SMALL_STATE(679)] = 22562,
  [SMALL_STATE(680)] = 22578,
  [SMALL_STATE(681)] = 22590,
  [SMALL_STATE(682)] = 22606,
  [SMALL_STATE(683)] = 22622,
  [SMALL_STATE(684)] = 22638,
  [SMALL_STATE(685)] = 22656,
  [SMALL_STATE(686)] = 22672,
  [SMALL_STATE(687)] = 22688,
  [SMALL_STATE(688)] = 22704,
  [SMALL_STATE(689)] = 22722,
  [SMALL_STATE(690)] = 22738,
  [SMALL_STATE(691)] = 22753,
  [SMALL_STATE(692)] = 22766,
  [SMALL_STATE(693)] = 22781,
  [SMALL_STATE(694)] = 22796,
  [SMALL_STATE(695)] = 22811,
  [SMALL_STATE(696)] = 22824,
  [SMALL_STATE(697)] = 22839,
  [SMALL_STATE(698)] = 22852,
  [SMALL_STATE(699)] = 22867,
  [SMALL_STATE(700)] = 22882,
  [SMALL_STATE(701)] = 22897,
  [SMALL_STATE(702)] = 22912,
  [SMALL_STATE(703)] = 22927,
  [SMALL_STATE(704)] = 22942,
  [SMALL_STATE(705)] = 22957,
  [SMALL_STATE(706)] = 22972,
  [SMALL_STATE(707)] = 22987,
  [SMALL_STATE(708)] = 23002,
  [SMALL_STATE(709)] = 23017,
  [SMALL_STATE(710)] = 23026,
  [SMALL_STATE(711)] = 23038,
  [SMALL_STATE(712)] = 23048,
  [SMALL_STATE(713)] = 23058,
  [SMALL_STATE(714)] = 23070,
  [SMALL_STATE(715)] = 23082,
  [SMALL_STATE(716)] = 23094,
  [SMALL_STATE(717)] = 23104,
  [SMALL_STATE(718)] = 23114,
  [SMALL_STATE(719)] = 23124,
  [SMALL_STATE(720)] = 23136,
  [SMALL_STATE(721)] = 23146,
  [SMALL_STATE(722)] = 23156,
  [SMALL_STATE(723)] = 23166,
  [SMALL_STATE(724)] = 23176,
  [SMALL_STATE(725)] = 23188,
  [SMALL_STATE(726)] = 23198,
  [SMALL_STATE(727)] = 23210,
  [SMALL_STATE(728)] = 23220,
  [SMALL_STATE(729)] = 23230,
  [SMALL_STATE(730)] = 23240,
  [SMALL_STATE(731)] = 23250,
  [SMALL_STATE(732)] = 23260,
  [SMALL_STATE(733)] = 23270,
  [SMALL_STATE(734)] = 23280,
  [SMALL_STATE(735)] = 23292,
  [SMALL_STATE(736)] = 23304,
  [SMALL_STATE(737)] = 23316,
  [SMALL_STATE(738)] = 23326,
  [SMALL_STATE(739)] = 23338,
  [SMALL_STATE(740)] = 23348,
  [SMALL_STATE(741)] = 23358,
  [SMALL_STATE(742)] = 23368,
  [SMALL_STATE(743)] = 23378,
  [SMALL_STATE(744)] = 23388,
  [SMALL_STATE(745)] = 23398,
  [SMALL_STATE(746)] = 23408,
  [SMALL_STATE(747)] = 23418,
  [SMALL_STATE(748)] = 23428,
  [SMALL_STATE(749)] = 23440,
  [SMALL_STATE(750)] = 23450,
  [SMALL_STATE(751)] = 23462,
  [SMALL_STATE(752)] = 23476,
  [SMALL_STATE(753)] = 23488,
  [SMALL_STATE(754)] = 23500,
  [SMALL_STATE(755)] = 23514,
  [SMALL_STATE(756)] = 23524,
  [SMALL_STATE(757)] = 23536,
  [SMALL_STATE(758)] = 23546,
  [SMALL_STATE(759)] = 23556,
  [SMALL_STATE(760)] = 23566,
  [SMALL_STATE(761)] = 23580,
  [SMALL_STATE(762)] = 23594,
  [SMALL_STATE(763)] = 23604,
  [SMALL_STATE(764)] = 23614,
  [SMALL_STATE(765)] = 23626,
  [SMALL_STATE(766)] = 23636,
  [SMALL_STATE(767)] = 23646,
  [SMALL_STATE(768)] = 23656,
  [SMALL_STATE(769)] = 23666,
  [SMALL_STATE(770)] = 23676,
  [SMALL_STATE(771)] = 23686,
  [SMALL_STATE(772)] = 23700,
  [SMALL_STATE(773)] = 23710,
  [SMALL_STATE(774)] = 23720,
  [SMALL_STATE(775)] = 23730,
  [SMALL_STATE(776)] = 23740,
  [SMALL_STATE(777)] = 23750,
  [SMALL_STATE(778)] = 23760,
  [SMALL_STATE(779)] = 23770,
  [SMALL_STATE(780)] = 23780,
  [SMALL_STATE(781)] = 23792,
  [SMALL_STATE(782)] = 23802,
  [SMALL_STATE(783)] = 23814,
  [SMALL_STATE(784)] = 23824,
  [SMALL_STATE(785)] = 23834,
  [SMALL_STATE(786)] = 23844,
  [SMALL_STATE(787)] = 23854,
  [SMALL_STATE(788)] = 23864,
  [SMALL_STATE(789)] = 23878,
  [SMALL_STATE(790)] = 23888,
  [SMALL_STATE(791)] = 23897,
  [SMALL_STATE(792)] = 23906,
  [SMALL_STATE(793)] = 23915,
  [SMALL_STATE(794)] = 23924,
  [SMALL_STATE(795)] = 23933,
  [SMALL_STATE(796)] = 23944,
  [SMALL_STATE(797)] = 23953,
  [SMALL_STATE(798)] = 23962,
  [SMALL_STATE(799)] = 23975,
  [SMALL_STATE(800)] = 23984,
  [SMALL_STATE(801)] = 23993,
  [SMALL_STATE(802)] = 24002,
  [SMALL_STATE(803)] = 24011,
  [SMALL_STATE(804)] = 24024,
  [SMALL_STATE(805)] = 24033,
  [SMALL_STATE(806)] = 24042,
  [SMALL_STATE(807)] = 24051,
  [SMALL_STATE(808)] = 24060,
  [SMALL_STATE(809)] = 24069,
  [SMALL_STATE(810)] = 24078,
  [SMALL_STATE(811)] = 24087,
  [SMALL_STATE(812)] = 24096,
  [SMALL_STATE(813)] = 24105,
  [SMALL_STATE(814)] = 24114,
  [SMALL_STATE(815)] = 24123,
  [SMALL_STATE(816)] = 24132,
  [SMALL_STATE(817)] = 24141,
  [SMALL_STATE(818)] = 24150,
  [SMALL_STATE(819)] = 24159,
  [SMALL_STATE(820)] = 24168,
  [SMALL_STATE(821)] = 24181,
  [SMALL_STATE(822)] = 24190,
  [SMALL_STATE(823)] = 24199,
  [SMALL_STATE(824)] = 24208,
  [SMALL_STATE(825)] = 24217,
  [SMALL_STATE(826)] = 24226,
  [SMALL_STATE(827)] = 24235,
  [SMALL_STATE(828)] = 24244,
  [SMALL_STATE(829)] = 24253,
  [SMALL_STATE(830)] = 24262,
  [SMALL_STATE(831)] = 24271,
  [SMALL_STATE(832)] = 24280,
  [SMALL_STATE(833)] = 24289,
  [SMALL_STATE(834)] = 24298,
  [SMALL_STATE(835)] = 24307,
  [SMALL_STATE(836)] = 24316,
  [SMALL_STATE(837)] = 24325,
  [SMALL_STATE(838)] = 24334,
  [SMALL_STATE(839)] = 24343,
  [SMALL_STATE(840)] = 24352,
  [SMALL_STATE(841)] = 24363,
  [SMALL_STATE(842)] = 24372,
  [SMALL_STATE(843)] = 24381,
  [SMALL_STATE(844)] = 24390,
  [SMALL_STATE(845)] = 24397,
  [SMALL_STATE(846)] = 24410,
  [SMALL_STATE(847)] = 24419,
  [SMALL_STATE(848)] = 24432,
  [SMALL_STATE(849)] = 24443,
  [SMALL_STATE(850)] = 24452,
  [SMALL_STATE(851)] = 24465,
  [SMALL_STATE(852)] = 24474,
  [SMALL_STATE(853)] = 24483,
  [SMALL_STATE(854)] = 24492,
  [SMALL_STATE(855)] = 24505,
  [SMALL_STATE(856)] = 24516,
  [SMALL_STATE(857)] = 24526,
  [SMALL_STATE(858)] = 24536,
  [SMALL_STATE(859)] = 24546,
  [SMALL_STATE(860)] = 24556,
  [SMALL_STATE(861)] = 24566,
  [SMALL_STATE(862)] = 24576,
  [SMALL_STATE(863)] = 24586,
  [SMALL_STATE(864)] = 24596,
  [SMALL_STATE(865)] = 24604,
  [SMALL_STATE(866)] = 24614,
  [SMALL_STATE(867)] = 24622,
  [SMALL_STATE(868)] = 24632,
  [SMALL_STATE(869)] = 24642,
  [SMALL_STATE(870)] = 24649,
  [SMALL_STATE(871)] = 24654,
  [SMALL_STATE(872)] = 24659,
  [SMALL_STATE(873)] = 24666,
  [SMALL_STATE(874)] = 24673,
  [SMALL_STATE(875)] = 24680,
  [SMALL_STATE(876)] = 24687,
  [SMALL_STATE(877)] = 24692,
  [SMALL_STATE(878)] = 24697,
  [SMALL_STATE(879)] = 24704,
  [SMALL_STATE(880)] = 24709,
  [SMALL_STATE(881)] = 24714,
  [SMALL_STATE(882)] = 24719,
  [SMALL_STATE(883)] = 24726,
  [SMALL_STATE(884)] = 24731,
  [SMALL_STATE(885)] = 24736,
  [SMALL_STATE(886)] = 24741,
  [SMALL_STATE(887)] = 24748,
  [SMALL_STATE(888)] = 24753,
  [SMALL_STATE(889)] = 24758,
  [SMALL_STATE(890)] = 24763,
  [SMALL_STATE(891)] = 24768,
  [SMALL_STATE(892)] = 24775,
  [SMALL_STATE(893)] = 24782,
  [SMALL_STATE(894)] = 24789,
  [SMALL_STATE(895)] = 24796,
  [SMALL_STATE(896)] = 24801,
  [SMALL_STATE(897)] = 24806,
  [SMALL_STATE(898)] = 24811,
  [SMALL_STATE(899)] = 24816,
  [SMALL_STATE(900)] = 24821,
  [SMALL_STATE(901)] = 24826,
  [SMALL_STATE(902)] = 24831,
  [SMALL_STATE(903)] = 24836,
  [SMALL_STATE(904)] = 24841,
  [SMALL_STATE(905)] = 24846,
  [SMALL_STATE(906)] = 24851,
  [SMALL_STATE(907)] = 24856,
  [SMALL_STATE(908)] = 24863,
  [SMALL_STATE(909)] = 24868,
  [SMALL_STATE(910)] = 24873,
  [SMALL_STATE(911)] = 24880,
  [SMALL_STATE(912)] = 24885,
  [SMALL_STATE(913)] = 24892,
  [SMALL_STATE(914)] = 24899,
  [SMALL_STATE(915)] = 24906,
  [SMALL_STATE(916)] = 24911,
  [SMALL_STATE(917)] = 24918,
  [SMALL_STATE(918)] = 24923,
  [SMALL_STATE(919)] = 24930,
  [SMALL_STATE(920)] = 24934,
  [SMALL_STATE(921)] = 24938,
  [SMALL_STATE(922)] = 24942,
  [SMALL_STATE(923)] = 24946,
  [SMALL_STATE(924)] = 24950,
  [SMALL_STATE(925)] = 24954,
  [SMALL_STATE(926)] = 24958,
  [SMALL_STATE(927)] = 24962,
  [SMALL_STATE(928)] = 24966,
  [SMALL_STATE(929)] = 24970,
  [SMALL_STATE(930)] = 24974,
  [SMALL_STATE(931)] = 24978,
  [SMALL_STATE(932)] = 24982,
  [SMALL_STATE(933)] = 24986,
  [SMALL_STATE(934)] = 24990,
  [SMALL_STATE(935)] = 24994,
  [SMALL_STATE(936)] = 24998,
  [SMALL_STATE(937)] = 25002,
  [SMALL_STATE(938)] = 25006,
  [SMALL_STATE(939)] = 25010,
  [SMALL_STATE(940)] = 25014,
  [SMALL_STATE(941)] = 25018,
  [SMALL_STATE(942)] = 25022,
  [SMALL_STATE(943)] = 25026,
  [SMALL_STATE(944)] = 25030,
  [SMALL_STATE(945)] = 25034,
  [SMALL_STATE(946)] = 25038,
  [SMALL_STATE(947)] = 25042,
  [SMALL_STATE(948)] = 25046,
  [SMALL_STATE(949)] = 25050,
  [SMALL_STATE(950)] = 25054,
  [SMALL_STATE(951)] = 25058,
  [SMALL_STATE(952)] = 25062,
  [SMALL_STATE(953)] = 25066,
  [SMALL_STATE(954)] = 25070,
  [SMALL_STATE(955)] = 25074,
  [SMALL_STATE(956)] = 25078,
  [SMALL_STATE(957)] = 25082,
  [SMALL_STATE(958)] = 25086,
  [SMALL_STATE(959)] = 25090,
  [SMALL_STATE(960)] = 25094,
  [SMALL_STATE(961)] = 25098,
  [SMALL_STATE(962)] = 25102,
  [SMALL_STATE(963)] = 25106,
  [SMALL_STATE(964)] = 25110,
  [SMALL_STATE(965)] = 25114,
  [SMALL_STATE(966)] = 25118,
  [SMALL_STATE(967)] = 25122,
  [SMALL_STATE(968)] = 25126,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_no_language, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal_with_language, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 5),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__datatype_iri, 1), REDUCE(sym__class_iri, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datatype_iri, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_iri, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_iri, 1),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__data_property_iri, 1), REDUCE(sym__object_property_iri, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typed_literal, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__floating_point_literal, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(26),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(33),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_target, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat2, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat2, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(894),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(656),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(214),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(215),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(78),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 3),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(82),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(951),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 3),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(561),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(327),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(448),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(950),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(288),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_object_property, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2), SHIFT_REPEAT(347),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(558),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(597),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(331),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(429),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(335),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__data_property_iri, 1), REDUCE(sym__object_property_iri, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(516),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(150),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_expression, 1),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(532),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(492),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(132),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(582),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(498),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_property_expression, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(285),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(315),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inverse_object_property, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(436),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(499),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(668),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(665),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(664),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(663),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(579),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(137),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(405),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(487),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(206),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 6),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(156),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 2),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(577),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(304),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 2),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(430),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 1),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(333),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_2list, 4),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(274),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(164),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2), SHIFT_REPEAT(223),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 1),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(540),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(541),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(131),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(173),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(856),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_2list, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_literal, 3),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_literal, 4),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 2),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 2), SHIFT_REPEAT(508),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 2),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 2), SHIFT_REPEAT(453),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(317),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 1),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(522),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(129),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(128),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(409),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(166),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(550),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(342),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 2),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_fact, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_fact, 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 1),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(537),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(139),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(414),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(486),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 2),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(595),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 2),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(635),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 3),
  [966] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(362),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(530),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(596),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(555),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(684),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1039] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(392),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(394),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(427),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(307),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), SHIFT_REPEAT(524),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), REDUCE(sym_datatype_frame, 4),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1083] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(415),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(525),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(298),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_2list, 4),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_2list, 4),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_2list_repeat1, 2),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_2list_repeat1, 2), SHIFT_REPEAT(624),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_2list_repeat1, 2),
  [1149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_2list_repeat1, 2), SHIFT_REPEAT(573),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_2list, 4),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2), SHIFT_REPEAT(251),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2), SHIFT_REPEAT(552),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_2list, 3),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_2list, 3),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_2list, 3),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(466),
  [1209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(467),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(475),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(495),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_no_language, 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(512),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2),
  [1283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(514),
  [1286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(515),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 1),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(554),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 3),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 2),
  [1308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(535),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 2),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 6),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 5),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal_with_language, 2),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [1325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__typed_literal, 3),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 3),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_target, 1),
  [1337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__floating_point_literal, 4),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_iri, 1),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_property_iri, 1),
  [1353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_property_iri, 1),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(576),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(559),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(548),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(560),
  [1447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(545),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facet, 1),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(462),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [1485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(872),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(339),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(551),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(280),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [1579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(931),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_list, 1),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2),
  [1626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(422),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 2),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(591),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 1),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_list, 2),
  [1652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2), SHIFT_REPEAT(542),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1795] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_owl2ms(void) {
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

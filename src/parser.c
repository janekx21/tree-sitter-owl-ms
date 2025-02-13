#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 914
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 209
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__comment = 1,
  anon_sym_LT = 2,
  anon_sym_GT = 3,
  sym_prefix_name = 4,
  anon_sym_integer = 5,
  anon_sym_decimal = 6,
  anon_sym_float = 7,
  anon_sym_string = 8,
  anon_sym__COLON = 9,
  sym__non_zero = 10,
  anon_sym_0 = 11,
  anon_sym_CARET_CARET = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_DOT = 15,
  anon_sym_f = 16,
  anon_sym_F = 17,
  anon_sym_e = 18,
  anon_sym_E = 19,
  sym__quoted_string = 20,
  sym__language_tag = 21,
  anon_sym_Prefix_COLON = 22,
  anon_sym_Ontology_COLON = 23,
  anon_sym_Import_COLON = 24,
  anon_sym_Annotations_COLON = 25,
  anon_sym_inverse = 26,
  anon_sym_or = 27,
  anon_sym_and = 28,
  anon_sym_not = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_LBRACK = 34,
  anon_sym_COMMA = 35,
  anon_sym_RBRACK = 36,
  anon_sym_length = 37,
  anon_sym_minLength = 38,
  anon_sym_maxLength = 39,
  anon_sym_pattern = 40,
  anon_sym_langRange = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_that = 44,
  anon_sym_some = 45,
  anon_sym_only = 46,
  anon_sym_Self = 47,
  anon_sym_min = 48,
  anon_sym_max = 49,
  anon_sym_exactly = 50,
  anon_sym_value = 51,
  anon_sym_Datatype_COLON = 52,
  anon_sym_EquivalentTo_COLON = 53,
  anon_sym_Class_COLON = 54,
  anon_sym_SubClassOf_COLON = 55,
  anon_sym_DisjointWith_COLON = 56,
  anon_sym_DisjointUnionOf_COLON = 57,
  anon_sym_HasKey_COLON = 58,
  anon_sym_ObjectProperty_COLON = 59,
  anon_sym_Domain_COLON = 60,
  anon_sym_Range_COLON = 61,
  anon_sym_SubPropertyOf_COLON = 62,
  anon_sym_InverseOf_COLON = 63,
  anon_sym_Characteristics_COLON = 64,
  anon_sym_SubPropertyChain_COLON = 65,
  anon_sym_o = 66,
  anon_sym_Functional = 67,
  anon_sym_InverseFunctional = 68,
  anon_sym_Reflexive = 69,
  anon_sym_Irreflexive = 70,
  anon_sym_Symmetric = 71,
  anon_sym_Asymmetric = 72,
  anon_sym_Transitive = 73,
  anon_sym_DataProperty_COLON = 74,
  anon_sym_AnnotationProperty_COLON = 75,
  anon_sym_Individual_COLON = 76,
  anon_sym_Types_COLON = 77,
  anon_sym_Facts_COLON = 78,
  anon_sym_SameAs_COLON = 79,
  anon_sym_DifferentFrom_COLON = 80,
  anon_sym_EquivalentClasses_COLON = 81,
  anon_sym_DisjointClasses_COLON = 82,
  anon_sym_EquivalentProperties_COLON = 83,
  anon_sym_DisjointProperties_COLON = 84,
  anon_sym_SameIndividual_COLON = 85,
  anon_sym_DifferentIndividuals_COLON = 86,
  sym__iri_rfc3987 = 87,
  sym__pn_local = 88,
  sym__pname_ln = 89,
  sym_source_file = 90,
  sym__iri = 91,
  sym_full_iri = 92,
  sym_abbreviated_iri = 93,
  sym_simple_iri = 94,
  sym__datatype = 95,
  sym_datatype_iri = 96,
  sym_class_iri = 97,
  sym_annotation_property_iri = 98,
  sym_ontology_iri = 99,
  sym_data_property_iri = 100,
  sym_version_iri = 101,
  sym_object_property_iri = 102,
  sym_individual_iri = 103,
  sym__individual = 104,
  sym_node_id = 105,
  sym_non_negative_integer = 106,
  sym__positive_integer = 107,
  aux_sym__digits = 108,
  sym__digit = 109,
  sym__zero = 110,
  sym__literal = 111,
  sym_typed_literal = 112,
  sym_string_literal_no_language = 113,
  sym_string_literal_with_language = 114,
  sym_integer_literal = 115,
  sym_decimal_literal = 116,
  sym_floating_point_literal = 117,
  sym__exponent = 118,
  sym__lexial_value = 119,
  sym__ontology_document = 120,
  sym_prefix_declaration = 121,
  sym_ontology = 122,
  sym_import = 123,
  sym__frame = 124,
  sym__annotations = 125,
  sym_annotation = 126,
  sym__annotation_target = 127,
  sym__object_property_expression = 128,
  sym__inverse_object_property = 129,
  sym__data_property_expression = 130,
  sym_data_range = 131,
  sym__data_conjunction = 132,
  sym__data_primary = 133,
  sym__data_atomic = 134,
  sym_datatype_restriction = 135,
  sym__facet = 136,
  sym__restriction_value = 137,
  sym_description = 138,
  sym__conjunction = 139,
  sym__primary = 140,
  sym__restriction = 141,
  sym__atomic = 142,
  sym_datatype_frame = 143,
  sym_datatype_equavalent_to = 144,
  sym_class_frame = 145,
  sym_sub_class_of = 146,
  sym_equivalent_to = 147,
  sym_disjoint_with = 148,
  sym_disjoint_union_of = 149,
  sym_has_key = 150,
  sym_object_property_frame = 151,
  sym__object_property_characteristic = 152,
  sym_data_property_frame = 153,
  sym_annotation_property_frame = 154,
  sym_individual_frame = 155,
  sym__fact = 156,
  sym__object_property_fact = 157,
  sym__data_property_fact = 158,
  sym_misc = 159,
  sym__description_annotated_list = 160,
  sym__annotation_annotated_list = 161,
  sym__object_property_expression_annotated_list = 162,
  sym__object_property_characteristic_annotated_list = 163,
  sym__data_range_annotated_list = 164,
  sym__data_property_expression_annotated_list = 165,
  sym__iri_annotated_list = 166,
  sym__annotation_property_iri_annotated_list = 167,
  sym__individual_annotated_list = 168,
  sym__fact_annotated_list = 169,
  sym__description_2list = 170,
  sym__object_property_2list = 171,
  sym__data_property_2list = 172,
  sym__individual_2list = 173,
  sym__individual_list = 174,
  sym__literal_list = 175,
  aux_sym__positive_integer_repeat1 = 176,
  aux_sym__ontology_document_repeat1 = 177,
  aux_sym_ontology_repeat1 = 178,
  aux_sym_ontology_repeat2 = 179,
  aux_sym_ontology_repeat3 = 180,
  aux_sym_data_range_repeat1 = 181,
  aux_sym__data_conjunction_repeat1 = 182,
  aux_sym_datatype_restriction_repeat1 = 183,
  aux_sym_description_repeat1 = 184,
  aux_sym__conjunction_repeat1 = 185,
  aux_sym__conjunction_repeat2 = 186,
  aux_sym_class_frame_repeat1 = 187,
  aux_sym_has_key_repeat1 = 188,
  aux_sym_object_property_frame_repeat1 = 189,
  aux_sym_object_property_frame_repeat2 = 190,
  aux_sym_data_property_frame_repeat1 = 191,
  aux_sym_annotation_property_frame_repeat1 = 192,
  aux_sym_individual_frame_repeat1 = 193,
  aux_sym__description_annotated_list_repeat1 = 194,
  aux_sym__annotation_annotated_list_repeat1 = 195,
  aux_sym__object_property_expression_annotated_list_repeat1 = 196,
  aux_sym__object_property_characteristic_annotated_list_repeat1 = 197,
  aux_sym__data_range_annotated_list_repeat1 = 198,
  aux_sym__data_property_expression_annotated_list_repeat1 = 199,
  aux_sym__iri_annotated_list_repeat1 = 200,
  aux_sym__annotation_property_iri_annotated_list_repeat1 = 201,
  aux_sym__individual_annotated_list_repeat1 = 202,
  aux_sym__fact_annotated_list_repeat1 = 203,
  aux_sym__description_2list_repeat1 = 204,
  aux_sym__object_property_2list_repeat1 = 205,
  aux_sym__data_property_2list_repeat1 = 206,
  aux_sym__individual_2list_repeat1 = 207,
  aux_sym__literal_list_repeat1 = 208,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__comment] = "_comment",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_prefix_name] = "prefix_name",
  [anon_sym_integer] = "integer",
  [anon_sym_decimal] = "decimal",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym__COLON] = "_:",
  [sym__non_zero] = "_non_zero",
  [anon_sym_0] = "0",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_f] = "f",
  [anon_sym_F] = "F",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [sym__quoted_string] = "_quoted_string",
  [sym__language_tag] = "_language_tag",
  [anon_sym_Prefix_COLON] = "Prefix:",
  [anon_sym_Ontology_COLON] = "Ontology:",
  [anon_sym_Import_COLON] = "Import:",
  [anon_sym_Annotations_COLON] = "Annotations:",
  [anon_sym_inverse] = "inverse",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym__iri_rfc3987] = "_iri_rfc3987",
  [sym__pn_local] = "_pn_local",
  [sym__pname_ln] = "_pname_ln",
  [sym_source_file] = "source_file",
  [sym__iri] = "_iri",
  [sym_full_iri] = "full_iri",
  [sym_abbreviated_iri] = "abbreviated_iri",
  [sym_simple_iri] = "simple_iri",
  [sym__datatype] = "_datatype",
  [sym_datatype_iri] = "datatype_iri",
  [sym_class_iri] = "class_iri",
  [sym_annotation_property_iri] = "annotation_property_iri",
  [sym_ontology_iri] = "ontology_iri",
  [sym_data_property_iri] = "data_property_iri",
  [sym_version_iri] = "version_iri",
  [sym_object_property_iri] = "object_property_iri",
  [sym_individual_iri] = "individual_iri",
  [sym__individual] = "_individual",
  [sym_node_id] = "node_id",
  [sym_non_negative_integer] = "non_negative_integer",
  [sym__positive_integer] = "_positive_integer",
  [aux_sym__digits] = "_digits",
  [sym__digit] = "_digit",
  [sym__zero] = "_zero",
  [sym__literal] = "_literal",
  [sym_typed_literal] = "typed_literal",
  [sym_string_literal_no_language] = "string_literal_no_language",
  [sym_string_literal_with_language] = "string_literal_with_language",
  [sym_integer_literal] = "integer_literal",
  [sym_decimal_literal] = "decimal_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym__exponent] = "_exponent",
  [sym__lexial_value] = "_lexial_value",
  [sym__ontology_document] = "_ontology_document",
  [sym_prefix_declaration] = "prefix_declaration",
  [sym_ontology] = "ontology",
  [sym_import] = "import",
  [sym__frame] = "_frame",
  [sym__annotations] = "_annotations",
  [sym_annotation] = "annotation",
  [sym__annotation_target] = "_annotation_target",
  [sym__object_property_expression] = "_object_property_expression",
  [sym__inverse_object_property] = "_inverse_object_property",
  [sym__data_property_expression] = "_data_property_expression",
  [sym_data_range] = "data_range",
  [sym__data_conjunction] = "_data_conjunction",
  [sym__data_primary] = "_data_primary",
  [sym__data_atomic] = "_data_atomic",
  [sym_datatype_restriction] = "datatype_restriction",
  [sym__facet] = "_facet",
  [sym__restriction_value] = "_restriction_value",
  [sym_description] = "description",
  [sym__conjunction] = "_conjunction",
  [sym__primary] = "_primary",
  [sym__restriction] = "_restriction",
  [sym__atomic] = "_atomic",
  [sym_datatype_frame] = "datatype_frame",
  [sym_datatype_equavalent_to] = "datatype_equavalent_to",
  [sym_class_frame] = "class_frame",
  [sym_sub_class_of] = "sub_class_of",
  [sym_equivalent_to] = "equivalent_to",
  [sym_disjoint_with] = "disjoint_with",
  [sym_disjoint_union_of] = "disjoint_union_of",
  [sym_has_key] = "has_key",
  [sym_object_property_frame] = "object_property_frame",
  [sym__object_property_characteristic] = "_object_property_characteristic",
  [sym_data_property_frame] = "data_property_frame",
  [sym_annotation_property_frame] = "annotation_property_frame",
  [sym_individual_frame] = "individual_frame",
  [sym__fact] = "_fact",
  [sym__object_property_fact] = "_object_property_fact",
  [sym__data_property_fact] = "_data_property_fact",
  [sym_misc] = "misc",
  [sym__description_annotated_list] = "_description_annotated_list",
  [sym__annotation_annotated_list] = "_annotation_annotated_list",
  [sym__object_property_expression_annotated_list] = "_object_property_expression_annotated_list",
  [sym__object_property_characteristic_annotated_list] = "_object_property_characteristic_annotated_list",
  [sym__data_range_annotated_list] = "_data_range_annotated_list",
  [sym__data_property_expression_annotated_list] = "_data_property_expression_annotated_list",
  [sym__iri_annotated_list] = "_iri_annotated_list",
  [sym__annotation_property_iri_annotated_list] = "_annotation_property_iri_annotated_list",
  [sym__individual_annotated_list] = "_individual_annotated_list",
  [sym__fact_annotated_list] = "_fact_annotated_list",
  [sym__description_2list] = "_description_2list",
  [sym__object_property_2list] = "_object_property_2list",
  [sym__data_property_2list] = "_data_property_2list",
  [sym__individual_2list] = "_individual_2list",
  [sym__individual_list] = "_individual_list",
  [sym__literal_list] = "_literal_list",
  [aux_sym__positive_integer_repeat1] = "_positive_integer_repeat1",
  [aux_sym__ontology_document_repeat1] = "_ontology_document_repeat1",
  [aux_sym_ontology_repeat1] = "ontology_repeat1",
  [aux_sym_ontology_repeat2] = "ontology_repeat2",
  [aux_sym_ontology_repeat3] = "ontology_repeat3",
  [aux_sym_data_range_repeat1] = "data_range_repeat1",
  [aux_sym__data_conjunction_repeat1] = "_data_conjunction_repeat1",
  [aux_sym_datatype_restriction_repeat1] = "datatype_restriction_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym__conjunction_repeat1] = "_conjunction_repeat1",
  [aux_sym__conjunction_repeat2] = "_conjunction_repeat2",
  [aux_sym_class_frame_repeat1] = "class_frame_repeat1",
  [aux_sym_has_key_repeat1] = "has_key_repeat1",
  [aux_sym_object_property_frame_repeat1] = "object_property_frame_repeat1",
  [aux_sym_object_property_frame_repeat2] = "object_property_frame_repeat2",
  [aux_sym_data_property_frame_repeat1] = "data_property_frame_repeat1",
  [aux_sym_annotation_property_frame_repeat1] = "annotation_property_frame_repeat1",
  [aux_sym_individual_frame_repeat1] = "individual_frame_repeat1",
  [aux_sym__description_annotated_list_repeat1] = "_description_annotated_list_repeat1",
  [aux_sym__annotation_annotated_list_repeat1] = "_annotation_annotated_list_repeat1",
  [aux_sym__object_property_expression_annotated_list_repeat1] = "_object_property_expression_annotated_list_repeat1",
  [aux_sym__object_property_characteristic_annotated_list_repeat1] = "_object_property_characteristic_annotated_list_repeat1",
  [aux_sym__data_range_annotated_list_repeat1] = "_data_range_annotated_list_repeat1",
  [aux_sym__data_property_expression_annotated_list_repeat1] = "_data_property_expression_annotated_list_repeat1",
  [aux_sym__iri_annotated_list_repeat1] = "_iri_annotated_list_repeat1",
  [aux_sym__annotation_property_iri_annotated_list_repeat1] = "_annotation_property_iri_annotated_list_repeat1",
  [aux_sym__individual_annotated_list_repeat1] = "_individual_annotated_list_repeat1",
  [aux_sym__fact_annotated_list_repeat1] = "_fact_annotated_list_repeat1",
  [aux_sym__description_2list_repeat1] = "_description_2list_repeat1",
  [aux_sym__object_property_2list_repeat1] = "_object_property_2list_repeat1",
  [aux_sym__data_property_2list_repeat1] = "_data_property_2list_repeat1",
  [aux_sym__individual_2list_repeat1] = "_individual_2list_repeat1",
  [aux_sym__literal_list_repeat1] = "_literal_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__comment] = sym__comment,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_prefix_name] = sym_prefix_name,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym__COLON] = anon_sym__COLON,
  [sym__non_zero] = sym__non_zero,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [sym__quoted_string] = sym__quoted_string,
  [sym__language_tag] = sym__language_tag,
  [anon_sym_Prefix_COLON] = anon_sym_Prefix_COLON,
  [anon_sym_Ontology_COLON] = anon_sym_Ontology_COLON,
  [anon_sym_Import_COLON] = anon_sym_Import_COLON,
  [anon_sym_Annotations_COLON] = anon_sym_Annotations_COLON,
  [anon_sym_inverse] = anon_sym_inverse,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym__iri_rfc3987] = sym__iri_rfc3987,
  [sym__pn_local] = sym__pn_local,
  [sym__pname_ln] = sym__pname_ln,
  [sym_source_file] = sym_source_file,
  [sym__iri] = sym__iri,
  [sym_full_iri] = sym_full_iri,
  [sym_abbreviated_iri] = sym_abbreviated_iri,
  [sym_simple_iri] = sym_simple_iri,
  [sym__datatype] = sym__datatype,
  [sym_datatype_iri] = sym_datatype_iri,
  [sym_class_iri] = sym_class_iri,
  [sym_annotation_property_iri] = sym_annotation_property_iri,
  [sym_ontology_iri] = sym_ontology_iri,
  [sym_data_property_iri] = sym_data_property_iri,
  [sym_version_iri] = sym_version_iri,
  [sym_object_property_iri] = sym_object_property_iri,
  [sym_individual_iri] = sym_individual_iri,
  [sym__individual] = sym__individual,
  [sym_node_id] = sym_node_id,
  [sym_non_negative_integer] = sym_non_negative_integer,
  [sym__positive_integer] = sym__positive_integer,
  [aux_sym__digits] = aux_sym__digits,
  [sym__digit] = sym__digit,
  [sym__zero] = sym__zero,
  [sym__literal] = sym__literal,
  [sym_typed_literal] = sym_typed_literal,
  [sym_string_literal_no_language] = sym_string_literal_no_language,
  [sym_string_literal_with_language] = sym_string_literal_with_language,
  [sym_integer_literal] = sym_integer_literal,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_floating_point_literal] = sym_floating_point_literal,
  [sym__exponent] = sym__exponent,
  [sym__lexial_value] = sym__lexial_value,
  [sym__ontology_document] = sym__ontology_document,
  [sym_prefix_declaration] = sym_prefix_declaration,
  [sym_ontology] = sym_ontology,
  [sym_import] = sym_import,
  [sym__frame] = sym__frame,
  [sym__annotations] = sym__annotations,
  [sym_annotation] = sym_annotation,
  [sym__annotation_target] = sym__annotation_target,
  [sym__object_property_expression] = sym__object_property_expression,
  [sym__inverse_object_property] = sym__inverse_object_property,
  [sym__data_property_expression] = sym__data_property_expression,
  [sym_data_range] = sym_data_range,
  [sym__data_conjunction] = sym__data_conjunction,
  [sym__data_primary] = sym__data_primary,
  [sym__data_atomic] = sym__data_atomic,
  [sym_datatype_restriction] = sym_datatype_restriction,
  [sym__facet] = sym__facet,
  [sym__restriction_value] = sym__restriction_value,
  [sym_description] = sym_description,
  [sym__conjunction] = sym__conjunction,
  [sym__primary] = sym__primary,
  [sym__restriction] = sym__restriction,
  [sym__atomic] = sym__atomic,
  [sym_datatype_frame] = sym_datatype_frame,
  [sym_datatype_equavalent_to] = sym_datatype_equavalent_to,
  [sym_class_frame] = sym_class_frame,
  [sym_sub_class_of] = sym_sub_class_of,
  [sym_equivalent_to] = sym_equivalent_to,
  [sym_disjoint_with] = sym_disjoint_with,
  [sym_disjoint_union_of] = sym_disjoint_union_of,
  [sym_has_key] = sym_has_key,
  [sym_object_property_frame] = sym_object_property_frame,
  [sym__object_property_characteristic] = sym__object_property_characteristic,
  [sym_data_property_frame] = sym_data_property_frame,
  [sym_annotation_property_frame] = sym_annotation_property_frame,
  [sym_individual_frame] = sym_individual_frame,
  [sym__fact] = sym__fact,
  [sym__object_property_fact] = sym__object_property_fact,
  [sym__data_property_fact] = sym__data_property_fact,
  [sym_misc] = sym_misc,
  [sym__description_annotated_list] = sym__description_annotated_list,
  [sym__annotation_annotated_list] = sym__annotation_annotated_list,
  [sym__object_property_expression_annotated_list] = sym__object_property_expression_annotated_list,
  [sym__object_property_characteristic_annotated_list] = sym__object_property_characteristic_annotated_list,
  [sym__data_range_annotated_list] = sym__data_range_annotated_list,
  [sym__data_property_expression_annotated_list] = sym__data_property_expression_annotated_list,
  [sym__iri_annotated_list] = sym__iri_annotated_list,
  [sym__annotation_property_iri_annotated_list] = sym__annotation_property_iri_annotated_list,
  [sym__individual_annotated_list] = sym__individual_annotated_list,
  [sym__fact_annotated_list] = sym__fact_annotated_list,
  [sym__description_2list] = sym__description_2list,
  [sym__object_property_2list] = sym__object_property_2list,
  [sym__data_property_2list] = sym__data_property_2list,
  [sym__individual_2list] = sym__individual_2list,
  [sym__individual_list] = sym__individual_list,
  [sym__literal_list] = sym__literal_list,
  [aux_sym__positive_integer_repeat1] = aux_sym__positive_integer_repeat1,
  [aux_sym__ontology_document_repeat1] = aux_sym__ontology_document_repeat1,
  [aux_sym_ontology_repeat1] = aux_sym_ontology_repeat1,
  [aux_sym_ontology_repeat2] = aux_sym_ontology_repeat2,
  [aux_sym_ontology_repeat3] = aux_sym_ontology_repeat3,
  [aux_sym_data_range_repeat1] = aux_sym_data_range_repeat1,
  [aux_sym__data_conjunction_repeat1] = aux_sym__data_conjunction_repeat1,
  [aux_sym_datatype_restriction_repeat1] = aux_sym_datatype_restriction_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym__conjunction_repeat1] = aux_sym__conjunction_repeat1,
  [aux_sym__conjunction_repeat2] = aux_sym__conjunction_repeat2,
  [aux_sym_class_frame_repeat1] = aux_sym_class_frame_repeat1,
  [aux_sym_has_key_repeat1] = aux_sym_has_key_repeat1,
  [aux_sym_object_property_frame_repeat1] = aux_sym_object_property_frame_repeat1,
  [aux_sym_object_property_frame_repeat2] = aux_sym_object_property_frame_repeat2,
  [aux_sym_data_property_frame_repeat1] = aux_sym_data_property_frame_repeat1,
  [aux_sym_annotation_property_frame_repeat1] = aux_sym_annotation_property_frame_repeat1,
  [aux_sym_individual_frame_repeat1] = aux_sym_individual_frame_repeat1,
  [aux_sym__description_annotated_list_repeat1] = aux_sym__description_annotated_list_repeat1,
  [aux_sym__annotation_annotated_list_repeat1] = aux_sym__annotation_annotated_list_repeat1,
  [aux_sym__object_property_expression_annotated_list_repeat1] = aux_sym__object_property_expression_annotated_list_repeat1,
  [aux_sym__object_property_characteristic_annotated_list_repeat1] = aux_sym__object_property_characteristic_annotated_list_repeat1,
  [aux_sym__data_range_annotated_list_repeat1] = aux_sym__data_range_annotated_list_repeat1,
  [aux_sym__data_property_expression_annotated_list_repeat1] = aux_sym__data_property_expression_annotated_list_repeat1,
  [aux_sym__iri_annotated_list_repeat1] = aux_sym__iri_annotated_list_repeat1,
  [aux_sym__annotation_property_iri_annotated_list_repeat1] = aux_sym__annotation_property_iri_annotated_list_repeat1,
  [aux_sym__individual_annotated_list_repeat1] = aux_sym__individual_annotated_list_repeat1,
  [aux_sym__fact_annotated_list_repeat1] = aux_sym__fact_annotated_list_repeat1,
  [aux_sym__description_2list_repeat1] = aux_sym__description_2list_repeat1,
  [aux_sym__object_property_2list_repeat1] = aux_sym__object_property_2list_repeat1,
  [aux_sym__data_property_2list_repeat1] = aux_sym__data_property_2list_repeat1,
  [aux_sym__individual_2list_repeat1] = aux_sym__individual_2list_repeat1,
  [aux_sym__literal_list_repeat1] = aux_sym__literal_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
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
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
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
  [anon_sym_Prefix_COLON] = {
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
  [anon_sym_Annotations_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inverse] = {
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
  [sym__iri_rfc3987] = {
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
  [sym__iri] = {
    .visible = false,
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
  [sym__datatype] = {
    .visible = false,
    .named = true,
  },
  [sym_datatype_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_class_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_property_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_ontology_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_version_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_iri] = {
    .visible = true,
    .named = true,
  },
  [sym_individual_iri] = {
    .visible = true,
    .named = true,
  },
  [sym__individual] = {
    .visible = false,
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
  [sym__zero] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_typed_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal_no_language] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal_with_language] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__exponent] = {
    .visible = false,
    .named = true,
  },
  [sym__lexial_value] = {
    .visible = false,
    .named = true,
  },
  [sym__ontology_document] = {
    .visible = false,
    .named = true,
  },
  [sym_prefix_declaration] = {
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
  [sym__frame] = {
    .visible = false,
    .named = true,
  },
  [sym__annotations] = {
    .visible = false,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation_target] = {
    .visible = false,
    .named = true,
  },
  [sym__object_property_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__inverse_object_property] = {
    .visible = false,
    .named = true,
  },
  [sym__data_property_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_data_range] = {
    .visible = true,
    .named = true,
  },
  [sym__data_conjunction] = {
    .visible = false,
    .named = true,
  },
  [sym__data_primary] = {
    .visible = false,
    .named = true,
  },
  [sym__data_atomic] = {
    .visible = false,
    .named = true,
  },
  [sym_datatype_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym__facet] = {
    .visible = false,
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
  [sym__conjunction] = {
    .visible = false,
    .named = true,
  },
  [sym__primary] = {
    .visible = false,
    .named = true,
  },
  [sym__restriction] = {
    .visible = false,
    .named = true,
  },
  [sym__atomic] = {
    .visible = false,
    .named = true,
  },
  [sym_datatype_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_equavalent_to] = {
    .visible = true,
    .named = true,
  },
  [sym_class_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_class_of] = {
    .visible = true,
    .named = true,
  },
  [sym_equivalent_to] = {
    .visible = true,
    .named = true,
  },
  [sym_disjoint_with] = {
    .visible = true,
    .named = true,
  },
  [sym_disjoint_union_of] = {
    .visible = true,
    .named = true,
  },
  [sym_has_key] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property_frame] = {
    .visible = true,
    .named = true,
  },
  [sym__object_property_characteristic] = {
    .visible = false,
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
  [sym__fact] = {
    .visible = false,
    .named = true,
  },
  [sym__object_property_fact] = {
    .visible = false,
    .named = true,
  },
  [sym__data_property_fact] = {
    .visible = false,
    .named = true,
  },
  [sym_misc] = {
    .visible = true,
    .named = true,
  },
  [sym__description_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__annotation_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__object_property_expression_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__object_property_characteristic_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__data_range_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__data_property_expression_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__iri_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__annotation_property_iri_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__individual_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__fact_annotated_list] = {
    .visible = false,
    .named = true,
  },
  [sym__description_2list] = {
    .visible = false,
    .named = true,
  },
  [sym__object_property_2list] = {
    .visible = false,
    .named = true,
  },
  [sym__data_property_2list] = {
    .visible = false,
    .named = true,
  },
  [sym__individual_2list] = {
    .visible = false,
    .named = true,
  },
  [sym__individual_list] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_list] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__positive_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ontology_document_repeat1] = {
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
  [aux_sym__data_conjunction_repeat1] = {
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
  [aux_sym__conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_frame_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_has_key_repeat1] = {
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
  [aux_sym__description_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__annotation_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_property_expression_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_property_characteristic_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__data_range_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__data_property_expression_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__iri_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__annotation_property_iri_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__individual_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__fact_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__description_2list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_property_2list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__data_property_2list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__individual_2list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__literal_list_repeat1] = {
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
  [3] = 3,
  [4] = 2,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 2,
  [9] = 2,
  [10] = 10,
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
  [30] = 26,
  [31] = 27,
  [32] = 28,
  [33] = 27,
  [34] = 26,
  [35] = 28,
  [36] = 36,
  [37] = 37,
  [38] = 27,
  [39] = 26,
  [40] = 28,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 2,
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
  [63] = 45,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 45,
  [69] = 15,
  [70] = 19,
  [71] = 27,
  [72] = 28,
  [73] = 26,
  [74] = 25,
  [75] = 29,
  [76] = 24,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 80,
  [83] = 80,
  [84] = 80,
  [85] = 80,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 45,
  [92] = 92,
  [93] = 90,
  [94] = 90,
  [95] = 90,
  [96] = 90,
  [97] = 90,
  [98] = 90,
  [99] = 90,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 90,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 107,
  [112] = 112,
  [113] = 107,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 107,
  [118] = 107,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
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
  [143] = 120,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 150,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 112,
  [168] = 168,
  [169] = 114,
  [170] = 115,
  [171] = 116,
  [172] = 105,
  [173] = 173,
  [174] = 174,
  [175] = 150,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 150,
  [180] = 119,
  [181] = 121,
  [182] = 106,
  [183] = 183,
  [184] = 184,
  [185] = 142,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 112,
  [190] = 190,
  [191] = 114,
  [192] = 115,
  [193] = 116,
  [194] = 105,
  [195] = 6,
  [196] = 7,
  [197] = 3,
  [198] = 198,
  [199] = 199,
  [200] = 131,
  [201] = 201,
  [202] = 124,
  [203] = 127,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 119,
  [208] = 120,
  [209] = 121,
  [210] = 106,
  [211] = 6,
  [212] = 7,
  [213] = 3,
  [214] = 138,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 119,
  [219] = 219,
  [220] = 120,
  [221] = 221,
  [222] = 124,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 121,
  [227] = 227,
  [228] = 116,
  [229] = 229,
  [230] = 230,
  [231] = 127,
  [232] = 232,
  [233] = 105,
  [234] = 138,
  [235] = 106,
  [236] = 236,
  [237] = 230,
  [238] = 115,
  [239] = 114,
  [240] = 19,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 225,
  [245] = 242,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 230,
  [250] = 250,
  [251] = 251,
  [252] = 176,
  [253] = 253,
  [254] = 177,
  [255] = 225,
  [256] = 178,
  [257] = 257,
  [258] = 236,
  [259] = 225,
  [260] = 260,
  [261] = 112,
  [262] = 230,
  [263] = 263,
  [264] = 183,
  [265] = 163,
  [266] = 15,
  [267] = 267,
  [268] = 163,
  [269] = 6,
  [270] = 176,
  [271] = 3,
  [272] = 272,
  [273] = 7,
  [274] = 25,
  [275] = 24,
  [276] = 29,
  [277] = 267,
  [278] = 124,
  [279] = 127,
  [280] = 138,
  [281] = 281,
  [282] = 177,
  [283] = 178,
  [284] = 284,
  [285] = 267,
  [286] = 267,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 267,
  [291] = 291,
  [292] = 292,
  [293] = 183,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 267,
  [299] = 299,
  [300] = 299,
  [301] = 301,
  [302] = 100,
  [303] = 103,
  [304] = 26,
  [305] = 176,
  [306] = 177,
  [307] = 178,
  [308] = 102,
  [309] = 309,
  [310] = 310,
  [311] = 101,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 163,
  [317] = 299,
  [318] = 27,
  [319] = 299,
  [320] = 320,
  [321] = 299,
  [322] = 322,
  [323] = 323,
  [324] = 299,
  [325] = 325,
  [326] = 326,
  [327] = 28,
  [328] = 328,
  [329] = 329,
  [330] = 29,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 92,
  [335] = 183,
  [336] = 336,
  [337] = 15,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 19,
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
  [362] = 362,
  [363] = 19,
  [364] = 364,
  [365] = 15,
  [366] = 366,
  [367] = 367,
  [368] = 367,
  [369] = 29,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 367,
  [374] = 25,
  [375] = 24,
  [376] = 25,
  [377] = 24,
  [378] = 378,
  [379] = 29,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 367,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 367,
  [388] = 388,
  [389] = 367,
  [390] = 390,
  [391] = 391,
  [392] = 106,
  [393] = 393,
  [394] = 394,
  [395] = 29,
  [396] = 396,
  [397] = 112,
  [398] = 114,
  [399] = 115,
  [400] = 116,
  [401] = 105,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 404,
  [407] = 407,
  [408] = 119,
  [409] = 120,
  [410] = 121,
  [411] = 19,
  [412] = 412,
  [413] = 124,
  [414] = 127,
  [415] = 15,
  [416] = 416,
  [417] = 417,
  [418] = 15,
  [419] = 19,
  [420] = 420,
  [421] = 19,
  [422] = 15,
  [423] = 423,
  [424] = 424,
  [425] = 138,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 426,
  [430] = 24,
  [431] = 431,
  [432] = 426,
  [433] = 29,
  [434] = 434,
  [435] = 431,
  [436] = 25,
  [437] = 437,
  [438] = 438,
  [439] = 294,
  [440] = 440,
  [441] = 29,
  [442] = 442,
  [443] = 426,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 45,
  [448] = 19,
  [449] = 431,
  [450] = 450,
  [451] = 431,
  [452] = 24,
  [453] = 25,
  [454] = 24,
  [455] = 431,
  [456] = 456,
  [457] = 29,
  [458] = 297,
  [459] = 426,
  [460] = 426,
  [461] = 461,
  [462] = 25,
  [463] = 291,
  [464] = 464,
  [465] = 15,
  [466] = 431,
  [467] = 467,
  [468] = 468,
  [469] = 29,
  [470] = 470,
  [471] = 468,
  [472] = 472,
  [473] = 25,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 468,
  [480] = 470,
  [481] = 470,
  [482] = 29,
  [483] = 470,
  [484] = 468,
  [485] = 468,
  [486] = 24,
  [487] = 470,
  [488] = 29,
  [489] = 489,
  [490] = 29,
  [491] = 470,
  [492] = 468,
  [493] = 493,
  [494] = 494,
  [495] = 494,
  [496] = 496,
  [497] = 494,
  [498] = 498,
  [499] = 494,
  [500] = 494,
  [501] = 10,
  [502] = 494,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 29,
  [507] = 494,
  [508] = 508,
  [509] = 494,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 101,
  [514] = 92,
  [515] = 515,
  [516] = 512,
  [517] = 100,
  [518] = 103,
  [519] = 512,
  [520] = 512,
  [521] = 512,
  [522] = 522,
  [523] = 512,
  [524] = 512,
  [525] = 512,
  [526] = 102,
  [527] = 512,
  [528] = 11,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 534,
  [538] = 36,
  [539] = 534,
  [540] = 22,
  [541] = 20,
  [542] = 21,
  [543] = 41,
  [544] = 534,
  [545] = 534,
  [546] = 14,
  [547] = 547,
  [548] = 16,
  [549] = 37,
  [550] = 18,
  [551] = 551,
  [552] = 552,
  [553] = 12,
  [554] = 17,
  [555] = 534,
  [556] = 556,
  [557] = 534,
  [558] = 6,
  [559] = 7,
  [560] = 3,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 563,
  [565] = 565,
  [566] = 566,
  [567] = 534,
  [568] = 568,
  [569] = 534,
  [570] = 3,
  [571] = 571,
  [572] = 572,
  [573] = 572,
  [574] = 571,
  [575] = 571,
  [576] = 571,
  [577] = 572,
  [578] = 571,
  [579] = 7,
  [580] = 146,
  [581] = 571,
  [582] = 582,
  [583] = 10,
  [584] = 572,
  [585] = 585,
  [586] = 586,
  [587] = 572,
  [588] = 6,
  [589] = 572,
  [590] = 44,
  [591] = 572,
  [592] = 571,
  [593] = 593,
  [594] = 390,
  [595] = 595,
  [596] = 596,
  [597] = 92,
  [598] = 100,
  [599] = 103,
  [600] = 102,
  [601] = 101,
  [602] = 602,
  [603] = 596,
  [604] = 604,
  [605] = 602,
  [606] = 596,
  [607] = 100,
  [608] = 602,
  [609] = 103,
  [610] = 102,
  [611] = 596,
  [612] = 602,
  [613] = 602,
  [614] = 596,
  [615] = 596,
  [616] = 602,
  [617] = 596,
  [618] = 602,
  [619] = 602,
  [620] = 620,
  [621] = 596,
  [622] = 596,
  [623] = 101,
  [624] = 92,
  [625] = 602,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 41,
  [632] = 632,
  [633] = 16,
  [634] = 634,
  [635] = 37,
  [636] = 636,
  [637] = 637,
  [638] = 14,
  [639] = 20,
  [640] = 18,
  [641] = 641,
  [642] = 642,
  [643] = 3,
  [644] = 12,
  [645] = 17,
  [646] = 637,
  [647] = 36,
  [648] = 637,
  [649] = 637,
  [650] = 650,
  [651] = 6,
  [652] = 7,
  [653] = 11,
  [654] = 21,
  [655] = 22,
  [656] = 10,
  [657] = 657,
  [658] = 658,
  [659] = 146,
  [660] = 660,
  [661] = 10,
  [662] = 658,
  [663] = 663,
  [664] = 658,
  [665] = 658,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 10,
  [670] = 44,
  [671] = 658,
  [672] = 658,
  [673] = 92,
  [674] = 674,
  [675] = 674,
  [676] = 101,
  [677] = 674,
  [678] = 674,
  [679] = 674,
  [680] = 101,
  [681] = 100,
  [682] = 10,
  [683] = 100,
  [684] = 92,
  [685] = 103,
  [686] = 103,
  [687] = 102,
  [688] = 674,
  [689] = 102,
  [690] = 100,
  [691] = 101,
  [692] = 92,
  [693] = 674,
  [694] = 103,
  [695] = 674,
  [696] = 674,
  [697] = 102,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 700,
  [702] = 698,
  [703] = 703,
  [704] = 704,
  [705] = 703,
  [706] = 706,
  [707] = 120,
  [708] = 700,
  [709] = 112,
  [710] = 704,
  [711] = 703,
  [712] = 6,
  [713] = 7,
  [714] = 704,
  [715] = 703,
  [716] = 11,
  [717] = 3,
  [718] = 704,
  [719] = 703,
  [720] = 36,
  [721] = 102,
  [722] = 22,
  [723] = 20,
  [724] = 21,
  [725] = 11,
  [726] = 698,
  [727] = 41,
  [728] = 14,
  [729] = 16,
  [730] = 730,
  [731] = 37,
  [732] = 18,
  [733] = 36,
  [734] = 12,
  [735] = 17,
  [736] = 6,
  [737] = 7,
  [738] = 3,
  [739] = 106,
  [740] = 22,
  [741] = 20,
  [742] = 21,
  [743] = 115,
  [744] = 730,
  [745] = 41,
  [746] = 101,
  [747] = 92,
  [748] = 6,
  [749] = 7,
  [750] = 3,
  [751] = 14,
  [752] = 730,
  [753] = 16,
  [754] = 18,
  [755] = 12,
  [756] = 17,
  [757] = 704,
  [758] = 698,
  [759] = 704,
  [760] = 11,
  [761] = 730,
  [762] = 121,
  [763] = 100,
  [764] = 700,
  [765] = 103,
  [766] = 36,
  [767] = 22,
  [768] = 698,
  [769] = 20,
  [770] = 21,
  [771] = 703,
  [772] = 730,
  [773] = 41,
  [774] = 14,
  [775] = 698,
  [776] = 730,
  [777] = 698,
  [778] = 730,
  [779] = 16,
  [780] = 37,
  [781] = 18,
  [782] = 116,
  [783] = 704,
  [784] = 703,
  [785] = 12,
  [786] = 17,
  [787] = 105,
  [788] = 700,
  [789] = 119,
  [790] = 703,
  [791] = 704,
  [792] = 703,
  [793] = 114,
  [794] = 700,
  [795] = 704,
  [796] = 37,
  [797] = 22,
  [798] = 20,
  [799] = 16,
  [800] = 37,
  [801] = 124,
  [802] = 18,
  [803] = 7,
  [804] = 21,
  [805] = 44,
  [806] = 44,
  [807] = 44,
  [808] = 36,
  [809] = 11,
  [810] = 41,
  [811] = 6,
  [812] = 12,
  [813] = 17,
  [814] = 127,
  [815] = 138,
  [816] = 3,
  [817] = 817,
  [818] = 14,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 44,
  [824] = 438,
  [825] = 825,
  [826] = 826,
  [827] = 827,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 830,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 834,
  [837] = 830,
  [838] = 834,
  [839] = 839,
  [840] = 833,
  [841] = 832,
  [842] = 832,
  [843] = 833,
  [844] = 833,
  [845] = 830,
  [846] = 832,
  [847] = 830,
  [848] = 834,
  [849] = 849,
  [850] = 834,
  [851] = 834,
  [852] = 832,
  [853] = 833,
  [854] = 832,
  [855] = 833,
  [856] = 830,
  [857] = 830,
  [858] = 834,
  [859] = 859,
  [860] = 832,
  [861] = 833,
  [862] = 862,
  [863] = 863,
  [864] = 863,
  [865] = 863,
  [866] = 863,
  [867] = 862,
  [868] = 868,
  [869] = 869,
  [870] = 869,
  [871] = 871,
  [872] = 872,
  [873] = 863,
  [874] = 869,
  [875] = 875,
  [876] = 876,
  [877] = 877,
  [878] = 869,
  [879] = 879,
  [880] = 869,
  [881] = 862,
  [882] = 869,
  [883] = 875,
  [884] = 863,
  [885] = 875,
  [886] = 886,
  [887] = 875,
  [888] = 888,
  [889] = 863,
  [890] = 869,
  [891] = 891,
  [892] = 862,
  [893] = 862,
  [894] = 869,
  [895] = 869,
  [896] = 896,
  [897] = 869,
  [898] = 875,
  [899] = 899,
  [900] = 862,
  [901] = 875,
  [902] = 902,
  [903] = 863,
  [904] = 863,
  [905] = 863,
  [906] = 875,
  [907] = 907,
  [908] = 875,
  [909] = 863,
  [910] = 869,
  [911] = 862,
  [912] = 907,
  [913] = 913,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '"', 2,
        '#', 521,
        '(', 580,
        ')', 581,
        '+', 541,
        ',', 583,
        '-', 542,
        '.', 544,
        '0', 538,
        '<', 523,
        '>', 524,
        '@', 503,
        'A', 312,
        'C', 236,
        'D', 99,
        'E', 560,
        'F', 553,
        'H', 103,
        'I', 292,
        'O', 139,
        'P', 375,
        'R', 113,
        'S', 107,
        'T', 379,
        '[', 582,
        ']', 584,
        '^', 98,
        '_', 42,
        'a', 303,
        'd', 172,
        'e', 557,
        'f', 549,
        'i', 304,
        'l', 115,
        'm', 104,
        'n', 341,
        'o', 630,
        'p', 111,
        's', 353,
        't', 238,
        'v', 109,
        '{', 578,
        '}', 579,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '#', 521,
        '+', 541,
        '-', 543,
        '.', 545,
        '0', 539,
        ':', 504,
        '<', 522,
        '_', 1022,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(562);
      if (lookahead == '\\') ADVANCE(502);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ')', 581,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ')', 581,
        ',', 583,
        ':', 504,
        '<', 522,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '.', 545,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'd', 737,
        'e', 556,
        'f', 547,
        'i', 847,
        'n', 860,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '.', 545,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'e', 556,
        'f', 548,
        'i', 837,
        'n', 860,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'd', 737,
        'e', 556,
        'f', 547,
        'i', 847,
        'n', 860,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'e', 556,
        'f', 548,
        'i', 837,
        'n', 860,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        ':', 504,
        '<', 522,
        '@', 503,
        '^', 98,
        'd', 737,
        'f', 814,
        'i', 847,
        'n', 860,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        ':', 504,
        '<', 522,
        '@', 503,
        '^', 98,
        'i', 837,
        'n', 860,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        ':', 504,
        '<', 522,
        '@', 503,
        '^', 98,
        'i', 837,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ':', 504,
        '<', 522,
        'A', 856,
        'd', 737,
        'f', 814,
        'i', 847,
        'n', 860,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ':', 504,
        '<', 522,
        'A', 856,
        'i', 837,
        'n', 860,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ':', 504,
        '<', 522,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ':', 504,
        '<', 522,
        'd', 737,
        'f', 814,
        'i', 832,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ':', 504,
        '<', 522,
        'd', 737,
        'f', 814,
        'i', 847,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '.', 544,
        '0', 538,
        'A', 405,
        'E', 558,
        'F', 554,
        'I', 316,
        'R', 160,
        'S', 494,
        'T', 378,
        'e', 555,
        'f', 546,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '.', 545,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        '_', 1022,
        'e', 556,
        'f', 548,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '.', 545,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'e', 556,
        'f', 548,
        'i', 837,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '.', 545,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'e', 556,
        'f', 548,
        'n', 860,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '.', 545,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'e', 556,
        'f', 548,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        '_', 1022,
        'e', 556,
        'f', 548,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'e', 556,
        'f', 548,
        'i', 837,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'e', 556,
        'f', 548,
        'n', 860,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'E', 559,
        'F', 551,
        'e', 556,
        'f', 548,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == ',') ADVANCE(583);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(522);
      if (lookahead == '@') ADVANCE(503);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == '_') ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == ',') ADVANCE(583);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(522);
      if (lookahead == '@') ADVANCE(503);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == ',') ADVANCE(583);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(522);
      if (lookahead == '@') ADVANCE(503);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(522);
      if (lookahead == 'A') ADVANCE(856);
      if (lookahead == '_') ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(522);
      if (lookahead == 'A') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(522);
      if (lookahead == 'A') ADVANCE(856);
      if (lookahead == 'n') ADVANCE(860);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(522);
      if (lookahead == 'A') ADVANCE(856);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1023);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '@') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '%' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '%' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(534);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(606);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(646);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(620);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(644);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(618);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(614);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(566);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(564);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(648);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(602);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(565);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(624);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(642);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(608);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(568);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(638);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(610);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(604);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(650);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(622);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(616);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(660);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(626);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(654);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(612);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(628);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(652);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(640);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(658);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(662);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(656);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(414);
      if (lookahead == 'I') ADVANCE(313);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(285);
      if (lookahead == 'P') ADVANCE(380);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(239);
      if (lookahead == 'O') ADVANCE(219);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(286);
      if (lookahead == 'P') ADVANCE(402);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(286);
      if (lookahead == 'P') ADVANCE(402);
      if (lookahead == 'U') ADVANCE(335);
      if (lookahead == 'W') ADVANCE(255);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(291);
      if (lookahead == 'P') ADVANCE(404);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(291);
      if (lookahead == 'P') ADVANCE(404);
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 83:
      if (lookahead == 'F') ADVANCE(472);
      END_STATE();
    case 84:
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(217);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'I') ADVANCE(338);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(313);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(338);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(173);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(185);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(189);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(217);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(218);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(220);
      END_STATE();
    case 94:
      if (lookahead == 'P') ADVANCE(399);
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 95:
      if (lookahead == 'P') ADVANCE(401);
      END_STATE();
    case 96:
      if (lookahead == 'P') ADVANCE(403);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == '^') ADVANCE(540);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(635);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(636);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(446);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(574);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'v') ADVANCE(205);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(469);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(595);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 213:
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 214:
      if (lookahead == 'f') ADVANCE(281);
      END_STATE();
    case 215:
      if (lookahead == 'f') ADVANCE(242);
      END_STATE();
    case 216:
      if (lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 217:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 218:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 219:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 221:
      if (lookahead == 'f') ADVANCE(288);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 223:
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(532);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(437);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(438);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(440);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(496);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(585);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(587);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(586);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 270:
      if (lookahead == 'j') ADVANCE(356);
      END_STATE();
    case 271:
      if (lookahead == 'j') ADVANCE(192);
      END_STATE();
    case 272:
      if (lookahead == 'j') ADVANCE(357);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(631);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 292:
      if (lookahead == 'm') ADVANCE(363);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 293:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 294:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 295:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 296:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 297:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 299:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 368:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 369:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 370:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 371:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 372:
      if (lookahead == 'q') ADVANCE(467);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(364);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(200);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 474:
      if (lookahead == 'v') ADVANCE(241);
      END_STATE();
    case 475:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 476:
      if (lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 477:
      if (lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 478:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 479:
      if (lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 480:
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 481:
      if (lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 482:
      if (lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 483:
      if (lookahead == 'x') ADVANCE(599);
      END_STATE();
    case 484:
      if (lookahead == 'x') ADVANCE(598);
      END_STATE();
    case 485:
      if (lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 486:
      if (lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 487:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 488:
      if (lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 489:
      if (lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 490:
      if (lookahead == 'y') ADVANCE(600);
      END_STATE();
    case 491:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 492:
      if (lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 493:
      if (lookahead == 'y') ADVANCE(364);
      END_STATE();
    case 494:
      if (lookahead == 'y') ADVANCE(300);
      END_STATE();
    case 495:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 496:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 497:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 498:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 499:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 500:
      if (lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 501:
      if (lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 502:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 503:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 504:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 505:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 782,
        'D', 692,
        'E', 892,
        'I', 830,
        'O', 720,
        'R', 704,
        'S', 696,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 506:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 782,
        'D', 692,
        'E', 892,
        'I', 857,
        'O', 720,
        'R', 704,
        'S', 698,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 507:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 815,
        'D', 694,
        'E', 892,
        'H', 707,
        'I', 857,
        'O', 720,
        'S', 697,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 508:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 815,
        'D', 693,
        'E', 893,
        'F', 715,
        'I', 857,
        'O', 720,
        'S', 709,
        'T', 990,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 509:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        '0', 539,
        ':', 504,
        '<', 522,
        'A', 855,
        'C', 815,
        'D', 695,
        'E', 893,
        'I', 857,
        'O', 720,
        'S', 699,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 510:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 782,
        'D', 692,
        'E', 892,
        'I', 830,
        'O', 720,
        'R', 704,
        'S', 696,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(510);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 511:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 782,
        'D', 692,
        'E', 892,
        'I', 857,
        'O', 720,
        'R', 704,
        'S', 698,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(511);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 512:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 815,
        'D', 694,
        'E', 892,
        'H', 707,
        'I', 857,
        'O', 720,
        'S', 697,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(512);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 513:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 815,
        'D', 693,
        'E', 893,
        'F', 715,
        'I', 857,
        'O', 720,
        'S', 709,
        'T', 990,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(513);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 514:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        '(', 580,
        ',', 583,
        ':', 504,
        '<', 522,
        'A', 855,
        'C', 815,
        'D', 695,
        'E', 893,
        'I', 857,
        'O', 720,
        'S', 699,
        'a', 831,
        'd', 737,
        'f', 814,
        'i', 832,
        'n', 860,
        'o', 894,
        's', 949,
        '{', 578,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(514);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 515:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        ')', 581,
        ',', 583,
        '.', 544,
        '0', 538,
        '<', 523,
        '>', 524,
        'A', 311,
        'C', 236,
        'D', 101,
        'E', 560,
        'F', 550,
        'H', 103,
        'I', 337,
        'O', 138,
        'R', 112,
        'S', 132,
        ']', 584,
        'a', 303,
        'e', 555,
        'f', 546,
        'l', 115,
        'm', 116,
        'o', 374,
        'p', 111,
        '}', 579,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(515);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 516:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        ')', 581,
        ',', 583,
        '@', 503,
        'A', 312,
        'C', 236,
        'D', 99,
        'E', 372,
        'F', 102,
        'H', 103,
        'I', 292,
        'O', 139,
        'P', 375,
        'R', 113,
        'S', 107,
        'T', 379,
        '[', 582,
        ']', 584,
        '^', 98,
        'a', 303,
        'e', 486,
        'm', 114,
        'o', 320,
        's', 352,
        't', 238,
        'v', 109,
        '}', 579,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(516);
      END_STATE();
    case 517:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        '.', 544,
        '0', 538,
        'A', 311,
        'C', 284,
        'D', 100,
        'E', 561,
        'F', 552,
        'I', 340,
        'O', 138,
        'S', 106,
        'T', 493,
        'a', 303,
        'e', 555,
        'f', 546,
        'o', 374,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(517);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 518:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 815,
        'D', 694,
        'E', 892,
        'H', 707,
        'I', 857,
        'O', 720,
        'S', 697,
        'i', 837,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(518);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 519:
      if (eof) ADVANCE(520);
      ADVANCE_MAP(
        '#', 521,
        ',', 583,
        ':', 504,
        '<', 522,
        'A', 839,
        'C', 815,
        'D', 695,
        'E', 893,
        'I', 824,
        'O', 720,
        'S', 699,
        ']', 584,
        '}', 579,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(519);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(590);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(591);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym__COLON);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym__COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__non_zero);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__non_zero);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(862);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'q') ADVANCE(467);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'q') ADVANCE(473);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__language_tag);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_Import_COLON);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_Import_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_minLength);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_maxLength);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_langRange);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == 'L') ADVANCE(189);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == 'L') ADVANCE(185);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_DisjointUnionOf_COLON);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_DisjointUnionOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_HasKey_COLON);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_HasKey_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_Functional);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_InverseFunctional);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_Reflexive);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_Irreflexive);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_Symmetric);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_Asymmetric);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_Transitive);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DataProperty_COLON);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DataProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_AnnotationProperty_COLON);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_AnnotationProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_Individual_COLON);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_Individual_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_Types_COLON);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_Types_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_Facts_COLON);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_Facts_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_SameAs_COLON);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_SameAs_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_DifferentFrom_COLON);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_DifferentFrom_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_EquivalentClasses_COLON);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_EquivalentClasses_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_DisjointClasses_COLON);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_DisjointClasses_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_EquivalentProperties_COLON);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_EquivalentProperties_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_DisjointProperties_COLON);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_DisjointProperties_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_SameIndividual_COLON);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_SameIndividual_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_DifferentIndividuals_COLON);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_DifferentIndividuals_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__iri_rfc3987);
      if (lookahead == '#') ADVANCE(666);
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == '?') ADVANCE(665);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__iri_rfc3987);
      if (lookahead == '#') ADVANCE(666);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__iri_rfc3987);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'A') ADVANCE(936);
      if (lookahead == 'I') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(784);
      if (lookahead == 'O') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(818);
      if (lookahead == 'P') ADVANCE(915);
      if (lookahead == 'U') ADVANCE(849);
      if (lookahead == 'W') ADVANCE(794);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(818);
      if (lookahead == 'P') ADVANCE(915);
      if (lookahead == 'W') ADVANCE(794);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(818);
      if (lookahead == 'P') ADVANCE(915);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(820);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(823);
      if (lookahead == 'P') ADVANCE(917);
      if (lookahead == 'T') ADVANCE(863);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(823);
      if (lookahead == 'P') ADVANCE(917);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'F') ADVANCE(902);
      if (lookahead == 'I') ADVANCE(854);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'I') ADVANCE(836);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'I') ADVANCE(854);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'K') ADVANCE(760);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'O') ADVANCE(772);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'O') ADVANCE(773);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'O') ADVANCE(774);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'O') ADVANCE(775);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'P') ADVANCE(898);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'P') ADVANCE(912);
      if (lookahead == 't') ADVANCE(984);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'P') ADVANCE(914);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'P') ADVANCE(916);
      if (lookahead == 's') ADVANCE(999);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'P') ADVANCE(916);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'P') ADVANCE(918);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead == 'i') ADVANCE(769);
      if (lookahead == 'o') ADVANCE(826);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead == 'i') ADVANCE(778);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead == 'i') ADVANCE(770);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(952);
      if (lookahead == 'i') ADVANCE(771);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(721);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(901);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(942);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(919);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(828);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(792);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(817);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(964);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(923);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(966);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(939);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'b') ADVANCE(810);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'b') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'b') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'b') ADVANCE(688);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'c') ADVANCE(797);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'c') ADVANCE(970);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'c') ADVANCE(928);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'c') ADVANCE(965);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'c') ADVANCE(967);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(974);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(787);
      if (lookahead == 'v') ADVANCE(744);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(787);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(975);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(976);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(804);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(996);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(841);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(781);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(908);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(910);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(989);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(931);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(858);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 's') ADVANCE(811);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(997);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(1003);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(1015);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(1016);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(746);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'g') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'g') ADVANCE(743);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'g') ADVANCE(747);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'h') ADVANCE(701);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'h') ADVANCE(1001);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'h') ADVANCE(716);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(979);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(927);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(864);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(945);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(827);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(866);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'j') ADVANCE(871);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'j') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'j') ADVANCE(872);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'j') ADVANCE(873);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(862);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(1005);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(708);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(750);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(768);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(882);
      if (lookahead == 'n') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(711);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(1020);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(729);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(953);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(780);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(981);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(995);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(848);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(971);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(944);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(946);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(1008);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(947);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(948);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(954);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(869);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(799);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(870);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(851);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(852);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(972);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(941);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(829);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(1002);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(834);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(853);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(859);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(850);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(957);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(962);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(793);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(796);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(800);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(907);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(886);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(888);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(891);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(874);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(745);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(748);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(756);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(758);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(762);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(763);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(765);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(766);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'q') ADVANCE(973);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'q') ADVANCE(977);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(791);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(868);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(749);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(789);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(710);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(950);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(951);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(959);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(955);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(960);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(963);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(969);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(877);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(881);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(993);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(920);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(940);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(999);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(754);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1006);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1007);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1009);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1011);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1012);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1013);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1017);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1018);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(1019);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(757);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 's') ADVANCE(681);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(783);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(985);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(751);
      if (lookahead == 'v') ADVANCE(753);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(751);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(991);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(788);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(805);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(1021);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(801);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(752);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(802);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(718);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(685);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(785);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(703);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'u') ADVANCE(807);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'v') ADVANCE(786);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'v') ADVANCE(691);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'v') ADVANCE(798);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'v') ADVANCE(753);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'v') ADVANCE(803);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'v') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(883);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(668);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(1000);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(1004);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(1010);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(1014);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(890);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(680);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(619);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(643);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(639);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(623);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(661);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(627);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(655);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(629);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(653);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(647);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(645);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(651);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1023);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1024);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 510},
  [3] = {.lex_state = 516},
  [4] = {.lex_state = 511},
  [5] = {.lex_state = 512},
  [6] = {.lex_state = 516},
  [7] = {.lex_state = 516},
  [8] = {.lex_state = 513},
  [9] = {.lex_state = 514},
  [10] = {.lex_state = 516},
  [11] = {.lex_state = 516},
  [12] = {.lex_state = 516},
  [13] = {.lex_state = 516},
  [14] = {.lex_state = 516},
  [15] = {.lex_state = 515},
  [16] = {.lex_state = 516},
  [17] = {.lex_state = 516},
  [18] = {.lex_state = 516},
  [19] = {.lex_state = 515},
  [20] = {.lex_state = 516},
  [21] = {.lex_state = 516},
  [22] = {.lex_state = 516},
  [23] = {.lex_state = 516},
  [24] = {.lex_state = 515},
  [25] = {.lex_state = 515},
  [26] = {.lex_state = 505},
  [27] = {.lex_state = 505},
  [28] = {.lex_state = 505},
  [29] = {.lex_state = 515},
  [30] = {.lex_state = 506},
  [31] = {.lex_state = 506},
  [32] = {.lex_state = 506},
  [33] = {.lex_state = 507},
  [34] = {.lex_state = 507},
  [35] = {.lex_state = 507},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 508},
  [39] = {.lex_state = 508},
  [40] = {.lex_state = 508},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 519},
  [43] = {.lex_state = 519},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 510},
  [46] = {.lex_state = 516},
  [47] = {.lex_state = 516},
  [48] = {.lex_state = 511},
  [49] = {.lex_state = 516},
  [50] = {.lex_state = 516},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 516},
  [53] = {.lex_state = 516},
  [54] = {.lex_state = 516},
  [55] = {.lex_state = 518},
  [56] = {.lex_state = 518},
  [57] = {.lex_state = 516},
  [58] = {.lex_state = 516},
  [59] = {.lex_state = 516},
  [60] = {.lex_state = 516},
  [61] = {.lex_state = 516},
  [62] = {.lex_state = 516},
  [63] = {.lex_state = 512},
  [64] = {.lex_state = 516},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 518},
  [67] = {.lex_state = 516},
  [68] = {.lex_state = 513},
  [69] = {.lex_state = 517},
  [70] = {.lex_state = 517},
  [71] = {.lex_state = 509},
  [72] = {.lex_state = 509},
  [73] = {.lex_state = 509},
  [74] = {.lex_state = 517},
  [75] = {.lex_state = 517},
  [76] = {.lex_state = 517},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 514},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 516},
  [106] = {.lex_state = 516},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 516},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 516},
  [115] = {.lex_state = 516},
  [116] = {.lex_state = 516},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 516},
  [120] = {.lex_state = 516},
  [121] = {.lex_state = 516},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 516},
  [124] = {.lex_state = 516},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 516},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 516},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 516},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 516},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 516},
  [144] = {.lex_state = 516},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 518},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 516},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 516},
  [162] = {.lex_state = 516},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 516},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 516},
  [170] = {.lex_state = 516},
  [171] = {.lex_state = 516},
  [172] = {.lex_state = 516},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 516},
  [181] = {.lex_state = 516},
  [182] = {.lex_state = 516},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 518},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 516},
  [190] = {.lex_state = 516},
  [191] = {.lex_state = 516},
  [192] = {.lex_state = 516},
  [193] = {.lex_state = 516},
  [194] = {.lex_state = 516},
  [195] = {.lex_state = 518},
  [196] = {.lex_state = 518},
  [197] = {.lex_state = 518},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 518},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 516},
  [203] = {.lex_state = 516},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 516},
  [208] = {.lex_state = 516},
  [209] = {.lex_state = 516},
  [210] = {.lex_state = 516},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 516},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 516},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 516},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 516},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 516},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 516},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 516},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 516},
  [234] = {.lex_state = 516},
  [235] = {.lex_state = 516},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 516},
  [239] = {.lex_state = 516},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 516},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 519},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 519},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 519},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 516},
  [279] = {.lex_state = 516},
  [280] = {.lex_state = 516},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 3},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 10},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 10},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 3},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 9},
  [351] = {.lex_state = 17},
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
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 17},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 11},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 17},
  [378] = {.lex_state = 519},
  [379] = {.lex_state = 17},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 11},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 11},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 11},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 16},
  [392] = {.lex_state = 516},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 8},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 516},
  [398] = {.lex_state = 516},
  [399] = {.lex_state = 516},
  [400] = {.lex_state = 516},
  [401] = {.lex_state = 516},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 30},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 516},
  [409] = {.lex_state = 516},
  [410] = {.lex_state = 516},
  [411] = {.lex_state = 19},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 516},
  [414] = {.lex_state = 516},
  [415] = {.lex_state = 20},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 31},
  [418] = {.lex_state = 18},
  [419] = {.lex_state = 18},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 20},
  [422] = {.lex_state = 19},
  [423] = {.lex_state = 30},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 516},
  [426] = {.lex_state = 10},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 24},
  [431] = {.lex_state = 10},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 20},
  [434] = {.lex_state = 11},
  [435] = {.lex_state = 10},
  [436] = {.lex_state = 23},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 18},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 10},
  [444] = {.lex_state = 31},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 4},
  [448] = {.lex_state = 21},
  [449] = {.lex_state = 10},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 10},
  [452] = {.lex_state = 23},
  [453] = {.lex_state = 22},
  [454] = {.lex_state = 22},
  [455] = {.lex_state = 10},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 19},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 10},
  [460] = {.lex_state = 10},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 24},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 21},
  [466] = {.lex_state = 10},
  [467] = {.lex_state = 29},
  [468] = {.lex_state = 11},
  [469] = {.lex_state = 22},
  [470] = {.lex_state = 11},
  [471] = {.lex_state = 11},
  [472] = {.lex_state = 30},
  [473] = {.lex_state = 25},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 11},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 11},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 24},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 11},
  [485] = {.lex_state = 11},
  [486] = {.lex_state = 25},
  [487] = {.lex_state = 11},
  [488] = {.lex_state = 23},
  [489] = {.lex_state = 29},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 11},
  [492] = {.lex_state = 11},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 16},
  [495] = {.lex_state = 16},
  [496] = {.lex_state = 27},
  [497] = {.lex_state = 16},
  [498] = {.lex_state = 29},
  [499] = {.lex_state = 16},
  [500] = {.lex_state = 16},
  [501] = {.lex_state = 9},
  [502] = {.lex_state = 16},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 27},
  [505] = {.lex_state = 30},
  [506] = {.lex_state = 25},
  [507] = {.lex_state = 16},
  [508] = {.lex_state = 16},
  [509] = {.lex_state = 16},
  [510] = {.lex_state = 30},
  [511] = {.lex_state = 32},
  [512] = {.lex_state = 32},
  [513] = {.lex_state = 9},
  [514] = {.lex_state = 9},
  [515] = {.lex_state = 26},
  [516] = {.lex_state = 32},
  [517] = {.lex_state = 9},
  [518] = {.lex_state = 9},
  [519] = {.lex_state = 32},
  [520] = {.lex_state = 32},
  [521] = {.lex_state = 32},
  [522] = {.lex_state = 26},
  [523] = {.lex_state = 32},
  [524] = {.lex_state = 32},
  [525] = {.lex_state = 32},
  [526] = {.lex_state = 9},
  [527] = {.lex_state = 32},
  [528] = {.lex_state = 9},
  [529] = {.lex_state = 26},
  [530] = {.lex_state = 11},
  [531] = {.lex_state = 32},
  [532] = {.lex_state = 26},
  [533] = {.lex_state = 11},
  [534] = {.lex_state = 32},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 26},
  [537] = {.lex_state = 32},
  [538] = {.lex_state = 9},
  [539] = {.lex_state = 32},
  [540] = {.lex_state = 9},
  [541] = {.lex_state = 9},
  [542] = {.lex_state = 9},
  [543] = {.lex_state = 9},
  [544] = {.lex_state = 32},
  [545] = {.lex_state = 32},
  [546] = {.lex_state = 9},
  [547] = {.lex_state = 28},
  [548] = {.lex_state = 9},
  [549] = {.lex_state = 9},
  [550] = {.lex_state = 9},
  [551] = {.lex_state = 26},
  [552] = {.lex_state = 26},
  [553] = {.lex_state = 9},
  [554] = {.lex_state = 9},
  [555] = {.lex_state = 32},
  [556] = {.lex_state = 11},
  [557] = {.lex_state = 32},
  [558] = {.lex_state = 9},
  [559] = {.lex_state = 9},
  [560] = {.lex_state = 9},
  [561] = {.lex_state = 26},
  [562] = {.lex_state = 11},
  [563] = {.lex_state = 26},
  [564] = {.lex_state = 26},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 32},
  [567] = {.lex_state = 32},
  [568] = {.lex_state = 11},
  [569] = {.lex_state = 32},
  [570] = {.lex_state = 1},
  [571] = {.lex_state = 515},
  [572] = {.lex_state = 515},
  [573] = {.lex_state = 515},
  [574] = {.lex_state = 515},
  [575] = {.lex_state = 515},
  [576] = {.lex_state = 515},
  [577] = {.lex_state = 515},
  [578] = {.lex_state = 515},
  [579] = {.lex_state = 1},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 515},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 515},
  [585] = {.lex_state = 515},
  [586] = {.lex_state = 32},
  [587] = {.lex_state = 515},
  [588] = {.lex_state = 1},
  [589] = {.lex_state = 515},
  [590] = {.lex_state = 9},
  [591] = {.lex_state = 515},
  [592] = {.lex_state = 515},
  [593] = {.lex_state = 515},
  [594] = {.lex_state = 1},
  [595] = {.lex_state = 32},
  [596] = {.lex_state = 28},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 28},
  [603] = {.lex_state = 28},
  [604] = {.lex_state = 28},
  [605] = {.lex_state = 28},
  [606] = {.lex_state = 28},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 28},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 10},
  [611] = {.lex_state = 28},
  [612] = {.lex_state = 28},
  [613] = {.lex_state = 28},
  [614] = {.lex_state = 28},
  [615] = {.lex_state = 28},
  [616] = {.lex_state = 28},
  [617] = {.lex_state = 28},
  [618] = {.lex_state = 28},
  [619] = {.lex_state = 28},
  [620] = {.lex_state = 32},
  [621] = {.lex_state = 28},
  [622] = {.lex_state = 28},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 28},
  [626] = {.lex_state = 28},
  [627] = {.lex_state = 28},
  [628] = {.lex_state = 28},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 28},
  [631] = {.lex_state = 10},
  [632] = {.lex_state = 28},
  [633] = {.lex_state = 10},
  [634] = {.lex_state = 28},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 28},
  [637] = {.lex_state = 28},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 28},
  [642] = {.lex_state = 28},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 28},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 28},
  [649] = {.lex_state = 28},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 10},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 27},
  [657] = {.lex_state = 28},
  [658] = {.lex_state = 516},
  [659] = {.lex_state = 516},
  [660] = {.lex_state = 28},
  [661] = {.lex_state = 11},
  [662] = {.lex_state = 516},
  [663] = {.lex_state = 515},
  [664] = {.lex_state = 516},
  [665] = {.lex_state = 516},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 515},
  [668] = {.lex_state = 28},
  [669] = {.lex_state = 26},
  [670] = {.lex_state = 10},
  [671] = {.lex_state = 516},
  [672] = {.lex_state = 516},
  [673] = {.lex_state = 11},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 11},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 27},
  [681] = {.lex_state = 26},
  [682] = {.lex_state = 28},
  [683] = {.lex_state = 11},
  [684] = {.lex_state = 27},
  [685] = {.lex_state = 26},
  [686] = {.lex_state = 11},
  [687] = {.lex_state = 27},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 11},
  [690] = {.lex_state = 27},
  [691] = {.lex_state = 26},
  [692] = {.lex_state = 26},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 27},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 26},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 516},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 516},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 11},
  [713] = {.lex_state = 11},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 27},
  [717] = {.lex_state = 11},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 27},
  [721] = {.lex_state = 28},
  [722] = {.lex_state = 27},
  [723] = {.lex_state = 27},
  [724] = {.lex_state = 27},
  [725] = {.lex_state = 11},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 27},
  [728] = {.lex_state = 27},
  [729] = {.lex_state = 27},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 27},
  [732] = {.lex_state = 27},
  [733] = {.lex_state = 11},
  [734] = {.lex_state = 27},
  [735] = {.lex_state = 27},
  [736] = {.lex_state = 26},
  [737] = {.lex_state = 26},
  [738] = {.lex_state = 26},
  [739] = {.lex_state = 516},
  [740] = {.lex_state = 11},
  [741] = {.lex_state = 11},
  [742] = {.lex_state = 11},
  [743] = {.lex_state = 516},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 11},
  [746] = {.lex_state = 28},
  [747] = {.lex_state = 28},
  [748] = {.lex_state = 27},
  [749] = {.lex_state = 27},
  [750] = {.lex_state = 27},
  [751] = {.lex_state = 11},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 11},
  [754] = {.lex_state = 11},
  [755] = {.lex_state = 11},
  [756] = {.lex_state = 11},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 26},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 516},
  [763] = {.lex_state = 28},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 28},
  [766] = {.lex_state = 26},
  [767] = {.lex_state = 26},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 26},
  [770] = {.lex_state = 26},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 26},
  [774] = {.lex_state = 26},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 26},
  [780] = {.lex_state = 26},
  [781] = {.lex_state = 26},
  [782] = {.lex_state = 516},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 26},
  [786] = {.lex_state = 26},
  [787] = {.lex_state = 516},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 516},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 516},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 11},
  [797] = {.lex_state = 28},
  [798] = {.lex_state = 28},
  [799] = {.lex_state = 28},
  [800] = {.lex_state = 28},
  [801] = {.lex_state = 516},
  [802] = {.lex_state = 28},
  [803] = {.lex_state = 28},
  [804] = {.lex_state = 28},
  [805] = {.lex_state = 27},
  [806] = {.lex_state = 26},
  [807] = {.lex_state = 11},
  [808] = {.lex_state = 28},
  [809] = {.lex_state = 28},
  [810] = {.lex_state = 28},
  [811] = {.lex_state = 28},
  [812] = {.lex_state = 28},
  [813] = {.lex_state = 28},
  [814] = {.lex_state = 516},
  [815] = {.lex_state = 516},
  [816] = {.lex_state = 28},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 28},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 28},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 515},
  [831] = {.lex_state = 515},
  [832] = {.lex_state = 515},
  [833] = {.lex_state = 515},
  [834] = {.lex_state = 515},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 515},
  [837] = {.lex_state = 515},
  [838] = {.lex_state = 515},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 515},
  [841] = {.lex_state = 515},
  [842] = {.lex_state = 515},
  [843] = {.lex_state = 515},
  [844] = {.lex_state = 515},
  [845] = {.lex_state = 515},
  [846] = {.lex_state = 515},
  [847] = {.lex_state = 515},
  [848] = {.lex_state = 515},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 515},
  [851] = {.lex_state = 515},
  [852] = {.lex_state = 515},
  [853] = {.lex_state = 515},
  [854] = {.lex_state = 515},
  [855] = {.lex_state = 515},
  [856] = {.lex_state = 515},
  [857] = {.lex_state = 515},
  [858] = {.lex_state = 515},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 515},
  [861] = {.lex_state = 515},
  [862] = {.lex_state = 34},
  [863] = {.lex_state = 35},
  [864] = {.lex_state = 35},
  [865] = {.lex_state = 35},
  [866] = {.lex_state = 35},
  [867] = {.lex_state = 34},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 35},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 34},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 35},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 35},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 33},
  [892] = {.lex_state = 34},
  [893] = {.lex_state = 34},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 34},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 35},
  [904] = {.lex_state = 35},
  [905] = {.lex_state = 35},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 35},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 34},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym__COLON] = ACTIONS(1),
    [sym__non_zero] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [sym__language_tag] = ACTIONS(1),
    [anon_sym_Prefix_COLON] = ACTIONS(1),
    [anon_sym_Ontology_COLON] = ACTIONS(1),
    [anon_sym_Import_COLON] = ACTIONS(1),
    [anon_sym_Annotations_COLON] = ACTIONS(1),
    [anon_sym_inverse] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(888),
    [sym__ontology_document] = STATE(896),
    [sym_prefix_declaration] = STATE(699),
    [sym_ontology] = STATE(896),
    [aux_sym__ontology_document_repeat1] = STATE(699),
    [sym__comment] = ACTIONS(3),
    [anon_sym_Prefix_COLON] = ACTIONS(5),
    [anon_sym_Ontology_COLON] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(57), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(15), 23,
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
  [88] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(29), 52,
      ts_builtin_sym_end,
      anon_sym_Prefix_COLON,
      anon_sym_Ontology_COLON,
      anon_sym_Import_COLON,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [146] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(57), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(15), 21,
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
  [232] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(33), 1,
      anon_sym_not,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(57), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(15), 20,
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
  [317] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 50,
      ts_builtin_sym_end,
      anon_sym_Import_COLON,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [373] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(37), 50,
      ts_builtin_sym_end,
      anon_sym_Import_COLON,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [429] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(57), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(15), 19,
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
  [513] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(41), 1,
      anon_sym_not,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(57), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(15), 14,
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
  [592] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      anon_sym_CARET_CARET,
    ACTIONS(47), 1,
      sym__language_tag,
    ACTIONS(43), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [646] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(49), 43,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [695] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(51), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [743] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_that,
    ACTIONS(60), 1,
      anon_sym_value,
    ACTIONS(58), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(53), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [799] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(63), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [847] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_e,
    ACTIONS(75), 1,
      anon_sym_E,
    STATE(838), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(71), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(65), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [909] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(77), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [957] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(79), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1005] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(81), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1053] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      anon_sym_e,
    ACTIONS(75), 1,
      anon_sym_E,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(846), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(87), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(83), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1115] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(89), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1163] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(91), 42,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1211] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 41,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1258] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(60), 1,
      anon_sym_value,
    ACTIONS(58), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(56), 34,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [1309] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      anon_sym_e,
    ACTIONS(75), 1,
      anon_sym_E,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(95), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1368] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      anon_sym_e,
    ACTIONS(75), 1,
      anon_sym_E,
    STATE(840), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(101), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(99), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1427] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(107), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(28), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(105), 30,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1480] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(113), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(26), 3,
      sym__digit,
      sym__zero,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1533] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(119), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(28), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(117), 30,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1586] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(127), 1,
      anon_sym_E,
    ACTIONS(124), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(122), 35,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [1639] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(129), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(32), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(105), 28,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1690] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(131), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(30), 3,
      sym__digit,
      sym__zero,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1741] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(133), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(32), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(117), 28,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1792] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(136), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(34), 3,
      sym__digit,
      sym__zero,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1842] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(138), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(35), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(105), 27,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1892] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(140), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(35), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(117), 27,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [1942] = 2,
    ACTIONS(3), 1,
      sym__comment,
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
  [1985] = 2,
    ACTIONS(3), 1,
      sym__comment,
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
  [2028] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(147), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(39), 3,
      sym__digit,
      sym__zero,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [2077] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(149), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(40), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(105), 26,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [2126] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(151), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(40), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(117), 26,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [2175] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(154), 37,
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
  [2218] = 21,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_Import_COLON,
    ACTIONS(162), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(164), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(166), 1,
      anon_sym_Class_COLON,
    ACTIONS(168), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(170), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(172), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(174), 1,
      anon_sym_Individual_COLON,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    STATE(43), 1,
      sym_ontology_iri,
    ACTIONS(176), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(178), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(180), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(89), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(126), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(378), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(224), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [2298] = 21,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(160), 1,
      anon_sym_Import_COLON,
    ACTIONS(162), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(164), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(166), 1,
      anon_sym_Class_COLON,
    ACTIONS(168), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(170), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(172), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(174), 1,
      anon_sym_Individual_COLON,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_version_iri,
    ACTIONS(176), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(178), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(180), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(86), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(139), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(450), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(217), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [2378] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(188), 36,
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
  [2420] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(192), 30,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [2464] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [2506] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(198), 34,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
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
  [2546] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(192), 28,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [2588] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(200), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [2627] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(202), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [2666] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(204), 1,
      anon_sym_not,
    ACTIONS(9), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(15), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(57), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [2733] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(206), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [2772] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(208), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [2811] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(210), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [2850] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      anon_sym_inverse,
    ACTIONS(220), 1,
      sym__pn_local,
    ACTIONS(222), 1,
      sym__pname_ln,
    STATE(146), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
    ACTIONS(216), 18,
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
  [2903] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      anon_sym_LT,
    ACTIONS(231), 1,
      anon_sym_inverse,
    ACTIONS(234), 1,
      sym__pn_local,
    ACTIONS(237), 1,
      sym__pname_ln,
    STATE(146), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
    ACTIONS(229), 18,
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
  [2956] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(240), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [2995] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(242), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [3034] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(244), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [3073] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(246), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [3112] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(248), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [3151] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(250), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [3190] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(192), 27,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [3231] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 33,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
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
  [3270] = 20,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(204), 1,
      anon_sym_not,
    STATE(144), 1,
      sym__data_conjunction,
    STATE(789), 1,
      sym_class_iri,
    STATE(815), 1,
      sym__conjunction,
    STATE(886), 1,
      sym_data_range,
    STATE(913), 1,
      sym_description,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(707), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3345] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(214), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      anon_sym_inverse,
    ACTIONS(220), 1,
      sym__pn_local,
    ACTIONS(222), 1,
      sym__pname_ln,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(146), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
    ACTIONS(254), 18,
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
  [3398] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(256), 32,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_RPAREN,
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
  [3436] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(192), 26,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [3476] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(71), 1,
      anon_sym_f,
    ACTIONS(73), 1,
      anon_sym_e,
    ACTIONS(75), 1,
      anon_sym_E,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_F,
    STATE(838), 1,
      sym__exponent,
    ACTIONS(258), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(75), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(65), 21,
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
  [3530] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      anon_sym_e,
    ACTIONS(75), 1,
      anon_sym_E,
    ACTIONS(87), 1,
      anon_sym_f,
    ACTIONS(264), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_F,
    STATE(846), 1,
      sym__exponent,
    ACTIONS(258), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(75), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(83), 21,
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
  [3584] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(268), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(73), 3,
      sym__digit,
      sym__zero,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [3628] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(270), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(72), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(117), 21,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [3672] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(273), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(72), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(105), 21,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [3716] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      anon_sym_e,
    ACTIONS(75), 1,
      anon_sym_E,
    ACTIONS(101), 1,
      anon_sym_f,
    ACTIONS(275), 1,
      anon_sym_F,
    STATE(840), 1,
      sym__exponent,
    ACTIONS(258), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(75), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(99), 21,
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
  [3767] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(127), 2,
      anon_sym_F,
      anon_sym_E,
    ACTIONS(277), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(75), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
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
  [3810] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      anon_sym_e,
    ACTIONS(75), 1,
      anon_sym_E,
    ACTIONS(97), 1,
      anon_sym_f,
    ACTIONS(280), 1,
      anon_sym_F,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(258), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(75), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(95), 21,
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
  [3861] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(282), 30,
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
  [3897] = 17,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(288), 1,
      anon_sym_PLUS,
    ACTIONS(290), 1,
      anon_sym_DASH,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      sym__quoted_string,
    STATE(871), 1,
      sym__literal_list,
    STATE(872), 1,
      sym__individual_list,
    STATE(908), 1,
      sym__lexial_value,
    ACTIONS(286), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(15), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(820), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(821), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [3963] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(296), 30,
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
  [3999] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(64), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4058] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(64), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4117] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(204), 1,
      anon_sym_not,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(64), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4176] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(39), 1,
      anon_sym_not,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(64), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4235] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(31), 1,
      anon_sym_not,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(64), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4294] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(41), 1,
      anon_sym_not,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(64), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4353] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_Import_COLON,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(140), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(402), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(215), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4415] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(300), 1,
      anon_sym_Import_COLON,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(133), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(402), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(229), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4477] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_Import_COLON,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(87), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(140), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(215), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4539] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_Import_COLON,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(139), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(402), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(217), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4601] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(324), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      anon_sym__COLON,
    ACTIONS(330), 1,
      anon_sym_PLUS,
    ACTIONS(332), 1,
      anon_sym_DASH,
    ACTIONS(334), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      sym__quoted_string,
    ACTIONS(338), 1,
      sym__pn_local,
    ACTIONS(340), 1,
      sym__pname_ln,
    STATE(883), 1,
      sym__lexial_value,
    ACTIONS(328), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(337), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(647), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [4656] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(192), 21,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
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
  [4691] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__annotation_annotated_list_repeat1,
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
  [4728] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(346), 1,
      anon_sym_LT,
    ACTIONS(348), 1,
      anon_sym__COLON,
    ACTIONS(352), 1,
      anon_sym_PLUS,
    ACTIONS(354), 1,
      anon_sym_DASH,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      sym__quoted_string,
    ACTIONS(360), 1,
      sym__pn_local,
    ACTIONS(362), 1,
      sym__pname_ln,
    STATE(901), 1,
      sym__lexial_value,
    ACTIONS(350), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(422), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(733), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [4783] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(364), 1,
      anon_sym_LT,
    ACTIONS(366), 1,
      anon_sym__COLON,
    ACTIONS(370), 1,
      anon_sym_PLUS,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      sym__quoted_string,
    ACTIONS(378), 1,
      sym__pn_local,
    ACTIONS(380), 1,
      sym__pname_ln,
    STATE(885), 1,
      sym__lexial_value,
    ACTIONS(368), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(418), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(766), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [4838] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_DASH,
    STATE(887), 1,
      sym__lexial_value,
    ACTIONS(382), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(69), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(36), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [4893] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(388), 1,
      anon_sym_LT,
    ACTIONS(390), 1,
      anon_sym__COLON,
    ACTIONS(394), 1,
      anon_sym_PLUS,
    ACTIONS(396), 1,
      anon_sym_DASH,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      sym__quoted_string,
    ACTIONS(402), 1,
      sym__pn_local,
    ACTIONS(404), 1,
      sym__pname_ln,
    STATE(875), 1,
      sym__lexial_value,
    ACTIONS(392), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(266), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(538), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [4948] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    ACTIONS(410), 1,
      anon_sym_DASH,
    STATE(887), 1,
      sym__lexial_value,
    ACTIONS(406), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(365), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(36), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [5003] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(414), 1,
      anon_sym__COLON,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(420), 1,
      anon_sym_DASH,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      sym__quoted_string,
    ACTIONS(426), 1,
      sym__pn_local,
    ACTIONS(428), 1,
      sym__pname_ln,
    STATE(906), 1,
      sym__lexial_value,
    ACTIONS(416), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(415), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(720), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [5058] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(288), 1,
      anon_sym_PLUS,
    ACTIONS(290), 1,
      anon_sym_DASH,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      sym__quoted_string,
    STATE(887), 1,
      sym__lexial_value,
    ACTIONS(286), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(15), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(36), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [5113] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(430), 25,
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
  [5150] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym__annotation_annotated_list_repeat1,
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
  [5187] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(432), 25,
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
  [5224] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(154), 25,
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
  [5261] = 13,
    ACTIONS(3), 1,
      sym__comment,
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
    STATE(898), 1,
      sym__lexial_value,
    ACTIONS(441), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(465), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(808), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__annotation_target,
  [5316] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(455), 1,
      anon_sym_and,
    STATE(105), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(206), 24,
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
  [5352] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(460), 1,
      anon_sym_and,
    STATE(116), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 24,
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
  [5388] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(54), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5444] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(464), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(466), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(468), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(470), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(472), 1,
      anon_sym_HasKey_COLON,
    STATE(122), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(462), 13,
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
  [5490] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(54), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5546] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(464), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(466), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(468), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(470), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(472), 1,
      anon_sym_HasKey_COLON,
    STATE(108), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(474), 13,
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
  [5592] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(54), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5648] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(478), 1,
      anon_sym_and,
    STATE(114), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(476), 24,
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
  [5684] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(54), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5740] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(480), 1,
      anon_sym_and,
    STATE(114), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(208), 24,
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
  [5776] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(460), 1,
      anon_sym_and,
    STATE(105), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 24,
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
  [5812] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(460), 1,
      anon_sym_and,
    STATE(105), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(483), 24,
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
  [5848] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(54), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5904] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(54), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5960] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(487), 1,
      anon_sym_that,
    ACTIONS(485), 25,
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
  [5994] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(478), 1,
      anon_sym_and,
    STATE(112), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(489), 24,
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
  [6030] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(460), 1,
      anon_sym_and,
    STATE(115), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(491), 24,
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
  [6066] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(495), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(498), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(501), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(504), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(507), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(510), 1,
      anon_sym_HasKey_COLON,
    STATE(122), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(493), 13,
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
  [6112] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(515), 1,
      anon_sym_and,
    STATE(123), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(513), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
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
  [6147] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(520), 1,
      anon_sym_or,
    STATE(127), 1,
      aux_sym_description_repeat1,
    ACTIONS(518), 23,
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
  [6182] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_class_iri,
    STATE(230), 1,
      sym__annotations,
    STATE(234), 1,
      sym__conjunction,
    STATE(293), 1,
      sym_description,
    STATE(364), 1,
      sym__description_annotated_list,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6245] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(217), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6300] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(530), 1,
      anon_sym_or,
    STATE(127), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 23,
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
  [6335] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(119), 1,
      sym_class_iri,
    STATE(138), 1,
      sym__conjunction,
    STATE(183), 1,
      sym_description,
    STATE(232), 1,
      sym__description_annotated_list,
    STATE(237), 1,
      sym__annotations,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(120), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6398] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(180), 1,
      sym_class_iri,
    STATE(214), 1,
      sym__conjunction,
    STATE(249), 1,
      sym__annotations,
    STATE(264), 1,
      sym_description,
    STATE(315), 1,
      sym__description_annotated_list,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6461] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_class_iri,
    STATE(230), 1,
      sym__annotations,
    STATE(234), 1,
      sym__conjunction,
    STATE(293), 1,
      sym_description,
    STATE(360), 1,
      sym__description_annotated_list,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6524] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(537), 25,
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
  [6555] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(541), 1,
      anon_sym_and,
    STATE(141), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(539), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
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
  [6590] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(251), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6645] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_class_iri,
    STATE(230), 1,
      sym__annotations,
    STATE(234), 1,
      sym__conjunction,
    STATE(293), 1,
      sym_description,
    STATE(361), 1,
      sym__description_annotated_list,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6708] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_not,
    STATE(204), 1,
      sym__annotations,
    STATE(493), 1,
      sym__description_2list,
    STATE(789), 1,
      sym_class_iri,
    STATE(815), 1,
      sym__conjunction,
    STATE(912), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(707), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6771] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_not,
    STATE(187), 1,
      sym__annotations,
    STATE(355), 1,
      sym__description_2list,
    STATE(789), 1,
      sym_class_iri,
    STATE(815), 1,
      sym__conjunction,
    STATE(907), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(707), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6834] = 18,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      anon_sym_not,
    STATE(218), 1,
      sym_class_iri,
    STATE(262), 1,
      sym__annotations,
    STATE(280), 1,
      sym__conjunction,
    STATE(335), 1,
      sym_description,
    STATE(370), 1,
      sym__description_annotated_list,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(220), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6897] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(520), 1,
      anon_sym_or,
    STATE(124), 1,
      aux_sym_description_repeat1,
    ACTIONS(549), 23,
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
  [6932] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(215), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6987] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(229), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [7042] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(541), 1,
      anon_sym_and,
    STATE(123), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(551), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
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
  [7077] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(553), 25,
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
  [7108] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(555), 1,
      anon_sym_and,
    STATE(167), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(489), 22,
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
  [7142] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(559), 1,
      anon_sym_or,
    STATE(148), 1,
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
  [7176] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(567), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(569), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(565), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(152), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(563), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(561), 13,
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
  [7218] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(571), 20,
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
  [7250] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(574), 22,
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
  [7284] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(559), 1,
      anon_sym_or,
    STATE(161), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(578), 22,
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
  [7318] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(580), 22,
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
  [7352] = 17,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_description,
    STATE(207), 1,
      sym_class_iri,
    STATE(234), 1,
      sym__conjunction,
    STATE(259), 1,
      sym__annotations,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7412] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(586), 1,
      anon_sym_o,
    STATE(158), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(584), 22,
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
  [7446] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(588), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(597), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(600), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(594), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(152), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(591), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(584), 13,
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
  [7488] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [7522] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [7556] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [7590] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [7624] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(586), 1,
      anon_sym_o,
    STATE(173), 1,
      aux_sym_object_property_frame_repeat1,
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
  [7658] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(586), 1,
      anon_sym_o,
    STATE(174), 1,
      aux_sym_object_property_frame_repeat1,
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
  [7692] = 17,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(218), 1,
      sym_class_iri,
    STATE(225), 1,
      sym__annotations,
    STATE(280), 1,
      sym__conjunction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(220), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7752] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(567), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(569), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(565), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(145), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(563), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(609), 13,
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
  [7794] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(613), 1,
      anon_sym_or,
    STATE(161), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(611), 22,
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
  [7828] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(513), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
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
  [7858] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(616), 22,
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
  [7892] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(620), 22,
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
  [7926] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(622), 22,
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
  [7960] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(627), 22,
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
  [7994] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(555), 1,
      anon_sym_and,
    STATE(169), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(476), 22,
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
  [8028] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(629), 22,
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
  [8062] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(634), 1,
      anon_sym_and,
    STATE(169), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(208), 22,
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
  [8096] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(637), 1,
      anon_sym_and,
    STATE(172), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 22,
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
  [8130] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(637), 1,
      anon_sym_and,
    STATE(172), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(483), 22,
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
  [8164] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(639), 1,
      anon_sym_and,
    STATE(172), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(206), 22,
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
  [8198] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(586), 1,
      anon_sym_o,
    STATE(174), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(642), 22,
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
  [8232] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(646), 1,
      anon_sym_o,
    STATE(174), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(644), 22,
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
  [8266] = 17,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(119), 1,
      sym_class_iri,
    STATE(138), 1,
      sym__conjunction,
    STATE(244), 1,
      sym__annotations,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(120), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8326] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(616), 22,
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
  [8360] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(649), 22,
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
  [8394] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(282), 22,
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
  [8428] = 17,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(522), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(180), 1,
      sym_class_iri,
    STATE(214), 1,
      sym__conjunction,
    STATE(255), 1,
      sym__annotations,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8488] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(654), 1,
      anon_sym_that,
    ACTIONS(485), 23,
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
  [8520] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(637), 1,
      anon_sym_and,
    STATE(170), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(491), 22,
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
  [8554] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(637), 1,
      anon_sym_and,
    STATE(171), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 22,
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
  [8588] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(656), 22,
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
  [8622] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(658), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__data_conjunction,
    STATE(216), 1,
      sym_data_range,
    STATE(272), 1,
      sym__annotations,
    STATE(315), 1,
      sym__data_range_annotated_list,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8680] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(553), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(666), 20,
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
  [8711] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(668), 23,
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
  [8740] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_not,
    STATE(362), 1,
      sym__description_2list,
    STATE(789), 1,
      sym_class_iri,
    STATE(815), 1,
      sym__conjunction,
    STATE(907), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(707), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8797] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(658), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__data_conjunction,
    STATE(288), 1,
      sym__annotations,
    STATE(289), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8852] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(670), 1,
      anon_sym_and,
    STATE(191), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(476), 21,
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
  [8885] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(611), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
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
  [8914] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(672), 1,
      anon_sym_and,
    STATE(191), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(208), 21,
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
  [8947] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(675), 1,
      anon_sym_and,
    STATE(194), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 21,
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
  [8980] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(675), 1,
      anon_sym_and,
    STATE(194), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(483), 21,
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
  [9013] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(677), 1,
      anon_sym_and,
    STATE(194), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(206), 21,
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
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(680), 20,
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
  [9077] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(682), 20,
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
  [9108] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(684), 20,
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
  [9139] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(686), 23,
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
  [9168] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(622), 23,
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
  [9197] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(537), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(688), 20,
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
  [9228] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(629), 23,
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
  [9257] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(690), 1,
      anon_sym_or,
    STATE(203), 1,
      aux_sym_description_repeat1,
    ACTIONS(518), 21,
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
  [9290] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(692), 1,
      anon_sym_or,
    STATE(203), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 21,
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
  [9323] = 16,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_not,
    STATE(503), 1,
      sym__description_2list,
    STATE(789), 1,
      sym_class_iri,
    STATE(815), 1,
      sym__conjunction,
    STATE(912), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(707), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9380] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(658), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__data_conjunction,
    STATE(284), 1,
      sym__annotations,
    STATE(477), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9435] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(644), 23,
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
  [9464] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(695), 1,
      anon_sym_that,
    ACTIONS(485), 22,
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
  [9495] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(670), 1,
      anon_sym_and,
    STATE(189), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(489), 21,
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
  [9528] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(675), 1,
      anon_sym_and,
    STATE(192), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(491), 21,
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
  [9561] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(675), 1,
      anon_sym_and,
    STATE(193), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 21,
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
  [9594] = 2,
    ACTIONS(3), 1,
      sym__comment,
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
  [9623] = 2,
    ACTIONS(3), 1,
      sym__comment,
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
  [9652] = 2,
    ACTIONS(3), 1,
      sym__comment,
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
  [9681] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(690), 1,
      anon_sym_or,
    STATE(202), 1,
      aux_sym_description_repeat1,
    ACTIONS(549), 21,
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
  [9714] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(219), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9762] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(697), 20,
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
  [9794] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(219), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9842] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(701), 1,
      anon_sym_that,
    ACTIONS(485), 21,
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
  [9872] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(703), 1,
      ts_builtin_sym_end,
    ACTIONS(705), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(708), 1,
      anon_sym_Class_COLON,
    ACTIONS(711), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(714), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(717), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(720), 1,
      anon_sym_Individual_COLON,
    ACTIONS(723), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(726), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(729), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(219), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9920] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(732), 1,
      anon_sym_and,
    STATE(261), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(489), 20,
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
  [9952] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(736), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(742), 1,
      anon_sym_Domain_COLON,
    ACTIONS(745), 1,
      anon_sym_Range_COLON,
    ACTIONS(748), 1,
      anon_sym_Characteristics_COLON,
    STATE(221), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(739), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(734), 13,
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
  [9992] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(751), 1,
      anon_sym_or,
    STATE(231), 1,
      aux_sym_description_repeat1,
    ACTIONS(518), 20,
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
  [10024] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_not,
    STATE(789), 1,
      sym_class_iri,
    STATE(815), 1,
      sym__conjunction,
    STATE(913), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(707), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10078] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(219), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10126] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      anon_sym_not,
    STATE(79), 1,
      sym_description,
    STATE(218), 1,
      sym_class_iri,
    STATE(280), 1,
      sym__conjunction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(220), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10180] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(753), 1,
      anon_sym_and,
    STATE(238), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(491), 20,
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
  [10212] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(759), 1,
      anon_sym_Domain_COLON,
    ACTIONS(761), 1,
      anon_sym_Range_COLON,
    ACTIONS(763), 1,
      anon_sym_Characteristics_COLON,
    STATE(253), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(757), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(755), 13,
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
  [10252] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(753), 1,
      anon_sym_and,
    STATE(233), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(483), 20,
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
  [10284] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(219), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10332] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_class_iri,
    STATE(234), 1,
      sym__conjunction,
    STATE(268), 1,
      sym_description,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10386] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(765), 1,
      anon_sym_or,
    STATE(231), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 20,
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
  [10418] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(584), 22,
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
  [10446] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(768), 1,
      anon_sym_and,
    STATE(233), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(206), 20,
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
  [10478] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(751), 1,
      anon_sym_or,
    STATE(222), 1,
      aux_sym_description_repeat1,
    ACTIONS(549), 20,
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
  [10510] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(753), 1,
      anon_sym_and,
    STATE(228), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 20,
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
  [10542] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_class_iri,
    STATE(234), 1,
      sym__conjunction,
    STATE(297), 1,
      sym_description,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10596] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(119), 1,
      sym_class_iri,
    STATE(138), 1,
      sym__conjunction,
    STATE(163), 1,
      sym_description,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(120), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10650] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(753), 1,
      anon_sym_and,
    STATE(233), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 20,
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
  [10682] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(771), 1,
      anon_sym_and,
    STATE(239), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(208), 20,
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
  [10714] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(778), 1,
      anon_sym_DOT,
    STATE(841), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(776), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(780), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(276), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(83), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(774), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [10756] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(782), 20,
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
  [10788] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym_class_iri,
    STATE(234), 1,
      sym__conjunction,
    STATE(328), 1,
      sym_description,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10842] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(784), 20,
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
  [10874] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(79), 1,
      sym_description,
    STATE(119), 1,
      sym_class_iri,
    STATE(138), 1,
      sym__conjunction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(120), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10928] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(788), 1,
      anon_sym_not,
    STATE(328), 1,
      sym_description,
    STATE(408), 1,
      sym_class_iri,
    STATE(425), 1,
      sym__conjunction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(409), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10982] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(790), 20,
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
  [11014] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(792), 20,
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
  [11046] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(797), 20,
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
  [11078] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(180), 1,
      sym_class_iri,
    STATE(214), 1,
      sym__conjunction,
    STATE(265), 1,
      sym_description,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11132] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(799), 20,
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
  [11164] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(304), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(306), 1,
      anon_sym_Class_COLON,
    ACTIONS(308), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(314), 1,
      anon_sym_Individual_COLON,
    ACTIONS(804), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(318), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(320), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(219), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [11212] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(616), 20,
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
  [11244] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(759), 1,
      anon_sym_Domain_COLON,
    ACTIONS(761), 1,
      anon_sym_Range_COLON,
    ACTIONS(763), 1,
      anon_sym_Characteristics_COLON,
    STATE(221), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(757), 3,
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
  [11284] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(649), 20,
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
  [11316] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(79), 1,
      sym_description,
    STATE(180), 1,
      sym_class_iri,
    STATE(214), 1,
      sym__conjunction,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11370] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(282), 20,
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
  [11402] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(813), 20,
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
  [11434] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(788), 1,
      anon_sym_not,
    STATE(408), 1,
      sym_class_iri,
    STATE(425), 1,
      sym__conjunction,
    STATE(458), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(409), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11488] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_description,
    STATE(207), 1,
      sym_class_iri,
    STATE(234), 1,
      sym__conjunction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11542] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(813), 20,
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
  [11574] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(732), 1,
      anon_sym_and,
    STATE(239), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(476), 20,
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
  [11606] = 15,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      anon_sym_not,
    STATE(218), 1,
      sym_class_iri,
    STATE(280), 1,
      sym__conjunction,
    STATE(316), 1,
      sym_description,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(220), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11660] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(782), 20,
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
  [11692] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(656), 20,
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
  [11724] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(616), 20,
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
  [11756] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(817), 1,
      anon_sym_DOT,
    STATE(834), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(776), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(819), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(276), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(65), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(815), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11798] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(788), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(408), 1,
      sym_class_iri,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(409), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11849] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(616), 19,
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
  [11880] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(680), 15,
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
  [11909] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(616), 19,
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
  [11940] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(684), 15,
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
  [11969] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__data_conjunction,
    STATE(263), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12018] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(682), 15,
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
  [12047] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(843), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(825), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(827), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(330), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(823), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12086] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(845), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(825), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(831), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(330), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(95), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(829), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12125] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(833), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(276), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
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
  [12158] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(218), 1,
      sym_class_iri,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(220), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12209] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(836), 1,
      anon_sym_or,
    STATE(279), 1,
      aux_sym_description_repeat1,
    ACTIONS(518), 19,
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
  [12240] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(838), 1,
      anon_sym_or,
    STATE(279), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 19,
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
  [12271] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(836), 1,
      anon_sym_or,
    STATE(278), 1,
      aux_sym_description_repeat1,
    ACTIONS(549), 19,
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
  [12302] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__data_conjunction,
    STATE(886), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12351] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(649), 19,
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
  [12382] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(282), 19,
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
  [12413] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__data_conjunction,
    STATE(478), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12462] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(789), 1,
      sym_class_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(707), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12513] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(119), 1,
      sym_class_iri,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(120), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12564] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(792), 21,
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
  [12591] = 13,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__data_conjunction,
    STATE(296), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12640] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(799), 21,
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
  [12667] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(180), 1,
      sym_class_iri,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12718] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(844), 19,
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
  [12749] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(58), 21,
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
  [12776] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(656), 19,
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
  [12807] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(848), 19,
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
  [12838] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(853), 21,
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
  [12865] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(855), 21,
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
  [12892] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(857), 19,
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
  [12923] = 14,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym__conjunction,
    STATE(207), 1,
      sym_class_iri,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(208), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12974] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(524), 1,
      anon_sym_not,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13020] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      anon_sym_not,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13066] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(859), 18,
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
  [13096] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(430), 18,
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
  [13126] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(154), 18,
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
  [13156] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(868), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(327), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(103), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(105), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13188] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(616), 18,
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
  [13218] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(649), 18,
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
  [13248] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(282), 18,
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
  [13278] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(432), 18,
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
  [13308] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(875), 18,
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
  [13338] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym__individual_annotated_list_repeat1,
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
  [13368] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym__annotation_annotated_list_repeat1,
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
  [13398] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(883), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(886), 1,
      anon_sym_Types_COLON,
    ACTIONS(889), 1,
      anon_sym_Facts_COLON,
    ACTIONS(892), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(312), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(881), 13,
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
  [13434] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(895), 20,
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
  [13460] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(901), 1,
      anon_sym_Types_COLON,
    ACTIONS(903), 1,
      anon_sym_Facts_COLON,
    ACTIONS(905), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(320), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(897), 13,
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
  [13496] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(734), 20,
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
  [13522] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(616), 18,
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
  [13552] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_not,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13598] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(907), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(304), 3,
      sym__digit,
      sym__zero,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13630] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13676] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(901), 1,
      anon_sym_Types_COLON,
    ACTIONS(903), 1,
      anon_sym_Facts_COLON,
    ACTIONS(905), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(312), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(909), 13,
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
  [13712] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13758] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(911), 18,
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
  [13788] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(913), 18,
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
  [13818] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(788), 1,
      anon_sym_not,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13864] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(918), 18,
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
  [13894] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(923), 18,
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
  [13924] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(925), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(327), 3,
      sym__digit,
      sym__zero,
      aux_sym__positive_integer_repeat1,
    ACTIONS(115), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(117), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13956] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(848), 20,
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
  [13982] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(928), 18,
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
  [14012] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(930), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(330), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
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
  [14044] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(928), 18,
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
  [14074] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(859), 18,
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
  [14104] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym__data_conjunction,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(132), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14150] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym__annotation_annotated_list_repeat1,
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
  [14180] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(656), 18,
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
  [14210] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(937), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(935), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(352), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(933), 13,
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
  [14243] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(941), 1,
      anon_sym_DOT,
    STATE(851), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(939), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(943), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(815), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    STATE(369), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(65), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14282] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(945), 17,
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
  [14311] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [14340] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(956), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(954), 17,
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
  [14369] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
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
  [14398] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(963), 17,
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
  [14427] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(913), 19,
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
  [14452] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(965), 17,
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
  [14481] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(967), 17,
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
  [14510] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(918), 19,
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
  [14535] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(971), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(977), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(974), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(347), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(969), 13,
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
  [14568] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(967), 17,
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
  [14597] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(980), 17,
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
  [14626] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(660), 1,
      anon_sym_not,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(162), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14669] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(87), 1,
      anon_sym_f,
    ACTIONS(266), 1,
      anon_sym_F,
    ACTIONS(984), 1,
      anon_sym_DOT,
    STATE(846), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(982), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(379), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(83), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14708] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(937), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(935), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(347), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(986), 13,
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
  [14741] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(988), 19,
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
  [14766] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(990), 19,
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
  [14791] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(992), 19,
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
  [14816] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(994), 19,
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
  [14841] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(996), 19,
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
  [14866] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(998), 19,
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
  [14891] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(56), 19,
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
  [14916] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1000), 19,
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
  [14941] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1002), 19,
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
  [14966] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1004), 19,
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
  [14991] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1006), 1,
      anon_sym_DOT,
    STATE(852), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(939), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1008), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(774), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    STATE(369), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(83), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15030] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1010), 19,
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
  [15055] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(71), 1,
      anon_sym_f,
    ACTIONS(262), 1,
      anon_sym_F,
    ACTIONS(1012), 1,
      anon_sym_DOT,
    STATE(838), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(982), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(379), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(65), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15094] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(965), 17,
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
  [15123] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15165] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15207] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1014), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(369), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
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
  [15237] = 2,
    ACTIONS(3), 1,
      sym__comment,
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
  [15261] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    STATE(908), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1017), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(15), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(827), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [15297] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    STATE(871), 1,
      sym__literal_list,
    STATE(908), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1017), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(15), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(821), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15335] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15377] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(853), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1021), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1023), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(823), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    STATE(395), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15413] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(830), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1021), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1025), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(829), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    STATE(395), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(95), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15449] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(101), 1,
      anon_sym_f,
    ACTIONS(275), 1,
      anon_sym_F,
    STATE(840), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(982), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(379), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(99), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15485] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(97), 1,
      anon_sym_f,
    ACTIONS(280), 1,
      anon_sym_F,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(982), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(379), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(95), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15521] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1027), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1029), 15,
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
  [15547] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(127), 1,
      anon_sym_F,
    ACTIONS(1031), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(379), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
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
  [15577] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(945), 18,
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
  [15601] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(954), 18,
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
  [15625] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1036), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(412), 1,
      sym_datatype_equavalent_to,
    STATE(394), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1034), 13,
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
  [15657] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15699] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1036), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(424), 1,
      sym_datatype_equavalent_to,
    STATE(382), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1038), 13,
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
  [15731] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1040), 18,
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
  [15755] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1042), 18,
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
  [15779] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15821] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    STATE(908), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1017), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(15), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(849), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [15857] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(49), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15899] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1044), 18,
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
  [15923] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(54), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(13), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15962] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1046), 1,
      anon_sym_and,
    STATE(400), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 15,
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
  [15989] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    STATE(908), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1017), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(15), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(859), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [16024] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1051), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1054), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1048), 13,
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
  [16053] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1056), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(395), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
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
  [16082] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    STATE(887), 1,
      sym__lexial_value,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1059), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(69), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(356), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [16117] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1061), 1,
      anon_sym_and,
    STATE(398), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(476), 15,
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
  [16144] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1063), 1,
      anon_sym_and,
    STATE(398), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(208), 15,
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
  [16171] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1046), 1,
      anon_sym_and,
    STATE(401), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 15,
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
  [16198] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1046), 1,
      anon_sym_and,
    STATE(401), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(483), 15,
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
  [16225] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1066), 1,
      anon_sym_and,
    STATE(401), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(206), 15,
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
  [16252] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1071), 1,
      anon_sym_Import_COLON,
    STATE(402), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    ACTIONS(1069), 14,
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
  [16279] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1051), 1,
      anon_sym_Annotations_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1054), 14,
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
  [16306] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    STATE(887), 1,
      sym__lexial_value,
    ACTIONS(384), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1059), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(69), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(64), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [16341] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    ACTIONS(1074), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1076), 1,
      anon_sym_inverse,
    STATE(434), 1,
      sym__annotations,
    STATE(493), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(877), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(879), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(146), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16382] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1019), 1,
      anon_sym_DOT,
    STATE(887), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1017), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(15), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    STATE(64), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [16417] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(969), 17,
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
  [16440] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1078), 1,
      anon_sym_that,
    ACTIONS(485), 16,
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
  [16465] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1061), 1,
      anon_sym_and,
    STATE(397), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(489), 15,
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
  [16492] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1046), 1,
      anon_sym_and,
    STATE(399), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(491), 15,
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
  [16519] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1082), 1,
      anon_sym_DOT,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(774), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1080), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1084), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(457), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [16555] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(416), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [16581] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1088), 1,
      anon_sym_or,
    STATE(414), 1,
      aux_sym_description_repeat1,
    ACTIONS(518), 14,
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
  [16607] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1090), 1,
      anon_sym_or,
    STATE(414), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 14,
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
  [16633] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1095), 1,
      anon_sym_DOT,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(815), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1093), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1097), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(433), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [16669] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1099), 13,
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
  [16695] = 12,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1103), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1105), 1,
      anon_sym_not,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(370), 1,
      sym__fact_annotated_list,
    STATE(396), 1,
      sym_data_property_iri,
    STATE(504), 1,
      sym__annotations,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(309), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16737] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1113), 1,
      anon_sym_DOT,
    STATE(848), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(815), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1111), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1115), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(441), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [16773] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1117), 1,
      anon_sym_DOT,
    STATE(832), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(774), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1111), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1119), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(441), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [16809] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [16835] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1121), 1,
      anon_sym_DOT,
    STATE(854), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(774), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1093), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1123), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(433), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [16871] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(815), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1080), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1127), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(457), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [16907] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(214), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      anon_sym_inverse,
    ACTIONS(220), 1,
      sym__pn_local,
    ACTIONS(222), 1,
      sym__pname_ln,
    ACTIONS(1074), 1,
      anon_sym_Annotations_COLON,
    STATE(475), 1,
      sym__annotations,
    STATE(146), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(66), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
  [16943] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(420), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1034), 13,
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
  [16969] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1088), 1,
      anon_sym_or,
    STATE(413), 1,
      aux_sym_description_repeat1,
    ACTIONS(549), 14,
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
  [16995] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1129), 1,
      anon_sym_not,
    STATE(762), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17032] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1131), 15,
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
  [17053] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1133), 13,
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
  [17078] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1137), 1,
      anon_sym_not,
    STATE(226), 1,
      sym__restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17115] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(856), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(829), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1139), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1141), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(482), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [17148] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1143), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17185] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1145), 1,
      anon_sym_not,
    STATE(181), 1,
      sym__restriction,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17222] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1147), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(433), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(127), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [17249] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    ACTIONS(1076), 1,
      anon_sym_inverse,
    STATE(503), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(877), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(879), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(146), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17284] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1150), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17321] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(861), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(823), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1152), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1154), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(488), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [17354] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym__individual_2list_repeat1,
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
  [17379] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1158), 13,
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
  [17404] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(848), 13,
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
  [17429] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym__object_property_2list_repeat1,
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
  [17454] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1171), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(441), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(127), 7,
      anon_sym__COLON,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [17481] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1174), 13,
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
  [17506] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1179), 1,
      anon_sym_not,
    STATE(121), 1,
      sym__restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17543] = 11,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1103), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1105), 1,
      anon_sym_not,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(396), 1,
      sym_data_property_iri,
    STATE(496), 1,
      sym__annotations,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(343), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17582] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1158), 15,
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
  [17603] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    STATE(464), 1,
      aux_sym__object_property_2list_repeat1,
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
  [17628] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(190), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(192), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [17651] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(774), 1,
      sym__pn_local,
    ACTIONS(1187), 1,
      anon_sym_DOT,
    STATE(842), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1185), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1189), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(490), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [17686] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1191), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17723] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1193), 15,
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
  [17744] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1195), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17781] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(831), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(829), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1152), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1197), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(488), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [17814] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(833), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(823), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1199), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1201), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(469), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [17847] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(837), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(829), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1199), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1203), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(469), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [17880] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1205), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17917] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1207), 13,
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
  [17942] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1211), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(457), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(127), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [17969] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    STATE(463), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(857), 13,
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
  [17994] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1216), 1,
      anon_sym_not,
    STATE(410), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18031] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1218), 1,
      anon_sym_not,
    STATE(209), 1,
      sym__restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18068] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1220), 13,
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
  [18093] = 8,
    ACTIONS(3), 1,
      sym__comment,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(823), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1139), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1222), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(482), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [18126] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym__description_2list_repeat1,
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
  [18151] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1224), 13,
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
  [18176] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(815), 1,
      sym__pn_local,
    ACTIONS(1226), 1,
      anon_sym_DOT,
    STATE(836), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1185), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1228), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(490), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [18211] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1230), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18248] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1232), 1,
      anon_sym_Annotations_COLON,
    STATE(370), 1,
      sym__individual_annotated_list,
    STATE(561), 1,
      sym__annotations,
    STATE(310), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18284] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18318] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1234), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(469), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(127), 6,
      anon_sym__COLON,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18344] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(392), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18378] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18412] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1074), 1,
      anon_sym_Annotations_COLON,
    STATE(232), 1,
      sym__object_property_expression_annotated_list,
    STATE(530), 1,
      sym__annotations,
    STATE(147), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18448] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(823), 1,
      sym__pn_local,
    STATE(844), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1237), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1239), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(506), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [18480] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1166), 14,
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
  [18500] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(214), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      anon_sym_inverse,
    ACTIONS(220), 1,
      sym__pn_local,
    ACTIONS(222), 1,
      sym__pname_ln,
    STATE(146), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(55), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
  [18530] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1174), 14,
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
  [18550] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1241), 14,
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
  [18570] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1243), 14,
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
  [18590] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18624] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(210), 1,
      sym__restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18658] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(739), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18692] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1245), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(482), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(127), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [18718] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(106), 1,
      sym__restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18752] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18786] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18820] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(829), 1,
      sym__pn_local,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(75), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1237), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1248), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(506), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [18852] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(182), 1,
      sym__restriction,
    STATE(662), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18886] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1250), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(488), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(127), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [18912] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1232), 1,
      anon_sym_Annotations_COLON,
    STATE(493), 1,
      sym__individual_2list,
    STATE(522), 1,
      sym__annotations,
    STATE(868), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18948] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1253), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(490), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(127), 6,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18974] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(235), 1,
      sym__restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19008] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(899), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19042] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1256), 13,
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
  [19061] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(437), 1,
      anon_sym_LT,
    ACTIONS(451), 1,
      sym__pn_local,
    ACTIONS(453), 1,
      sym__pname_ln,
    STATE(799), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1258), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(809), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19090] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(324), 1,
      anon_sym_LT,
    ACTIONS(338), 1,
      sym__pn_local,
    ACTIONS(340), 1,
      sym__pname_ln,
    STATE(633), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1260), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(653), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19119] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1105), 1,
      anon_sym_not,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(396), 1,
      sym_data_property_iri,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(357), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19152] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(346), 1,
      anon_sym_LT,
    ACTIONS(360), 1,
      sym__pn_local,
    ACTIONS(362), 1,
      sym__pname_ln,
    STATE(753), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1262), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(725), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19181] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1232), 1,
      anon_sym_Annotations_COLON,
    STATE(532), 1,
      sym__annotations,
    STATE(346), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19214] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(16), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1264), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19243] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(364), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      sym__pn_local,
    ACTIONS(380), 1,
      sym__pname_ln,
    STATE(779), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1266), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(760), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19272] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1270), 1,
      sym__language_tag,
    ACTIONS(43), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1268), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19297] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    STATE(16), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1264), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19326] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1272), 13,
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
  [19345] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1105), 1,
      anon_sym_not,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(396), 1,
      sym_data_property_iri,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(329), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19378] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1074), 1,
      anon_sym_Annotations_COLON,
    STATE(556), 1,
      sym__annotations,
    STATE(199), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19411] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1274), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    STATE(506), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
    ACTIONS(127), 5,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [19436] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(388), 1,
      anon_sym_LT,
    ACTIONS(402), 1,
      sym__pn_local,
    ACTIONS(404), 1,
      sym__pname_ln,
    STATE(548), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1277), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(528), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19465] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(384), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1279), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19494] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(426), 1,
      sym__pn_local,
    ACTIONS(428), 1,
      sym__pname_ln,
    STATE(729), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1281), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(716), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19523] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1074), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1283), 1,
      anon_sym_LT,
    ACTIONS(1285), 1,
      anon_sym_inverse,
    ACTIONS(1287), 1,
      sym__pn_local,
    ACTIONS(1289), 1,
      sym__pname_ln,
    STATE(533), 1,
      sym__annotations,
    STATE(151), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19556] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(315), 1,
      sym__data_property_expression_annotated_list,
    STATE(627), 1,
      sym__annotations,
    STATE(243), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(292), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19588] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(44), 1,
      sym__annotation_annotated_list,
    STATE(95), 1,
      sym_annotation_property_iri,
    STATE(308), 1,
      sym_annotation,
    STATE(606), 1,
      sym__annotations,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19622] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 4,
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
  [19646] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(518), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 4,
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
  [19670] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(872), 1,
      sym__individual_list,
    STATE(820), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19700] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(90), 1,
      sym_annotation_property_iri,
    STATE(610), 1,
      sym_annotation,
    STATE(615), 1,
      sym__annotations,
    STATE(670), 1,
      sym__annotation_annotated_list,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19734] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(518), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(430), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1297), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19758] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    STATE(518), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(154), 4,
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
  [19782] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(44), 1,
      sym__annotation_annotated_list,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(102), 1,
      sym_annotation,
    STATE(621), 1,
      sym__annotations,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19816] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(93), 1,
      sym_annotation_property_iri,
    STATE(622), 1,
      sym__annotations,
    STATE(689), 1,
      sym_annotation,
    STATE(807), 1,
      sym__annotation_annotated_list,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19850] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(94), 1,
      sym_annotation_property_iri,
    STATE(603), 1,
      sym__annotations,
    STATE(697), 1,
      sym_annotation,
    STATE(806), 1,
      sym__annotation_annotated_list,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19884] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(503), 1,
      sym__individual_2list,
    STATE(868), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19914] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(96), 1,
      sym_annotation_property_iri,
    STATE(526), 1,
      sym_annotation,
    STATE(590), 1,
      sym__annotation_annotated_list,
    STATE(611), 1,
      sym__annotations,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19948] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(44), 1,
      sym__annotation_annotated_list,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(600), 1,
      sym_annotation,
    STATE(614), 1,
      sym__annotations,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19982] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(98), 1,
      sym_annotation_property_iri,
    STATE(617), 1,
      sym__annotations,
    STATE(687), 1,
      sym_annotation,
    STATE(805), 1,
      sym__annotation_annotated_list,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20016] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(514), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(432), 4,
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
  [20040] = 10,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(596), 1,
      sym__annotations,
    STATE(721), 1,
      sym_annotation,
    STATE(823), 1,
      sym__annotation_annotated_list,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20074] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(49), 5,
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
  [20093] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(437), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20120] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(153), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20147] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(342), 1,
      sym_annotation_property_iri,
    STATE(407), 1,
      sym__annotation_property_iri_annotated_list,
    STATE(634), 1,
      sym__annotations,
    STATE(390), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20178] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(358), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20205] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1283), 1,
      anon_sym_LT,
    ACTIONS(1285), 1,
      anon_sym_inverse,
    ACTIONS(1287), 1,
      sym__pn_local,
    ACTIONS(1289), 1,
      sym__pname_ln,
    STATE(157), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20232] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(90), 1,
      sym_annotation_property_iri,
    STATE(619), 1,
      sym__annotations,
    STATE(631), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20263] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(474), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20290] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(314), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20317] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(93), 1,
      sym_annotation_property_iri,
    STATE(625), 1,
      sym__annotations,
    STATE(745), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20348] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(143), 5,
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
  [20367] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(94), 1,
      sym_annotation_property_iri,
    STATE(605), 1,
      sym__annotations,
    STATE(773), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20398] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 5,
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
  [20417] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(89), 5,
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
  [20436] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(91), 5,
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
  [20455] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(154), 5,
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
  [20474] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(612), 1,
      sym__annotations,
    STATE(810), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20505] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym_annotation,
    STATE(95), 1,
      sym_annotation_property_iri,
    STATE(608), 1,
      sym__annotations,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20536] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(63), 5,
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
  [20555] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(396), 1,
      sym_data_property_iri,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(354), 2,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20584] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(77), 5,
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
  [20603] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(145), 5,
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
  [20622] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(81), 5,
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
  [20641] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(64), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20668] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(353), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20695] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(51), 5,
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
  [20714] = 3,
    ACTIONS(3), 1,
      sym__comment,
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
  [20733] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(96), 1,
      sym_annotation_property_iri,
    STATE(543), 1,
      sym_annotation,
    STATE(613), 1,
      sym__annotations,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20764] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(198), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20791] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym_annotation,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(616), 1,
      sym__annotations,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20822] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(680), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20841] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(682), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20860] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(684), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [20879] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(301), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20906] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1283), 1,
      anon_sym_LT,
    ACTIONS(1285), 1,
      anon_sym_inverse,
    ACTIONS(1287), 1,
      sym__pn_local,
    ACTIONS(1289), 1,
      sym__pname_ln,
    STATE(206), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20933] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(445), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20960] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(445), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20987] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(149), 1,
      sym__object_property_characteristic,
    STATE(232), 1,
      sym__object_property_characteristic_annotated_list,
    STATE(650), 1,
      sym__annotations,
    ACTIONS(1330), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21012] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(626), 1,
      sym__annotations,
    STATE(287), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(292), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21041] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(98), 1,
      sym_annotation_property_iri,
    STATE(618), 1,
      sym__annotations,
    STATE(727), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21072] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(446), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21099] = 9,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym_annotation,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(602), 1,
      sym__annotations,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21130] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(684), 6,
      anon_sym__COLON,
      sym__non_zero,
      anon_sym_0,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [21148] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(840), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(101), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21172] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(852), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1332), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21196] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(832), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1334), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21220] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(843), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1336), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21244] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(844), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1338), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21268] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(853), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1340), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21292] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(854), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1342), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21316] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1344), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21340] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(682), 6,
      anon_sym__COLON,
      sym__non_zero,
      anon_sym_0,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [21358] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(58), 2,
      anon_sym_PLUS,
      sym__quoted_string,
    ACTIONS(553), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(666), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1346), 4,
      sym__non_zero,
      anon_sym_0,
      anon_sym_DASH,
      anon_sym_DOT,
  [21380] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(833), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1348), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21404] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(201), 1,
      sym__object_property_characteristic,
    STATE(629), 1,
      sym__annotations,
    ACTIONS(1350), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21426] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1352), 1,
      sym__language_tag,
    ACTIONS(1268), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(43), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21448] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(842), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1354), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21472] = 4,
    ACTIONS(3), 1,
      sym__comment,
    STATE(371), 1,
      sym__facet,
    ACTIONS(1356), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1358), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [21492] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(407), 1,
      sym__iri_annotated_list,
    STATE(668), 1,
      sym__annotations,
    STATE(349), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21520] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(841), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1360), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21544] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(680), 6,
      anon_sym__COLON,
      sym__non_zero,
      anon_sym_0,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [21562] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(846), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(87), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21586] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(188), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1362), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [21604] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1364), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21628] = 6,
    ACTIONS(3), 1,
      sym__comment,
    STATE(861), 1,
      sym__exponent,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1366), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [21652] = 4,
    ACTIONS(3), 1,
      sym__comment,
    STATE(388), 1,
      sym__facet,
    ACTIONS(1368), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1370), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [21672] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1044), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(1372), 6,
      anon_sym__COLON,
      sym__non_zero,
      anon_sym_0,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [21690] = 8,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(381), 1,
      sym_annotation_property_iri,
    STATE(641), 1,
      sym__annotations,
    STATE(390), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21718] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(746), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21743] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(599), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21762] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(599), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(430), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21781] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    STATE(599), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(154), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21800] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(597), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(432), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21819] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1374), 1,
      anon_sym_COMMA,
    STATE(598), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [21838] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(37), 1,
      sym_annotation,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21863] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(94), 1,
      sym_annotation_property_iri,
    STATE(691), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21888] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(476), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(292), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21911] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(94), 1,
      sym_annotation_property_iri,
    STATE(780), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21936] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(95), 1,
      sym_annotation_property_iri,
    STATE(311), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21961] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(609), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1297), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(430), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21982] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(37), 1,
      sym_annotation,
    STATE(95), 1,
      sym_annotation_property_iri,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22007] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1381), 1,
      anon_sym_COMMA,
    STATE(609), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1299), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(154), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [22028] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(624), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1304), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(432), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [22049] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(96), 1,
      sym_annotation_property_iri,
    STATE(513), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22074] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(800), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22099] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(96), 1,
      sym_annotation_property_iri,
    STATE(549), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22124] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(601), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22149] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(90), 1,
      sym_annotation_property_iri,
    STATE(623), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22174] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(37), 1,
      sym_annotation,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22199] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(98), 1,
      sym_annotation_property_iri,
    STATE(680), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22224] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(98), 1,
      sym_annotation_property_iri,
    STATE(731), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22249] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(90), 1,
      sym_annotation_property_iri,
    STATE(635), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22274] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    ACTIONS(1291), 1,
      anon_sym_Annotations_COLON,
    STATE(660), 1,
      sym__annotations,
    STATE(380), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22299] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(101), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22324] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(93), 1,
      sym_annotation_property_iri,
    STATE(676), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22349] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(607), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1293), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(342), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [22370] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(609), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1293), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(342), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [22391] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1101), 1,
      anon_sym_LT,
    ACTIONS(1107), 1,
      sym__pn_local,
    ACTIONS(1109), 1,
      sym__pname_ln,
    STATE(93), 1,
      sym_annotation_property_iri,
    STATE(796), 1,
      sym_annotation,
    STATE(594), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22416] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(295), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(292), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22439] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(257), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(292), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22462] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(461), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(292), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22485] = 3,
    ACTIONS(3), 1,
      sym__comment,
    STATE(186), 1,
      sym__object_property_characteristic,
    ACTIONS(1384), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [22501] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(110), 1,
      sym_class_iri,
    STATE(359), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22523] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1299), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(154), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22539] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(160), 1,
      sym_object_property_iri,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22561] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1318), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22577] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(348), 1,
      sym_annotation_property_iri,
    STATE(390), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22599] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1320), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22615] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(227), 1,
      sym_data_property_iri,
    STATE(292), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22637] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1283), 1,
      anon_sym_LT,
    ACTIONS(1287), 1,
      sym__pn_local,
    ACTIONS(1289), 1,
      sym__pname_ln,
    STATE(131), 1,
      sym_object_property_iri,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22659] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1316), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22675] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1312), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(89), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22691] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1322), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22707] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(386), 1,
      sym_annotation_property_iri,
    STATE(390), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22729] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(336), 1,
      sym_annotation_property_iri,
    STATE(390), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22751] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(684), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22767] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1324), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22783] = 3,
    ACTIONS(3), 1,
      sym__comment,
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
  [22799] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(182), 1,
      sym__pn_local,
    ACTIONS(184), 1,
      sym__pname_ln,
    STATE(131), 1,
      sym_object_property_iri,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22821] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1308), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22837] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(131), 1,
      sym_object_property_iri,
    STATE(142), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22859] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(214), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      sym__pn_local,
    ACTIONS(222), 1,
      sym__pname_ln,
    STATE(200), 1,
      sym_object_property_iri,
    STATE(185), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [22881] = 3,
    ACTIONS(3), 1,
      sym__comment,
    STATE(155), 1,
      sym__object_property_characteristic,
    ACTIONS(1386), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [22897] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(680), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22913] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(682), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22929] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1306), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22945] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1314), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(91), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22961] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1310), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [22977] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1388), 1,
      sym__language_tag,
    ACTIONS(1268), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22996] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(427), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [23015] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1392), 1,
      anon_sym_Self,
    ACTIONS(1396), 1,
      anon_sym_value,
    ACTIONS(1390), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1394), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [23034] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(60), 1,
      anon_sym_value,
    ACTIONS(58), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [23049] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(385), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [23068] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1398), 1,
      sym__language_tag,
    ACTIONS(1268), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23087] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1392), 1,
      anon_sym_Self,
    ACTIONS(1396), 1,
      anon_sym_value,
    ACTIONS(1400), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1402), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [23106] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1404), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23123] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1392), 1,
      anon_sym_Self,
    ACTIONS(1396), 1,
      anon_sym_value,
    ACTIONS(1406), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1408), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [23142] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1392), 1,
      anon_sym_Self,
    ACTIONS(1396), 1,
      anon_sym_value,
    ACTIONS(1410), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1412), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [23161] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1414), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1416), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(667), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23178] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(67), 2,
      sym__non_zero,
      anon_sym_0,
    ACTIONS(1418), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23195] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym__pn_local,
    ACTIONS(27), 1,
      sym__pname_ln,
    STATE(344), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [23214] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1420), 1,
      sym__language_tag,
    ACTIONS(1268), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23233] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1362), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(188), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [23248] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1392), 1,
      anon_sym_Self,
    ACTIONS(1396), 1,
      anon_sym_value,
    ACTIONS(1422), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1424), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [23267] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1392), 1,
      anon_sym_Self,
    ACTIONS(1430), 1,
      anon_sym_value,
    ACTIONS(1426), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1428), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [23286] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym_inverse,
      sym__pn_local,
  [23304] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1436), 1,
      anon_sym_DOT,
    ACTIONS(1434), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(419), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23320] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1440), 1,
      anon_sym_DOT,
    ACTIONS(1438), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(351), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23336] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(683), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym_inverse,
      sym__pn_local,
  [23354] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1440), 1,
      anon_sym_DOT,
    ACTIONS(1442), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(70), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23370] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1446), 1,
      anon_sym_DOT,
    ACTIONS(1444), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(448), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23386] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1450), 1,
      anon_sym_DOT,
    ACTIONS(1448), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(421), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23402] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1452), 1,
      anon_sym_COMMA,
    STATE(690), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym_not,
      sym__pn_local,
  [23420] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(430), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1297), 2,
      anon_sym__COLON,
      sym__pn_local,
  [23438] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1268), 1,
      sym__pn_local,
    ACTIONS(1456), 1,
      sym__language_tag,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23456] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(430), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1297), 2,
      anon_sym_inverse,
      sym__pn_local,
  [23474] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1452), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym_not,
      sym__pn_local,
  [23492] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1458), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1299), 2,
      anon_sym__COLON,
      sym__pn_local,
  [23510] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1461), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1299), 2,
      anon_sym_inverse,
      sym__pn_local,
  [23528] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1452), 1,
      anon_sym_COMMA,
    STATE(684), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(432), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1304), 2,
      anon_sym_not,
      sym__pn_local,
  [23546] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1466), 1,
      anon_sym_DOT,
    ACTIONS(1464), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(240), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23562] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(673), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(432), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1304), 2,
      anon_sym_inverse,
      sym__pn_local,
  [23580] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1452), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(430), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1297), 2,
      anon_sym_not,
      sym__pn_local,
  [23598] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(681), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym__COLON,
      sym__pn_local,
  [23616] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1293), 2,
      anon_sym__COLON,
      sym__pn_local,
  [23634] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1470), 1,
      anon_sym_DOT,
    ACTIONS(1468), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(363), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23650] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1472), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1299), 2,
      anon_sym_not,
      sym__pn_local,
  [23668] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1477), 1,
      anon_sym_DOT,
    ACTIONS(1475), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(411), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23684] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1440), 1,
      anon_sym_DOT,
    ACTIONS(1479), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(19), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23700] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(692), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(432), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1304), 2,
      anon_sym__COLON,
      sym__pn_local,
  [23718] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1481), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(572), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23731] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(7), 1,
      anon_sym_Ontology_COLON,
    STATE(876), 1,
      sym_ontology,
    STATE(817), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [23748] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1483), 1,
      sym__non_zero,
    ACTIONS(1485), 1,
      anon_sym_0,
    STATE(51), 1,
      sym_non_negative_integer,
    STATE(447), 2,
      sym__positive_integer,
      sym__zero,
  [23765] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1487), 1,
      sym__non_zero,
    ACTIONS(1489), 1,
      anon_sym_0,
    STATE(8), 1,
      sym_non_negative_integer,
    STATE(68), 2,
      sym__positive_integer,
      sym__zero,
  [23782] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1491), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(589), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23795] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1493), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(24), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23808] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1495), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(74), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23821] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1497), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(76), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23834] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1499), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(663), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23847] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1501), 1,
      anon_sym_and,
    STATE(709), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(489), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23862] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1503), 1,
      sym__non_zero,
    ACTIONS(1505), 1,
      anon_sym_0,
    STATE(9), 1,
      sym_non_negative_integer,
    STATE(91), 2,
      sym__positive_integer,
      sym__zero,
  [23879] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1501), 1,
      anon_sym_and,
    STATE(793), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(476), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23894] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1507), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(274), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23907] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1509), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(275), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23920] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(680), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23933] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(682), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23946] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1511), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(376), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23959] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1513), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(377), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [23972] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1306), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23985] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(684), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [23998] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1515), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(462), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24011] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1517), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(430), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24024] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1308), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24037] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1304), 1,
      sym__pn_local,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(747), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(432), 2,
      anon_sym_LT,
      sym__pname_ln,
  [24054] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1310), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24067] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1312), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24080] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1314), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24093] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1306), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24106] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1521), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(584), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24119] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1299), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24132] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1316), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24145] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1318), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24158] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1523), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(575), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24171] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1320), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24184] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1322), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24197] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1308), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24210] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1324), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24223] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1326), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24236] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(680), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24249] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(682), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24262] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(684), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24275] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1525), 1,
      anon_sym_and,
    STATE(782), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24290] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1310), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24303] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1312), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24316] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1314), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24329] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1525), 1,
      anon_sym_and,
    STATE(787), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(458), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24344] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1527), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(571), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24357] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1299), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24370] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1293), 1,
      sym__pn_local,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(763), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
  [24387] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1293), 1,
      sym__pn_local,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(765), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      sym__pname_ln,
  [24404] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(680), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24417] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(682), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24430] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(684), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24443] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1316), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24456] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1529), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(576), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24469] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1318), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24482] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1322), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24495] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1324), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24508] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1326), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24521] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1531), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(473), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24534] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1533), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(591), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24547] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1535), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(25), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24560] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1306), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24573] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1537), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(592), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24586] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1525), 1,
      anon_sym_and,
    STATE(743), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(491), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24601] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1297), 1,
      sym__pn_local,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(765), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(430), 2,
      anon_sym_LT,
      sym__pname_ln,
  [24618] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1539), 1,
      sym__non_zero,
    ACTIONS(1541), 1,
      anon_sym_0,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(63), 2,
      sym__positive_integer,
      sym__zero,
  [24635] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1299), 1,
      sym__pn_local,
    ACTIONS(1543), 1,
      anon_sym_COMMA,
    STATE(765), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_LT,
      sym__pname_ln,
  [24652] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1308), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24665] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1310), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24678] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1546), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(573), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24691] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1312), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24704] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1314), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24717] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1548), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(486), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24730] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1550), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(581), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24743] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1299), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24756] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1316), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24769] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1552), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(587), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24782] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1554), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(574), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24795] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1556), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(577), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24808] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1558), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(578), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24821] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1318), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24834] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1320), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24847] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1322), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24860] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1525), 1,
      anon_sym_and,
    STATE(787), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(483), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24875] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1560), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(374), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24888] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1562), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(375), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24901] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1324), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24914] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1326), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [24927] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1564), 1,
      anon_sym_and,
    STATE(787), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(206), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24942] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1567), 1,
      sym__non_zero,
    ACTIONS(1569), 1,
      anon_sym_0,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(45), 2,
      sym__positive_integer,
      sym__zero,
  [24959] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1571), 1,
      anon_sym_that,
    ACTIONS(485), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24972] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1573), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(454), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24985] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1575), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(436), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [24998] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1577), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(452), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [25011] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1579), 1,
      anon_sym_and,
    STATE(793), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(208), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25026] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1582), 1,
      sym__non_zero,
    ACTIONS(1584), 1,
      anon_sym_0,
    STATE(4), 1,
      sym_non_negative_integer,
    STATE(48), 2,
      sym__positive_integer,
      sym__zero,
  [25043] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1586), 2,
      sym__non_zero,
      anon_sym_0,
    STATE(453), 3,
      aux_sym__digits,
      sym__digit,
      sym__zero,
  [25056] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1320), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25069] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1310), 1,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25081] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1312), 1,
      sym__pn_local,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25093] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1318), 1,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25105] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1320), 1,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25117] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1588), 1,
      anon_sym_or,
    STATE(814), 1,
      aux_sym_description_repeat1,
    ACTIONS(518), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25131] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1322), 1,
      sym__pn_local,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25143] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(682), 1,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25155] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1314), 1,
      sym__pn_local,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25167] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(188), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1362), 2,
      anon_sym_not,
      sym__pn_local,
  [25179] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(188), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1362), 2,
      anon_sym__COLON,
      sym__pn_local,
  [25191] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(188), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1362), 2,
      anon_sym_inverse,
      sym__pn_local,
  [25203] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1308), 1,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25215] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1306), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25227] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1299), 1,
      sym__pn_local,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25239] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(680), 1,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25251] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1324), 1,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25263] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1326), 1,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25275] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1590), 1,
      anon_sym_or,
    STATE(814), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25289] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1588), 1,
      anon_sym_or,
    STATE(801), 1,
      aux_sym_description_repeat1,
    ACTIONS(549), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25303] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(684), 1,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25315] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1593), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(1596), 1,
      anon_sym_Ontology_COLON,
    STATE(817), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [25329] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1316), 1,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [25341] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1598), 1,
      anon_sym_COMMA,
    ACTIONS(1600), 1,
      anon_sym_RBRACK,
    STATE(822), 1,
      aux_sym_datatype_restriction_repeat1,
  [25354] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1602), 1,
      anon_sym_RBRACE,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    STATE(828), 1,
      aux_sym__individual_2list_repeat1,
  [25367] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1606), 1,
      anon_sym_RBRACE,
    ACTIONS(1608), 1,
      anon_sym_COMMA,
    STATE(826), 1,
      aux_sym__literal_list_repeat1,
  [25380] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1610), 1,
      anon_sym_COMMA,
    ACTIONS(1613), 1,
      anon_sym_RBRACK,
    STATE(822), 1,
      aux_sym_datatype_restriction_repeat1,
  [25393] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1362), 1,
      sym__pn_local,
    ACTIONS(188), 2,
      anon_sym_LT,
      sym__pname_ln,
  [25404] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
    ACTIONS(1615), 1,
      anon_sym_COMMA,
    STATE(824), 1,
      aux_sym__individual_2list_repeat1,
  [25417] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1618), 1,
      anon_sym_Functional,
    STATE(902), 1,
      sym__annotations,
  [25430] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1608), 1,
      anon_sym_COMMA,
    ACTIONS(1620), 1,
      anon_sym_RBRACE,
    STATE(829), 1,
      aux_sym__literal_list_repeat1,
  [25443] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1598), 1,
      anon_sym_COMMA,
    ACTIONS(1622), 1,
      anon_sym_RBRACK,
    STATE(819), 1,
      aux_sym_datatype_restriction_repeat1,
  [25456] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1604), 1,
      anon_sym_COMMA,
    ACTIONS(1624), 1,
      anon_sym_RBRACE,
    STATE(824), 1,
      aux_sym__individual_2list_repeat1,
  [25469] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1626), 1,
      anon_sym_RBRACE,
    ACTIONS(1628), 1,
      anon_sym_COMMA,
    STATE(829), 1,
      aux_sym__literal_list_repeat1,
  [25482] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1631), 2,
      anon_sym_f,
      anon_sym_F,
  [25490] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1633), 2,
      anon_sym_f,
      anon_sym_F,
  [25498] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1348), 2,
      anon_sym_f,
      anon_sym_F,
  [25506] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1635), 2,
      anon_sym_f,
      anon_sym_F,
  [25514] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1360), 2,
      anon_sym_f,
      anon_sym_F,
  [25522] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1637), 2,
      anon_sym_Prefix_COLON,
      anon_sym_Ontology_COLON,
  [25530] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1354), 2,
      anon_sym_f,
      anon_sym_F,
  [25538] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1639), 2,
      anon_sym_f,
      anon_sym_F,
  [25546] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(87), 2,
      anon_sym_f,
      anon_sym_F,
  [25554] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      anon_sym_LT,
    STATE(835), 1,
      sym_full_iri,
  [25564] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
  [25572] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1336), 2,
      anon_sym_f,
      anon_sym_F,
  [25580] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1338), 2,
      anon_sym_f,
      anon_sym_F,
  [25588] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1641), 2,
      anon_sym_f,
      anon_sym_F,
  [25596] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1643), 2,
      anon_sym_f,
      anon_sym_F,
  [25604] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1645), 2,
      anon_sym_f,
      anon_sym_F,
  [25612] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(101), 2,
      anon_sym_f,
      anon_sym_F,
  [25620] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1647), 2,
      anon_sym_f,
      anon_sym_F,
  [25628] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1334), 2,
      anon_sym_f,
      anon_sym_F,
  [25636] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1649), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25644] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1342), 2,
      anon_sym_f,
      anon_sym_F,
  [25652] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1332), 2,
      anon_sym_f,
      anon_sym_F,
  [25660] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1340), 2,
      anon_sym_f,
      anon_sym_F,
  [25668] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1651), 2,
      anon_sym_f,
      anon_sym_F,
  [25676] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1344), 2,
      anon_sym_f,
      anon_sym_F,
  [25684] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1653), 2,
      anon_sym_f,
      anon_sym_F,
  [25692] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1655), 2,
      anon_sym_f,
      anon_sym_F,
  [25700] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1657), 2,
      anon_sym_f,
      anon_sym_F,
  [25708] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1364), 2,
      anon_sym_f,
      anon_sym_F,
  [25716] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1626), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [25724] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1366), 2,
      anon_sym_f,
      anon_sym_F,
  [25732] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1659), 2,
      anon_sym_f,
      anon_sym_F,
  [25740] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1661), 1,
      sym__pn_local,
  [25747] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1663), 1,
      sym__iri_rfc3987,
  [25754] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1665), 1,
      sym__iri_rfc3987,
  [25761] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1667), 1,
      sym__iri_rfc3987,
  [25768] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1669), 1,
      sym__iri_rfc3987,
  [25775] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1671), 1,
      sym__pn_local,
  [25782] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1673), 1,
      anon_sym_COMMA,
  [25789] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1675), 1,
      anon_sym_GT,
  [25796] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1677), 1,
      anon_sym_GT,
  [25803] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1679), 1,
      anon_sym_RBRACE,
  [25810] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1681), 1,
      anon_sym_RBRACE,
  [25817] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1683), 1,
      sym__iri_rfc3987,
  [25824] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1685), 1,
      anon_sym_GT,
  [25831] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1687), 1,
      anon_sym_CARET_CARET,
  [25838] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1689), 1,
      ts_builtin_sym_end,
  [25845] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1691), 1,
      anon_sym_COMMA,
  [25852] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1693), 1,
      anon_sym_GT,
  [25859] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1695), 1,
      anon_sym_COMMA,
  [25866] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1697), 1,
      anon_sym_GT,
  [25873] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1699), 1,
      sym__pn_local,
  [25880] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1701), 1,
      anon_sym_GT,
  [25887] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1703), 1,
      anon_sym_CARET_CARET,
  [25894] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1705), 1,
      sym__iri_rfc3987,
  [25901] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1707), 1,
      anon_sym_CARET_CARET,
  [25908] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1679), 1,
      anon_sym_RPAREN,
  [25915] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1709), 1,
      anon_sym_CARET_CARET,
  [25922] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1711), 1,
      ts_builtin_sym_end,
  [25929] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1713), 1,
      sym__iri_rfc3987,
  [25936] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1715), 1,
      anon_sym_GT,
  [25943] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1717), 1,
      sym_prefix_name,
  [25950] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1719), 1,
      sym__pn_local,
  [25957] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1721), 1,
      sym__pn_local,
  [25964] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1723), 1,
      anon_sym_GT,
  [25971] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1725), 1,
      anon_sym_GT,
  [25978] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1727), 1,
      ts_builtin_sym_end,
  [25985] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1729), 1,
      anon_sym_GT,
  [25992] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1731), 1,
      anon_sym_CARET_CARET,
  [25999] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1733), 1,
      anon_sym_value,
  [26006] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1735), 1,
      sym__pn_local,
  [26013] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1737), 1,
      anon_sym_CARET_CARET,
  [26020] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1739), 1,
      anon_sym_Functional,
  [26027] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1741), 1,
      sym__iri_rfc3987,
  [26034] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1743), 1,
      sym__iri_rfc3987,
  [26041] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1745), 1,
      sym__iri_rfc3987,
  [26048] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1747), 1,
      anon_sym_CARET_CARET,
  [26055] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1749), 1,
      anon_sym_COMMA,
  [26062] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1751), 1,
      anon_sym_CARET_CARET,
  [26069] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1753), 1,
      sym__iri_rfc3987,
  [26076] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1755), 1,
      anon_sym_GT,
  [26083] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1757), 1,
      sym__pn_local,
  [26090] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1759), 1,
      anon_sym_COMMA,
  [26097] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(1681), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 232,
  [SMALL_STATE(6)] = 317,
  [SMALL_STATE(7)] = 373,
  [SMALL_STATE(8)] = 429,
  [SMALL_STATE(9)] = 513,
  [SMALL_STATE(10)] = 592,
  [SMALL_STATE(11)] = 646,
  [SMALL_STATE(12)] = 695,
  [SMALL_STATE(13)] = 743,
  [SMALL_STATE(14)] = 799,
  [SMALL_STATE(15)] = 847,
  [SMALL_STATE(16)] = 909,
  [SMALL_STATE(17)] = 957,
  [SMALL_STATE(18)] = 1005,
  [SMALL_STATE(19)] = 1053,
  [SMALL_STATE(20)] = 1115,
  [SMALL_STATE(21)] = 1163,
  [SMALL_STATE(22)] = 1211,
  [SMALL_STATE(23)] = 1258,
  [SMALL_STATE(24)] = 1309,
  [SMALL_STATE(25)] = 1368,
  [SMALL_STATE(26)] = 1427,
  [SMALL_STATE(27)] = 1480,
  [SMALL_STATE(28)] = 1533,
  [SMALL_STATE(29)] = 1586,
  [SMALL_STATE(30)] = 1639,
  [SMALL_STATE(31)] = 1690,
  [SMALL_STATE(32)] = 1741,
  [SMALL_STATE(33)] = 1792,
  [SMALL_STATE(34)] = 1842,
  [SMALL_STATE(35)] = 1892,
  [SMALL_STATE(36)] = 1942,
  [SMALL_STATE(37)] = 1985,
  [SMALL_STATE(38)] = 2028,
  [SMALL_STATE(39)] = 2077,
  [SMALL_STATE(40)] = 2126,
  [SMALL_STATE(41)] = 2175,
  [SMALL_STATE(42)] = 2218,
  [SMALL_STATE(43)] = 2298,
  [SMALL_STATE(44)] = 2378,
  [SMALL_STATE(45)] = 2420,
  [SMALL_STATE(46)] = 2464,
  [SMALL_STATE(47)] = 2506,
  [SMALL_STATE(48)] = 2546,
  [SMALL_STATE(49)] = 2588,
  [SMALL_STATE(50)] = 2627,
  [SMALL_STATE(51)] = 2666,
  [SMALL_STATE(52)] = 2733,
  [SMALL_STATE(53)] = 2772,
  [SMALL_STATE(54)] = 2811,
  [SMALL_STATE(55)] = 2850,
  [SMALL_STATE(56)] = 2903,
  [SMALL_STATE(57)] = 2956,
  [SMALL_STATE(58)] = 2995,
  [SMALL_STATE(59)] = 3034,
  [SMALL_STATE(60)] = 3073,
  [SMALL_STATE(61)] = 3112,
  [SMALL_STATE(62)] = 3151,
  [SMALL_STATE(63)] = 3190,
  [SMALL_STATE(64)] = 3231,
  [SMALL_STATE(65)] = 3270,
  [SMALL_STATE(66)] = 3345,
  [SMALL_STATE(67)] = 3398,
  [SMALL_STATE(68)] = 3436,
  [SMALL_STATE(69)] = 3476,
  [SMALL_STATE(70)] = 3530,
  [SMALL_STATE(71)] = 3584,
  [SMALL_STATE(72)] = 3628,
  [SMALL_STATE(73)] = 3672,
  [SMALL_STATE(74)] = 3716,
  [SMALL_STATE(75)] = 3767,
  [SMALL_STATE(76)] = 3810,
  [SMALL_STATE(77)] = 3861,
  [SMALL_STATE(78)] = 3897,
  [SMALL_STATE(79)] = 3963,
  [SMALL_STATE(80)] = 3999,
  [SMALL_STATE(81)] = 4058,
  [SMALL_STATE(82)] = 4117,
  [SMALL_STATE(83)] = 4176,
  [SMALL_STATE(84)] = 4235,
  [SMALL_STATE(85)] = 4294,
  [SMALL_STATE(86)] = 4353,
  [SMALL_STATE(87)] = 4415,
  [SMALL_STATE(88)] = 4477,
  [SMALL_STATE(89)] = 4539,
  [SMALL_STATE(90)] = 4601,
  [SMALL_STATE(91)] = 4656,
  [SMALL_STATE(92)] = 4691,
  [SMALL_STATE(93)] = 4728,
  [SMALL_STATE(94)] = 4783,
  [SMALL_STATE(95)] = 4838,
  [SMALL_STATE(96)] = 4893,
  [SMALL_STATE(97)] = 4948,
  [SMALL_STATE(98)] = 5003,
  [SMALL_STATE(99)] = 5058,
  [SMALL_STATE(100)] = 5113,
  [SMALL_STATE(101)] = 5150,
  [SMALL_STATE(102)] = 5187,
  [SMALL_STATE(103)] = 5224,
  [SMALL_STATE(104)] = 5261,
  [SMALL_STATE(105)] = 5316,
  [SMALL_STATE(106)] = 5352,
  [SMALL_STATE(107)] = 5388,
  [SMALL_STATE(108)] = 5444,
  [SMALL_STATE(109)] = 5490,
  [SMALL_STATE(110)] = 5546,
  [SMALL_STATE(111)] = 5592,
  [SMALL_STATE(112)] = 5648,
  [SMALL_STATE(113)] = 5684,
  [SMALL_STATE(114)] = 5740,
  [SMALL_STATE(115)] = 5776,
  [SMALL_STATE(116)] = 5812,
  [SMALL_STATE(117)] = 5848,
  [SMALL_STATE(118)] = 5904,
  [SMALL_STATE(119)] = 5960,
  [SMALL_STATE(120)] = 5994,
  [SMALL_STATE(121)] = 6030,
  [SMALL_STATE(122)] = 6066,
  [SMALL_STATE(123)] = 6112,
  [SMALL_STATE(124)] = 6147,
  [SMALL_STATE(125)] = 6182,
  [SMALL_STATE(126)] = 6245,
  [SMALL_STATE(127)] = 6300,
  [SMALL_STATE(128)] = 6335,
  [SMALL_STATE(129)] = 6398,
  [SMALL_STATE(130)] = 6461,
  [SMALL_STATE(131)] = 6524,
  [SMALL_STATE(132)] = 6555,
  [SMALL_STATE(133)] = 6590,
  [SMALL_STATE(134)] = 6645,
  [SMALL_STATE(135)] = 6708,
  [SMALL_STATE(136)] = 6771,
  [SMALL_STATE(137)] = 6834,
  [SMALL_STATE(138)] = 6897,
  [SMALL_STATE(139)] = 6932,
  [SMALL_STATE(140)] = 6987,
  [SMALL_STATE(141)] = 7042,
  [SMALL_STATE(142)] = 7077,
  [SMALL_STATE(143)] = 7108,
  [SMALL_STATE(144)] = 7142,
  [SMALL_STATE(145)] = 7176,
  [SMALL_STATE(146)] = 7218,
  [SMALL_STATE(147)] = 7250,
  [SMALL_STATE(148)] = 7284,
  [SMALL_STATE(149)] = 7318,
  [SMALL_STATE(150)] = 7352,
  [SMALL_STATE(151)] = 7412,
  [SMALL_STATE(152)] = 7446,
  [SMALL_STATE(153)] = 7488,
  [SMALL_STATE(154)] = 7522,
  [SMALL_STATE(155)] = 7556,
  [SMALL_STATE(156)] = 7590,
  [SMALL_STATE(157)] = 7624,
  [SMALL_STATE(158)] = 7658,
  [SMALL_STATE(159)] = 7692,
  [SMALL_STATE(160)] = 7752,
  [SMALL_STATE(161)] = 7794,
  [SMALL_STATE(162)] = 7828,
  [SMALL_STATE(163)] = 7858,
  [SMALL_STATE(164)] = 7892,
  [SMALL_STATE(165)] = 7926,
  [SMALL_STATE(166)] = 7960,
  [SMALL_STATE(167)] = 7994,
  [SMALL_STATE(168)] = 8028,
  [SMALL_STATE(169)] = 8062,
  [SMALL_STATE(170)] = 8096,
  [SMALL_STATE(171)] = 8130,
  [SMALL_STATE(172)] = 8164,
  [SMALL_STATE(173)] = 8198,
  [SMALL_STATE(174)] = 8232,
  [SMALL_STATE(175)] = 8266,
  [SMALL_STATE(176)] = 8326,
  [SMALL_STATE(177)] = 8360,
  [SMALL_STATE(178)] = 8394,
  [SMALL_STATE(179)] = 8428,
  [SMALL_STATE(180)] = 8488,
  [SMALL_STATE(181)] = 8520,
  [SMALL_STATE(182)] = 8554,
  [SMALL_STATE(183)] = 8588,
  [SMALL_STATE(184)] = 8622,
  [SMALL_STATE(185)] = 8680,
  [SMALL_STATE(186)] = 8711,
  [SMALL_STATE(187)] = 8740,
  [SMALL_STATE(188)] = 8797,
  [SMALL_STATE(189)] = 8852,
  [SMALL_STATE(190)] = 8885,
  [SMALL_STATE(191)] = 8914,
  [SMALL_STATE(192)] = 8947,
  [SMALL_STATE(193)] = 8980,
  [SMALL_STATE(194)] = 9013,
  [SMALL_STATE(195)] = 9046,
  [SMALL_STATE(196)] = 9077,
  [SMALL_STATE(197)] = 9108,
  [SMALL_STATE(198)] = 9139,
  [SMALL_STATE(199)] = 9168,
  [SMALL_STATE(200)] = 9197,
  [SMALL_STATE(201)] = 9228,
  [SMALL_STATE(202)] = 9257,
  [SMALL_STATE(203)] = 9290,
  [SMALL_STATE(204)] = 9323,
  [SMALL_STATE(205)] = 9380,
  [SMALL_STATE(206)] = 9435,
  [SMALL_STATE(207)] = 9464,
  [SMALL_STATE(208)] = 9495,
  [SMALL_STATE(209)] = 9528,
  [SMALL_STATE(210)] = 9561,
  [SMALL_STATE(211)] = 9594,
  [SMALL_STATE(212)] = 9623,
  [SMALL_STATE(213)] = 9652,
  [SMALL_STATE(214)] = 9681,
  [SMALL_STATE(215)] = 9714,
  [SMALL_STATE(216)] = 9762,
  [SMALL_STATE(217)] = 9794,
  [SMALL_STATE(218)] = 9842,
  [SMALL_STATE(219)] = 9872,
  [SMALL_STATE(220)] = 9920,
  [SMALL_STATE(221)] = 9952,
  [SMALL_STATE(222)] = 9992,
  [SMALL_STATE(223)] = 10024,
  [SMALL_STATE(224)] = 10078,
  [SMALL_STATE(225)] = 10126,
  [SMALL_STATE(226)] = 10180,
  [SMALL_STATE(227)] = 10212,
  [SMALL_STATE(228)] = 10252,
  [SMALL_STATE(229)] = 10284,
  [SMALL_STATE(230)] = 10332,
  [SMALL_STATE(231)] = 10386,
  [SMALL_STATE(232)] = 10418,
  [SMALL_STATE(233)] = 10446,
  [SMALL_STATE(234)] = 10478,
  [SMALL_STATE(235)] = 10510,
  [SMALL_STATE(236)] = 10542,
  [SMALL_STATE(237)] = 10596,
  [SMALL_STATE(238)] = 10650,
  [SMALL_STATE(239)] = 10682,
  [SMALL_STATE(240)] = 10714,
  [SMALL_STATE(241)] = 10756,
  [SMALL_STATE(242)] = 10788,
  [SMALL_STATE(243)] = 10842,
  [SMALL_STATE(244)] = 10874,
  [SMALL_STATE(245)] = 10928,
  [SMALL_STATE(246)] = 10982,
  [SMALL_STATE(247)] = 11014,
  [SMALL_STATE(248)] = 11046,
  [SMALL_STATE(249)] = 11078,
  [SMALL_STATE(250)] = 11132,
  [SMALL_STATE(251)] = 11164,
  [SMALL_STATE(252)] = 11212,
  [SMALL_STATE(253)] = 11244,
  [SMALL_STATE(254)] = 11284,
  [SMALL_STATE(255)] = 11316,
  [SMALL_STATE(256)] = 11370,
  [SMALL_STATE(257)] = 11402,
  [SMALL_STATE(258)] = 11434,
  [SMALL_STATE(259)] = 11488,
  [SMALL_STATE(260)] = 11542,
  [SMALL_STATE(261)] = 11574,
  [SMALL_STATE(262)] = 11606,
  [SMALL_STATE(263)] = 11660,
  [SMALL_STATE(264)] = 11692,
  [SMALL_STATE(265)] = 11724,
  [SMALL_STATE(266)] = 11756,
  [SMALL_STATE(267)] = 11798,
  [SMALL_STATE(268)] = 11849,
  [SMALL_STATE(269)] = 11880,
  [SMALL_STATE(270)] = 11909,
  [SMALL_STATE(271)] = 11940,
  [SMALL_STATE(272)] = 11969,
  [SMALL_STATE(273)] = 12018,
  [SMALL_STATE(274)] = 12047,
  [SMALL_STATE(275)] = 12086,
  [SMALL_STATE(276)] = 12125,
  [SMALL_STATE(277)] = 12158,
  [SMALL_STATE(278)] = 12209,
  [SMALL_STATE(279)] = 12240,
  [SMALL_STATE(280)] = 12271,
  [SMALL_STATE(281)] = 12302,
  [SMALL_STATE(282)] = 12351,
  [SMALL_STATE(283)] = 12382,
  [SMALL_STATE(284)] = 12413,
  [SMALL_STATE(285)] = 12462,
  [SMALL_STATE(286)] = 12513,
  [SMALL_STATE(287)] = 12564,
  [SMALL_STATE(288)] = 12591,
  [SMALL_STATE(289)] = 12640,
  [SMALL_STATE(290)] = 12667,
  [SMALL_STATE(291)] = 12718,
  [SMALL_STATE(292)] = 12749,
  [SMALL_STATE(293)] = 12776,
  [SMALL_STATE(294)] = 12807,
  [SMALL_STATE(295)] = 12838,
  [SMALL_STATE(296)] = 12865,
  [SMALL_STATE(297)] = 12892,
  [SMALL_STATE(298)] = 12923,
  [SMALL_STATE(299)] = 12974,
  [SMALL_STATE(300)] = 13020,
  [SMALL_STATE(301)] = 13066,
  [SMALL_STATE(302)] = 13096,
  [SMALL_STATE(303)] = 13126,
  [SMALL_STATE(304)] = 13156,
  [SMALL_STATE(305)] = 13188,
  [SMALL_STATE(306)] = 13218,
  [SMALL_STATE(307)] = 13248,
  [SMALL_STATE(308)] = 13278,
  [SMALL_STATE(309)] = 13308,
  [SMALL_STATE(310)] = 13338,
  [SMALL_STATE(311)] = 13368,
  [SMALL_STATE(312)] = 13398,
  [SMALL_STATE(313)] = 13434,
  [SMALL_STATE(314)] = 13460,
  [SMALL_STATE(315)] = 13496,
  [SMALL_STATE(316)] = 13522,
  [SMALL_STATE(317)] = 13552,
  [SMALL_STATE(318)] = 13598,
  [SMALL_STATE(319)] = 13630,
  [SMALL_STATE(320)] = 13676,
  [SMALL_STATE(321)] = 13712,
  [SMALL_STATE(322)] = 13758,
  [SMALL_STATE(323)] = 13788,
  [SMALL_STATE(324)] = 13818,
  [SMALL_STATE(325)] = 13864,
  [SMALL_STATE(326)] = 13894,
  [SMALL_STATE(327)] = 13924,
  [SMALL_STATE(328)] = 13956,
  [SMALL_STATE(329)] = 13982,
  [SMALL_STATE(330)] = 14012,
  [SMALL_STATE(331)] = 14044,
  [SMALL_STATE(332)] = 14074,
  [SMALL_STATE(333)] = 14104,
  [SMALL_STATE(334)] = 14150,
  [SMALL_STATE(335)] = 14180,
  [SMALL_STATE(336)] = 14210,
  [SMALL_STATE(337)] = 14243,
  [SMALL_STATE(338)] = 14282,
  [SMALL_STATE(339)] = 14311,
  [SMALL_STATE(340)] = 14340,
  [SMALL_STATE(341)] = 14369,
  [SMALL_STATE(342)] = 14398,
  [SMALL_STATE(343)] = 14427,
  [SMALL_STATE(344)] = 14452,
  [SMALL_STATE(345)] = 14481,
  [SMALL_STATE(346)] = 14510,
  [SMALL_STATE(347)] = 14535,
  [SMALL_STATE(348)] = 14568,
  [SMALL_STATE(349)] = 14597,
  [SMALL_STATE(350)] = 14626,
  [SMALL_STATE(351)] = 14669,
  [SMALL_STATE(352)] = 14708,
  [SMALL_STATE(353)] = 14741,
  [SMALL_STATE(354)] = 14766,
  [SMALL_STATE(355)] = 14791,
  [SMALL_STATE(356)] = 14816,
  [SMALL_STATE(357)] = 14841,
  [SMALL_STATE(358)] = 14866,
  [SMALL_STATE(359)] = 14891,
  [SMALL_STATE(360)] = 14916,
  [SMALL_STATE(361)] = 14941,
  [SMALL_STATE(362)] = 14966,
  [SMALL_STATE(363)] = 14991,
  [SMALL_STATE(364)] = 15030,
  [SMALL_STATE(365)] = 15055,
  [SMALL_STATE(366)] = 15094,
  [SMALL_STATE(367)] = 15123,
  [SMALL_STATE(368)] = 15165,
  [SMALL_STATE(369)] = 15207,
  [SMALL_STATE(370)] = 15237,
  [SMALL_STATE(371)] = 15261,
  [SMALL_STATE(372)] = 15297,
  [SMALL_STATE(373)] = 15335,
  [SMALL_STATE(374)] = 15377,
  [SMALL_STATE(375)] = 15413,
  [SMALL_STATE(376)] = 15449,
  [SMALL_STATE(377)] = 15485,
  [SMALL_STATE(378)] = 15521,
  [SMALL_STATE(379)] = 15547,
  [SMALL_STATE(380)] = 15577,
  [SMALL_STATE(381)] = 15601,
  [SMALL_STATE(382)] = 15625,
  [SMALL_STATE(383)] = 15657,
  [SMALL_STATE(384)] = 15699,
  [SMALL_STATE(385)] = 15731,
  [SMALL_STATE(386)] = 15755,
  [SMALL_STATE(387)] = 15779,
  [SMALL_STATE(388)] = 15821,
  [SMALL_STATE(389)] = 15857,
  [SMALL_STATE(390)] = 15899,
  [SMALL_STATE(391)] = 15923,
  [SMALL_STATE(392)] = 15962,
  [SMALL_STATE(393)] = 15989,
  [SMALL_STATE(394)] = 16024,
  [SMALL_STATE(395)] = 16053,
  [SMALL_STATE(396)] = 16082,
  [SMALL_STATE(397)] = 16117,
  [SMALL_STATE(398)] = 16144,
  [SMALL_STATE(399)] = 16171,
  [SMALL_STATE(400)] = 16198,
  [SMALL_STATE(401)] = 16225,
  [SMALL_STATE(402)] = 16252,
  [SMALL_STATE(403)] = 16279,
  [SMALL_STATE(404)] = 16306,
  [SMALL_STATE(405)] = 16341,
  [SMALL_STATE(406)] = 16382,
  [SMALL_STATE(407)] = 16417,
  [SMALL_STATE(408)] = 16440,
  [SMALL_STATE(409)] = 16465,
  [SMALL_STATE(410)] = 16492,
  [SMALL_STATE(411)] = 16519,
  [SMALL_STATE(412)] = 16555,
  [SMALL_STATE(413)] = 16581,
  [SMALL_STATE(414)] = 16607,
  [SMALL_STATE(415)] = 16633,
  [SMALL_STATE(416)] = 16669,
  [SMALL_STATE(417)] = 16695,
  [SMALL_STATE(418)] = 16737,
  [SMALL_STATE(419)] = 16773,
  [SMALL_STATE(420)] = 16809,
  [SMALL_STATE(421)] = 16835,
  [SMALL_STATE(422)] = 16871,
  [SMALL_STATE(423)] = 16907,
  [SMALL_STATE(424)] = 16943,
  [SMALL_STATE(425)] = 16969,
  [SMALL_STATE(426)] = 16995,
  [SMALL_STATE(427)] = 17032,
  [SMALL_STATE(428)] = 17053,
  [SMALL_STATE(429)] = 17078,
  [SMALL_STATE(430)] = 17115,
  [SMALL_STATE(431)] = 17148,
  [SMALL_STATE(432)] = 17185,
  [SMALL_STATE(433)] = 17222,
  [SMALL_STATE(434)] = 17249,
  [SMALL_STATE(435)] = 17284,
  [SMALL_STATE(436)] = 17321,
  [SMALL_STATE(437)] = 17354,
  [SMALL_STATE(438)] = 17379,
  [SMALL_STATE(439)] = 17404,
  [SMALL_STATE(440)] = 17429,
  [SMALL_STATE(441)] = 17454,
  [SMALL_STATE(442)] = 17481,
  [SMALL_STATE(443)] = 17506,
  [SMALL_STATE(444)] = 17543,
  [SMALL_STATE(445)] = 17582,
  [SMALL_STATE(446)] = 17603,
  [SMALL_STATE(447)] = 17628,
  [SMALL_STATE(448)] = 17651,
  [SMALL_STATE(449)] = 17686,
  [SMALL_STATE(450)] = 17723,
  [SMALL_STATE(451)] = 17744,
  [SMALL_STATE(452)] = 17781,
  [SMALL_STATE(453)] = 17814,
  [SMALL_STATE(454)] = 17847,
  [SMALL_STATE(455)] = 17880,
  [SMALL_STATE(456)] = 17917,
  [SMALL_STATE(457)] = 17942,
  [SMALL_STATE(458)] = 17969,
  [SMALL_STATE(459)] = 17994,
  [SMALL_STATE(460)] = 18031,
  [SMALL_STATE(461)] = 18068,
  [SMALL_STATE(462)] = 18093,
  [SMALL_STATE(463)] = 18126,
  [SMALL_STATE(464)] = 18151,
  [SMALL_STATE(465)] = 18176,
  [SMALL_STATE(466)] = 18211,
  [SMALL_STATE(467)] = 18248,
  [SMALL_STATE(468)] = 18284,
  [SMALL_STATE(469)] = 18318,
  [SMALL_STATE(470)] = 18344,
  [SMALL_STATE(471)] = 18378,
  [SMALL_STATE(472)] = 18412,
  [SMALL_STATE(473)] = 18448,
  [SMALL_STATE(474)] = 18480,
  [SMALL_STATE(475)] = 18500,
  [SMALL_STATE(476)] = 18530,
  [SMALL_STATE(477)] = 18550,
  [SMALL_STATE(478)] = 18570,
  [SMALL_STATE(479)] = 18590,
  [SMALL_STATE(480)] = 18624,
  [SMALL_STATE(481)] = 18658,
  [SMALL_STATE(482)] = 18692,
  [SMALL_STATE(483)] = 18718,
  [SMALL_STATE(484)] = 18752,
  [SMALL_STATE(485)] = 18786,
  [SMALL_STATE(486)] = 18820,
  [SMALL_STATE(487)] = 18852,
  [SMALL_STATE(488)] = 18886,
  [SMALL_STATE(489)] = 18912,
  [SMALL_STATE(490)] = 18948,
  [SMALL_STATE(491)] = 18974,
  [SMALL_STATE(492)] = 19008,
  [SMALL_STATE(493)] = 19042,
  [SMALL_STATE(494)] = 19061,
  [SMALL_STATE(495)] = 19090,
  [SMALL_STATE(496)] = 19119,
  [SMALL_STATE(497)] = 19152,
  [SMALL_STATE(498)] = 19181,
  [SMALL_STATE(499)] = 19214,
  [SMALL_STATE(500)] = 19243,
  [SMALL_STATE(501)] = 19272,
  [SMALL_STATE(502)] = 19297,
  [SMALL_STATE(503)] = 19326,
  [SMALL_STATE(504)] = 19345,
  [SMALL_STATE(505)] = 19378,
  [SMALL_STATE(506)] = 19411,
  [SMALL_STATE(507)] = 19436,
  [SMALL_STATE(508)] = 19465,
  [SMALL_STATE(509)] = 19494,
  [SMALL_STATE(510)] = 19523,
  [SMALL_STATE(511)] = 19556,
  [SMALL_STATE(512)] = 19588,
  [SMALL_STATE(513)] = 19622,
  [SMALL_STATE(514)] = 19646,
  [SMALL_STATE(515)] = 19670,
  [SMALL_STATE(516)] = 19700,
  [SMALL_STATE(517)] = 19734,
  [SMALL_STATE(518)] = 19758,
  [SMALL_STATE(519)] = 19782,
  [SMALL_STATE(520)] = 19816,
  [SMALL_STATE(521)] = 19850,
  [SMALL_STATE(522)] = 19884,
  [SMALL_STATE(523)] = 19914,
  [SMALL_STATE(524)] = 19948,
  [SMALL_STATE(525)] = 19982,
  [SMALL_STATE(526)] = 20016,
  [SMALL_STATE(527)] = 20040,
  [SMALL_STATE(528)] = 20074,
  [SMALL_STATE(529)] = 20093,
  [SMALL_STATE(530)] = 20120,
  [SMALL_STATE(531)] = 20147,
  [SMALL_STATE(532)] = 20178,
  [SMALL_STATE(533)] = 20205,
  [SMALL_STATE(534)] = 20232,
  [SMALL_STATE(535)] = 20263,
  [SMALL_STATE(536)] = 20290,
  [SMALL_STATE(537)] = 20317,
  [SMALL_STATE(538)] = 20348,
  [SMALL_STATE(539)] = 20367,
  [SMALL_STATE(540)] = 20398,
  [SMALL_STATE(541)] = 20417,
  [SMALL_STATE(542)] = 20436,
  [SMALL_STATE(543)] = 20455,
  [SMALL_STATE(544)] = 20474,
  [SMALL_STATE(545)] = 20505,
  [SMALL_STATE(546)] = 20536,
  [SMALL_STATE(547)] = 20555,
  [SMALL_STATE(548)] = 20584,
  [SMALL_STATE(549)] = 20603,
  [SMALL_STATE(550)] = 20622,
  [SMALL_STATE(551)] = 20641,
  [SMALL_STATE(552)] = 20668,
  [SMALL_STATE(553)] = 20695,
  [SMALL_STATE(554)] = 20714,
  [SMALL_STATE(555)] = 20733,
  [SMALL_STATE(556)] = 20764,
  [SMALL_STATE(557)] = 20791,
  [SMALL_STATE(558)] = 20822,
  [SMALL_STATE(559)] = 20841,
  [SMALL_STATE(560)] = 20860,
  [SMALL_STATE(561)] = 20879,
  [SMALL_STATE(562)] = 20906,
  [SMALL_STATE(563)] = 20933,
  [SMALL_STATE(564)] = 20960,
  [SMALL_STATE(565)] = 20987,
  [SMALL_STATE(566)] = 21012,
  [SMALL_STATE(567)] = 21041,
  [SMALL_STATE(568)] = 21072,
  [SMALL_STATE(569)] = 21099,
  [SMALL_STATE(570)] = 21130,
  [SMALL_STATE(571)] = 21148,
  [SMALL_STATE(572)] = 21172,
  [SMALL_STATE(573)] = 21196,
  [SMALL_STATE(574)] = 21220,
  [SMALL_STATE(575)] = 21244,
  [SMALL_STATE(576)] = 21268,
  [SMALL_STATE(577)] = 21292,
  [SMALL_STATE(578)] = 21316,
  [SMALL_STATE(579)] = 21340,
  [SMALL_STATE(580)] = 21358,
  [SMALL_STATE(581)] = 21380,
  [SMALL_STATE(582)] = 21404,
  [SMALL_STATE(583)] = 21426,
  [SMALL_STATE(584)] = 21448,
  [SMALL_STATE(585)] = 21472,
  [SMALL_STATE(586)] = 21492,
  [SMALL_STATE(587)] = 21520,
  [SMALL_STATE(588)] = 21544,
  [SMALL_STATE(589)] = 21562,
  [SMALL_STATE(590)] = 21586,
  [SMALL_STATE(591)] = 21604,
  [SMALL_STATE(592)] = 21628,
  [SMALL_STATE(593)] = 21652,
  [SMALL_STATE(594)] = 21672,
  [SMALL_STATE(595)] = 21690,
  [SMALL_STATE(596)] = 21718,
  [SMALL_STATE(597)] = 21743,
  [SMALL_STATE(598)] = 21762,
  [SMALL_STATE(599)] = 21781,
  [SMALL_STATE(600)] = 21800,
  [SMALL_STATE(601)] = 21819,
  [SMALL_STATE(602)] = 21838,
  [SMALL_STATE(603)] = 21863,
  [SMALL_STATE(604)] = 21888,
  [SMALL_STATE(605)] = 21911,
  [SMALL_STATE(606)] = 21936,
  [SMALL_STATE(607)] = 21961,
  [SMALL_STATE(608)] = 21982,
  [SMALL_STATE(609)] = 22007,
  [SMALL_STATE(610)] = 22028,
  [SMALL_STATE(611)] = 22049,
  [SMALL_STATE(612)] = 22074,
  [SMALL_STATE(613)] = 22099,
  [SMALL_STATE(614)] = 22124,
  [SMALL_STATE(615)] = 22149,
  [SMALL_STATE(616)] = 22174,
  [SMALL_STATE(617)] = 22199,
  [SMALL_STATE(618)] = 22224,
  [SMALL_STATE(619)] = 22249,
  [SMALL_STATE(620)] = 22274,
  [SMALL_STATE(621)] = 22299,
  [SMALL_STATE(622)] = 22324,
  [SMALL_STATE(623)] = 22349,
  [SMALL_STATE(624)] = 22370,
  [SMALL_STATE(625)] = 22391,
  [SMALL_STATE(626)] = 22416,
  [SMALL_STATE(627)] = 22439,
  [SMALL_STATE(628)] = 22462,
  [SMALL_STATE(629)] = 22485,
  [SMALL_STATE(630)] = 22501,
  [SMALL_STATE(631)] = 22523,
  [SMALL_STATE(632)] = 22539,
  [SMALL_STATE(633)] = 22561,
  [SMALL_STATE(634)] = 22577,
  [SMALL_STATE(635)] = 22599,
  [SMALL_STATE(636)] = 22615,
  [SMALL_STATE(637)] = 22637,
  [SMALL_STATE(638)] = 22659,
  [SMALL_STATE(639)] = 22675,
  [SMALL_STATE(640)] = 22691,
  [SMALL_STATE(641)] = 22707,
  [SMALL_STATE(642)] = 22729,
  [SMALL_STATE(643)] = 22751,
  [SMALL_STATE(644)] = 22767,
  [SMALL_STATE(645)] = 22783,
  [SMALL_STATE(646)] = 22799,
  [SMALL_STATE(647)] = 22821,
  [SMALL_STATE(648)] = 22837,
  [SMALL_STATE(649)] = 22859,
  [SMALL_STATE(650)] = 22881,
  [SMALL_STATE(651)] = 22897,
  [SMALL_STATE(652)] = 22913,
  [SMALL_STATE(653)] = 22929,
  [SMALL_STATE(654)] = 22945,
  [SMALL_STATE(655)] = 22961,
  [SMALL_STATE(656)] = 22977,
  [SMALL_STATE(657)] = 22996,
  [SMALL_STATE(658)] = 23015,
  [SMALL_STATE(659)] = 23034,
  [SMALL_STATE(660)] = 23049,
  [SMALL_STATE(661)] = 23068,
  [SMALL_STATE(662)] = 23087,
  [SMALL_STATE(663)] = 23106,
  [SMALL_STATE(664)] = 23123,
  [SMALL_STATE(665)] = 23142,
  [SMALL_STATE(666)] = 23161,
  [SMALL_STATE(667)] = 23178,
  [SMALL_STATE(668)] = 23195,
  [SMALL_STATE(669)] = 23214,
  [SMALL_STATE(670)] = 23233,
  [SMALL_STATE(671)] = 23248,
  [SMALL_STATE(672)] = 23267,
  [SMALL_STATE(673)] = 23286,
  [SMALL_STATE(674)] = 23304,
  [SMALL_STATE(675)] = 23320,
  [SMALL_STATE(676)] = 23336,
  [SMALL_STATE(677)] = 23354,
  [SMALL_STATE(678)] = 23370,
  [SMALL_STATE(679)] = 23386,
  [SMALL_STATE(680)] = 23402,
  [SMALL_STATE(681)] = 23420,
  [SMALL_STATE(682)] = 23438,
  [SMALL_STATE(683)] = 23456,
  [SMALL_STATE(684)] = 23474,
  [SMALL_STATE(685)] = 23492,
  [SMALL_STATE(686)] = 23510,
  [SMALL_STATE(687)] = 23528,
  [SMALL_STATE(688)] = 23546,
  [SMALL_STATE(689)] = 23562,
  [SMALL_STATE(690)] = 23580,
  [SMALL_STATE(691)] = 23598,
  [SMALL_STATE(692)] = 23616,
  [SMALL_STATE(693)] = 23634,
  [SMALL_STATE(694)] = 23650,
  [SMALL_STATE(695)] = 23668,
  [SMALL_STATE(696)] = 23684,
  [SMALL_STATE(697)] = 23700,
  [SMALL_STATE(698)] = 23718,
  [SMALL_STATE(699)] = 23731,
  [SMALL_STATE(700)] = 23748,
  [SMALL_STATE(701)] = 23765,
  [SMALL_STATE(702)] = 23782,
  [SMALL_STATE(703)] = 23795,
  [SMALL_STATE(704)] = 23808,
  [SMALL_STATE(705)] = 23821,
  [SMALL_STATE(706)] = 23834,
  [SMALL_STATE(707)] = 23847,
  [SMALL_STATE(708)] = 23862,
  [SMALL_STATE(709)] = 23879,
  [SMALL_STATE(710)] = 23894,
  [SMALL_STATE(711)] = 23907,
  [SMALL_STATE(712)] = 23920,
  [SMALL_STATE(713)] = 23933,
  [SMALL_STATE(714)] = 23946,
  [SMALL_STATE(715)] = 23959,
  [SMALL_STATE(716)] = 23972,
  [SMALL_STATE(717)] = 23985,
  [SMALL_STATE(718)] = 23998,
  [SMALL_STATE(719)] = 24011,
  [SMALL_STATE(720)] = 24024,
  [SMALL_STATE(721)] = 24037,
  [SMALL_STATE(722)] = 24054,
  [SMALL_STATE(723)] = 24067,
  [SMALL_STATE(724)] = 24080,
  [SMALL_STATE(725)] = 24093,
  [SMALL_STATE(726)] = 24106,
  [SMALL_STATE(727)] = 24119,
  [SMALL_STATE(728)] = 24132,
  [SMALL_STATE(729)] = 24145,
  [SMALL_STATE(730)] = 24158,
  [SMALL_STATE(731)] = 24171,
  [SMALL_STATE(732)] = 24184,
  [SMALL_STATE(733)] = 24197,
  [SMALL_STATE(734)] = 24210,
  [SMALL_STATE(735)] = 24223,
  [SMALL_STATE(736)] = 24236,
  [SMALL_STATE(737)] = 24249,
  [SMALL_STATE(738)] = 24262,
  [SMALL_STATE(739)] = 24275,
  [SMALL_STATE(740)] = 24290,
  [SMALL_STATE(741)] = 24303,
  [SMALL_STATE(742)] = 24316,
  [SMALL_STATE(743)] = 24329,
  [SMALL_STATE(744)] = 24344,
  [SMALL_STATE(745)] = 24357,
  [SMALL_STATE(746)] = 24370,
  [SMALL_STATE(747)] = 24387,
  [SMALL_STATE(748)] = 24404,
  [SMALL_STATE(749)] = 24417,
  [SMALL_STATE(750)] = 24430,
  [SMALL_STATE(751)] = 24443,
  [SMALL_STATE(752)] = 24456,
  [SMALL_STATE(753)] = 24469,
  [SMALL_STATE(754)] = 24482,
  [SMALL_STATE(755)] = 24495,
  [SMALL_STATE(756)] = 24508,
  [SMALL_STATE(757)] = 24521,
  [SMALL_STATE(758)] = 24534,
  [SMALL_STATE(759)] = 24547,
  [SMALL_STATE(760)] = 24560,
  [SMALL_STATE(761)] = 24573,
  [SMALL_STATE(762)] = 24586,
  [SMALL_STATE(763)] = 24601,
  [SMALL_STATE(764)] = 24618,
  [SMALL_STATE(765)] = 24635,
  [SMALL_STATE(766)] = 24652,
  [SMALL_STATE(767)] = 24665,
  [SMALL_STATE(768)] = 24678,
  [SMALL_STATE(769)] = 24691,
  [SMALL_STATE(770)] = 24704,
  [SMALL_STATE(771)] = 24717,
  [SMALL_STATE(772)] = 24730,
  [SMALL_STATE(773)] = 24743,
  [SMALL_STATE(774)] = 24756,
  [SMALL_STATE(775)] = 24769,
  [SMALL_STATE(776)] = 24782,
  [SMALL_STATE(777)] = 24795,
  [SMALL_STATE(778)] = 24808,
  [SMALL_STATE(779)] = 24821,
  [SMALL_STATE(780)] = 24834,
  [SMALL_STATE(781)] = 24847,
  [SMALL_STATE(782)] = 24860,
  [SMALL_STATE(783)] = 24875,
  [SMALL_STATE(784)] = 24888,
  [SMALL_STATE(785)] = 24901,
  [SMALL_STATE(786)] = 24914,
  [SMALL_STATE(787)] = 24927,
  [SMALL_STATE(788)] = 24942,
  [SMALL_STATE(789)] = 24959,
  [SMALL_STATE(790)] = 24972,
  [SMALL_STATE(791)] = 24985,
  [SMALL_STATE(792)] = 24998,
  [SMALL_STATE(793)] = 25011,
  [SMALL_STATE(794)] = 25026,
  [SMALL_STATE(795)] = 25043,
  [SMALL_STATE(796)] = 25056,
  [SMALL_STATE(797)] = 25069,
  [SMALL_STATE(798)] = 25081,
  [SMALL_STATE(799)] = 25093,
  [SMALL_STATE(800)] = 25105,
  [SMALL_STATE(801)] = 25117,
  [SMALL_STATE(802)] = 25131,
  [SMALL_STATE(803)] = 25143,
  [SMALL_STATE(804)] = 25155,
  [SMALL_STATE(805)] = 25167,
  [SMALL_STATE(806)] = 25179,
  [SMALL_STATE(807)] = 25191,
  [SMALL_STATE(808)] = 25203,
  [SMALL_STATE(809)] = 25215,
  [SMALL_STATE(810)] = 25227,
  [SMALL_STATE(811)] = 25239,
  [SMALL_STATE(812)] = 25251,
  [SMALL_STATE(813)] = 25263,
  [SMALL_STATE(814)] = 25275,
  [SMALL_STATE(815)] = 25289,
  [SMALL_STATE(816)] = 25303,
  [SMALL_STATE(817)] = 25315,
  [SMALL_STATE(818)] = 25329,
  [SMALL_STATE(819)] = 25341,
  [SMALL_STATE(820)] = 25354,
  [SMALL_STATE(821)] = 25367,
  [SMALL_STATE(822)] = 25380,
  [SMALL_STATE(823)] = 25393,
  [SMALL_STATE(824)] = 25404,
  [SMALL_STATE(825)] = 25417,
  [SMALL_STATE(826)] = 25430,
  [SMALL_STATE(827)] = 25443,
  [SMALL_STATE(828)] = 25456,
  [SMALL_STATE(829)] = 25469,
  [SMALL_STATE(830)] = 25482,
  [SMALL_STATE(831)] = 25490,
  [SMALL_STATE(832)] = 25498,
  [SMALL_STATE(833)] = 25506,
  [SMALL_STATE(834)] = 25514,
  [SMALL_STATE(835)] = 25522,
  [SMALL_STATE(836)] = 25530,
  [SMALL_STATE(837)] = 25538,
  [SMALL_STATE(838)] = 25546,
  [SMALL_STATE(839)] = 25554,
  [SMALL_STATE(840)] = 25564,
  [SMALL_STATE(841)] = 25572,
  [SMALL_STATE(842)] = 25580,
  [SMALL_STATE(843)] = 25588,
  [SMALL_STATE(844)] = 25596,
  [SMALL_STATE(845)] = 25604,
  [SMALL_STATE(846)] = 25612,
  [SMALL_STATE(847)] = 25620,
  [SMALL_STATE(848)] = 25628,
  [SMALL_STATE(849)] = 25636,
  [SMALL_STATE(850)] = 25644,
  [SMALL_STATE(851)] = 25652,
  [SMALL_STATE(852)] = 25660,
  [SMALL_STATE(853)] = 25668,
  [SMALL_STATE(854)] = 25676,
  [SMALL_STATE(855)] = 25684,
  [SMALL_STATE(856)] = 25692,
  [SMALL_STATE(857)] = 25700,
  [SMALL_STATE(858)] = 25708,
  [SMALL_STATE(859)] = 25716,
  [SMALL_STATE(860)] = 25724,
  [SMALL_STATE(861)] = 25732,
  [SMALL_STATE(862)] = 25740,
  [SMALL_STATE(863)] = 25747,
  [SMALL_STATE(864)] = 25754,
  [SMALL_STATE(865)] = 25761,
  [SMALL_STATE(866)] = 25768,
  [SMALL_STATE(867)] = 25775,
  [SMALL_STATE(868)] = 25782,
  [SMALL_STATE(869)] = 25789,
  [SMALL_STATE(870)] = 25796,
  [SMALL_STATE(871)] = 25803,
  [SMALL_STATE(872)] = 25810,
  [SMALL_STATE(873)] = 25817,
  [SMALL_STATE(874)] = 25824,
  [SMALL_STATE(875)] = 25831,
  [SMALL_STATE(876)] = 25838,
  [SMALL_STATE(877)] = 25845,
  [SMALL_STATE(878)] = 25852,
  [SMALL_STATE(879)] = 25859,
  [SMALL_STATE(880)] = 25866,
  [SMALL_STATE(881)] = 25873,
  [SMALL_STATE(882)] = 25880,
  [SMALL_STATE(883)] = 25887,
  [SMALL_STATE(884)] = 25894,
  [SMALL_STATE(885)] = 25901,
  [SMALL_STATE(886)] = 25908,
  [SMALL_STATE(887)] = 25915,
  [SMALL_STATE(888)] = 25922,
  [SMALL_STATE(889)] = 25929,
  [SMALL_STATE(890)] = 25936,
  [SMALL_STATE(891)] = 25943,
  [SMALL_STATE(892)] = 25950,
  [SMALL_STATE(893)] = 25957,
  [SMALL_STATE(894)] = 25964,
  [SMALL_STATE(895)] = 25971,
  [SMALL_STATE(896)] = 25978,
  [SMALL_STATE(897)] = 25985,
  [SMALL_STATE(898)] = 25992,
  [SMALL_STATE(899)] = 25999,
  [SMALL_STATE(900)] = 26006,
  [SMALL_STATE(901)] = 26013,
  [SMALL_STATE(902)] = 26020,
  [SMALL_STATE(903)] = 26027,
  [SMALL_STATE(904)] = 26034,
  [SMALL_STATE(905)] = 26041,
  [SMALL_STATE(906)] = 26048,
  [SMALL_STATE(907)] = 26055,
  [SMALL_STATE(908)] = 26062,
  [SMALL_STATE(909)] = 26069,
  [SMALL_STATE(910)] = 26076,
  [SMALL_STATE(911)] = 26083,
  [SMALL_STATE(912)] = 26090,
  [SMALL_STATE(913)] = 26097,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 3, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__restriction, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_no_language, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_iri, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype_iri, 1, 0, 0), REDUCE(sym_class_iri, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_iri, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_iri, 1, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_data_property_iri, 1, 0, 0), REDUCE(sym_object_property_iri, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_literal, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_with_language, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(29),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotations, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_iri, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_primary, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2, 0, 0), SHIFT_REPEAT(903),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2, 0, 0), SHIFT_REPEAT(649),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(75),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(867),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(881),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(900),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(892),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 1, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(569),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(893),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2, 0, 0), SHIFT_REPEAT(435),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 4, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 2, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2, 0, 0), SHIFT_REPEAT(319),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 5, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, 0, 0),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2, 0, 0),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inverse_object_property, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_iri, 1, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_data_property_iri, 1, 0, 0), REDUCE(sym_object_property_iri, 1, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 1, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2, 0, 0), SHIFT_REPEAT(519),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2, 0, 0), SHIFT_REPEAT(472),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2, 0, 0), SHIFT_REPEAT(565),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2, 0, 0), SHIFT_REPEAT(510),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2, 0, 0),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2, 0, 0),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 3, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2, 0, 0),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(582),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2, 0, 0), SHIFT_REPEAT(321),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2, 0, 0),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(562),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 3, 0, 0),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 1, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_property_iri, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 3, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2, 0, 0), SHIFT_REPEAT(299),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 3, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inverse_object_property, 2, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 1, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(508),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(630),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(632),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(636),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(642),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(536),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(135),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(405),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2, 0, 0), SHIFT_REPEAT(489),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, 0, 0),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(825),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2, 0, 0), SHIFT_REPEAT(300),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 2, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 3, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2, 0, 0),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 3, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2, 0, 0),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 6, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3, 0, 0),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(276),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 4, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2, 0, 0),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 3, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 3, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 3, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 2, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(545),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 1, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 1, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2, 0, 0),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(512),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 3, 0, 0),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2, 0, 0),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2, 0, 0),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 3, 0, 0),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 2, 0, 0),
  [930] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(330),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2, 0, 0),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(620),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 3, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2, 0, 0),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(595),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 3, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 1, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 2, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 2, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2, 0, 0),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(586),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2, 0, 0), SHIFT_REPEAT(531),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 1, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_fact, 2, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact, 2, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_union_of, 2, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_fact, 2, 0, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 3, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 3, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalent_to, 2, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_class_of, 2, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_union_of, 3, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_with, 2, 0, 0),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(369),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_iri, 1, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ontology_iri, 1, 0, 0),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(379),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3, 0, 0),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 3, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 3, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri, 1, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2, 0, 0), REDUCE(sym_datatype_frame, 4, 0, 0),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2, 0, 0), SHIFT_REPEAT(519),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2, 0, 0),
  [1056] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(395),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2, 0, 0), SHIFT_REPEAT(324),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2, 0, 0),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2, 0, 0), SHIFT_REPEAT(657),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5, 0, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 4, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(433),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 3, 0, 0),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2, 0, 0),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2, 0, 0), SHIFT_REPEAT(564),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2, 0, 0),
  [1168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [1171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(441),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2, 0, 0),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2, 0, 0), SHIFT_REPEAT(604),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 3, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_iri, 1, 0, 0),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 4, 0, 0),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(457),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 3, 0, 0),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 4, 0, 0),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(469),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_equavalent_to, 2, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_equavalent_to, 3, 0, 0),
  [1245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(482),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(488),
  [1253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(490),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2, 0, 0),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_no_language, 1, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3, 0, 0),
  [1274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2, 0, 0), SHIFT_REPEAT(506),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 2, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 3, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 1, 0, 0),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_iri, 1, 0, 0),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2, 0, 0),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_with_language, 2, 0, 0),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2, 0, 0),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3, 0, 0),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_literal, 3, 0, 0),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3, 0, 0),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4, 0, 0),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_iri, 1, 0, 0),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotations, 2, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_property_iri, 1, 0, 0),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(557),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2, 0, 0),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(539),
  [1461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(537),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(567),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2, 0, 0), SHIFT_REPEAT(544),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2, 0, 0), SHIFT_REPEAT(449),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2, 0, 0), SHIFT_REPEAT(317),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [1593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2, 0, 0), SHIFT_REPEAT(891),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2, 0, 0),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 1, 0, 0),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 1, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2, 0, 0), SHIFT_REPEAT(593),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2, 0, 0),
  [1615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2, 0, 0), SHIFT_REPEAT(563),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 2, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 2, 0, 0),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2, 0, 0),
  [1628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3, 0, 0),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ontology_document, 2, 0, 0),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1711] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_owl_ms(void) {
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

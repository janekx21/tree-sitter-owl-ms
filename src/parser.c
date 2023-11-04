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
#define STATE_COUNT 944
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 221
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
  anon_sym_CARET_CARET = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_DOT = 14,
  anon_sym_f = 15,
  anon_sym_F = 16,
  anon_sym_e = 17,
  anon_sym_E = 18,
  sym__quoted_string = 19,
  sym__language_tag = 20,
  anon_sym_Prefix_COLON = 21,
  anon_sym_Ontology_COLON = 22,
  anon_sym_Import_COLON = 23,
  anon_sym_Annotations_COLON = 24,
  anon_sym_inverse = 25,
  anon_sym_or = 26,
  anon_sym_and = 27,
  anon_sym_not = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
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
  sym__iri = 98,
  sym_full_iri = 99,
  sym_abbreviated_iri = 100,
  sym_simple_iri = 101,
  sym_datatype = 102,
  sym_datatype_iri = 103,
  sym_class_iri = 104,
  sym_annotation_property_iri = 105,
  sym_ontology_iri = 106,
  sym_data_property_iri = 107,
  sym_version_iri = 108,
  sym_object_property_iri = 109,
  sym_individual_iri = 110,
  sym__individual = 111,
  sym_node_id = 112,
  sym_non_negative_integer = 113,
  sym__positive_integer = 114,
  aux_sym__digits = 115,
  sym__digit = 116,
  sym__literal = 117,
  sym_typed_literal = 118,
  sym_string_literal_no_language = 119,
  sym_string_literal_with_language = 120,
  sym_integer_literal = 121,
  sym_decimal_literal = 122,
  sym_floating_point_literal = 123,
  sym__exponent = 124,
  sym__lexial_value = 125,
  sym__ontology_document = 126,
  sym_prefix_declaration = 127,
  sym_ontology = 128,
  sym_import = 129,
  sym__frame = 130,
  sym__annotations = 131,
  sym_annotation = 132,
  sym__annotation_target = 133,
  sym__object_property_expression = 134,
  sym__inverse_object_property = 135,
  sym__data_property_expression = 136,
  sym_data_range = 137,
  sym__data_conjunction = 138,
  sym__data_primary = 139,
  sym__data_atomic = 140,
  sym_datatype_restriction = 141,
  sym__facet = 142,
  sym__restriction_value = 143,
  sym_description = 144,
  sym__conjunction = 145,
  sym__primary = 146,
  sym__restriction = 147,
  sym__atomic = 148,
  sym_datatype_frame = 149,
  sym_class_frame = 150,
  sym_sub_class_of = 151,
  sym_equivalent_to = 152,
  sym_disjoint_with = 153,
  sym_disjoint_union_of = 154,
  sym_has_key = 155,
  sym_object_property_frame = 156,
  sym__object_property_characteristic = 157,
  sym_data_property_frame = 158,
  sym_annotation_property_frame = 159,
  sym_individual_frame = 160,
  sym__fact = 161,
  sym__object_property_fact = 162,
  sym__data_property_fact = 163,
  sym_misc = 164,
  sym__description_annotated_list = 165,
  sym__annotation_annotated_list = 166,
  sym__object_property_expression_annotated_list = 167,
  sym__object_property_characteristic_annotated_list = 168,
  sym__data_range_annotated_list = 169,
  sym__data_property_expression_annotated_list = 170,
  sym__iri_annotated_list = 171,
  sym__annotation_property_iri_annotated_list = 172,
  sym__individual_annotated_list = 173,
  sym__fact_annotated_list = 174,
  sym__description_2list = 175,
  sym__object_property_2list = 176,
  sym__data_property_2list = 177,
  sym__individual_2list = 178,
  sym__individual_list = 179,
  sym__literal_list = 180,
  sym__iri_rfc3987 = 181,
  sym__ihier_part = 182,
  sym__iauthority = 183,
  sym__iuserinfo = 184,
  sym__ihost = 185,
  aux_sym__ipath_abempty = 186,
  sym__isegment = 187,
  aux_sym__positive_integer_repeat1 = 188,
  aux_sym__ontology_document_repeat1 = 189,
  aux_sym_ontology_repeat1 = 190,
  aux_sym_ontology_repeat2 = 191,
  aux_sym_ontology_repeat3 = 192,
  aux_sym_data_range_repeat1 = 193,
  aux_sym__data_conjunction_repeat1 = 194,
  aux_sym_datatype_restriction_repeat1 = 195,
  aux_sym_description_repeat1 = 196,
  aux_sym__conjunction_repeat1 = 197,
  aux_sym__conjunction_repeat2 = 198,
  aux_sym_class_frame_repeat1 = 199,
  aux_sym_has_key_repeat1 = 200,
  aux_sym_object_property_frame_repeat1 = 201,
  aux_sym_object_property_frame_repeat2 = 202,
  aux_sym_data_property_frame_repeat1 = 203,
  aux_sym_annotation_property_frame_repeat1 = 204,
  aux_sym_individual_frame_repeat1 = 205,
  aux_sym__description_annotated_list_repeat1 = 206,
  aux_sym__annotation_annotated_list_repeat1 = 207,
  aux_sym__object_property_expression_annotated_list_repeat1 = 208,
  aux_sym__object_property_characteristic_annotated_list_repeat1 = 209,
  aux_sym__data_range_annotated_list_repeat1 = 210,
  aux_sym__data_property_expression_annotated_list_repeat1 = 211,
  aux_sym__iri_annotated_list_repeat1 = 212,
  aux_sym__annotation_property_iri_annotated_list_repeat1 = 213,
  aux_sym__individual_annotated_list_repeat1 = 214,
  aux_sym__fact_annotated_list_repeat1 = 215,
  aux_sym__description_2list_repeat1 = 216,
  aux_sym__object_property_2list_repeat1 = 217,
  aux_sym__data_property_2list_repeat1 = 218,
  aux_sym__individual_2list_repeat1 = 219,
  aux_sym__literal_list_repeat1 = 220,
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
  [sym__iri] = "_iri",
  [sym_full_iri] = "full_iri",
  [sym_abbreviated_iri] = "abbreviated_iri",
  [sym_simple_iri] = "simple_iri",
  [sym_datatype] = "datatype",
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
  [sym__iri_rfc3987] = "_iri_rfc3987",
  [sym__ihier_part] = "_ihier_part",
  [sym__iauthority] = "_iauthority",
  [sym__iuserinfo] = "_iuserinfo",
  [sym__ihost] = "_ihost",
  [aux_sym__ipath_abempty] = "_ipath_abempty",
  [sym__isegment] = "_isegment",
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
  [sym__iri] = sym__iri,
  [sym_full_iri] = sym_full_iri,
  [sym_abbreviated_iri] = sym_abbreviated_iri,
  [sym_simple_iri] = sym_simple_iri,
  [sym_datatype] = sym_datatype,
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
  [sym__iri_rfc3987] = sym__iri_rfc3987,
  [sym__ihier_part] = sym__ihier_part,
  [sym__iauthority] = sym__iauthority,
  [sym__iuserinfo] = sym__iuserinfo,
  [sym__ihost] = sym__ihost,
  [aux_sym__ipath_abempty] = aux_sym__ipath_abempty,
  [sym__isegment] = sym__isegment,
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
  [sym_datatype] = {
    .visible = true,
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
  [3] = 2,
  [4] = 4,
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
  [30] = 30,
  [31] = 29,
  [32] = 27,
  [33] = 28,
  [34] = 28,
  [35] = 27,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 29,
  [40] = 28,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 29,
  [46] = 27,
  [47] = 47,
  [48] = 48,
  [49] = 43,
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
  [63] = 63,
  [64] = 43,
  [65] = 65,
  [66] = 66,
  [67] = 2,
  [68] = 43,
  [69] = 69,
  [70] = 24,
  [71] = 23,
  [72] = 28,
  [73] = 29,
  [74] = 27,
  [75] = 25,
  [76] = 76,
  [77] = 30,
  [78] = 78,
  [79] = 26,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 80,
  [84] = 80,
  [85] = 80,
  [86] = 80,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 43,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 100,
  [101] = 97,
  [102] = 102,
  [103] = 97,
  [104] = 97,
  [105] = 105,
  [106] = 97,
  [107] = 97,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 97,
  [113] = 113,
  [114] = 108,
  [115] = 115,
  [116] = 116,
  [117] = 108,
  [118] = 108,
  [119] = 108,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 97,
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
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 113,
  [154] = 154,
  [155] = 98,
  [156] = 105,
  [157] = 157,
  [158] = 121,
  [159] = 110,
  [160] = 160,
  [161] = 161,
  [162] = 115,
  [163] = 144,
  [164] = 164,
  [165] = 144,
  [166] = 166,
  [167] = 111,
  [168] = 168,
  [169] = 102,
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
  [181] = 144,
  [182] = 120,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 115,
  [187] = 111,
  [188] = 4,
  [189] = 125,
  [190] = 6,
  [191] = 191,
  [192] = 120,
  [193] = 102,
  [194] = 194,
  [195] = 131,
  [196] = 196,
  [197] = 197,
  [198] = 134,
  [199] = 199,
  [200] = 7,
  [201] = 6,
  [202] = 128,
  [203] = 203,
  [204] = 110,
  [205] = 126,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 4,
  [210] = 113,
  [211] = 211,
  [212] = 98,
  [213] = 121,
  [214] = 214,
  [215] = 105,
  [216] = 7,
  [217] = 131,
  [218] = 218,
  [219] = 105,
  [220] = 220,
  [221] = 98,
  [222] = 102,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 146,
  [233] = 233,
  [234] = 113,
  [235] = 235,
  [236] = 236,
  [237] = 149,
  [238] = 110,
  [239] = 152,
  [240] = 230,
  [241] = 230,
  [242] = 242,
  [243] = 121,
  [244] = 244,
  [245] = 235,
  [246] = 128,
  [247] = 230,
  [248] = 248,
  [249] = 185,
  [250] = 111,
  [251] = 251,
  [252] = 252,
  [253] = 120,
  [254] = 157,
  [255] = 233,
  [256] = 236,
  [257] = 257,
  [258] = 115,
  [259] = 236,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 236,
  [264] = 134,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 131,
  [271] = 24,
  [272] = 23,
  [273] = 273,
  [274] = 267,
  [275] = 267,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 267,
  [281] = 157,
  [282] = 128,
  [283] = 152,
  [284] = 4,
  [285] = 6,
  [286] = 7,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 146,
  [291] = 134,
  [292] = 267,
  [293] = 293,
  [294] = 294,
  [295] = 149,
  [296] = 267,
  [297] = 297,
  [298] = 185,
  [299] = 157,
  [300] = 25,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 91,
  [306] = 304,
  [307] = 307,
  [308] = 146,
  [309] = 93,
  [310] = 304,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 94,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 30,
  [321] = 92,
  [322] = 304,
  [323] = 323,
  [324] = 152,
  [325] = 96,
  [326] = 304,
  [327] = 327,
  [328] = 26,
  [329] = 185,
  [330] = 304,
  [331] = 331,
  [332] = 332,
  [333] = 149,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
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
  [351] = 25,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 28,
  [361] = 361,
  [362] = 362,
  [363] = 27,
  [364] = 29,
  [365] = 365,
  [366] = 23,
  [367] = 24,
  [368] = 368,
  [369] = 24,
  [370] = 370,
  [371] = 371,
  [372] = 370,
  [373] = 370,
  [374] = 374,
  [375] = 375,
  [376] = 23,
  [377] = 377,
  [378] = 370,
  [379] = 370,
  [380] = 380,
  [381] = 381,
  [382] = 370,
  [383] = 98,
  [384] = 120,
  [385] = 113,
  [386] = 386,
  [387] = 387,
  [388] = 115,
  [389] = 389,
  [390] = 105,
  [391] = 102,
  [392] = 392,
  [393] = 30,
  [394] = 394,
  [395] = 395,
  [396] = 25,
  [397] = 110,
  [398] = 398,
  [399] = 26,
  [400] = 30,
  [401] = 25,
  [402] = 402,
  [403] = 403,
  [404] = 26,
  [405] = 405,
  [406] = 111,
  [407] = 121,
  [408] = 408,
  [409] = 409,
  [410] = 131,
  [411] = 411,
  [412] = 412,
  [413] = 128,
  [414] = 25,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 134,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 411,
  [424] = 424,
  [425] = 279,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 23,
  [430] = 24,
  [431] = 428,
  [432] = 427,
  [433] = 433,
  [434] = 427,
  [435] = 269,
  [436] = 427,
  [437] = 437,
  [438] = 438,
  [439] = 428,
  [440] = 23,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 24,
  [445] = 445,
  [446] = 428,
  [447] = 447,
  [448] = 448,
  [449] = 427,
  [450] = 428,
  [451] = 24,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 43,
  [456] = 456,
  [457] = 23,
  [458] = 428,
  [459] = 427,
  [460] = 273,
  [461] = 461,
  [462] = 26,
  [463] = 25,
  [464] = 464,
  [465] = 465,
  [466] = 461,
  [467] = 30,
  [468] = 468,
  [469] = 26,
  [470] = 465,
  [471] = 25,
  [472] = 461,
  [473] = 461,
  [474] = 474,
  [475] = 461,
  [476] = 26,
  [477] = 465,
  [478] = 478,
  [479] = 30,
  [480] = 24,
  [481] = 465,
  [482] = 482,
  [483] = 25,
  [484] = 23,
  [485] = 30,
  [486] = 465,
  [487] = 465,
  [488] = 461,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 10,
  [493] = 493,
  [494] = 494,
  [495] = 490,
  [496] = 490,
  [497] = 25,
  [498] = 498,
  [499] = 490,
  [500] = 490,
  [501] = 501,
  [502] = 30,
  [503] = 503,
  [504] = 490,
  [505] = 490,
  [506] = 25,
  [507] = 490,
  [508] = 26,
  [509] = 509,
  [510] = 25,
  [511] = 25,
  [512] = 512,
  [513] = 94,
  [514] = 514,
  [515] = 514,
  [516] = 514,
  [517] = 93,
  [518] = 92,
  [519] = 519,
  [520] = 520,
  [521] = 514,
  [522] = 514,
  [523] = 91,
  [524] = 514,
  [525] = 514,
  [526] = 514,
  [527] = 527,
  [528] = 514,
  [529] = 25,
  [530] = 96,
  [531] = 531,
  [532] = 532,
  [533] = 6,
  [534] = 534,
  [535] = 19,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 4,
  [540] = 532,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 7,
  [546] = 37,
  [547] = 13,
  [548] = 548,
  [549] = 532,
  [550] = 532,
  [551] = 532,
  [552] = 531,
  [553] = 532,
  [554] = 554,
  [555] = 18,
  [556] = 20,
  [557] = 14,
  [558] = 558,
  [559] = 532,
  [560] = 12,
  [561] = 11,
  [562] = 532,
  [563] = 563,
  [564] = 36,
  [565] = 532,
  [566] = 21,
  [567] = 567,
  [568] = 15,
  [569] = 16,
  [570] = 570,
  [571] = 38,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 7,
  [576] = 375,
  [577] = 6,
  [578] = 578,
  [579] = 41,
  [580] = 10,
  [581] = 581,
  [582] = 582,
  [583] = 173,
  [584] = 584,
  [585] = 4,
  [586] = 91,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 589,
  [592] = 589,
  [593] = 590,
  [594] = 589,
  [595] = 588,
  [596] = 590,
  [597] = 597,
  [598] = 588,
  [599] = 590,
  [600] = 589,
  [601] = 597,
  [602] = 589,
  [603] = 590,
  [604] = 96,
  [605] = 605,
  [606] = 94,
  [607] = 93,
  [608] = 91,
  [609] = 588,
  [610] = 590,
  [611] = 96,
  [612] = 597,
  [613] = 92,
  [614] = 589,
  [615] = 93,
  [616] = 616,
  [617] = 597,
  [618] = 618,
  [619] = 590,
  [620] = 588,
  [621] = 590,
  [622] = 597,
  [623] = 597,
  [624] = 589,
  [625] = 94,
  [626] = 588,
  [627] = 588,
  [628] = 590,
  [629] = 597,
  [630] = 589,
  [631] = 92,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 36,
  [636] = 636,
  [637] = 21,
  [638] = 638,
  [639] = 639,
  [640] = 15,
  [641] = 11,
  [642] = 12,
  [643] = 38,
  [644] = 18,
  [645] = 13,
  [646] = 16,
  [647] = 37,
  [648] = 19,
  [649] = 14,
  [650] = 20,
  [651] = 651,
  [652] = 652,
  [653] = 6,
  [654] = 654,
  [655] = 633,
  [656] = 633,
  [657] = 657,
  [658] = 633,
  [659] = 7,
  [660] = 4,
  [661] = 661,
  [662] = 662,
  [663] = 661,
  [664] = 661,
  [665] = 10,
  [666] = 661,
  [667] = 41,
  [668] = 668,
  [669] = 661,
  [670] = 10,
  [671] = 173,
  [672] = 10,
  [673] = 673,
  [674] = 661,
  [675] = 93,
  [676] = 676,
  [677] = 96,
  [678] = 10,
  [679] = 96,
  [680] = 92,
  [681] = 94,
  [682] = 93,
  [683] = 91,
  [684] = 94,
  [685] = 91,
  [686] = 92,
  [687] = 687,
  [688] = 91,
  [689] = 93,
  [690] = 92,
  [691] = 94,
  [692] = 96,
  [693] = 693,
  [694] = 694,
  [695] = 105,
  [696] = 19,
  [697] = 14,
  [698] = 20,
  [699] = 4,
  [700] = 7,
  [701] = 701,
  [702] = 6,
  [703] = 12,
  [704] = 11,
  [705] = 701,
  [706] = 36,
  [707] = 21,
  [708] = 115,
  [709] = 15,
  [710] = 16,
  [711] = 111,
  [712] = 120,
  [713] = 701,
  [714] = 38,
  [715] = 102,
  [716] = 701,
  [717] = 110,
  [718] = 18,
  [719] = 16,
  [720] = 701,
  [721] = 4,
  [722] = 11,
  [723] = 7,
  [724] = 6,
  [725] = 12,
  [726] = 20,
  [727] = 14,
  [728] = 36,
  [729] = 13,
  [730] = 19,
  [731] = 13,
  [732] = 37,
  [733] = 13,
  [734] = 98,
  [735] = 37,
  [736] = 701,
  [737] = 18,
  [738] = 18,
  [739] = 38,
  [740] = 38,
  [741] = 37,
  [742] = 742,
  [743] = 19,
  [744] = 14,
  [745] = 16,
  [746] = 15,
  [747] = 20,
  [748] = 21,
  [749] = 92,
  [750] = 121,
  [751] = 93,
  [752] = 96,
  [753] = 36,
  [754] = 21,
  [755] = 701,
  [756] = 701,
  [757] = 4,
  [758] = 11,
  [759] = 91,
  [760] = 12,
  [761] = 15,
  [762] = 762,
  [763] = 701,
  [764] = 94,
  [765] = 113,
  [766] = 7,
  [767] = 6,
  [768] = 7,
  [769] = 769,
  [770] = 20,
  [771] = 41,
  [772] = 772,
  [773] = 14,
  [774] = 772,
  [775] = 775,
  [776] = 4,
  [777] = 41,
  [778] = 6,
  [779] = 769,
  [780] = 780,
  [781] = 19,
  [782] = 128,
  [783] = 37,
  [784] = 784,
  [785] = 772,
  [786] = 13,
  [787] = 134,
  [788] = 788,
  [789] = 789,
  [790] = 769,
  [791] = 769,
  [792] = 780,
  [793] = 780,
  [794] = 18,
  [795] = 789,
  [796] = 780,
  [797] = 769,
  [798] = 780,
  [799] = 784,
  [800] = 38,
  [801] = 789,
  [802] = 784,
  [803] = 772,
  [804] = 16,
  [805] = 769,
  [806] = 15,
  [807] = 21,
  [808] = 784,
  [809] = 36,
  [810] = 11,
  [811] = 12,
  [812] = 789,
  [813] = 789,
  [814] = 131,
  [815] = 784,
  [816] = 769,
  [817] = 780,
  [818] = 818,
  [819] = 780,
  [820] = 789,
  [821] = 772,
  [822] = 784,
  [823] = 41,
  [824] = 789,
  [825] = 780,
  [826] = 769,
  [827] = 769,
  [828] = 780,
  [829] = 829,
  [830] = 772,
  [831] = 784,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 41,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 443,
  [845] = 845,
  [846] = 845,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 849,
  [851] = 851,
  [852] = 845,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 845,
  [857] = 857,
  [858] = 848,
  [859] = 859,
  [860] = 857,
  [861] = 861,
  [862] = 845,
  [863] = 845,
  [864] = 854,
  [865] = 857,
  [866] = 854,
  [867] = 849,
  [868] = 848,
  [869] = 869,
  [870] = 845,
  [871] = 848,
  [872] = 872,
  [873] = 854,
  [874] = 874,
  [875] = 854,
  [876] = 849,
  [877] = 877,
  [878] = 845,
  [879] = 854,
  [880] = 849,
  [881] = 857,
  [882] = 845,
  [883] = 883,
  [884] = 849,
  [885] = 857,
  [886] = 848,
  [887] = 857,
  [888] = 857,
  [889] = 854,
  [890] = 849,
  [891] = 845,
  [892] = 848,
  [893] = 848,
  [894] = 845,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 897,
  [899] = 897,
  [900] = 900,
  [901] = 897,
  [902] = 902,
  [903] = 897,
  [904] = 897,
  [905] = 905,
  [906] = 897,
  [907] = 900,
  [908] = 908,
  [909] = 909,
  [910] = 900,
  [911] = 902,
  [912] = 900,
  [913] = 902,
  [914] = 914,
  [915] = 900,
  [916] = 916,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 897,
  [921] = 921,
  [922] = 897,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 902,
  [927] = 927,
  [928] = 897,
  [929] = 929,
  [930] = 930,
  [931] = 902,
  [932] = 932,
  [933] = 900,
  [934] = 900,
  [935] = 900,
  [936] = 902,
  [937] = 897,
  [938] = 921,
  [939] = 939,
  [940] = 940,
  [941] = 902,
  [942] = 942,
  [943] = 943,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(514);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '-') ADVANCE(536);
      if (lookahead == '.') ADVANCE(538);
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
      if (lookahead == 'E') ADVANCE(554);
      if (lookahead == 'F') ADVANCE(547);
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
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(543);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead == '{') ADVANCE(572);
      if (lookahead == '}') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(537);
      if (lookahead == '.') ADVANCE(539);
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
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == '\\') ADVANCE(494);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ')') ADVANCE(575);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(539);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(539);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == '@') ADVANCE(497);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(848);
      if (lookahead == 's') ADVANCE(950);
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(532);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(548);
      if (lookahead == 'I') ADVANCE(308);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(486);
      if (lookahead == 'T') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(539);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == '_') ADVANCE(1023);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
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
      if (lookahead == '.') ADVANCE(539);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
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
      if (lookahead == '.') ADVANCE(539);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
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
      if (lookahead == '.') ADVANCE(539);
      if (lookahead == '0') ADVANCE(533);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '<') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
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
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == '_') ADVANCE(1023);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
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
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
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
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
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
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(542);
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
      if (lookahead == ':') ADVANCE(560);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(558);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(642);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(596);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(559);
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
      if (lookahead == '^') ADVANCE(534);
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
      if (lookahead == 'd') ADVANCE(568);
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
      if (lookahead == 'r') ADVANCE(566);
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
      if (lookahead == 'r') ADVANCE(566);
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
      if (lookahead == 't') ADVANCE(570);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == '(') ADVANCE(574);
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
      if (lookahead == '{') ADVANCE(572);
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
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == '0') ADVANCE(532);
      if (lookahead == ':') ADVANCE(658);
      if (lookahead == '<') ADVANCE(516);
      if (lookahead == '>') ADVANCE(518);
      if (lookahead == '@') ADVANCE(661);
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(554);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(329);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(124);
      if (lookahead == ']') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(540);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == '}') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 510:
      if (eof) ADVANCE(514);
      if (lookahead == ')') ADVANCE(575);
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
      if (lookahead == '}') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(510)
      END_STATE();
    case 511:
      if (eof) ADVANCE(514);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '0') ADVANCE(532);
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(276);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(555);
      if (lookahead == 'F') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(332);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(485);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(540);
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
      if (lookahead == '}') ADVANCE(573);
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
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 541:
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
    case 542:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'q') ADVANCE(459);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'q') ADVANCE(465);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__language_tag);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_Import_COLON);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_Import_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1025);
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
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
      if (lookahead == 'd') ADVANCE(569);
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
      if (lookahead == 'r') ADVANCE(567);
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
      if (lookahead == 't') ADVANCE(571);
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
      if (lookahead == ':') ADVANCE(561);
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
  [8] = {.lex_state = 507},
  [9] = {.lex_state = 508},
  [10] = {.lex_state = 510},
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
  [24] = {.lex_state = 509},
  [25] = {.lex_state = 509},
  [26] = {.lex_state = 509},
  [27] = {.lex_state = 501},
  [28] = {.lex_state = 501},
  [29] = {.lex_state = 501},
  [30] = {.lex_state = 509},
  [31] = {.lex_state = 502},
  [32] = {.lex_state = 502},
  [33] = {.lex_state = 502},
  [34] = {.lex_state = 503},
  [35] = {.lex_state = 503},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 503},
  [40] = {.lex_state = 504},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 513},
  [43] = {.lex_state = 499},
  [44] = {.lex_state = 513},
  [45] = {.lex_state = 504},
  [46] = {.lex_state = 504},
  [47] = {.lex_state = 510},
  [48] = {.lex_state = 510},
  [49] = {.lex_state = 500},
  [50] = {.lex_state = 510},
  [51] = {.lex_state = 512},
  [52] = {.lex_state = 510},
  [53] = {.lex_state = 510},
  [54] = {.lex_state = 510},
  [55] = {.lex_state = 510},
  [56] = {.lex_state = 510},
  [57] = {.lex_state = 510},
  [58] = {.lex_state = 510},
  [59] = {.lex_state = 510},
  [60] = {.lex_state = 512},
  [61] = {.lex_state = 512},
  [62] = {.lex_state = 510},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 506},
  [65] = {.lex_state = 510},
  [66] = {.lex_state = 510},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 507},
  [69] = {.lex_state = 510},
  [70] = {.lex_state = 511},
  [71] = {.lex_state = 511},
  [72] = {.lex_state = 505},
  [73] = {.lex_state = 505},
  [74] = {.lex_state = 505},
  [75] = {.lex_state = 511},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 511},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 511},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 508},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 510},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 510},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 510},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 510},
  [111] = {.lex_state = 510},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 510},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 510},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 510},
  [121] = {.lex_state = 510},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 510},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 510},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 510},
  [131] = {.lex_state = 510},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 510},
  [134] = {.lex_state = 510},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 510},
  [148] = {.lex_state = 510},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 510},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 510},
  [156] = {.lex_state = 510},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 510},
  [159] = {.lex_state = 510},
  [160] = {.lex_state = 510},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 510},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 510},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 510},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 512},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 510},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 510},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 510},
  [187] = {.lex_state = 510},
  [188] = {.lex_state = 512},
  [189] = {.lex_state = 512},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 510},
  [193] = {.lex_state = 510},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 510},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 510},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 512},
  [201] = {.lex_state = 512},
  [202] = {.lex_state = 510},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 510},
  [205] = {.lex_state = 512},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 510},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 510},
  [213] = {.lex_state = 510},
  [214] = {.lex_state = 510},
  [215] = {.lex_state = 510},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 510},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 510},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 510},
  [222] = {.lex_state = 510},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 510},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 510},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 510},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 510},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 510},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 510},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 510},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 510},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 510},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 510},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 513},
  [285] = {.lex_state = 513},
  [286] = {.lex_state = 513},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 510},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 10},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
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
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 7},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 3},
  [364] = {.lex_state = 3},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 17},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 11},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 11},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 513},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 11},
  [379] = {.lex_state = 11},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 11},
  [383] = {.lex_state = 510},
  [384] = {.lex_state = 510},
  [385] = {.lex_state = 510},
  [386] = {.lex_state = 16},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 510},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 510},
  [391] = {.lex_state = 510},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 17},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 17},
  [397] = {.lex_state = 510},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 8},
  [401] = {.lex_state = 6},
  [402] = {.lex_state = 63},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 8},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 510},
  [407] = {.lex_state = 510},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 510},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 64},
  [413] = {.lex_state = 510},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 63},
  [418] = {.lex_state = 510},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 10},
  [429] = {.lex_state = 19},
  [430] = {.lex_state = 19},
  [431] = {.lex_state = 10},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 11},
  [434] = {.lex_state = 10},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 64},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 20},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 10},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 10},
  [450] = {.lex_state = 10},
  [451] = {.lex_state = 18},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 4},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 18},
  [458] = {.lex_state = 10},
  [459] = {.lex_state = 10},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 22},
  [463] = {.lex_state = 18},
  [464] = {.lex_state = 63},
  [465] = {.lex_state = 11},
  [466] = {.lex_state = 11},
  [467] = {.lex_state = 24},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 24},
  [470] = {.lex_state = 11},
  [471] = {.lex_state = 20},
  [472] = {.lex_state = 11},
  [473] = {.lex_state = 11},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 11},
  [476] = {.lex_state = 23},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 62},
  [479] = {.lex_state = 23},
  [480] = {.lex_state = 21},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 62},
  [483] = {.lex_state = 19},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 22},
  [486] = {.lex_state = 11},
  [487] = {.lex_state = 11},
  [488] = {.lex_state = 11},
  [489] = {.lex_state = 11},
  [490] = {.lex_state = 16},
  [491] = {.lex_state = 27},
  [492] = {.lex_state = 9},
  [493] = {.lex_state = 63},
  [494] = {.lex_state = 27},
  [495] = {.lex_state = 16},
  [496] = {.lex_state = 16},
  [497] = {.lex_state = 21},
  [498] = {.lex_state = 62},
  [499] = {.lex_state = 16},
  [500] = {.lex_state = 16},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 25},
  [503] = {.lex_state = 63},
  [504] = {.lex_state = 16},
  [505] = {.lex_state = 16},
  [506] = {.lex_state = 24},
  [507] = {.lex_state = 16},
  [508] = {.lex_state = 25},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 23},
  [511] = {.lex_state = 22},
  [512] = {.lex_state = 16},
  [513] = {.lex_state = 9},
  [514] = {.lex_state = 65},
  [515] = {.lex_state = 65},
  [516] = {.lex_state = 65},
  [517] = {.lex_state = 9},
  [518] = {.lex_state = 9},
  [519] = {.lex_state = 26},
  [520] = {.lex_state = 26},
  [521] = {.lex_state = 65},
  [522] = {.lex_state = 65},
  [523] = {.lex_state = 9},
  [524] = {.lex_state = 65},
  [525] = {.lex_state = 65},
  [526] = {.lex_state = 65},
  [527] = {.lex_state = 65},
  [528] = {.lex_state = 65},
  [529] = {.lex_state = 25},
  [530] = {.lex_state = 9},
  [531] = {.lex_state = 26},
  [532] = {.lex_state = 65},
  [533] = {.lex_state = 9},
  [534] = {.lex_state = 11},
  [535] = {.lex_state = 9},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 65},
  [538] = {.lex_state = 26},
  [539] = {.lex_state = 9},
  [540] = {.lex_state = 65},
  [541] = {.lex_state = 11},
  [542] = {.lex_state = 11},
  [543] = {.lex_state = 26},
  [544] = {.lex_state = 26},
  [545] = {.lex_state = 9},
  [546] = {.lex_state = 9},
  [547] = {.lex_state = 9},
  [548] = {.lex_state = 11},
  [549] = {.lex_state = 65},
  [550] = {.lex_state = 65},
  [551] = {.lex_state = 65},
  [552] = {.lex_state = 26},
  [553] = {.lex_state = 65},
  [554] = {.lex_state = 65},
  [555] = {.lex_state = 9},
  [556] = {.lex_state = 9},
  [557] = {.lex_state = 9},
  [558] = {.lex_state = 11},
  [559] = {.lex_state = 65},
  [560] = {.lex_state = 9},
  [561] = {.lex_state = 9},
  [562] = {.lex_state = 65},
  [563] = {.lex_state = 11},
  [564] = {.lex_state = 9},
  [565] = {.lex_state = 65},
  [566] = {.lex_state = 9},
  [567] = {.lex_state = 28},
  [568] = {.lex_state = 9},
  [569] = {.lex_state = 9},
  [570] = {.lex_state = 26},
  [571] = {.lex_state = 9},
  [572] = {.lex_state = 26},
  [573] = {.lex_state = 26},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 1},
  [576] = {.lex_state = 1},
  [577] = {.lex_state = 1},
  [578] = {.lex_state = 509},
  [579] = {.lex_state = 9},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 65},
  [582] = {.lex_state = 509},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 65},
  [585] = {.lex_state = 1},
  [586] = {.lex_state = 10},
  [587] = {.lex_state = 28},
  [588] = {.lex_state = 509},
  [589] = {.lex_state = 28},
  [590] = {.lex_state = 28},
  [591] = {.lex_state = 28},
  [592] = {.lex_state = 28},
  [593] = {.lex_state = 28},
  [594] = {.lex_state = 28},
  [595] = {.lex_state = 509},
  [596] = {.lex_state = 28},
  [597] = {.lex_state = 509},
  [598] = {.lex_state = 509},
  [599] = {.lex_state = 28},
  [600] = {.lex_state = 28},
  [601] = {.lex_state = 509},
  [602] = {.lex_state = 28},
  [603] = {.lex_state = 28},
  [604] = {.lex_state = 10},
  [605] = {.lex_state = 65},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 509},
  [610] = {.lex_state = 28},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 509},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 28},
  [615] = {.lex_state = 10},
  [616] = {.lex_state = 28},
  [617] = {.lex_state = 509},
  [618] = {.lex_state = 28},
  [619] = {.lex_state = 28},
  [620] = {.lex_state = 509},
  [621] = {.lex_state = 28},
  [622] = {.lex_state = 509},
  [623] = {.lex_state = 509},
  [624] = {.lex_state = 28},
  [625] = {.lex_state = 10},
  [626] = {.lex_state = 509},
  [627] = {.lex_state = 509},
  [628] = {.lex_state = 28},
  [629] = {.lex_state = 509},
  [630] = {.lex_state = 28},
  [631] = {.lex_state = 10},
  [632] = {.lex_state = 28},
  [633] = {.lex_state = 28},
  [634] = {.lex_state = 28},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 28},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 10},
  [651] = {.lex_state = 28},
  [652] = {.lex_state = 28},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 28},
  [655] = {.lex_state = 28},
  [656] = {.lex_state = 28},
  [657] = {.lex_state = 28},
  [658] = {.lex_state = 28},
  [659] = {.lex_state = 10},
  [660] = {.lex_state = 10},
  [661] = {.lex_state = 510},
  [662] = {.lex_state = 28},
  [663] = {.lex_state = 510},
  [664] = {.lex_state = 510},
  [665] = {.lex_state = 27},
  [666] = {.lex_state = 510},
  [667] = {.lex_state = 10},
  [668] = {.lex_state = 28},
  [669] = {.lex_state = 510},
  [670] = {.lex_state = 11},
  [671] = {.lex_state = 510},
  [672] = {.lex_state = 26},
  [673] = {.lex_state = 28},
  [674] = {.lex_state = 510},
  [675] = {.lex_state = 27},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 27},
  [678] = {.lex_state = 28},
  [679] = {.lex_state = 11},
  [680] = {.lex_state = 27},
  [681] = {.lex_state = 27},
  [682] = {.lex_state = 11},
  [683] = {.lex_state = 27},
  [684] = {.lex_state = 11},
  [685] = {.lex_state = 11},
  [686] = {.lex_state = 11},
  [687] = {.lex_state = 509},
  [688] = {.lex_state = 26},
  [689] = {.lex_state = 26},
  [690] = {.lex_state = 26},
  [691] = {.lex_state = 26},
  [692] = {.lex_state = 26},
  [693] = {.lex_state = 509},
  [694] = {.lex_state = 499},
  [695] = {.lex_state = 510},
  [696] = {.lex_state = 11},
  [697] = {.lex_state = 11},
  [698] = {.lex_state = 11},
  [699] = {.lex_state = 27},
  [700] = {.lex_state = 27},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 27},
  [703] = {.lex_state = 26},
  [704] = {.lex_state = 26},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 26},
  [707] = {.lex_state = 26},
  [708] = {.lex_state = 510},
  [709] = {.lex_state = 26},
  [710] = {.lex_state = 26},
  [711] = {.lex_state = 510},
  [712] = {.lex_state = 510},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 26},
  [715] = {.lex_state = 510},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 510},
  [718] = {.lex_state = 26},
  [719] = {.lex_state = 11},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 26},
  [722] = {.lex_state = 11},
  [723] = {.lex_state = 26},
  [724] = {.lex_state = 26},
  [725] = {.lex_state = 11},
  [726] = {.lex_state = 27},
  [727] = {.lex_state = 27},
  [728] = {.lex_state = 11},
  [729] = {.lex_state = 26},
  [730] = {.lex_state = 27},
  [731] = {.lex_state = 11},
  [732] = {.lex_state = 27},
  [733] = {.lex_state = 27},
  [734] = {.lex_state = 510},
  [735] = {.lex_state = 26},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 11},
  [738] = {.lex_state = 27},
  [739] = {.lex_state = 11},
  [740] = {.lex_state = 27},
  [741] = {.lex_state = 11},
  [742] = {.lex_state = 499},
  [743] = {.lex_state = 26},
  [744] = {.lex_state = 26},
  [745] = {.lex_state = 27},
  [746] = {.lex_state = 27},
  [747] = {.lex_state = 26},
  [748] = {.lex_state = 27},
  [749] = {.lex_state = 28},
  [750] = {.lex_state = 510},
  [751] = {.lex_state = 28},
  [752] = {.lex_state = 28},
  [753] = {.lex_state = 27},
  [754] = {.lex_state = 11},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 11},
  [758] = {.lex_state = 27},
  [759] = {.lex_state = 28},
  [760] = {.lex_state = 27},
  [761] = {.lex_state = 11},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 28},
  [765] = {.lex_state = 510},
  [766] = {.lex_state = 11},
  [767] = {.lex_state = 11},
  [768] = {.lex_state = 28},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 28},
  [771] = {.lex_state = 26},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 28},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 28},
  [777] = {.lex_state = 11},
  [778] = {.lex_state = 28},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 28},
  [782] = {.lex_state = 510},
  [783] = {.lex_state = 28},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 28},
  [787] = {.lex_state = 510},
  [788] = {.lex_state = 662},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 28},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 28},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 28},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 28},
  [807] = {.lex_state = 28},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 28},
  [810] = {.lex_state = 28},
  [811] = {.lex_state = 28},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 510},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 27},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 499},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 28},
  [838] = {.lex_state = 509},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 495},
  [846] = {.lex_state = 495},
  [847] = {.lex_state = 510},
  [848] = {.lex_state = 509},
  [849] = {.lex_state = 509},
  [850] = {.lex_state = 509},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 495},
  [853] = {.lex_state = 662},
  [854] = {.lex_state = 509},
  [855] = {.lex_state = 662},
  [856] = {.lex_state = 495},
  [857] = {.lex_state = 509},
  [858] = {.lex_state = 509},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 509},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 495},
  [863] = {.lex_state = 495},
  [864] = {.lex_state = 509},
  [865] = {.lex_state = 509},
  [866] = {.lex_state = 509},
  [867] = {.lex_state = 509},
  [868] = {.lex_state = 509},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 495},
  [871] = {.lex_state = 509},
  [872] = {.lex_state = 510},
  [873] = {.lex_state = 509},
  [874] = {.lex_state = 499},
  [875] = {.lex_state = 509},
  [876] = {.lex_state = 509},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 495},
  [879] = {.lex_state = 509},
  [880] = {.lex_state = 509},
  [881] = {.lex_state = 509},
  [882] = {.lex_state = 495},
  [883] = {.lex_state = 500},
  [884] = {.lex_state = 509},
  [885] = {.lex_state = 509},
  [886] = {.lex_state = 509},
  [887] = {.lex_state = 509},
  [888] = {.lex_state = 509},
  [889] = {.lex_state = 509},
  [890] = {.lex_state = 509},
  [891] = {.lex_state = 495},
  [892] = {.lex_state = 509},
  [893] = {.lex_state = 509},
  [894] = {.lex_state = 495},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 496},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 66},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 496},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 496},
  [914] = {.lex_state = 499},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 496},
  [927] = {.lex_state = 663},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 496},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 496},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 499},
  [940] = {.lex_state = 663},
  [941] = {.lex_state = 496},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
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
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__iquery] = ACTIONS(1),
    [sym__ifragment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(943),
    [sym__ontology_document] = STATE(942),
    [sym_prefix_declaration] = STATE(762),
    [sym_ontology] = STATE(942),
    [aux_sym__ontology_document_repeat1] = STATE(762),
    [anon_sym_Prefix_COLON] = ACTIONS(3),
    [anon_sym_Ontology_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
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
  [87] = 16,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
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
  [172] = 1,
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
  [227] = 16,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
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
  [311] = 1,
    ACTIONS(33), 50,
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
  [364] = 1,
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
  [417] = 16,
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
    ACTIONS(37), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
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
  [500] = 16,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
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
  [578] = 3,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(45), 1,
      sym__language_tag,
    ACTIONS(41), 42,
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
  [629] = 1,
    ACTIONS(47), 43,
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
  [675] = 1,
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
  [721] = 1,
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
  [766] = 1,
    ACTIONS(53), 42,
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
  [811] = 1,
    ACTIONS(55), 42,
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
  [856] = 1,
    ACTIONS(57), 42,
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
  [901] = 5,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_that,
    ACTIONS(66), 1,
      anon_sym_value,
    ACTIONS(64), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(59), 33,
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
  [954] = 1,
    ACTIONS(69), 42,
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
  [999] = 1,
    ACTIONS(71), 42,
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
  [1044] = 1,
    ACTIONS(73), 42,
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
  [1089] = 1,
    ACTIONS(75), 41,
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
  [1133] = 3,
    ACTIONS(66), 1,
      anon_sym_value,
    ACTIONS(64), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(62), 34,
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
  [1181] = 8,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 31,
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
  [1239] = 8,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(93), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 31,
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
  [1297] = 4,
    ACTIONS(100), 1,
      anon_sym_E,
    ACTIONS(97), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 35,
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
  [1346] = 7,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(104), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 31,
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
  [1401] = 4,
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
  [1450] = 4,
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
  [1499] = 4,
    ACTIONS(123), 2,
      sym__non_zero,
      sym__zero,
    STATE(27), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 30,
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
  [1548] = 7,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(127), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(125), 31,
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
  [1603] = 4,
    ACTIONS(129), 2,
      sym__non_zero,
      sym__zero,
    STATE(32), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 28,
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
  [1650] = 4,
    ACTIONS(131), 2,
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
  [1697] = 4,
    ACTIONS(133), 2,
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
  [1744] = 4,
    ACTIONS(136), 2,
      sym__non_zero,
      sym__zero,
    STATE(34), 2,
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
  [1790] = 4,
    ACTIONS(139), 2,
      sym__non_zero,
      sym__zero,
    STATE(34), 2,
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
  [1836] = 1,
    ACTIONS(141), 37,
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
  [1876] = 1,
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
  [1916] = 1,
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
  [1956] = 4,
    ACTIONS(147), 2,
      sym__non_zero,
      sym__zero,
    STATE(35), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 27,
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
  [2002] = 4,
    ACTIONS(149), 2,
      sym__non_zero,
      sym__zero,
    STATE(40), 2,
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
  [2047] = 1,
    ACTIONS(152), 36,
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
  [2086] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      anon_sym_Import_COLON,
    ACTIONS(158), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(160), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(162), 1,
      anon_sym_Class_COLON,
    ACTIONS(164), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(166), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(168), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(170), 1,
      anon_sym_Individual_COLON,
    STATE(88), 1,
      sym_version_iri,
    ACTIONS(172), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(174), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(176), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(87), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(135), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(456), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(223), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [2163] = 2,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(180), 30,
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
  [2204] = 20,
    ACTIONS(156), 1,
      anon_sym_Import_COLON,
    ACTIONS(158), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(160), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(162), 1,
      anon_sym_Class_COLON,
    ACTIONS(164), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(166), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(168), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(170), 1,
      anon_sym_Individual_COLON,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    STATE(42), 1,
      sym_ontology_iri,
    ACTIONS(172), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(174), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(176), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(89), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(142), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(374), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(244), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [2281] = 4,
    ACTIONS(190), 2,
      sym__non_zero,
      sym__zero,
    STATE(46), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 26,
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
  [2326] = 4,
    ACTIONS(192), 2,
      sym__non_zero,
      sym__zero,
    STATE(40), 2,
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
  [2371] = 1,
    ACTIONS(194), 34,
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
  [2408] = 2,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 33,
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
  [2447] = 2,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(180), 28,
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
  [2486] = 1,
    ACTIONS(7), 33,
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
  [2522] = 8,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_inverse,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    STATE(173), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
    ACTIONS(204), 18,
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
  [2572] = 1,
    ACTIONS(212), 33,
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
  [2608] = 1,
    ACTIONS(214), 33,
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
  [2644] = 1,
    ACTIONS(216), 33,
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
  [2680] = 1,
    ACTIONS(218), 33,
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
  [2716] = 1,
    ACTIONS(220), 33,
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
  [2752] = 1,
    ACTIONS(222), 33,
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
  [2788] = 1,
    ACTIONS(224), 33,
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
  [2824] = 1,
    ACTIONS(226), 33,
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
  [2860] = 8,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      anon_sym_inverse,
    ACTIONS(238), 1,
      sym__pn_local,
    ACTIONS(241), 1,
      sym__pname_ln,
    STATE(173), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
    ACTIONS(233), 18,
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
  [2910] = 8,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_inverse,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(173), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
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
  [2960] = 1,
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
  [2996] = 20,
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
    ACTIONS(250), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(765), 1,
      sym_class_iri,
    STATE(782), 1,
      sym__conjunction,
    STATE(908), 1,
      sym_description,
    STATE(930), 1,
      sym_data_range,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(750), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3070] = 2,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(180), 27,
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
  [3108] = 1,
    ACTIONS(252), 33,
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
  [3144] = 1,
    ACTIONS(254), 33,
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
  [3180] = 16,
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
    ACTIONS(250), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3246] = 2,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(180), 26,
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
  [3283] = 1,
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
  [3318] = 9,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(93), 1,
      anon_sym_f,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_F,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(258), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 21,
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
  [3368] = 9,
    ACTIONS(83), 1,
      anon_sym_f,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(264), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_F,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(258), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 21,
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
  [3418] = 4,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(72), 2,
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
  [3458] = 4,
    ACTIONS(271), 2,
      sym__non_zero,
      sym__zero,
    STATE(74), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 21,
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
  [3498] = 4,
    ACTIONS(273), 2,
      sym__non_zero,
      sym__zero,
    STATE(72), 2,
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
  [3538] = 4,
    ACTIONS(100), 2,
      anon_sym_F,
      anon_sym_E,
    ACTIONS(275), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 24,
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
  [3577] = 1,
    ACTIONS(278), 30,
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
  [3610] = 8,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(127), 1,
      anon_sym_f,
    ACTIONS(280), 1,
      anon_sym_F,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(258), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(125), 21,
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
  [3657] = 1,
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
  [3690] = 8,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(104), 1,
      anon_sym_f,
    ACTIONS(284), 1,
      anon_sym_F,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(258), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 21,
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
  [3737] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3795] = 16,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(290), 1,
      anon_sym_PLUS,
    ACTIONS(292), 1,
      anon_sym_DASH,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      sym__quoted_string,
    STATE(909), 1,
      sym__individual_list,
    STATE(929), 1,
      sym__literal_list,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(834), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(843), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [3857] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3915] = 14,
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
    ACTIONS(37), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3973] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4031] = 14,
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
    ACTIONS(250), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4089] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4147] = 15,
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
    STATE(136), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(395), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(242), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4206] = 15,
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
    STATE(90), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(136), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(242), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4265] = 15,
    ACTIONS(154), 1,
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
    STATE(135), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(395), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(223), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4324] = 15,
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
    STATE(137), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(395), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(226), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4383] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(145), 25,
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
  [4417] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 25,
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
  [4451] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 25,
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
  [4485] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 25,
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
  [4519] = 2,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(180), 21,
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
  [4551] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 25,
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
  [4585] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(337), 1,
      anon_sym_PLUS,
    ACTIONS(339), 1,
      anon_sym_DASH,
    STATE(912), 1,
      sym__lexial_value,
    ACTIONS(335), 2,
      sym__non_zero,
      sym__zero,
    STATE(367), 2,
      aux_sym__digits,
      sym__digit,
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
  [4636] = 3,
    ACTIONS(341), 1,
      anon_sym_and,
    STATE(98), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(212), 24,
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
  [4669] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(290), 1,
      anon_sym_PLUS,
    ACTIONS(292), 1,
      anon_sym_DASH,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      sym__quoted_string,
    STATE(912), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
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
  [4720] = 8,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(346), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(348), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(350), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(352), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(354), 1,
      anon_sym_HasKey_COLON,
    STATE(116), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(344), 13,
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
  [4763] = 12,
    ACTIONS(356), 1,
      anon_sym_LT,
    ACTIONS(358), 1,
      anon_sym__COLON,
    ACTIONS(362), 1,
      anon_sym_PLUS,
    ACTIONS(364), 1,
      anon_sym_DASH,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      sym__quoted_string,
    ACTIONS(370), 1,
      sym__pn_local,
    ACTIONS(372), 1,
      sym__pname_ln,
    STATE(915), 1,
      sym__lexial_value,
    ACTIONS(360), 2,
      sym__non_zero,
      sym__zero,
    STATE(369), 2,
      aux_sym__digits,
      sym__digit,
    STATE(635), 13,
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
  [4814] = 3,
    ACTIONS(376), 1,
      anon_sym_and,
    STATE(105), 1,
      aux_sym__conjunction_repeat1,
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
  [4847] = 12,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(380), 1,
      anon_sym__COLON,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_DASH,
    ACTIONS(388), 1,
      anon_sym_DOT,
    ACTIONS(390), 1,
      sym__quoted_string,
    ACTIONS(392), 1,
      sym__pn_local,
    ACTIONS(394), 1,
      sym__pname_ln,
    STATE(907), 1,
      sym__lexial_value,
    ACTIONS(382), 2,
      sym__non_zero,
      sym__zero,
    STATE(271), 2,
      aux_sym__digits,
      sym__digit,
    STATE(564), 13,
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
  [4898] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(398), 1,
      anon_sym_PLUS,
    ACTIONS(400), 1,
      anon_sym_DASH,
    STATE(912), 1,
      sym__lexial_value,
    ACTIONS(396), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
      aux_sym__digits,
      sym__digit,
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
  [4949] = 3,
    ACTIONS(376), 1,
      anon_sym_and,
    STATE(98), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(402), 24,
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
  [4982] = 12,
    ACTIONS(404), 1,
      anon_sym_LT,
    ACTIONS(406), 1,
      anon_sym__COLON,
    ACTIONS(410), 1,
      anon_sym_PLUS,
    ACTIONS(412), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      sym__quoted_string,
    ACTIONS(418), 1,
      sym__pn_local,
    ACTIONS(420), 1,
      sym__pname_ln,
    STATE(910), 1,
      sym__lexial_value,
    ACTIONS(408), 2,
      sym__non_zero,
      sym__zero,
    STATE(451), 2,
      aux_sym__digits,
      sym__digit,
    STATE(706), 13,
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
  [5033] = 12,
    ACTIONS(422), 1,
      anon_sym_LT,
    ACTIONS(424), 1,
      anon_sym__COLON,
    ACTIONS(428), 1,
      anon_sym_PLUS,
    ACTIONS(430), 1,
      anon_sym_DASH,
    ACTIONS(432), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      sym__quoted_string,
    ACTIONS(436), 1,
      sym__pn_local,
    ACTIONS(438), 1,
      sym__pname_ln,
    STATE(935), 1,
      sym__lexial_value,
    ACTIONS(426), 2,
      sym__non_zero,
      sym__zero,
    STATE(480), 2,
      aux_sym__digits,
      sym__digit,
    STATE(809), 13,
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
  [5084] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5139] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5194] = 3,
    ACTIONS(376), 1,
      anon_sym_and,
    STATE(98), 1,
      aux_sym__conjunction_repeat1,
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
  [5227] = 3,
    ACTIONS(440), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(252), 24,
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
  [5260] = 12,
    ACTIONS(443), 1,
      anon_sym_LT,
    ACTIONS(445), 1,
      anon_sym__COLON,
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_DOT,
    ACTIONS(455), 1,
      sym__quoted_string,
    ACTIONS(457), 1,
      sym__pn_local,
    ACTIONS(459), 1,
      sym__pname_ln,
    STATE(900), 1,
      sym__lexial_value,
    ACTIONS(447), 2,
      sym__non_zero,
      sym__zero,
    STATE(444), 2,
      aux_sym__digits,
      sym__digit,
    STATE(753), 13,
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
  [5311] = 2,
    ACTIONS(463), 1,
      anon_sym_that,
    ACTIONS(461), 25,
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
  [5342] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5397] = 3,
    ACTIONS(376), 1,
      anon_sym_and,
    STATE(110), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(465), 24,
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
  [5430] = 8,
    ACTIONS(469), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(472), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(475), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(478), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(481), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(484), 1,
      anon_sym_HasKey_COLON,
    STATE(116), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(467), 13,
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
  [5473] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5528] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5583] = 14,
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
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(17), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5638] = 3,
    ACTIONS(489), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(487), 24,
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
  [5671] = 3,
    ACTIONS(489), 1,
      anon_sym_and,
    STATE(120), 1,
      aux_sym__conjunction_repeat2,
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
  [5704] = 8,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(346), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(348), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(350), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(352), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(354), 1,
      anon_sym_HasKey_COLON,
    STATE(100), 7,
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
  [5747] = 12,
    ACTIONS(495), 1,
      anon_sym_LT,
    ACTIONS(497), 1,
      anon_sym__COLON,
    ACTIONS(501), 1,
      anon_sym_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(507), 1,
      sym__quoted_string,
    ACTIONS(509), 1,
      sym__pn_local,
    ACTIONS(511), 1,
      sym__pname_ln,
    STATE(933), 1,
      sym__lexial_value,
    ACTIONS(499), 2,
      sym__non_zero,
      sym__zero,
    STATE(430), 2,
      aux_sym__digits,
      sym__digit,
    STATE(728), 13,
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
  [5798] = 3,
    ACTIONS(515), 1,
      anon_sym_and,
    STATE(133), 1,
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
  [5830] = 1,
    ACTIONS(517), 25,
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
  [5858] = 1,
    ACTIONS(519), 25,
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
  [5886] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(523), 1,
      anon_sym_not,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__annotations,
    STATE(509), 1,
      sym__description_2list,
    STATE(765), 1,
      sym_class_iri,
    STATE(782), 1,
      sym__conjunction,
    STATE(921), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(750), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5946] = 3,
    ACTIONS(531), 1,
      anon_sym_or,
    STATE(134), 1,
      aux_sym_description_repeat1,
    ACTIONS(529), 23,
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
  [5978] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(234), 1,
      sym_class_iri,
    STATE(263), 1,
      sym__annotations,
    STATE(282), 1,
      sym__conjunction,
    STATE(333), 1,
      sym_description,
    STATE(371), 1,
      sym__description_annotated_list,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(243), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6038] = 3,
    ACTIONS(515), 1,
      anon_sym_and,
    STATE(124), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(535), 23,
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
  [6070] = 3,
    ACTIONS(537), 1,
      anon_sym_or,
    STATE(131), 1,
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
  [6102] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(210), 1,
      sym_class_iri,
    STATE(246), 1,
      sym__conjunction,
    STATE(256), 1,
      sym__annotations,
    STATE(295), 1,
      sym_description,
    STATE(365), 1,
      sym__description_annotated_list,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6162] = 3,
    ACTIONS(544), 1,
      anon_sym_and,
    STATE(133), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(542), 23,
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
  [6194] = 3,
    ACTIONS(531), 1,
      anon_sym_or,
    STATE(131), 1,
      aux_sym_description_repeat1,
    ACTIONS(547), 23,
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
  [6226] = 13,
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
    STATE(387), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(242), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6278] = 13,
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
    STATE(387), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(226), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6330] = 13,
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
    ACTIONS(549), 1,
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
    STATE(387), 2,
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
  [6382] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_not,
    STATE(153), 1,
      sym_class_iri,
    STATE(202), 1,
      sym__conjunction,
    STATE(237), 1,
      sym_description,
    STATE(259), 1,
      sym__annotations,
    STATE(318), 1,
      sym__description_annotated_list,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(158), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6442] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(523), 1,
      anon_sym_not,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__annotations,
    STATE(353), 1,
      sym__description_2list,
    STATE(765), 1,
      sym_class_iri,
    STATE(782), 1,
      sym__conjunction,
    STATE(938), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(750), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6502] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      anon_sym_not,
    STATE(113), 1,
      sym_class_iri,
    STATE(128), 1,
      sym__conjunction,
    STATE(149), 1,
      sym_description,
    STATE(236), 1,
      sym__annotations,
    STATE(265), 1,
      sym__description_annotated_list,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(121), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6562] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(210), 1,
      sym_class_iri,
    STATE(246), 1,
      sym__conjunction,
    STATE(256), 1,
      sym__annotations,
    STATE(295), 1,
      sym_description,
    STATE(345), 1,
      sym__description_annotated_list,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6622] = 13,
    ACTIONS(154), 1,
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
    STATE(387), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(223), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6674] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(210), 1,
      sym_class_iri,
    STATE(246), 1,
      sym__conjunction,
    STATE(256), 1,
      sym__annotations,
    STATE(295), 1,
      sym_description,
    STATE(350), 1,
      sym__description_annotated_list,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6734] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(210), 1,
      sym_class_iri,
    STATE(240), 1,
      sym__annotations,
    STATE(246), 1,
      sym__conjunction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6791] = 7,
    ACTIONS(557), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(566), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(569), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(563), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(145), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(560), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(555), 13,
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
  [6830] = 3,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [6861] = 1,
    ACTIONS(542), 24,
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
  [6888] = 3,
    ACTIONS(578), 1,
      anon_sym_or,
    STATE(148), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(576), 22,
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
  [6919] = 3,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [6950] = 7,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(589), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(591), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(587), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(145), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(585), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(583), 13,
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
  [6989] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(593), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(252), 1,
      sym_data_range,
    STATE(288), 1,
      sym__annotations,
    STATE(318), 1,
      sym__data_range_annotated_list,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7046] = 3,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(601), 22,
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
  [7077] = 2,
    ACTIONS(603), 1,
      anon_sym_that,
    ACTIONS(461), 23,
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
  [7106] = 3,
    ACTIONS(607), 1,
      anon_sym_o,
    STATE(154), 1,
      aux_sym_object_property_frame_repeat1,
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
  [7137] = 3,
    ACTIONS(610), 1,
      anon_sym_and,
    STATE(155), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(212), 22,
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
  [7168] = 3,
    ACTIONS(613), 1,
      anon_sym_and,
    STATE(155), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(402), 22,
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
  [7199] = 3,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(157), 1,
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
  [7230] = 3,
    ACTIONS(618), 1,
      anon_sym_and,
    STATE(182), 1,
      aux_sym__conjunction_repeat2,
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
  [7261] = 3,
    ACTIONS(613), 1,
      anon_sym_and,
    STATE(155), 1,
      aux_sym__conjunction_repeat1,
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
  [7292] = 3,
    ACTIONS(622), 1,
      anon_sym_or,
    STATE(184), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(620), 22,
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
  [7323] = 3,
    ACTIONS(626), 1,
      anon_sym_o,
    STATE(154), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(624), 22,
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
  [7354] = 3,
    ACTIONS(613), 1,
      anon_sym_and,
    STATE(159), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(465), 22,
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
  [7385] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(153), 1,
      sym_class_iri,
    STATE(202), 1,
      sym__conjunction,
    STATE(241), 1,
      sym__annotations,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(158), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7442] = 3,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(628), 22,
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
  [7473] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(113), 1,
      sym_class_iri,
    STATE(128), 1,
      sym__conjunction,
    STATE(247), 1,
      sym__annotations,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(121), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7530] = 7,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(589), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(591), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(587), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(150), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(585), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(632), 13,
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
  [7569] = 3,
    ACTIONS(634), 1,
      anon_sym_and,
    STATE(167), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(252), 22,
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
  [7600] = 3,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(637), 22,
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
  [7631] = 3,
    ACTIONS(613), 1,
      anon_sym_and,
    STATE(156), 1,
      aux_sym__conjunction_repeat1,
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
  [7662] = 3,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [7693] = 3,
    ACTIONS(626), 1,
      anon_sym_o,
    STATE(154), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(646), 22,
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
  [7724] = 3,
    ACTIONS(626), 1,
      anon_sym_o,
    STATE(161), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(646), 22,
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
  [7755] = 2,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(648), 20,
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
  [7784] = 3,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(651), 22,
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
  [7815] = 3,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(653), 22,
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
  [7846] = 3,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(651), 22,
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
  [7877] = 3,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(655), 22,
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
  [7908] = 3,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(657), 22,
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
  [7939] = 3,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(659), 22,
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
  [7970] = 3,
    ACTIONS(626), 1,
      anon_sym_o,
    STATE(171), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(555), 22,
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
  [8001] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(521), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(230), 1,
      sym__annotations,
    STATE(234), 1,
      sym_class_iri,
    STATE(282), 1,
      sym__conjunction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(243), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8058] = 3,
    ACTIONS(618), 1,
      anon_sym_and,
    STATE(167), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(487), 22,
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
  [8089] = 3,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(655), 22,
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
  [8120] = 3,
    ACTIONS(622), 1,
      anon_sym_or,
    STATE(148), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(664), 22,
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
  [8151] = 3,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [8182] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(204), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(465), 21,
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
  [8212] = 3,
    ACTIONS(668), 1,
      anon_sym_and,
    STATE(187), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(252), 21,
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
  [8242] = 2,
    ACTIONS(29), 3,
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
  [8270] = 2,
    ACTIONS(517), 3,
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
  [8298] = 1,
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
  [8324] = 1,
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
  [8350] = 3,
    ACTIONS(675), 1,
      anon_sym_and,
    STATE(187), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(487), 21,
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
  [8380] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(215), 1,
      aux_sym__conjunction_repeat1,
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
  [8410] = 1,
    ACTIONS(637), 23,
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
  [8436] = 3,
    ACTIONS(677), 1,
      anon_sym_or,
    STATE(195), 1,
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
  [8466] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(523), 1,
      anon_sym_not,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym__description_2list,
    STATE(765), 1,
      sym_class_iri,
    STATE(782), 1,
      sym__conjunction,
    STATE(938), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(750), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8520] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(593), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(276), 1,
      sym_data_range,
    STATE(277), 1,
      sym__annotations,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8574] = 3,
    ACTIONS(680), 1,
      anon_sym_or,
    STATE(195), 1,
      aux_sym_description_repeat1,
    ACTIONS(547), 21,
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
  [8604] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(593), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(294), 1,
      sym__annotations,
    STATE(419), 1,
      sym_data_range,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8658] = 2,
    ACTIONS(35), 3,
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
  [8686] = 2,
    ACTIONS(33), 3,
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
  [8714] = 3,
    ACTIONS(680), 1,
      anon_sym_or,
    STATE(198), 1,
      aux_sym_description_repeat1,
    ACTIONS(529), 21,
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
  [8744] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(593), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(297), 1,
      sym__annotations,
    STATE(422), 1,
      sym_data_range,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8798] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(212), 1,
      aux_sym__conjunction_repeat1,
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
  [8828] = 2,
    ACTIONS(519), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(686), 20,
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
  [8856] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(523), 1,
      anon_sym_not,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(501), 1,
      sym__description_2list,
    STATE(765), 1,
      sym_class_iri,
    STATE(782), 1,
      sym__conjunction,
    STATE(921), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(750), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8910] = 1,
    ACTIONS(605), 23,
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
  [8936] = 1,
    ACTIONS(688), 23,
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
  [8962] = 1,
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
  [8988] = 2,
    ACTIONS(690), 1,
      anon_sym_that,
    ACTIONS(461), 22,
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
  [9016] = 1,
    ACTIONS(692), 23,
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
  [9042] = 3,
    ACTIONS(694), 1,
      anon_sym_and,
    STATE(212), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(212), 21,
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
  [9072] = 3,
    ACTIONS(675), 1,
      anon_sym_and,
    STATE(192), 1,
      aux_sym__conjunction_repeat2,
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
  [9102] = 1,
    ACTIONS(576), 23,
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
  [9128] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(212), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(402), 21,
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
  [9158] = 1,
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
  [9184] = 3,
    ACTIONS(697), 1,
      anon_sym_or,
    STATE(217), 1,
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
  [9213] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(700), 20,
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
  [9242] = 3,
    ACTIONS(704), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(402), 20,
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
  [9271] = 11,
    ACTIONS(706), 1,
      ts_builtin_sym_end,
    ACTIONS(708), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(711), 1,
      anon_sym_Class_COLON,
    ACTIONS(714), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(717), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(720), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(723), 1,
      anon_sym_Individual_COLON,
    ACTIONS(726), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(729), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(732), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(220), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9316] = 3,
    ACTIONS(735), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(212), 20,
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
  [9345] = 3,
    ACTIONS(704), 1,
      anon_sym_and,
    STATE(219), 1,
      aux_sym__conjunction_repeat1,
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
  [9374] = 11,
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
    STATE(220), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9419] = 7,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(742), 1,
      anon_sym_Domain_COLON,
    ACTIONS(744), 1,
      anon_sym_Range_COLON,
    ACTIONS(746), 1,
      anon_sym_Characteristics_COLON,
    STATE(248), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(740), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(738), 13,
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
  [9456] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym__data_range_annotated_list_repeat1,
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
  [9485] = 11,
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
    ACTIONS(549), 1,
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
    STATE(220), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9530] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(753), 20,
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
  [9559] = 3,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(755), 20,
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
  [9588] = 3,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(760), 20,
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
  [9617] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(234), 1,
      sym_class_iri,
    STATE(282), 1,
      sym__conjunction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(243), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9668] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(523), 1,
      anon_sym_not,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(765), 1,
      sym_class_iri,
    STATE(782), 1,
      sym__conjunction,
    STATE(908), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(750), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9719] = 3,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(572), 20,
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
  [9748] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(210), 1,
      sym_class_iri,
    STATE(246), 1,
      sym__conjunction,
    STATE(307), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9799] = 2,
    ACTIONS(766), 1,
      anon_sym_that,
    ACTIONS(461), 21,
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
  [9826] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      anon_sym_not,
    STATE(385), 1,
      sym_class_iri,
    STATE(413), 1,
      sym__conjunction,
    STATE(435), 1,
      sym_description,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(407), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9877] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      anon_sym_not,
    STATE(113), 1,
      sym_class_iri,
    STATE(128), 1,
      sym__conjunction,
    STATE(146), 1,
      sym_description,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(121), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9928] = 3,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(581), 20,
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
  [9957] = 3,
    ACTIONS(704), 1,
      anon_sym_and,
    STATE(221), 1,
      aux_sym__conjunction_repeat1,
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
  [9986] = 3,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(601), 20,
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
  [10015] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(210), 1,
      sym_class_iri,
    STATE(246), 1,
      sym__conjunction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10066] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(153), 1,
      sym_class_iri,
    STATE(202), 1,
      sym__conjunction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(158), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10117] = 11,
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
    STATE(220), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10162] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(253), 1,
      aux_sym__conjunction_repeat2,
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
  [10191] = 11,
    ACTIONS(154), 1,
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
    STATE(220), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10236] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(210), 1,
      sym_class_iri,
    STATE(246), 1,
      sym__conjunction,
    STATE(269), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10287] = 3,
    ACTIONS(772), 1,
      anon_sym_or,
    STATE(264), 1,
      aux_sym_description_repeat1,
    ACTIONS(529), 20,
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
  [10316] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(113), 1,
      sym_class_iri,
    STATE(128), 1,
      sym__conjunction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(121), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10367] = 7,
    ACTIONS(776), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(782), 1,
      anon_sym_Domain_COLON,
    ACTIONS(785), 1,
      anon_sym_Range_COLON,
    ACTIONS(788), 1,
      anon_sym_Characteristics_COLON,
    STATE(248), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(779), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
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
  [10404] = 3,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(572), 20,
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
  [10433] = 3,
    ACTIONS(791), 1,
      anon_sym_and,
    STATE(250), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(252), 20,
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
  [10462] = 11,
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
    ACTIONS(794), 1,
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
    STATE(220), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10507] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(262), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(796), 20,
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
  [10536] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(250), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(487), 20,
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
  [10565] = 3,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(254), 1,
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
  [10594] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      anon_sym_not,
    STATE(307), 1,
      sym_description,
    STATE(385), 1,
      sym_class_iri,
    STATE(413), 1,
      sym__conjunction,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(407), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10645] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(210), 1,
      sym_class_iri,
    STATE(246), 1,
      sym__conjunction,
    STATE(290), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10696] = 7,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(742), 1,
      anon_sym_Domain_COLON,
    ACTIONS(744), 1,
      anon_sym_Range_COLON,
    ACTIONS(746), 1,
      anon_sym_Characteristics_COLON,
    STATE(224), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(740), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(801), 13,
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
  [10733] = 3,
    ACTIONS(704), 1,
      anon_sym_and,
    STATE(238), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(465), 20,
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
  [10762] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_not,
    STATE(153), 1,
      sym_class_iri,
    STATE(202), 1,
      sym__conjunction,
    STATE(232), 1,
      sym_description,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(158), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10813] = 3,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(803), 20,
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
  [10842] = 3,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(805), 20,
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
  [10871] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(700), 20,
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
  [10900] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(234), 1,
      sym_class_iri,
    STATE(282), 1,
      sym__conjunction,
    STATE(308), 1,
      sym_description,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(243), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10951] = 3,
    ACTIONS(772), 1,
      anon_sym_or,
    STATE(217), 1,
      aux_sym_description_repeat1,
    ACTIONS(547), 20,
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
  [10980] = 1,
    ACTIONS(555), 22,
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
  [11005] = 3,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(803), 20,
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
  [11034] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_not,
    STATE(69), 1,
      sym__conjunction,
    STATE(153), 1,
      sym_class_iri,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(158), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11082] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(930), 1,
      sym_data_range,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11130] = 3,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(807), 19,
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
  [11158] = 3,
    ACTIONS(811), 1,
      anon_sym_or,
    STATE(270), 1,
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
  [11186] = 8,
    ACTIONS(818), 1,
      anon_sym_DOT,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(816), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(820), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(300), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(814), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11224] = 8,
    ACTIONS(824), 1,
      anon_sym_DOT,
    STATE(864), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(816), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(826), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(300), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(822), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11262] = 3,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(828), 19,
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
  [11290] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      anon_sym_not,
    STATE(69), 1,
      sym__conjunction,
    STATE(113), 1,
      sym_class_iri,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(121), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11338] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      anon_sym_not,
    STATE(69), 1,
      sym__conjunction,
    STATE(385), 1,
      sym_class_iri,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(407), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11386] = 1,
    ACTIONS(748), 21,
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
  [11410] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(287), 1,
      sym_data_range,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11458] = 1,
    ACTIONS(755), 21,
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
  [11482] = 3,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(833), 19,
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
  [11510] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(523), 1,
      anon_sym_not,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym__conjunction,
    STATE(765), 1,
      sym_class_iri,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(750), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11558] = 3,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    STATE(281), 1,
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
  [11586] = 3,
    ACTIONS(838), 1,
      anon_sym_or,
    STATE(291), 1,
      aux_sym_description_repeat1,
    ACTIONS(529), 19,
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
  [11614] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(601), 19,
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
  [11642] = 2,
    ACTIONS(29), 6,
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
  [11668] = 2,
    ACTIONS(33), 6,
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
  [11694] = 2,
    ACTIONS(35), 6,
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
  [11720] = 1,
    ACTIONS(842), 21,
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
  [11744] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(218), 1,
      sym_data_range,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11792] = 1,
    ACTIONS(64), 21,
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
  [11816] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(572), 19,
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
  [11844] = 3,
    ACTIONS(838), 1,
      anon_sym_or,
    STATE(270), 1,
      aux_sym_description_repeat1,
    ACTIONS(547), 19,
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
  [11872] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(69), 1,
      sym__conjunction,
    STATE(210), 1,
      sym_class_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(213), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11920] = 1,
    ACTIONS(844), 21,
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
  [11944] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(421), 1,
      sym_data_range,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11992] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(581), 19,
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
  [12020] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(69), 1,
      sym__conjunction,
    STATE(234), 1,
      sym_class_iri,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(243), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12068] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(419), 1,
      sym_data_range,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12116] = 3,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(572), 19,
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
  [12144] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(299), 1,
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
  [12171] = 4,
    ACTIONS(849), 2,
      sym__non_zero,
      sym__zero,
    STATE(300), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 11,
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
  [12200] = 3,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(852), 18,
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
  [12227] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(856), 18,
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
  [12254] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(856), 18,
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
  [12281] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      anon_sym_not,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(65), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12324] = 3,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(145), 18,
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
  [12351] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_not,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(65), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12394] = 1,
    ACTIONS(828), 20,
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
  [12417] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(572), 18,
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
  [12444] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 18,
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
  [12471] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(65), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12514] = 6,
    ACTIONS(869), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(871), 1,
      anon_sym_Types_COLON,
    ACTIONS(873), 1,
      anon_sym_Facts_COLON,
    ACTIONS(875), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(331), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(867), 13,
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
  [12547] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym__individual_annotated_list_repeat1,
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
  [12574] = 3,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(313), 1,
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
  [12601] = 3,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__fact_annotated_list_repeat1,
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
  [12628] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(214), 1,
      sym__data_conjunction,
    STATE(130), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12673] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 18,
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
  [12700] = 3,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(889), 18,
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
  [12727] = 1,
    ACTIONS(774), 20,
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
  [12750] = 3,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(852), 18,
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
  [12777] = 7,
    STATE(867), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(893), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(895), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(351), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(125), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(891), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12812] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 18,
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
  [12839] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_not,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(65), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12882] = 1,
    ACTIONS(897), 20,
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
  [12905] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(601), 18,
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
  [12932] = 3,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 18,
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
  [12959] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      anon_sym_not,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(65), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13002] = 6,
    ACTIONS(901), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(904), 1,
      anon_sym_Types_COLON,
    ACTIONS(907), 1,
      anon_sym_Facts_COLON,
    ACTIONS(910), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(327), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
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
  [13035] = 7,
    STATE(868), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(893), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(915), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(351), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(913), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [13070] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(572), 18,
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
  [13097] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(523), 1,
      anon_sym_not,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(65), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13140] = 6,
    ACTIONS(869), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(871), 1,
      anon_sym_Types_COLON,
    ACTIONS(873), 1,
      anon_sym_Facts_COLON,
    ACTIONS(875), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(327), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
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
  [13173] = 3,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(919), 18,
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
  [13200] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(581), 18,
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
  [13227] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(921), 18,
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
  [13254] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(923), 17,
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
  [13280] = 3,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(927), 17,
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
  [13306] = 3,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
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
  [13332] = 5,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(940), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(938), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(339), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(936), 13,
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
  [13362] = 5,
    ACTIONS(944), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(950), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(947), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(339), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(942), 13,
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
  [13392] = 1,
    ACTIONS(953), 19,
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
  [13414] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [13440] = 1,
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
  [13462] = 3,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(349), 1,
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
  [13488] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [13514] = 1,
    ACTIONS(961), 19,
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
  [13536] = 1,
    ACTIONS(963), 19,
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
  [13558] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(344), 1,
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
  [13584] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [13610] = 3,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
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
  [13636] = 1,
    ACTIONS(972), 19,
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
  [13658] = 4,
    ACTIONS(974), 2,
      sym__non_zero,
      sym__zero,
    STATE(351), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 10,
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
  [13686] = 3,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(977), 17,
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
  [13712] = 1,
    ACTIONS(979), 19,
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
  [13734] = 1,
    ACTIONS(884), 19,
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
  [13756] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(595), 1,
      anon_sym_not,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(147), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13798] = 1,
    ACTIONS(879), 19,
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
  [13820] = 1,
    ACTIONS(981), 19,
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
  [13842] = 1,
    ACTIONS(983), 19,
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
  [13864] = 5,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(940), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(938), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(338), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(985), 13,
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
  [13894] = 4,
    ACTIONS(987), 2,
      sym__non_zero,
      sym__zero,
    STATE(360), 2,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13922] = 1,
    ACTIONS(990), 19,
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
  [13944] = 1,
    ACTIONS(62), 19,
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
  [13966] = 4,
    ACTIONS(992), 2,
      sym__non_zero,
      sym__zero,
    STATE(360), 2,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13994] = 4,
    ACTIONS(994), 2,
      sym__non_zero,
      sym__zero,
    STATE(363), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(119), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [14022] = 1,
    ACTIONS(996), 19,
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
  [14044] = 8,
    ACTIONS(1000), 1,
      anon_sym_DOT,
    STATE(879), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(998), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1002), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(401), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(822), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14079] = 8,
    ACTIONS(93), 1,
      anon_sym_f,
    ACTIONS(262), 1,
      anon_sym_F,
    ACTIONS(1006), 1,
      anon_sym_DOT,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1004), 2,
      sym__non_zero,
      sym__zero,
    STATE(396), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14114] = 1,
    ACTIONS(967), 18,
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
  [14135] = 8,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(998), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1010), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(401), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(814), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(89), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14170] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14209] = 1,
    ACTIONS(899), 18,
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
  [14230] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14269] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14308] = 2,
    ACTIONS(1012), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1014), 15,
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
  [14331] = 1,
    ACTIONS(1016), 18,
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
  [14352] = 8,
    ACTIONS(83), 1,
      anon_sym_f,
    ACTIONS(266), 1,
      anon_sym_F,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1004), 2,
      sym__non_zero,
      sym__zero,
    STATE(396), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14387] = 1,
    ACTIONS(1020), 18,
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
  [14408] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14447] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14486] = 1,
    ACTIONS(927), 18,
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
  [14507] = 1,
    ACTIONS(1022), 18,
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
  [14528] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(66), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(22), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14567] = 3,
    ACTIONS(1024), 1,
      anon_sym_and,
    STATE(383), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(212), 15,
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
  [14591] = 3,
    ACTIONS(1027), 1,
      anon_sym_and,
    STATE(406), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(487), 15,
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
  [14615] = 2,
    ACTIONS(1029), 1,
      anon_sym_that,
    ACTIONS(461), 16,
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
  [14637] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(62), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14675] = 3,
    ACTIONS(1033), 1,
      anon_sym_Annotations_COLON,
    STATE(387), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1031), 14,
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
  [14699] = 3,
    ACTIONS(1036), 1,
      anon_sym_and,
    STATE(397), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(465), 15,
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
  [14723] = 4,
    ACTIONS(1031), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(1033), 1,
      anon_sym_Annotations_COLON,
    STATE(387), 2,
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
  [14749] = 3,
    ACTIONS(1036), 1,
      anon_sym_and,
    STATE(383), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(402), 15,
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
  [14773] = 3,
    ACTIONS(1036), 1,
      anon_sym_and,
    STATE(390), 1,
      aux_sym__conjunction_repeat1,
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
  [14797] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1043), 1,
      anon_sym_DOT,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1041), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(832), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [14829] = 7,
    ACTIONS(127), 1,
      anon_sym_f,
    ACTIONS(280), 1,
      anon_sym_F,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1004), 2,
      sym__non_zero,
      sym__zero,
    STATE(396), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(125), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14861] = 8,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1043), 1,
      anon_sym_DOT,
    STATE(929), 1,
      sym__literal_list,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1041), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(843), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [14895] = 3,
    ACTIONS(1047), 1,
      anon_sym_Import_COLON,
    STATE(395), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    ACTIONS(1045), 14,
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
  [14919] = 4,
    ACTIONS(100), 1,
      anon_sym_F,
    ACTIONS(1050), 2,
      sym__non_zero,
      sym__zero,
    STATE(396), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 12,
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
  [14945] = 3,
    ACTIONS(1036), 1,
      anon_sym_and,
    STATE(383), 1,
      aux_sym__conjunction_repeat1,
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
  [14969] = 4,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1055), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(389), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [14995] = 7,
    ACTIONS(104), 1,
      anon_sym_f,
    ACTIONS(284), 1,
      anon_sym_F,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1004), 2,
      sym__non_zero,
      sym__zero,
    STATE(396), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [15027] = 7,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1057), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1059), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(414), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(891), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(125), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15059] = 4,
    ACTIONS(1061), 2,
      sym__non_zero,
      sym__zero,
    STATE(401), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 8,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [15085] = 10,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    ACTIONS(1064), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1066), 1,
      anon_sym_inverse,
    STATE(433), 1,
      sym__annotations,
    STATE(509), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(917), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(918), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(173), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15123] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1043), 1,
      anon_sym_DOT,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1041), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(877), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [15155] = 7,
    STATE(871), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1057), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1068), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(414), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(913), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(102), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15187] = 1,
    ACTIONS(942), 17,
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
  [15207] = 3,
    ACTIONS(1070), 1,
      anon_sym_and,
    STATE(406), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(252), 15,
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
  [15231] = 3,
    ACTIONS(1027), 1,
      anon_sym_and,
    STATE(384), 1,
      aux_sym__conjunction_repeat2,
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
  [15255] = 4,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1075), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(398), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1073), 13,
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
  [15281] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1043), 1,
      anon_sym_DOT,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1041), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(859), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15312] = 3,
    ACTIONS(1077), 1,
      anon_sym_or,
    STATE(410), 1,
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
  [15335] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1043), 1,
      anon_sym_DOT,
    STATE(912), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1041), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
    STATE(50), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15366] = 11,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1082), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1084), 1,
      anon_sym_not,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(371), 1,
      sym__fact_annotated_list,
    STATE(415), 1,
      sym_data_property_iri,
    STATE(491), 1,
      sym__annotations,
    STATE(570), 1,
      sym_object_property_iri,
    STATE(332), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(583), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15405] = 3,
    ACTIONS(1090), 1,
      anon_sym_or,
    STATE(418), 1,
      aux_sym_description_repeat1,
    ACTIONS(529), 14,
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
  [15428] = 4,
    ACTIONS(1092), 2,
      sym__non_zero,
      sym__zero,
    STATE(414), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 7,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [15453] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1043), 1,
      anon_sym_DOT,
    STATE(912), 1,
      sym__lexial_value,
    ACTIONS(398), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1095), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
      aux_sym__digits,
      sym__digit,
    STATE(342), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15484] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(387), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1097), 13,
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
  [15507] = 8,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_inverse,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    ACTIONS(1064), 1,
      anon_sym_Annotations_COLON,
    STATE(489), 1,
      sym__annotations,
    STATE(173), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(51), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
  [15540] = 3,
    ACTIONS(1090), 1,
      anon_sym_or,
    STATE(410), 1,
      aux_sym_description_repeat1,
    ACTIONS(547), 14,
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
  [15563] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(420), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1097), 13,
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
  [15586] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(387), 2,
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
  [15609] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(424), 2,
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
  [15632] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(416), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1101), 13,
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
  [15655] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1043), 1,
      anon_sym_DOT,
    STATE(912), 1,
      sym__lexial_value,
    ACTIONS(398), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1095), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
      aux_sym__digits,
      sym__digit,
    STATE(50), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15686] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(387), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1103), 13,
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
  [15709] = 3,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    STATE(460), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(833), 13,
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
  [15731] = 3,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    STATE(426), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1107), 13,
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
  [15753] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1112), 1,
      anon_sym_not,
    STATE(258), 1,
      sym__restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15787] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1114), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15821] = 8,
    ACTIONS(1118), 1,
      anon_sym_DOT,
    STATE(854), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(822), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1116), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1120), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(483), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15853] = 8,
    ACTIONS(1122), 1,
      anon_sym_DOT,
    STATE(865), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(814), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1116), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1124), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(483), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15885] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1126), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15919] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1128), 1,
      anon_sym_not,
    STATE(388), 1,
      sym__restriction,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15953] = 8,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    ACTIONS(1066), 1,
      anon_sym_inverse,
    STATE(501), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(917), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(918), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(173), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15985] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1130), 1,
      anon_sym_not,
    STATE(115), 1,
      sym__restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16019] = 3,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(807), 13,
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
  [16041] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1132), 1,
      anon_sym_not,
    STATE(186), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16075] = 10,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1082), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1084), 1,
      anon_sym_not,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(415), 1,
      sym_data_property_iri,
    STATE(494), 1,
      sym__annotations,
    STATE(570), 1,
      sym_object_property_iri,
    STATE(354), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(583), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16111] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym__individual_2list_repeat1,
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
  [16133] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1138), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16167] = 8,
    ACTIONS(1142), 1,
      anon_sym_DOT,
    STATE(889), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(822), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1140), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1144), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(471), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16199] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    STATE(453), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1146), 13,
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
  [16221] = 1,
    ACTIONS(1150), 15,
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
  [16239] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1150), 13,
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
  [16261] = 8,
    ACTIONS(1155), 1,
      anon_sym_DOT,
    STATE(885), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(814), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1140), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1157), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(471), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16293] = 3,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1159), 13,
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
  [16315] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1164), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16349] = 1,
    ACTIONS(1166), 15,
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
  [16367] = 3,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym__object_property_2list_repeat1,
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
  [16389] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1172), 1,
      anon_sym_not,
    STATE(162), 1,
      sym__restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16423] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1174), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16457] = 8,
    ACTIONS(1178), 1,
      anon_sym_DOT,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(814), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1176), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1180), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(463), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16489] = 3,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1182), 13,
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
  [16511] = 3,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    STATE(426), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1184), 13,
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
  [16533] = 3,
    ACTIONS(1136), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1186), 13,
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
  [16555] = 2,
    ACTIONS(178), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(180), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [16575] = 1,
    ACTIONS(1188), 15,
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
  [16593] = 8,
    ACTIONS(1190), 1,
      anon_sym_DOT,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(822), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1176), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1192), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(463), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16625] = 9,
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
    STATE(52), 1,
      sym__restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16659] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1196), 1,
      anon_sym_not,
    STATE(708), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16693] = 3,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    STATE(460), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(828), 13,
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
  [16715] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(169), 1,
      sym__restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16746] = 7,
    STATE(893), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(913), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1201), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1203), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(511), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16775] = 4,
    ACTIONS(1205), 2,
      sym__non_zero,
      sym__zero,
    STATE(463), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 7,
      anon_sym__COLON,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [16798] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1064), 1,
      anon_sym_Annotations_COLON,
    STATE(265), 1,
      sym__object_property_expression_annotated_list,
    STATE(558), 1,
      sym__annotations,
    STATE(175), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16831] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16862] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(193), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16893] = 7,
    STATE(890), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(891), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1208), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1210), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(506), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16922] = 1,
    ACTIONS(1159), 14,
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
  [16939] = 7,
    STATE(892), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(913), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1208), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1212), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(506), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16968] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16999] = 4,
    ACTIONS(1214), 2,
      sym__non_zero,
      sym__zero,
    STATE(471), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [17022] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(715), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17053] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(391), 1,
      sym__restriction,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17084] = 1,
    ACTIONS(1107), 14,
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
  [17101] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(102), 1,
      sym__restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17132] = 7,
    STATE(848), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(913), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1217), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1219), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17161] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17192] = 9,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(1221), 1,
      anon_sym_Annotations_COLON,
    STATE(509), 1,
      sym__individual_2list,
    STATE(520), 1,
      sym__annotations,
    STATE(916), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17225] = 7,
    STATE(849), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(891), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1217), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1223), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17254] = 8,
    ACTIONS(814), 1,
      sym__pn_local,
    ACTIONS(1227), 1,
      anon_sym_DOT,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1225), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1229), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(497), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17285] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(674), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17316] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(1221), 1,
      anon_sym_Annotations_COLON,
    STATE(371), 1,
      sym__individual_annotated_list,
    STATE(573), 1,
      sym__annotations,
    STATE(334), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17349] = 4,
    ACTIONS(1231), 2,
      sym__non_zero,
      sym__zero,
    STATE(483), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [17372] = 8,
    ACTIONS(822), 1,
      sym__pn_local,
    ACTIONS(1234), 1,
      anon_sym_DOT,
    STATE(873), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1225), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1236), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(497), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17403] = 7,
    STATE(884), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(891), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1201), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1238), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(511), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17432] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17463] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17494] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(222), 1,
      sym__restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(923), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17525] = 6,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_inverse,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    STATE(173), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(61), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
  [17552] = 7,
    ACTIONS(422), 1,
      anon_sym_LT,
    ACTIONS(436), 1,
      sym__pn_local,
    ACTIONS(438), 1,
      sym__pname_ln,
    STATE(786), 1,
      sym_datatype,
    STATE(811), 1,
      sym_datatype_iri,
    ACTIONS(1240), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(810), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17580] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1084), 1,
      anon_sym_not,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(415), 1,
      sym_data_property_iri,
    STATE(570), 1,
      sym_object_property_iri,
    STATE(319), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(583), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17610] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1244), 1,
      sym__language_tag,
    ACTIONS(41), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1242), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17632] = 8,
    ACTIONS(1064), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1246), 1,
      anon_sym_LT,
    ACTIONS(1248), 1,
      anon_sym_inverse,
    ACTIONS(1250), 1,
      sym__pn_local,
    ACTIONS(1252), 1,
      sym__pname_ln,
    STATE(563), 1,
      sym__annotations,
    STATE(180), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17662] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1084), 1,
      anon_sym_not,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(415), 1,
      sym_data_property_iri,
    STATE(570), 1,
      sym_object_property_iri,
    STATE(357), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(583), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17692] = 7,
    ACTIONS(443), 1,
      anon_sym_LT,
    ACTIONS(457), 1,
      sym__pn_local,
    ACTIONS(459), 1,
      sym__pname_ln,
    STATE(733), 1,
      sym_datatype,
    STATE(760), 1,
      sym_datatype_iri,
    ACTIONS(1254), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(758), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17720] = 7,
    ACTIONS(404), 1,
      anon_sym_LT,
    ACTIONS(418), 1,
      sym__pn_local,
    ACTIONS(420), 1,
      sym__pname_ln,
    STATE(703), 1,
      sym_datatype_iri,
    STATE(729), 1,
      sym_datatype,
    ACTIONS(1256), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(704), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17748] = 4,
    ACTIONS(1258), 2,
      sym__non_zero,
      sym__zero,
    STATE(497), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 6,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [17770] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(1221), 1,
      anon_sym_Annotations_COLON,
    STATE(572), 1,
      sym__annotations,
    STATE(356), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17800] = 7,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(392), 1,
      sym__pn_local,
    ACTIONS(394), 1,
      sym__pname_ln,
    STATE(547), 1,
      sym_datatype,
    STATE(560), 1,
      sym_datatype_iri,
    ACTIONS(1261), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(561), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17828] = 7,
    ACTIONS(356), 1,
      anon_sym_LT,
    ACTIONS(370), 1,
      sym__pn_local,
    ACTIONS(372), 1,
      sym__pname_ln,
    STATE(642), 1,
      sym_datatype_iri,
    STATE(645), 1,
      sym_datatype,
    ACTIONS(1263), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(641), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17856] = 1,
    ACTIONS(1265), 13,
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
  [17872] = 7,
    ACTIONS(891), 1,
      sym__pn_local,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1267), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1269), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(529), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17900] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1064), 1,
      anon_sym_Annotations_COLON,
    STATE(548), 1,
      sym__annotations,
    STATE(191), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17930] = 7,
    ACTIONS(495), 1,
      anon_sym_LT,
    ACTIONS(509), 1,
      sym__pn_local,
    ACTIONS(511), 1,
      sym__pname_ln,
    STATE(725), 1,
      sym_datatype_iri,
    STATE(731), 1,
      sym_datatype,
    ACTIONS(1271), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(722), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17958] = 7,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(13), 1,
      sym_datatype,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17986] = 4,
    ACTIONS(1273), 2,
      sym__non_zero,
      sym__zero,
    STATE(506), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [18008] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(13), 1,
      sym_datatype,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18036] = 7,
    ACTIONS(913), 1,
      sym__pn_local,
    STATE(886), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1267), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1276), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(529), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [18064] = 1,
    ACTIONS(1278), 13,
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
  [18080] = 4,
    ACTIONS(1280), 2,
      sym__non_zero,
      sym__zero,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [18102] = 4,
    ACTIONS(1283), 2,
      sym__non_zero,
      sym__zero,
    STATE(511), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 6,
      anon_sym__COLON,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18124] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(408), 1,
      sym_datatype,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18152] = 4,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 4,
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
  [18173] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(103), 1,
      sym_annotation_property_iri,
    STATE(530), 1,
      sym_annotation,
    STATE(579), 1,
      sym__annotation_annotated_list,
    STATE(589), 1,
      sym__annotations,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18204] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym__annotation_annotated_list,
    STATE(96), 1,
      sym_annotation,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(591), 1,
      sym__annotations,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18235] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(107), 1,
      sym_annotation_property_iri,
    STATE(600), 1,
      sym__annotations,
    STATE(752), 1,
      sym_annotation,
    STATE(837), 1,
      sym__annotation_annotated_list,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18266] = 4,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1292), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18287] = 4,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 4,
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
  [18308] = 7,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(909), 1,
      sym__individual_list,
    STATE(834), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18335] = 7,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(501), 1,
      sym__individual_2list,
    STATE(916), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18362] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym__annotation_annotated_list,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(592), 1,
      sym__annotations,
    STATE(611), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18393] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(112), 1,
      sym_annotation_property_iri,
    STATE(594), 1,
      sym__annotations,
    STATE(677), 1,
      sym_annotation,
    STATE(823), 1,
      sym__annotation_annotated_list,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18424] = 4,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1294), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18445] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(106), 1,
      sym_annotation_property_iri,
    STATE(614), 1,
      sym__annotations,
    STATE(692), 1,
      sym_annotation,
    STATE(771), 1,
      sym__annotation_annotated_list,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18476] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(604), 1,
      sym_annotation,
    STATE(630), 1,
      sym__annotations,
    STATE(667), 1,
      sym__annotation_annotated_list,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18507] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym__annotation_annotated_list,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(325), 1,
      sym_annotation,
    STATE(602), 1,
      sym__annotations,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18538] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(318), 1,
      sym__data_property_expression_annotated_list,
    STATE(632), 1,
      sym__annotations,
    STATE(261), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(289), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18567] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(123), 1,
      sym_annotation_property_iri,
    STATE(624), 1,
      sym__annotations,
    STATE(679), 1,
      sym_annotation,
    STATE(777), 1,
      sym__annotation_annotated_list,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18598] = 4,
    ACTIONS(1299), 2,
      sym__non_zero,
      sym__zero,
    STATE(529), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(100), 5,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18619] = 4,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    STATE(513), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1302), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18640] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(442), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18664] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(38), 1,
      sym_annotation,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(603), 1,
      sym__annotations,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18692] = 2,
    ACTIONS(33), 5,
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
  [18708] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(468), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18732] = 2,
    ACTIONS(71), 5,
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
  [18748] = 5,
    ACTIONS(1306), 1,
      anon_sym_Annotations_COLON,
    STATE(178), 1,
      sym__object_property_characteristic,
    STATE(265), 1,
      sym__object_property_characteristic_annotated_list,
    STATE(636), 1,
      sym__annotations,
    ACTIONS(1308), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [18770] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(618), 1,
      sym__annotations,
    STATE(278), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(289), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18796] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(50), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18820] = 2,
    ACTIONS(29), 5,
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
  [18836] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(123), 1,
      sym_annotation_property_iri,
    STATE(621), 1,
      sym__annotations,
    STATE(739), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18864] = 6,
    ACTIONS(1246), 1,
      anon_sym_LT,
    ACTIONS(1248), 1,
      anon_sym_inverse,
    ACTIONS(1250), 1,
      sym__pn_local,
    ACTIONS(1252), 1,
      sym__pname_ln,
    STATE(207), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18888] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(448), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18912] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(438), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18936] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(311), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18960] = 2,
    ACTIONS(35), 5,
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
  [18976] = 2,
    ACTIONS(143), 5,
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
  [18992] = 2,
    ACTIONS(51), 5,
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
  [19008] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(211), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19032] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(107), 1,
      sym_annotation_property_iri,
    STATE(590), 1,
      sym__annotations,
    STATE(800), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19060] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(38), 1,
      sym_annotation,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(619), 1,
      sym__annotations,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19088] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(112), 1,
      sym_annotation_property_iri,
    STATE(593), 1,
      sym__annotations,
    STATE(740), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19116] = 6,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(442), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19140] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(106), 1,
      sym_annotation_property_iri,
    STATE(610), 1,
      sym__annotations,
    STATE(714), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19168] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(343), 1,
      sym_annotation_property_iri,
    STATE(405), 1,
      sym__annotation_property_iri_annotated_list,
    STATE(634), 1,
      sym__annotations,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19196] = 2,
    ACTIONS(69), 5,
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
  [19212] = 2,
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
  [19228] = 2,
    ACTIONS(53), 5,
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
  [19244] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(183), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19268] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(628), 1,
      sym__annotations,
    STATE(643), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19296] = 2,
    ACTIONS(49), 5,
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
  [19312] = 2,
    ACTIONS(47), 5,
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
  [19328] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(103), 1,
      sym_annotation_property_iri,
    STATE(571), 1,
      sym_annotation,
    STATE(599), 1,
      sym__annotations,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19356] = 6,
    ACTIONS(1246), 1,
      anon_sym_LT,
    ACTIONS(1248), 1,
      anon_sym_inverse,
    ACTIONS(1250), 1,
      sym__pn_local,
    ACTIONS(1252), 1,
      sym__pname_ln,
    STATE(172), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19380] = 2,
    ACTIONS(141), 5,
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
  [19396] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(38), 1,
      sym_annotation,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(596), 1,
      sym__annotations,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19424] = 2,
    ACTIONS(75), 5,
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
  [19440] = 7,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(415), 1,
      sym_data_property_iri,
    STATE(570), 1,
      sym_object_property_iri,
    STATE(340), 2,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(583), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19466] = 2,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1328), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19482] = 2,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1330), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19498] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(346), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19522] = 2,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1294), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19538] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
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
  [19562] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(303), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19586] = 4,
    ACTIONS(1306), 1,
      anon_sym_Annotations_COLON,
    STATE(194), 1,
      sym__object_property_characteristic,
    STATE(638), 1,
      sym__annotations,
    ACTIONS(1332), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19605] = 2,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(682), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19620] = 2,
    ACTIONS(1016), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(1334), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19635] = 2,
    ACTIONS(33), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(684), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19650] = 3,
    STATE(403), 1,
      sym__facet,
    ACTIONS(1336), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1338), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [19667] = 2,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1340), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19682] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1342), 1,
      sym__language_tag,
    ACTIONS(1242), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(41), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19701] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(405), 1,
      sym__iri_annotated_list,
    STATE(662), 1,
      sym__annotations,
    STATE(347), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19726] = 3,
    STATE(392), 1,
      sym__facet,
    ACTIONS(1344), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1346), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [19743] = 4,
    ACTIONS(64), 2,
      anon_sym_PLUS,
      sym__quoted_string,
    ACTIONS(517), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(673), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1348), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
  [19762] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(380), 1,
      sym_annotation_property_iri,
    STATE(639), 1,
      sym__annotations,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19787] = 2,
    ACTIONS(29), 4,
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
  [19802] = 4,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    STATE(586), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1294), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19820] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(474), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(289), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19840] = 5,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1353), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [19860] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(103), 1,
      sym_annotation_property_iri,
    STATE(518), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19882] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(107), 1,
      sym_annotation_property_iri,
    STATE(783), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19904] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(92), 1,
      sym_annotation,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19926] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(613), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19948] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(112), 1,
      sym_annotation_property_iri,
    STATE(732), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19970] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(112), 1,
      sym_annotation_property_iri,
    STATE(680), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19992] = 5,
    STATE(867), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1355), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20012] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(37), 1,
      sym_annotation,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20034] = 5,
    STATE(864), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1357), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20054] = 5,
    STATE(890), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1359), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20074] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(103), 1,
      sym_annotation_property_iri,
    STATE(546), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20096] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(107), 1,
      sym_annotation_property_iri,
    STATE(749), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20118] = 5,
    STATE(889), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1361), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20138] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(321), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20160] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(37), 1,
      sym_annotation,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20182] = 4,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    STATE(625), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1302), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20200] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1290), 1,
      anon_sym_Annotations_COLON,
    STATE(668), 1,
      sym__annotations,
    STATE(368), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20222] = 3,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20238] = 3,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20254] = 3,
    ACTIONS(1367), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(145), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20270] = 5,
    STATE(884), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1370), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20290] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(106), 1,
      sym_annotation_property_iri,
    STATE(735), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20312] = 3,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    STATE(606), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20328] = 5,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1372), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20348] = 3,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    STATE(607), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20364] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(106), 1,
      sym_annotation_property_iri,
    STATE(690), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20386] = 4,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    STATE(586), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1292), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20404] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(441), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(289), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20424] = 5,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20444] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(293), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(289), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20464] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(37), 1,
      sym_annotation,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20486] = 5,
    STATE(849), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1374), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20506] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(123), 1,
      sym_annotation_property_iri,
    STATE(741), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20528] = 5,
    STATE(854), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1376), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20548] = 5,
    STATE(873), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1378), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20568] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(123), 1,
      sym_annotation_property_iri,
    STATE(686), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20590] = 4,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    STATE(586), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1286), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(327), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20608] = 5,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(127), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20628] = 5,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1380), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20648] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(647), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20670] = 5,
    STATE(879), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1382), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20690] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(631), 1,
      sym_annotation,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20712] = 4,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1286), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(327), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20730] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(260), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(289), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20750] = 5,
    ACTIONS(1246), 1,
      anon_sym_LT,
    ACTIONS(1250), 1,
      sym__pn_local,
    ACTIONS(1252), 1,
      sym__pname_ln,
    STATE(126), 1,
      sym_object_property_iri,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20769] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(337), 1,
      sym_annotation_property_iri,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20788] = 2,
    ACTIONS(1324), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(141), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20801] = 2,
    STATE(176), 1,
      sym__object_property_characteristic,
    ACTIONS(1384), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20814] = 2,
    ACTIONS(1326), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20827] = 2,
    STATE(208), 1,
      sym__object_property_characteristic,
    ACTIONS(1386), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20840] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(381), 1,
      sym_annotation_property_iri,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20859] = 2,
    ACTIONS(1328), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20872] = 2,
    ACTIONS(1322), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20885] = 2,
    ACTIONS(1320), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20898] = 2,
    ACTIONS(1294), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20911] = 2,
    ACTIONS(1314), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(69), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20924] = 2,
    ACTIONS(1312), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20937] = 2,
    ACTIONS(1330), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20950] = 2,
    ACTIONS(1310), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20963] = 2,
    ACTIONS(1304), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20976] = 2,
    ACTIONS(1318), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20989] = 2,
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
  [21002] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(122), 1,
      sym_class_iri,
    STATE(362), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21021] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(359), 1,
      sym_annotation_property_iri,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21040] = 2,
    ACTIONS(684), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21053] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(166), 1,
      sym_object_property_iri,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21072] = 5,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    STATE(205), 1,
      sym_object_property_iri,
    STATE(189), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21091] = 5,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(186), 1,
      sym__pn_local,
    ACTIONS(188), 1,
      sym__pname_ln,
    STATE(126), 1,
      sym_object_property_iri,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21110] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(257), 1,
      sym_data_property_iri,
    STATE(289), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21129] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(126), 1,
      sym_object_property_iri,
    STATE(125), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21148] = 2,
    ACTIONS(682), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21161] = 2,
    ACTIONS(671), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21174] = 4,
    ACTIONS(1390), 1,
      anon_sym_Self,
    ACTIONS(1394), 1,
      anon_sym_value,
    ACTIONS(1388), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1392), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21190] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(341), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21206] = 4,
    ACTIONS(1390), 1,
      anon_sym_Self,
    ACTIONS(1400), 1,
      anon_sym_value,
    ACTIONS(1396), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1398), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21222] = 4,
    ACTIONS(1390), 1,
      anon_sym_Self,
    ACTIONS(1394), 1,
      anon_sym_value,
    ACTIONS(1402), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1404), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21238] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1406), 1,
      sym__language_tag,
    ACTIONS(1242), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21254] = 4,
    ACTIONS(1390), 1,
      anon_sym_Self,
    ACTIONS(1394), 1,
      anon_sym_value,
    ACTIONS(1408), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1410), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21270] = 2,
    ACTIONS(1340), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21282] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(377), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21298] = 4,
    ACTIONS(1390), 1,
      anon_sym_Self,
    ACTIONS(1394), 1,
      anon_sym_value,
    ACTIONS(1412), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1414), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21314] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1416), 1,
      sym__language_tag,
    ACTIONS(1242), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21330] = 2,
    ACTIONS(66), 1,
      anon_sym_value,
    ACTIONS(64), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21342] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1418), 1,
      sym__language_tag,
    ACTIONS(1242), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21358] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(447), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21374] = 4,
    ACTIONS(1390), 1,
      anon_sym_Self,
    ACTIONS(1394), 1,
      anon_sym_value,
    ACTIONS(1420), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1422), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21390] = 4,
    ACTIONS(1424), 1,
      anon_sym_COMMA,
    STATE(683), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym_not,
      sym__pn_local,
  [21405] = 3,
    ACTIONS(1426), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1428), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(693), 2,
      aux_sym__digits,
      sym__digit,
  [21418] = 4,
    ACTIONS(1424), 1,
      anon_sym_COMMA,
    STATE(681), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym_not,
      sym__pn_local,
  [21433] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1242), 1,
      sym__pn_local,
    ACTIONS(1430), 1,
      sym__language_tag,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21448] = 4,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(684), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21463] = 4,
    ACTIONS(1424), 1,
      anon_sym_COMMA,
    STATE(675), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym_not,
      sym__pn_local,
  [21478] = 4,
    ACTIONS(1424), 1,
      anon_sym_COMMA,
    STATE(683), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym_not,
      sym__pn_local,
  [21493] = 4,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21508] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(683), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym_not,
      sym__pn_local,
  [21523] = 4,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21538] = 4,
    ACTIONS(1437), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21553] = 4,
    ACTIONS(1432), 1,
      anon_sym_COMMA,
    STATE(682), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21568] = 3,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1440), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [21581] = 4,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21596] = 4,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21611] = 4,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    STATE(689), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21626] = 4,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1286), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21641] = 4,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21656] = 3,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1447), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [21669] = 3,
    ACTIONS(1451), 1,
      anon_sym_SLASH,
    STATE(742), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1449), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [21681] = 3,
    ACTIONS(1453), 1,
      anon_sym_and,
    STATE(734), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(402), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21693] = 2,
    ACTIONS(1304), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21703] = 2,
    ACTIONS(1318), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21713] = 2,
    ACTIONS(1316), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21723] = 2,
    ACTIONS(671), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21733] = 2,
    ACTIONS(682), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21743] = 3,
    ACTIONS(1457), 1,
      anon_sym_DOT,
    ACTIONS(1455), 2,
      sym__non_zero,
      sym__zero,
    STATE(376), 2,
      aux_sym__digits,
      sym__digit,
  [21755] = 2,
    ACTIONS(684), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21765] = 2,
    ACTIONS(1320), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21775] = 2,
    ACTIONS(1322), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21785] = 3,
    ACTIONS(1461), 1,
      anon_sym_DOT,
    ACTIONS(1459), 2,
      sym__non_zero,
      sym__zero,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
  [21797] = 2,
    ACTIONS(1324), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21807] = 2,
    ACTIONS(1326), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21817] = 3,
    ACTIONS(1453), 1,
      anon_sym_and,
    STATE(717), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(465), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21829] = 2,
    ACTIONS(1328), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21839] = 2,
    ACTIONS(1330), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21849] = 3,
    ACTIONS(1463), 1,
      anon_sym_and,
    STATE(711), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(252), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21861] = 3,
    ACTIONS(1466), 1,
      anon_sym_and,
    STATE(711), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(487), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21873] = 3,
    ACTIONS(1470), 1,
      anon_sym_DOT,
    ACTIONS(1468), 2,
      sym__non_zero,
      sym__zero,
    STATE(440), 2,
      aux_sym__digits,
      sym__digit,
  [21885] = 2,
    ACTIONS(1294), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21895] = 3,
    ACTIONS(1453), 1,
      anon_sym_and,
    STATE(695), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(374), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21907] = 3,
    ACTIONS(1474), 1,
      anon_sym_DOT,
    ACTIONS(1472), 2,
      sym__non_zero,
      sym__zero,
    STATE(366), 2,
      aux_sym__digits,
      sym__digit,
  [21919] = 3,
    ACTIONS(1453), 1,
      anon_sym_and,
    STATE(734), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(374), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21931] = 2,
    ACTIONS(1314), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21941] = 2,
    ACTIONS(1330), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21951] = 3,
    ACTIONS(1478), 1,
      anon_sym_DOT,
    ACTIONS(1476), 2,
      sym__non_zero,
      sym__zero,
    STATE(429), 2,
      aux_sym__digits,
      sym__digit,
  [21963] = 2,
    ACTIONS(671), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21973] = 2,
    ACTIONS(1322), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21983] = 2,
    ACTIONS(682), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21993] = 2,
    ACTIONS(684), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22003] = 2,
    ACTIONS(1320), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22013] = 2,
    ACTIONS(1316), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22023] = 2,
    ACTIONS(1318), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22033] = 2,
    ACTIONS(1324), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22043] = 2,
    ACTIONS(1312), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22053] = 2,
    ACTIONS(1304), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22063] = 2,
    ACTIONS(1312), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22073] = 2,
    ACTIONS(1310), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22083] = 2,
    ACTIONS(1312), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22093] = 3,
    ACTIONS(1480), 1,
      anon_sym_and,
    STATE(734), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(212), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22105] = 2,
    ACTIONS(1310), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22115] = 3,
    ACTIONS(1457), 1,
      anon_sym_DOT,
    ACTIONS(1483), 2,
      sym__non_zero,
      sym__zero,
    STATE(23), 2,
      aux_sym__digits,
      sym__digit,
  [22127] = 2,
    ACTIONS(1314), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22137] = 2,
    ACTIONS(1314), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22147] = 2,
    ACTIONS(1294), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22157] = 2,
    ACTIONS(1294), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22167] = 2,
    ACTIONS(1310), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22177] = 3,
    ACTIONS(1487), 1,
      anon_sym_SLASH,
    STATE(742), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1485), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [22189] = 2,
    ACTIONS(1304), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22199] = 2,
    ACTIONS(1318), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22209] = 2,
    ACTIONS(1330), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22219] = 2,
    ACTIONS(1328), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22229] = 2,
    ACTIONS(1316), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22239] = 2,
    ACTIONS(1326), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22249] = 4,
    ACTIONS(1286), 1,
      sym__pn_local,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22263] = 3,
    ACTIONS(1466), 1,
      anon_sym_and,
    STATE(712), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(491), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22275] = 4,
    ACTIONS(1292), 1,
      sym__pn_local,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(759), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22289] = 4,
    ACTIONS(1302), 1,
      sym__pn_local,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(764), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22303] = 2,
    ACTIONS(1324), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22313] = 2,
    ACTIONS(1326), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22323] = 3,
    ACTIONS(1494), 1,
      anon_sym_DOT,
    ACTIONS(1492), 2,
      sym__non_zero,
      sym__zero,
    STATE(272), 2,
      aux_sym__digits,
      sym__digit,
  [22335] = 3,
    ACTIONS(1457), 1,
      anon_sym_DOT,
    ACTIONS(1496), 2,
      sym__non_zero,
      sym__zero,
    STATE(71), 2,
      aux_sym__digits,
      sym__digit,
  [22347] = 2,
    ACTIONS(671), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22357] = 2,
    ACTIONS(1322), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22367] = 4,
    ACTIONS(1294), 1,
      sym__pn_local,
    ACTIONS(1498), 1,
      anon_sym_COMMA,
    STATE(759), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22381] = 2,
    ACTIONS(1320), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22391] = 2,
    ACTIONS(1328), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22401] = 4,
    ACTIONS(3), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(5), 1,
      anon_sym_Ontology_COLON,
    STATE(932), 1,
      sym_ontology,
    STATE(775), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [22415] = 3,
    ACTIONS(1503), 1,
      anon_sym_DOT,
    ACTIONS(1501), 2,
      sym__non_zero,
      sym__zero,
    STATE(484), 2,
      aux_sym__digits,
      sym__digit,
  [22427] = 4,
    ACTIONS(1286), 1,
      sym__pn_local,
    ACTIONS(1490), 1,
      anon_sym_COMMA,
    STATE(759), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(327), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22441] = 2,
    ACTIONS(1505), 1,
      anon_sym_that,
    ACTIONS(461), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22451] = 2,
    ACTIONS(682), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22461] = 2,
    ACTIONS(684), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22471] = 2,
    ACTIONS(682), 1,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22480] = 2,
    ACTIONS(1507), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
  [22489] = 2,
    ACTIONS(1316), 1,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22498] = 2,
    ACTIONS(152), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1340), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22507] = 4,
    ACTIONS(1509), 1,
      sym__non_zero,
    ACTIONS(1511), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(64), 1,
      sym__positive_integer,
  [22520] = 2,
    ACTIONS(1318), 1,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22529] = 4,
    ACTIONS(1513), 1,
      sym__non_zero,
    ACTIONS(1515), 1,
      sym__zero,
    STATE(9), 1,
      sym_non_negative_integer,
    STATE(95), 1,
      sym__positive_integer,
  [22542] = 3,
    ACTIONS(1517), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(1520), 1,
      anon_sym_Ontology_COLON,
    STATE(775), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [22553] = 2,
    ACTIONS(671), 1,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22562] = 2,
    ACTIONS(152), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1340), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22571] = 2,
    ACTIONS(684), 1,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22580] = 2,
    ACTIONS(1522), 2,
      sym__non_zero,
      sym__zero,
    STATE(320), 2,
      aux_sym__digits,
      sym__digit,
  [22589] = 2,
    ACTIONS(1524), 2,
      sym__non_zero,
      sym__zero,
    STATE(328), 2,
      aux_sym__digits,
      sym__digit,
  [22598] = 2,
    ACTIONS(1304), 1,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22607] = 3,
    ACTIONS(1526), 1,
      anon_sym_or,
    STATE(787), 1,
      aux_sym_description_repeat1,
    ACTIONS(529), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22618] = 2,
    ACTIONS(1310), 1,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22627] = 2,
    ACTIONS(1528), 2,
      sym__non_zero,
      sym__zero,
    STATE(617), 2,
      aux_sym__digits,
      sym__digit,
  [22636] = 4,
    ACTIONS(1530), 1,
      sym__non_zero,
    ACTIONS(1532), 1,
      sym__zero,
    STATE(67), 1,
      sym_non_negative_integer,
    STATE(455), 1,
      sym__positive_integer,
  [22649] = 2,
    ACTIONS(1312), 1,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22658] = 3,
    ACTIONS(1526), 1,
      anon_sym_or,
    STATE(814), 1,
      aux_sym_description_repeat1,
    ACTIONS(547), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22669] = 4,
    ACTIONS(1534), 1,
      sym__iunreserved,
    STATE(872), 1,
      sym__ihost,
    STATE(874), 1,
      sym__iauthority,
    STATE(924), 1,
      sym__iuserinfo,
  [22682] = 2,
    ACTIONS(1536), 2,
      sym__non_zero,
      sym__zero,
    STATE(626), 2,
      aux_sym__digits,
      sym__digit,
  [22691] = 2,
    ACTIONS(1538), 2,
      sym__non_zero,
      sym__zero,
    STATE(400), 2,
      aux_sym__digits,
      sym__digit,
  [22700] = 2,
    ACTIONS(1540), 2,
      sym__non_zero,
      sym__zero,
    STATE(393), 2,
      aux_sym__digits,
      sym__digit,
  [22709] = 2,
    ACTIONS(1542), 2,
      sym__non_zero,
      sym__zero,
    STATE(399), 2,
      aux_sym__digits,
      sym__digit,
  [22718] = 2,
    ACTIONS(1544), 2,
      sym__non_zero,
      sym__zero,
    STATE(404), 2,
      aux_sym__digits,
      sym__digit,
  [22727] = 2,
    ACTIONS(1314), 1,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22736] = 2,
    ACTIONS(1546), 2,
      sym__non_zero,
      sym__zero,
    STATE(598), 2,
      aux_sym__digits,
      sym__digit,
  [22745] = 2,
    ACTIONS(1548), 2,
      sym__non_zero,
      sym__zero,
    STATE(508), 2,
      aux_sym__digits,
      sym__digit,
  [22754] = 2,
    ACTIONS(1550), 2,
      sym__non_zero,
      sym__zero,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
  [22763] = 2,
    ACTIONS(1552), 2,
      sym__non_zero,
      sym__zero,
    STATE(469), 2,
      aux_sym__digits,
      sym__digit,
  [22772] = 2,
    ACTIONS(1554), 2,
      sym__non_zero,
      sym__zero,
    STATE(601), 2,
      aux_sym__digits,
      sym__digit,
  [22781] = 2,
    ACTIONS(1294), 1,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22790] = 2,
    ACTIONS(1556), 2,
      sym__non_zero,
      sym__zero,
    STATE(595), 2,
      aux_sym__digits,
      sym__digit,
  [22799] = 2,
    ACTIONS(1558), 2,
      sym__non_zero,
      sym__zero,
    STATE(597), 2,
      aux_sym__digits,
      sym__digit,
  [22808] = 4,
    ACTIONS(1560), 1,
      sym__non_zero,
    ACTIONS(1562), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(43), 1,
      sym__positive_integer,
  [22821] = 2,
    ACTIONS(1330), 1,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22830] = 2,
    ACTIONS(1564), 2,
      sym__non_zero,
      sym__zero,
    STATE(502), 2,
      aux_sym__digits,
      sym__digit,
  [22839] = 2,
    ACTIONS(1328), 1,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22848] = 2,
    ACTIONS(1326), 1,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22857] = 2,
    ACTIONS(1566), 2,
      sym__non_zero,
      sym__zero,
    STATE(623), 2,
      aux_sym__digits,
      sym__digit,
  [22866] = 2,
    ACTIONS(1324), 1,
      sym__pn_local,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22875] = 2,
    ACTIONS(1322), 1,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22884] = 2,
    ACTIONS(1320), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22893] = 2,
    ACTIONS(1568), 2,
      sym__non_zero,
      sym__zero,
    STATE(588), 2,
      aux_sym__digits,
      sym__digit,
  [22902] = 2,
    ACTIONS(1570), 2,
      sym__non_zero,
      sym__zero,
    STATE(609), 2,
      aux_sym__digits,
      sym__digit,
  [22911] = 3,
    ACTIONS(1572), 1,
      anon_sym_or,
    STATE(814), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22922] = 2,
    ACTIONS(1575), 2,
      sym__non_zero,
      sym__zero,
    STATE(612), 2,
      aux_sym__digits,
      sym__digit,
  [22931] = 2,
    ACTIONS(1577), 2,
      sym__non_zero,
      sym__zero,
    STATE(479), 2,
      aux_sym__digits,
      sym__digit,
  [22940] = 2,
    ACTIONS(1579), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [22949] = 2,
    ACTIONS(1581), 2,
      sym__non_zero,
      sym__zero,
    STATE(687), 2,
      aux_sym__digits,
      sym__digit,
  [22958] = 2,
    ACTIONS(1583), 2,
      sym__non_zero,
      sym__zero,
    STATE(476), 2,
      aux_sym__digits,
      sym__digit,
  [22967] = 2,
    ACTIONS(1585), 2,
      sym__non_zero,
      sym__zero,
    STATE(620), 2,
      aux_sym__digits,
      sym__digit,
  [22976] = 4,
    ACTIONS(1587), 1,
      sym__non_zero,
    ACTIONS(1589), 1,
      sym__zero,
    STATE(3), 1,
      sym_non_negative_integer,
    STATE(49), 1,
      sym__positive_integer,
  [22989] = 2,
    ACTIONS(1591), 2,
      sym__non_zero,
      sym__zero,
    STATE(622), 2,
      aux_sym__digits,
      sym__digit,
  [22998] = 2,
    ACTIONS(152), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1340), 2,
      anon_sym_not,
      sym__pn_local,
  [23007] = 2,
    ACTIONS(1593), 2,
      sym__non_zero,
      sym__zero,
    STATE(627), 2,
      aux_sym__digits,
      sym__digit,
  [23016] = 2,
    ACTIONS(1595), 2,
      sym__non_zero,
      sym__zero,
    STATE(79), 2,
      aux_sym__digits,
      sym__digit,
  [23025] = 2,
    ACTIONS(1597), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      aux_sym__digits,
      sym__digit,
  [23034] = 2,
    ACTIONS(1599), 2,
      sym__non_zero,
      sym__zero,
    STATE(485), 2,
      aux_sym__digits,
      sym__digit,
  [23043] = 2,
    ACTIONS(1601), 2,
      sym__non_zero,
      sym__zero,
    STATE(462), 2,
      aux_sym__digits,
      sym__digit,
  [23052] = 1,
    ACTIONS(1485), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [23059] = 4,
    ACTIONS(1603), 1,
      sym__non_zero,
    ACTIONS(1605), 1,
      sym__zero,
    STATE(8), 1,
      sym_non_negative_integer,
    STATE(68), 1,
      sym__positive_integer,
  [23072] = 2,
    ACTIONS(1607), 2,
      sym__non_zero,
      sym__zero,
    STATE(629), 2,
      aux_sym__digits,
      sym__digit,
  [23081] = 3,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    ACTIONS(1611), 1,
      anon_sym_RBRACK,
    STATE(839), 1,
      aux_sym_datatype_restriction_repeat1,
  [23091] = 3,
    ACTIONS(1306), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1613), 1,
      anon_sym_Functional,
    STATE(919), 1,
      sym__annotations,
  [23101] = 3,
    ACTIONS(1615), 1,
      anon_sym_RBRACE,
    ACTIONS(1617), 1,
      anon_sym_COMMA,
    STATE(836), 1,
      aux_sym__individual_2list_repeat1,
  [23111] = 3,
    ACTIONS(1619), 1,
      anon_sym_GT,
    ACTIONS(1621), 1,
      sym__iquery,
    ACTIONS(1623), 1,
      sym__ifragment,
  [23121] = 3,
    ACTIONS(1617), 1,
      anon_sym_COMMA,
    ACTIONS(1625), 1,
      anon_sym_RBRACE,
    STATE(844), 1,
      aux_sym__individual_2list_repeat1,
  [23131] = 2,
    ACTIONS(1340), 1,
      sym__pn_local,
    ACTIONS(152), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23139] = 2,
    ACTIONS(1629), 1,
      anon_sym_AT,
    ACTIONS(1627), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [23147] = 3,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    ACTIONS(1631), 1,
      anon_sym_RBRACK,
    STATE(841), 1,
      aux_sym_datatype_restriction_repeat1,
  [23157] = 3,
    ACTIONS(1633), 1,
      anon_sym_RBRACE,
    ACTIONS(1635), 1,
      anon_sym_COMMA,
    STATE(840), 1,
      aux_sym__literal_list_repeat1,
  [23167] = 3,
    ACTIONS(1638), 1,
      anon_sym_COMMA,
    ACTIONS(1641), 1,
      anon_sym_RBRACK,
    STATE(841), 1,
      aux_sym_datatype_restriction_repeat1,
  [23177] = 3,
    ACTIONS(1643), 1,
      anon_sym_RBRACE,
    ACTIONS(1645), 1,
      anon_sym_COMMA,
    STATE(840), 1,
      aux_sym__literal_list_repeat1,
  [23187] = 3,
    ACTIONS(1645), 1,
      anon_sym_COMMA,
    ACTIONS(1647), 1,
      anon_sym_RBRACE,
    STATE(842), 1,
      aux_sym__literal_list_repeat1,
  [23197] = 3,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    ACTIONS(1649), 1,
      anon_sym_COMMA,
    STATE(844), 1,
      aux_sym__individual_2list_repeat1,
  [23207] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(899), 1,
      sym__iri_rfc3987,
  [23214] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(922), 1,
      sym__iri_rfc3987,
  [23221] = 2,
    ACTIONS(1654), 1,
      anon_sym_COLON,
    ACTIONS(1656), 1,
      anon_sym_SLASH,
  [23228] = 1,
    ACTIONS(1658), 2,
      anon_sym_f,
      anon_sym_F,
  [23233] = 1,
    ACTIONS(1660), 2,
      anon_sym_f,
      anon_sym_F,
  [23238] = 1,
    ACTIONS(104), 2,
      anon_sym_f,
      anon_sym_F,
  [23243] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(861), 1,
      sym_full_iri,
  [23250] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(928), 1,
      sym__iri_rfc3987,
  [23257] = 2,
    ACTIONS(1662), 1,
      sym__iunreserved,
    STATE(847), 1,
      sym__ihost,
  [23264] = 1,
    ACTIONS(1374), 2,
      anon_sym_f,
      anon_sym_F,
  [23269] = 2,
    ACTIONS(1664), 1,
      sym__iunreserved,
    STATE(829), 1,
      sym__isegment,
  [23276] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(897), 1,
      sym__iri_rfc3987,
  [23283] = 1,
    ACTIONS(1378), 2,
      anon_sym_f,
      anon_sym_F,
  [23288] = 1,
    ACTIONS(1666), 2,
      anon_sym_f,
      anon_sym_F,
  [23293] = 1,
    ACTIONS(1633), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [23298] = 1,
    ACTIONS(1357), 2,
      anon_sym_f,
      anon_sym_F,
  [23303] = 1,
    ACTIONS(1668), 2,
      anon_sym_Prefix_COLON,
      anon_sym_Ontology_COLON,
  [23308] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(901), 1,
      sym__iri_rfc3987,
  [23315] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(898), 1,
      sym__iri_rfc3987,
  [23322] = 1,
    ACTIONS(1355), 2,
      anon_sym_f,
      anon_sym_F,
  [23327] = 1,
    ACTIONS(1376), 2,
      anon_sym_f,
      anon_sym_F,
  [23332] = 1,
    ACTIONS(127), 2,
      anon_sym_f,
      anon_sym_F,
  [23337] = 1,
    ACTIONS(1670), 2,
      anon_sym_f,
      anon_sym_F,
  [23342] = 1,
    ACTIONS(1672), 2,
      anon_sym_f,
      anon_sym_F,
  [23347] = 2,
    ACTIONS(1674), 1,
      anon_sym_GT,
    ACTIONS(1676), 1,
      sym__ifragment,
  [23354] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(903), 1,
      sym__iri_rfc3987,
  [23361] = 1,
    ACTIONS(1678), 2,
      anon_sym_f,
      anon_sym_F,
  [23366] = 2,
    ACTIONS(1680), 1,
      anon_sym_COLON,
    ACTIONS(1682), 1,
      anon_sym_SLASH,
  [23373] = 1,
    ACTIONS(1353), 2,
      anon_sym_f,
      anon_sym_F,
  [23378] = 2,
    ACTIONS(1451), 1,
      anon_sym_SLASH,
    STATE(694), 1,
      aux_sym__ipath_abempty,
  [23385] = 1,
    ACTIONS(1370), 2,
      anon_sym_f,
      anon_sym_F,
  [23390] = 1,
    ACTIONS(1684), 2,
      anon_sym_f,
      anon_sym_F,
  [23395] = 1,
    ACTIONS(1686), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [23400] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(906), 1,
      sym__iri_rfc3987,
  [23407] = 1,
    ACTIONS(1380), 2,
      anon_sym_f,
      anon_sym_F,
  [23412] = 1,
    ACTIONS(1688), 2,
      anon_sym_f,
      anon_sym_F,
  [23417] = 1,
    ACTIONS(1382), 2,
      anon_sym_f,
      anon_sym_F,
  [23422] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(937), 1,
      sym__iri_rfc3987,
  [23429] = 2,
    ACTIONS(1690), 1,
      anon_sym_SLASH_SLASH,
    STATE(835), 1,
      sym__ihier_part,
  [23436] = 1,
    ACTIONS(1692), 2,
      anon_sym_f,
      anon_sym_F,
  [23441] = 1,
    ACTIONS(1361), 2,
      anon_sym_f,
      anon_sym_F,
  [23446] = 1,
    ACTIONS(1694), 2,
      anon_sym_f,
      anon_sym_F,
  [23451] = 1,
    ACTIONS(83), 2,
      anon_sym_f,
      anon_sym_F,
  [23456] = 1,
    ACTIONS(1372), 2,
      anon_sym_f,
      anon_sym_F,
  [23461] = 1,
    ACTIONS(1359), 2,
      anon_sym_f,
      anon_sym_F,
  [23466] = 1,
    ACTIONS(1696), 2,
      anon_sym_f,
      anon_sym_F,
  [23471] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(920), 1,
      sym__iri_rfc3987,
  [23478] = 1,
    ACTIONS(1698), 2,
      anon_sym_f,
      anon_sym_F,
  [23483] = 1,
    ACTIONS(1700), 2,
      anon_sym_f,
      anon_sym_F,
  [23488] = 2,
    ACTIONS(1652), 1,
      sym__scheme,
    STATE(904), 1,
      sym__iri_rfc3987,
  [23495] = 1,
    ACTIONS(1702), 1,
      anon_sym_COLON,
  [23499] = 1,
    ACTIONS(1704), 1,
      anon_sym_GT,
  [23503] = 1,
    ACTIONS(1706), 1,
      anon_sym_GT,
  [23507] = 1,
    ACTIONS(1708), 1,
      anon_sym_GT,
  [23511] = 1,
    ACTIONS(1710), 1,
      anon_sym_GT,
  [23515] = 1,
    ACTIONS(1712), 1,
      anon_sym_CARET_CARET,
  [23519] = 1,
    ACTIONS(1714), 1,
      anon_sym_GT,
  [23523] = 1,
    ACTIONS(1716), 1,
      sym__pn_local,
  [23527] = 1,
    ACTIONS(1718), 1,
      anon_sym_GT,
  [23531] = 1,
    ACTIONS(1720), 1,
      anon_sym_GT,
  [23535] = 1,
    ACTIONS(1722), 1,
      sym_prefix_name,
  [23539] = 1,
    ACTIONS(1724), 1,
      anon_sym_GT,
  [23543] = 1,
    ACTIONS(1726), 1,
      anon_sym_CARET_CARET,
  [23547] = 1,
    ACTIONS(1728), 1,
      anon_sym_RPAREN,
  [23551] = 1,
    ACTIONS(1728), 1,
      anon_sym_RBRACE,
  [23555] = 1,
    ACTIONS(1730), 1,
      anon_sym_CARET_CARET,
  [23559] = 1,
    ACTIONS(1732), 1,
      sym__pn_local,
  [23563] = 1,
    ACTIONS(1734), 1,
      anon_sym_CARET_CARET,
  [23567] = 1,
    ACTIONS(1736), 1,
      sym__pn_local,
  [23571] = 1,
    ACTIONS(1738), 1,
      anon_sym_SLASH,
  [23575] = 1,
    ACTIONS(1740), 1,
      anon_sym_CARET_CARET,
  [23579] = 1,
    ACTIONS(1742), 1,
      anon_sym_COMMA,
  [23583] = 1,
    ACTIONS(1744), 1,
      anon_sym_COMMA,
  [23587] = 1,
    ACTIONS(1746), 1,
      anon_sym_COMMA,
  [23591] = 1,
    ACTIONS(1748), 1,
      anon_sym_Functional,
  [23595] = 1,
    ACTIONS(1750), 1,
      anon_sym_GT,
  [23599] = 1,
    ACTIONS(1752), 1,
      anon_sym_COMMA,
  [23603] = 1,
    ACTIONS(1754), 1,
      anon_sym_GT,
  [23607] = 1,
    ACTIONS(1756), 1,
      anon_sym_value,
  [23611] = 1,
    ACTIONS(1758), 1,
      anon_sym_AT,
  [23615] = 1,
    ACTIONS(1674), 1,
      anon_sym_GT,
  [23619] = 1,
    ACTIONS(1760), 1,
      sym__pn_local,
  [23623] = 1,
    ACTIONS(1762), 1,
      sym__port,
  [23627] = 1,
    ACTIONS(1764), 1,
      anon_sym_GT,
  [23631] = 1,
    ACTIONS(1766), 1,
      anon_sym_RBRACE,
  [23635] = 1,
    ACTIONS(1766), 1,
      anon_sym_RPAREN,
  [23639] = 1,
    ACTIONS(1768), 1,
      sym__pn_local,
  [23643] = 1,
    ACTIONS(1770), 1,
      ts_builtin_sym_end,
  [23647] = 1,
    ACTIONS(1772), 1,
      anon_sym_CARET_CARET,
  [23651] = 1,
    ACTIONS(1774), 1,
      anon_sym_CARET_CARET,
  [23655] = 1,
    ACTIONS(1776), 1,
      anon_sym_CARET_CARET,
  [23659] = 1,
    ACTIONS(1778), 1,
      sym__pn_local,
  [23663] = 1,
    ACTIONS(1780), 1,
      anon_sym_GT,
  [23667] = 1,
    ACTIONS(1782), 1,
      anon_sym_COMMA,
  [23671] = 1,
    ACTIONS(1656), 1,
      anon_sym_SLASH,
  [23675] = 1,
    ACTIONS(1784), 1,
      sym__port,
  [23679] = 1,
    ACTIONS(1786), 1,
      sym__pn_local,
  [23683] = 1,
    ACTIONS(1788), 1,
      ts_builtin_sym_end,
  [23687] = 1,
    ACTIONS(1790), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 227,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 364,
  [SMALL_STATE(8)] = 417,
  [SMALL_STATE(9)] = 500,
  [SMALL_STATE(10)] = 578,
  [SMALL_STATE(11)] = 629,
  [SMALL_STATE(12)] = 675,
  [SMALL_STATE(13)] = 721,
  [SMALL_STATE(14)] = 766,
  [SMALL_STATE(15)] = 811,
  [SMALL_STATE(16)] = 856,
  [SMALL_STATE(17)] = 901,
  [SMALL_STATE(18)] = 954,
  [SMALL_STATE(19)] = 999,
  [SMALL_STATE(20)] = 1044,
  [SMALL_STATE(21)] = 1089,
  [SMALL_STATE(22)] = 1133,
  [SMALL_STATE(23)] = 1181,
  [SMALL_STATE(24)] = 1239,
  [SMALL_STATE(25)] = 1297,
  [SMALL_STATE(26)] = 1346,
  [SMALL_STATE(27)] = 1401,
  [SMALL_STATE(28)] = 1450,
  [SMALL_STATE(29)] = 1499,
  [SMALL_STATE(30)] = 1548,
  [SMALL_STATE(31)] = 1603,
  [SMALL_STATE(32)] = 1650,
  [SMALL_STATE(33)] = 1697,
  [SMALL_STATE(34)] = 1744,
  [SMALL_STATE(35)] = 1790,
  [SMALL_STATE(36)] = 1836,
  [SMALL_STATE(37)] = 1876,
  [SMALL_STATE(38)] = 1916,
  [SMALL_STATE(39)] = 1956,
  [SMALL_STATE(40)] = 2002,
  [SMALL_STATE(41)] = 2047,
  [SMALL_STATE(42)] = 2086,
  [SMALL_STATE(43)] = 2163,
  [SMALL_STATE(44)] = 2204,
  [SMALL_STATE(45)] = 2281,
  [SMALL_STATE(46)] = 2326,
  [SMALL_STATE(47)] = 2371,
  [SMALL_STATE(48)] = 2408,
  [SMALL_STATE(49)] = 2447,
  [SMALL_STATE(50)] = 2486,
  [SMALL_STATE(51)] = 2522,
  [SMALL_STATE(52)] = 2572,
  [SMALL_STATE(53)] = 2608,
  [SMALL_STATE(54)] = 2644,
  [SMALL_STATE(55)] = 2680,
  [SMALL_STATE(56)] = 2716,
  [SMALL_STATE(57)] = 2752,
  [SMALL_STATE(58)] = 2788,
  [SMALL_STATE(59)] = 2824,
  [SMALL_STATE(60)] = 2860,
  [SMALL_STATE(61)] = 2910,
  [SMALL_STATE(62)] = 2960,
  [SMALL_STATE(63)] = 2996,
  [SMALL_STATE(64)] = 3070,
  [SMALL_STATE(65)] = 3108,
  [SMALL_STATE(66)] = 3144,
  [SMALL_STATE(67)] = 3180,
  [SMALL_STATE(68)] = 3246,
  [SMALL_STATE(69)] = 3283,
  [SMALL_STATE(70)] = 3318,
  [SMALL_STATE(71)] = 3368,
  [SMALL_STATE(72)] = 3418,
  [SMALL_STATE(73)] = 3458,
  [SMALL_STATE(74)] = 3498,
  [SMALL_STATE(75)] = 3538,
  [SMALL_STATE(76)] = 3577,
  [SMALL_STATE(77)] = 3610,
  [SMALL_STATE(78)] = 3657,
  [SMALL_STATE(79)] = 3690,
  [SMALL_STATE(80)] = 3737,
  [SMALL_STATE(81)] = 3795,
  [SMALL_STATE(82)] = 3857,
  [SMALL_STATE(83)] = 3915,
  [SMALL_STATE(84)] = 3973,
  [SMALL_STATE(85)] = 4031,
  [SMALL_STATE(86)] = 4089,
  [SMALL_STATE(87)] = 4147,
  [SMALL_STATE(88)] = 4206,
  [SMALL_STATE(89)] = 4265,
  [SMALL_STATE(90)] = 4324,
  [SMALL_STATE(91)] = 4383,
  [SMALL_STATE(92)] = 4417,
  [SMALL_STATE(93)] = 4451,
  [SMALL_STATE(94)] = 4485,
  [SMALL_STATE(95)] = 4519,
  [SMALL_STATE(96)] = 4551,
  [SMALL_STATE(97)] = 4585,
  [SMALL_STATE(98)] = 4636,
  [SMALL_STATE(99)] = 4669,
  [SMALL_STATE(100)] = 4720,
  [SMALL_STATE(101)] = 4763,
  [SMALL_STATE(102)] = 4814,
  [SMALL_STATE(103)] = 4847,
  [SMALL_STATE(104)] = 4898,
  [SMALL_STATE(105)] = 4949,
  [SMALL_STATE(106)] = 4982,
  [SMALL_STATE(107)] = 5033,
  [SMALL_STATE(108)] = 5084,
  [SMALL_STATE(109)] = 5139,
  [SMALL_STATE(110)] = 5194,
  [SMALL_STATE(111)] = 5227,
  [SMALL_STATE(112)] = 5260,
  [SMALL_STATE(113)] = 5311,
  [SMALL_STATE(114)] = 5342,
  [SMALL_STATE(115)] = 5397,
  [SMALL_STATE(116)] = 5430,
  [SMALL_STATE(117)] = 5473,
  [SMALL_STATE(118)] = 5528,
  [SMALL_STATE(119)] = 5583,
  [SMALL_STATE(120)] = 5638,
  [SMALL_STATE(121)] = 5671,
  [SMALL_STATE(122)] = 5704,
  [SMALL_STATE(123)] = 5747,
  [SMALL_STATE(124)] = 5798,
  [SMALL_STATE(125)] = 5830,
  [SMALL_STATE(126)] = 5858,
  [SMALL_STATE(127)] = 5886,
  [SMALL_STATE(128)] = 5946,
  [SMALL_STATE(129)] = 5978,
  [SMALL_STATE(130)] = 6038,
  [SMALL_STATE(131)] = 6070,
  [SMALL_STATE(132)] = 6102,
  [SMALL_STATE(133)] = 6162,
  [SMALL_STATE(134)] = 6194,
  [SMALL_STATE(135)] = 6226,
  [SMALL_STATE(136)] = 6278,
  [SMALL_STATE(137)] = 6330,
  [SMALL_STATE(138)] = 6382,
  [SMALL_STATE(139)] = 6442,
  [SMALL_STATE(140)] = 6502,
  [SMALL_STATE(141)] = 6562,
  [SMALL_STATE(142)] = 6622,
  [SMALL_STATE(143)] = 6674,
  [SMALL_STATE(144)] = 6734,
  [SMALL_STATE(145)] = 6791,
  [SMALL_STATE(146)] = 6830,
  [SMALL_STATE(147)] = 6861,
  [SMALL_STATE(148)] = 6888,
  [SMALL_STATE(149)] = 6919,
  [SMALL_STATE(150)] = 6950,
  [SMALL_STATE(151)] = 6989,
  [SMALL_STATE(152)] = 7046,
  [SMALL_STATE(153)] = 7077,
  [SMALL_STATE(154)] = 7106,
  [SMALL_STATE(155)] = 7137,
  [SMALL_STATE(156)] = 7168,
  [SMALL_STATE(157)] = 7199,
  [SMALL_STATE(158)] = 7230,
  [SMALL_STATE(159)] = 7261,
  [SMALL_STATE(160)] = 7292,
  [SMALL_STATE(161)] = 7323,
  [SMALL_STATE(162)] = 7354,
  [SMALL_STATE(163)] = 7385,
  [SMALL_STATE(164)] = 7442,
  [SMALL_STATE(165)] = 7473,
  [SMALL_STATE(166)] = 7530,
  [SMALL_STATE(167)] = 7569,
  [SMALL_STATE(168)] = 7600,
  [SMALL_STATE(169)] = 7631,
  [SMALL_STATE(170)] = 7662,
  [SMALL_STATE(171)] = 7693,
  [SMALL_STATE(172)] = 7724,
  [SMALL_STATE(173)] = 7755,
  [SMALL_STATE(174)] = 7784,
  [SMALL_STATE(175)] = 7815,
  [SMALL_STATE(176)] = 7846,
  [SMALL_STATE(177)] = 7877,
  [SMALL_STATE(178)] = 7908,
  [SMALL_STATE(179)] = 7939,
  [SMALL_STATE(180)] = 7970,
  [SMALL_STATE(181)] = 8001,
  [SMALL_STATE(182)] = 8058,
  [SMALL_STATE(183)] = 8089,
  [SMALL_STATE(184)] = 8120,
  [SMALL_STATE(185)] = 8151,
  [SMALL_STATE(186)] = 8182,
  [SMALL_STATE(187)] = 8212,
  [SMALL_STATE(188)] = 8242,
  [SMALL_STATE(189)] = 8270,
  [SMALL_STATE(190)] = 8298,
  [SMALL_STATE(191)] = 8324,
  [SMALL_STATE(192)] = 8350,
  [SMALL_STATE(193)] = 8380,
  [SMALL_STATE(194)] = 8410,
  [SMALL_STATE(195)] = 8436,
  [SMALL_STATE(196)] = 8466,
  [SMALL_STATE(197)] = 8520,
  [SMALL_STATE(198)] = 8574,
  [SMALL_STATE(199)] = 8604,
  [SMALL_STATE(200)] = 8658,
  [SMALL_STATE(201)] = 8686,
  [SMALL_STATE(202)] = 8714,
  [SMALL_STATE(203)] = 8744,
  [SMALL_STATE(204)] = 8798,
  [SMALL_STATE(205)] = 8828,
  [SMALL_STATE(206)] = 8856,
  [SMALL_STATE(207)] = 8910,
  [SMALL_STATE(208)] = 8936,
  [SMALL_STATE(209)] = 8962,
  [SMALL_STATE(210)] = 8988,
  [SMALL_STATE(211)] = 9016,
  [SMALL_STATE(212)] = 9042,
  [SMALL_STATE(213)] = 9072,
  [SMALL_STATE(214)] = 9102,
  [SMALL_STATE(215)] = 9128,
  [SMALL_STATE(216)] = 9158,
  [SMALL_STATE(217)] = 9184,
  [SMALL_STATE(218)] = 9213,
  [SMALL_STATE(219)] = 9242,
  [SMALL_STATE(220)] = 9271,
  [SMALL_STATE(221)] = 9316,
  [SMALL_STATE(222)] = 9345,
  [SMALL_STATE(223)] = 9374,
  [SMALL_STATE(224)] = 9419,
  [SMALL_STATE(225)] = 9456,
  [SMALL_STATE(226)] = 9485,
  [SMALL_STATE(227)] = 9530,
  [SMALL_STATE(228)] = 9559,
  [SMALL_STATE(229)] = 9588,
  [SMALL_STATE(230)] = 9617,
  [SMALL_STATE(231)] = 9668,
  [SMALL_STATE(232)] = 9719,
  [SMALL_STATE(233)] = 9748,
  [SMALL_STATE(234)] = 9799,
  [SMALL_STATE(235)] = 9826,
  [SMALL_STATE(236)] = 9877,
  [SMALL_STATE(237)] = 9928,
  [SMALL_STATE(238)] = 9957,
  [SMALL_STATE(239)] = 9986,
  [SMALL_STATE(240)] = 10015,
  [SMALL_STATE(241)] = 10066,
  [SMALL_STATE(242)] = 10117,
  [SMALL_STATE(243)] = 10162,
  [SMALL_STATE(244)] = 10191,
  [SMALL_STATE(245)] = 10236,
  [SMALL_STATE(246)] = 10287,
  [SMALL_STATE(247)] = 10316,
  [SMALL_STATE(248)] = 10367,
  [SMALL_STATE(249)] = 10404,
  [SMALL_STATE(250)] = 10433,
  [SMALL_STATE(251)] = 10462,
  [SMALL_STATE(252)] = 10507,
  [SMALL_STATE(253)] = 10536,
  [SMALL_STATE(254)] = 10565,
  [SMALL_STATE(255)] = 10594,
  [SMALL_STATE(256)] = 10645,
  [SMALL_STATE(257)] = 10696,
  [SMALL_STATE(258)] = 10733,
  [SMALL_STATE(259)] = 10762,
  [SMALL_STATE(260)] = 10813,
  [SMALL_STATE(261)] = 10842,
  [SMALL_STATE(262)] = 10871,
  [SMALL_STATE(263)] = 10900,
  [SMALL_STATE(264)] = 10951,
  [SMALL_STATE(265)] = 10980,
  [SMALL_STATE(266)] = 11005,
  [SMALL_STATE(267)] = 11034,
  [SMALL_STATE(268)] = 11082,
  [SMALL_STATE(269)] = 11130,
  [SMALL_STATE(270)] = 11158,
  [SMALL_STATE(271)] = 11186,
  [SMALL_STATE(272)] = 11224,
  [SMALL_STATE(273)] = 11262,
  [SMALL_STATE(274)] = 11290,
  [SMALL_STATE(275)] = 11338,
  [SMALL_STATE(276)] = 11386,
  [SMALL_STATE(277)] = 11410,
  [SMALL_STATE(278)] = 11458,
  [SMALL_STATE(279)] = 11482,
  [SMALL_STATE(280)] = 11510,
  [SMALL_STATE(281)] = 11558,
  [SMALL_STATE(282)] = 11586,
  [SMALL_STATE(283)] = 11614,
  [SMALL_STATE(284)] = 11642,
  [SMALL_STATE(285)] = 11668,
  [SMALL_STATE(286)] = 11694,
  [SMALL_STATE(287)] = 11720,
  [SMALL_STATE(288)] = 11744,
  [SMALL_STATE(289)] = 11792,
  [SMALL_STATE(290)] = 11816,
  [SMALL_STATE(291)] = 11844,
  [SMALL_STATE(292)] = 11872,
  [SMALL_STATE(293)] = 11920,
  [SMALL_STATE(294)] = 11944,
  [SMALL_STATE(295)] = 11992,
  [SMALL_STATE(296)] = 12020,
  [SMALL_STATE(297)] = 12068,
  [SMALL_STATE(298)] = 12116,
  [SMALL_STATE(299)] = 12144,
  [SMALL_STATE(300)] = 12171,
  [SMALL_STATE(301)] = 12200,
  [SMALL_STATE(302)] = 12227,
  [SMALL_STATE(303)] = 12254,
  [SMALL_STATE(304)] = 12281,
  [SMALL_STATE(305)] = 12324,
  [SMALL_STATE(306)] = 12351,
  [SMALL_STATE(307)] = 12394,
  [SMALL_STATE(308)] = 12417,
  [SMALL_STATE(309)] = 12444,
  [SMALL_STATE(310)] = 12471,
  [SMALL_STATE(311)] = 12514,
  [SMALL_STATE(312)] = 12547,
  [SMALL_STATE(313)] = 12574,
  [SMALL_STATE(314)] = 12601,
  [SMALL_STATE(315)] = 12628,
  [SMALL_STATE(316)] = 12673,
  [SMALL_STATE(317)] = 12700,
  [SMALL_STATE(318)] = 12727,
  [SMALL_STATE(319)] = 12750,
  [SMALL_STATE(320)] = 12777,
  [SMALL_STATE(321)] = 12812,
  [SMALL_STATE(322)] = 12839,
  [SMALL_STATE(323)] = 12882,
  [SMALL_STATE(324)] = 12905,
  [SMALL_STATE(325)] = 12932,
  [SMALL_STATE(326)] = 12959,
  [SMALL_STATE(327)] = 13002,
  [SMALL_STATE(328)] = 13035,
  [SMALL_STATE(329)] = 13070,
  [SMALL_STATE(330)] = 13097,
  [SMALL_STATE(331)] = 13140,
  [SMALL_STATE(332)] = 13173,
  [SMALL_STATE(333)] = 13200,
  [SMALL_STATE(334)] = 13227,
  [SMALL_STATE(335)] = 13254,
  [SMALL_STATE(336)] = 13280,
  [SMALL_STATE(337)] = 13306,
  [SMALL_STATE(338)] = 13332,
  [SMALL_STATE(339)] = 13362,
  [SMALL_STATE(340)] = 13392,
  [SMALL_STATE(341)] = 13414,
  [SMALL_STATE(342)] = 13440,
  [SMALL_STATE(343)] = 13462,
  [SMALL_STATE(344)] = 13488,
  [SMALL_STATE(345)] = 13514,
  [SMALL_STATE(346)] = 13536,
  [SMALL_STATE(347)] = 13558,
  [SMALL_STATE(348)] = 13584,
  [SMALL_STATE(349)] = 13610,
  [SMALL_STATE(350)] = 13636,
  [SMALL_STATE(351)] = 13658,
  [SMALL_STATE(352)] = 13686,
  [SMALL_STATE(353)] = 13712,
  [SMALL_STATE(354)] = 13734,
  [SMALL_STATE(355)] = 13756,
  [SMALL_STATE(356)] = 13798,
  [SMALL_STATE(357)] = 13820,
  [SMALL_STATE(358)] = 13842,
  [SMALL_STATE(359)] = 13864,
  [SMALL_STATE(360)] = 13894,
  [SMALL_STATE(361)] = 13922,
  [SMALL_STATE(362)] = 13944,
  [SMALL_STATE(363)] = 13966,
  [SMALL_STATE(364)] = 13994,
  [SMALL_STATE(365)] = 14022,
  [SMALL_STATE(366)] = 14044,
  [SMALL_STATE(367)] = 14079,
  [SMALL_STATE(368)] = 14114,
  [SMALL_STATE(369)] = 14135,
  [SMALL_STATE(370)] = 14170,
  [SMALL_STATE(371)] = 14209,
  [SMALL_STATE(372)] = 14230,
  [SMALL_STATE(373)] = 14269,
  [SMALL_STATE(374)] = 14308,
  [SMALL_STATE(375)] = 14331,
  [SMALL_STATE(376)] = 14352,
  [SMALL_STATE(377)] = 14387,
  [SMALL_STATE(378)] = 14408,
  [SMALL_STATE(379)] = 14447,
  [SMALL_STATE(380)] = 14486,
  [SMALL_STATE(381)] = 14507,
  [SMALL_STATE(382)] = 14528,
  [SMALL_STATE(383)] = 14567,
  [SMALL_STATE(384)] = 14591,
  [SMALL_STATE(385)] = 14615,
  [SMALL_STATE(386)] = 14637,
  [SMALL_STATE(387)] = 14675,
  [SMALL_STATE(388)] = 14699,
  [SMALL_STATE(389)] = 14723,
  [SMALL_STATE(390)] = 14749,
  [SMALL_STATE(391)] = 14773,
  [SMALL_STATE(392)] = 14797,
  [SMALL_STATE(393)] = 14829,
  [SMALL_STATE(394)] = 14861,
  [SMALL_STATE(395)] = 14895,
  [SMALL_STATE(396)] = 14919,
  [SMALL_STATE(397)] = 14945,
  [SMALL_STATE(398)] = 14969,
  [SMALL_STATE(399)] = 14995,
  [SMALL_STATE(400)] = 15027,
  [SMALL_STATE(401)] = 15059,
  [SMALL_STATE(402)] = 15085,
  [SMALL_STATE(403)] = 15123,
  [SMALL_STATE(404)] = 15155,
  [SMALL_STATE(405)] = 15187,
  [SMALL_STATE(406)] = 15207,
  [SMALL_STATE(407)] = 15231,
  [SMALL_STATE(408)] = 15255,
  [SMALL_STATE(409)] = 15281,
  [SMALL_STATE(410)] = 15312,
  [SMALL_STATE(411)] = 15335,
  [SMALL_STATE(412)] = 15366,
  [SMALL_STATE(413)] = 15405,
  [SMALL_STATE(414)] = 15428,
  [SMALL_STATE(415)] = 15453,
  [SMALL_STATE(416)] = 15484,
  [SMALL_STATE(417)] = 15507,
  [SMALL_STATE(418)] = 15540,
  [SMALL_STATE(419)] = 15563,
  [SMALL_STATE(420)] = 15586,
  [SMALL_STATE(421)] = 15609,
  [SMALL_STATE(422)] = 15632,
  [SMALL_STATE(423)] = 15655,
  [SMALL_STATE(424)] = 15686,
  [SMALL_STATE(425)] = 15709,
  [SMALL_STATE(426)] = 15731,
  [SMALL_STATE(427)] = 15753,
  [SMALL_STATE(428)] = 15787,
  [SMALL_STATE(429)] = 15821,
  [SMALL_STATE(430)] = 15853,
  [SMALL_STATE(431)] = 15885,
  [SMALL_STATE(432)] = 15919,
  [SMALL_STATE(433)] = 15953,
  [SMALL_STATE(434)] = 15985,
  [SMALL_STATE(435)] = 16019,
  [SMALL_STATE(436)] = 16041,
  [SMALL_STATE(437)] = 16075,
  [SMALL_STATE(438)] = 16111,
  [SMALL_STATE(439)] = 16133,
  [SMALL_STATE(440)] = 16167,
  [SMALL_STATE(441)] = 16199,
  [SMALL_STATE(442)] = 16221,
  [SMALL_STATE(443)] = 16239,
  [SMALL_STATE(444)] = 16261,
  [SMALL_STATE(445)] = 16293,
  [SMALL_STATE(446)] = 16315,
  [SMALL_STATE(447)] = 16349,
  [SMALL_STATE(448)] = 16367,
  [SMALL_STATE(449)] = 16389,
  [SMALL_STATE(450)] = 16423,
  [SMALL_STATE(451)] = 16457,
  [SMALL_STATE(452)] = 16489,
  [SMALL_STATE(453)] = 16511,
  [SMALL_STATE(454)] = 16533,
  [SMALL_STATE(455)] = 16555,
  [SMALL_STATE(456)] = 16575,
  [SMALL_STATE(457)] = 16593,
  [SMALL_STATE(458)] = 16625,
  [SMALL_STATE(459)] = 16659,
  [SMALL_STATE(460)] = 16693,
  [SMALL_STATE(461)] = 16715,
  [SMALL_STATE(462)] = 16746,
  [SMALL_STATE(463)] = 16775,
  [SMALL_STATE(464)] = 16798,
  [SMALL_STATE(465)] = 16831,
  [SMALL_STATE(466)] = 16862,
  [SMALL_STATE(467)] = 16893,
  [SMALL_STATE(468)] = 16922,
  [SMALL_STATE(469)] = 16939,
  [SMALL_STATE(470)] = 16968,
  [SMALL_STATE(471)] = 16999,
  [SMALL_STATE(472)] = 17022,
  [SMALL_STATE(473)] = 17053,
  [SMALL_STATE(474)] = 17084,
  [SMALL_STATE(475)] = 17101,
  [SMALL_STATE(476)] = 17132,
  [SMALL_STATE(477)] = 17161,
  [SMALL_STATE(478)] = 17192,
  [SMALL_STATE(479)] = 17225,
  [SMALL_STATE(480)] = 17254,
  [SMALL_STATE(481)] = 17285,
  [SMALL_STATE(482)] = 17316,
  [SMALL_STATE(483)] = 17349,
  [SMALL_STATE(484)] = 17372,
  [SMALL_STATE(485)] = 17403,
  [SMALL_STATE(486)] = 17432,
  [SMALL_STATE(487)] = 17463,
  [SMALL_STATE(488)] = 17494,
  [SMALL_STATE(489)] = 17525,
  [SMALL_STATE(490)] = 17552,
  [SMALL_STATE(491)] = 17580,
  [SMALL_STATE(492)] = 17610,
  [SMALL_STATE(493)] = 17632,
  [SMALL_STATE(494)] = 17662,
  [SMALL_STATE(495)] = 17692,
  [SMALL_STATE(496)] = 17720,
  [SMALL_STATE(497)] = 17748,
  [SMALL_STATE(498)] = 17770,
  [SMALL_STATE(499)] = 17800,
  [SMALL_STATE(500)] = 17828,
  [SMALL_STATE(501)] = 17856,
  [SMALL_STATE(502)] = 17872,
  [SMALL_STATE(503)] = 17900,
  [SMALL_STATE(504)] = 17930,
  [SMALL_STATE(505)] = 17958,
  [SMALL_STATE(506)] = 17986,
  [SMALL_STATE(507)] = 18008,
  [SMALL_STATE(508)] = 18036,
  [SMALL_STATE(509)] = 18064,
  [SMALL_STATE(510)] = 18080,
  [SMALL_STATE(511)] = 18102,
  [SMALL_STATE(512)] = 18124,
  [SMALL_STATE(513)] = 18152,
  [SMALL_STATE(514)] = 18173,
  [SMALL_STATE(515)] = 18204,
  [SMALL_STATE(516)] = 18235,
  [SMALL_STATE(517)] = 18266,
  [SMALL_STATE(518)] = 18287,
  [SMALL_STATE(519)] = 18308,
  [SMALL_STATE(520)] = 18335,
  [SMALL_STATE(521)] = 18362,
  [SMALL_STATE(522)] = 18393,
  [SMALL_STATE(523)] = 18424,
  [SMALL_STATE(524)] = 18445,
  [SMALL_STATE(525)] = 18476,
  [SMALL_STATE(526)] = 18507,
  [SMALL_STATE(527)] = 18538,
  [SMALL_STATE(528)] = 18567,
  [SMALL_STATE(529)] = 18598,
  [SMALL_STATE(530)] = 18619,
  [SMALL_STATE(531)] = 18640,
  [SMALL_STATE(532)] = 18664,
  [SMALL_STATE(533)] = 18692,
  [SMALL_STATE(534)] = 18708,
  [SMALL_STATE(535)] = 18732,
  [SMALL_STATE(536)] = 18748,
  [SMALL_STATE(537)] = 18770,
  [SMALL_STATE(538)] = 18796,
  [SMALL_STATE(539)] = 18820,
  [SMALL_STATE(540)] = 18836,
  [SMALL_STATE(541)] = 18864,
  [SMALL_STATE(542)] = 18888,
  [SMALL_STATE(543)] = 18912,
  [SMALL_STATE(544)] = 18936,
  [SMALL_STATE(545)] = 18960,
  [SMALL_STATE(546)] = 18976,
  [SMALL_STATE(547)] = 18992,
  [SMALL_STATE(548)] = 19008,
  [SMALL_STATE(549)] = 19032,
  [SMALL_STATE(550)] = 19060,
  [SMALL_STATE(551)] = 19088,
  [SMALL_STATE(552)] = 19116,
  [SMALL_STATE(553)] = 19140,
  [SMALL_STATE(554)] = 19168,
  [SMALL_STATE(555)] = 19196,
  [SMALL_STATE(556)] = 19212,
  [SMALL_STATE(557)] = 19228,
  [SMALL_STATE(558)] = 19244,
  [SMALL_STATE(559)] = 19268,
  [SMALL_STATE(560)] = 19296,
  [SMALL_STATE(561)] = 19312,
  [SMALL_STATE(562)] = 19328,
  [SMALL_STATE(563)] = 19356,
  [SMALL_STATE(564)] = 19380,
  [SMALL_STATE(565)] = 19396,
  [SMALL_STATE(566)] = 19424,
  [SMALL_STATE(567)] = 19440,
  [SMALL_STATE(568)] = 19466,
  [SMALL_STATE(569)] = 19482,
  [SMALL_STATE(570)] = 19498,
  [SMALL_STATE(571)] = 19522,
  [SMALL_STATE(572)] = 19538,
  [SMALL_STATE(573)] = 19562,
  [SMALL_STATE(574)] = 19586,
  [SMALL_STATE(575)] = 19605,
  [SMALL_STATE(576)] = 19620,
  [SMALL_STATE(577)] = 19635,
  [SMALL_STATE(578)] = 19650,
  [SMALL_STATE(579)] = 19667,
  [SMALL_STATE(580)] = 19682,
  [SMALL_STATE(581)] = 19701,
  [SMALL_STATE(582)] = 19726,
  [SMALL_STATE(583)] = 19743,
  [SMALL_STATE(584)] = 19762,
  [SMALL_STATE(585)] = 19787,
  [SMALL_STATE(586)] = 19802,
  [SMALL_STATE(587)] = 19820,
  [SMALL_STATE(588)] = 19840,
  [SMALL_STATE(589)] = 19860,
  [SMALL_STATE(590)] = 19882,
  [SMALL_STATE(591)] = 19904,
  [SMALL_STATE(592)] = 19926,
  [SMALL_STATE(593)] = 19948,
  [SMALL_STATE(594)] = 19970,
  [SMALL_STATE(595)] = 19992,
  [SMALL_STATE(596)] = 20012,
  [SMALL_STATE(597)] = 20034,
  [SMALL_STATE(598)] = 20054,
  [SMALL_STATE(599)] = 20074,
  [SMALL_STATE(600)] = 20096,
  [SMALL_STATE(601)] = 20118,
  [SMALL_STATE(602)] = 20138,
  [SMALL_STATE(603)] = 20160,
  [SMALL_STATE(604)] = 20182,
  [SMALL_STATE(605)] = 20200,
  [SMALL_STATE(606)] = 20222,
  [SMALL_STATE(607)] = 20238,
  [SMALL_STATE(608)] = 20254,
  [SMALL_STATE(609)] = 20270,
  [SMALL_STATE(610)] = 20290,
  [SMALL_STATE(611)] = 20312,
  [SMALL_STATE(612)] = 20328,
  [SMALL_STATE(613)] = 20348,
  [SMALL_STATE(614)] = 20364,
  [SMALL_STATE(615)] = 20386,
  [SMALL_STATE(616)] = 20404,
  [SMALL_STATE(617)] = 20424,
  [SMALL_STATE(618)] = 20444,
  [SMALL_STATE(619)] = 20464,
  [SMALL_STATE(620)] = 20486,
  [SMALL_STATE(621)] = 20506,
  [SMALL_STATE(622)] = 20528,
  [SMALL_STATE(623)] = 20548,
  [SMALL_STATE(624)] = 20568,
  [SMALL_STATE(625)] = 20590,
  [SMALL_STATE(626)] = 20608,
  [SMALL_STATE(627)] = 20628,
  [SMALL_STATE(628)] = 20648,
  [SMALL_STATE(629)] = 20670,
  [SMALL_STATE(630)] = 20690,
  [SMALL_STATE(631)] = 20712,
  [SMALL_STATE(632)] = 20730,
  [SMALL_STATE(633)] = 20750,
  [SMALL_STATE(634)] = 20769,
  [SMALL_STATE(635)] = 20788,
  [SMALL_STATE(636)] = 20801,
  [SMALL_STATE(637)] = 20814,
  [SMALL_STATE(638)] = 20827,
  [SMALL_STATE(639)] = 20840,
  [SMALL_STATE(640)] = 20859,
  [SMALL_STATE(641)] = 20872,
  [SMALL_STATE(642)] = 20885,
  [SMALL_STATE(643)] = 20898,
  [SMALL_STATE(644)] = 20911,
  [SMALL_STATE(645)] = 20924,
  [SMALL_STATE(646)] = 20937,
  [SMALL_STATE(647)] = 20950,
  [SMALL_STATE(648)] = 20963,
  [SMALL_STATE(649)] = 20976,
  [SMALL_STATE(650)] = 20989,
  [SMALL_STATE(651)] = 21002,
  [SMALL_STATE(652)] = 21021,
  [SMALL_STATE(653)] = 21040,
  [SMALL_STATE(654)] = 21053,
  [SMALL_STATE(655)] = 21072,
  [SMALL_STATE(656)] = 21091,
  [SMALL_STATE(657)] = 21110,
  [SMALL_STATE(658)] = 21129,
  [SMALL_STATE(659)] = 21148,
  [SMALL_STATE(660)] = 21161,
  [SMALL_STATE(661)] = 21174,
  [SMALL_STATE(662)] = 21190,
  [SMALL_STATE(663)] = 21206,
  [SMALL_STATE(664)] = 21222,
  [SMALL_STATE(665)] = 21238,
  [SMALL_STATE(666)] = 21254,
  [SMALL_STATE(667)] = 21270,
  [SMALL_STATE(668)] = 21282,
  [SMALL_STATE(669)] = 21298,
  [SMALL_STATE(670)] = 21314,
  [SMALL_STATE(671)] = 21330,
  [SMALL_STATE(672)] = 21342,
  [SMALL_STATE(673)] = 21358,
  [SMALL_STATE(674)] = 21374,
  [SMALL_STATE(675)] = 21390,
  [SMALL_STATE(676)] = 21405,
  [SMALL_STATE(677)] = 21418,
  [SMALL_STATE(678)] = 21433,
  [SMALL_STATE(679)] = 21448,
  [SMALL_STATE(680)] = 21463,
  [SMALL_STATE(681)] = 21478,
  [SMALL_STATE(682)] = 21493,
  [SMALL_STATE(683)] = 21508,
  [SMALL_STATE(684)] = 21523,
  [SMALL_STATE(685)] = 21538,
  [SMALL_STATE(686)] = 21553,
  [SMALL_STATE(687)] = 21568,
  [SMALL_STATE(688)] = 21581,
  [SMALL_STATE(689)] = 21596,
  [SMALL_STATE(690)] = 21611,
  [SMALL_STATE(691)] = 21626,
  [SMALL_STATE(692)] = 21641,
  [SMALL_STATE(693)] = 21656,
  [SMALL_STATE(694)] = 21669,
  [SMALL_STATE(695)] = 21681,
  [SMALL_STATE(696)] = 21693,
  [SMALL_STATE(697)] = 21703,
  [SMALL_STATE(698)] = 21713,
  [SMALL_STATE(699)] = 21723,
  [SMALL_STATE(700)] = 21733,
  [SMALL_STATE(701)] = 21743,
  [SMALL_STATE(702)] = 21755,
  [SMALL_STATE(703)] = 21765,
  [SMALL_STATE(704)] = 21775,
  [SMALL_STATE(705)] = 21785,
  [SMALL_STATE(706)] = 21797,
  [SMALL_STATE(707)] = 21807,
  [SMALL_STATE(708)] = 21817,
  [SMALL_STATE(709)] = 21829,
  [SMALL_STATE(710)] = 21839,
  [SMALL_STATE(711)] = 21849,
  [SMALL_STATE(712)] = 21861,
  [SMALL_STATE(713)] = 21873,
  [SMALL_STATE(714)] = 21885,
  [SMALL_STATE(715)] = 21895,
  [SMALL_STATE(716)] = 21907,
  [SMALL_STATE(717)] = 21919,
  [SMALL_STATE(718)] = 21931,
  [SMALL_STATE(719)] = 21941,
  [SMALL_STATE(720)] = 21951,
  [SMALL_STATE(721)] = 21963,
  [SMALL_STATE(722)] = 21973,
  [SMALL_STATE(723)] = 21983,
  [SMALL_STATE(724)] = 21993,
  [SMALL_STATE(725)] = 22003,
  [SMALL_STATE(726)] = 22013,
  [SMALL_STATE(727)] = 22023,
  [SMALL_STATE(728)] = 22033,
  [SMALL_STATE(729)] = 22043,
  [SMALL_STATE(730)] = 22053,
  [SMALL_STATE(731)] = 22063,
  [SMALL_STATE(732)] = 22073,
  [SMALL_STATE(733)] = 22083,
  [SMALL_STATE(734)] = 22093,
  [SMALL_STATE(735)] = 22105,
  [SMALL_STATE(736)] = 22115,
  [SMALL_STATE(737)] = 22127,
  [SMALL_STATE(738)] = 22137,
  [SMALL_STATE(739)] = 22147,
  [SMALL_STATE(740)] = 22157,
  [SMALL_STATE(741)] = 22167,
  [SMALL_STATE(742)] = 22177,
  [SMALL_STATE(743)] = 22189,
  [SMALL_STATE(744)] = 22199,
  [SMALL_STATE(745)] = 22209,
  [SMALL_STATE(746)] = 22219,
  [SMALL_STATE(747)] = 22229,
  [SMALL_STATE(748)] = 22239,
  [SMALL_STATE(749)] = 22249,
  [SMALL_STATE(750)] = 22263,
  [SMALL_STATE(751)] = 22275,
  [SMALL_STATE(752)] = 22289,
  [SMALL_STATE(753)] = 22303,
  [SMALL_STATE(754)] = 22313,
  [SMALL_STATE(755)] = 22323,
  [SMALL_STATE(756)] = 22335,
  [SMALL_STATE(757)] = 22347,
  [SMALL_STATE(758)] = 22357,
  [SMALL_STATE(759)] = 22367,
  [SMALL_STATE(760)] = 22381,
  [SMALL_STATE(761)] = 22391,
  [SMALL_STATE(762)] = 22401,
  [SMALL_STATE(763)] = 22415,
  [SMALL_STATE(764)] = 22427,
  [SMALL_STATE(765)] = 22441,
  [SMALL_STATE(766)] = 22451,
  [SMALL_STATE(767)] = 22461,
  [SMALL_STATE(768)] = 22471,
  [SMALL_STATE(769)] = 22480,
  [SMALL_STATE(770)] = 22489,
  [SMALL_STATE(771)] = 22498,
  [SMALL_STATE(772)] = 22507,
  [SMALL_STATE(773)] = 22520,
  [SMALL_STATE(774)] = 22529,
  [SMALL_STATE(775)] = 22542,
  [SMALL_STATE(776)] = 22553,
  [SMALL_STATE(777)] = 22562,
  [SMALL_STATE(778)] = 22571,
  [SMALL_STATE(779)] = 22580,
  [SMALL_STATE(780)] = 22589,
  [SMALL_STATE(781)] = 22598,
  [SMALL_STATE(782)] = 22607,
  [SMALL_STATE(783)] = 22618,
  [SMALL_STATE(784)] = 22627,
  [SMALL_STATE(785)] = 22636,
  [SMALL_STATE(786)] = 22649,
  [SMALL_STATE(787)] = 22658,
  [SMALL_STATE(788)] = 22669,
  [SMALL_STATE(789)] = 22682,
  [SMALL_STATE(790)] = 22691,
  [SMALL_STATE(791)] = 22700,
  [SMALL_STATE(792)] = 22709,
  [SMALL_STATE(793)] = 22718,
  [SMALL_STATE(794)] = 22727,
  [SMALL_STATE(795)] = 22736,
  [SMALL_STATE(796)] = 22745,
  [SMALL_STATE(797)] = 22754,
  [SMALL_STATE(798)] = 22763,
  [SMALL_STATE(799)] = 22772,
  [SMALL_STATE(800)] = 22781,
  [SMALL_STATE(801)] = 22790,
  [SMALL_STATE(802)] = 22799,
  [SMALL_STATE(803)] = 22808,
  [SMALL_STATE(804)] = 22821,
  [SMALL_STATE(805)] = 22830,
  [SMALL_STATE(806)] = 22839,
  [SMALL_STATE(807)] = 22848,
  [SMALL_STATE(808)] = 22857,
  [SMALL_STATE(809)] = 22866,
  [SMALL_STATE(810)] = 22875,
  [SMALL_STATE(811)] = 22884,
  [SMALL_STATE(812)] = 22893,
  [SMALL_STATE(813)] = 22902,
  [SMALL_STATE(814)] = 22911,
  [SMALL_STATE(815)] = 22922,
  [SMALL_STATE(816)] = 22931,
  [SMALL_STATE(817)] = 22940,
  [SMALL_STATE(818)] = 22949,
  [SMALL_STATE(819)] = 22958,
  [SMALL_STATE(820)] = 22967,
  [SMALL_STATE(821)] = 22976,
  [SMALL_STATE(822)] = 22989,
  [SMALL_STATE(823)] = 22998,
  [SMALL_STATE(824)] = 23007,
  [SMALL_STATE(825)] = 23016,
  [SMALL_STATE(826)] = 23025,
  [SMALL_STATE(827)] = 23034,
  [SMALL_STATE(828)] = 23043,
  [SMALL_STATE(829)] = 23052,
  [SMALL_STATE(830)] = 23059,
  [SMALL_STATE(831)] = 23072,
  [SMALL_STATE(832)] = 23081,
  [SMALL_STATE(833)] = 23091,
  [SMALL_STATE(834)] = 23101,
  [SMALL_STATE(835)] = 23111,
  [SMALL_STATE(836)] = 23121,
  [SMALL_STATE(837)] = 23131,
  [SMALL_STATE(838)] = 23139,
  [SMALL_STATE(839)] = 23147,
  [SMALL_STATE(840)] = 23157,
  [SMALL_STATE(841)] = 23167,
  [SMALL_STATE(842)] = 23177,
  [SMALL_STATE(843)] = 23187,
  [SMALL_STATE(844)] = 23197,
  [SMALL_STATE(845)] = 23207,
  [SMALL_STATE(846)] = 23214,
  [SMALL_STATE(847)] = 23221,
  [SMALL_STATE(848)] = 23228,
  [SMALL_STATE(849)] = 23233,
  [SMALL_STATE(850)] = 23238,
  [SMALL_STATE(851)] = 23243,
  [SMALL_STATE(852)] = 23250,
  [SMALL_STATE(853)] = 23257,
  [SMALL_STATE(854)] = 23264,
  [SMALL_STATE(855)] = 23269,
  [SMALL_STATE(856)] = 23276,
  [SMALL_STATE(857)] = 23283,
  [SMALL_STATE(858)] = 23288,
  [SMALL_STATE(859)] = 23293,
  [SMALL_STATE(860)] = 23298,
  [SMALL_STATE(861)] = 23303,
  [SMALL_STATE(862)] = 23308,
  [SMALL_STATE(863)] = 23315,
  [SMALL_STATE(864)] = 23322,
  [SMALL_STATE(865)] = 23327,
  [SMALL_STATE(866)] = 23332,
  [SMALL_STATE(867)] = 23337,
  [SMALL_STATE(868)] = 23342,
  [SMALL_STATE(869)] = 23347,
  [SMALL_STATE(870)] = 23354,
  [SMALL_STATE(871)] = 23361,
  [SMALL_STATE(872)] = 23366,
  [SMALL_STATE(873)] = 23373,
  [SMALL_STATE(874)] = 23378,
  [SMALL_STATE(875)] = 23385,
  [SMALL_STATE(876)] = 23390,
  [SMALL_STATE(877)] = 23395,
  [SMALL_STATE(878)] = 23400,
  [SMALL_STATE(879)] = 23407,
  [SMALL_STATE(880)] = 23412,
  [SMALL_STATE(881)] = 23417,
  [SMALL_STATE(882)] = 23422,
  [SMALL_STATE(883)] = 23429,
  [SMALL_STATE(884)] = 23436,
  [SMALL_STATE(885)] = 23441,
  [SMALL_STATE(886)] = 23446,
  [SMALL_STATE(887)] = 23451,
  [SMALL_STATE(888)] = 23456,
  [SMALL_STATE(889)] = 23461,
  [SMALL_STATE(890)] = 23466,
  [SMALL_STATE(891)] = 23471,
  [SMALL_STATE(892)] = 23478,
  [SMALL_STATE(893)] = 23483,
  [SMALL_STATE(894)] = 23488,
  [SMALL_STATE(895)] = 23495,
  [SMALL_STATE(896)] = 23499,
  [SMALL_STATE(897)] = 23503,
  [SMALL_STATE(898)] = 23507,
  [SMALL_STATE(899)] = 23511,
  [SMALL_STATE(900)] = 23515,
  [SMALL_STATE(901)] = 23519,
  [SMALL_STATE(902)] = 23523,
  [SMALL_STATE(903)] = 23527,
  [SMALL_STATE(904)] = 23531,
  [SMALL_STATE(905)] = 23535,
  [SMALL_STATE(906)] = 23539,
  [SMALL_STATE(907)] = 23543,
  [SMALL_STATE(908)] = 23547,
  [SMALL_STATE(909)] = 23551,
  [SMALL_STATE(910)] = 23555,
  [SMALL_STATE(911)] = 23559,
  [SMALL_STATE(912)] = 23563,
  [SMALL_STATE(913)] = 23567,
  [SMALL_STATE(914)] = 23571,
  [SMALL_STATE(915)] = 23575,
  [SMALL_STATE(916)] = 23579,
  [SMALL_STATE(917)] = 23583,
  [SMALL_STATE(918)] = 23587,
  [SMALL_STATE(919)] = 23591,
  [SMALL_STATE(920)] = 23595,
  [SMALL_STATE(921)] = 23599,
  [SMALL_STATE(922)] = 23603,
  [SMALL_STATE(923)] = 23607,
  [SMALL_STATE(924)] = 23611,
  [SMALL_STATE(925)] = 23615,
  [SMALL_STATE(926)] = 23619,
  [SMALL_STATE(927)] = 23623,
  [SMALL_STATE(928)] = 23627,
  [SMALL_STATE(929)] = 23631,
  [SMALL_STATE(930)] = 23635,
  [SMALL_STATE(931)] = 23639,
  [SMALL_STATE(932)] = 23643,
  [SMALL_STATE(933)] = 23647,
  [SMALL_STATE(934)] = 23651,
  [SMALL_STATE(935)] = 23655,
  [SMALL_STATE(936)] = 23659,
  [SMALL_STATE(937)] = 23663,
  [SMALL_STATE(938)] = 23667,
  [SMALL_STATE(939)] = 23671,
  [SMALL_STATE(940)] = 23675,
  [SMALL_STATE(941)] = 23679,
  [SMALL_STATE(942)] = 23683,
  [SMALL_STATE(943)] = 23687,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_no_language, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_iri, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_literal, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_with_language, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype_iri, 1), REDUCE(sym_class_iri, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_iri, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_iri, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_data_property_iri, 1), REDUCE(sym_object_property_iri, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(25),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(33),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(34),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(40),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotations, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_iri, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(846),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(655),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(201),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(200),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_primary, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(72),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(75),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(926),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(550),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(458),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(936),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(326),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(515),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(132),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(143),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(141),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(139),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(417),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_iri, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inverse_object_property, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 1),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(274),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2), SHIFT_REPEAT(355),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(515),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(464),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(140),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(536),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(493),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(315),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(541),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(428),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(165),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(322),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(574),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_data_property_iri, 1), REDUCE(sym_object_property_iri, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(503),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(306),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_property_iri, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(267),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inverse_object_property, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 3),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(431),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(292),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(512),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(651),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(654),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(657),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(652),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(544),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(127),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(402),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(478),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(450),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(197),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(537),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(515),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(527),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(138),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(151),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(833),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(310),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 6),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 1),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(163),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(296),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2), SHIFT_REPEAT(233),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 4),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(144),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 3),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(181),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(300),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(565),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2), SHIFT_REPEAT(498),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2), SHIFT_REPEAT(437),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 3),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(526),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(129),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(412),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(482),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(584),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(515),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(581),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(554),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact, 2),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_fact, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_with, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_fact, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2), SHIFT_REPEAT(605),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_class_of, 2),
  [974] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(351),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 3),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_union_of, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 3),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(360),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_union_of, 3),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalent_to, 2),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_iri, 1),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ontology_iri, 1),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 3),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 3),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(439),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(515),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), REDUCE(sym_datatype_frame, 4),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(673),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(396),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1061] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(401),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(304),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(275),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1092] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(414),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2),
  [1109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2), SHIFT_REPEAT(587),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 3),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 3),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2), SHIFT_REPEAT(531),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2), SHIFT_REPEAT(534),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 4),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 4),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 4),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_iri, 1),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2), SHIFT_REPEAT(255),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(463),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [1214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(471),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(483),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [1242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_no_language, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [1258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(497),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [1273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(506),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2),
  [1280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(510),
  [1283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(511),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 2),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 3),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(562),
  [1299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(529),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 1),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_literal, 3),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_iri, 1),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_with_language, 2),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_property_iri, 1),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotations, 2),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_iri, 1),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(559),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(532),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(551),
  [1437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(540),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(553),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(330),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(446),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [1487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(855),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(549),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2), SHIFT_REPEAT(905),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(280),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 1),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 2),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2),
  [1635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2), SHIFT_REPEAT(409),
  [1638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(578),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 2),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 1),
  [1649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2), SHIFT_REPEAT(552),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ontology_document, 2),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1790] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

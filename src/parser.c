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
#define STATE_COUNT 935
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 222
#define ALIAS_COUNT 0
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym__datatype = 102,
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
  sym_datatype_equavalent_to = 150,
  sym_class_frame = 151,
  sym_sub_class_of = 152,
  sym_equivalent_to = 153,
  sym_disjoint_with = 154,
  sym_disjoint_union_of = 155,
  sym_has_key = 156,
  sym_object_property_frame = 157,
  sym__object_property_characteristic = 158,
  sym_data_property_frame = 159,
  sym_annotation_property_frame = 160,
  sym_individual_frame = 161,
  sym__fact = 162,
  sym__object_property_fact = 163,
  sym__data_property_fact = 164,
  sym_misc = 165,
  sym__description_annotated_list = 166,
  sym__annotation_annotated_list = 167,
  sym__object_property_expression_annotated_list = 168,
  sym__object_property_characteristic_annotated_list = 169,
  sym__data_range_annotated_list = 170,
  sym__data_property_expression_annotated_list = 171,
  sym__iri_annotated_list = 172,
  sym__annotation_property_iri_annotated_list = 173,
  sym__individual_annotated_list = 174,
  sym__fact_annotated_list = 175,
  sym__description_2list = 176,
  sym__object_property_2list = 177,
  sym__data_property_2list = 178,
  sym__individual_2list = 179,
  sym__individual_list = 180,
  sym__literal_list = 181,
  sym__iri_rfc3987 = 182,
  sym__ihier_part = 183,
  sym__iauthority = 184,
  sym__iuserinfo = 185,
  sym__ihost = 186,
  aux_sym__ipath_abempty = 187,
  sym__isegment = 188,
  aux_sym__positive_integer_repeat1 = 189,
  aux_sym__ontology_document_repeat1 = 190,
  aux_sym_ontology_repeat1 = 191,
  aux_sym_ontology_repeat2 = 192,
  aux_sym_ontology_repeat3 = 193,
  aux_sym_data_range_repeat1 = 194,
  aux_sym__data_conjunction_repeat1 = 195,
  aux_sym_datatype_restriction_repeat1 = 196,
  aux_sym_description_repeat1 = 197,
  aux_sym__conjunction_repeat1 = 198,
  aux_sym__conjunction_repeat2 = 199,
  aux_sym_class_frame_repeat1 = 200,
  aux_sym_has_key_repeat1 = 201,
  aux_sym_object_property_frame_repeat1 = 202,
  aux_sym_object_property_frame_repeat2 = 203,
  aux_sym_data_property_frame_repeat1 = 204,
  aux_sym_annotation_property_frame_repeat1 = 205,
  aux_sym_individual_frame_repeat1 = 206,
  aux_sym__description_annotated_list_repeat1 = 207,
  aux_sym__annotation_annotated_list_repeat1 = 208,
  aux_sym__object_property_expression_annotated_list_repeat1 = 209,
  aux_sym__object_property_characteristic_annotated_list_repeat1 = 210,
  aux_sym__data_range_annotated_list_repeat1 = 211,
  aux_sym__data_property_expression_annotated_list_repeat1 = 212,
  aux_sym__iri_annotated_list_repeat1 = 213,
  aux_sym__annotation_property_iri_annotated_list_repeat1 = 214,
  aux_sym__individual_annotated_list_repeat1 = 215,
  aux_sym__fact_annotated_list_repeat1 = 216,
  aux_sym__description_2list_repeat1 = 217,
  aux_sym__object_property_2list_repeat1 = 218,
  aux_sym__data_property_2list_repeat1 = 219,
  aux_sym__individual_2list_repeat1 = 220,
  aux_sym__literal_list_repeat1 = 221,
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
  [7] = 2,
  [8] = 8,
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
  [31] = 29,
  [32] = 28,
  [33] = 33,
  [34] = 29,
  [35] = 28,
  [36] = 36,
  [37] = 37,
  [38] = 26,
  [39] = 39,
  [40] = 40,
  [41] = 28,
  [42] = 42,
  [43] = 43,
  [44] = 29,
  [45] = 26,
  [46] = 46,
  [47] = 39,
  [48] = 48,
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
  [61] = 39,
  [62] = 2,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 39,
  [69] = 26,
  [70] = 29,
  [71] = 28,
  [72] = 23,
  [73] = 22,
  [74] = 25,
  [75] = 75,
  [76] = 76,
  [77] = 27,
  [78] = 24,
  [79] = 79,
  [80] = 79,
  [81] = 79,
  [82] = 82,
  [83] = 79,
  [84] = 79,
  [85] = 79,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 39,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 99,
  [104] = 99,
  [105] = 105,
  [106] = 106,
  [107] = 99,
  [108] = 97,
  [109] = 97,
  [110] = 99,
  [111] = 97,
  [112] = 97,
  [113] = 99,
  [114] = 97,
  [115] = 97,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 97,
  [121] = 97,
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
  [143] = 96,
  [144] = 144,
  [145] = 145,
  [146] = 100,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 102,
  [152] = 106,
  [153] = 153,
  [154] = 154,
  [155] = 118,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 101,
  [160] = 160,
  [161] = 98,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 150,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 117,
  [171] = 171,
  [172] = 172,
  [173] = 150,
  [174] = 174,
  [175] = 116,
  [176] = 176,
  [177] = 150,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 8,
  [186] = 142,
  [187] = 106,
  [188] = 6,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 4,
  [193] = 101,
  [194] = 194,
  [195] = 118,
  [196] = 196,
  [197] = 117,
  [198] = 126,
  [199] = 139,
  [200] = 200,
  [201] = 201,
  [202] = 137,
  [203] = 128,
  [204] = 98,
  [205] = 100,
  [206] = 206,
  [207] = 207,
  [208] = 102,
  [209] = 96,
  [210] = 4,
  [211] = 116,
  [212] = 8,
  [213] = 6,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 145,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 106,
  [223] = 223,
  [224] = 142,
  [225] = 118,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 137,
  [231] = 231,
  [232] = 98,
  [233] = 233,
  [234] = 117,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 139,
  [239] = 163,
  [240] = 240,
  [241] = 101,
  [242] = 242,
  [243] = 174,
  [244] = 227,
  [245] = 116,
  [246] = 96,
  [247] = 240,
  [248] = 240,
  [249] = 158,
  [250] = 102,
  [251] = 251,
  [252] = 100,
  [253] = 253,
  [254] = 254,
  [255] = 235,
  [256] = 256,
  [257] = 240,
  [258] = 258,
  [259] = 259,
  [260] = 227,
  [261] = 227,
  [262] = 262,
  [263] = 231,
  [264] = 172,
  [265] = 4,
  [266] = 163,
  [267] = 267,
  [268] = 268,
  [269] = 8,
  [270] = 6,
  [271] = 271,
  [272] = 22,
  [273] = 172,
  [274] = 174,
  [275] = 23,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 268,
  [280] = 268,
  [281] = 281,
  [282] = 139,
  [283] = 268,
  [284] = 284,
  [285] = 137,
  [286] = 142,
  [287] = 287,
  [288] = 288,
  [289] = 268,
  [290] = 158,
  [291] = 145,
  [292] = 292,
  [293] = 268,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 163,
  [303] = 303,
  [304] = 304,
  [305] = 297,
  [306] = 172,
  [307] = 93,
  [308] = 308,
  [309] = 91,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 90,
  [315] = 92,
  [316] = 25,
  [317] = 95,
  [318] = 158,
  [319] = 297,
  [320] = 297,
  [321] = 24,
  [322] = 322,
  [323] = 145,
  [324] = 324,
  [325] = 325,
  [326] = 174,
  [327] = 27,
  [328] = 328,
  [329] = 329,
  [330] = 297,
  [331] = 297,
  [332] = 28,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 29,
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
  [348] = 26,
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
  [359] = 27,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 22,
  [366] = 366,
  [367] = 367,
  [368] = 363,
  [369] = 363,
  [370] = 370,
  [371] = 22,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 363,
  [376] = 23,
  [377] = 363,
  [378] = 363,
  [379] = 23,
  [380] = 380,
  [381] = 381,
  [382] = 96,
  [383] = 383,
  [384] = 24,
  [385] = 106,
  [386] = 24,
  [387] = 102,
  [388] = 100,
  [389] = 118,
  [390] = 390,
  [391] = 25,
  [392] = 392,
  [393] = 101,
  [394] = 394,
  [395] = 395,
  [396] = 98,
  [397] = 116,
  [398] = 398,
  [399] = 399,
  [400] = 117,
  [401] = 27,
  [402] = 27,
  [403] = 403,
  [404] = 404,
  [405] = 25,
  [406] = 406,
  [407] = 406,
  [408] = 408,
  [409] = 409,
  [410] = 142,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 139,
  [416] = 416,
  [417] = 137,
  [418] = 27,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 287,
  [425] = 39,
  [426] = 426,
  [427] = 423,
  [428] = 428,
  [429] = 23,
  [430] = 22,
  [431] = 267,
  [432] = 432,
  [433] = 421,
  [434] = 22,
  [435] = 435,
  [436] = 436,
  [437] = 23,
  [438] = 421,
  [439] = 439,
  [440] = 421,
  [441] = 423,
  [442] = 442,
  [443] = 443,
  [444] = 421,
  [445] = 22,
  [446] = 421,
  [447] = 447,
  [448] = 423,
  [449] = 449,
  [450] = 450,
  [451] = 423,
  [452] = 281,
  [453] = 423,
  [454] = 23,
  [455] = 455,
  [456] = 25,
  [457] = 457,
  [458] = 458,
  [459] = 27,
  [460] = 457,
  [461] = 457,
  [462] = 462,
  [463] = 458,
  [464] = 464,
  [465] = 24,
  [466] = 458,
  [467] = 467,
  [468] = 458,
  [469] = 25,
  [470] = 457,
  [471] = 471,
  [472] = 472,
  [473] = 27,
  [474] = 24,
  [475] = 27,
  [476] = 25,
  [477] = 477,
  [478] = 457,
  [479] = 24,
  [480] = 458,
  [481] = 481,
  [482] = 458,
  [483] = 483,
  [484] = 22,
  [485] = 23,
  [486] = 457,
  [487] = 487,
  [488] = 487,
  [489] = 487,
  [490] = 25,
  [491] = 10,
  [492] = 27,
  [493] = 487,
  [494] = 487,
  [495] = 27,
  [496] = 487,
  [497] = 27,
  [498] = 24,
  [499] = 27,
  [500] = 487,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 487,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 93,
  [512] = 512,
  [513] = 510,
  [514] = 510,
  [515] = 90,
  [516] = 516,
  [517] = 27,
  [518] = 92,
  [519] = 510,
  [520] = 520,
  [521] = 510,
  [522] = 95,
  [523] = 510,
  [524] = 510,
  [525] = 510,
  [526] = 510,
  [527] = 91,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 529,
  [537] = 537,
  [538] = 533,
  [539] = 539,
  [540] = 540,
  [541] = 4,
  [542] = 6,
  [543] = 533,
  [544] = 8,
  [545] = 545,
  [546] = 546,
  [547] = 533,
  [548] = 548,
  [549] = 549,
  [550] = 14,
  [551] = 533,
  [552] = 13,
  [553] = 11,
  [554] = 19,
  [555] = 533,
  [556] = 533,
  [557] = 12,
  [558] = 36,
  [559] = 533,
  [560] = 560,
  [561] = 20,
  [562] = 33,
  [563] = 17,
  [564] = 16,
  [565] = 15,
  [566] = 566,
  [567] = 567,
  [568] = 37,
  [569] = 533,
  [570] = 40,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 6,
  [575] = 4,
  [576] = 153,
  [577] = 577,
  [578] = 8,
  [579] = 10,
  [580] = 373,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 585,
  [587] = 91,
  [588] = 582,
  [589] = 93,
  [590] = 90,
  [591] = 584,
  [592] = 92,
  [593] = 95,
  [594] = 93,
  [595] = 582,
  [596] = 584,
  [597] = 583,
  [598] = 584,
  [599] = 585,
  [600] = 600,
  [601] = 601,
  [602] = 582,
  [603] = 583,
  [604] = 585,
  [605] = 583,
  [606] = 606,
  [607] = 584,
  [608] = 608,
  [609] = 584,
  [610] = 91,
  [611] = 95,
  [612] = 582,
  [613] = 583,
  [614] = 585,
  [615] = 583,
  [616] = 92,
  [617] = 585,
  [618] = 90,
  [619] = 583,
  [620] = 582,
  [621] = 584,
  [622] = 584,
  [623] = 583,
  [624] = 582,
  [625] = 584,
  [626] = 583,
  [627] = 627,
  [628] = 585,
  [629] = 11,
  [630] = 19,
  [631] = 13,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 37,
  [636] = 16,
  [637] = 637,
  [638] = 17,
  [639] = 639,
  [640] = 6,
  [641] = 639,
  [642] = 20,
  [643] = 15,
  [644] = 36,
  [645] = 645,
  [646] = 639,
  [647] = 4,
  [648] = 648,
  [649] = 33,
  [650] = 639,
  [651] = 651,
  [652] = 8,
  [653] = 14,
  [654] = 654,
  [655] = 12,
  [656] = 656,
  [657] = 657,
  [658] = 657,
  [659] = 657,
  [660] = 153,
  [661] = 657,
  [662] = 10,
  [663] = 10,
  [664] = 657,
  [665] = 657,
  [666] = 666,
  [667] = 40,
  [668] = 10,
  [669] = 669,
  [670] = 93,
  [671] = 10,
  [672] = 672,
  [673] = 95,
  [674] = 91,
  [675] = 95,
  [676] = 95,
  [677] = 677,
  [678] = 93,
  [679] = 679,
  [680] = 91,
  [681] = 92,
  [682] = 93,
  [683] = 92,
  [684] = 91,
  [685] = 90,
  [686] = 90,
  [687] = 92,
  [688] = 90,
  [689] = 12,
  [690] = 4,
  [691] = 14,
  [692] = 692,
  [693] = 4,
  [694] = 91,
  [695] = 13,
  [696] = 95,
  [697] = 33,
  [698] = 100,
  [699] = 8,
  [700] = 118,
  [701] = 6,
  [702] = 11,
  [703] = 692,
  [704] = 4,
  [705] = 19,
  [706] = 692,
  [707] = 692,
  [708] = 36,
  [709] = 37,
  [710] = 20,
  [711] = 17,
  [712] = 117,
  [713] = 16,
  [714] = 16,
  [715] = 15,
  [716] = 98,
  [717] = 17,
  [718] = 20,
  [719] = 37,
  [720] = 19,
  [721] = 12,
  [722] = 692,
  [723] = 692,
  [724] = 33,
  [725] = 11,
  [726] = 692,
  [727] = 36,
  [728] = 13,
  [729] = 14,
  [730] = 15,
  [731] = 106,
  [732] = 102,
  [733] = 8,
  [734] = 36,
  [735] = 735,
  [736] = 6,
  [737] = 93,
  [738] = 692,
  [739] = 15,
  [740] = 11,
  [741] = 14,
  [742] = 13,
  [743] = 33,
  [744] = 744,
  [745] = 101,
  [746] = 20,
  [747] = 17,
  [748] = 16,
  [749] = 96,
  [750] = 12,
  [751] = 37,
  [752] = 752,
  [753] = 8,
  [754] = 6,
  [755] = 90,
  [756] = 116,
  [757] = 692,
  [758] = 92,
  [759] = 19,
  [760] = 760,
  [761] = 761,
  [762] = 37,
  [763] = 761,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 765,
  [768] = 8,
  [769] = 765,
  [770] = 764,
  [771] = 771,
  [772] = 764,
  [773] = 6,
  [774] = 774,
  [775] = 33,
  [776] = 13,
  [777] = 765,
  [778] = 764,
  [779] = 760,
  [780] = 137,
  [781] = 40,
  [782] = 16,
  [783] = 14,
  [784] = 760,
  [785] = 4,
  [786] = 761,
  [787] = 764,
  [788] = 765,
  [789] = 17,
  [790] = 20,
  [791] = 765,
  [792] = 774,
  [793] = 774,
  [794] = 774,
  [795] = 15,
  [796] = 760,
  [797] = 761,
  [798] = 19,
  [799] = 40,
  [800] = 761,
  [801] = 774,
  [802] = 761,
  [803] = 803,
  [804] = 804,
  [805] = 764,
  [806] = 765,
  [807] = 11,
  [808] = 139,
  [809] = 764,
  [810] = 774,
  [811] = 760,
  [812] = 761,
  [813] = 12,
  [814] = 764,
  [815] = 36,
  [816] = 765,
  [817] = 764,
  [818] = 40,
  [819] = 765,
  [820] = 142,
  [821] = 760,
  [822] = 774,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 439,
  [828] = 828,
  [829] = 40,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 837,
  [840] = 837,
  [841] = 837,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 848,
  [851] = 849,
  [852] = 852,
  [853] = 846,
  [854] = 847,
  [855] = 848,
  [856] = 849,
  [857] = 847,
  [858] = 858,
  [859] = 846,
  [860] = 837,
  [861] = 846,
  [862] = 847,
  [863] = 848,
  [864] = 849,
  [865] = 865,
  [866] = 866,
  [867] = 867,
  [868] = 846,
  [869] = 847,
  [870] = 848,
  [871] = 849,
  [872] = 849,
  [873] = 848,
  [874] = 847,
  [875] = 846,
  [876] = 847,
  [877] = 848,
  [878] = 849,
  [879] = 837,
  [880] = 837,
  [881] = 837,
  [882] = 837,
  [883] = 837,
  [884] = 846,
  [885] = 837,
  [886] = 886,
  [887] = 887,
  [888] = 888,
  [889] = 886,
  [890] = 887,
  [891] = 888,
  [892] = 888,
  [893] = 887,
  [894] = 894,
  [895] = 886,
  [896] = 896,
  [897] = 887,
  [898] = 888,
  [899] = 886,
  [900] = 900,
  [901] = 887,
  [902] = 888,
  [903] = 903,
  [904] = 904,
  [905] = 886,
  [906] = 887,
  [907] = 907,
  [908] = 908,
  [909] = 888,
  [910] = 910,
  [911] = 886,
  [912] = 912,
  [913] = 888,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 888,
  [919] = 886,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 887,
  [926] = 886,
  [927] = 927,
  [928] = 886,
  [929] = 923,
  [930] = 930,
  [931] = 886,
  [932] = 886,
  [933] = 933,
  [934] = 934,
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
  [7] = {.lex_state = 507},
  [8] = {.lex_state = 510},
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
  [22] = {.lex_state = 509},
  [23] = {.lex_state = 509},
  [24] = {.lex_state = 509},
  [25] = {.lex_state = 509},
  [26] = {.lex_state = 501},
  [27] = {.lex_state = 509},
  [28] = {.lex_state = 501},
  [29] = {.lex_state = 501},
  [30] = {.lex_state = 502},
  [31] = {.lex_state = 502},
  [32] = {.lex_state = 502},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 503},
  [35] = {.lex_state = 503},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 503},
  [39] = {.lex_state = 499},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 504},
  [42] = {.lex_state = 513},
  [43] = {.lex_state = 513},
  [44] = {.lex_state = 504},
  [45] = {.lex_state = 504},
  [46] = {.lex_state = 510},
  [47] = {.lex_state = 500},
  [48] = {.lex_state = 510},
  [49] = {.lex_state = 510},
  [50] = {.lex_state = 510},
  [51] = {.lex_state = 510},
  [52] = {.lex_state = 510},
  [53] = {.lex_state = 510},
  [54] = {.lex_state = 510},
  [55] = {.lex_state = 510},
  [56] = {.lex_state = 510},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 512},
  [59] = {.lex_state = 510},
  [60] = {.lex_state = 510},
  [61] = {.lex_state = 506},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 512},
  [64] = {.lex_state = 510},
  [65] = {.lex_state = 512},
  [66] = {.lex_state = 510},
  [67] = {.lex_state = 510},
  [68] = {.lex_state = 507},
  [69] = {.lex_state = 505},
  [70] = {.lex_state = 505},
  [71] = {.lex_state = 505},
  [72] = {.lex_state = 511},
  [73] = {.lex_state = 511},
  [74] = {.lex_state = 511},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 511},
  [78] = {.lex_state = 511},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 508},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 510},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 510},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 510},
  [101] = {.lex_state = 510},
  [102] = {.lex_state = 510},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 510},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 510},
  [117] = {.lex_state = 510},
  [118] = {.lex_state = 510},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 510},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 510},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 510},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 510},
  [140] = {.lex_state = 510},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 510},
  [143] = {.lex_state = 510},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 510},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 510},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 510},
  [152] = {.lex_state = 510},
  [153] = {.lex_state = 512},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 510},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 510},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 510},
  [160] = {.lex_state = 510},
  [161] = {.lex_state = 510},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 510},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 510},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 510},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 510},
  [187] = {.lex_state = 510},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 510},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 510},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 510},
  [198] = {.lex_state = 512},
  [199] = {.lex_state = 510},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 510},
  [203] = {.lex_state = 512},
  [204] = {.lex_state = 510},
  [205] = {.lex_state = 510},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 510},
  [208] = {.lex_state = 510},
  [209] = {.lex_state = 510},
  [210] = {.lex_state = 512},
  [211] = {.lex_state = 510},
  [212] = {.lex_state = 512},
  [213] = {.lex_state = 512},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 510},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 510},
  [225] = {.lex_state = 510},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 510},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 510},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 510},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 510},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 510},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 510},
  [246] = {.lex_state = 510},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 510},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 510},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 513},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 513},
  [270] = {.lex_state = 513},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 510},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 510},
  [286] = {.lex_state = 510},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 10},
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
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 10},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 3},
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
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 11},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 11},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 513},
  [375] = {.lex_state = 11},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 11},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 510},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 510},
  [386] = {.lex_state = 8},
  [387] = {.lex_state = 510},
  [388] = {.lex_state = 510},
  [389] = {.lex_state = 510},
  [390] = {.lex_state = 16},
  [391] = {.lex_state = 17},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 510},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 510},
  [397] = {.lex_state = 510},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 510},
  [401] = {.lex_state = 17},
  [402] = {.lex_state = 6},
  [403] = {.lex_state = 63},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 8},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 510},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 64},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 510},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 510},
  [418] = {.lex_state = 8},
  [419] = {.lex_state = 63},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 10},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 10},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 4},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 18},
  [430] = {.lex_state = 18},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 10},
  [434] = {.lex_state = 20},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 10},
  [441] = {.lex_state = 10},
  [442] = {.lex_state = 64},
  [443] = {.lex_state = 11},
  [444] = {.lex_state = 10},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 10},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 10},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 10},
  [454] = {.lex_state = 19},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 24},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 11},
  [459] = {.lex_state = 18},
  [460] = {.lex_state = 11},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 11},
  [464] = {.lex_state = 62},
  [465] = {.lex_state = 23},
  [466] = {.lex_state = 11},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 11},
  [469] = {.lex_state = 23},
  [470] = {.lex_state = 11},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 63},
  [473] = {.lex_state = 20},
  [474] = {.lex_state = 24},
  [475] = {.lex_state = 19},
  [476] = {.lex_state = 22},
  [477] = {.lex_state = 62},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 22},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 11},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 11},
  [487] = {.lex_state = 16},
  [488] = {.lex_state = 16},
  [489] = {.lex_state = 16},
  [490] = {.lex_state = 25},
  [491] = {.lex_state = 9},
  [492] = {.lex_state = 23},
  [493] = {.lex_state = 16},
  [494] = {.lex_state = 16},
  [495] = {.lex_state = 22},
  [496] = {.lex_state = 16},
  [497] = {.lex_state = 21},
  [498] = {.lex_state = 25},
  [499] = {.lex_state = 24},
  [500] = {.lex_state = 16},
  [501] = {.lex_state = 27},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 27},
  [504] = {.lex_state = 16},
  [505] = {.lex_state = 16},
  [506] = {.lex_state = 63},
  [507] = {.lex_state = 62},
  [508] = {.lex_state = 63},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 65},
  [511] = {.lex_state = 9},
  [512] = {.lex_state = 26},
  [513] = {.lex_state = 65},
  [514] = {.lex_state = 65},
  [515] = {.lex_state = 9},
  [516] = {.lex_state = 26},
  [517] = {.lex_state = 25},
  [518] = {.lex_state = 9},
  [519] = {.lex_state = 65},
  [520] = {.lex_state = 65},
  [521] = {.lex_state = 65},
  [522] = {.lex_state = 9},
  [523] = {.lex_state = 65},
  [524] = {.lex_state = 65},
  [525] = {.lex_state = 65},
  [526] = {.lex_state = 65},
  [527] = {.lex_state = 9},
  [528] = {.lex_state = 11},
  [529] = {.lex_state = 26},
  [530] = {.lex_state = 11},
  [531] = {.lex_state = 11},
  [532] = {.lex_state = 11},
  [533] = {.lex_state = 65},
  [534] = {.lex_state = 65},
  [535] = {.lex_state = 26},
  [536] = {.lex_state = 26},
  [537] = {.lex_state = 26},
  [538] = {.lex_state = 65},
  [539] = {.lex_state = 26},
  [540] = {.lex_state = 26},
  [541] = {.lex_state = 9},
  [542] = {.lex_state = 9},
  [543] = {.lex_state = 65},
  [544] = {.lex_state = 9},
  [545] = {.lex_state = 26},
  [546] = {.lex_state = 28},
  [547] = {.lex_state = 65},
  [548] = {.lex_state = 11},
  [549] = {.lex_state = 11},
  [550] = {.lex_state = 9},
  [551] = {.lex_state = 65},
  [552] = {.lex_state = 9},
  [553] = {.lex_state = 9},
  [554] = {.lex_state = 9},
  [555] = {.lex_state = 65},
  [556] = {.lex_state = 65},
  [557] = {.lex_state = 9},
  [558] = {.lex_state = 9},
  [559] = {.lex_state = 65},
  [560] = {.lex_state = 26},
  [561] = {.lex_state = 9},
  [562] = {.lex_state = 9},
  [563] = {.lex_state = 9},
  [564] = {.lex_state = 9},
  [565] = {.lex_state = 9},
  [566] = {.lex_state = 65},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 9},
  [569] = {.lex_state = 65},
  [570] = {.lex_state = 9},
  [571] = {.lex_state = 509},
  [572] = {.lex_state = 509},
  [573] = {.lex_state = 65},
  [574] = {.lex_state = 1},
  [575] = {.lex_state = 1},
  [576] = {.lex_state = 1},
  [577] = {.lex_state = 65},
  [578] = {.lex_state = 1},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 509},
  [583] = {.lex_state = 28},
  [584] = {.lex_state = 28},
  [585] = {.lex_state = 509},
  [586] = {.lex_state = 509},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 509},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 28},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 10},
  [595] = {.lex_state = 509},
  [596] = {.lex_state = 28},
  [597] = {.lex_state = 28},
  [598] = {.lex_state = 28},
  [599] = {.lex_state = 509},
  [600] = {.lex_state = 65},
  [601] = {.lex_state = 28},
  [602] = {.lex_state = 509},
  [603] = {.lex_state = 28},
  [604] = {.lex_state = 509},
  [605] = {.lex_state = 28},
  [606] = {.lex_state = 28},
  [607] = {.lex_state = 28},
  [608] = {.lex_state = 28},
  [609] = {.lex_state = 28},
  [610] = {.lex_state = 10},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 509},
  [613] = {.lex_state = 28},
  [614] = {.lex_state = 509},
  [615] = {.lex_state = 28},
  [616] = {.lex_state = 10},
  [617] = {.lex_state = 509},
  [618] = {.lex_state = 10},
  [619] = {.lex_state = 28},
  [620] = {.lex_state = 509},
  [621] = {.lex_state = 28},
  [622] = {.lex_state = 28},
  [623] = {.lex_state = 28},
  [624] = {.lex_state = 509},
  [625] = {.lex_state = 28},
  [626] = {.lex_state = 28},
  [627] = {.lex_state = 28},
  [628] = {.lex_state = 509},
  [629] = {.lex_state = 10},
  [630] = {.lex_state = 10},
  [631] = {.lex_state = 10},
  [632] = {.lex_state = 28},
  [633] = {.lex_state = 28},
  [634] = {.lex_state = 28},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 10},
  [637] = {.lex_state = 28},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 28},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 28},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 28},
  [646] = {.lex_state = 28},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 28},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 28},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 28},
  [657] = {.lex_state = 510},
  [658] = {.lex_state = 510},
  [659] = {.lex_state = 510},
  [660] = {.lex_state = 510},
  [661] = {.lex_state = 510},
  [662] = {.lex_state = 11},
  [663] = {.lex_state = 27},
  [664] = {.lex_state = 510},
  [665] = {.lex_state = 510},
  [666] = {.lex_state = 28},
  [667] = {.lex_state = 10},
  [668] = {.lex_state = 26},
  [669] = {.lex_state = 28},
  [670] = {.lex_state = 26},
  [671] = {.lex_state = 28},
  [672] = {.lex_state = 509},
  [673] = {.lex_state = 27},
  [674] = {.lex_state = 27},
  [675] = {.lex_state = 26},
  [676] = {.lex_state = 11},
  [677] = {.lex_state = 509},
  [678] = {.lex_state = 11},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 11},
  [681] = {.lex_state = 11},
  [682] = {.lex_state = 27},
  [683] = {.lex_state = 26},
  [684] = {.lex_state = 26},
  [685] = {.lex_state = 27},
  [686] = {.lex_state = 26},
  [687] = {.lex_state = 27},
  [688] = {.lex_state = 11},
  [689] = {.lex_state = 11},
  [690] = {.lex_state = 27},
  [691] = {.lex_state = 11},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 26},
  [694] = {.lex_state = 28},
  [695] = {.lex_state = 11},
  [696] = {.lex_state = 28},
  [697] = {.lex_state = 11},
  [698] = {.lex_state = 510},
  [699] = {.lex_state = 11},
  [700] = {.lex_state = 510},
  [701] = {.lex_state = 11},
  [702] = {.lex_state = 27},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 11},
  [705] = {.lex_state = 11},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 27},
  [709] = {.lex_state = 11},
  [710] = {.lex_state = 27},
  [711] = {.lex_state = 27},
  [712] = {.lex_state = 510},
  [713] = {.lex_state = 11},
  [714] = {.lex_state = 27},
  [715] = {.lex_state = 11},
  [716] = {.lex_state = 510},
  [717] = {.lex_state = 11},
  [718] = {.lex_state = 11},
  [719] = {.lex_state = 27},
  [720] = {.lex_state = 27},
  [721] = {.lex_state = 27},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 27},
  [725] = {.lex_state = 26},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 11},
  [728] = {.lex_state = 27},
  [729] = {.lex_state = 27},
  [730] = {.lex_state = 27},
  [731] = {.lex_state = 510},
  [732] = {.lex_state = 510},
  [733] = {.lex_state = 26},
  [734] = {.lex_state = 26},
  [735] = {.lex_state = 499},
  [736] = {.lex_state = 26},
  [737] = {.lex_state = 28},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 26},
  [740] = {.lex_state = 11},
  [741] = {.lex_state = 26},
  [742] = {.lex_state = 26},
  [743] = {.lex_state = 26},
  [744] = {.lex_state = 499},
  [745] = {.lex_state = 510},
  [746] = {.lex_state = 26},
  [747] = {.lex_state = 26},
  [748] = {.lex_state = 26},
  [749] = {.lex_state = 510},
  [750] = {.lex_state = 26},
  [751] = {.lex_state = 26},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 27},
  [754] = {.lex_state = 27},
  [755] = {.lex_state = 28},
  [756] = {.lex_state = 510},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 28},
  [759] = {.lex_state = 26},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 28},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 662},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 28},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 499},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 28},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 28},
  [776] = {.lex_state = 28},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 510},
  [781] = {.lex_state = 11},
  [782] = {.lex_state = 28},
  [783] = {.lex_state = 28},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 28},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 28},
  [790] = {.lex_state = 28},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 28},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 28},
  [799] = {.lex_state = 26},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 28},
  [808] = {.lex_state = 510},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 28},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 28},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 27},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 510},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 509},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 28},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 495},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 495},
  [840] = {.lex_state = 495},
  [841] = {.lex_state = 495},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 500},
  [844] = {.lex_state = 499},
  [845] = {.lex_state = 510},
  [846] = {.lex_state = 509},
  [847] = {.lex_state = 509},
  [848] = {.lex_state = 509},
  [849] = {.lex_state = 509},
  [850] = {.lex_state = 509},
  [851] = {.lex_state = 509},
  [852] = {.lex_state = 662},
  [853] = {.lex_state = 509},
  [854] = {.lex_state = 509},
  [855] = {.lex_state = 509},
  [856] = {.lex_state = 509},
  [857] = {.lex_state = 509},
  [858] = {.lex_state = 510},
  [859] = {.lex_state = 509},
  [860] = {.lex_state = 495},
  [861] = {.lex_state = 509},
  [862] = {.lex_state = 509},
  [863] = {.lex_state = 509},
  [864] = {.lex_state = 509},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 662},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 509},
  [869] = {.lex_state = 509},
  [870] = {.lex_state = 509},
  [871] = {.lex_state = 509},
  [872] = {.lex_state = 509},
  [873] = {.lex_state = 509},
  [874] = {.lex_state = 509},
  [875] = {.lex_state = 509},
  [876] = {.lex_state = 509},
  [877] = {.lex_state = 509},
  [878] = {.lex_state = 509},
  [879] = {.lex_state = 495},
  [880] = {.lex_state = 495},
  [881] = {.lex_state = 495},
  [882] = {.lex_state = 495},
  [883] = {.lex_state = 495},
  [884] = {.lex_state = 509},
  [885] = {.lex_state = 495},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 496},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 496},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 496},
  [894] = {.lex_state = 663},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 499},
  [897] = {.lex_state = 496},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 499},
  [901] = {.lex_state = 496},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 663},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 496},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 66},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 496},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
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
    [sym_source_file] = STATE(934),
    [sym__ontology_document] = STATE(933),
    [sym_prefix_declaration] = STATE(752),
    [sym_ontology] = STATE(933),
    [aux_sym__ontology_document_repeat1] = STATE(752),
    [anon_sym_Prefix_COLON] = ACTIONS(3),
    [anon_sym_Ontology_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
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
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 7,
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
  [85] = 15,
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
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 7,
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
  [168] = 1,
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
  [223] = 15,
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
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 7,
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
  [305] = 1,
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
  [358] = 15,
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
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 7,
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
  [439] = 1,
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
  [492] = 15,
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
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 7,
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
  [568] = 3,
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
  [619] = 1,
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
  [665] = 1,
    ACTIONS(49), 42,
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
  [710] = 1,
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
  [755] = 1,
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
  [800] = 1,
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
  [845] = 1,
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
  [890] = 1,
    ACTIONS(59), 42,
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
  [935] = 5,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_that,
    ACTIONS(68), 1,
      anon_sym_value,
    ACTIONS(66), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(61), 33,
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
  [988] = 1,
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
  [1033] = 1,
    ACTIONS(73), 41,
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
  [1077] = 3,
    ACTIONS(68), 1,
      anon_sym_value,
    ACTIONS(66), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(64), 34,
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
  [1125] = 8,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    STATE(851), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(81), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 31,
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
  [1183] = 8,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(91), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 31,
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
  [1241] = 7,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    STATE(859), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(95), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 31,
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
  [1296] = 7,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(99), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(97), 31,
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
  [1351] = 4,
    ACTIONS(105), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(103), 30,
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
  [1400] = 4,
    ACTIONS(113), 1,
      anon_sym_E,
    ACTIONS(110), 2,
      sym__non_zero,
      sym__zero,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 35,
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
  [1449] = 4,
    ACTIONS(119), 2,
      sym__non_zero,
      sym__zero,
    STATE(29), 2,
      sym__digit,
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
  [1498] = 4,
    ACTIONS(125), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(123), 30,
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
  [1547] = 4,
    ACTIONS(127), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(103), 28,
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
  [1594] = 4,
    ACTIONS(130), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(123), 28,
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
  [1641] = 4,
    ACTIONS(132), 2,
      sym__non_zero,
      sym__zero,
    STATE(31), 2,
      sym__digit,
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
  [1688] = 1,
    ACTIONS(134), 37,
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
  [1728] = 4,
    ACTIONS(136), 2,
      sym__non_zero,
      sym__zero,
    STATE(38), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(123), 27,
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
  [1774] = 4,
    ACTIONS(138), 2,
      sym__non_zero,
      sym__zero,
    STATE(34), 2,
      sym__digit,
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
  [1820] = 1,
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
  [1860] = 1,
    ACTIONS(142), 37,
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
  [1900] = 4,
    ACTIONS(144), 2,
      sym__non_zero,
      sym__zero,
    STATE(38), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(103), 27,
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
  [1946] = 2,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(149), 30,
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
  [1987] = 1,
    ACTIONS(151), 36,
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
  [2026] = 4,
    ACTIONS(153), 2,
      sym__non_zero,
      sym__zero,
    STATE(44), 2,
      sym__digit,
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
  [2071] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      anon_sym_Import_COLON,
    ACTIONS(159), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(161), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(163), 1,
      anon_sym_Class_COLON,
    ACTIONS(165), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(167), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(169), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(171), 1,
      anon_sym_Individual_COLON,
    STATE(86), 1,
      sym_version_iri,
    ACTIONS(173), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(175), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(177), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(87), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(138), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(426), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
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
  [2148] = 20,
    ACTIONS(157), 1,
      anon_sym_Import_COLON,
    ACTIONS(159), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(161), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(163), 1,
      anon_sym_Class_COLON,
    ACTIONS(165), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(167), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(169), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(171), 1,
      anon_sym_Individual_COLON,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    STATE(42), 1,
      sym_ontology_iri,
    ACTIONS(173), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(175), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(177), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(88), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(131), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(374), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
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
  [2225] = 4,
    ACTIONS(187), 2,
      sym__non_zero,
      sym__zero,
    STATE(45), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(123), 26,
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
  [2270] = 4,
    ACTIONS(189), 2,
      sym__non_zero,
      sym__zero,
    STATE(45), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(103), 26,
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
  [2315] = 2,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 33,
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
  [2354] = 2,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(149), 28,
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
  [2393] = 1,
    ACTIONS(196), 34,
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
  [2430] = 1,
    ACTIONS(198), 33,
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
  [2466] = 1,
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
  [2502] = 1,
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
  [2538] = 1,
    ACTIONS(204), 33,
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
  [2574] = 1,
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
  [2610] = 1,
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
  [2646] = 1,
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
  [2682] = 1,
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
  [2718] = 19,
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
    ACTIONS(212), 1,
      anon_sym_not,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(712), 1,
      sym_class_iri,
    STATE(808), 1,
      sym__conjunction,
    STATE(907), 1,
      sym_data_range,
    STATE(916), 1,
      sym_description,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(140), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(716), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2790] = 8,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(221), 1,
      anon_sym_inverse,
    ACTIONS(224), 1,
      sym__pn_local,
    ACTIONS(227), 1,
      sym__pname_ln,
    STATE(153), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
    ACTIONS(219), 18,
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
  [2840] = 1,
    ACTIONS(230), 33,
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
  [2876] = 1,
    ACTIONS(232), 33,
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
  [2912] = 2,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(149), 27,
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
  [2950] = 15,
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
    ACTIONS(212), 1,
      anon_sym_not,
    ACTIONS(7), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(53), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3014] = 8,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_inverse,
    ACTIONS(242), 1,
      sym__pn_local,
    ACTIONS(244), 1,
      sym__pname_ln,
    STATE(153), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
    ACTIONS(238), 18,
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
  [3064] = 1,
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
  [3100] = 8,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_inverse,
    ACTIONS(242), 1,
      sym__pn_local,
    ACTIONS(244), 1,
      sym__pname_ln,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(153), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(58), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
    ACTIONS(250), 18,
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
  [3150] = 1,
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
  [3186] = 1,
    ACTIONS(254), 32,
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
  [3221] = 2,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(149), 26,
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
  [3258] = 4,
    ACTIONS(256), 2,
      sym__non_zero,
      sym__zero,
    STATE(69), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(103), 21,
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
  [3298] = 4,
    ACTIONS(259), 2,
      sym__non_zero,
      sym__zero,
    STATE(69), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(123), 21,
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
  [3338] = 4,
    ACTIONS(261), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
      sym__digit,
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
  [3378] = 9,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(91), 1,
      anon_sym_f,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_F,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 21,
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
  [3428] = 9,
    ACTIONS(81), 1,
      anon_sym_f,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(271), 1,
      anon_sym_F,
    STATE(851), 1,
      sym__exponent,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 21,
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
  [3478] = 8,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(99), 1,
      anon_sym_f,
    ACTIONS(273), 1,
      anon_sym_F,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(97), 21,
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
  [3525] = 1,
    ACTIONS(275), 30,
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
  [3558] = 1,
    ACTIONS(277), 30,
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
  [3591] = 4,
    ACTIONS(113), 2,
      anon_sym_F,
      anon_sym_E,
    ACTIONS(279), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 24,
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
  [3630] = 8,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(95), 1,
      anon_sym_f,
    ACTIONS(282), 1,
      anon_sym_F,
    STATE(859), 1,
      sym__exponent,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
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
  [3677] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3733] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3789] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3845] = 16,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
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
    STATE(902), 1,
      sym__lexial_value,
    STATE(908), 1,
      sym__literal_list,
    STATE(917), 1,
      sym__individual_list,
    ACTIONS(286), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(828), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(824), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [3907] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3963] = 13,
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
    ACTIONS(35), 1,
      anon_sym_not,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4019] = 13,
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
    ACTIONS(212), 1,
      anon_sym_not,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4075] = 15,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_Import_COLON,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(89), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(124), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(258), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4134] = 15,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_Import_COLON,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(124), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(398), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(258), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4193] = 15,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_Import_COLON,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(138), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(398), 2,
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
  [4252] = 15,
    ACTIONS(298), 1,
      anon_sym_Import_COLON,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(134), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(398), 2,
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
  [4311] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(142), 25,
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
  [4345] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 25,
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
  [4379] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 25,
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
  [4413] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(95), 1,
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
  [4447] = 2,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(149), 21,
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
  [4479] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 25,
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
  [4513] = 3,
    ACTIONS(335), 1,
      anon_sym_and,
    STATE(116), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(333), 24,
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
  [4546] = 12,
    ACTIONS(337), 1,
      anon_sym_LT,
    ACTIONS(339), 1,
      anon_sym__COLON,
    ACTIONS(343), 1,
      anon_sym_PLUS,
    ACTIONS(345), 1,
      anon_sym_DASH,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(351), 1,
      sym__pn_local,
    ACTIONS(353), 1,
      sym__pname_ln,
    STATE(913), 1,
      sym__lexial_value,
    ACTIONS(341), 2,
      sym__non_zero,
      sym__zero,
    STATE(434), 2,
      aux_sym__digits,
      sym__digit,
    STATE(708), 13,
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
  [4597] = 3,
    ACTIONS(357), 1,
      anon_sym_and,
    STATE(101), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(355), 24,
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
  [4630] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(59), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4683] = 3,
    ACTIONS(359), 1,
      anon_sym_and,
    STATE(100), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(202), 24,
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
  [4716] = 3,
    ACTIONS(357), 1,
      anon_sym_and,
    STATE(100), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(362), 24,
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
  [4749] = 3,
    ACTIONS(335), 1,
      anon_sym_and,
    STATE(116), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 24,
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
  [4782] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(59), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4835] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(59), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4888] = 8,
    ACTIONS(368), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(371), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(374), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(377), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(380), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(383), 1,
      anon_sym_HasKey_COLON,
    STATE(105), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(366), 13,
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
  [4931] = 3,
    ACTIONS(335), 1,
      anon_sym_and,
    STATE(96), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 24,
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
  [4964] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(59), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5017] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(388), 1,
      anon_sym_PLUS,
    ACTIONS(390), 1,
      anon_sym_DASH,
    STATE(918), 1,
      sym__lexial_value,
    ACTIONS(386), 2,
      sym__non_zero,
      sym__zero,
    STATE(73), 2,
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
  [5068] = 12,
    ACTIONS(392), 1,
      anon_sym_LT,
    ACTIONS(394), 1,
      anon_sym__COLON,
    ACTIONS(398), 1,
      anon_sym_PLUS,
    ACTIONS(400), 1,
      anon_sym_DASH,
    ACTIONS(402), 1,
      anon_sym_DOT,
    ACTIONS(404), 1,
      sym__quoted_string,
    ACTIONS(406), 1,
      sym__pn_local,
    ACTIONS(408), 1,
      sym__pname_ln,
    STATE(892), 1,
      sym__lexial_value,
    ACTIONS(396), 2,
      sym__non_zero,
      sym__zero,
    STATE(484), 2,
      aux_sym__digits,
      sym__digit,
    STATE(815), 13,
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
  [5119] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(59), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5172] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
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
    STATE(918), 1,
      sym__lexial_value,
    ACTIONS(286), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
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
  [5223] = 12,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(412), 1,
      anon_sym__COLON,
    ACTIONS(416), 1,
      anon_sym_PLUS,
    ACTIONS(418), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      anon_sym_DOT,
    ACTIONS(422), 1,
      sym__quoted_string,
    ACTIONS(424), 1,
      sym__pn_local,
    ACTIONS(426), 1,
      sym__pname_ln,
    STATE(888), 1,
      sym__lexial_value,
    ACTIONS(414), 2,
      sym__non_zero,
      sym__zero,
    STATE(365), 2,
      aux_sym__digits,
      sym__digit,
    STATE(644), 13,
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
  [5274] = 13,
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
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(59), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(18), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5327] = 12,
    ACTIONS(428), 1,
      anon_sym_LT,
    ACTIONS(430), 1,
      anon_sym__COLON,
    ACTIONS(434), 1,
      anon_sym_PLUS,
    ACTIONS(436), 1,
      anon_sym_DASH,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(440), 1,
      sym__quoted_string,
    ACTIONS(442), 1,
      sym__pn_local,
    ACTIONS(444), 1,
      sym__pname_ln,
    STATE(891), 1,
      sym__lexial_value,
    ACTIONS(432), 2,
      sym__non_zero,
      sym__zero,
    STATE(445), 2,
      aux_sym__digits,
      sym__digit,
    STATE(727), 13,
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
  [5378] = 12,
    ACTIONS(446), 1,
      anon_sym_LT,
    ACTIONS(448), 1,
      anon_sym__COLON,
    ACTIONS(452), 1,
      anon_sym_PLUS,
    ACTIONS(454), 1,
      anon_sym_DASH,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      sym__quoted_string,
    ACTIONS(460), 1,
      sym__pn_local,
    ACTIONS(462), 1,
      sym__pname_ln,
    STATE(898), 1,
      sym__lexial_value,
    ACTIONS(450), 2,
      sym__non_zero,
      sym__zero,
    STATE(430), 2,
      aux_sym__digits,
      sym__digit,
    STATE(734), 13,
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
  [5429] = 3,
    ACTIONS(464), 1,
      anon_sym_and,
    STATE(116), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(198), 24,
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
  [5462] = 2,
    ACTIONS(469), 1,
      anon_sym_that,
    ACTIONS(467), 25,
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
  [5493] = 3,
    ACTIONS(335), 1,
      anon_sym_and,
    STATE(102), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(471), 24,
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
  [5526] = 8,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(475), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(477), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(479), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(481), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(483), 1,
      anon_sym_HasKey_COLON,
    STATE(105), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(473), 13,
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
  [5569] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(487), 1,
      anon_sym_PLUS,
    ACTIONS(489), 1,
      anon_sym_DASH,
    STATE(918), 1,
      sym__lexial_value,
    ACTIONS(485), 2,
      sym__non_zero,
      sym__zero,
    STATE(371), 2,
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
  [5620] = 12,
    ACTIONS(491), 1,
      anon_sym_LT,
    ACTIONS(493), 1,
      anon_sym__COLON,
    ACTIONS(497), 1,
      anon_sym_PLUS,
    ACTIONS(499), 1,
      anon_sym_DASH,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(503), 1,
      sym__quoted_string,
    ACTIONS(505), 1,
      sym__pn_local,
    ACTIONS(507), 1,
      sym__pname_ln,
    STATE(909), 1,
      sym__lexial_value,
    ACTIONS(495), 2,
      sym__non_zero,
      sym__zero,
    STATE(272), 2,
      aux_sym__digits,
      sym__digit,
    STATE(558), 13,
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
  [5671] = 8,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(475), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(477), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(479), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(481), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(483), 1,
      anon_sym_HasKey_COLON,
    STATE(119), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(509), 13,
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
  [5714] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(513), 1,
      anon_sym_not,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__annotations,
    STATE(338), 1,
      sym__description_2list,
    STATE(712), 1,
      sym_class_iri,
    STATE(808), 1,
      sym__conjunction,
    STATE(929), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(716), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5774] = 13,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(395), 2,
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
  [5826] = 3,
    ACTIONS(521), 1,
      anon_sym_and,
    STATE(125), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(519), 23,
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
  [5858] = 1,
    ACTIONS(524), 25,
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
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(197), 1,
      sym_class_iri,
    STATE(238), 1,
      sym__conjunction,
    STATE(260), 1,
      sym__annotations,
    STATE(291), 1,
      sym_description,
    STATE(337), 1,
      sym__description_annotated_list,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5946] = 1,
    ACTIONS(528), 25,
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
  [5974] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_not,
    STATE(234), 1,
      sym_class_iri,
    STATE(261), 1,
      sym__annotations,
    STATE(282), 1,
      sym__conjunction,
    STATE(323), 1,
      sym_description,
    STATE(372), 1,
      sym__description_annotated_list,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(232), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6034] = 3,
    ACTIONS(534), 1,
      anon_sym_and,
    STATE(125), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(532), 23,
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
  [6066] = 13,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(395), 2,
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
  [6118] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(197), 1,
      sym_class_iri,
    STATE(238), 1,
      sym__conjunction,
    STATE(260), 1,
      sym__annotations,
    STATE(291), 1,
      sym_description,
    STATE(360), 1,
      sym__description_annotated_list,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6178] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(197), 1,
      sym_class_iri,
    STATE(238), 1,
      sym__conjunction,
    STATE(260), 1,
      sym__annotations,
    STATE(291), 1,
      sym_description,
    STATE(351), 1,
      sym__description_annotated_list,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6238] = 13,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(395), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(259), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6290] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(513), 1,
      anon_sym_not,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__annotations,
    STATE(509), 1,
      sym__description_2list,
    STATE(712), 1,
      sym_class_iri,
    STATE(808), 1,
      sym__conjunction,
    STATE(923), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(716), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6350] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      anon_sym_not,
    STATE(170), 1,
      sym_class_iri,
    STATE(199), 1,
      sym__conjunction,
    STATE(218), 1,
      sym_description,
    STATE(244), 1,
      sym__annotations,
    STATE(313), 1,
      sym__description_annotated_list,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(161), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6410] = 3,
    ACTIONS(542), 1,
      anon_sym_or,
    STATE(142), 1,
      aux_sym_description_repeat1,
    ACTIONS(540), 23,
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
  [6442] = 13,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(395), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(258), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6494] = 3,
    ACTIONS(542), 1,
      anon_sym_or,
    STATE(137), 1,
      aux_sym_description_repeat1,
    ACTIONS(544), 23,
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
  [6526] = 3,
    ACTIONS(534), 1,
      anon_sym_and,
    STATE(130), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(546), 23,
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
  [6558] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_not,
    STATE(117), 1,
      sym_class_iri,
    STATE(139), 1,
      sym__conjunction,
    STATE(145), 1,
      sym_description,
    STATE(216), 1,
      sym__description_annotated_list,
    STATE(227), 1,
      sym__annotations,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(98), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6618] = 3,
    ACTIONS(550), 1,
      anon_sym_or,
    STATE(142), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 23,
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
  [6650] = 3,
    ACTIONS(553), 1,
      anon_sym_and,
    STATE(175), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(333), 22,
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
  [6681] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [6712] = 3,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [6743] = 3,
    ACTIONS(563), 1,
      anon_sym_and,
    STATE(146), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(202), 22,
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
  [6774] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [6805] = 3,
    ACTIONS(572), 1,
      anon_sym_or,
    STATE(148), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(570), 22,
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
  [6836] = 7,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(581), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(583), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(579), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(178), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(577), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(575), 13,
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
  [6875] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      anon_sym_not,
    STATE(75), 1,
      sym_description,
    STATE(170), 1,
      sym_class_iri,
    STATE(199), 1,
      sym__conjunction,
    STATE(240), 1,
      sym__annotations,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(161), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6932] = 3,
    ACTIONS(553), 1,
      anon_sym_and,
    STATE(175), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 22,
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
  [6963] = 3,
    ACTIONS(553), 1,
      anon_sym_and,
    STATE(143), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 22,
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
  [6994] = 2,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(585), 20,
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
  [7023] = 3,
    ACTIONS(590), 1,
      anon_sym_o,
    STATE(154), 1,
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
  [7054] = 3,
    ACTIONS(553), 1,
      anon_sym_and,
    STATE(151), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(471), 22,
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
  [7085] = 3,
    ACTIONS(595), 1,
      anon_sym_o,
    STATE(154), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(593), 22,
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
  [7116] = 1,
    ACTIONS(519), 24,
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
  [7143] = 3,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(597), 22,
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
  [7174] = 3,
    ACTIONS(599), 1,
      anon_sym_and,
    STATE(146), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(362), 22,
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
  [7205] = 3,
    ACTIONS(603), 1,
      anon_sym_or,
    STATE(167), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(601), 22,
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
  [7236] = 3,
    ACTIONS(599), 1,
      anon_sym_and,
    STATE(159), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(355), 22,
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
  [7267] = 3,
    ACTIONS(557), 1,
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
  [7298] = 3,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(275), 22,
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
  [7329] = 3,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(610), 22,
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
  [7360] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(75), 1,
      sym_description,
    STATE(197), 1,
      sym_class_iri,
    STATE(238), 1,
      sym__conjunction,
    STATE(247), 1,
      sym__annotations,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7417] = 3,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(615), 22,
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
  [7448] = 3,
    ACTIONS(603), 1,
      anon_sym_or,
    STATE(148), 1,
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
  [7479] = 3,
    ACTIONS(595), 1,
      anon_sym_o,
    STATE(154), 1,
      aux_sym_object_property_frame_repeat1,
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
  [7510] = 3,
    ACTIONS(595), 1,
      anon_sym_o,
    STATE(156), 1,
      aux_sym_object_property_frame_repeat1,
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
  [7541] = 2,
    ACTIONS(624), 1,
      anon_sym_that,
    ACTIONS(467), 23,
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
  [7570] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [7601] = 3,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(626), 22,
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
  [7632] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_not,
    STATE(75), 1,
      sym_description,
    STATE(117), 1,
      sym_class_iri,
    STATE(139), 1,
      sym__conjunction,
    STATE(257), 1,
      sym__annotations,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(98), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7689] = 3,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(626), 22,
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
  [7720] = 3,
    ACTIONS(628), 1,
      anon_sym_and,
    STATE(175), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(198), 22,
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
  [7751] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(631), 22,
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
  [7782] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(511), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_not,
    STATE(75), 1,
      sym_description,
    STATE(234), 1,
      sym_class_iri,
    STATE(248), 1,
      sym__annotations,
    STATE(282), 1,
      sym__conjunction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(232), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7839] = 7,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(581), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(583), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(579), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(182), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(577), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(633), 13,
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
  [7878] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(635), 22,
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
  [7909] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(637), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(229), 1,
      sym_data_range,
    STATE(276), 1,
      sym__annotations,
    STATE(313), 1,
      sym__data_range_annotated_list,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(140), 3,
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
  [7964] = 3,
    ACTIONS(595), 1,
      anon_sym_o,
    STATE(168), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(645), 22,
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
  [7995] = 7,
    ACTIONS(647), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(656), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(659), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(653), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(182), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(650), 4,
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
  [8034] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(662), 22,
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
  [8065] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(662), 22,
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
  [8096] = 1,
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
  [8122] = 3,
    ACTIONS(664), 1,
      anon_sym_or,
    STATE(186), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 21,
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
  [8152] = 3,
    ACTIONS(667), 1,
      anon_sym_and,
    STATE(209), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 21,
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
  [8182] = 1,
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
  [8208] = 1,
    ACTIONS(669), 23,
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
  [8234] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(637), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(292), 1,
      sym__annotations,
    STATE(483), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(140), 3,
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
  [8286] = 1,
    ACTIONS(671), 23,
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
  [8312] = 1,
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
  [8338] = 3,
    ACTIONS(673), 1,
      anon_sym_and,
    STATE(205), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(362), 21,
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
  [8368] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_not,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym__description_2list,
    STATE(712), 1,
      sym_class_iri,
    STATE(808), 1,
      sym__conjunction,
    STATE(929), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(716), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8422] = 3,
    ACTIONS(667), 1,
      anon_sym_and,
    STATE(208), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(471), 21,
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
  [8452] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(637), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(288), 1,
      sym__annotations,
    STATE(294), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(140), 3,
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
  [8504] = 2,
    ACTIONS(675), 1,
      anon_sym_that,
    ACTIONS(467), 22,
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
  [8532] = 2,
    ACTIONS(524), 3,
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
  [8560] = 3,
    ACTIONS(679), 1,
      anon_sym_or,
    STATE(202), 1,
      aux_sym_description_repeat1,
    ACTIONS(544), 21,
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
  [8590] = 1,
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
  [8616] = 1,
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
  [8642] = 3,
    ACTIONS(679), 1,
      anon_sym_or,
    STATE(186), 1,
      aux_sym_description_repeat1,
    ACTIONS(540), 21,
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
  [8672] = 2,
    ACTIONS(528), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(681), 20,
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
  [8700] = 3,
    ACTIONS(673), 1,
      anon_sym_and,
    STATE(193), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(355), 21,
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
  [8730] = 3,
    ACTIONS(683), 1,
      anon_sym_and,
    STATE(205), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(202), 21,
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
  [8760] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_not,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym__description_2list,
    STATE(712), 1,
      sym_class_iri,
    STATE(808), 1,
      sym__conjunction,
    STATE(923), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(716), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8814] = 1,
    ACTIONS(570), 23,
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
  [8840] = 3,
    ACTIONS(667), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 21,
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
  [8870] = 3,
    ACTIONS(667), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(333), 21,
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
  [8900] = 2,
    ACTIONS(29), 3,
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
  [8928] = 3,
    ACTIONS(688), 1,
      anon_sym_and,
    STATE(211), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(198), 21,
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
  [8958] = 2,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(691), 20,
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
  [8986] = 2,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(693), 20,
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
  [9014] = 1,
    ACTIONS(610), 23,
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
  [9040] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym__data_range_annotated_list_repeat1,
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
  [9069] = 1,
    ACTIONS(645), 22,
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
  [9094] = 7,
    ACTIONS(701), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(707), 1,
      anon_sym_Domain_COLON,
    ACTIONS(710), 1,
      anon_sym_Range_COLON,
    ACTIONS(713), 1,
      anon_sym_Characteristics_COLON,
    STATE(217), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(704), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(699), 13,
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
  [9131] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [9160] = 11,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(228), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9205] = 7,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(722), 1,
      anon_sym_Domain_COLON,
    ACTIONS(724), 1,
      anon_sym_Range_COLON,
    ACTIONS(726), 1,
      anon_sym_Characteristics_COLON,
    STATE(233), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(720), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(718), 13,
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
  [9242] = 3,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
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
  [9271] = 3,
    ACTIONS(732), 1,
      anon_sym_and,
    STATE(246), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 20,
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
  [9300] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_not,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(712), 1,
      sym_class_iri,
    STATE(808), 1,
      sym__conjunction,
    STATE(916), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(716), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9351] = 3,
    ACTIONS(734), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 20,
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
  [9380] = 3,
    ACTIONS(732), 1,
      anon_sym_and,
    STATE(250), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(471), 20,
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
  [9409] = 11,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(228), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9454] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_not,
    STATE(117), 1,
      sym_class_iri,
    STATE(139), 1,
      sym__conjunction,
    STATE(172), 1,
      sym_description,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(98), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9505] = 11,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
    ACTIONS(739), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(742), 1,
      anon_sym_Class_COLON,
    ACTIONS(745), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(748), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(751), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(754), 1,
      anon_sym_Individual_COLON,
    ACTIONS(757), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(760), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(763), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(228), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9550] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(766), 20,
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
  [9579] = 3,
    ACTIONS(768), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_description_repeat1,
    ACTIONS(540), 20,
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
  [9608] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(197), 1,
      sym_class_iri,
    STATE(238), 1,
      sym__conjunction,
    STATE(303), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9659] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(241), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(355), 20,
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
  [9688] = 7,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(722), 1,
      anon_sym_Domain_COLON,
    ACTIONS(724), 1,
      anon_sym_Range_COLON,
    ACTIONS(726), 1,
      anon_sym_Characteristics_COLON,
    STATE(217), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(720), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(772), 13,
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
  [9725] = 2,
    ACTIONS(774), 1,
      anon_sym_that,
    ACTIONS(467), 21,
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
  [9752] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(197), 1,
      sym_class_iri,
    STATE(238), 1,
      sym__conjunction,
    STATE(267), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9803] = 3,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(776), 20,
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
  [9832] = 3,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(781), 20,
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
  [9861] = 3,
    ACTIONS(768), 1,
      anon_sym_or,
    STATE(230), 1,
      aux_sym_description_repeat1,
    ACTIONS(544), 20,
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
  [9890] = 3,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(275), 20,
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
  [9919] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(170), 1,
      sym_class_iri,
    STATE(199), 1,
      sym__conjunction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(161), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9970] = 3,
    ACTIONS(770), 1,
      anon_sym_and,
    STATE(252), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(362), 20,
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
  [9999] = 11,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(228), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10044] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(626), 20,
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
  [10073] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      anon_sym_not,
    STATE(170), 1,
      sym_class_iri,
    STATE(199), 1,
      sym__conjunction,
    STATE(264), 1,
      sym_description,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(161), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10124] = 3,
    ACTIONS(789), 1,
      anon_sym_and,
    STATE(245), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(198), 20,
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
  [10153] = 3,
    ACTIONS(732), 1,
      anon_sym_and,
    STATE(245), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(333), 20,
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
  [10182] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(197), 1,
      sym_class_iri,
    STATE(238), 1,
      sym__conjunction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10233] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(234), 1,
      sym_class_iri,
    STATE(282), 1,
      sym__conjunction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(232), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10284] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(597), 20,
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
    ACTIONS(732), 1,
      anon_sym_and,
    STATE(245), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 20,
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
  [10342] = 3,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(221), 1,
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
  [10371] = 3,
    ACTIONS(794), 1,
      anon_sym_and,
    STATE(252), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(202), 20,
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
  [10400] = 3,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(237), 1,
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
  [10429] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(215), 1,
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
  [10458] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(799), 1,
      anon_sym_not,
    STATE(400), 1,
      sym_class_iri,
    STATE(415), 1,
      sym__conjunction,
    STATE(431), 1,
      sym_description,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(396), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10509] = 3,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(236), 1,
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
  [10538] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(117), 1,
      sym_class_iri,
    STATE(139), 1,
      sym__conjunction,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(98), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10589] = 11,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(228), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10634] = 11,
    ACTIONS(302), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(304), 1,
      anon_sym_Class_COLON,
    ACTIONS(306), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(312), 1,
      anon_sym_Individual_COLON,
    ACTIONS(801), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(316), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(318), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(228), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10679] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(197), 1,
      sym_class_iri,
    STATE(238), 1,
      sym__conjunction,
    STATE(273), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10730] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_not,
    STATE(234), 1,
      sym_class_iri,
    STATE(282), 1,
      sym__conjunction,
    STATE(306), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(232), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10781] = 3,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(253), 1,
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
  [10810] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(799), 1,
      anon_sym_not,
    STATE(303), 1,
      sym_description,
    STATE(400), 1,
      sym_class_iri,
    STATE(415), 1,
      sym__conjunction,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(396), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10861] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(626), 20,
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
  [10890] = 2,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(686), 15,
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
  [10916] = 3,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(275), 19,
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
  [10944] = 3,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(808), 19,
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
  [10972] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(117), 1,
      sym_class_iri,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(98), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11020] = 2,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(691), 15,
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
  [11046] = 2,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(693), 15,
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
  [11072] = 1,
    ACTIONS(66), 21,
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
  [11096] = 8,
    ACTIONS(816), 1,
      anon_sym_DOT,
    STATE(856), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(814), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(818), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(327), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(812), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11134] = 3,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(626), 19,
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
  [11162] = 3,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(626), 19,
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
  [11190] = 8,
    ACTIONS(824), 1,
      anon_sym_DOT,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(814), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(826), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(327), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 5,
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
  [11228] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(254), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(140), 3,
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
  [11274] = 1,
    ACTIONS(828), 21,
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
  [11298] = 1,
    ACTIONS(830), 21,
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
  [11322] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(799), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(400), 1,
      sym_class_iri,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(396), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11370] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(197), 1,
      sym_class_iri,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(204), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11418] = 3,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym__description_2list_repeat1,
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
  [11446] = 3,
    ACTIONS(834), 1,
      anon_sym_or,
    STATE(285), 1,
      aux_sym_description_repeat1,
    ACTIONS(544), 19,
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
  [11474] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(170), 1,
      sym_class_iri,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(161), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11522] = 1,
    ACTIONS(781), 21,
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
  [11546] = 3,
    ACTIONS(834), 1,
      anon_sym_or,
    STATE(286), 1,
      aux_sym_description_repeat1,
    ACTIONS(540), 19,
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
  [11574] = 3,
    ACTIONS(836), 1,
      anon_sym_or,
    STATE(286), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 19,
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
  [11602] = 3,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(839), 19,
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
  [11630] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(277), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(140), 3,
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
  [11676] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_not,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym__conjunction,
    STATE(712), 1,
      sym_class_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(716), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11724] = 3,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(597), 19,
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
  [11752] = 3,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [11780] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(462), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(140), 3,
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
  [11826] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(234), 1,
      sym_class_iri,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(232), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11874] = 1,
    ACTIONS(776), 21,
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
  [11898] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(907), 1,
      sym_data_range,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(140), 3,
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
  [11944] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(844), 18,
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
  [11971] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_not,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(51), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12014] = 3,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(848), 18,
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
  [12041] = 1,
    ACTIONS(853), 20,
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
  [12064] = 3,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(855), 18,
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
  [12091] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(860), 18,
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
  [12118] = 3,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(275), 18,
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
  [12145] = 1,
    ACTIONS(839), 20,
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
  [12168] = 6,
    ACTIONS(869), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(871), 1,
      anon_sym_Types_COLON,
    ACTIONS(873), 1,
      anon_sym_Facts_COLON,
    ACTIONS(875), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(328), 2,
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
  [12201] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(799), 1,
      anon_sym_not,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(51), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12244] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(626), 18,
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
  [12271] = 3,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(317), 1,
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
  [12298] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym__fact_annotated_list_repeat1,
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
  [12325] = 3,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 18,
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
  [12352] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym__fact_annotated_list_repeat1,
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
  [12379] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym__individual_annotated_list_repeat1,
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
  [12406] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym__individual_annotated_list_repeat1,
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
  [12433] = 1,
    ACTIONS(699), 20,
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
  [12456] = 3,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(142), 18,
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
  [12483] = 3,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 18,
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
  [12510] = 7,
    STATE(854), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(890), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(892), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(359), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(97), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(888), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12545] = 3,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 18,
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
  [12572] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(597), 18,
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
  [12599] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_not,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(51), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12642] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_not,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(51), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12685] = 7,
    STATE(853), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(890), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(896), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(359), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(894), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12720] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(898), 18,
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
  [12747] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [12774] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(900), 18,
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
  [12801] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym__data_conjunction,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(140), 3,
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
  [12844] = 3,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(626), 18,
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
  [12871] = 4,
    ACTIONS(902), 2,
      sym__non_zero,
      sym__zero,
    STATE(327), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 11,
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
  [12900] = 6,
    ACTIONS(907), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(910), 1,
      anon_sym_Types_COLON,
    ACTIONS(913), 1,
      anon_sym_Facts_COLON,
    ACTIONS(916), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(328), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(905), 13,
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
  [12933] = 6,
    ACTIONS(869), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(871), 1,
      anon_sym_Types_COLON,
    ACTIONS(873), 1,
      anon_sym_Facts_COLON,
    ACTIONS(875), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(304), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(919), 13,
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
  [12966] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_not,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(51), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13009] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      anon_sym_not,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(51), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13052] = 4,
    ACTIONS(921), 2,
      sym__non_zero,
      sym__zero,
    STATE(336), 2,
      sym__digit,
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
  [13080] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(333), 1,
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
  [13106] = 1,
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
  [13128] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(639), 1,
      anon_sym_not,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(157), 3,
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
  [13168] = 4,
    ACTIONS(930), 2,
      sym__non_zero,
      sym__zero,
    STATE(348), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(121), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(123), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13196] = 1,
    ACTIONS(932), 19,
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
  [13218] = 1,
    ACTIONS(934), 19,
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
  [13240] = 3,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(936), 17,
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
  [13266] = 1,
    ACTIONS(940), 19,
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
  [13288] = 1,
    ACTIONS(942), 19,
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
  [13310] = 1,
    ACTIONS(944), 19,
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
  [13332] = 1,
    ACTIONS(946), 19,
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
  [13354] = 3,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
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
  [13380] = 5,
    ACTIONS(954), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(960), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(957), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(345), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(952), 13,
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
  [13410] = 1,
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
  [13432] = 3,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
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
  [13458] = 4,
    ACTIONS(967), 2,
      sym__non_zero,
      sym__zero,
    STATE(348), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(101), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(103), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13486] = 3,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(970), 17,
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
  [13512] = 3,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
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
  [13538] = 1,
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
  [13560] = 3,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(974), 17,
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
  [13586] = 3,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(979), 17,
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
  [13612] = 3,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(981), 17,
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
  [13638] = 1,
    ACTIONS(64), 19,
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
  [13660] = 1,
    ACTIONS(855), 19,
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
  [13682] = 3,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(981), 17,
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
  [13708] = 1,
    ACTIONS(848), 19,
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
  [13730] = 4,
    ACTIONS(983), 2,
      sym__non_zero,
      sym__zero,
    STATE(359), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 10,
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
  [13758] = 1,
    ACTIONS(986), 19,
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
  [13780] = 5,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(992), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(990), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(988), 13,
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
  [13810] = 5,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(992), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(990), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(345), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(994), 13,
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
  [13840] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13879] = 5,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(998), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(408), 1,
      sym_datatype_equavalent_to,
    STATE(399), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(996), 13,
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
  [13908] = 8,
    ACTIONS(1002), 1,
      anon_sym_DOT,
    STATE(878), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1000), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1004), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(402), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(812), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13943] = 5,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(998), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(409), 1,
      sym_datatype_equavalent_to,
    STATE(364), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1006), 13,
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
  [13972] = 1,
    ACTIONS(974), 18,
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
  [13993] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14032] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14071] = 1,
    ACTIONS(923), 18,
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
  [14092] = 8,
    ACTIONS(81), 1,
      anon_sym_f,
    ACTIONS(271), 1,
      anon_sym_F,
    ACTIONS(1010), 1,
      anon_sym_DOT,
    STATE(851), 1,
      sym__exponent,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1008), 2,
      sym__non_zero,
      sym__zero,
    STATE(401), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14127] = 1,
    ACTIONS(905), 18,
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
  [14148] = 1,
    ACTIONS(1012), 18,
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
  [14169] = 2,
    ACTIONS(1014), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1016), 15,
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
  [14192] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14231] = 8,
    ACTIONS(91), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_F,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1008), 2,
      sym__non_zero,
      sym__zero,
    STATE(401), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14266] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14305] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(55), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(21), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14344] = 8,
    ACTIONS(1020), 1,
      anon_sym_DOT,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1000), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1022), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(402), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(822), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(87), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14379] = 1,
    ACTIONS(1024), 18,
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
  [14400] = 1,
    ACTIONS(1026), 18,
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
  [14421] = 3,
    ACTIONS(1028), 1,
      anon_sym_and,
    STATE(397), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(333), 15,
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
  [14445] = 8,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1032), 1,
      anon_sym_DOT,
    STATE(902), 1,
      sym__lexial_value,
    STATE(908), 1,
      sym__literal_list,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1030), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(824), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [14479] = 7,
    ACTIONS(95), 1,
      anon_sym_f,
    ACTIONS(282), 1,
      anon_sym_F,
    STATE(859), 1,
      sym__exponent,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1008), 2,
      sym__non_zero,
      sym__zero,
    STATE(401), 2,
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
  [14511] = 3,
    ACTIONS(1028), 1,
      anon_sym_and,
    STATE(382), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 15,
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
  [14535] = 7,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1034), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1036), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(418), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(894), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14567] = 3,
    ACTIONS(1028), 1,
      anon_sym_and,
    STATE(397), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 15,
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
    ACTIONS(1038), 1,
      anon_sym_and,
    STATE(388), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(202), 15,
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
  [14615] = 3,
    ACTIONS(1028), 1,
      anon_sym_and,
    STATE(387), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(471), 15,
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
  [14639] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(46), 2,
      sym__datatype,
      sym_datatype_iri,
    STATE(59), 2,
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
  [14675] = 7,
    ACTIONS(99), 1,
      anon_sym_f,
    ACTIONS(273), 1,
      anon_sym_F,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1008), 2,
      sym__non_zero,
      sym__zero,
    STATE(401), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(97), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14707] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1032), 1,
      anon_sym_DOT,
    STATE(902), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1030), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(833), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [14739] = 3,
    ACTIONS(1041), 1,
      anon_sym_and,
    STATE(388), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(362), 15,
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
  [14763] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1032), 1,
      anon_sym_DOT,
    STATE(902), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1030), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(867), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [14795] = 3,
    ACTIONS(1045), 1,
      anon_sym_Annotations_COLON,
    STATE(395), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1043), 14,
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
  [14819] = 3,
    ACTIONS(1041), 1,
      anon_sym_and,
    STATE(393), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(355), 15,
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
  [14843] = 3,
    ACTIONS(1048), 1,
      anon_sym_and,
    STATE(397), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(198), 15,
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
  [14867] = 3,
    ACTIONS(1053), 1,
      anon_sym_Import_COLON,
    STATE(398), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    ACTIONS(1051), 14,
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
  [14891] = 4,
    ACTIONS(1043), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(1045), 1,
      anon_sym_Annotations_COLON,
    STATE(395), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1056), 13,
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
  [14917] = 2,
    ACTIONS(1059), 1,
      anon_sym_that,
    ACTIONS(467), 16,
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
  [14939] = 4,
    ACTIONS(113), 1,
      anon_sym_F,
    ACTIONS(1061), 2,
      sym__non_zero,
      sym__zero,
    STATE(401), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 12,
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
  [14965] = 4,
    ACTIONS(1064), 2,
      sym__non_zero,
      sym__zero,
    STATE(402), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 8,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [14991] = 10,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    ACTIONS(1067), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1069), 1,
      anon_sym_inverse,
    STATE(443), 1,
      sym__annotations,
    STATE(509), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(921), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(922), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(153), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15029] = 1,
    ACTIONS(952), 17,
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
  [15049] = 7,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1034), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1071), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(418), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(888), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(97), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15081] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1032), 1,
      anon_sym_DOT,
    STATE(918), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1030), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(56), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15112] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1032), 1,
      anon_sym_DOT,
    STATE(918), 1,
      sym__lexial_value,
    ACTIONS(388), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1073), 2,
      sym__non_zero,
      sym__zero,
    STATE(73), 2,
      aux_sym__digits,
      sym__digit,
    STATE(56), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15143] = 3,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    STATE(416), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1075), 13,
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
  [15166] = 3,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    STATE(411), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(996), 13,
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
  [15189] = 3,
    ACTIONS(1077), 1,
      anon_sym_or,
    STATE(410), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 14,
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
  [15212] = 3,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    STATE(395), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1075), 13,
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
  [15235] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1032), 1,
      anon_sym_DOT,
    STATE(902), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1030), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(865), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15266] = 11,
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
    STATE(372), 1,
      sym__fact_annotated_list,
    STATE(414), 1,
      sym_data_property_iri,
    STATE(501), 1,
      sym__annotations,
    STATE(545), 1,
      sym_object_property_iri,
    STATE(322), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15305] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1032), 1,
      anon_sym_DOT,
    STATE(918), 1,
      sym__lexial_value,
    ACTIONS(388), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1073), 2,
      sym__non_zero,
      sym__zero,
    STATE(73), 2,
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
  [15336] = 3,
    ACTIONS(1090), 1,
      anon_sym_or,
    STATE(417), 1,
      aux_sym_description_repeat1,
    ACTIONS(544), 14,
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
  [15359] = 3,
    ACTIONS(300), 1,
      anon_sym_Annotations_COLON,
    STATE(395), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [15382] = 3,
    ACTIONS(1090), 1,
      anon_sym_or,
    STATE(410), 1,
      aux_sym_description_repeat1,
    ACTIONS(540), 14,
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
  [15405] = 4,
    ACTIONS(1094), 2,
      sym__non_zero,
      sym__zero,
    STATE(418), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 7,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [15430] = 8,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_inverse,
    ACTIONS(242), 1,
      sym__pn_local,
    ACTIONS(244), 1,
      sym__pname_ln,
    ACTIONS(1067), 1,
      anon_sym_Annotations_COLON,
    STATE(481), 1,
      sym__annotations,
    STATE(153), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(65), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
  [15463] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(420), 1,
      aux_sym__data_property_2list_repeat1,
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
  [15485] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1102), 1,
      anon_sym_not,
    STATE(700), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15519] = 3,
    ACTIONS(1106), 1,
      anon_sym_COMMA,
    STATE(422), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1104), 13,
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
  [15541] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1109), 1,
      anon_sym_not,
    STATE(49), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15575] = 3,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(839), 13,
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
  [15597] = 2,
    ACTIONS(147), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(149), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [15617] = 1,
    ACTIONS(1114), 15,
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
  [15635] = 9,
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
    STATE(49), 1,
      sym__restriction,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15669] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1118), 13,
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
  [15691] = 8,
    ACTIONS(1124), 1,
      anon_sym_DOT,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(822), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1122), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1126), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(459), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15723] = 8,
    ACTIONS(1128), 1,
      anon_sym_DOT,
    STATE(864), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(812), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1122), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1130), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(459), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15755] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym__description_2list_repeat1,
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
  [15777] = 1,
    ACTIONS(1134), 15,
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
  [15795] = 9,
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
    STATE(195), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15829] = 8,
    ACTIONS(1140), 1,
      anon_sym_DOT,
    STATE(849), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(812), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1138), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1142), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(473), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15861] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1144), 13,
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
  [15883] = 3,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1148), 13,
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
  [15905] = 8,
    ACTIONS(1152), 1,
      anon_sym_DOT,
    STATE(848), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(822), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1138), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1154), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(473), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15937] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1156), 1,
      anon_sym_not,
    STATE(155), 1,
      sym__restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15971] = 3,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    STATE(439), 1,
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
  [15993] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1163), 1,
      anon_sym_not,
    STATE(225), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16027] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1165), 1,
      anon_sym_not,
    STATE(49), 1,
      sym__restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16061] = 10,
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
    STATE(414), 1,
      sym_data_property_iri,
    STATE(503), 1,
      sym__annotations,
    STATE(545), 1,
      sym_object_property_iri,
    STATE(356), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16097] = 8,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    ACTIONS(1069), 1,
      anon_sym_inverse,
    STATE(502), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(921), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(922), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(153), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16129] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1167), 1,
      anon_sym_not,
    STATE(389), 1,
      sym__restriction,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16163] = 8,
    ACTIONS(1171), 1,
      anon_sym_DOT,
    STATE(871), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(812), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1169), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1173), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(475), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16195] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1175), 1,
      anon_sym_not,
    STATE(118), 1,
      sym__restriction,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16229] = 3,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1177), 13,
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
  [16251] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1179), 1,
      anon_sym_not,
    STATE(49), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16285] = 3,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    STATE(420), 1,
      aux_sym__data_property_2list_repeat1,
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
  [16307] = 3,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    STATE(422), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1183), 13,
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
  [16329] = 9,
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
    STATE(49), 1,
      sym__restriction,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16363] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym__description_2list_repeat1,
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
  [16385] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1187), 1,
      anon_sym_not,
    STATE(49), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16419] = 8,
    ACTIONS(1189), 1,
      anon_sym_DOT,
    STATE(870), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(822), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1169), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1191), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(475), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16451] = 1,
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
  [16469] = 7,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(888), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1193), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1195), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(499), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16498] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(731), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16529] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16560] = 4,
    ACTIONS(1197), 2,
      sym__non_zero,
      sym__zero,
    STATE(459), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 7,
      anon_sym__COLON,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [16583] = 8,
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
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16614] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(106), 1,
      sym__restriction,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16645] = 1,
    ACTIONS(1200), 14,
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
  [16662] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16693] = 9,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1202), 1,
      anon_sym_Annotations_COLON,
    STATE(509), 1,
      sym__individual_2list,
    STATE(516), 1,
      sym__annotations,
    STATE(920), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16726] = 7,
    STATE(868), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(894), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1204), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1206), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(492), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16755] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16786] = 1,
    ACTIONS(1097), 14,
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
  [16803] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym__restriction,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16834] = 7,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(888), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1204), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1208), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(492), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16863] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(187), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16894] = 1,
    ACTIONS(1104), 14,
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
  [16911] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1067), 1,
      anon_sym_Annotations_COLON,
    STATE(216), 1,
      sym__object_property_expression_annotated_list,
    STATE(549), 1,
      sym__annotations,
    STATE(176), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16944] = 4,
    ACTIONS(1210), 2,
      sym__non_zero,
      sym__zero,
    STATE(473), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [16967] = 7,
    STATE(846), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(894), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1193), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1213), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(499), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16996] = 4,
    ACTIONS(1215), 2,
      sym__non_zero,
      sym__zero,
    STATE(475), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [17019] = 7,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(888), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1218), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1220), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(495), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17048] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1202), 1,
      anon_sym_Annotations_COLON,
    STATE(372), 1,
      sym__individual_annotated_list,
    STATE(540), 1,
      sym__annotations,
    STATE(324), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17081] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(385), 1,
      sym__restriction,
    STATE(657), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17112] = 7,
    STATE(861), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(894), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1218), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1222), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(495), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17141] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym__restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17172] = 6,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_inverse,
    ACTIONS(242), 1,
      sym__pn_local,
    ACTIONS(244), 1,
      sym__pname_ln,
    STATE(153), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(63), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
  [17199] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(54), 1,
      sym__restriction,
    STATE(659), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17230] = 1,
    ACTIONS(1224), 14,
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
  [17247] = 8,
    ACTIONS(812), 1,
      sym__pn_local,
    ACTIONS(1228), 1,
      anon_sym_DOT,
    STATE(872), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1226), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1230), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(497), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17278] = 8,
    ACTIONS(822), 1,
      sym__pn_local,
    ACTIONS(1232), 1,
      anon_sym_DOT,
    STATE(873), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1226), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1234), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(497), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17309] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(152), 1,
      sym__restriction,
    STATE(658), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(924), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(660), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17340] = 6,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    STATE(12), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1236), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17366] = 6,
    ACTIONS(446), 1,
      anon_sym_LT,
    ACTIONS(460), 1,
      sym__pn_local,
    ACTIONS(462), 1,
      sym__pname_ln,
    STATE(750), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1238), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(725), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17392] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1236), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17418] = 7,
    ACTIONS(888), 1,
      sym__pn_local,
    STATE(874), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1240), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1242), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(517), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17446] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1246), 1,
      sym__language_tag,
    ACTIONS(41), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1244), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17468] = 4,
    ACTIONS(1248), 2,
      sym__non_zero,
      sym__zero,
    STATE(492), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [17490] = 6,
    ACTIONS(491), 1,
      anon_sym_LT,
    ACTIONS(505), 1,
      sym__pn_local,
    ACTIONS(507), 1,
      sym__pname_ln,
    STATE(557), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1251), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(553), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17516] = 6,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(424), 1,
      sym__pn_local,
    ACTIONS(426), 1,
      sym__pname_ln,
    STATE(655), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1253), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(629), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17542] = 4,
    ACTIONS(1255), 2,
      sym__non_zero,
      sym__zero,
    STATE(495), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 6,
      anon_sym__COLON,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [17564] = 6,
    ACTIONS(337), 1,
      anon_sym_LT,
    ACTIONS(351), 1,
      sym__pn_local,
    ACTIONS(353), 1,
      sym__pname_ln,
    STATE(721), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1258), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(702), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17590] = 4,
    ACTIONS(1260), 2,
      sym__non_zero,
      sym__zero,
    STATE(497), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 6,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [17612] = 7,
    ACTIONS(894), 1,
      sym__pn_local,
    STATE(884), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1240), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1263), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(517), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17640] = 4,
    ACTIONS(1265), 2,
      sym__non_zero,
      sym__zero,
    STATE(499), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [17662] = 6,
    ACTIONS(392), 1,
      anon_sym_LT,
    ACTIONS(406), 1,
      sym__pn_local,
    ACTIONS(408), 1,
      sym__pname_ln,
    STATE(813), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1268), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(807), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17688] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1084), 1,
      anon_sym_not,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(414), 1,
      sym_data_property_iri,
    STATE(545), 1,
      sym_object_property_iri,
    STATE(308), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17718] = 1,
    ACTIONS(1270), 13,
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
  [17734] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1084), 1,
      anon_sym_not,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(414), 1,
      sym_data_property_iri,
    STATE(545), 1,
      sym_object_property_iri,
    STATE(334), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17764] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(366), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1272), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(11), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17790] = 6,
    ACTIONS(428), 1,
      anon_sym_LT,
    ACTIONS(442), 1,
      sym__pn_local,
    ACTIONS(444), 1,
      sym__pname_ln,
    STATE(689), 2,
      sym__datatype,
      sym_datatype_iri,
    ACTIONS(1274), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(740), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17816] = 8,
    ACTIONS(1067), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1276), 1,
      anon_sym_LT,
    ACTIONS(1278), 1,
      anon_sym_inverse,
    ACTIONS(1280), 1,
      sym__pn_local,
    ACTIONS(1282), 1,
      sym__pname_ln,
    STATE(548), 1,
      sym__annotations,
    STATE(181), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17846] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1202), 1,
      anon_sym_Annotations_COLON,
    STATE(535), 1,
      sym__annotations,
    STATE(358), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17876] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1067), 1,
      anon_sym_Annotations_COLON,
    STATE(532), 1,
      sym__annotations,
    STATE(214), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17906] = 1,
    ACTIONS(1284), 13,
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
  [17922] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(40), 1,
      sym__annotation_annotated_list,
    STATE(108), 1,
      sym_annotation_property_iri,
    STATE(307), 1,
      sym_annotation,
    STATE(607), 1,
      sym__annotations,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17953] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(522), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1288), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17974] = 7,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(917), 1,
      sym__individual_list,
    STATE(828), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18001] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(112), 1,
      sym_annotation_property_iri,
    STATE(584), 1,
      sym__annotations,
    STATE(594), 1,
      sym_annotation,
    STATE(667), 1,
      sym__annotation_annotated_list,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18032] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(40), 1,
      sym__annotation_annotated_list,
    STATE(120), 1,
      sym_annotation_property_iri,
    STATE(589), 1,
      sym_annotation,
    STATE(625), 1,
      sym__annotations,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18063] = 4,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(515), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(142), 4,
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
  [18084] = 7,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(502), 1,
      sym__individual_2list,
    STATE(920), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18111] = 4,
    ACTIONS(1297), 2,
      sym__non_zero,
      sym__zero,
    STATE(517), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(113), 5,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18132] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(515), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1300), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18153] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(621), 1,
      sym__annotations,
    STATE(682), 1,
      sym_annotation,
    STATE(818), 1,
      sym__annotation_annotated_list,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18184] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(313), 1,
      sym__data_property_expression_annotated_list,
    STATE(601), 1,
      sym__annotations,
    STATE(262), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(271), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18213] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(109), 1,
      sym_annotation_property_iri,
    STATE(609), 1,
      sym__annotations,
    STATE(737), 1,
      sym_annotation,
    STATE(829), 1,
      sym__annotation_annotated_list,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18244] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(515), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 4,
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
  [18265] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(40), 1,
      sym__annotation_annotated_list,
    STATE(93), 1,
      sym_annotation,
    STATE(111), 1,
      sym_annotation_property_iri,
    STATE(596), 1,
      sym__annotations,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18296] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(115), 1,
      sym_annotation_property_iri,
    STATE(598), 1,
      sym__annotations,
    STATE(670), 1,
      sym_annotation,
    STATE(799), 1,
      sym__annotation_annotated_list,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18327] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(114), 1,
      sym_annotation_property_iri,
    STATE(591), 1,
      sym__annotations,
    STATE(678), 1,
      sym_annotation,
    STATE(781), 1,
      sym__annotation_annotated_list,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18358] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(121), 1,
      sym_annotation_property_iri,
    STATE(511), 1,
      sym_annotation,
    STATE(570), 1,
      sym__annotation_annotated_list,
    STATE(622), 1,
      sym__annotations,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18389] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(518), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 4,
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
  [18410] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(435), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18434] = 6,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(455), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18458] = 6,
    ACTIONS(1276), 1,
      anon_sym_LT,
    ACTIONS(1278), 1,
      anon_sym_inverse,
    ACTIONS(1280), 1,
      sym__pn_local,
    ACTIONS(1282), 1,
      sym__pname_ln,
    STATE(201), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18482] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(471), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18506] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(189), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18530] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(109), 1,
      sym_annotation_property_iri,
    STATE(583), 1,
      sym__annotations,
    STATE(762), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18558] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(608), 1,
      sym__annotations,
    STATE(284), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(271), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18584] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(346), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18608] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(455), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18632] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(329), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18656] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(112), 1,
      sym_annotation_property_iri,
    STATE(605), 1,
      sym__annotations,
    STATE(635), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18684] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(428), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18708] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(312), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18732] = 2,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(686), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18748] = 2,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(693), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18764] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(114), 1,
      sym_annotation_property_iri,
    STATE(597), 1,
      sym__annotations,
    STATE(709), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18792] = 2,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(691), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18808] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(341), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18832] = 7,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(414), 1,
      sym_data_property_iri,
    STATE(545), 1,
      sym_object_property_iri,
    STATE(343), 2,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(576), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18858] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(115), 1,
      sym_annotation_property_iri,
    STATE(603), 1,
      sym__annotations,
    STATE(751), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18886] = 6,
    ACTIONS(1276), 1,
      anon_sym_LT,
    ACTIONS(1278), 1,
      anon_sym_inverse,
    ACTIONS(1280), 1,
      sym__pn_local,
    ACTIONS(1282), 1,
      sym__pname_ln,
    STATE(169), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18910] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(184), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18934] = 2,
    ACTIONS(53), 5,
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
  [18950] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(108), 1,
      sym_annotation_property_iri,
    STATE(613), 1,
      sym__annotations,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18978] = 2,
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
  [18994] = 2,
    ACTIONS(47), 5,
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
  [19010] = 2,
    ACTIONS(71), 5,
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
  [19026] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(121), 1,
      sym_annotation_property_iri,
    STATE(568), 1,
      sym_annotation,
    STATE(626), 1,
      sym__annotations,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19054] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(120), 1,
      sym_annotation_property_iri,
    STATE(623), 1,
      sym__annotations,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19082] = 2,
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
  [19098] = 2,
    ACTIONS(140), 5,
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
  [19114] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(619), 1,
      sym__annotations,
    STATE(719), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19142] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(56), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19166] = 2,
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
  [19182] = 2,
    ACTIONS(134), 5,
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
  [19198] = 2,
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
  [19214] = 2,
    ACTIONS(57), 5,
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
  [19230] = 2,
    ACTIONS(55), 5,
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
  [19246] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(347), 1,
      sym_annotation_property_iri,
    STATE(404), 1,
      sym__annotation_property_iri_annotated_list,
    STATE(648), 1,
      sym__annotations,
    STATE(373), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19274] = 5,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(179), 1,
      sym__object_property_characteristic,
    STATE(216), 1,
      sym__object_property_characteristic_annotated_list,
    STATE(654), 1,
      sym__annotations,
    ACTIONS(1328), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19296] = 2,
    ACTIONS(142), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1292), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19312] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(111), 1,
      sym_annotation_property_iri,
    STATE(615), 1,
      sym__annotations,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19340] = 2,
    ACTIONS(151), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1330), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19355] = 3,
    STATE(394), 1,
      sym__facet,
    ACTIONS(1332), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1334), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [19372] = 3,
    STATE(392), 1,
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
  [19389] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(367), 1,
      sym_annotation_property_iri,
    STATE(645), 1,
      sym__annotations,
    STATE(373), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19414] = 2,
    ACTIONS(33), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(693), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19429] = 2,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(686), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19444] = 4,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      sym__quoted_string,
    ACTIONS(524), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(677), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1340), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
  [19463] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(404), 1,
      sym__iri_annotated_list,
    STATE(669), 1,
      sym__annotations,
    STATE(339), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19488] = 2,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(691), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19503] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1342), 1,
      sym__language_tag,
    ACTIONS(1244), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(41), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19522] = 2,
    ACTIONS(1012), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(1344), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19537] = 4,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(200), 1,
      sym__object_property_characteristic,
    STATE(651), 1,
      sym__annotations,
    ACTIONS(1346), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19556] = 5,
    STATE(873), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1348), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [19576] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(109), 1,
      sym_annotation_property_iri,
    STATE(775), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19598] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(112), 1,
      sym_annotation_property_iri,
    STATE(610), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19620] = 5,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(99), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [19640] = 5,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1350), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [19660] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(592), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19676] = 5,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1354), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [19696] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(593), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19712] = 3,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    STATE(590), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(142), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19728] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(114), 1,
      sym_annotation_property_iri,
    STATE(680), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19750] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(590), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19766] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(590), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19782] = 4,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    STATE(611), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1288), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19800] = 5,
    STATE(870), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1361), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [19820] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(91), 1,
      sym_annotation,
    STATE(111), 1,
      sym_annotation_property_iri,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19842] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(114), 1,
      sym_annotation_property_iri,
    STATE(697), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19864] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(115), 1,
      sym_annotation_property_iri,
    STATE(684), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19886] = 5,
    STATE(874), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1363), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [19906] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_Annotations_COLON,
    STATE(656), 1,
      sym__annotations,
    STATE(370), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19928] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(251), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(271), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19948] = 5,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1365), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [19968] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(115), 1,
      sym_annotation_property_iri,
    STATE(743), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19990] = 5,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1367), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [20010] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(112), 1,
      sym_annotation_property_iri,
    STATE(649), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20032] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(467), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(271), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20052] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(108), 1,
      sym_annotation_property_iri,
    STATE(309), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20074] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(278), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(271), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20094] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(109), 1,
      sym_annotation_property_iri,
    STATE(694), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20116] = 4,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1302), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20134] = 4,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    STATE(618), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1302), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(325), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20152] = 5,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1369), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [20172] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(33), 1,
      sym_annotation,
    STATE(108), 1,
      sym_annotation_property_iri,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20194] = 5,
    STATE(854), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1371), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [20214] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(33), 1,
      sym_annotation,
    STATE(111), 1,
      sym_annotation_property_iri,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20236] = 4,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    STATE(618), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1300), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(329), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20254] = 5,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1373), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [20274] = 4,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    STATE(618), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1292), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(142), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20292] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(724), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20314] = 5,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(91), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [20334] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(674), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20356] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(121), 1,
      sym_annotation_property_iri,
    STATE(527), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20378] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(33), 1,
      sym_annotation,
    STATE(120), 1,
      sym_annotation_property_iri,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20400] = 5,
    STATE(848), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1378), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [20420] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(120), 1,
      sym_annotation_property_iri,
    STATE(587), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20442] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(121), 1,
      sym_annotation_property_iri,
    STATE(562), 1,
      sym_annotation,
    STATE(580), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20464] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(436), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(271), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20484] = 5,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1380), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [20504] = 2,
    ACTIONS(1308), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20517] = 2,
    ACTIONS(1310), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20530] = 2,
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
  [20543] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(149), 1,
      sym_object_property_iri,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20562] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(220), 1,
      sym_data_property_iri,
    STATE(271), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20581] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(122), 1,
      sym_class_iri,
    STATE(355), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20600] = 2,
    ACTIONS(1292), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(142), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20613] = 2,
    ACTIONS(1322), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20626] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(361), 1,
      sym_annotation_property_iri,
    STATE(373), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20645] = 2,
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
  [20658] = 5,
    ACTIONS(1276), 1,
      anon_sym_LT,
    ACTIONS(1280), 1,
      sym__pn_local,
    ACTIONS(1282), 1,
      sym__pname_ln,
    STATE(128), 1,
      sym_object_property_iri,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20677] = 2,
    ACTIONS(693), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20690] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(128), 1,
      sym_object_property_iri,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20709] = 2,
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
  [20722] = 2,
    ACTIONS(1324), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20735] = 2,
    ACTIONS(1314), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(140), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20748] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(380), 1,
      sym_annotation_property_iri,
    STATE(373), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20767] = 5,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      sym__pn_local,
    ACTIONS(244), 1,
      sym__pname_ln,
    STATE(203), 1,
      sym_object_property_iri,
    STATE(198), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20786] = 2,
    ACTIONS(686), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20799] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(344), 1,
      sym_annotation_property_iri,
    STATE(373), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20818] = 2,
    ACTIONS(1318), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(134), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20831] = 5,
    ACTIONS(181), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      sym__pn_local,
    ACTIONS(185), 1,
      sym__pname_ln,
    STATE(128), 1,
      sym_object_property_iri,
    STATE(126), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20850] = 2,
    STATE(191), 1,
      sym__object_property_characteristic,
    ACTIONS(1382), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20863] = 2,
    ACTIONS(691), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20876] = 2,
    ACTIONS(1304), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20889] = 2,
    STATE(144), 1,
      sym__object_property_characteristic,
    ACTIONS(1384), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20902] = 2,
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
  [20915] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(381), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20931] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1386), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1390), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20947] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1394), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1396), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20963] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1398), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1400), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20979] = 2,
    ACTIONS(68), 1,
      anon_sym_value,
    ACTIONS(66), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20991] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1402), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1404), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21007] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1406), 1,
      sym__language_tag,
    ACTIONS(1244), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21023] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1408), 1,
      sym__language_tag,
    ACTIONS(1244), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21039] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1410), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1412), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21055] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1418), 1,
      anon_sym_value,
    ACTIONS(1414), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1416), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21071] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(432), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21087] = 2,
    ACTIONS(1330), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(151), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21099] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1420), 1,
      sym__language_tag,
    ACTIONS(1244), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21115] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(354), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21131] = 4,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(675), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1288), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21146] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1244), 1,
      sym__pn_local,
    ACTIONS(1424), 1,
      sym__language_tag,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21161] = 3,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1426), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [21174] = 4,
    ACTIONS(1428), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym_not,
      sym__pn_local,
  [21189] = 4,
    ACTIONS(1428), 1,
      anon_sym_COMMA,
    STATE(687), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym_not,
      sym__pn_local,
  [21204] = 4,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21219] = 4,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21234] = 3,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1432), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [21247] = 4,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(676), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1288), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21262] = 3,
    ACTIONS(1434), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1436), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(677), 2,
      aux_sym__digits,
      sym__digit,
  [21275] = 4,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(681), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21290] = 4,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21305] = 4,
    ACTIONS(1428), 1,
      anon_sym_COMMA,
    STATE(673), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1288), 2,
      anon_sym_not,
      sym__pn_local,
  [21320] = 4,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21335] = 4,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(683), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1302), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21350] = 4,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(142), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym_not,
      sym__pn_local,
  [21365] = 4,
    ACTIONS(1441), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(142), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21380] = 4,
    ACTIONS(1428), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym_not,
      sym__pn_local,
  [21395] = 4,
    ACTIONS(1444), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(142), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21410] = 2,
    ACTIONS(1312), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21420] = 2,
    ACTIONS(686), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21430] = 2,
    ACTIONS(1304), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21440] = 3,
    ACTIONS(1449), 1,
      anon_sym_DOT,
    ACTIONS(1447), 2,
      sym__non_zero,
      sym__zero,
    STATE(72), 2,
      aux_sym__digits,
      sym__digit,
  [21452] = 2,
    ACTIONS(686), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21462] = 4,
    ACTIONS(1302), 1,
      sym__pn_local,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    STATE(758), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21476] = 2,
    ACTIONS(1306), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21486] = 4,
    ACTIONS(1302), 1,
      sym__pn_local,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    STATE(755), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(325), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21500] = 2,
    ACTIONS(1318), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21510] = 3,
    ACTIONS(1453), 1,
      anon_sym_and,
    STATE(698), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(202), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21522] = 2,
    ACTIONS(691), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21532] = 3,
    ACTIONS(1456), 1,
      anon_sym_and,
    STATE(732), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(471), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21544] = 2,
    ACTIONS(693), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21554] = 2,
    ACTIONS(1308), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21564] = 3,
    ACTIONS(1460), 1,
      anon_sym_DOT,
    ACTIONS(1458), 2,
      sym__non_zero,
      sym__zero,
    STATE(437), 2,
      aux_sym__digits,
      sym__digit,
  [21576] = 2,
    ACTIONS(686), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21586] = 2,
    ACTIONS(1310), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21596] = 3,
    ACTIONS(1464), 1,
      anon_sym_DOT,
    ACTIONS(1462), 2,
      sym__non_zero,
      sym__zero,
    STATE(275), 2,
      aux_sym__digits,
      sym__digit,
  [21608] = 3,
    ACTIONS(1468), 1,
      anon_sym_DOT,
    ACTIONS(1466), 2,
      sym__non_zero,
      sym__zero,
    STATE(485), 2,
      aux_sym__digits,
      sym__digit,
  [21620] = 2,
    ACTIONS(1314), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21630] = 2,
    ACTIONS(1292), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21640] = 2,
    ACTIONS(1316), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21650] = 2,
    ACTIONS(1320), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21660] = 2,
    ACTIONS(1470), 1,
      anon_sym_that,
    ACTIONS(467), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21670] = 2,
    ACTIONS(1322), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21680] = 2,
    ACTIONS(1322), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21690] = 2,
    ACTIONS(1324), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21700] = 3,
    ACTIONS(1472), 1,
      anon_sym_and,
    STATE(745), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(355), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21712] = 2,
    ACTIONS(1320), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21722] = 2,
    ACTIONS(1316), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21732] = 2,
    ACTIONS(1292), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21742] = 2,
    ACTIONS(1310), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21752] = 2,
    ACTIONS(1312), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21762] = 3,
    ACTIONS(1449), 1,
      anon_sym_DOT,
    ACTIONS(1474), 2,
      sym__non_zero,
      sym__zero,
    STATE(23), 2,
      aux_sym__digits,
      sym__digit,
  [21774] = 3,
    ACTIONS(1478), 1,
      anon_sym_DOT,
    ACTIONS(1476), 2,
      sym__non_zero,
      sym__zero,
    STATE(379), 2,
      aux_sym__digits,
      sym__digit,
  [21786] = 2,
    ACTIONS(1318), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21796] = 2,
    ACTIONS(1308), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21806] = 3,
    ACTIONS(1482), 1,
      anon_sym_DOT,
    ACTIONS(1480), 2,
      sym__non_zero,
      sym__zero,
    STATE(429), 2,
      aux_sym__digits,
      sym__digit,
  [21818] = 2,
    ACTIONS(1314), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21828] = 2,
    ACTIONS(1306), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21838] = 2,
    ACTIONS(1304), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21848] = 2,
    ACTIONS(1324), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21858] = 3,
    ACTIONS(1456), 1,
      anon_sym_and,
    STATE(749), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21870] = 3,
    ACTIONS(1456), 1,
      anon_sym_and,
    STATE(756), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21882] = 2,
    ACTIONS(691), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21892] = 2,
    ACTIONS(1314), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21902] = 3,
    ACTIONS(1486), 1,
      anon_sym_SLASH,
    STATE(744), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1484), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [21914] = 2,
    ACTIONS(693), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21924] = 4,
    ACTIONS(1288), 1,
      sym__pn_local,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    STATE(696), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21938] = 3,
    ACTIONS(1490), 1,
      anon_sym_DOT,
    ACTIONS(1488), 2,
      sym__non_zero,
      sym__zero,
    STATE(454), 2,
      aux_sym__digits,
      sym__digit,
  [21950] = 2,
    ACTIONS(1324), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21960] = 2,
    ACTIONS(1308), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21970] = 2,
    ACTIONS(1304), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21980] = 2,
    ACTIONS(1306), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21990] = 2,
    ACTIONS(1318), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22000] = 3,
    ACTIONS(1494), 1,
      anon_sym_SLASH,
    STATE(744), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1492), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [22012] = 3,
    ACTIONS(1472), 1,
      anon_sym_and,
    STATE(698), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(362), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22024] = 2,
    ACTIONS(1316), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22034] = 2,
    ACTIONS(1320), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22044] = 2,
    ACTIONS(1322), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22054] = 3,
    ACTIONS(1456), 1,
      anon_sym_and,
    STATE(756), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(333), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22066] = 2,
    ACTIONS(1312), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22076] = 2,
    ACTIONS(1292), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22086] = 4,
    ACTIONS(3), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(5), 1,
      anon_sym_Ontology_COLON,
    STATE(930), 1,
      sym_ontology,
    STATE(803), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [22100] = 2,
    ACTIONS(691), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22110] = 2,
    ACTIONS(693), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22120] = 4,
    ACTIONS(1292), 1,
      sym__pn_local,
    ACTIONS(1497), 1,
      anon_sym_COMMA,
    STATE(755), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(142), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22134] = 3,
    ACTIONS(1500), 1,
      anon_sym_and,
    STATE(756), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(198), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22146] = 3,
    ACTIONS(1449), 1,
      anon_sym_DOT,
    ACTIONS(1503), 2,
      sym__non_zero,
      sym__zero,
    STATE(376), 2,
      aux_sym__digits,
      sym__digit,
  [22158] = 4,
    ACTIONS(1300), 1,
      sym__pn_local,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    STATE(755), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22172] = 2,
    ACTIONS(1310), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22182] = 4,
    ACTIONS(1505), 1,
      sym__non_zero,
    ACTIONS(1507), 1,
      sym__zero,
    STATE(7), 1,
      sym_non_negative_integer,
    STATE(68), 1,
      sym__positive_integer,
  [22195] = 2,
    ACTIONS(1509), 2,
      sym__non_zero,
      sym__zero,
    STATE(604), 2,
      aux_sym__digits,
      sym__digit,
  [22204] = 2,
    ACTIONS(1292), 1,
      sym__pn_local,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22213] = 2,
    ACTIONS(1511), 2,
      sym__non_zero,
      sym__zero,
    STATE(614), 2,
      aux_sym__digits,
      sym__digit,
  [22222] = 2,
    ACTIONS(1513), 2,
      sym__non_zero,
      sym__zero,
    STATE(321), 2,
      aux_sym__digits,
      sym__digit,
  [22231] = 2,
    ACTIONS(1515), 2,
      sym__non_zero,
      sym__zero,
    STATE(316), 2,
      aux_sym__digits,
      sym__digit,
  [22240] = 4,
    ACTIONS(1517), 1,
      sym__iunreserved,
    STATE(844), 1,
      sym__iauthority,
    STATE(845), 1,
      sym__ihost,
    STATE(912), 1,
      sym__iuserinfo,
  [22253] = 2,
    ACTIONS(1519), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [22262] = 2,
    ACTIONS(691), 1,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22271] = 2,
    ACTIONS(1521), 2,
      sym__non_zero,
      sym__zero,
    STATE(391), 2,
      aux_sym__digits,
      sym__digit,
  [22280] = 2,
    ACTIONS(1523), 2,
      sym__non_zero,
      sym__zero,
    STATE(384), 2,
      aux_sym__digits,
      sym__digit,
  [22289] = 1,
    ACTIONS(1492), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [22296] = 2,
    ACTIONS(1525), 2,
      sym__non_zero,
      sym__zero,
    STATE(498), 2,
      aux_sym__digits,
      sym__digit,
  [22305] = 2,
    ACTIONS(693), 1,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22314] = 2,
    ACTIONS(1527), 2,
      sym__non_zero,
      sym__zero,
    STATE(595), 2,
      aux_sym__digits,
      sym__digit,
  [22323] = 2,
    ACTIONS(1318), 1,
      sym__pn_local,
    ACTIONS(134), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22332] = 2,
    ACTIONS(1306), 1,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22341] = 2,
    ACTIONS(1529), 2,
      sym__non_zero,
      sym__zero,
    STATE(456), 2,
      aux_sym__digits,
      sym__digit,
  [22350] = 2,
    ACTIONS(1531), 2,
      sym__non_zero,
      sym__zero,
    STATE(474), 2,
      aux_sym__digits,
      sym__digit,
  [22359] = 4,
    ACTIONS(1533), 1,
      sym__non_zero,
    ACTIONS(1535), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(61), 1,
      sym__positive_integer,
  [22372] = 3,
    ACTIONS(1537), 1,
      anon_sym_or,
    STATE(820), 1,
      aux_sym_description_repeat1,
    ACTIONS(540), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22383] = 2,
    ACTIONS(151), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1330), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22392] = 2,
    ACTIONS(1322), 1,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22401] = 2,
    ACTIONS(1304), 1,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22410] = 4,
    ACTIONS(1539), 1,
      sym__non_zero,
    ACTIONS(1541), 1,
      sym__zero,
    STATE(62), 1,
      sym_non_negative_integer,
    STATE(425), 1,
      sym__positive_integer,
  [22423] = 2,
    ACTIONS(686), 1,
      sym__pn_local,
    ACTIONS(29), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22432] = 2,
    ACTIONS(1543), 2,
      sym__non_zero,
      sym__zero,
    STATE(586), 2,
      aux_sym__digits,
      sym__digit,
  [22441] = 2,
    ACTIONS(1545), 2,
      sym__non_zero,
      sym__zero,
    STATE(78), 2,
      aux_sym__digits,
      sym__digit,
  [22450] = 2,
    ACTIONS(1547), 2,
      sym__non_zero,
      sym__zero,
    STATE(490), 2,
      aux_sym__digits,
      sym__digit,
  [22459] = 2,
    ACTIONS(1320), 1,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22468] = 2,
    ACTIONS(1316), 1,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22477] = 2,
    ACTIONS(1549), 2,
      sym__non_zero,
      sym__zero,
    STATE(74), 2,
      aux_sym__digits,
      sym__digit,
  [22486] = 2,
    ACTIONS(1551), 2,
      sym__non_zero,
      sym__zero,
    STATE(602), 2,
      aux_sym__digits,
      sym__digit,
  [22495] = 2,
    ACTIONS(1553), 2,
      sym__non_zero,
      sym__zero,
    STATE(612), 2,
      aux_sym__digits,
      sym__digit,
  [22504] = 2,
    ACTIONS(1555), 2,
      sym__non_zero,
      sym__zero,
    STATE(582), 2,
      aux_sym__digits,
      sym__digit,
  [22513] = 2,
    ACTIONS(1324), 1,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22522] = 4,
    ACTIONS(1557), 1,
      sym__non_zero,
    ACTIONS(1559), 1,
      sym__zero,
    STATE(9), 1,
      sym_non_negative_integer,
    STATE(94), 1,
      sym__positive_integer,
  [22535] = 2,
    ACTIONS(1561), 2,
      sym__non_zero,
      sym__zero,
    STATE(617), 2,
      aux_sym__digits,
      sym__digit,
  [22544] = 2,
    ACTIONS(1310), 1,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22553] = 2,
    ACTIONS(151), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1330), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22562] = 2,
    ACTIONS(1563), 2,
      sym__non_zero,
      sym__zero,
    STATE(628), 2,
      aux_sym__digits,
      sym__digit,
  [22571] = 2,
    ACTIONS(1565), 2,
      sym__non_zero,
      sym__zero,
    STATE(620), 2,
      aux_sym__digits,
      sym__digit,
  [22580] = 2,
    ACTIONS(1567), 2,
      sym__non_zero,
      sym__zero,
    STATE(599), 2,
      aux_sym__digits,
      sym__digit,
  [22589] = 3,
    ACTIONS(1569), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(1572), 1,
      anon_sym_Ontology_COLON,
    STATE(803), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [22600] = 2,
    ACTIONS(1574), 2,
      sym__non_zero,
      sym__zero,
    STATE(672), 2,
      aux_sym__digits,
      sym__digit,
  [22609] = 2,
    ACTIONS(1576), 2,
      sym__non_zero,
      sym__zero,
    STATE(479), 2,
      aux_sym__digits,
      sym__digit,
  [22618] = 2,
    ACTIONS(1578), 2,
      sym__non_zero,
      sym__zero,
    STATE(476), 2,
      aux_sym__digits,
      sym__digit,
  [22627] = 2,
    ACTIONS(1308), 1,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22636] = 3,
    ACTIONS(1537), 1,
      anon_sym_or,
    STATE(780), 1,
      aux_sym_description_repeat1,
    ACTIONS(544), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22647] = 2,
    ACTIONS(1580), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
  [22656] = 2,
    ACTIONS(1582), 2,
      sym__non_zero,
      sym__zero,
    STATE(624), 2,
      aux_sym__digits,
      sym__digit,
  [22665] = 4,
    ACTIONS(1584), 1,
      sym__non_zero,
    ACTIONS(1586), 1,
      sym__zero,
    STATE(3), 1,
      sym_non_negative_integer,
    STATE(47), 1,
      sym__positive_integer,
  [22678] = 2,
    ACTIONS(1588), 2,
      sym__non_zero,
      sym__zero,
    STATE(585), 2,
      aux_sym__digits,
      sym__digit,
  [22687] = 2,
    ACTIONS(1312), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22696] = 2,
    ACTIONS(1590), 2,
      sym__non_zero,
      sym__zero,
    STATE(386), 2,
      aux_sym__digits,
      sym__digit,
  [22705] = 2,
    ACTIONS(1314), 1,
      sym__pn_local,
    ACTIONS(140), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22714] = 2,
    ACTIONS(1592), 2,
      sym__non_zero,
      sym__zero,
    STATE(405), 2,
      aux_sym__digits,
      sym__digit,
  [22723] = 2,
    ACTIONS(1594), 2,
      sym__non_zero,
      sym__zero,
    STATE(465), 2,
      aux_sym__digits,
      sym__digit,
  [22732] = 2,
    ACTIONS(151), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1330), 2,
      anon_sym_not,
      sym__pn_local,
  [22741] = 2,
    ACTIONS(1596), 2,
      sym__non_zero,
      sym__zero,
    STATE(469), 2,
      aux_sym__digits,
      sym__digit,
  [22750] = 3,
    ACTIONS(1598), 1,
      anon_sym_or,
    STATE(820), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22761] = 4,
    ACTIONS(1601), 1,
      sym__non_zero,
    ACTIONS(1603), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(39), 1,
      sym__positive_integer,
  [22774] = 2,
    ACTIONS(1605), 2,
      sym__non_zero,
      sym__zero,
    STATE(588), 2,
      aux_sym__digits,
      sym__digit,
  [22783] = 3,
    ACTIONS(1607), 1,
      anon_sym_RBRACE,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    STATE(827), 1,
      aux_sym__individual_2list_repeat1,
  [22793] = 3,
    ACTIONS(1611), 1,
      anon_sym_RBRACE,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
    STATE(832), 1,
      aux_sym__literal_list_repeat1,
  [22803] = 2,
    ACTIONS(1617), 1,
      anon_sym_AT,
    ACTIONS(1615), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [22811] = 3,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1619), 1,
      anon_sym_Functional,
    STATE(914), 1,
      sym__annotations,
  [22821] = 3,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
    ACTIONS(1621), 1,
      anon_sym_COMMA,
    STATE(827), 1,
      aux_sym__individual_2list_repeat1,
  [22831] = 3,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    ACTIONS(1624), 1,
      anon_sym_RBRACE,
    STATE(823), 1,
      aux_sym__individual_2list_repeat1,
  [22841] = 2,
    ACTIONS(1330), 1,
      sym__pn_local,
    ACTIONS(151), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22849] = 3,
    ACTIONS(1626), 1,
      anon_sym_COMMA,
    ACTIONS(1629), 1,
      anon_sym_RBRACK,
    STATE(830), 1,
      aux_sym_datatype_restriction_repeat1,
  [22859] = 3,
    ACTIONS(1631), 1,
      anon_sym_COMMA,
    ACTIONS(1633), 1,
      anon_sym_RBRACK,
    STATE(830), 1,
      aux_sym_datatype_restriction_repeat1,
  [22869] = 3,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
    ACTIONS(1635), 1,
      anon_sym_RBRACE,
    STATE(834), 1,
      aux_sym__literal_list_repeat1,
  [22879] = 3,
    ACTIONS(1631), 1,
      anon_sym_COMMA,
    ACTIONS(1637), 1,
      anon_sym_RBRACK,
    STATE(831), 1,
      aux_sym_datatype_restriction_repeat1,
  [22889] = 3,
    ACTIONS(1639), 1,
      anon_sym_RBRACE,
    ACTIONS(1641), 1,
      anon_sym_COMMA,
    STATE(834), 1,
      aux_sym__literal_list_repeat1,
  [22899] = 3,
    ACTIONS(1644), 1,
      anon_sym_GT,
    ACTIONS(1646), 1,
      sym__iquery,
    ACTIONS(1648), 1,
      sym__ifragment,
  [22909] = 2,
    ACTIONS(1650), 1,
      anon_sym_GT,
    ACTIONS(1652), 1,
      sym__ifragment,
  [22916] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(932), 1,
      sym__iri_rfc3987,
  [22923] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(842), 1,
      sym_full_iri,
  [22930] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(911), 1,
      sym__iri_rfc3987,
  [22937] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(926), 1,
      sym__iri_rfc3987,
  [22944] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(889), 1,
      sym__iri_rfc3987,
  [22951] = 1,
    ACTIONS(1656), 2,
      anon_sym_Prefix_COLON,
      anon_sym_Ontology_COLON,
  [22956] = 2,
    ACTIONS(1658), 1,
      anon_sym_SLASH_SLASH,
    STATE(835), 1,
      sym__ihier_part,
  [22963] = 2,
    ACTIONS(1486), 1,
      anon_sym_SLASH,
    STATE(735), 1,
      aux_sym__ipath_abempty,
  [22970] = 2,
    ACTIONS(1660), 1,
      anon_sym_COLON,
    ACTIONS(1662), 1,
      anon_sym_SLASH,
  [22977] = 1,
    ACTIONS(1664), 2,
      anon_sym_f,
      anon_sym_F,
  [22982] = 1,
    ACTIONS(1666), 2,
      anon_sym_f,
      anon_sym_F,
  [22987] = 1,
    ACTIONS(1380), 2,
      anon_sym_f,
      anon_sym_F,
  [22992] = 1,
    ACTIONS(1378), 2,
      anon_sym_f,
      anon_sym_F,
  [22997] = 1,
    ACTIONS(99), 2,
      anon_sym_f,
      anon_sym_F,
  [23002] = 1,
    ACTIONS(91), 2,
      anon_sym_f,
      anon_sym_F,
  [23007] = 2,
    ACTIONS(1668), 1,
      sym__iunreserved,
    STATE(858), 1,
      sym__ihost,
  [23014] = 1,
    ACTIONS(1670), 2,
      anon_sym_f,
      anon_sym_F,
  [23019] = 1,
    ACTIONS(1672), 2,
      anon_sym_f,
      anon_sym_F,
  [23024] = 1,
    ACTIONS(1371), 2,
      anon_sym_f,
      anon_sym_F,
  [23029] = 1,
    ACTIONS(1369), 2,
      anon_sym_f,
      anon_sym_F,
  [23034] = 1,
    ACTIONS(95), 2,
      anon_sym_f,
      anon_sym_F,
  [23039] = 2,
    ACTIONS(1674), 1,
      anon_sym_COLON,
    ACTIONS(1676), 1,
      anon_sym_SLASH,
  [23046] = 1,
    ACTIONS(1678), 2,
      anon_sym_f,
      anon_sym_F,
  [23051] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(895), 1,
      sym__iri_rfc3987,
  [23058] = 1,
    ACTIONS(1680), 2,
      anon_sym_f,
      anon_sym_F,
  [23063] = 1,
    ACTIONS(1682), 2,
      anon_sym_f,
      anon_sym_F,
  [23068] = 1,
    ACTIONS(1367), 2,
      anon_sym_f,
      anon_sym_F,
  [23073] = 1,
    ACTIONS(1365), 2,
      anon_sym_f,
      anon_sym_F,
  [23078] = 1,
    ACTIONS(1639), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [23083] = 2,
    ACTIONS(1684), 1,
      sym__iunreserved,
    STATE(771), 1,
      sym__isegment,
  [23090] = 1,
    ACTIONS(1686), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [23095] = 1,
    ACTIONS(1688), 2,
      anon_sym_f,
      anon_sym_F,
  [23100] = 1,
    ACTIONS(1690), 2,
      anon_sym_f,
      anon_sym_F,
  [23105] = 1,
    ACTIONS(1373), 2,
      anon_sym_f,
      anon_sym_F,
  [23110] = 1,
    ACTIONS(1361), 2,
      anon_sym_f,
      anon_sym_F,
  [23115] = 1,
    ACTIONS(1348), 2,
      anon_sym_f,
      anon_sym_F,
  [23120] = 1,
    ACTIONS(1363), 2,
      anon_sym_f,
      anon_sym_F,
  [23125] = 1,
    ACTIONS(1692), 2,
      anon_sym_f,
      anon_sym_F,
  [23130] = 1,
    ACTIONS(1694), 2,
      anon_sym_f,
      anon_sym_F,
  [23135] = 1,
    ACTIONS(1696), 2,
      anon_sym_f,
      anon_sym_F,
  [23140] = 1,
    ACTIONS(1350), 2,
      anon_sym_f,
      anon_sym_F,
  [23145] = 1,
    ACTIONS(1354), 2,
      anon_sym_f,
      anon_sym_F,
  [23150] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(899), 1,
      sym__iri_rfc3987,
  [23157] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(931), 1,
      sym__iri_rfc3987,
  [23164] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(928), 1,
      sym__iri_rfc3987,
  [23171] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(905), 1,
      sym__iri_rfc3987,
  [23178] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(919), 1,
      sym__iri_rfc3987,
  [23185] = 1,
    ACTIONS(1698), 2,
      anon_sym_f,
      anon_sym_F,
  [23190] = 2,
    ACTIONS(1654), 1,
      sym__scheme,
    STATE(886), 1,
      sym__iri_rfc3987,
  [23197] = 1,
    ACTIONS(1700), 1,
      anon_sym_GT,
  [23201] = 1,
    ACTIONS(1702), 1,
      sym__pn_local,
  [23205] = 1,
    ACTIONS(1704), 1,
      anon_sym_CARET_CARET,
  [23209] = 1,
    ACTIONS(1706), 1,
      anon_sym_GT,
  [23213] = 1,
    ACTIONS(1708), 1,
      sym__pn_local,
  [23217] = 1,
    ACTIONS(1710), 1,
      anon_sym_CARET_CARET,
  [23221] = 1,
    ACTIONS(1712), 1,
      anon_sym_CARET_CARET,
  [23225] = 1,
    ACTIONS(1714), 1,
      sym__pn_local,
  [23229] = 1,
    ACTIONS(1716), 1,
      sym__port,
  [23233] = 1,
    ACTIONS(1718), 1,
      anon_sym_GT,
  [23237] = 1,
    ACTIONS(1720), 1,
      anon_sym_SLASH,
  [23241] = 1,
    ACTIONS(1722), 1,
      sym__pn_local,
  [23245] = 1,
    ACTIONS(1724), 1,
      anon_sym_CARET_CARET,
  [23249] = 1,
    ACTIONS(1726), 1,
      anon_sym_GT,
  [23253] = 1,
    ACTIONS(1676), 1,
      anon_sym_SLASH,
  [23257] = 1,
    ACTIONS(1728), 1,
      sym__pn_local,
  [23261] = 1,
    ACTIONS(1730), 1,
      anon_sym_CARET_CARET,
  [23265] = 1,
    ACTIONS(1732), 1,
      anon_sym_GT,
  [23269] = 1,
    ACTIONS(1734), 1,
      sym__port,
  [23273] = 1,
    ACTIONS(1736), 1,
      anon_sym_GT,
  [23277] = 1,
    ACTIONS(1738), 1,
      sym__pn_local,
  [23281] = 1,
    ACTIONS(1740), 1,
      anon_sym_RPAREN,
  [23285] = 1,
    ACTIONS(1740), 1,
      anon_sym_RBRACE,
  [23289] = 1,
    ACTIONS(1742), 1,
      anon_sym_CARET_CARET,
  [23293] = 1,
    ACTIONS(1650), 1,
      anon_sym_GT,
  [23297] = 1,
    ACTIONS(1744), 1,
      anon_sym_GT,
  [23301] = 1,
    ACTIONS(1746), 1,
      anon_sym_AT,
  [23305] = 1,
    ACTIONS(1748), 1,
      anon_sym_CARET_CARET,
  [23309] = 1,
    ACTIONS(1750), 1,
      anon_sym_Functional,
  [23313] = 1,
    ACTIONS(1752), 1,
      sym_prefix_name,
  [23317] = 1,
    ACTIONS(1754), 1,
      anon_sym_RPAREN,
  [23321] = 1,
    ACTIONS(1754), 1,
      anon_sym_RBRACE,
  [23325] = 1,
    ACTIONS(1756), 1,
      anon_sym_CARET_CARET,
  [23329] = 1,
    ACTIONS(1758), 1,
      anon_sym_GT,
  [23333] = 1,
    ACTIONS(1760), 1,
      anon_sym_COMMA,
  [23337] = 1,
    ACTIONS(1762), 1,
      anon_sym_COMMA,
  [23341] = 1,
    ACTIONS(1764), 1,
      anon_sym_COMMA,
  [23345] = 1,
    ACTIONS(1766), 1,
      anon_sym_COMMA,
  [23349] = 1,
    ACTIONS(1768), 1,
      anon_sym_value,
  [23353] = 1,
    ACTIONS(1770), 1,
      sym__pn_local,
  [23357] = 1,
    ACTIONS(1772), 1,
      anon_sym_GT,
  [23361] = 1,
    ACTIONS(1774), 1,
      anon_sym_COLON,
  [23365] = 1,
    ACTIONS(1776), 1,
      anon_sym_GT,
  [23369] = 1,
    ACTIONS(1778), 1,
      anon_sym_COMMA,
  [23373] = 1,
    ACTIONS(1780), 1,
      ts_builtin_sym_end,
  [23377] = 1,
    ACTIONS(1782), 1,
      anon_sym_GT,
  [23381] = 1,
    ACTIONS(1784), 1,
      anon_sym_GT,
  [23385] = 1,
    ACTIONS(1786), 1,
      ts_builtin_sym_end,
  [23389] = 1,
    ACTIONS(1788), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 223,
  [SMALL_STATE(6)] = 305,
  [SMALL_STATE(7)] = 358,
  [SMALL_STATE(8)] = 439,
  [SMALL_STATE(9)] = 492,
  [SMALL_STATE(10)] = 568,
  [SMALL_STATE(11)] = 619,
  [SMALL_STATE(12)] = 665,
  [SMALL_STATE(13)] = 710,
  [SMALL_STATE(14)] = 755,
  [SMALL_STATE(15)] = 800,
  [SMALL_STATE(16)] = 845,
  [SMALL_STATE(17)] = 890,
  [SMALL_STATE(18)] = 935,
  [SMALL_STATE(19)] = 988,
  [SMALL_STATE(20)] = 1033,
  [SMALL_STATE(21)] = 1077,
  [SMALL_STATE(22)] = 1125,
  [SMALL_STATE(23)] = 1183,
  [SMALL_STATE(24)] = 1241,
  [SMALL_STATE(25)] = 1296,
  [SMALL_STATE(26)] = 1351,
  [SMALL_STATE(27)] = 1400,
  [SMALL_STATE(28)] = 1449,
  [SMALL_STATE(29)] = 1498,
  [SMALL_STATE(30)] = 1547,
  [SMALL_STATE(31)] = 1594,
  [SMALL_STATE(32)] = 1641,
  [SMALL_STATE(33)] = 1688,
  [SMALL_STATE(34)] = 1728,
  [SMALL_STATE(35)] = 1774,
  [SMALL_STATE(36)] = 1820,
  [SMALL_STATE(37)] = 1860,
  [SMALL_STATE(38)] = 1900,
  [SMALL_STATE(39)] = 1946,
  [SMALL_STATE(40)] = 1987,
  [SMALL_STATE(41)] = 2026,
  [SMALL_STATE(42)] = 2071,
  [SMALL_STATE(43)] = 2148,
  [SMALL_STATE(44)] = 2225,
  [SMALL_STATE(45)] = 2270,
  [SMALL_STATE(46)] = 2315,
  [SMALL_STATE(47)] = 2354,
  [SMALL_STATE(48)] = 2393,
  [SMALL_STATE(49)] = 2430,
  [SMALL_STATE(50)] = 2466,
  [SMALL_STATE(51)] = 2502,
  [SMALL_STATE(52)] = 2538,
  [SMALL_STATE(53)] = 2574,
  [SMALL_STATE(54)] = 2610,
  [SMALL_STATE(55)] = 2646,
  [SMALL_STATE(56)] = 2682,
  [SMALL_STATE(57)] = 2718,
  [SMALL_STATE(58)] = 2790,
  [SMALL_STATE(59)] = 2840,
  [SMALL_STATE(60)] = 2876,
  [SMALL_STATE(61)] = 2912,
  [SMALL_STATE(62)] = 2950,
  [SMALL_STATE(63)] = 3014,
  [SMALL_STATE(64)] = 3064,
  [SMALL_STATE(65)] = 3100,
  [SMALL_STATE(66)] = 3150,
  [SMALL_STATE(67)] = 3186,
  [SMALL_STATE(68)] = 3221,
  [SMALL_STATE(69)] = 3258,
  [SMALL_STATE(70)] = 3298,
  [SMALL_STATE(71)] = 3338,
  [SMALL_STATE(72)] = 3378,
  [SMALL_STATE(73)] = 3428,
  [SMALL_STATE(74)] = 3478,
  [SMALL_STATE(75)] = 3525,
  [SMALL_STATE(76)] = 3558,
  [SMALL_STATE(77)] = 3591,
  [SMALL_STATE(78)] = 3630,
  [SMALL_STATE(79)] = 3677,
  [SMALL_STATE(80)] = 3733,
  [SMALL_STATE(81)] = 3789,
  [SMALL_STATE(82)] = 3845,
  [SMALL_STATE(83)] = 3907,
  [SMALL_STATE(84)] = 3963,
  [SMALL_STATE(85)] = 4019,
  [SMALL_STATE(86)] = 4075,
  [SMALL_STATE(87)] = 4134,
  [SMALL_STATE(88)] = 4193,
  [SMALL_STATE(89)] = 4252,
  [SMALL_STATE(90)] = 4311,
  [SMALL_STATE(91)] = 4345,
  [SMALL_STATE(92)] = 4379,
  [SMALL_STATE(93)] = 4413,
  [SMALL_STATE(94)] = 4447,
  [SMALL_STATE(95)] = 4479,
  [SMALL_STATE(96)] = 4513,
  [SMALL_STATE(97)] = 4546,
  [SMALL_STATE(98)] = 4597,
  [SMALL_STATE(99)] = 4630,
  [SMALL_STATE(100)] = 4683,
  [SMALL_STATE(101)] = 4716,
  [SMALL_STATE(102)] = 4749,
  [SMALL_STATE(103)] = 4782,
  [SMALL_STATE(104)] = 4835,
  [SMALL_STATE(105)] = 4888,
  [SMALL_STATE(106)] = 4931,
  [SMALL_STATE(107)] = 4964,
  [SMALL_STATE(108)] = 5017,
  [SMALL_STATE(109)] = 5068,
  [SMALL_STATE(110)] = 5119,
  [SMALL_STATE(111)] = 5172,
  [SMALL_STATE(112)] = 5223,
  [SMALL_STATE(113)] = 5274,
  [SMALL_STATE(114)] = 5327,
  [SMALL_STATE(115)] = 5378,
  [SMALL_STATE(116)] = 5429,
  [SMALL_STATE(117)] = 5462,
  [SMALL_STATE(118)] = 5493,
  [SMALL_STATE(119)] = 5526,
  [SMALL_STATE(120)] = 5569,
  [SMALL_STATE(121)] = 5620,
  [SMALL_STATE(122)] = 5671,
  [SMALL_STATE(123)] = 5714,
  [SMALL_STATE(124)] = 5774,
  [SMALL_STATE(125)] = 5826,
  [SMALL_STATE(126)] = 5858,
  [SMALL_STATE(127)] = 5886,
  [SMALL_STATE(128)] = 5946,
  [SMALL_STATE(129)] = 5974,
  [SMALL_STATE(130)] = 6034,
  [SMALL_STATE(131)] = 6066,
  [SMALL_STATE(132)] = 6118,
  [SMALL_STATE(133)] = 6178,
  [SMALL_STATE(134)] = 6238,
  [SMALL_STATE(135)] = 6290,
  [SMALL_STATE(136)] = 6350,
  [SMALL_STATE(137)] = 6410,
  [SMALL_STATE(138)] = 6442,
  [SMALL_STATE(139)] = 6494,
  [SMALL_STATE(140)] = 6526,
  [SMALL_STATE(141)] = 6558,
  [SMALL_STATE(142)] = 6618,
  [SMALL_STATE(143)] = 6650,
  [SMALL_STATE(144)] = 6681,
  [SMALL_STATE(145)] = 6712,
  [SMALL_STATE(146)] = 6743,
  [SMALL_STATE(147)] = 6774,
  [SMALL_STATE(148)] = 6805,
  [SMALL_STATE(149)] = 6836,
  [SMALL_STATE(150)] = 6875,
  [SMALL_STATE(151)] = 6932,
  [SMALL_STATE(152)] = 6963,
  [SMALL_STATE(153)] = 6994,
  [SMALL_STATE(154)] = 7023,
  [SMALL_STATE(155)] = 7054,
  [SMALL_STATE(156)] = 7085,
  [SMALL_STATE(157)] = 7116,
  [SMALL_STATE(158)] = 7143,
  [SMALL_STATE(159)] = 7174,
  [SMALL_STATE(160)] = 7205,
  [SMALL_STATE(161)] = 7236,
  [SMALL_STATE(162)] = 7267,
  [SMALL_STATE(163)] = 7298,
  [SMALL_STATE(164)] = 7329,
  [SMALL_STATE(165)] = 7360,
  [SMALL_STATE(166)] = 7417,
  [SMALL_STATE(167)] = 7448,
  [SMALL_STATE(168)] = 7479,
  [SMALL_STATE(169)] = 7510,
  [SMALL_STATE(170)] = 7541,
  [SMALL_STATE(171)] = 7570,
  [SMALL_STATE(172)] = 7601,
  [SMALL_STATE(173)] = 7632,
  [SMALL_STATE(174)] = 7689,
  [SMALL_STATE(175)] = 7720,
  [SMALL_STATE(176)] = 7751,
  [SMALL_STATE(177)] = 7782,
  [SMALL_STATE(178)] = 7839,
  [SMALL_STATE(179)] = 7878,
  [SMALL_STATE(180)] = 7909,
  [SMALL_STATE(181)] = 7964,
  [SMALL_STATE(182)] = 7995,
  [SMALL_STATE(183)] = 8034,
  [SMALL_STATE(184)] = 8065,
  [SMALL_STATE(185)] = 8096,
  [SMALL_STATE(186)] = 8122,
  [SMALL_STATE(187)] = 8152,
  [SMALL_STATE(188)] = 8182,
  [SMALL_STATE(189)] = 8208,
  [SMALL_STATE(190)] = 8234,
  [SMALL_STATE(191)] = 8286,
  [SMALL_STATE(192)] = 8312,
  [SMALL_STATE(193)] = 8338,
  [SMALL_STATE(194)] = 8368,
  [SMALL_STATE(195)] = 8422,
  [SMALL_STATE(196)] = 8452,
  [SMALL_STATE(197)] = 8504,
  [SMALL_STATE(198)] = 8532,
  [SMALL_STATE(199)] = 8560,
  [SMALL_STATE(200)] = 8590,
  [SMALL_STATE(201)] = 8616,
  [SMALL_STATE(202)] = 8642,
  [SMALL_STATE(203)] = 8672,
  [SMALL_STATE(204)] = 8700,
  [SMALL_STATE(205)] = 8730,
  [SMALL_STATE(206)] = 8760,
  [SMALL_STATE(207)] = 8814,
  [SMALL_STATE(208)] = 8840,
  [SMALL_STATE(209)] = 8870,
  [SMALL_STATE(210)] = 8900,
  [SMALL_STATE(211)] = 8928,
  [SMALL_STATE(212)] = 8958,
  [SMALL_STATE(213)] = 8986,
  [SMALL_STATE(214)] = 9014,
  [SMALL_STATE(215)] = 9040,
  [SMALL_STATE(216)] = 9069,
  [SMALL_STATE(217)] = 9094,
  [SMALL_STATE(218)] = 9131,
  [SMALL_STATE(219)] = 9160,
  [SMALL_STATE(220)] = 9205,
  [SMALL_STATE(221)] = 9242,
  [SMALL_STATE(222)] = 9271,
  [SMALL_STATE(223)] = 9300,
  [SMALL_STATE(224)] = 9351,
  [SMALL_STATE(225)] = 9380,
  [SMALL_STATE(226)] = 9409,
  [SMALL_STATE(227)] = 9454,
  [SMALL_STATE(228)] = 9505,
  [SMALL_STATE(229)] = 9550,
  [SMALL_STATE(230)] = 9579,
  [SMALL_STATE(231)] = 9608,
  [SMALL_STATE(232)] = 9659,
  [SMALL_STATE(233)] = 9688,
  [SMALL_STATE(234)] = 9725,
  [SMALL_STATE(235)] = 9752,
  [SMALL_STATE(236)] = 9803,
  [SMALL_STATE(237)] = 9832,
  [SMALL_STATE(238)] = 9861,
  [SMALL_STATE(239)] = 9890,
  [SMALL_STATE(240)] = 9919,
  [SMALL_STATE(241)] = 9970,
  [SMALL_STATE(242)] = 9999,
  [SMALL_STATE(243)] = 10044,
  [SMALL_STATE(244)] = 10073,
  [SMALL_STATE(245)] = 10124,
  [SMALL_STATE(246)] = 10153,
  [SMALL_STATE(247)] = 10182,
  [SMALL_STATE(248)] = 10233,
  [SMALL_STATE(249)] = 10284,
  [SMALL_STATE(250)] = 10313,
  [SMALL_STATE(251)] = 10342,
  [SMALL_STATE(252)] = 10371,
  [SMALL_STATE(253)] = 10400,
  [SMALL_STATE(254)] = 10429,
  [SMALL_STATE(255)] = 10458,
  [SMALL_STATE(256)] = 10509,
  [SMALL_STATE(257)] = 10538,
  [SMALL_STATE(258)] = 10589,
  [SMALL_STATE(259)] = 10634,
  [SMALL_STATE(260)] = 10679,
  [SMALL_STATE(261)] = 10730,
  [SMALL_STATE(262)] = 10781,
  [SMALL_STATE(263)] = 10810,
  [SMALL_STATE(264)] = 10861,
  [SMALL_STATE(265)] = 10890,
  [SMALL_STATE(266)] = 10916,
  [SMALL_STATE(267)] = 10944,
  [SMALL_STATE(268)] = 10972,
  [SMALL_STATE(269)] = 11020,
  [SMALL_STATE(270)] = 11046,
  [SMALL_STATE(271)] = 11072,
  [SMALL_STATE(272)] = 11096,
  [SMALL_STATE(273)] = 11134,
  [SMALL_STATE(274)] = 11162,
  [SMALL_STATE(275)] = 11190,
  [SMALL_STATE(276)] = 11228,
  [SMALL_STATE(277)] = 11274,
  [SMALL_STATE(278)] = 11298,
  [SMALL_STATE(279)] = 11322,
  [SMALL_STATE(280)] = 11370,
  [SMALL_STATE(281)] = 11418,
  [SMALL_STATE(282)] = 11446,
  [SMALL_STATE(283)] = 11474,
  [SMALL_STATE(284)] = 11522,
  [SMALL_STATE(285)] = 11546,
  [SMALL_STATE(286)] = 11574,
  [SMALL_STATE(287)] = 11602,
  [SMALL_STATE(288)] = 11630,
  [SMALL_STATE(289)] = 11676,
  [SMALL_STATE(290)] = 11724,
  [SMALL_STATE(291)] = 11752,
  [SMALL_STATE(292)] = 11780,
  [SMALL_STATE(293)] = 11826,
  [SMALL_STATE(294)] = 11874,
  [SMALL_STATE(295)] = 11898,
  [SMALL_STATE(296)] = 11944,
  [SMALL_STATE(297)] = 11971,
  [SMALL_STATE(298)] = 12014,
  [SMALL_STATE(299)] = 12041,
  [SMALL_STATE(300)] = 12064,
  [SMALL_STATE(301)] = 12091,
  [SMALL_STATE(302)] = 12118,
  [SMALL_STATE(303)] = 12145,
  [SMALL_STATE(304)] = 12168,
  [SMALL_STATE(305)] = 12201,
  [SMALL_STATE(306)] = 12244,
  [SMALL_STATE(307)] = 12271,
  [SMALL_STATE(308)] = 12298,
  [SMALL_STATE(309)] = 12325,
  [SMALL_STATE(310)] = 12352,
  [SMALL_STATE(311)] = 12379,
  [SMALL_STATE(312)] = 12406,
  [SMALL_STATE(313)] = 12433,
  [SMALL_STATE(314)] = 12456,
  [SMALL_STATE(315)] = 12483,
  [SMALL_STATE(316)] = 12510,
  [SMALL_STATE(317)] = 12545,
  [SMALL_STATE(318)] = 12572,
  [SMALL_STATE(319)] = 12599,
  [SMALL_STATE(320)] = 12642,
  [SMALL_STATE(321)] = 12685,
  [SMALL_STATE(322)] = 12720,
  [SMALL_STATE(323)] = 12747,
  [SMALL_STATE(324)] = 12774,
  [SMALL_STATE(325)] = 12801,
  [SMALL_STATE(326)] = 12844,
  [SMALL_STATE(327)] = 12871,
  [SMALL_STATE(328)] = 12900,
  [SMALL_STATE(329)] = 12933,
  [SMALL_STATE(330)] = 12966,
  [SMALL_STATE(331)] = 13009,
  [SMALL_STATE(332)] = 13052,
  [SMALL_STATE(333)] = 13080,
  [SMALL_STATE(334)] = 13106,
  [SMALL_STATE(335)] = 13128,
  [SMALL_STATE(336)] = 13168,
  [SMALL_STATE(337)] = 13196,
  [SMALL_STATE(338)] = 13218,
  [SMALL_STATE(339)] = 13240,
  [SMALL_STATE(340)] = 13266,
  [SMALL_STATE(341)] = 13288,
  [SMALL_STATE(342)] = 13310,
  [SMALL_STATE(343)] = 13332,
  [SMALL_STATE(344)] = 13354,
  [SMALL_STATE(345)] = 13380,
  [SMALL_STATE(346)] = 13410,
  [SMALL_STATE(347)] = 13432,
  [SMALL_STATE(348)] = 13458,
  [SMALL_STATE(349)] = 13486,
  [SMALL_STATE(350)] = 13512,
  [SMALL_STATE(351)] = 13538,
  [SMALL_STATE(352)] = 13560,
  [SMALL_STATE(353)] = 13586,
  [SMALL_STATE(354)] = 13612,
  [SMALL_STATE(355)] = 13638,
  [SMALL_STATE(356)] = 13660,
  [SMALL_STATE(357)] = 13682,
  [SMALL_STATE(358)] = 13708,
  [SMALL_STATE(359)] = 13730,
  [SMALL_STATE(360)] = 13758,
  [SMALL_STATE(361)] = 13780,
  [SMALL_STATE(362)] = 13810,
  [SMALL_STATE(363)] = 13840,
  [SMALL_STATE(364)] = 13879,
  [SMALL_STATE(365)] = 13908,
  [SMALL_STATE(366)] = 13943,
  [SMALL_STATE(367)] = 13972,
  [SMALL_STATE(368)] = 13993,
  [SMALL_STATE(369)] = 14032,
  [SMALL_STATE(370)] = 14071,
  [SMALL_STATE(371)] = 14092,
  [SMALL_STATE(372)] = 14127,
  [SMALL_STATE(373)] = 14148,
  [SMALL_STATE(374)] = 14169,
  [SMALL_STATE(375)] = 14192,
  [SMALL_STATE(376)] = 14231,
  [SMALL_STATE(377)] = 14266,
  [SMALL_STATE(378)] = 14305,
  [SMALL_STATE(379)] = 14344,
  [SMALL_STATE(380)] = 14379,
  [SMALL_STATE(381)] = 14400,
  [SMALL_STATE(382)] = 14421,
  [SMALL_STATE(383)] = 14445,
  [SMALL_STATE(384)] = 14479,
  [SMALL_STATE(385)] = 14511,
  [SMALL_STATE(386)] = 14535,
  [SMALL_STATE(387)] = 14567,
  [SMALL_STATE(388)] = 14591,
  [SMALL_STATE(389)] = 14615,
  [SMALL_STATE(390)] = 14639,
  [SMALL_STATE(391)] = 14675,
  [SMALL_STATE(392)] = 14707,
  [SMALL_STATE(393)] = 14739,
  [SMALL_STATE(394)] = 14763,
  [SMALL_STATE(395)] = 14795,
  [SMALL_STATE(396)] = 14819,
  [SMALL_STATE(397)] = 14843,
  [SMALL_STATE(398)] = 14867,
  [SMALL_STATE(399)] = 14891,
  [SMALL_STATE(400)] = 14917,
  [SMALL_STATE(401)] = 14939,
  [SMALL_STATE(402)] = 14965,
  [SMALL_STATE(403)] = 14991,
  [SMALL_STATE(404)] = 15029,
  [SMALL_STATE(405)] = 15049,
  [SMALL_STATE(406)] = 15081,
  [SMALL_STATE(407)] = 15112,
  [SMALL_STATE(408)] = 15143,
  [SMALL_STATE(409)] = 15166,
  [SMALL_STATE(410)] = 15189,
  [SMALL_STATE(411)] = 15212,
  [SMALL_STATE(412)] = 15235,
  [SMALL_STATE(413)] = 15266,
  [SMALL_STATE(414)] = 15305,
  [SMALL_STATE(415)] = 15336,
  [SMALL_STATE(416)] = 15359,
  [SMALL_STATE(417)] = 15382,
  [SMALL_STATE(418)] = 15405,
  [SMALL_STATE(419)] = 15430,
  [SMALL_STATE(420)] = 15463,
  [SMALL_STATE(421)] = 15485,
  [SMALL_STATE(422)] = 15519,
  [SMALL_STATE(423)] = 15541,
  [SMALL_STATE(424)] = 15575,
  [SMALL_STATE(425)] = 15597,
  [SMALL_STATE(426)] = 15617,
  [SMALL_STATE(427)] = 15635,
  [SMALL_STATE(428)] = 15669,
  [SMALL_STATE(429)] = 15691,
  [SMALL_STATE(430)] = 15723,
  [SMALL_STATE(431)] = 15755,
  [SMALL_STATE(432)] = 15777,
  [SMALL_STATE(433)] = 15795,
  [SMALL_STATE(434)] = 15829,
  [SMALL_STATE(435)] = 15861,
  [SMALL_STATE(436)] = 15883,
  [SMALL_STATE(437)] = 15905,
  [SMALL_STATE(438)] = 15937,
  [SMALL_STATE(439)] = 15971,
  [SMALL_STATE(440)] = 15993,
  [SMALL_STATE(441)] = 16027,
  [SMALL_STATE(442)] = 16061,
  [SMALL_STATE(443)] = 16097,
  [SMALL_STATE(444)] = 16129,
  [SMALL_STATE(445)] = 16163,
  [SMALL_STATE(446)] = 16195,
  [SMALL_STATE(447)] = 16229,
  [SMALL_STATE(448)] = 16251,
  [SMALL_STATE(449)] = 16285,
  [SMALL_STATE(450)] = 16307,
  [SMALL_STATE(451)] = 16329,
  [SMALL_STATE(452)] = 16363,
  [SMALL_STATE(453)] = 16385,
  [SMALL_STATE(454)] = 16419,
  [SMALL_STATE(455)] = 16451,
  [SMALL_STATE(456)] = 16469,
  [SMALL_STATE(457)] = 16498,
  [SMALL_STATE(458)] = 16529,
  [SMALL_STATE(459)] = 16560,
  [SMALL_STATE(460)] = 16583,
  [SMALL_STATE(461)] = 16614,
  [SMALL_STATE(462)] = 16645,
  [SMALL_STATE(463)] = 16662,
  [SMALL_STATE(464)] = 16693,
  [SMALL_STATE(465)] = 16726,
  [SMALL_STATE(466)] = 16755,
  [SMALL_STATE(467)] = 16786,
  [SMALL_STATE(468)] = 16803,
  [SMALL_STATE(469)] = 16834,
  [SMALL_STATE(470)] = 16863,
  [SMALL_STATE(471)] = 16894,
  [SMALL_STATE(472)] = 16911,
  [SMALL_STATE(473)] = 16944,
  [SMALL_STATE(474)] = 16967,
  [SMALL_STATE(475)] = 16996,
  [SMALL_STATE(476)] = 17019,
  [SMALL_STATE(477)] = 17048,
  [SMALL_STATE(478)] = 17081,
  [SMALL_STATE(479)] = 17112,
  [SMALL_STATE(480)] = 17141,
  [SMALL_STATE(481)] = 17172,
  [SMALL_STATE(482)] = 17199,
  [SMALL_STATE(483)] = 17230,
  [SMALL_STATE(484)] = 17247,
  [SMALL_STATE(485)] = 17278,
  [SMALL_STATE(486)] = 17309,
  [SMALL_STATE(487)] = 17340,
  [SMALL_STATE(488)] = 17366,
  [SMALL_STATE(489)] = 17392,
  [SMALL_STATE(490)] = 17418,
  [SMALL_STATE(491)] = 17446,
  [SMALL_STATE(492)] = 17468,
  [SMALL_STATE(493)] = 17490,
  [SMALL_STATE(494)] = 17516,
  [SMALL_STATE(495)] = 17542,
  [SMALL_STATE(496)] = 17564,
  [SMALL_STATE(497)] = 17590,
  [SMALL_STATE(498)] = 17612,
  [SMALL_STATE(499)] = 17640,
  [SMALL_STATE(500)] = 17662,
  [SMALL_STATE(501)] = 17688,
  [SMALL_STATE(502)] = 17718,
  [SMALL_STATE(503)] = 17734,
  [SMALL_STATE(504)] = 17764,
  [SMALL_STATE(505)] = 17790,
  [SMALL_STATE(506)] = 17816,
  [SMALL_STATE(507)] = 17846,
  [SMALL_STATE(508)] = 17876,
  [SMALL_STATE(509)] = 17906,
  [SMALL_STATE(510)] = 17922,
  [SMALL_STATE(511)] = 17953,
  [SMALL_STATE(512)] = 17974,
  [SMALL_STATE(513)] = 18001,
  [SMALL_STATE(514)] = 18032,
  [SMALL_STATE(515)] = 18063,
  [SMALL_STATE(516)] = 18084,
  [SMALL_STATE(517)] = 18111,
  [SMALL_STATE(518)] = 18132,
  [SMALL_STATE(519)] = 18153,
  [SMALL_STATE(520)] = 18184,
  [SMALL_STATE(521)] = 18213,
  [SMALL_STATE(522)] = 18244,
  [SMALL_STATE(523)] = 18265,
  [SMALL_STATE(524)] = 18296,
  [SMALL_STATE(525)] = 18327,
  [SMALL_STATE(526)] = 18358,
  [SMALL_STATE(527)] = 18389,
  [SMALL_STATE(528)] = 18410,
  [SMALL_STATE(529)] = 18434,
  [SMALL_STATE(530)] = 18458,
  [SMALL_STATE(531)] = 18482,
  [SMALL_STATE(532)] = 18506,
  [SMALL_STATE(533)] = 18530,
  [SMALL_STATE(534)] = 18558,
  [SMALL_STATE(535)] = 18584,
  [SMALL_STATE(536)] = 18608,
  [SMALL_STATE(537)] = 18632,
  [SMALL_STATE(538)] = 18656,
  [SMALL_STATE(539)] = 18684,
  [SMALL_STATE(540)] = 18708,
  [SMALL_STATE(541)] = 18732,
  [SMALL_STATE(542)] = 18748,
  [SMALL_STATE(543)] = 18764,
  [SMALL_STATE(544)] = 18792,
  [SMALL_STATE(545)] = 18808,
  [SMALL_STATE(546)] = 18832,
  [SMALL_STATE(547)] = 18858,
  [SMALL_STATE(548)] = 18886,
  [SMALL_STATE(549)] = 18910,
  [SMALL_STATE(550)] = 18934,
  [SMALL_STATE(551)] = 18950,
  [SMALL_STATE(552)] = 18978,
  [SMALL_STATE(553)] = 18994,
  [SMALL_STATE(554)] = 19010,
  [SMALL_STATE(555)] = 19026,
  [SMALL_STATE(556)] = 19054,
  [SMALL_STATE(557)] = 19082,
  [SMALL_STATE(558)] = 19098,
  [SMALL_STATE(559)] = 19114,
  [SMALL_STATE(560)] = 19142,
  [SMALL_STATE(561)] = 19166,
  [SMALL_STATE(562)] = 19182,
  [SMALL_STATE(563)] = 19198,
  [SMALL_STATE(564)] = 19214,
  [SMALL_STATE(565)] = 19230,
  [SMALL_STATE(566)] = 19246,
  [SMALL_STATE(567)] = 19274,
  [SMALL_STATE(568)] = 19296,
  [SMALL_STATE(569)] = 19312,
  [SMALL_STATE(570)] = 19340,
  [SMALL_STATE(571)] = 19355,
  [SMALL_STATE(572)] = 19372,
  [SMALL_STATE(573)] = 19389,
  [SMALL_STATE(574)] = 19414,
  [SMALL_STATE(575)] = 19429,
  [SMALL_STATE(576)] = 19444,
  [SMALL_STATE(577)] = 19463,
  [SMALL_STATE(578)] = 19488,
  [SMALL_STATE(579)] = 19503,
  [SMALL_STATE(580)] = 19522,
  [SMALL_STATE(581)] = 19537,
  [SMALL_STATE(582)] = 19556,
  [SMALL_STATE(583)] = 19576,
  [SMALL_STATE(584)] = 19598,
  [SMALL_STATE(585)] = 19620,
  [SMALL_STATE(586)] = 19640,
  [SMALL_STATE(587)] = 19660,
  [SMALL_STATE(588)] = 19676,
  [SMALL_STATE(589)] = 19696,
  [SMALL_STATE(590)] = 19712,
  [SMALL_STATE(591)] = 19728,
  [SMALL_STATE(592)] = 19750,
  [SMALL_STATE(593)] = 19766,
  [SMALL_STATE(594)] = 19782,
  [SMALL_STATE(595)] = 19800,
  [SMALL_STATE(596)] = 19820,
  [SMALL_STATE(597)] = 19842,
  [SMALL_STATE(598)] = 19864,
  [SMALL_STATE(599)] = 19886,
  [SMALL_STATE(600)] = 19906,
  [SMALL_STATE(601)] = 19928,
  [SMALL_STATE(602)] = 19948,
  [SMALL_STATE(603)] = 19968,
  [SMALL_STATE(604)] = 19990,
  [SMALL_STATE(605)] = 20010,
  [SMALL_STATE(606)] = 20032,
  [SMALL_STATE(607)] = 20052,
  [SMALL_STATE(608)] = 20074,
  [SMALL_STATE(609)] = 20094,
  [SMALL_STATE(610)] = 20116,
  [SMALL_STATE(611)] = 20134,
  [SMALL_STATE(612)] = 20152,
  [SMALL_STATE(613)] = 20172,
  [SMALL_STATE(614)] = 20194,
  [SMALL_STATE(615)] = 20214,
  [SMALL_STATE(616)] = 20236,
  [SMALL_STATE(617)] = 20254,
  [SMALL_STATE(618)] = 20274,
  [SMALL_STATE(619)] = 20292,
  [SMALL_STATE(620)] = 20314,
  [SMALL_STATE(621)] = 20334,
  [SMALL_STATE(622)] = 20356,
  [SMALL_STATE(623)] = 20378,
  [SMALL_STATE(624)] = 20400,
  [SMALL_STATE(625)] = 20420,
  [SMALL_STATE(626)] = 20442,
  [SMALL_STATE(627)] = 20464,
  [SMALL_STATE(628)] = 20484,
  [SMALL_STATE(629)] = 20504,
  [SMALL_STATE(630)] = 20517,
  [SMALL_STATE(631)] = 20530,
  [SMALL_STATE(632)] = 20543,
  [SMALL_STATE(633)] = 20562,
  [SMALL_STATE(634)] = 20581,
  [SMALL_STATE(635)] = 20600,
  [SMALL_STATE(636)] = 20613,
  [SMALL_STATE(637)] = 20626,
  [SMALL_STATE(638)] = 20645,
  [SMALL_STATE(639)] = 20658,
  [SMALL_STATE(640)] = 20677,
  [SMALL_STATE(641)] = 20690,
  [SMALL_STATE(642)] = 20709,
  [SMALL_STATE(643)] = 20722,
  [SMALL_STATE(644)] = 20735,
  [SMALL_STATE(645)] = 20748,
  [SMALL_STATE(646)] = 20767,
  [SMALL_STATE(647)] = 20786,
  [SMALL_STATE(648)] = 20799,
  [SMALL_STATE(649)] = 20818,
  [SMALL_STATE(650)] = 20831,
  [SMALL_STATE(651)] = 20850,
  [SMALL_STATE(652)] = 20863,
  [SMALL_STATE(653)] = 20876,
  [SMALL_STATE(654)] = 20889,
  [SMALL_STATE(655)] = 20902,
  [SMALL_STATE(656)] = 20915,
  [SMALL_STATE(657)] = 20931,
  [SMALL_STATE(658)] = 20947,
  [SMALL_STATE(659)] = 20963,
  [SMALL_STATE(660)] = 20979,
  [SMALL_STATE(661)] = 20991,
  [SMALL_STATE(662)] = 21007,
  [SMALL_STATE(663)] = 21023,
  [SMALL_STATE(664)] = 21039,
  [SMALL_STATE(665)] = 21055,
  [SMALL_STATE(666)] = 21071,
  [SMALL_STATE(667)] = 21087,
  [SMALL_STATE(668)] = 21099,
  [SMALL_STATE(669)] = 21115,
  [SMALL_STATE(670)] = 21131,
  [SMALL_STATE(671)] = 21146,
  [SMALL_STATE(672)] = 21161,
  [SMALL_STATE(673)] = 21174,
  [SMALL_STATE(674)] = 21189,
  [SMALL_STATE(675)] = 21204,
  [SMALL_STATE(676)] = 21219,
  [SMALL_STATE(677)] = 21234,
  [SMALL_STATE(678)] = 21247,
  [SMALL_STATE(679)] = 21262,
  [SMALL_STATE(680)] = 21275,
  [SMALL_STATE(681)] = 21290,
  [SMALL_STATE(682)] = 21305,
  [SMALL_STATE(683)] = 21320,
  [SMALL_STATE(684)] = 21335,
  [SMALL_STATE(685)] = 21350,
  [SMALL_STATE(686)] = 21365,
  [SMALL_STATE(687)] = 21380,
  [SMALL_STATE(688)] = 21395,
  [SMALL_STATE(689)] = 21410,
  [SMALL_STATE(690)] = 21420,
  [SMALL_STATE(691)] = 21430,
  [SMALL_STATE(692)] = 21440,
  [SMALL_STATE(693)] = 21452,
  [SMALL_STATE(694)] = 21462,
  [SMALL_STATE(695)] = 21476,
  [SMALL_STATE(696)] = 21486,
  [SMALL_STATE(697)] = 21500,
  [SMALL_STATE(698)] = 21510,
  [SMALL_STATE(699)] = 21522,
  [SMALL_STATE(700)] = 21532,
  [SMALL_STATE(701)] = 21544,
  [SMALL_STATE(702)] = 21554,
  [SMALL_STATE(703)] = 21564,
  [SMALL_STATE(704)] = 21576,
  [SMALL_STATE(705)] = 21586,
  [SMALL_STATE(706)] = 21596,
  [SMALL_STATE(707)] = 21608,
  [SMALL_STATE(708)] = 21620,
  [SMALL_STATE(709)] = 21630,
  [SMALL_STATE(710)] = 21640,
  [SMALL_STATE(711)] = 21650,
  [SMALL_STATE(712)] = 21660,
  [SMALL_STATE(713)] = 21670,
  [SMALL_STATE(714)] = 21680,
  [SMALL_STATE(715)] = 21690,
  [SMALL_STATE(716)] = 21700,
  [SMALL_STATE(717)] = 21712,
  [SMALL_STATE(718)] = 21722,
  [SMALL_STATE(719)] = 21732,
  [SMALL_STATE(720)] = 21742,
  [SMALL_STATE(721)] = 21752,
  [SMALL_STATE(722)] = 21762,
  [SMALL_STATE(723)] = 21774,
  [SMALL_STATE(724)] = 21786,
  [SMALL_STATE(725)] = 21796,
  [SMALL_STATE(726)] = 21806,
  [SMALL_STATE(727)] = 21818,
  [SMALL_STATE(728)] = 21828,
  [SMALL_STATE(729)] = 21838,
  [SMALL_STATE(730)] = 21848,
  [SMALL_STATE(731)] = 21858,
  [SMALL_STATE(732)] = 21870,
  [SMALL_STATE(733)] = 21882,
  [SMALL_STATE(734)] = 21892,
  [SMALL_STATE(735)] = 21902,
  [SMALL_STATE(736)] = 21914,
  [SMALL_STATE(737)] = 21924,
  [SMALL_STATE(738)] = 21938,
  [SMALL_STATE(739)] = 21950,
  [SMALL_STATE(740)] = 21960,
  [SMALL_STATE(741)] = 21970,
  [SMALL_STATE(742)] = 21980,
  [SMALL_STATE(743)] = 21990,
  [SMALL_STATE(744)] = 22000,
  [SMALL_STATE(745)] = 22012,
  [SMALL_STATE(746)] = 22024,
  [SMALL_STATE(747)] = 22034,
  [SMALL_STATE(748)] = 22044,
  [SMALL_STATE(749)] = 22054,
  [SMALL_STATE(750)] = 22066,
  [SMALL_STATE(751)] = 22076,
  [SMALL_STATE(752)] = 22086,
  [SMALL_STATE(753)] = 22100,
  [SMALL_STATE(754)] = 22110,
  [SMALL_STATE(755)] = 22120,
  [SMALL_STATE(756)] = 22134,
  [SMALL_STATE(757)] = 22146,
  [SMALL_STATE(758)] = 22158,
  [SMALL_STATE(759)] = 22172,
  [SMALL_STATE(760)] = 22182,
  [SMALL_STATE(761)] = 22195,
  [SMALL_STATE(762)] = 22204,
  [SMALL_STATE(763)] = 22213,
  [SMALL_STATE(764)] = 22222,
  [SMALL_STATE(765)] = 22231,
  [SMALL_STATE(766)] = 22240,
  [SMALL_STATE(767)] = 22253,
  [SMALL_STATE(768)] = 22262,
  [SMALL_STATE(769)] = 22271,
  [SMALL_STATE(770)] = 22280,
  [SMALL_STATE(771)] = 22289,
  [SMALL_STATE(772)] = 22296,
  [SMALL_STATE(773)] = 22305,
  [SMALL_STATE(774)] = 22314,
  [SMALL_STATE(775)] = 22323,
  [SMALL_STATE(776)] = 22332,
  [SMALL_STATE(777)] = 22341,
  [SMALL_STATE(778)] = 22350,
  [SMALL_STATE(779)] = 22359,
  [SMALL_STATE(780)] = 22372,
  [SMALL_STATE(781)] = 22383,
  [SMALL_STATE(782)] = 22392,
  [SMALL_STATE(783)] = 22401,
  [SMALL_STATE(784)] = 22410,
  [SMALL_STATE(785)] = 22423,
  [SMALL_STATE(786)] = 22432,
  [SMALL_STATE(787)] = 22441,
  [SMALL_STATE(788)] = 22450,
  [SMALL_STATE(789)] = 22459,
  [SMALL_STATE(790)] = 22468,
  [SMALL_STATE(791)] = 22477,
  [SMALL_STATE(792)] = 22486,
  [SMALL_STATE(793)] = 22495,
  [SMALL_STATE(794)] = 22504,
  [SMALL_STATE(795)] = 22513,
  [SMALL_STATE(796)] = 22522,
  [SMALL_STATE(797)] = 22535,
  [SMALL_STATE(798)] = 22544,
  [SMALL_STATE(799)] = 22553,
  [SMALL_STATE(800)] = 22562,
  [SMALL_STATE(801)] = 22571,
  [SMALL_STATE(802)] = 22580,
  [SMALL_STATE(803)] = 22589,
  [SMALL_STATE(804)] = 22600,
  [SMALL_STATE(805)] = 22609,
  [SMALL_STATE(806)] = 22618,
  [SMALL_STATE(807)] = 22627,
  [SMALL_STATE(808)] = 22636,
  [SMALL_STATE(809)] = 22647,
  [SMALL_STATE(810)] = 22656,
  [SMALL_STATE(811)] = 22665,
  [SMALL_STATE(812)] = 22678,
  [SMALL_STATE(813)] = 22687,
  [SMALL_STATE(814)] = 22696,
  [SMALL_STATE(815)] = 22705,
  [SMALL_STATE(816)] = 22714,
  [SMALL_STATE(817)] = 22723,
  [SMALL_STATE(818)] = 22732,
  [SMALL_STATE(819)] = 22741,
  [SMALL_STATE(820)] = 22750,
  [SMALL_STATE(821)] = 22761,
  [SMALL_STATE(822)] = 22774,
  [SMALL_STATE(823)] = 22783,
  [SMALL_STATE(824)] = 22793,
  [SMALL_STATE(825)] = 22803,
  [SMALL_STATE(826)] = 22811,
  [SMALL_STATE(827)] = 22821,
  [SMALL_STATE(828)] = 22831,
  [SMALL_STATE(829)] = 22841,
  [SMALL_STATE(830)] = 22849,
  [SMALL_STATE(831)] = 22859,
  [SMALL_STATE(832)] = 22869,
  [SMALL_STATE(833)] = 22879,
  [SMALL_STATE(834)] = 22889,
  [SMALL_STATE(835)] = 22899,
  [SMALL_STATE(836)] = 22909,
  [SMALL_STATE(837)] = 22916,
  [SMALL_STATE(838)] = 22923,
  [SMALL_STATE(839)] = 22930,
  [SMALL_STATE(840)] = 22937,
  [SMALL_STATE(841)] = 22944,
  [SMALL_STATE(842)] = 22951,
  [SMALL_STATE(843)] = 22956,
  [SMALL_STATE(844)] = 22963,
  [SMALL_STATE(845)] = 22970,
  [SMALL_STATE(846)] = 22977,
  [SMALL_STATE(847)] = 22982,
  [SMALL_STATE(848)] = 22987,
  [SMALL_STATE(849)] = 22992,
  [SMALL_STATE(850)] = 22997,
  [SMALL_STATE(851)] = 23002,
  [SMALL_STATE(852)] = 23007,
  [SMALL_STATE(853)] = 23014,
  [SMALL_STATE(854)] = 23019,
  [SMALL_STATE(855)] = 23024,
  [SMALL_STATE(856)] = 23029,
  [SMALL_STATE(857)] = 23034,
  [SMALL_STATE(858)] = 23039,
  [SMALL_STATE(859)] = 23046,
  [SMALL_STATE(860)] = 23051,
  [SMALL_STATE(861)] = 23058,
  [SMALL_STATE(862)] = 23063,
  [SMALL_STATE(863)] = 23068,
  [SMALL_STATE(864)] = 23073,
  [SMALL_STATE(865)] = 23078,
  [SMALL_STATE(866)] = 23083,
  [SMALL_STATE(867)] = 23090,
  [SMALL_STATE(868)] = 23095,
  [SMALL_STATE(869)] = 23100,
  [SMALL_STATE(870)] = 23105,
  [SMALL_STATE(871)] = 23110,
  [SMALL_STATE(872)] = 23115,
  [SMALL_STATE(873)] = 23120,
  [SMALL_STATE(874)] = 23125,
  [SMALL_STATE(875)] = 23130,
  [SMALL_STATE(876)] = 23135,
  [SMALL_STATE(877)] = 23140,
  [SMALL_STATE(878)] = 23145,
  [SMALL_STATE(879)] = 23150,
  [SMALL_STATE(880)] = 23157,
  [SMALL_STATE(881)] = 23164,
  [SMALL_STATE(882)] = 23171,
  [SMALL_STATE(883)] = 23178,
  [SMALL_STATE(884)] = 23185,
  [SMALL_STATE(885)] = 23190,
  [SMALL_STATE(886)] = 23197,
  [SMALL_STATE(887)] = 23201,
  [SMALL_STATE(888)] = 23205,
  [SMALL_STATE(889)] = 23209,
  [SMALL_STATE(890)] = 23213,
  [SMALL_STATE(891)] = 23217,
  [SMALL_STATE(892)] = 23221,
  [SMALL_STATE(893)] = 23225,
  [SMALL_STATE(894)] = 23229,
  [SMALL_STATE(895)] = 23233,
  [SMALL_STATE(896)] = 23237,
  [SMALL_STATE(897)] = 23241,
  [SMALL_STATE(898)] = 23245,
  [SMALL_STATE(899)] = 23249,
  [SMALL_STATE(900)] = 23253,
  [SMALL_STATE(901)] = 23257,
  [SMALL_STATE(902)] = 23261,
  [SMALL_STATE(903)] = 23265,
  [SMALL_STATE(904)] = 23269,
  [SMALL_STATE(905)] = 23273,
  [SMALL_STATE(906)] = 23277,
  [SMALL_STATE(907)] = 23281,
  [SMALL_STATE(908)] = 23285,
  [SMALL_STATE(909)] = 23289,
  [SMALL_STATE(910)] = 23293,
  [SMALL_STATE(911)] = 23297,
  [SMALL_STATE(912)] = 23301,
  [SMALL_STATE(913)] = 23305,
  [SMALL_STATE(914)] = 23309,
  [SMALL_STATE(915)] = 23313,
  [SMALL_STATE(916)] = 23317,
  [SMALL_STATE(917)] = 23321,
  [SMALL_STATE(918)] = 23325,
  [SMALL_STATE(919)] = 23329,
  [SMALL_STATE(920)] = 23333,
  [SMALL_STATE(921)] = 23337,
  [SMALL_STATE(922)] = 23341,
  [SMALL_STATE(923)] = 23345,
  [SMALL_STATE(924)] = 23349,
  [SMALL_STATE(925)] = 23353,
  [SMALL_STATE(926)] = 23357,
  [SMALL_STATE(927)] = 23361,
  [SMALL_STATE(928)] = 23365,
  [SMALL_STATE(929)] = 23369,
  [SMALL_STATE(930)] = 23373,
  [SMALL_STATE(931)] = 23377,
  [SMALL_STATE(932)] = 23381,
  [SMALL_STATE(933)] = 23385,
  [SMALL_STATE(934)] = 23389,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_no_language, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_iri, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_literal, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_with_language, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype_iri, 1), REDUCE(sym_class_iri, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_iri, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_iri, 1),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_data_property_iri, 1), REDUCE(sym_object_property_iri, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(27),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(30),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(38),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotations, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(45),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_iri, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(860),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(646),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(212),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(213),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_primary, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(69),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 3),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(77),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(569),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(319),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(523),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(133),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(132),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(127),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(123),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(419),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(893),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(890),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(451),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2), SHIFT_REPEAT(335),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_iri, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inverse_object_property, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(268),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(331),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(325),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_data_property_iri, 1), REDUCE(sym_object_property_iri, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(530),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 3),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(173),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(508),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(581),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 2),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(441),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(523),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(472),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(141),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(567),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(506),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(283),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_property_iri, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inverse_object_property, 2),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(297),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(423),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(523),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(520),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(136),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(180),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(826),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(280),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(504),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(634),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(632),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(633),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(637),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(537),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(135),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(403),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(464),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(196),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(534),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(150),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(448),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 2),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(320),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 2),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 6),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 1),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(165),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(293),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2), SHIFT_REPEAT(231),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2), SHIFT_REPEAT(507),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2), SHIFT_REPEAT(442),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(177),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 2),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(551),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 1),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(327),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(510),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(129),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(413),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(477),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2), SHIFT_REPEAT(600),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 3),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_with, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_union_of, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_union_of, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_fact, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_fact, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(523),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(577),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(566),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 1),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(348),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalent_to, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(573),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 2),
  [983] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(359),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_class_of, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri, 1),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_iri, 1),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ontology_iri, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 3),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 3),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(305),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(523),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(427),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(666),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), REDUCE(sym_datatype_frame, 4),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(401),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(402),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(279),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(418),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2), SHIFT_REPEAT(606),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2), SHIFT_REPEAT(531),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2), SHIFT_REPEAT(263),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_iri, 1),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 3),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 3),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2), SHIFT_REPEAT(536),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 4),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 4),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 4),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [1197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(459),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_equavalent_to, 3),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(473),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(475),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_equavalent_to, 2),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_no_language, 1),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(492),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(495),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(497),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(499),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 1),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [1294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(555),
  [1297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(517),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 3),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 2),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_iri, 1),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_literal, 3),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_with_language, 2),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotations, 2),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_iri, 1),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_property_iri, 1),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(556),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(538),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(559),
  [1441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(547),
  [1444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(543),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(330),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [1494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(866),
  [1497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(533),
  [1500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(453),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2), SHIFT_REPEAT(915),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(289),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 2),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 1),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2), SHIFT_REPEAT(529),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 1),
  [1626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(571),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 2),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2),
  [1641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2), SHIFT_REPEAT(412),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ontology_document, 2),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1788] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_owl_ms(void) {
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

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
#define STATE_COUNT 942
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
  [30] = 30,
  [31] = 28,
  [32] = 30,
  [33] = 27,
  [34] = 30,
  [35] = 27,
  [36] = 28,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 27,
  [44] = 30,
  [45] = 45,
  [46] = 28,
  [47] = 40,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 40,
  [56] = 56,
  [57] = 57,
  [58] = 2,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 40,
  [70] = 27,
  [71] = 28,
  [72] = 22,
  [73] = 24,
  [74] = 30,
  [75] = 25,
  [76] = 26,
  [77] = 77,
  [78] = 29,
  [79] = 79,
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
  [95] = 40,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 97,
  [101] = 97,
  [102] = 102,
  [103] = 103,
  [104] = 102,
  [105] = 102,
  [106] = 106,
  [107] = 107,
  [108] = 97,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 102,
  [115] = 97,
  [116] = 97,
  [117] = 117,
  [118] = 118,
  [119] = 102,
  [120] = 97,
  [121] = 121,
  [122] = 97,
  [123] = 102,
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
  [147] = 109,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 149,
  [152] = 118,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 103,
  [157] = 117,
  [158] = 107,
  [159] = 159,
  [160] = 99,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 106,
  [165] = 165,
  [166] = 121,
  [167] = 113,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 149,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 149,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 129,
  [187] = 143,
  [188] = 188,
  [189] = 189,
  [190] = 109,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 3,
  [195] = 7,
  [196] = 103,
  [197] = 197,
  [198] = 198,
  [199] = 106,
  [200] = 121,
  [201] = 113,
  [202] = 6,
  [203] = 203,
  [204] = 204,
  [205] = 134,
  [206] = 138,
  [207] = 7,
  [208] = 107,
  [209] = 3,
  [210] = 118,
  [211] = 117,
  [212] = 126,
  [213] = 6,
  [214] = 99,
  [215] = 215,
  [216] = 143,
  [217] = 217,
  [218] = 179,
  [219] = 219,
  [220] = 118,
  [221] = 221,
  [222] = 117,
  [223] = 184,
  [224] = 224,
  [225] = 225,
  [226] = 224,
  [227] = 173,
  [228] = 228,
  [229] = 126,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 224,
  [240] = 236,
  [241] = 109,
  [242] = 107,
  [243] = 225,
  [244] = 244,
  [245] = 224,
  [246] = 146,
  [247] = 134,
  [248] = 248,
  [249] = 221,
  [250] = 250,
  [251] = 99,
  [252] = 221,
  [253] = 150,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 121,
  [258] = 103,
  [259] = 259,
  [260] = 260,
  [261] = 106,
  [262] = 113,
  [263] = 263,
  [264] = 264,
  [265] = 221,
  [266] = 266,
  [267] = 173,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 150,
  [272] = 146,
  [273] = 134,
  [274] = 274,
  [275] = 24,
  [276] = 276,
  [277] = 6,
  [278] = 143,
  [279] = 7,
  [280] = 184,
  [281] = 3,
  [282] = 274,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 274,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 274,
  [291] = 274,
  [292] = 22,
  [293] = 126,
  [294] = 274,
  [295] = 179,
  [296] = 296,
  [297] = 93,
  [298] = 298,
  [299] = 179,
  [300] = 300,
  [301] = 173,
  [302] = 300,
  [303] = 303,
  [304] = 304,
  [305] = 184,
  [306] = 306,
  [307] = 91,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 300,
  [312] = 300,
  [313] = 300,
  [314] = 94,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 92,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 29,
  [326] = 26,
  [327] = 150,
  [328] = 96,
  [329] = 329,
  [330] = 146,
  [331] = 300,
  [332] = 25,
  [333] = 333,
  [334] = 334,
  [335] = 30,
  [336] = 27,
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
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 29,
  [361] = 28,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 364,
  [367] = 367,
  [368] = 368,
  [369] = 22,
  [370] = 370,
  [371] = 24,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 364,
  [378] = 24,
  [379] = 364,
  [380] = 364,
  [381] = 22,
  [382] = 364,
  [383] = 383,
  [384] = 25,
  [385] = 25,
  [386] = 109,
  [387] = 387,
  [388] = 113,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 99,
  [394] = 29,
  [395] = 395,
  [396] = 26,
  [397] = 103,
  [398] = 106,
  [399] = 399,
  [400] = 121,
  [401] = 401,
  [402] = 118,
  [403] = 26,
  [404] = 117,
  [405] = 29,
  [406] = 107,
  [407] = 407,
  [408] = 29,
  [409] = 409,
  [410] = 134,
  [411] = 411,
  [412] = 143,
  [413] = 413,
  [414] = 414,
  [415] = 407,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 126,
  [420] = 420,
  [421] = 268,
  [422] = 422,
  [423] = 22,
  [424] = 424,
  [425] = 424,
  [426] = 426,
  [427] = 424,
  [428] = 428,
  [429] = 424,
  [430] = 422,
  [431] = 431,
  [432] = 24,
  [433] = 24,
  [434] = 434,
  [435] = 435,
  [436] = 24,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 422,
  [442] = 22,
  [443] = 443,
  [444] = 444,
  [445] = 424,
  [446] = 422,
  [447] = 40,
  [448] = 424,
  [449] = 422,
  [450] = 450,
  [451] = 451,
  [452] = 276,
  [453] = 22,
  [454] = 454,
  [455] = 296,
  [456] = 422,
  [457] = 29,
  [458] = 458,
  [459] = 26,
  [460] = 458,
  [461] = 29,
  [462] = 458,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 25,
  [467] = 26,
  [468] = 24,
  [469] = 464,
  [470] = 470,
  [471] = 458,
  [472] = 464,
  [473] = 464,
  [474] = 474,
  [475] = 475,
  [476] = 22,
  [477] = 25,
  [478] = 26,
  [479] = 479,
  [480] = 464,
  [481] = 464,
  [482] = 25,
  [483] = 458,
  [484] = 29,
  [485] = 485,
  [486] = 486,
  [487] = 458,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 26,
  [492] = 488,
  [493] = 29,
  [494] = 10,
  [495] = 488,
  [496] = 25,
  [497] = 488,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 488,
  [503] = 503,
  [504] = 504,
  [505] = 488,
  [506] = 488,
  [507] = 29,
  [508] = 488,
  [509] = 29,
  [510] = 29,
  [511] = 94,
  [512] = 512,
  [513] = 513,
  [514] = 513,
  [515] = 92,
  [516] = 513,
  [517] = 513,
  [518] = 96,
  [519] = 519,
  [520] = 29,
  [521] = 91,
  [522] = 513,
  [523] = 513,
  [524] = 93,
  [525] = 513,
  [526] = 513,
  [527] = 513,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 3,
  [532] = 7,
  [533] = 6,
  [534] = 534,
  [535] = 535,
  [536] = 529,
  [537] = 537,
  [538] = 38,
  [539] = 14,
  [540] = 540,
  [541] = 530,
  [542] = 542,
  [543] = 17,
  [544] = 530,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 19,
  [549] = 530,
  [550] = 16,
  [551] = 530,
  [552] = 552,
  [553] = 530,
  [554] = 530,
  [555] = 555,
  [556] = 15,
  [557] = 530,
  [558] = 11,
  [559] = 12,
  [560] = 530,
  [561] = 561,
  [562] = 37,
  [563] = 563,
  [564] = 39,
  [565] = 565,
  [566] = 566,
  [567] = 21,
  [568] = 568,
  [569] = 18,
  [570] = 20,
  [571] = 571,
  [572] = 572,
  [573] = 155,
  [574] = 574,
  [575] = 41,
  [576] = 576,
  [577] = 374,
  [578] = 578,
  [579] = 10,
  [580] = 3,
  [581] = 7,
  [582] = 6,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 584,
  [587] = 91,
  [588] = 585,
  [589] = 585,
  [590] = 590,
  [591] = 94,
  [592] = 585,
  [593] = 590,
  [594] = 594,
  [595] = 93,
  [596] = 594,
  [597] = 597,
  [598] = 584,
  [599] = 585,
  [600] = 594,
  [601] = 590,
  [602] = 602,
  [603] = 590,
  [604] = 594,
  [605] = 594,
  [606] = 91,
  [607] = 92,
  [608] = 594,
  [609] = 609,
  [610] = 590,
  [611] = 92,
  [612] = 585,
  [613] = 585,
  [614] = 584,
  [615] = 615,
  [616] = 616,
  [617] = 96,
  [618] = 96,
  [619] = 584,
  [620] = 594,
  [621] = 584,
  [622] = 584,
  [623] = 585,
  [624] = 594,
  [625] = 585,
  [626] = 94,
  [627] = 590,
  [628] = 594,
  [629] = 590,
  [630] = 93,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 634,
  [637] = 11,
  [638] = 12,
  [639] = 6,
  [640] = 39,
  [641] = 21,
  [642] = 18,
  [643] = 20,
  [644] = 37,
  [645] = 645,
  [646] = 19,
  [647] = 14,
  [648] = 648,
  [649] = 7,
  [650] = 38,
  [651] = 3,
  [652] = 652,
  [653] = 634,
  [654] = 16,
  [655] = 17,
  [656] = 15,
  [657] = 657,
  [658] = 634,
  [659] = 155,
  [660] = 660,
  [661] = 661,
  [662] = 10,
  [663] = 661,
  [664] = 661,
  [665] = 661,
  [666] = 10,
  [667] = 10,
  [668] = 668,
  [669] = 661,
  [670] = 670,
  [671] = 661,
  [672] = 41,
  [673] = 94,
  [674] = 93,
  [675] = 92,
  [676] = 91,
  [677] = 10,
  [678] = 678,
  [679] = 94,
  [680] = 93,
  [681] = 96,
  [682] = 91,
  [683] = 683,
  [684] = 92,
  [685] = 92,
  [686] = 91,
  [687] = 96,
  [688] = 96,
  [689] = 689,
  [690] = 94,
  [691] = 93,
  [692] = 12,
  [693] = 7,
  [694] = 37,
  [695] = 118,
  [696] = 20,
  [697] = 18,
  [698] = 21,
  [699] = 3,
  [700] = 19,
  [701] = 39,
  [702] = 117,
  [703] = 703,
  [704] = 12,
  [705] = 11,
  [706] = 14,
  [707] = 38,
  [708] = 96,
  [709] = 15,
  [710] = 703,
  [711] = 16,
  [712] = 92,
  [713] = 17,
  [714] = 15,
  [715] = 38,
  [716] = 14,
  [717] = 19,
  [718] = 16,
  [719] = 703,
  [720] = 37,
  [721] = 703,
  [722] = 20,
  [723] = 723,
  [724] = 18,
  [725] = 21,
  [726] = 6,
  [727] = 121,
  [728] = 39,
  [729] = 703,
  [730] = 703,
  [731] = 12,
  [732] = 11,
  [733] = 99,
  [734] = 11,
  [735] = 7,
  [736] = 3,
  [737] = 703,
  [738] = 39,
  [739] = 113,
  [740] = 21,
  [741] = 18,
  [742] = 20,
  [743] = 37,
  [744] = 19,
  [745] = 14,
  [746] = 107,
  [747] = 38,
  [748] = 15,
  [749] = 703,
  [750] = 17,
  [751] = 16,
  [752] = 6,
  [753] = 109,
  [754] = 703,
  [755] = 755,
  [756] = 17,
  [757] = 3,
  [758] = 7,
  [759] = 103,
  [760] = 6,
  [761] = 761,
  [762] = 94,
  [763] = 93,
  [764] = 106,
  [765] = 91,
  [766] = 766,
  [767] = 37,
  [768] = 768,
  [769] = 134,
  [770] = 770,
  [771] = 3,
  [772] = 766,
  [773] = 770,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 766,
  [778] = 41,
  [779] = 776,
  [780] = 780,
  [781] = 776,
  [782] = 41,
  [783] = 143,
  [784] = 776,
  [785] = 766,
  [786] = 780,
  [787] = 787,
  [788] = 774,
  [789] = 15,
  [790] = 126,
  [791] = 780,
  [792] = 770,
  [793] = 780,
  [794] = 770,
  [795] = 766,
  [796] = 776,
  [797] = 38,
  [798] = 798,
  [799] = 780,
  [800] = 774,
  [801] = 770,
  [802] = 774,
  [803] = 17,
  [804] = 16,
  [805] = 6,
  [806] = 766,
  [807] = 776,
  [808] = 770,
  [809] = 780,
  [810] = 7,
  [811] = 770,
  [812] = 11,
  [813] = 774,
  [814] = 12,
  [815] = 39,
  [816] = 21,
  [817] = 766,
  [818] = 776,
  [819] = 18,
  [820] = 776,
  [821] = 780,
  [822] = 20,
  [823] = 774,
  [824] = 41,
  [825] = 766,
  [826] = 19,
  [827] = 14,
  [828] = 766,
  [829] = 776,
  [830] = 41,
  [831] = 831,
  [832] = 832,
  [833] = 443,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 843,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 849,
  [852] = 847,
  [853] = 853,
  [854] = 849,
  [855] = 846,
  [856] = 843,
  [857] = 847,
  [858] = 846,
  [859] = 843,
  [860] = 844,
  [861] = 844,
  [862] = 844,
  [863] = 843,
  [864] = 847,
  [865] = 865,
  [866] = 846,
  [867] = 849,
  [868] = 849,
  [869] = 847,
  [870] = 844,
  [871] = 846,
  [872] = 847,
  [873] = 873,
  [874] = 874,
  [875] = 844,
  [876] = 847,
  [877] = 877,
  [878] = 878,
  [879] = 846,
  [880] = 843,
  [881] = 843,
  [882] = 882,
  [883] = 846,
  [884] = 884,
  [885] = 885,
  [886] = 849,
  [887] = 844,
  [888] = 849,
  [889] = 849,
  [890] = 849,
  [891] = 849,
  [892] = 849,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 895,
  [897] = 897,
  [898] = 898,
  [899] = 899,
  [900] = 894,
  [901] = 895,
  [902] = 902,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 894,
  [908] = 895,
  [909] = 899,
  [910] = 910,
  [911] = 895,
  [912] = 895,
  [913] = 894,
  [914] = 895,
  [915] = 895,
  [916] = 916,
  [917] = 899,
  [918] = 918,
  [919] = 919,
  [920] = 895,
  [921] = 894,
  [922] = 894,
  [923] = 894,
  [924] = 899,
  [925] = 925,
  [926] = 926,
  [927] = 927,
  [928] = 895,
  [929] = 929,
  [930] = 930,
  [931] = 899,
  [932] = 895,
  [933] = 933,
  [934] = 899,
  [935] = 894,
  [936] = 929,
  [937] = 937,
  [938] = 938,
  [939] = 899,
  [940] = 940,
  [941] = 941,
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
          lookahead == ' ') SKIP(500)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
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
          lookahead == ' ') SKIP(505)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
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
      if (lookahead == '/') ADVANCE(29);
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
  [3] = {.lex_state = 510},
  [4] = {.lex_state = 505},
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
  [22] = {.lex_state = 509},
  [23] = {.lex_state = 510},
  [24] = {.lex_state = 509},
  [25] = {.lex_state = 509},
  [26] = {.lex_state = 509},
  [27] = {.lex_state = 500},
  [28] = {.lex_state = 500},
  [29] = {.lex_state = 509},
  [30] = {.lex_state = 500},
  [31] = {.lex_state = 501},
  [32] = {.lex_state = 501},
  [33] = {.lex_state = 501},
  [34] = {.lex_state = 502},
  [35] = {.lex_state = 502},
  [36] = {.lex_state = 502},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 499},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 513},
  [43] = {.lex_state = 503},
  [44] = {.lex_state = 503},
  [45] = {.lex_state = 513},
  [46] = {.lex_state = 503},
  [47] = {.lex_state = 505},
  [48] = {.lex_state = 510},
  [49] = {.lex_state = 510},
  [50] = {.lex_state = 512},
  [51] = {.lex_state = 510},
  [52] = {.lex_state = 510},
  [53] = {.lex_state = 510},
  [54] = {.lex_state = 510},
  [55] = {.lex_state = 506},
  [56] = {.lex_state = 510},
  [57] = {.lex_state = 510},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 510},
  [60] = {.lex_state = 510},
  [61] = {.lex_state = 510},
  [62] = {.lex_state = 510},
  [63] = {.lex_state = 510},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 510},
  [66] = {.lex_state = 512},
  [67] = {.lex_state = 512},
  [68] = {.lex_state = 510},
  [69] = {.lex_state = 507},
  [70] = {.lex_state = 504},
  [71] = {.lex_state = 504},
  [72] = {.lex_state = 511},
  [73] = {.lex_state = 511},
  [74] = {.lex_state = 504},
  [75] = {.lex_state = 511},
  [76] = {.lex_state = 511},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 511},
  [79] = {.lex_state = 0},
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
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 510},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 510},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 510},
  [107] = {.lex_state = 510},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 510},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 510},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 510},
  [118] = {.lex_state = 510},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 510},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 510},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 510},
  [135] = {.lex_state = 510},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 510},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 510},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 510},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 510},
  [148] = {.lex_state = 510},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 510},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 512},
  [156] = {.lex_state = 510},
  [157] = {.lex_state = 510},
  [158] = {.lex_state = 510},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 510},
  [161] = {.lex_state = 510},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 510},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 510},
  [167] = {.lex_state = 510},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 510},
  [176] = {.lex_state = 510},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 512},
  [187] = {.lex_state = 510},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 510},
  [190] = {.lex_state = 510},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 512},
  [195] = {.lex_state = 512},
  [196] = {.lex_state = 510},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 510},
  [200] = {.lex_state = 510},
  [201] = {.lex_state = 510},
  [202] = {.lex_state = 512},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 510},
  [206] = {.lex_state = 512},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 510},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 510},
  [211] = {.lex_state = 510},
  [212] = {.lex_state = 510},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 510},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 510},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 510},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 510},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 510},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 510},
  [242] = {.lex_state = 510},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 510},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 510},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 510},
  [258] = {.lex_state = 510},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 510},
  [262] = {.lex_state = 510},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 510},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 513},
  [278] = {.lex_state = 510},
  [279] = {.lex_state = 513},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 513},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 10},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 510},
  [294] = {.lex_state = 10},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 10},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 7},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 3},
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
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 7},
  [361] = {.lex_state = 3},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 11},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 513},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 17},
  [379] = {.lex_state = 11},
  [380] = {.lex_state = 11},
  [381] = {.lex_state = 17},
  [382] = {.lex_state = 11},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 8},
  [385] = {.lex_state = 17},
  [386] = {.lex_state = 510},
  [387] = {.lex_state = 63},
  [388] = {.lex_state = 510},
  [389] = {.lex_state = 16},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 510},
  [394] = {.lex_state = 6},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 17},
  [397] = {.lex_state = 510},
  [398] = {.lex_state = 510},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 510},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 510},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 510},
  [405] = {.lex_state = 17},
  [406] = {.lex_state = 510},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 510},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 510},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 64},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 63},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 510},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 10},
  [423] = {.lex_state = 18},
  [424] = {.lex_state = 10},
  [425] = {.lex_state = 10},
  [426] = {.lex_state = 11},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 18},
  [433] = {.lex_state = 19},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 20},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 10},
  [442] = {.lex_state = 19},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 10},
  [446] = {.lex_state = 10},
  [447] = {.lex_state = 4},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 10},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 64},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 19},
  [458] = {.lex_state = 11},
  [459] = {.lex_state = 24},
  [460] = {.lex_state = 11},
  [461] = {.lex_state = 18},
  [462] = {.lex_state = 11},
  [463] = {.lex_state = 11},
  [464] = {.lex_state = 11},
  [465] = {.lex_state = 62},
  [466] = {.lex_state = 22},
  [467] = {.lex_state = 23},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 11},
  [470] = {.lex_state = 63},
  [471] = {.lex_state = 11},
  [472] = {.lex_state = 11},
  [473] = {.lex_state = 11},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 21},
  [477] = {.lex_state = 23},
  [478] = {.lex_state = 22},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 24},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 62},
  [487] = {.lex_state = 11},
  [488] = {.lex_state = 16},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 25},
  [492] = {.lex_state = 16},
  [493] = {.lex_state = 24},
  [494] = {.lex_state = 9},
  [495] = {.lex_state = 16},
  [496] = {.lex_state = 25},
  [497] = {.lex_state = 16},
  [498] = {.lex_state = 16},
  [499] = {.lex_state = 62},
  [500] = {.lex_state = 63},
  [501] = {.lex_state = 63},
  [502] = {.lex_state = 16},
  [503] = {.lex_state = 27},
  [504] = {.lex_state = 27},
  [505] = {.lex_state = 16},
  [506] = {.lex_state = 16},
  [507] = {.lex_state = 21},
  [508] = {.lex_state = 16},
  [509] = {.lex_state = 23},
  [510] = {.lex_state = 22},
  [511] = {.lex_state = 9},
  [512] = {.lex_state = 26},
  [513] = {.lex_state = 65},
  [514] = {.lex_state = 65},
  [515] = {.lex_state = 9},
  [516] = {.lex_state = 65},
  [517] = {.lex_state = 65},
  [518] = {.lex_state = 9},
  [519] = {.lex_state = 65},
  [520] = {.lex_state = 25},
  [521] = {.lex_state = 9},
  [522] = {.lex_state = 65},
  [523] = {.lex_state = 65},
  [524] = {.lex_state = 9},
  [525] = {.lex_state = 65},
  [526] = {.lex_state = 65},
  [527] = {.lex_state = 65},
  [528] = {.lex_state = 26},
  [529] = {.lex_state = 26},
  [530] = {.lex_state = 65},
  [531] = {.lex_state = 9},
  [532] = {.lex_state = 9},
  [533] = {.lex_state = 9},
  [534] = {.lex_state = 26},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 26},
  [537] = {.lex_state = 11},
  [538] = {.lex_state = 9},
  [539] = {.lex_state = 9},
  [540] = {.lex_state = 26},
  [541] = {.lex_state = 65},
  [542] = {.lex_state = 11},
  [543] = {.lex_state = 9},
  [544] = {.lex_state = 65},
  [545] = {.lex_state = 11},
  [546] = {.lex_state = 65},
  [547] = {.lex_state = 26},
  [548] = {.lex_state = 9},
  [549] = {.lex_state = 65},
  [550] = {.lex_state = 9},
  [551] = {.lex_state = 65},
  [552] = {.lex_state = 26},
  [553] = {.lex_state = 65},
  [554] = {.lex_state = 65},
  [555] = {.lex_state = 11},
  [556] = {.lex_state = 9},
  [557] = {.lex_state = 65},
  [558] = {.lex_state = 9},
  [559] = {.lex_state = 9},
  [560] = {.lex_state = 65},
  [561] = {.lex_state = 65},
  [562] = {.lex_state = 9},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 9},
  [565] = {.lex_state = 28},
  [566] = {.lex_state = 26},
  [567] = {.lex_state = 9},
  [568] = {.lex_state = 11},
  [569] = {.lex_state = 9},
  [570] = {.lex_state = 9},
  [571] = {.lex_state = 26},
  [572] = {.lex_state = 65},
  [573] = {.lex_state = 1},
  [574] = {.lex_state = 65},
  [575] = {.lex_state = 9},
  [576] = {.lex_state = 509},
  [577] = {.lex_state = 1},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 1},
  [582] = {.lex_state = 1},
  [583] = {.lex_state = 509},
  [584] = {.lex_state = 509},
  [585] = {.lex_state = 28},
  [586] = {.lex_state = 509},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 28},
  [589] = {.lex_state = 28},
  [590] = {.lex_state = 509},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 28},
  [593] = {.lex_state = 509},
  [594] = {.lex_state = 28},
  [595] = {.lex_state = 10},
  [596] = {.lex_state = 28},
  [597] = {.lex_state = 28},
  [598] = {.lex_state = 509},
  [599] = {.lex_state = 28},
  [600] = {.lex_state = 28},
  [601] = {.lex_state = 509},
  [602] = {.lex_state = 65},
  [603] = {.lex_state = 509},
  [604] = {.lex_state = 28},
  [605] = {.lex_state = 28},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 28},
  [609] = {.lex_state = 28},
  [610] = {.lex_state = 509},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 28},
  [613] = {.lex_state = 28},
  [614] = {.lex_state = 509},
  [615] = {.lex_state = 28},
  [616] = {.lex_state = 28},
  [617] = {.lex_state = 10},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 509},
  [620] = {.lex_state = 28},
  [621] = {.lex_state = 509},
  [622] = {.lex_state = 509},
  [623] = {.lex_state = 28},
  [624] = {.lex_state = 28},
  [625] = {.lex_state = 28},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 509},
  [628] = {.lex_state = 28},
  [629] = {.lex_state = 509},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 28},
  [632] = {.lex_state = 28},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 28},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 28},
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 10},
  [644] = {.lex_state = 10},
  [645] = {.lex_state = 28},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 28},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 10},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 28},
  [653] = {.lex_state = 28},
  [654] = {.lex_state = 10},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 10},
  [657] = {.lex_state = 28},
  [658] = {.lex_state = 28},
  [659] = {.lex_state = 510},
  [660] = {.lex_state = 28},
  [661] = {.lex_state = 510},
  [662] = {.lex_state = 27},
  [663] = {.lex_state = 510},
  [664] = {.lex_state = 510},
  [665] = {.lex_state = 510},
  [666] = {.lex_state = 11},
  [667] = {.lex_state = 26},
  [668] = {.lex_state = 28},
  [669] = {.lex_state = 510},
  [670] = {.lex_state = 28},
  [671] = {.lex_state = 510},
  [672] = {.lex_state = 10},
  [673] = {.lex_state = 27},
  [674] = {.lex_state = 27},
  [675] = {.lex_state = 27},
  [676] = {.lex_state = 27},
  [677] = {.lex_state = 28},
  [678] = {.lex_state = 509},
  [679] = {.lex_state = 11},
  [680] = {.lex_state = 11},
  [681] = {.lex_state = 26},
  [682] = {.lex_state = 11},
  [683] = {.lex_state = 509},
  [684] = {.lex_state = 11},
  [685] = {.lex_state = 26},
  [686] = {.lex_state = 26},
  [687] = {.lex_state = 27},
  [688] = {.lex_state = 11},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 26},
  [691] = {.lex_state = 26},
  [692] = {.lex_state = 27},
  [693] = {.lex_state = 11},
  [694] = {.lex_state = 26},
  [695] = {.lex_state = 510},
  [696] = {.lex_state = 26},
  [697] = {.lex_state = 26},
  [698] = {.lex_state = 26},
  [699] = {.lex_state = 26},
  [700] = {.lex_state = 26},
  [701] = {.lex_state = 26},
  [702] = {.lex_state = 510},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 26},
  [705] = {.lex_state = 26},
  [706] = {.lex_state = 26},
  [707] = {.lex_state = 26},
  [708] = {.lex_state = 28},
  [709] = {.lex_state = 26},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 11},
  [712] = {.lex_state = 28},
  [713] = {.lex_state = 11},
  [714] = {.lex_state = 11},
  [715] = {.lex_state = 11},
  [716] = {.lex_state = 11},
  [717] = {.lex_state = 11},
  [718] = {.lex_state = 26},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 11},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 11},
  [723] = {.lex_state = 499},
  [724] = {.lex_state = 11},
  [725] = {.lex_state = 11},
  [726] = {.lex_state = 11},
  [727] = {.lex_state = 510},
  [728] = {.lex_state = 11},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 11},
  [732] = {.lex_state = 11},
  [733] = {.lex_state = 510},
  [734] = {.lex_state = 27},
  [735] = {.lex_state = 26},
  [736] = {.lex_state = 11},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 27},
  [739] = {.lex_state = 510},
  [740] = {.lex_state = 27},
  [741] = {.lex_state = 27},
  [742] = {.lex_state = 27},
  [743] = {.lex_state = 27},
  [744] = {.lex_state = 27},
  [745] = {.lex_state = 27},
  [746] = {.lex_state = 510},
  [747] = {.lex_state = 27},
  [748] = {.lex_state = 27},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 27},
  [751] = {.lex_state = 27},
  [752] = {.lex_state = 26},
  [753] = {.lex_state = 510},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 26},
  [757] = {.lex_state = 27},
  [758] = {.lex_state = 27},
  [759] = {.lex_state = 510},
  [760] = {.lex_state = 27},
  [761] = {.lex_state = 499},
  [762] = {.lex_state = 28},
  [763] = {.lex_state = 28},
  [764] = {.lex_state = 510},
  [765] = {.lex_state = 28},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 28},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 510},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 28},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 662},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 27},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 26},
  [783] = {.lex_state = 510},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 28},
  [790] = {.lex_state = 510},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 28},
  [798] = {.lex_state = 499},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 28},
  [804] = {.lex_state = 28},
  [805] = {.lex_state = 28},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 28},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 28},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 28},
  [815] = {.lex_state = 28},
  [816] = {.lex_state = 28},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 28},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 28},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 11},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 28},
  [827] = {.lex_state = 28},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 28},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 509},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 509},
  [844] = {.lex_state = 509},
  [845] = {.lex_state = 509},
  [846] = {.lex_state = 509},
  [847] = {.lex_state = 509},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 495},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 495},
  [852] = {.lex_state = 509},
  [853] = {.lex_state = 510},
  [854] = {.lex_state = 495},
  [855] = {.lex_state = 509},
  [856] = {.lex_state = 509},
  [857] = {.lex_state = 509},
  [858] = {.lex_state = 509},
  [859] = {.lex_state = 509},
  [860] = {.lex_state = 509},
  [861] = {.lex_state = 509},
  [862] = {.lex_state = 509},
  [863] = {.lex_state = 509},
  [864] = {.lex_state = 509},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 509},
  [867] = {.lex_state = 495},
  [868] = {.lex_state = 495},
  [869] = {.lex_state = 509},
  [870] = {.lex_state = 509},
  [871] = {.lex_state = 509},
  [872] = {.lex_state = 509},
  [873] = {.lex_state = 499},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 509},
  [876] = {.lex_state = 509},
  [877] = {.lex_state = 509},
  [878] = {.lex_state = 509},
  [879] = {.lex_state = 509},
  [880] = {.lex_state = 509},
  [881] = {.lex_state = 509},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 509},
  [884] = {.lex_state = 662},
  [885] = {.lex_state = 662},
  [886] = {.lex_state = 495},
  [887] = {.lex_state = 509},
  [888] = {.lex_state = 495},
  [889] = {.lex_state = 495},
  [890] = {.lex_state = 495},
  [891] = {.lex_state = 495},
  [892] = {.lex_state = 495},
  [893] = {.lex_state = 499},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 496},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 663},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 499},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 496},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 66},
  [917] = {.lex_state = 496},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 496},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 496},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 496},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 663},
  [939] = {.lex_state = 496},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
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
    [sym_source_file] = STATE(941),
    [sym__ontology_document] = STATE(940),
    [sym_prefix_declaration] = STATE(755),
    [sym_ontology] = STATE(940),
    [aux_sym__ontology_document_repeat1] = STATE(755),
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
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
  [87] = 1,
    ACTIONS(27), 52,
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
  [142] = 16,
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
    ACTIONS(29), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
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
  [721] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_that,
    ACTIONS(58), 1,
      anon_sym_value,
    ACTIONS(56), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(51), 33,
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
  [774] = 1,
    ACTIONS(61), 42,
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
  [819] = 1,
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
  [864] = 1,
    ACTIONS(65), 42,
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
  [909] = 1,
    ACTIONS(67), 42,
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
  [1133] = 8,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
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
  [1191] = 3,
    ACTIONS(58), 1,
      anon_sym_value,
    ACTIONS(56), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(54), 34,
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
  [1239] = 8,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(883), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(93), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
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
  [1297] = 7,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
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
  [1352] = 7,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(101), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
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
  [1407] = 4,
    ACTIONS(107), 2,
      sym__non_zero,
      sym__zero,
    STATE(28), 2,
      sym__digit,
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
  [1456] = 4,
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
  [1505] = 4,
    ACTIONS(121), 1,
      anon_sym_E,
    ACTIONS(118), 2,
      sym__non_zero,
      sym__zero,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 35,
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
  [1554] = 4,
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
  [1603] = 4,
    ACTIONS(129), 2,
      sym__non_zero,
      sym__zero,
    STATE(31), 2,
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
    ACTIONS(132), 2,
      sym__non_zero,
      sym__zero,
    STATE(33), 2,
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
    ACTIONS(134), 2,
      sym__non_zero,
      sym__zero,
    STATE(31), 2,
      sym__digit,
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
  [1744] = 4,
    ACTIONS(136), 2,
      sym__non_zero,
      sym__zero,
    STATE(35), 2,
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
    ACTIONS(138), 2,
      sym__non_zero,
      sym__zero,
    STATE(36), 2,
      sym__digit,
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
  [1836] = 4,
    ACTIONS(140), 2,
      sym__non_zero,
      sym__zero,
    STATE(36), 2,
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
  [1882] = 1,
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
  [1922] = 1,
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
  [1962] = 1,
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
  [2002] = 2,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(151), 30,
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
  [2043] = 1,
    ACTIONS(153), 36,
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
  [2082] = 20,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_Import_COLON,
    ACTIONS(161), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(163), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(165), 1,
      anon_sym_Class_COLON,
    ACTIONS(167), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(169), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(171), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(173), 1,
      anon_sym_Individual_COLON,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    STATE(45), 1,
      sym_ontology_iri,
    ACTIONS(175), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(177), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(179), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(90), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(137), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(368), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
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
  [2159] = 4,
    ACTIONS(185), 2,
      sym__non_zero,
      sym__zero,
    STATE(46), 2,
      sym__digit,
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
  [2204] = 4,
    ACTIONS(187), 2,
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
  [2249] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(159), 1,
      anon_sym_Import_COLON,
    ACTIONS(161), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(163), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(165), 1,
      anon_sym_Class_COLON,
    ACTIONS(167), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(169), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(171), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(173), 1,
      anon_sym_Individual_COLON,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_version_iri,
    ACTIONS(175), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(177), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(179), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(88), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(140), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(428), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
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
  [2326] = 4,
    ACTIONS(191), 2,
      sym__non_zero,
      sym__zero,
    STATE(46), 2,
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
  [2371] = 2,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(151), 28,
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
  [2410] = 2,
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
  [2449] = 1,
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
  [2486] = 8,
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
    STATE(155), 4,
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
  [2536] = 1,
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
  [2572] = 1,
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
  [2608] = 1,
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
  [2644] = 1,
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
  [2680] = 2,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(151), 27,
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
  [2718] = 1,
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
  [2754] = 1,
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
  [2790] = 16,
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
    ACTIONS(224), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    ACTIONS(7), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
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
  [2856] = 1,
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
  [2892] = 1,
    ACTIONS(228), 33,
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
  [2928] = 1,
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
  [2964] = 1,
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
  [3000] = 1,
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
  [3036] = 20,
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
    ACTIONS(224), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(161), 1,
      sym__data_conjunction,
    STATE(695), 1,
      sym_class_iri,
    STATE(769), 1,
      sym__conjunction,
    STATE(897), 1,
      sym_data_range,
    STATE(918), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(702), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3110] = 1,
    ACTIONS(234), 33,
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
  [3146] = 8,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      anon_sym_inverse,
    ACTIONS(246), 1,
      sym__pn_local,
    ACTIONS(249), 1,
      sym__pname_ln,
    STATE(155), 4,
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
    ACTIONS(241), 18,
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
  [3196] = 8,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_inverse,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(155), 4,
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
  [3246] = 1,
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
  [3281] = 2,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(151), 26,
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
  [3318] = 4,
    ACTIONS(258), 2,
      sym__non_zero,
      sym__zero,
    STATE(71), 2,
      sym__digit,
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
  [3358] = 4,
    ACTIONS(260), 2,
      sym__non_zero,
      sym__zero,
    STATE(71), 2,
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
  [3398] = 9,
    ACTIONS(83), 1,
      anon_sym_f,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(265), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_F,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(78), 2,
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
  [3448] = 9,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(93), 1,
      anon_sym_f,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(271), 1,
      anon_sym_F,
    STATE(883), 1,
      sym__exponent,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(78), 2,
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
  [3498] = 4,
    ACTIONS(273), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
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
  [3538] = 8,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(97), 1,
      anon_sym_f,
    ACTIONS(275), 1,
      anon_sym_F,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(78), 2,
      aux_sym__digits,
      sym__digit,
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
  [3585] = 8,
    ACTIONS(85), 1,
      anon_sym_e,
    ACTIONS(87), 1,
      anon_sym_E,
    ACTIONS(101), 1,
      anon_sym_f,
    ACTIONS(277), 1,
      anon_sym_F,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(78), 2,
      aux_sym__digits,
      sym__digit,
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
  [3632] = 1,
    ACTIONS(279), 30,
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
  [3665] = 4,
    ACTIONS(121), 2,
      anon_sym_F,
      anon_sym_E,
    ACTIONS(281), 2,
      sym__non_zero,
      sym__zero,
    STATE(78), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 24,
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
  [3704] = 1,
    ACTIONS(284), 30,
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
  [3737] = 14,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(63), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3795] = 16,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
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
    STATE(898), 1,
      sym__literal_list,
    STATE(900), 1,
      sym__lexial_value,
    STATE(919), 1,
      sym__individual_list,
    ACTIONS(288), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(841), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(837), 7,
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
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(224), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(63), 7,
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
    ACTIONS(31), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(63), 7,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(63), 7,
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
    ACTIONS(29), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(63), 7,
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
    ACTIONS(37), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(63), 7,
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
    STATE(127), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(401), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(235), 9,
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
    STATE(401), 2,
      sym_import,
      aux_sym_ontology_repeat1,
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
  [4265] = 15,
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
    STATE(87), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(133), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [4324] = 15,
    ACTIONS(189), 1,
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
    STATE(401), 2,
      sym_import,
      aux_sym_ontology_repeat1,
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
  [4383] = 3,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 25,
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
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 25,
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
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(328), 25,
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
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 25,
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
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(151), 21,
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
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(91), 1,
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
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(337), 1,
      anon_sym__COLON,
    ACTIONS(341), 1,
      anon_sym_PLUS,
    ACTIONS(343), 1,
      anon_sym_DASH,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      sym__quoted_string,
    ACTIONS(349), 1,
      sym__pn_local,
    ACTIONS(351), 1,
      sym__pname_ln,
    STATE(894), 1,
      sym__lexial_value,
    ACTIONS(339), 2,
      sym__non_zero,
      sym__zero,
    STATE(476), 2,
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
  [4636] = 12,
    ACTIONS(353), 1,
      anon_sym_LT,
    ACTIONS(355), 1,
      anon_sym__COLON,
    ACTIONS(359), 1,
      anon_sym_PLUS,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      sym__quoted_string,
    ACTIONS(367), 1,
      sym__pn_local,
    ACTIONS(369), 1,
      sym__pname_ln,
    STATE(907), 1,
      sym__lexial_value,
    ACTIONS(357), 2,
      sym__non_zero,
      sym__zero,
    STATE(423), 2,
      aux_sym__digits,
      sym__digit,
    STATE(701), 13,
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
  [4687] = 3,
    ACTIONS(373), 1,
      anon_sym_and,
    STATE(121), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 24,
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
  [4720] = 12,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(377), 1,
      anon_sym__COLON,
    ACTIONS(381), 1,
      anon_sym_PLUS,
    ACTIONS(383), 1,
      anon_sym_DASH,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(387), 1,
      sym__quoted_string,
    ACTIONS(389), 1,
      sym__pn_local,
    ACTIONS(391), 1,
      sym__pname_ln,
    STATE(923), 1,
      sym__lexial_value,
    ACTIONS(379), 2,
      sym__non_zero,
      sym__zero,
    STATE(442), 2,
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
  [4771] = 12,
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
    STATE(922), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(39), 13,
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
  [4822] = 14,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(53), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4877] = 3,
    ACTIONS(393), 1,
      anon_sym_and,
    STATE(103), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(230), 24,
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
  [4910] = 14,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(53), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4965] = 14,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(53), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5020] = 3,
    ACTIONS(373), 1,
      anon_sym_and,
    STATE(113), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 24,
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
  [5053] = 3,
    ACTIONS(373), 1,
      anon_sym_and,
    STATE(106), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(396), 24,
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
  [5086] = 12,
    ACTIONS(398), 1,
      anon_sym_LT,
    ACTIONS(400), 1,
      anon_sym__COLON,
    ACTIONS(404), 1,
      anon_sym_PLUS,
    ACTIONS(406), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      sym__quoted_string,
    ACTIONS(412), 1,
      sym__pn_local,
    ACTIONS(414), 1,
      sym__pname_ln,
    STATE(921), 1,
      sym__lexial_value,
    ACTIONS(402), 2,
      sym__non_zero,
      sym__zero,
    STATE(369), 2,
      aux_sym__digits,
      sym__digit,
    STATE(640), 13,
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
  [5137] = 3,
    ACTIONS(418), 1,
      anon_sym_and,
    STATE(103), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(416), 24,
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
  [5170] = 8,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(422), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(424), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(426), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(428), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(430), 1,
      anon_sym_HasKey_COLON,
    STATE(112), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(420), 13,
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
  [5213] = 8,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(422), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(424), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(426), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(428), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(430), 1,
      anon_sym_HasKey_COLON,
    STATE(110), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(432), 13,
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
  [5256] = 8,
    ACTIONS(436), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(439), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(442), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(445), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(448), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(451), 1,
      anon_sym_HasKey_COLON,
    STATE(112), 7,
      sym__annotations,
      sym_sub_class_of,
      sym_equivalent_to,
      sym_disjoint_with,
      sym_disjoint_union_of,
      sym_has_key,
      aux_sym_class_frame_repeat1,
    ACTIONS(434), 13,
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
  [5299] = 3,
    ACTIONS(454), 1,
      anon_sym_and,
    STATE(113), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(234), 24,
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
  [5332] = 14,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(53), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5387] = 12,
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
    ACTIONS(459), 1,
      anon_sym_PLUS,
    ACTIONS(461), 1,
      anon_sym_DASH,
    STATE(922), 1,
      sym__lexial_value,
    ACTIONS(457), 2,
      sym__non_zero,
      sym__zero,
    STATE(72), 2,
      aux_sym__digits,
      sym__digit,
    STATE(39), 13,
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
  [5438] = 12,
    ACTIONS(463), 1,
      anon_sym_LT,
    ACTIONS(465), 1,
      anon_sym__COLON,
    ACTIONS(469), 1,
      anon_sym_PLUS,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      sym__quoted_string,
    ACTIONS(477), 1,
      sym__pn_local,
    ACTIONS(479), 1,
      sym__pname_ln,
    STATE(913), 1,
      sym__lexial_value,
    ACTIONS(467), 2,
      sym__non_zero,
      sym__zero,
    STATE(453), 2,
      aux_sym__digits,
      sym__digit,
    STATE(738), 13,
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
  [5489] = 3,
    ACTIONS(418), 1,
      anon_sym_and,
    STATE(109), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(481), 24,
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
  [5522] = 2,
    ACTIONS(485), 1,
      anon_sym_that,
    ACTIONS(483), 25,
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
  [5553] = 14,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(53), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5608] = 12,
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
    ACTIONS(489), 1,
      anon_sym_PLUS,
    ACTIONS(491), 1,
      anon_sym_DASH,
    STATE(922), 1,
      sym__lexial_value,
    ACTIONS(487), 2,
      sym__non_zero,
      sym__zero,
    STATE(381), 2,
      aux_sym__digits,
      sym__digit,
    STATE(39), 13,
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
  [5659] = 3,
    ACTIONS(373), 1,
      anon_sym_and,
    STATE(113), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(493), 24,
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
  [5692] = 12,
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
    STATE(935), 1,
      sym__lexial_value,
    ACTIONS(499), 2,
      sym__non_zero,
      sym__zero,
    STATE(292), 2,
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
  [5743] = 14,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(53), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(13), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5798] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_class_iri,
    STATE(224), 1,
      sym__annotations,
    STATE(247), 1,
      sym__conjunction,
    STATE(295), 1,
      sym_description,
    STATE(346), 1,
      sym__description_annotated_list,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5858] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(220), 1,
      sym_class_iri,
    STATE(245), 1,
      sym__annotations,
    STATE(273), 1,
      sym__conjunction,
    STATE(299), 1,
      sym_description,
    STATE(372), 1,
      sym__description_annotated_list,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(222), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5918] = 3,
    ACTIONS(525), 1,
      anon_sym_or,
    STATE(143), 1,
      aux_sym_description_repeat1,
    ACTIONS(523), 23,
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
  [5950] = 13,
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
    ACTIONS(527), 1,
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
    STATE(391), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(232), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6002] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_not,
    STATE(152), 1,
      sym_class_iri,
    STATE(205), 1,
      sym__conjunction,
    STATE(218), 1,
      sym_description,
    STATE(226), 1,
      sym__annotations,
    STATE(304), 1,
      sym__description_annotated_list,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(157), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6062] = 1,
    ACTIONS(531), 25,
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
  [6090] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(192), 1,
      sym__annotations,
    STATE(340), 1,
      sym__description_2list,
    STATE(695), 1,
      sym_class_iri,
    STATE(769), 1,
      sym__conjunction,
    STATE(936), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(702), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6150] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_class_iri,
    STATE(224), 1,
      sym__annotations,
    STATE(247), 1,
      sym__conjunction,
    STATE(295), 1,
      sym_description,
    STATE(343), 1,
      sym__description_annotated_list,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6210] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(118), 1,
      sym_class_iri,
    STATE(134), 1,
      sym__conjunction,
    STATE(179), 1,
      sym_description,
    STATE(238), 1,
      sym__description_annotated_list,
    STATE(239), 1,
      sym__annotations,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(117), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6270] = 13,
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
    STATE(391), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(235), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6322] = 3,
    ACTIONS(525), 1,
      anon_sym_or,
    STATE(126), 1,
      aux_sym_description_repeat1,
    ACTIONS(537), 23,
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
  [6354] = 3,
    ACTIONS(541), 1,
      anon_sym_and,
    STATE(135), 1,
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
  [6386] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(204), 1,
      sym__annotations,
    STATE(489), 1,
      sym__description_2list,
    STATE(695), 1,
      sym_class_iri,
    STATE(769), 1,
      sym__conjunction,
    STATE(929), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(702), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6446] = 13,
    ACTIONS(189), 1,
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
    STATE(391), 2,
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
  [6498] = 1,
    ACTIONS(544), 25,
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
  [6526] = 3,
    ACTIONS(548), 1,
      anon_sym_and,
    STATE(141), 1,
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
  [6558] = 13,
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
    STATE(391), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [6610] = 3,
    ACTIONS(548), 1,
      anon_sym_and,
    STATE(135), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(550), 23,
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
  [6642] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_class_iri,
    STATE(224), 1,
      sym__annotations,
    STATE(247), 1,
      sym__conjunction,
    STATE(295), 1,
      sym_description,
    STATE(344), 1,
      sym__description_annotated_list,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6702] = 3,
    ACTIONS(552), 1,
      anon_sym_or,
    STATE(143), 1,
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
  [6734] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(165), 1,
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
  [6765] = 3,
    ACTIONS(561), 1,
      anon_sym_o,
    STATE(172), 1,
      aux_sym_object_property_frame_repeat1,
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
  [6796] = 3,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(563), 22,
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
  [6827] = 3,
    ACTIONS(567), 1,
      anon_sym_and,
    STATE(156), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(416), 22,
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
  [6858] = 3,
    ACTIONS(571), 1,
      anon_sym_or,
    STATE(175), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(569), 22,
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
  [6889] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_description,
    STATE(210), 1,
      sym_class_iri,
    STATE(221), 1,
      sym__annotations,
    STATE(247), 1,
      sym__conjunction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6946] = 3,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(279), 22,
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
  [6977] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(220), 1,
      sym_class_iri,
    STATE(265), 1,
      sym__annotations,
    STATE(273), 1,
      sym__conjunction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(222), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7034] = 2,
    ACTIONS(576), 1,
      anon_sym_that,
    ACTIONS(483), 23,
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
  [7063] = 3,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(578), 22,
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
  [7094] = 3,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(578), 22,
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
  [7125] = 2,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(582), 20,
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
  [7154] = 3,
    ACTIONS(585), 1,
      anon_sym_and,
    STATE(156), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(230), 22,
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
  [7185] = 3,
    ACTIONS(567), 1,
      anon_sym_and,
    STATE(147), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(481), 22,
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
  [7216] = 3,
    ACTIONS(588), 1,
      anon_sym_and,
    STATE(164), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(396), 22,
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
  [7247] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(170), 1,
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
  [7278] = 3,
    ACTIONS(588), 1,
      anon_sym_and,
    STATE(166), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 22,
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
  [7309] = 3,
    ACTIONS(571), 1,
      anon_sym_or,
    STATE(148), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(590), 22,
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
  [7340] = 16,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(161), 1,
      sym__data_conjunction,
    STATE(248), 1,
      sym_data_range,
    STATE(289), 1,
      sym__annotations,
    STATE(304), 1,
      sym__data_range_annotated_list,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7397] = 3,
    ACTIONS(561), 1,
      anon_sym_o,
    STATE(171), 1,
      aux_sym_object_property_frame_repeat1,
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
  [7428] = 3,
    ACTIONS(588), 1,
      anon_sym_and,
    STATE(167), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 22,
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
  [7459] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(600), 22,
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
  [7490] = 3,
    ACTIONS(588), 1,
      anon_sym_and,
    STATE(167), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(493), 22,
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
  [7521] = 3,
    ACTIONS(602), 1,
      anon_sym_and,
    STATE(167), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(234), 22,
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
  [7552] = 7,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(611), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(613), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(609), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(169), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(607), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(605), 13,
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
  [7591] = 7,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(611), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(613), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(609), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(183), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(607), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(615), 13,
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
  [7630] = 3,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(617), 22,
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
  [7661] = 3,
    ACTIONS(561), 1,
      anon_sym_o,
    STATE(172), 1,
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
  [7692] = 3,
    ACTIONS(626), 1,
      anon_sym_o,
    STATE(172), 1,
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
  [7723] = 3,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [7754] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(118), 1,
      sym_class_iri,
    STATE(134), 1,
      sym__conjunction,
    STATE(252), 1,
      sym__annotations,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(117), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7811] = 3,
    ACTIONS(633), 1,
      anon_sym_or,
    STATE(175), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(631), 22,
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
  [7842] = 1,
    ACTIONS(539), 24,
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
  [7869] = 3,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(636), 22,
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
  [7900] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(513), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(152), 1,
      sym_class_iri,
    STATE(205), 1,
      sym__conjunction,
    STATE(249), 1,
      sym__annotations,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(157), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7957] = 3,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(638), 22,
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
  [7988] = 3,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(640), 22,
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
  [8019] = 3,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [8050] = 3,
    ACTIONS(561), 1,
      anon_sym_o,
    STATE(145), 1,
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
  [8081] = 7,
    ACTIONS(646), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(655), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(658), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(652), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(183), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(649), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(644), 13,
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
  [8120] = 3,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [8151] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(661), 22,
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
  [8182] = 2,
    ACTIONS(531), 3,
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
  [8210] = 3,
    ACTIONS(668), 1,
      anon_sym_or,
    STATE(187), 1,
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
  [8240] = 1,
    ACTIONS(661), 23,
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
  [8266] = 1,
    ACTIONS(631), 23,
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
  [8292] = 3,
    ACTIONS(671), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(416), 21,
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
  [8322] = 1,
    ACTIONS(624), 23,
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
  [8348] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(337), 1,
      sym__description_2list,
    STATE(695), 1,
      sym_class_iri,
    STATE(769), 1,
      sym__conjunction,
    STATE(936), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(702), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8402] = 1,
    ACTIONS(617), 23,
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
  [8428] = 2,
    ACTIONS(27), 3,
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
  [8456] = 2,
    ACTIONS(35), 3,
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
  [8484] = 3,
    ACTIONS(677), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(230), 21,
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
  [8514] = 1,
    ACTIONS(680), 23,
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
  [8540] = 1,
    ACTIONS(682), 23,
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
  [8566] = 3,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(201), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 21,
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
  [8596] = 3,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(201), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(493), 21,
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
  [8626] = 3,
    ACTIONS(686), 1,
      anon_sym_and,
    STATE(201), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(234), 21,
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
  [8656] = 2,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(689), 20,
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
  [8684] = 15,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(161), 1,
      sym__data_conjunction,
    STATE(287), 1,
      sym_data_range,
    STATE(288), 1,
      sym__annotations,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8738] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(490), 1,
      sym__description_2list,
    STATE(695), 1,
      sym_class_iri,
    STATE(769), 1,
      sym__conjunction,
    STATE(929), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(702), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8792] = 3,
    ACTIONS(691), 1,
      anon_sym_or,
    STATE(212), 1,
      aux_sym_description_repeat1,
    ACTIONS(537), 21,
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
  [8822] = 2,
    ACTIONS(544), 3,
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
  [8850] = 1,
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
  [8876] = 3,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(199), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(396), 21,
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
  [8906] = 1,
    ACTIONS(27), 23,
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
  [8932] = 2,
    ACTIONS(695), 1,
      anon_sym_that,
    ACTIONS(483), 22,
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
  [8960] = 3,
    ACTIONS(671), 1,
      anon_sym_and,
    STATE(190), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(481), 21,
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
  [8990] = 3,
    ACTIONS(691), 1,
      anon_sym_or,
    STATE(187), 1,
      aux_sym_description_repeat1,
    ACTIONS(523), 21,
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
  [9020] = 1,
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
  [9046] = 3,
    ACTIONS(684), 1,
      anon_sym_and,
    STATE(200), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 21,
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
  [9076] = 15,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(161), 1,
      sym__data_conjunction,
    STATE(270), 1,
      sym__annotations,
    STATE(479), 1,
      sym_data_range,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9130] = 3,
    ACTIONS(697), 1,
      anon_sym_or,
    STATE(216), 1,
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
  [9159] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
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
  [9188] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(638), 20,
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
  [9217] = 11,
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
    STATE(254), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9262] = 2,
    ACTIONS(706), 1,
      anon_sym_that,
    ACTIONS(483), 21,
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
  [9289] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_description,
    STATE(210), 1,
      sym_class_iri,
    STATE(247), 1,
      sym__conjunction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9340] = 3,
    ACTIONS(708), 1,
      anon_sym_and,
    STATE(241), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(481), 20,
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
  [9369] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(629), 20,
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
  [9398] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_class_iri,
    STATE(247), 1,
      sym__conjunction,
    STATE(280), 1,
      sym_description,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9449] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_not,
    STATE(402), 1,
      sym_class_iri,
    STATE(410), 1,
      sym__conjunction,
    STATE(421), 1,
      sym_description,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(404), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9500] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_not,
    STATE(152), 1,
      sym_class_iri,
    STATE(205), 1,
      sym__conjunction,
    STATE(223), 1,
      sym_description,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(157), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9551] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(629), 20,
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
  [9580] = 11,
    ACTIONS(189), 1,
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
    STATE(254), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9625] = 3,
    ACTIONS(712), 1,
      anon_sym_or,
    STATE(216), 1,
      aux_sym_description_repeat1,
    ACTIONS(523), 20,
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
  [9654] = 3,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__data_range_annotated_list_repeat1,
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
  [9683] = 3,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(719), 20,
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
  [9712] = 11,
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
    ACTIONS(723), 1,
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
    STATE(254), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9757] = 3,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(725), 20,
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
  [9786] = 7,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(734), 1,
      anon_sym_Domain_COLON,
    ACTIONS(736), 1,
      anon_sym_Range_COLON,
    ACTIONS(738), 1,
      anon_sym_Characteristics_COLON,
    STATE(255), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(732), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(730), 13,
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
  [9823] = 11,
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
    ACTIONS(527), 1,
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
    STATE(254), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9868] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_class_iri,
    STATE(247), 1,
      sym__conjunction,
    STATE(310), 1,
      sym_description,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9919] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(740), 20,
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
  [9948] = 1,
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
  [9973] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(118), 1,
      sym_class_iri,
    STATE(134), 1,
      sym__conjunction,
    STATE(184), 1,
      sym_description,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(117), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10024] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_not,
    STATE(310), 1,
      sym_description,
    STATE(402), 1,
      sym_class_iri,
    STATE(410), 1,
      sym__conjunction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(404), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10075] = 3,
    ACTIONS(708), 1,
      anon_sym_and,
    STATE(258), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(416), 20,
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
  [10104] = 3,
    ACTIONS(742), 1,
      anon_sym_and,
    STATE(261), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(396), 20,
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
  [10133] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_class_iri,
    STATE(247), 1,
      sym__conjunction,
    STATE(268), 1,
      sym_description,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10184] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
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
  [10213] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(220), 1,
      sym_class_iri,
    STATE(273), 1,
      sym__conjunction,
    STATE(305), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(222), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10264] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(563), 20,
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
  [10293] = 3,
    ACTIONS(712), 1,
      anon_sym_or,
    STATE(229), 1,
      aux_sym_description_repeat1,
    ACTIONS(537), 20,
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
  [10322] = 3,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(746), 20,
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
  [10351] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_not,
    STATE(79), 1,
      sym_description,
    STATE(152), 1,
      sym_class_iri,
    STATE(205), 1,
      sym__conjunction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(157), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10402] = 7,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(734), 1,
      anon_sym_Domain_COLON,
    ACTIONS(736), 1,
      anon_sym_Range_COLON,
    ACTIONS(738), 1,
      anon_sym_Characteristics_COLON,
    STATE(234), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(732), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(748), 13,
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
  [10439] = 3,
    ACTIONS(742), 1,
      anon_sym_and,
    STATE(257), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 20,
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
  [10468] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(79), 1,
      sym_description,
    STATE(118), 1,
      sym_class_iri,
    STATE(134), 1,
      sym__conjunction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(117), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10519] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(279), 20,
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
  [10548] = 11,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    ACTIONS(755), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(758), 1,
      anon_sym_Class_COLON,
    ACTIONS(761), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(764), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(767), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(770), 1,
      anon_sym_Individual_COLON,
    ACTIONS(773), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(776), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(779), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(254), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10593] = 7,
    ACTIONS(784), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(790), 1,
      anon_sym_Domain_COLON,
    ACTIONS(793), 1,
      anon_sym_Range_COLON,
    ACTIONS(796), 1,
      anon_sym_Characteristics_COLON,
    STATE(255), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(787), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
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
  [10630] = 3,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    STATE(230), 1,
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
  [10659] = 3,
    ACTIONS(742), 1,
      anon_sym_and,
    STATE(262), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(493), 20,
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
  [10688] = 3,
    ACTIONS(801), 1,
      anon_sym_and,
    STATE(258), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(230), 20,
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
  [10717] = 11,
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
    STATE(254), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10762] = 3,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    STATE(231), 1,
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
  [10791] = 3,
    ACTIONS(742), 1,
      anon_sym_and,
    STATE(262), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 20,
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
  [10820] = 3,
    ACTIONS(804), 1,
      anon_sym_and,
    STATE(262), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(234), 20,
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
  [10849] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
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
  [10878] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(695), 1,
      sym_class_iri,
    STATE(769), 1,
      sym__conjunction,
    STATE(918), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(702), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10929] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(79), 1,
      sym_description,
    STATE(220), 1,
      sym_class_iri,
    STATE(273), 1,
      sym__conjunction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(222), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10980] = 1,
    ACTIONS(725), 21,
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
  [11004] = 3,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(629), 19,
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
  [11032] = 3,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(809), 19,
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
  [11060] = 13,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(161), 1,
      sym__data_conjunction,
    STATE(897), 1,
      sym_data_range,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11108] = 13,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(161), 1,
      sym__data_conjunction,
    STATE(474), 1,
      sym_data_range,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11156] = 3,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(279), 19,
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
  [11184] = 3,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(563), 19,
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
  [11212] = 3,
    ACTIONS(816), 1,
      anon_sym_or,
    STATE(293), 1,
      aux_sym_description_repeat1,
    ACTIONS(537), 19,
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
  [11240] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(68), 1,
      sym__conjunction,
    STATE(695), 1,
      sym_class_iri,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(702), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11288] = 8,
    ACTIONS(822), 1,
      anon_sym_DOT,
    STATE(871), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(820), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(824), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(325), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(818), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11326] = 3,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(826), 19,
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
  [11354] = 2,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(689), 15,
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
  [11380] = 3,
    ACTIONS(828), 1,
      anon_sym_or,
    STATE(278), 1,
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
  [11408] = 2,
    ACTIONS(35), 6,
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
  [11434] = 3,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(629), 19,
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
  [11462] = 2,
    ACTIONS(27), 6,
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
  [11488] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym__conjunction,
    STATE(210), 1,
      sym_class_iri,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(211), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11536] = 1,
    ACTIONS(56), 21,
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
  [11560] = 1,
    ACTIONS(831), 21,
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
  [11584] = 1,
    ACTIONS(833), 21,
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
  [11608] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_not,
    STATE(68), 1,
      sym__conjunction,
    STATE(152), 1,
      sym_class_iri,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(157), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11656] = 1,
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
  [11680] = 13,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(161), 1,
      sym__data_conjunction,
    STATE(284), 1,
      sym_data_range,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11728] = 13,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(161), 1,
      sym__data_conjunction,
    STATE(260), 1,
      sym_data_range,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11776] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(68), 1,
      sym__conjunction,
    STATE(118), 1,
      sym_class_iri,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(117), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11824] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(68), 1,
      sym__conjunction,
    STATE(220), 1,
      sym_class_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(222), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11872] = 8,
    ACTIONS(837), 1,
      anon_sym_DOT,
    STATE(872), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(820), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(839), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(325), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(835), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11910] = 3,
    ACTIONS(816), 1,
      anon_sym_or,
    STATE(278), 1,
      aux_sym_description_repeat1,
    ACTIONS(523), 19,
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
  [11938] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_not,
    STATE(68), 1,
      sym__conjunction,
    STATE(402), 1,
      sym_class_iri,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(404), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11986] = 3,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(638), 19,
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
  [12014] = 3,
    ACTIONS(843), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(841), 19,
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
  [12042] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(328), 18,
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
  [12069] = 6,
    ACTIONS(850), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(852), 1,
      anon_sym_Types_COLON,
    ACTIONS(854), 1,
      anon_sym_Facts_COLON,
    ACTIONS(856), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(324), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
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
  [12102] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(638), 18,
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
  [12129] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_not,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(61), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12172] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(629), 18,
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
  [12199] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_not,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(61), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12242] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(315), 1,
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
  [12269] = 1,
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
  [12292] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(629), 18,
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
  [12319] = 3,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(864), 18,
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
  [12346] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 18,
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
  [12373] = 3,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(864), 18,
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
  [12400] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(868), 18,
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
  [12427] = 1,
    ACTIONS(841), 20,
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
  [12450] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(710), 1,
      anon_sym_not,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(61), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12493] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(515), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(61), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12536] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_not,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(61), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12579] = 3,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 18,
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
  [12606] = 3,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(873), 18,
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
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(868), 18,
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
  [12660] = 12,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(189), 1,
      sym__data_conjunction,
    STATE(139), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12705] = 6,
    ACTIONS(850), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(852), 1,
      anon_sym_Types_COLON,
    ACTIONS(854), 1,
      anon_sym_Facts_COLON,
    ACTIONS(856), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(298), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(878), 13,
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
  [12738] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(880), 18,
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
  [12765] = 3,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(885), 18,
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
  [12792] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 18,
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
  [12819] = 1,
    ACTIONS(887), 20,
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
  [12842] = 3,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym__individual_annotated_list_repeat1,
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
  [12869] = 6,
    ACTIONS(893), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(896), 1,
      anon_sym_Types_COLON,
    ACTIONS(899), 1,
      anon_sym_Facts_COLON,
    ACTIONS(902), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(324), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(891), 13,
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
  [12902] = 4,
    ACTIONS(905), 2,
      sym__non_zero,
      sym__zero,
    STATE(325), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 11,
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
  [12931] = 7,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(910), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(912), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(360), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(908), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12966] = 3,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(279), 18,
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
  [12993] = 3,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(307), 1,
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
  [13020] = 3,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(917), 18,
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
  [13047] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(563), 18,
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
  [13074] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_not,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(61), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [13117] = 7,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(910), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(921), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(360), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(919), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [13152] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(341), 1,
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
  [13178] = 5,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(931), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(929), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(339), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
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
  [13208] = 4,
    ACTIONS(933), 2,
      sym__non_zero,
      sym__zero,
    STATE(336), 2,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13236] = 4,
    ACTIONS(935), 2,
      sym__non_zero,
      sym__zero,
    STATE(361), 2,
      sym__digit,
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
  [13264] = 1,
    ACTIONS(937), 19,
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
  [13286] = 3,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(939), 17,
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
  [13312] = 5,
    ACTIONS(945), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(951), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(948), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(339), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(943), 13,
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
  [13342] = 1,
    ACTIONS(954), 19,
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
  [13364] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(956), 17,
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
  [13390] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(956), 17,
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
  [13416] = 1,
    ACTIONS(958), 19,
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
  [13438] = 1,
    ACTIONS(960), 19,
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
  [13460] = 3,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(962), 17,
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
  [13486] = 1,
    ACTIONS(964), 19,
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
  [13508] = 1,
    ACTIONS(54), 19,
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
  [13530] = 3,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(962), 17,
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
  [13556] = 5,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(931), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(929), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(334), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(966), 13,
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
  [13586] = 1,
    ACTIONS(968), 19,
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
  [13608] = 1,
    ACTIONS(970), 19,
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
  [13630] = 1,
    ACTIONS(972), 19,
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
  [13652] = 1,
    ACTIONS(974), 19,
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
  [13674] = 1,
    ACTIONS(976), 19,
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
  [13696] = 11,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(176), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13738] = 1,
    ACTIONS(873), 19,
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
  [13760] = 1,
    ACTIONS(880), 19,
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
  [13782] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(978), 17,
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
  [13808] = 3,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [13834] = 4,
    ACTIONS(985), 2,
      sym__non_zero,
      sym__zero,
    STATE(360), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 10,
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
  [13862] = 4,
    ACTIONS(988), 2,
      sym__non_zero,
      sym__zero,
    STATE(361), 2,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13890] = 3,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
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
  [13916] = 3,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(996), 17,
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
  [13942] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13981] = 1,
    ACTIONS(998), 18,
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
  [14002] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14041] = 1,
    ACTIONS(991), 18,
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
  [14062] = 2,
    ACTIONS(1000), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1002), 15,
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
  [14085] = 8,
    ACTIONS(1006), 1,
      anon_sym_DOT,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1004), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1008), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(394), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(835), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14120] = 5,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1012), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(413), 1,
      sym_datatype_equavalent_to,
    STATE(395), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1010), 13,
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
  [14149] = 8,
    ACTIONS(1014), 1,
      anon_sym_DOT,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1004), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1016), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(394), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(818), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(89), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14184] = 1,
    ACTIONS(891), 18,
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
  [14205] = 1,
    ACTIONS(978), 18,
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
  [14226] = 1,
    ACTIONS(1018), 18,
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
  [14247] = 5,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1012), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(417), 1,
      sym_datatype_equavalent_to,
    STATE(370), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1020), 13,
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
  [14276] = 1,
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
  [14297] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14336] = 8,
    ACTIONS(93), 1,
      anon_sym_f,
    ACTIONS(271), 1,
      anon_sym_F,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    STATE(883), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(405), 2,
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
  [14371] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14410] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14449] = 8,
    ACTIONS(83), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_F,
    ACTIONS(1028), 1,
      anon_sym_DOT,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(405), 2,
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
  [14484] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(52), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14523] = 1,
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
  [14543] = 7,
    STATE(859), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1030), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1032), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(408), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(919), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(95), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14575] = 7,
    ACTIONS(97), 1,
      anon_sym_f,
    ACTIONS(275), 1,
      anon_sym_F,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(405), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14607] = 3,
    ACTIONS(1034), 1,
      anon_sym_and,
    STATE(397), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(416), 15,
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
  [14631] = 10,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    ACTIONS(1036), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1038), 1,
      anon_sym_inverse,
    STATE(426), 1,
      sym__annotations,
    STATE(489), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(926), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(927), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(155), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14669] = 3,
    ACTIONS(1040), 1,
      anon_sym_and,
    STATE(388), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(234), 15,
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
  [14693] = 10,
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
    STATE(11), 1,
      sym_datatype_iri,
    STATE(48), 1,
      sym_datatype,
    STATE(53), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14731] = 8,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1045), 1,
      anon_sym_DOT,
    STATE(898), 1,
      sym__literal_list,
    STATE(900), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1043), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(837), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [14765] = 3,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    STATE(391), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1047), 14,
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
  [14789] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1045), 1,
      anon_sym_DOT,
    STATE(900), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1043), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(834), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [14821] = 3,
    ACTIONS(1052), 1,
      anon_sym_and,
    STATE(400), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 15,
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
  [14845] = 4,
    ACTIONS(1054), 2,
      sym__non_zero,
      sym__zero,
    STATE(394), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 8,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [14871] = 4,
    ACTIONS(1047), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    STATE(391), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1057), 13,
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
  [14897] = 7,
    ACTIONS(101), 1,
      anon_sym_f,
    ACTIONS(277), 1,
      anon_sym_F,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(405), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14929] = 3,
    ACTIONS(1060), 1,
      anon_sym_and,
    STATE(397), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(230), 15,
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
  [14953] = 3,
    ACTIONS(1052), 1,
      anon_sym_and,
    STATE(388), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 15,
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
  [14977] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1045), 1,
      anon_sym_DOT,
    STATE(900), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1043), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(865), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [15009] = 3,
    ACTIONS(1052), 1,
      anon_sym_and,
    STATE(388), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(493), 15,
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
  [15033] = 3,
    ACTIONS(1065), 1,
      anon_sym_Import_COLON,
    STATE(401), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    ACTIONS(1063), 14,
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
  [15057] = 2,
    ACTIONS(1068), 1,
      anon_sym_that,
    ACTIONS(483), 16,
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
  [15079] = 7,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1030), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1070), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(408), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(908), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [15111] = 3,
    ACTIONS(1034), 1,
      anon_sym_and,
    STATE(386), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(481), 15,
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
  [15135] = 4,
    ACTIONS(121), 1,
      anon_sym_F,
    ACTIONS(1072), 2,
      sym__non_zero,
      sym__zero,
    STATE(405), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 12,
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
  [15161] = 3,
    ACTIONS(1052), 1,
      anon_sym_and,
    STATE(398), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(396), 15,
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
  [15185] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1045), 1,
      anon_sym_DOT,
    STATE(922), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1043), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(63), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15216] = 4,
    ACTIONS(1075), 2,
      sym__non_zero,
      sym__zero,
    STATE(408), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 7,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [15241] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1045), 1,
      anon_sym_DOT,
    STATE(922), 1,
      sym__lexial_value,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1078), 2,
      sym__non_zero,
      sym__zero,
    STATE(72), 2,
      aux_sym__digits,
      sym__digit,
    STATE(351), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15272] = 3,
    ACTIONS(1080), 1,
      anon_sym_or,
    STATE(419), 1,
      aux_sym_description_repeat1,
    ACTIONS(537), 14,
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
  [15295] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1045), 1,
      anon_sym_DOT,
    STATE(900), 1,
      sym__lexial_value,
    ACTIONS(290), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1043), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
    STATE(874), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15326] = 3,
    ACTIONS(1082), 1,
      anon_sym_or,
    STATE(412), 1,
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
  [15349] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(420), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1085), 13,
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
  [15372] = 11,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1089), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1091), 1,
      anon_sym_not,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(372), 1,
      sym__fact_annotated_list,
    STATE(409), 1,
      sym_data_property_iri,
    STATE(503), 1,
      sym__annotations,
    STATE(566), 1,
      sym_object_property_iri,
    STATE(320), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(573), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15411] = 7,
    ACTIONS(296), 1,
      sym__quoted_string,
    ACTIONS(1045), 1,
      anon_sym_DOT,
    STATE(922), 1,
      sym__lexial_value,
    ACTIONS(459), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1078), 2,
      sym__non_zero,
      sym__zero,
    STATE(72), 2,
      aux_sym__digits,
      sym__digit,
    STATE(63), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15442] = 8,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_inverse,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    ACTIONS(1036), 1,
      anon_sym_Annotations_COLON,
    STATE(463), 1,
      sym__annotations,
    STATE(155), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
  [15475] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(418), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1010), 13,
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
  [15498] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(391), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1085), 13,
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
  [15521] = 3,
    ACTIONS(1080), 1,
      anon_sym_or,
    STATE(412), 1,
      aux_sym_description_repeat1,
    ACTIONS(523), 14,
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
  [15544] = 3,
    ACTIONS(302), 1,
      anon_sym_Annotations_COLON,
    STATE(391), 2,
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
  [15567] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(452), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(809), 13,
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
  [15589] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1101), 1,
      anon_sym_not,
    STATE(746), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15623] = 8,
    ACTIONS(1105), 1,
      anon_sym_DOT,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(835), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1103), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1107), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(461), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15655] = 9,
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
    STATE(65), 1,
      sym__restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15689] = 9,
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
    STATE(65), 1,
      sym__restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15723] = 8,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    ACTIONS(1038), 1,
      anon_sym_inverse,
    STATE(490), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(926), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(927), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(155), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15755] = 9,
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
    STATE(65), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15789] = 1,
    ACTIONS(1115), 15,
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
  [15807] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1117), 1,
      anon_sym_not,
    STATE(65), 1,
      sym__restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15841] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1119), 1,
      anon_sym_not,
    STATE(107), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15875] = 1,
    ACTIONS(1121), 15,
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
  [15893] = 8,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    STATE(879), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(818), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1103), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1125), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(461), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15925] = 8,
    ACTIONS(1129), 1,
      anon_sym_DOT,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(818), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1127), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1131), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15957] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(443), 1,
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
  [15979] = 3,
    ACTIONS(1139), 1,
      anon_sym_COMMA,
    STATE(435), 1,
      aux_sym__data_property_2list_repeat1,
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
  [16001] = 8,
    ACTIONS(1144), 1,
      anon_sym_DOT,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(818), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1142), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1146), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(484), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16033] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym__individual_2list_repeat1,
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
  [16055] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym__data_property_2list_repeat1,
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
  [16077] = 3,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1154), 13,
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
  [16099] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(435), 1,
      aux_sym__data_property_2list_repeat1,
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
  [16121] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1160), 1,
      anon_sym_not,
    STATE(158), 1,
      sym__restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16155] = 8,
    ACTIONS(1162), 1,
      anon_sym_DOT,
    STATE(864), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(835), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1127), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1164), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16187] = 3,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym__individual_2list_repeat1,
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
  [16209] = 3,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1171), 13,
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
  [16231] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1173), 1,
      anon_sym_not,
    STATE(65), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16265] = 9,
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
    STATE(208), 1,
      sym__restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16299] = 2,
    ACTIONS(149), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(151), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [16319] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1177), 1,
      anon_sym_not,
    STATE(65), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16353] = 9,
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
    STATE(406), 1,
      sym__restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16387] = 3,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    STATE(450), 1,
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
  [16409] = 10,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1089), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1091), 1,
      anon_sym_not,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(409), 1,
      sym_data_property_iri,
    STATE(504), 1,
      sym__annotations,
    STATE(566), 1,
      sym_object_property_iri,
    STATE(356), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(573), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16445] = 3,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym__description_2list_repeat1,
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
  [16467] = 8,
    ACTIONS(1186), 1,
      anon_sym_DOT,
    STATE(852), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(835), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1142), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1188), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(484), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16499] = 1,
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
  [16517] = 3,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(841), 13,
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
  [16539] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1193), 1,
      anon_sym_not,
    STATE(242), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16573] = 4,
    ACTIONS(1195), 2,
      sym__non_zero,
      sym__zero,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [16596] = 8,
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
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16627] = 7,
    STATE(861), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(908), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1198), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1200), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(493), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16656] = 8,
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
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16687] = 4,
    ACTIONS(1202), 2,
      sym__non_zero,
      sym__zero,
    STATE(461), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 7,
      anon_sym__COLON,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [16710] = 8,
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
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16741] = 6,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_inverse,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    STATE(155), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(67), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_has_key_repeat1,
  [16768] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(393), 1,
      sym__restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16799] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(1205), 1,
      anon_sym_Annotations_COLON,
    STATE(372), 1,
      sym__individual_annotated_list,
    STATE(534), 1,
      sym__annotations,
    STATE(323), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16832] = 7,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(919), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1207), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1209), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16861] = 7,
    STATE(870), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(908), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1211), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1213), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(509), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16890] = 8,
    ACTIONS(818), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      anon_sym_DOT,
    STATE(846), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1215), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1219), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(507), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16921] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(99), 1,
      sym__restriction,
    STATE(661), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16952] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1036), 1,
      anon_sym_Annotations_COLON,
    STATE(238), 1,
      sym__object_property_expression_annotated_list,
    STATE(542), 1,
      sym__annotations,
    STATE(177), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16985] = 8,
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
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17016] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(160), 1,
      sym__restriction,
    STATE(669), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17047] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(733), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17078] = 1,
    ACTIONS(1221), 14,
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
  [17095] = 1,
    ACTIONS(1181), 14,
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
  [17112] = 8,
    ACTIONS(835), 1,
      sym__pn_local,
    ACTIONS(1223), 1,
      anon_sym_DOT,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1215), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1225), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(507), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17143] = 7,
    STATE(843), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(919), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1211), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1227), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(509), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17172] = 7,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(908), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1207), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1229), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17201] = 1,
    ACTIONS(1231), 14,
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
  [17218] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(214), 1,
      sym__restriction,
    STATE(663), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17249] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(251), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17280] = 7,
    STATE(856), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(919), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1198), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1233), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(493), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
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
    STATE(59), 1,
      sym__restriction,
    STATE(671), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17340] = 4,
    ACTIONS(1235), 2,
      sym__non_zero,
      sym__zero,
    STATE(484), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [17363] = 1,
    ACTIONS(1137), 14,
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
  [17380] = 9,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(1205), 1,
      anon_sym_Annotations_COLON,
    STATE(489), 1,
      sym__individual_2list,
    STATE(512), 1,
      sym__annotations,
    STATE(925), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17413] = 8,
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
    STATE(930), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17444] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(14), 1,
      sym_datatype,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17472] = 1,
    ACTIONS(1238), 13,
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
  [17488] = 1,
    ACTIONS(1240), 13,
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
  [17504] = 7,
    ACTIONS(908), 1,
      sym__pn_local,
    STATE(844), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1242), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1244), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(520), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17532] = 7,
    ACTIONS(495), 1,
      anon_sym_LT,
    ACTIONS(509), 1,
      sym__pn_local,
    ACTIONS(511), 1,
      sym__pname_ln,
    STATE(539), 1,
      sym_datatype,
    STATE(558), 1,
      sym_datatype_iri,
    ACTIONS(1246), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(559), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17560] = 4,
    ACTIONS(1248), 2,
      sym__non_zero,
      sym__zero,
    STATE(493), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [17582] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1253), 1,
      sym__language_tag,
    ACTIONS(41), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1251), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17604] = 7,
    ACTIONS(353), 1,
      anon_sym_LT,
    ACTIONS(367), 1,
      sym__pn_local,
    ACTIONS(369), 1,
      sym__pname_ln,
    STATE(705), 1,
      sym_datatype_iri,
    STATE(706), 1,
      sym_datatype,
    ACTIONS(1255), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(704), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17632] = 7,
    ACTIONS(919), 1,
      sym__pn_local,
    STATE(845), 1,
      sym__exponent,
    ACTIONS(87), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1242), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1257), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(520), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17660] = 7,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(14), 1,
      sym_datatype,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17688] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(11), 1,
      sym_datatype_iri,
    STATE(375), 1,
      sym_datatype,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(12), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17716] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    ACTIONS(1205), 1,
      anon_sym_Annotations_COLON,
    STATE(571), 1,
      sym__annotations,
    STATE(357), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17746] = 8,
    ACTIONS(1036), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1259), 1,
      anon_sym_LT,
    ACTIONS(1261), 1,
      anon_sym_inverse,
    ACTIONS(1263), 1,
      sym__pn_local,
    ACTIONS(1265), 1,
      sym__pname_ln,
    STATE(537), 1,
      sym__annotations,
    STATE(182), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17776] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1036), 1,
      anon_sym_Annotations_COLON,
    STATE(545), 1,
      sym__annotations,
    STATE(188), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17806] = 7,
    ACTIONS(375), 1,
      anon_sym_LT,
    ACTIONS(389), 1,
      sym__pn_local,
    ACTIONS(391), 1,
      sym__pname_ln,
    STATE(716), 1,
      sym_datatype,
    STATE(732), 1,
      sym_datatype_iri,
    ACTIONS(1267), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(731), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17834] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1091), 1,
      anon_sym_not,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(409), 1,
      sym_data_property_iri,
    STATE(566), 1,
      sym_object_property_iri,
    STATE(316), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(573), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17864] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1091), 1,
      anon_sym_not,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(409), 1,
      sym_data_property_iri,
    STATE(566), 1,
      sym_object_property_iri,
    STATE(353), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(573), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17894] = 7,
    ACTIONS(398), 1,
      anon_sym_LT,
    ACTIONS(412), 1,
      sym__pn_local,
    ACTIONS(414), 1,
      sym__pname_ln,
    STATE(637), 1,
      sym_datatype_iri,
    STATE(647), 1,
      sym_datatype,
    ACTIONS(1269), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(638), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17922] = 7,
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(349), 1,
      sym__pn_local,
    ACTIONS(351), 1,
      sym__pname_ln,
    STATE(812), 1,
      sym_datatype_iri,
    STATE(827), 1,
      sym_datatype,
    ACTIONS(1271), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(814), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17950] = 4,
    ACTIONS(1273), 2,
      sym__non_zero,
      sym__zero,
    STATE(507), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 6,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [17972] = 7,
    ACTIONS(463), 1,
      anon_sym_LT,
    ACTIONS(477), 1,
      sym__pn_local,
    ACTIONS(479), 1,
      sym__pname_ln,
    STATE(734), 1,
      sym_datatype_iri,
    STATE(745), 1,
      sym_datatype,
    ACTIONS(1276), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(692), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18000] = 4,
    ACTIONS(1278), 2,
      sym__non_zero,
      sym__zero,
    STATE(509), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [18022] = 4,
    ACTIONS(1281), 2,
      sym__non_zero,
      sym__zero,
    STATE(510), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 6,
      anon_sym__COLON,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18044] = 4,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1284), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18065] = 7,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(490), 1,
      sym__individual_2list,
    STATE(925), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18092] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym__annotation_annotated_list,
    STATE(115), 1,
      sym_annotation_property_iri,
    STATE(328), 1,
      sym_annotation,
    STATE(596), 1,
      sym__annotations,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18123] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(122), 1,
      sym_annotation_property_iri,
    STATE(518), 1,
      sym_annotation,
    STATE(575), 1,
      sym__annotation_annotated_list,
    STATE(624), 1,
      sym__annotations,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18154] = 4,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 4,
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
  [18175] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(116), 1,
      sym_annotation_property_iri,
    STATE(600), 1,
      sym__annotations,
    STATE(687), 1,
      sym_annotation,
    STATE(778), 1,
      sym__annotation_annotated_list,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18206] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation_property_iri,
    STATE(608), 1,
      sym__annotations,
    STATE(688), 1,
      sym_annotation,
    STATE(824), 1,
      sym__annotation_annotated_list,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18237] = 4,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(521), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 4,
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
  [18258] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(304), 1,
      sym__data_property_expression_annotated_list,
    STATE(616), 1,
      sym__annotations,
    STATE(244), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(283), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18287] = 4,
    ACTIONS(1297), 2,
      sym__non_zero,
      sym__zero,
    STATE(520), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(121), 5,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [18308] = 4,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 4,
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
  [18329] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym__annotation_annotated_list,
    STATE(120), 1,
      sym_annotation_property_iri,
    STATE(618), 1,
      sym_annotation,
    STATE(620), 1,
      sym__annotations,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18360] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(108), 1,
      sym_annotation_property_iri,
    STATE(617), 1,
      sym_annotation,
    STATE(628), 1,
      sym__annotations,
    STATE(672), 1,
      sym__annotation_annotated_list,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18391] = 4,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(328), 4,
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
  [18412] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym__annotation_annotated_list,
    STATE(96), 1,
      sym_annotation,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(604), 1,
      sym__annotations,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18443] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(98), 1,
      sym_annotation_property_iri,
    STATE(594), 1,
      sym__annotations,
    STATE(681), 1,
      sym_annotation,
    STATE(782), 1,
      sym__annotation_annotated_list,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18474] = 9,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(605), 1,
      sym__annotations,
    STATE(708), 1,
      sym_annotation,
    STATE(830), 1,
      sym__annotation_annotated_list,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18505] = 7,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(919), 1,
      sym__individual_list,
    STATE(841), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18532] = 6,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(454), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18556] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(116), 1,
      sym_annotation_property_iri,
    STATE(592), 1,
      sym__annotations,
    STATE(743), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18584] = 2,
    ACTIONS(27), 5,
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
  [18600] = 2,
    ACTIONS(35), 5,
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
  [18616] = 2,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(689), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18632] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(306), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18656] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(439), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18680] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(454), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18704] = 6,
    ACTIONS(1259), 1,
      anon_sym_LT,
    ACTIONS(1261), 1,
      anon_sym_inverse,
    ACTIONS(1263), 1,
      sym__pn_local,
    ACTIONS(1265), 1,
      sym__pname_ln,
    STATE(163), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18728] = 2,
    ACTIONS(145), 5,
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
  [18744] = 2,
    ACTIONS(61), 5,
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
  [18760] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(437), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18784] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(120), 1,
      sym_annotation_property_iri,
    STATE(612), 1,
      sym__annotations,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18812] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(153), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18836] = 2,
    ACTIONS(67), 5,
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
  [18852] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(122), 1,
      sym_annotation_property_iri,
    STATE(562), 1,
      sym_annotation,
    STATE(625), 1,
      sym__annotations,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18880] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(197), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18904] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(615), 1,
      sym__annotations,
    STATE(266), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(283), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18930] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(63), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18954] = 2,
    ACTIONS(71), 5,
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
  [18970] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(115), 1,
      sym_annotation_property_iri,
    STATE(613), 1,
      sym__annotations,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18998] = 2,
    ACTIONS(65), 5,
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
  [19014] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(589), 1,
      sym__annotations,
    STATE(767), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19042] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(318), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19066] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation_property_iri,
    STATE(599), 1,
      sym__annotations,
    STATE(720), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19094] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(108), 1,
      sym_annotation_property_iri,
    STATE(623), 1,
      sym__annotations,
    STATE(644), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19122] = 6,
    ACTIONS(1259), 1,
      anon_sym_LT,
    ACTIONS(1261), 1,
      anon_sym_inverse,
    ACTIONS(1263), 1,
      sym__pn_local,
    ACTIONS(1265), 1,
      sym__pname_ln,
    STATE(191), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19146] = 2,
    ACTIONS(63), 5,
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
  [19162] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(98), 1,
      sym_annotation_property_iri,
    STATE(588), 1,
      sym__annotations,
    STATE(694), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19190] = 2,
    ACTIONS(47), 5,
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
  [19206] = 2,
    ACTIONS(49), 5,
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
  [19222] = 8,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(585), 1,
      sym__annotations,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19250] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(338), 1,
      sym_annotation_property_iri,
    STATE(383), 1,
      sym__annotation_property_iri_annotated_list,
    STATE(631), 1,
      sym__annotations,
    STATE(374), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19278] = 2,
    ACTIONS(143), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1284), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19294] = 5,
    ACTIONS(1318), 1,
      anon_sym_Annotations_COLON,
    STATE(180), 1,
      sym__object_property_characteristic,
    STATE(238), 1,
      sym__object_property_characteristic_annotated_list,
    STATE(633), 1,
      sym__annotations,
    ACTIONS(1320), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19316] = 2,
    ACTIONS(147), 5,
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
  [19332] = 7,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(409), 1,
      sym_data_property_iri,
    STATE(566), 1,
      sym_object_property_iri,
    STATE(350), 2,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(573), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19358] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(354), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19382] = 2,
    ACTIONS(75), 5,
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
  [19398] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(475), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19422] = 2,
    ACTIONS(69), 5,
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
  [19438] = 2,
    ACTIONS(73), 5,
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
  [19454] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(286), 1,
      anon_sym__COLON,
    STATE(352), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(49), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19478] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(367), 1,
      sym_annotation_property_iri,
    STATE(632), 1,
      sym__annotations,
    STATE(374), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19503] = 4,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      sym__quoted_string,
    ACTIONS(544), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(693), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1330), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
  [19522] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(383), 1,
      sym__iri_annotated_list,
    STATE(670), 1,
      sym__annotations,
    STATE(333), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19547] = 2,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1332), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19562] = 3,
    STATE(399), 1,
      sym__facet,
    ACTIONS(1334), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1336), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [19579] = 2,
    ACTIONS(1018), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(1338), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19594] = 4,
    ACTIONS(1318), 1,
      anon_sym_Annotations_COLON,
    STATE(193), 1,
      sym__object_property_characteristic,
    STATE(635), 1,
      sym__annotations,
    ACTIONS(1340), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19613] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1342), 1,
      sym__language_tag,
    ACTIONS(1251), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(41), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19632] = 2,
    ACTIONS(27), 4,
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
  [19647] = 2,
    ACTIONS(35), 4,
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
  [19662] = 2,
    ACTIONS(33), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(689), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19677] = 3,
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
  [19694] = 5,
    STATE(845), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1348), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [19714] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_annotation,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19736] = 5,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1350), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [19756] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(626), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19772] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(98), 1,
      sym_annotation_property_iri,
    STATE(707), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19794] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(797), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19816] = 5,
    STATE(879), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1354), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [19836] = 4,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    STATE(591), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1284), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19854] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(116), 1,
      sym_annotation_property_iri,
    STATE(747), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19876] = 5,
    STATE(846), 1,
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
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [19896] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(98), 1,
      sym_annotation_property_iri,
    STATE(685), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19918] = 4,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(591), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1300), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(328), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19936] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(115), 1,
      sym_annotation_property_iri,
    STATE(321), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19958] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(485), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(283), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19978] = 5,
    STATE(843), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1363), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [19998] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(100), 1,
      sym_annotation_property_iri,
    STATE(715), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20020] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(116), 1,
      sym_annotation_property_iri,
    STATE(675), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20042] = 5,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1365), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20062] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1289), 1,
      anon_sym_Annotations_COLON,
    STATE(668), 1,
      sym__annotations,
    STATE(373), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20084] = 5,
    STATE(883), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(93), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20104] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(92), 1,
      sym_annotation,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20126] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(712), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20148] = 4,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(591), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1291), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(324), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20166] = 4,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(595), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1291), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(324), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20184] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(100), 1,
      sym_annotation_property_iri,
    STATE(684), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20206] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(438), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(283), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20226] = 5,
    STATE(871), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1367), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20246] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(630), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20262] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_annotation,
    STATE(120), 1,
      sym_annotation_property_iri,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20284] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(38), 1,
      sym_annotation,
    STATE(115), 1,
      sym_annotation_property_iri,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20306] = 5,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1369), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20326] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(285), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(283), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20346] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(263), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(283), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20366] = 4,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(606), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1295), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(333), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20384] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(587), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20400] = 5,
    STATE(859), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1371), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20420] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(120), 1,
      sym_annotation_property_iri,
    STATE(611), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20442] = 5,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20462] = 5,
    STATE(856), 1,
      sym__exponent,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1373), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20482] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(108), 1,
      sym_annotation_property_iri,
    STATE(650), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20504] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(122), 1,
      sym_annotation_property_iri,
    STATE(515), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20526] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(122), 1,
      sym_annotation_property_iri,
    STATE(538), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20548] = 3,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    STATE(626), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20564] = 5,
    STATE(855), 1,
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
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20584] = 6,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(1093), 1,
      sym__pn_local,
    ACTIONS(1095), 1,
      sym__pname_ln,
    STATE(108), 1,
      sym_annotation_property_iri,
    STATE(607), 1,
      sym_annotation,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20606] = 5,
    STATE(858), 1,
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
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [20626] = 3,
    ACTIONS(1352), 1,
      anon_sym_COMMA,
    STATE(626), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(328), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20642] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(348), 1,
      sym_annotation_property_iri,
    STATE(374), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20661] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(376), 1,
      sym_annotation_property_iri,
    STATE(374), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20680] = 2,
    STATE(144), 1,
      sym__object_property_characteristic,
    ACTIONS(1382), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20693] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(129), 1,
      sym_object_property_iri,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20712] = 2,
    STATE(198), 1,
      sym__object_property_characteristic,
    ACTIONS(1384), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20725] = 5,
    ACTIONS(1259), 1,
      anon_sym_LT,
    ACTIONS(1263), 1,
      sym__pn_local,
    ACTIONS(1265), 1,
      sym__pname_ln,
    STATE(129), 1,
      sym_object_property_iri,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20744] = 2,
    ACTIONS(1314), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20757] = 2,
    ACTIONS(1316), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20770] = 2,
    ACTIONS(689), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20783] = 2,
    ACTIONS(1322), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(147), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20796] = 2,
    ACTIONS(1324), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20809] = 2,
    ACTIONS(1326), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(69), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20822] = 2,
    ACTIONS(1328), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20835] = 2,
    ACTIONS(1284), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20848] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(111), 1,
      sym_class_iri,
    STATE(347), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20867] = 2,
    ACTIONS(1308), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20880] = 2,
    ACTIONS(1304), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(61), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20893] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(168), 1,
      sym_object_property_iri,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20912] = 2,
    ACTIONS(675), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20925] = 2,
    ACTIONS(1302), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20938] = 2,
    ACTIONS(673), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(27), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20951] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(250), 1,
      sym_data_property_iri,
    STATE(283), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20970] = 5,
    ACTIONS(202), 1,
      anon_sym_LT,
    ACTIONS(208), 1,
      sym__pn_local,
    ACTIONS(210), 1,
      sym__pname_ln,
    STATE(186), 1,
      sym_object_property_iri,
    STATE(206), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20989] = 2,
    ACTIONS(1310), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(65), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21002] = 2,
    ACTIONS(1306), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(67), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21015] = 2,
    ACTIONS(1312), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21028] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(349), 1,
      sym_annotation_property_iri,
    STATE(374), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21047] = 5,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      sym__pn_local,
    ACTIONS(183), 1,
      sym__pname_ln,
    STATE(129), 1,
      sym_object_property_iri,
    STATE(138), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21066] = 2,
    ACTIONS(58), 1,
      anon_sym_value,
    ACTIONS(56), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21078] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(431), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21094] = 4,
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
  [21110] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1394), 1,
      sym__language_tag,
    ACTIONS(1251), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21126] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1396), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1398), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21142] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1404), 1,
      anon_sym_value,
    ACTIONS(1400), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1402), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21158] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1406), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1408), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21174] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1410), 1,
      sym__language_tag,
    ACTIONS(1251), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21190] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1412), 1,
      sym__language_tag,
    ACTIONS(1251), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21206] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(365), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21222] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1414), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1416), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21238] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(342), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21254] = 4,
    ACTIONS(1388), 1,
      anon_sym_Self,
    ACTIONS(1392), 1,
      anon_sym_value,
    ACTIONS(1418), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1420), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21270] = 2,
    ACTIONS(1332), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21282] = 4,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(673), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1284), 2,
      anon_sym_not,
      sym__pn_local,
  [21297] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(673), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(328), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym_not,
      sym__pn_local,
  [21312] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(674), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym_not,
      sym__pn_local,
  [21327] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(673), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym_not,
      sym__pn_local,
  [21342] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1251), 1,
      sym__pn_local,
    ACTIONS(1427), 1,
      sym__language_tag,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21357] = 3,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1429), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [21370] = 4,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    STATE(679), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1284), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21385] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(679), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(328), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21400] = 4,
    ACTIONS(1436), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1295), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21415] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(679), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21430] = 3,
    ACTIONS(79), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1438), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [21443] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(680), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21458] = 4,
    ACTIONS(1436), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21473] = 4,
    ACTIONS(1436), 1,
      anon_sym_COMMA,
    STATE(690), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1291), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21488] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(676), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1295), 2,
      anon_sym_not,
      sym__pn_local,
  [21503] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(682), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1295), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21518] = 3,
    ACTIONS(1440), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1442), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(683), 2,
      aux_sym__digits,
      sym__digit,
  [21531] = 4,
    ACTIONS(1444), 1,
      anon_sym_COMMA,
    STATE(690), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1284), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21546] = 4,
    ACTIONS(1436), 1,
      anon_sym_COMMA,
    STATE(690), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(328), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21561] = 2,
    ACTIONS(1316), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21571] = 2,
    ACTIONS(675), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21581] = 2,
    ACTIONS(1284), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21591] = 2,
    ACTIONS(1447), 1,
      anon_sym_that,
    ACTIONS(483), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21601] = 2,
    ACTIONS(1328), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21611] = 2,
    ACTIONS(1326), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21621] = 2,
    ACTIONS(1324), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21631] = 2,
    ACTIONS(673), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21641] = 2,
    ACTIONS(1308), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21651] = 2,
    ACTIONS(1322), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21661] = 3,
    ACTIONS(1449), 1,
      anon_sym_and,
    STATE(753), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(481), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21673] = 3,
    ACTIONS(1453), 1,
      anon_sym_DOT,
    ACTIONS(1451), 2,
      sym__non_zero,
      sym__zero,
    STATE(432), 2,
      aux_sym__digits,
      sym__digit,
  [21685] = 2,
    ACTIONS(1316), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21695] = 2,
    ACTIONS(1314), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21705] = 2,
    ACTIONS(1304), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21715] = 2,
    ACTIONS(1302), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21725] = 4,
    ACTIONS(1295), 1,
      sym__pn_local,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    STATE(765), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(333), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21739] = 2,
    ACTIONS(1312), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21749] = 3,
    ACTIONS(1459), 1,
      anon_sym_DOT,
    ACTIONS(1457), 2,
      sym__non_zero,
      sym__zero,
    STATE(436), 2,
      aux_sym__digits,
      sym__digit,
  [21761] = 2,
    ACTIONS(1310), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21771] = 4,
    ACTIONS(1291), 1,
      sym__pn_local,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    STATE(763), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21785] = 2,
    ACTIONS(1306), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21795] = 2,
    ACTIONS(1312), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21805] = 2,
    ACTIONS(1302), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21815] = 2,
    ACTIONS(1304), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21825] = 2,
    ACTIONS(1308), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21835] = 2,
    ACTIONS(1310), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21845] = 3,
    ACTIONS(1463), 1,
      anon_sym_DOT,
    ACTIONS(1461), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
  [21857] = 2,
    ACTIONS(1284), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21867] = 3,
    ACTIONS(1463), 1,
      anon_sym_DOT,
    ACTIONS(1465), 2,
      sym__non_zero,
      sym__zero,
    STATE(73), 2,
      aux_sym__digits,
      sym__digit,
  [21879] = 2,
    ACTIONS(1328), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21889] = 3,
    ACTIONS(1469), 1,
      anon_sym_SLASH,
    STATE(761), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1467), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [21901] = 2,
    ACTIONS(1326), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21911] = 2,
    ACTIONS(1324), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21921] = 2,
    ACTIONS(689), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21931] = 3,
    ACTIONS(1471), 1,
      anon_sym_and,
    STATE(739), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(493), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21943] = 2,
    ACTIONS(1322), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21953] = 3,
    ACTIONS(1463), 1,
      anon_sym_DOT,
    ACTIONS(1473), 2,
      sym__non_zero,
      sym__zero,
    STATE(378), 2,
      aux_sym__digits,
      sym__digit,
  [21965] = 3,
    ACTIONS(1477), 1,
      anon_sym_DOT,
    ACTIONS(1475), 2,
      sym__non_zero,
      sym__zero,
    STATE(433), 2,
      aux_sym__digits,
      sym__digit,
  [21977] = 2,
    ACTIONS(1316), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21987] = 2,
    ACTIONS(1314), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21997] = 3,
    ACTIONS(1471), 1,
      anon_sym_and,
    STATE(727), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22009] = 2,
    ACTIONS(1314), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22019] = 2,
    ACTIONS(675), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22029] = 2,
    ACTIONS(673), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22039] = 3,
    ACTIONS(1481), 1,
      anon_sym_DOT,
    ACTIONS(1479), 2,
      sym__non_zero,
      sym__zero,
    STATE(275), 2,
      aux_sym__digits,
      sym__digit,
  [22051] = 2,
    ACTIONS(1322), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22061] = 3,
    ACTIONS(1483), 1,
      anon_sym_and,
    STATE(739), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(234), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22073] = 2,
    ACTIONS(1324), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22083] = 2,
    ACTIONS(1326), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22093] = 2,
    ACTIONS(1328), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22103] = 2,
    ACTIONS(1284), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22113] = 2,
    ACTIONS(1308), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22123] = 2,
    ACTIONS(1304), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22133] = 3,
    ACTIONS(1471), 1,
      anon_sym_and,
    STATE(764), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(396), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22145] = 2,
    ACTIONS(1302), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22155] = 2,
    ACTIONS(1312), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22165] = 3,
    ACTIONS(1488), 1,
      anon_sym_DOT,
    ACTIONS(1486), 2,
      sym__non_zero,
      sym__zero,
    STATE(468), 2,
      aux_sym__digits,
      sym__digit,
  [22177] = 2,
    ACTIONS(1306), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22187] = 2,
    ACTIONS(1310), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22197] = 2,
    ACTIONS(689), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22207] = 3,
    ACTIONS(1449), 1,
      anon_sym_and,
    STATE(759), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(416), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22219] = 3,
    ACTIONS(1492), 1,
      anon_sym_DOT,
    ACTIONS(1490), 2,
      sym__non_zero,
      sym__zero,
    STATE(371), 2,
      aux_sym__digits,
      sym__digit,
  [22231] = 4,
    ACTIONS(3), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(5), 1,
      anon_sym_Ontology_COLON,
    STATE(937), 1,
      sym_ontology,
    STATE(768), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [22245] = 2,
    ACTIONS(1306), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22255] = 2,
    ACTIONS(673), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22265] = 2,
    ACTIONS(675), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22275] = 3,
    ACTIONS(1494), 1,
      anon_sym_and,
    STATE(759), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(230), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22287] = 2,
    ACTIONS(689), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22297] = 3,
    ACTIONS(1499), 1,
      anon_sym_SLASH,
    STATE(761), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1497), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [22309] = 4,
    ACTIONS(1284), 1,
      sym__pn_local,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    STATE(762), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22323] = 4,
    ACTIONS(1300), 1,
      sym__pn_local,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    STATE(762), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(328), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22337] = 3,
    ACTIONS(1471), 1,
      anon_sym_and,
    STATE(739), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(371), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22349] = 4,
    ACTIONS(1291), 1,
      sym__pn_local,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    STATE(762), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(324), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22363] = 2,
    ACTIONS(1505), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [22372] = 2,
    ACTIONS(1284), 1,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22381] = 3,
    ACTIONS(1507), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(1510), 1,
      anon_sym_Ontology_COLON,
    STATE(768), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [22392] = 3,
    ACTIONS(1512), 1,
      anon_sym_or,
    STATE(790), 1,
      aux_sym_description_repeat1,
    ACTIONS(537), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22403] = 2,
    ACTIONS(1514), 2,
      sym__non_zero,
      sym__zero,
    STATE(603), 2,
      aux_sym__digits,
      sym__digit,
  [22412] = 2,
    ACTIONS(673), 1,
      sym__pn_local,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22421] = 2,
    ACTIONS(1516), 2,
      sym__non_zero,
      sym__zero,
    STATE(326), 2,
      aux_sym__digits,
      sym__digit,
  [22430] = 2,
    ACTIONS(1518), 2,
      sym__non_zero,
      sym__zero,
    STATE(601), 2,
      aux_sym__digits,
      sym__digit,
  [22439] = 4,
    ACTIONS(1520), 1,
      sym__non_zero,
    ACTIONS(1522), 1,
      sym__zero,
    STATE(58), 1,
      sym_non_negative_integer,
    STATE(447), 1,
      sym__positive_integer,
  [22452] = 4,
    ACTIONS(1524), 1,
      sym__iunreserved,
    STATE(873), 1,
      sym__iauthority,
    STATE(877), 1,
      sym__ihost,
    STATE(905), 1,
      sym__iuserinfo,
  [22465] = 2,
    ACTIONS(1526), 2,
      sym__non_zero,
      sym__zero,
    STATE(385), 2,
      aux_sym__digits,
      sym__digit,
  [22474] = 2,
    ACTIONS(1528), 2,
      sym__non_zero,
      sym__zero,
    STATE(396), 2,
      aux_sym__digits,
      sym__digit,
  [22483] = 2,
    ACTIONS(153), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1332), 2,
      anon_sym_not,
      sym__pn_local,
  [22492] = 2,
    ACTIONS(1530), 2,
      sym__non_zero,
      sym__zero,
    STATE(332), 2,
      aux_sym__digits,
      sym__digit,
  [22501] = 2,
    ACTIONS(1532), 2,
      sym__non_zero,
      sym__zero,
    STATE(621), 2,
      aux_sym__digits,
      sym__digit,
  [22510] = 2,
    ACTIONS(1534), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [22519] = 2,
    ACTIONS(153), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1332), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22528] = 3,
    ACTIONS(1536), 1,
      anon_sym_or,
    STATE(783), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22539] = 2,
    ACTIONS(1539), 2,
      sym__non_zero,
      sym__zero,
    STATE(482), 2,
      aux_sym__digits,
      sym__digit,
  [22548] = 2,
    ACTIONS(1541), 2,
      sym__non_zero,
      sym__zero,
    STATE(459), 2,
      aux_sym__digits,
      sym__digit,
  [22557] = 2,
    ACTIONS(1543), 2,
      sym__non_zero,
      sym__zero,
    STATE(619), 2,
      aux_sym__digits,
      sym__digit,
  [22566] = 2,
    ACTIONS(1545), 2,
      sym__non_zero,
      sym__zero,
    STATE(678), 2,
      aux_sym__digits,
      sym__digit,
  [22575] = 4,
    ACTIONS(1547), 1,
      sym__non_zero,
    ACTIONS(1549), 1,
      sym__zero,
    STATE(9), 1,
      sym_non_negative_integer,
    STATE(95), 1,
      sym__positive_integer,
  [22588] = 2,
    ACTIONS(1312), 1,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22597] = 3,
    ACTIONS(1512), 1,
      anon_sym_or,
    STATE(783), 1,
      aux_sym_description_repeat1,
    ACTIONS(523), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22608] = 2,
    ACTIONS(1551), 2,
      sym__non_zero,
      sym__zero,
    STATE(622), 2,
      aux_sym__digits,
      sym__digit,
  [22617] = 2,
    ACTIONS(1553), 2,
      sym__non_zero,
      sym__zero,
    STATE(627), 2,
      aux_sym__digits,
      sym__digit,
  [22626] = 2,
    ACTIONS(1555), 2,
      sym__non_zero,
      sym__zero,
    STATE(614), 2,
      aux_sym__digits,
      sym__digit,
  [22635] = 2,
    ACTIONS(1557), 2,
      sym__non_zero,
      sym__zero,
    STATE(610), 2,
      aux_sym__digits,
      sym__digit,
  [22644] = 2,
    ACTIONS(1559), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
  [22653] = 2,
    ACTIONS(1561), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
  [22662] = 2,
    ACTIONS(1302), 1,
      sym__pn_local,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22671] = 1,
    ACTIONS(1497), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [22678] = 2,
    ACTIONS(1563), 2,
      sym__non_zero,
      sym__zero,
    STATE(586), 2,
      aux_sym__digits,
      sym__digit,
  [22687] = 4,
    ACTIONS(1565), 1,
      sym__non_zero,
    ACTIONS(1567), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(55), 1,
      sym__positive_integer,
  [22700] = 2,
    ACTIONS(1569), 2,
      sym__non_zero,
      sym__zero,
    STATE(593), 2,
      aux_sym__digits,
      sym__digit,
  [22709] = 4,
    ACTIONS(1571), 1,
      sym__non_zero,
    ACTIONS(1573), 1,
      sym__zero,
    STATE(8), 1,
      sym_non_negative_integer,
    STATE(69), 1,
      sym__positive_integer,
  [22722] = 2,
    ACTIONS(1306), 1,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22731] = 2,
    ACTIONS(1310), 1,
      sym__pn_local,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22740] = 2,
    ACTIONS(689), 1,
      sym__pn_local,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22749] = 2,
    ACTIONS(1575), 2,
      sym__non_zero,
      sym__zero,
    STATE(478), 2,
      aux_sym__digits,
      sym__digit,
  [22758] = 2,
    ACTIONS(1577), 2,
      sym__non_zero,
      sym__zero,
    STATE(466), 2,
      aux_sym__digits,
      sym__digit,
  [22767] = 2,
    ACTIONS(1579), 2,
      sym__non_zero,
      sym__zero,
    STATE(590), 2,
      aux_sym__digits,
      sym__digit,
  [22776] = 2,
    ACTIONS(1581), 2,
      sym__non_zero,
      sym__zero,
    STATE(584), 2,
      aux_sym__digits,
      sym__digit,
  [22785] = 2,
    ACTIONS(675), 1,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22794] = 2,
    ACTIONS(1583), 2,
      sym__non_zero,
      sym__zero,
    STATE(629), 2,
      aux_sym__digits,
      sym__digit,
  [22803] = 2,
    ACTIONS(1314), 1,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22812] = 4,
    ACTIONS(1585), 1,
      sym__non_zero,
    ACTIONS(1587), 1,
      sym__zero,
    STATE(4), 1,
      sym_non_negative_integer,
    STATE(47), 1,
      sym__positive_integer,
  [22825] = 2,
    ACTIONS(1316), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22834] = 2,
    ACTIONS(1322), 1,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22843] = 2,
    ACTIONS(1324), 1,
      sym__pn_local,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22852] = 2,
    ACTIONS(1589), 2,
      sym__non_zero,
      sym__zero,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
  [22861] = 2,
    ACTIONS(1591), 2,
      sym__non_zero,
      sym__zero,
    STATE(477), 2,
      aux_sym__digits,
      sym__digit,
  [22870] = 2,
    ACTIONS(1326), 1,
      sym__pn_local,
    ACTIONS(69), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22879] = 2,
    ACTIONS(1593), 2,
      sym__non_zero,
      sym__zero,
    STATE(496), 2,
      aux_sym__digits,
      sym__digit,
  [22888] = 2,
    ACTIONS(1595), 2,
      sym__non_zero,
      sym__zero,
    STATE(598), 2,
      aux_sym__digits,
      sym__digit,
  [22897] = 2,
    ACTIONS(1328), 1,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22906] = 4,
    ACTIONS(1597), 1,
      sym__non_zero,
    ACTIONS(1599), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(40), 1,
      sym__positive_integer,
  [22919] = 2,
    ACTIONS(153), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1332), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22928] = 2,
    ACTIONS(1601), 2,
      sym__non_zero,
      sym__zero,
    STATE(491), 2,
      aux_sym__digits,
      sym__digit,
  [22937] = 2,
    ACTIONS(1308), 1,
      sym__pn_local,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22946] = 2,
    ACTIONS(1304), 1,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22955] = 2,
    ACTIONS(1603), 2,
      sym__non_zero,
      sym__zero,
    STATE(403), 2,
      aux_sym__digits,
      sym__digit,
  [22964] = 2,
    ACTIONS(1605), 2,
      sym__non_zero,
      sym__zero,
    STATE(384), 2,
      aux_sym__digits,
      sym__digit,
  [22973] = 2,
    ACTIONS(1332), 1,
      sym__pn_local,
    ACTIONS(153), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22981] = 3,
    ACTIONS(1607), 1,
      anon_sym_COMMA,
    ACTIONS(1610), 1,
      anon_sym_RBRACK,
    STATE(831), 1,
      aux_sym_datatype_restriction_repeat1,
  [22991] = 3,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    ACTIONS(1614), 1,
      anon_sym_RBRACK,
    STATE(831), 1,
      aux_sym_datatype_restriction_repeat1,
  [23001] = 3,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    STATE(833), 1,
      aux_sym__individual_2list_repeat1,
  [23011] = 3,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    ACTIONS(1619), 1,
      anon_sym_RBRACK,
    STATE(832), 1,
      aux_sym_datatype_restriction_repeat1,
  [23021] = 3,
    ACTIONS(1621), 1,
      anon_sym_RBRACE,
    ACTIONS(1623), 1,
      anon_sym_COMMA,
    STATE(835), 1,
      aux_sym__literal_list_repeat1,
  [23031] = 3,
    ACTIONS(1626), 1,
      anon_sym_RBRACE,
    ACTIONS(1628), 1,
      anon_sym_COMMA,
    STATE(835), 1,
      aux_sym__literal_list_repeat1,
  [23041] = 3,
    ACTIONS(1628), 1,
      anon_sym_COMMA,
    ACTIONS(1630), 1,
      anon_sym_RBRACE,
    STATE(836), 1,
      aux_sym__literal_list_repeat1,
  [23051] = 2,
    ACTIONS(1634), 1,
      anon_sym_AT,
    ACTIONS(1632), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [23059] = 3,
    ACTIONS(1636), 1,
      anon_sym_RBRACE,
    ACTIONS(1638), 1,
      anon_sym_COMMA,
    STATE(833), 1,
      aux_sym__individual_2list_repeat1,
  [23069] = 3,
    ACTIONS(1640), 1,
      anon_sym_GT,
    ACTIONS(1642), 1,
      sym__iquery,
    ACTIONS(1644), 1,
      sym__ifragment,
  [23079] = 3,
    ACTIONS(1638), 1,
      anon_sym_COMMA,
    ACTIONS(1646), 1,
      anon_sym_RBRACE,
    STATE(839), 1,
      aux_sym__individual_2list_repeat1,
  [23089] = 3,
    ACTIONS(1318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1648), 1,
      anon_sym_Functional,
    STATE(910), 1,
      sym__annotations,
  [23099] = 1,
    ACTIONS(1650), 2,
      anon_sym_f,
      anon_sym_F,
  [23104] = 1,
    ACTIONS(1652), 2,
      anon_sym_f,
      anon_sym_F,
  [23109] = 1,
    ACTIONS(1654), 2,
      anon_sym_f,
      anon_sym_F,
  [23114] = 1,
    ACTIONS(1348), 2,
      anon_sym_f,
      anon_sym_F,
  [23119] = 1,
    ACTIONS(1359), 2,
      anon_sym_f,
      anon_sym_F,
  [23124] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(850), 1,
      sym_full_iri,
  [23131] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(932), 1,
      sym__iri_rfc3987,
  [23138] = 1,
    ACTIONS(1658), 2,
      anon_sym_Prefix_COLON,
      anon_sym_Ontology_COLON,
  [23143] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(920), 1,
      sym__iri_rfc3987,
  [23150] = 1,
    ACTIONS(1378), 2,
      anon_sym_f,
      anon_sym_F,
  [23155] = 2,
    ACTIONS(1660), 1,
      anon_sym_SLASH_SLASH,
    STATE(840), 1,
      sym__ihier_part,
  [23162] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(928), 1,
      sym__iri_rfc3987,
  [23169] = 1,
    ACTIONS(1373), 2,
      anon_sym_f,
      anon_sym_F,
  [23174] = 1,
    ACTIONS(1662), 2,
      anon_sym_f,
      anon_sym_F,
  [23179] = 1,
    ACTIONS(1380), 2,
      anon_sym_f,
      anon_sym_F,
  [23184] = 1,
    ACTIONS(1371), 2,
      anon_sym_f,
      anon_sym_F,
  [23189] = 1,
    ACTIONS(1664), 2,
      anon_sym_f,
      anon_sym_F,
  [23194] = 1,
    ACTIONS(1666), 2,
      anon_sym_f,
      anon_sym_F,
  [23199] = 1,
    ACTIONS(1668), 2,
      anon_sym_f,
      anon_sym_F,
  [23204] = 1,
    ACTIONS(1670), 2,
      anon_sym_f,
      anon_sym_F,
  [23209] = 1,
    ACTIONS(1672), 2,
      anon_sym_f,
      anon_sym_F,
  [23214] = 1,
    ACTIONS(1365), 2,
      anon_sym_f,
      anon_sym_F,
  [23219] = 1,
    ACTIONS(1674), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [23224] = 1,
    ACTIONS(1363), 2,
      anon_sym_f,
      anon_sym_F,
  [23229] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(911), 1,
      sym__iri_rfc3987,
  [23236] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(908), 1,
      sym__iri_rfc3987,
  [23243] = 1,
    ACTIONS(93), 2,
      anon_sym_f,
      anon_sym_F,
  [23248] = 1,
    ACTIONS(1676), 2,
      anon_sym_f,
      anon_sym_F,
  [23253] = 1,
    ACTIONS(1369), 2,
      anon_sym_f,
      anon_sym_F,
  [23258] = 1,
    ACTIONS(1367), 2,
      anon_sym_f,
      anon_sym_F,
  [23263] = 2,
    ACTIONS(1469), 1,
      anon_sym_SLASH,
    STATE(723), 1,
      aux_sym__ipath_abempty,
  [23270] = 1,
    ACTIONS(1621), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [23275] = 1,
    ACTIONS(1678), 2,
      anon_sym_f,
      anon_sym_F,
  [23280] = 1,
    ACTIONS(1354), 2,
      anon_sym_f,
      anon_sym_F,
  [23285] = 2,
    ACTIONS(1680), 1,
      anon_sym_COLON,
    ACTIONS(1682), 1,
      anon_sym_SLASH,
  [23292] = 2,
    ACTIONS(1684), 1,
      anon_sym_COLON,
    ACTIONS(1686), 1,
      anon_sym_SLASH,
  [23299] = 1,
    ACTIONS(1350), 2,
      anon_sym_f,
      anon_sym_F,
  [23304] = 1,
    ACTIONS(1688), 2,
      anon_sym_f,
      anon_sym_F,
  [23309] = 1,
    ACTIONS(101), 2,
      anon_sym_f,
      anon_sym_F,
  [23314] = 2,
    ACTIONS(1690), 1,
      anon_sym_GT,
    ACTIONS(1692), 1,
      sym__ifragment,
  [23321] = 1,
    ACTIONS(97), 2,
      anon_sym_f,
      anon_sym_F,
  [23326] = 2,
    ACTIONS(1694), 1,
      sym__iunreserved,
    STATE(878), 1,
      sym__ihost,
  [23333] = 2,
    ACTIONS(1696), 1,
      sym__iunreserved,
    STATE(798), 1,
      sym__isegment,
  [23340] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(901), 1,
      sym__iri_rfc3987,
  [23347] = 1,
    ACTIONS(1698), 2,
      anon_sym_f,
      anon_sym_F,
  [23352] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(895), 1,
      sym__iri_rfc3987,
  [23359] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(912), 1,
      sym__iri_rfc3987,
  [23366] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(914), 1,
      sym__iri_rfc3987,
  [23373] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(896), 1,
      sym__iri_rfc3987,
  [23380] = 2,
    ACTIONS(1656), 1,
      sym__scheme,
    STATE(915), 1,
      sym__iri_rfc3987,
  [23387] = 1,
    ACTIONS(1700), 1,
      anon_sym_SLASH,
  [23391] = 1,
    ACTIONS(1702), 1,
      anon_sym_CARET_CARET,
  [23395] = 1,
    ACTIONS(1704), 1,
      anon_sym_GT,
  [23399] = 1,
    ACTIONS(1706), 1,
      anon_sym_GT,
  [23403] = 1,
    ACTIONS(1708), 1,
      anon_sym_RPAREN,
  [23407] = 1,
    ACTIONS(1708), 1,
      anon_sym_RBRACE,
  [23411] = 1,
    ACTIONS(1710), 1,
      sym__pn_local,
  [23415] = 1,
    ACTIONS(1712), 1,
      anon_sym_CARET_CARET,
  [23419] = 1,
    ACTIONS(1714), 1,
      anon_sym_GT,
  [23423] = 1,
    ACTIONS(1690), 1,
      anon_sym_GT,
  [23427] = 1,
    ACTIONS(1716), 1,
      sym__port,
  [23431] = 1,
    ACTIONS(1718), 1,
      anon_sym_GT,
  [23435] = 1,
    ACTIONS(1720), 1,
      anon_sym_AT,
  [23439] = 1,
    ACTIONS(1686), 1,
      anon_sym_SLASH,
  [23443] = 1,
    ACTIONS(1722), 1,
      anon_sym_CARET_CARET,
  [23447] = 1,
    ACTIONS(1724), 1,
      anon_sym_GT,
  [23451] = 1,
    ACTIONS(1726), 1,
      sym__pn_local,
  [23455] = 1,
    ACTIONS(1728), 1,
      anon_sym_Functional,
  [23459] = 1,
    ACTIONS(1730), 1,
      anon_sym_GT,
  [23463] = 1,
    ACTIONS(1732), 1,
      anon_sym_GT,
  [23467] = 1,
    ACTIONS(1734), 1,
      anon_sym_CARET_CARET,
  [23471] = 1,
    ACTIONS(1736), 1,
      anon_sym_GT,
  [23475] = 1,
    ACTIONS(1738), 1,
      anon_sym_GT,
  [23479] = 1,
    ACTIONS(1740), 1,
      sym_prefix_name,
  [23483] = 1,
    ACTIONS(1742), 1,
      sym__pn_local,
  [23487] = 1,
    ACTIONS(1744), 1,
      anon_sym_RPAREN,
  [23491] = 1,
    ACTIONS(1744), 1,
      anon_sym_RBRACE,
  [23495] = 1,
    ACTIONS(1746), 1,
      anon_sym_GT,
  [23499] = 1,
    ACTIONS(1748), 1,
      anon_sym_CARET_CARET,
  [23503] = 1,
    ACTIONS(1750), 1,
      anon_sym_CARET_CARET,
  [23507] = 1,
    ACTIONS(1752), 1,
      anon_sym_CARET_CARET,
  [23511] = 1,
    ACTIONS(1754), 1,
      sym__pn_local,
  [23515] = 1,
    ACTIONS(1756), 1,
      anon_sym_COMMA,
  [23519] = 1,
    ACTIONS(1758), 1,
      anon_sym_COMMA,
  [23523] = 1,
    ACTIONS(1760), 1,
      anon_sym_COMMA,
  [23527] = 1,
    ACTIONS(1762), 1,
      anon_sym_GT,
  [23531] = 1,
    ACTIONS(1764), 1,
      anon_sym_COMMA,
  [23535] = 1,
    ACTIONS(1766), 1,
      anon_sym_value,
  [23539] = 1,
    ACTIONS(1768), 1,
      sym__pn_local,
  [23543] = 1,
    ACTIONS(1770), 1,
      anon_sym_GT,
  [23547] = 1,
    ACTIONS(1772), 1,
      anon_sym_COLON,
  [23551] = 1,
    ACTIONS(1774), 1,
      sym__pn_local,
  [23555] = 1,
    ACTIONS(1776), 1,
      anon_sym_CARET_CARET,
  [23559] = 1,
    ACTIONS(1778), 1,
      anon_sym_COMMA,
  [23563] = 1,
    ACTIONS(1780), 1,
      ts_builtin_sym_end,
  [23567] = 1,
    ACTIONS(1782), 1,
      sym__port,
  [23571] = 1,
    ACTIONS(1784), 1,
      sym__pn_local,
  [23575] = 1,
    ACTIONS(1786), 1,
      ts_builtin_sym_end,
  [23579] = 1,
    ACTIONS(1788), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 227,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 364,
  [SMALL_STATE(8)] = 417,
  [SMALL_STATE(9)] = 500,
  [SMALL_STATE(10)] = 578,
  [SMALL_STATE(11)] = 629,
  [SMALL_STATE(12)] = 675,
  [SMALL_STATE(13)] = 721,
  [SMALL_STATE(14)] = 774,
  [SMALL_STATE(15)] = 819,
  [SMALL_STATE(16)] = 864,
  [SMALL_STATE(17)] = 909,
  [SMALL_STATE(18)] = 954,
  [SMALL_STATE(19)] = 999,
  [SMALL_STATE(20)] = 1044,
  [SMALL_STATE(21)] = 1089,
  [SMALL_STATE(22)] = 1133,
  [SMALL_STATE(23)] = 1191,
  [SMALL_STATE(24)] = 1239,
  [SMALL_STATE(25)] = 1297,
  [SMALL_STATE(26)] = 1352,
  [SMALL_STATE(27)] = 1407,
  [SMALL_STATE(28)] = 1456,
  [SMALL_STATE(29)] = 1505,
  [SMALL_STATE(30)] = 1554,
  [SMALL_STATE(31)] = 1603,
  [SMALL_STATE(32)] = 1650,
  [SMALL_STATE(33)] = 1697,
  [SMALL_STATE(34)] = 1744,
  [SMALL_STATE(35)] = 1790,
  [SMALL_STATE(36)] = 1836,
  [SMALL_STATE(37)] = 1882,
  [SMALL_STATE(38)] = 1922,
  [SMALL_STATE(39)] = 1962,
  [SMALL_STATE(40)] = 2002,
  [SMALL_STATE(41)] = 2043,
  [SMALL_STATE(42)] = 2082,
  [SMALL_STATE(43)] = 2159,
  [SMALL_STATE(44)] = 2204,
  [SMALL_STATE(45)] = 2249,
  [SMALL_STATE(46)] = 2326,
  [SMALL_STATE(47)] = 2371,
  [SMALL_STATE(48)] = 2410,
  [SMALL_STATE(49)] = 2449,
  [SMALL_STATE(50)] = 2486,
  [SMALL_STATE(51)] = 2536,
  [SMALL_STATE(52)] = 2572,
  [SMALL_STATE(53)] = 2608,
  [SMALL_STATE(54)] = 2644,
  [SMALL_STATE(55)] = 2680,
  [SMALL_STATE(56)] = 2718,
  [SMALL_STATE(57)] = 2754,
  [SMALL_STATE(58)] = 2790,
  [SMALL_STATE(59)] = 2856,
  [SMALL_STATE(60)] = 2892,
  [SMALL_STATE(61)] = 2928,
  [SMALL_STATE(62)] = 2964,
  [SMALL_STATE(63)] = 3000,
  [SMALL_STATE(64)] = 3036,
  [SMALL_STATE(65)] = 3110,
  [SMALL_STATE(66)] = 3146,
  [SMALL_STATE(67)] = 3196,
  [SMALL_STATE(68)] = 3246,
  [SMALL_STATE(69)] = 3281,
  [SMALL_STATE(70)] = 3318,
  [SMALL_STATE(71)] = 3358,
  [SMALL_STATE(72)] = 3398,
  [SMALL_STATE(73)] = 3448,
  [SMALL_STATE(74)] = 3498,
  [SMALL_STATE(75)] = 3538,
  [SMALL_STATE(76)] = 3585,
  [SMALL_STATE(77)] = 3632,
  [SMALL_STATE(78)] = 3665,
  [SMALL_STATE(79)] = 3704,
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
  [SMALL_STATE(99)] = 4687,
  [SMALL_STATE(100)] = 4720,
  [SMALL_STATE(101)] = 4771,
  [SMALL_STATE(102)] = 4822,
  [SMALL_STATE(103)] = 4877,
  [SMALL_STATE(104)] = 4910,
  [SMALL_STATE(105)] = 4965,
  [SMALL_STATE(106)] = 5020,
  [SMALL_STATE(107)] = 5053,
  [SMALL_STATE(108)] = 5086,
  [SMALL_STATE(109)] = 5137,
  [SMALL_STATE(110)] = 5170,
  [SMALL_STATE(111)] = 5213,
  [SMALL_STATE(112)] = 5256,
  [SMALL_STATE(113)] = 5299,
  [SMALL_STATE(114)] = 5332,
  [SMALL_STATE(115)] = 5387,
  [SMALL_STATE(116)] = 5438,
  [SMALL_STATE(117)] = 5489,
  [SMALL_STATE(118)] = 5522,
  [SMALL_STATE(119)] = 5553,
  [SMALL_STATE(120)] = 5608,
  [SMALL_STATE(121)] = 5659,
  [SMALL_STATE(122)] = 5692,
  [SMALL_STATE(123)] = 5743,
  [SMALL_STATE(124)] = 5798,
  [SMALL_STATE(125)] = 5858,
  [SMALL_STATE(126)] = 5918,
  [SMALL_STATE(127)] = 5950,
  [SMALL_STATE(128)] = 6002,
  [SMALL_STATE(129)] = 6062,
  [SMALL_STATE(130)] = 6090,
  [SMALL_STATE(131)] = 6150,
  [SMALL_STATE(132)] = 6210,
  [SMALL_STATE(133)] = 6270,
  [SMALL_STATE(134)] = 6322,
  [SMALL_STATE(135)] = 6354,
  [SMALL_STATE(136)] = 6386,
  [SMALL_STATE(137)] = 6446,
  [SMALL_STATE(138)] = 6498,
  [SMALL_STATE(139)] = 6526,
  [SMALL_STATE(140)] = 6558,
  [SMALL_STATE(141)] = 6610,
  [SMALL_STATE(142)] = 6642,
  [SMALL_STATE(143)] = 6702,
  [SMALL_STATE(144)] = 6734,
  [SMALL_STATE(145)] = 6765,
  [SMALL_STATE(146)] = 6796,
  [SMALL_STATE(147)] = 6827,
  [SMALL_STATE(148)] = 6858,
  [SMALL_STATE(149)] = 6889,
  [SMALL_STATE(150)] = 6946,
  [SMALL_STATE(151)] = 6977,
  [SMALL_STATE(152)] = 7034,
  [SMALL_STATE(153)] = 7063,
  [SMALL_STATE(154)] = 7094,
  [SMALL_STATE(155)] = 7125,
  [SMALL_STATE(156)] = 7154,
  [SMALL_STATE(157)] = 7185,
  [SMALL_STATE(158)] = 7216,
  [SMALL_STATE(159)] = 7247,
  [SMALL_STATE(160)] = 7278,
  [SMALL_STATE(161)] = 7309,
  [SMALL_STATE(162)] = 7340,
  [SMALL_STATE(163)] = 7397,
  [SMALL_STATE(164)] = 7428,
  [SMALL_STATE(165)] = 7459,
  [SMALL_STATE(166)] = 7490,
  [SMALL_STATE(167)] = 7521,
  [SMALL_STATE(168)] = 7552,
  [SMALL_STATE(169)] = 7591,
  [SMALL_STATE(170)] = 7630,
  [SMALL_STATE(171)] = 7661,
  [SMALL_STATE(172)] = 7692,
  [SMALL_STATE(173)] = 7723,
  [SMALL_STATE(174)] = 7754,
  [SMALL_STATE(175)] = 7811,
  [SMALL_STATE(176)] = 7842,
  [SMALL_STATE(177)] = 7869,
  [SMALL_STATE(178)] = 7900,
  [SMALL_STATE(179)] = 7957,
  [SMALL_STATE(180)] = 7988,
  [SMALL_STATE(181)] = 8019,
  [SMALL_STATE(182)] = 8050,
  [SMALL_STATE(183)] = 8081,
  [SMALL_STATE(184)] = 8120,
  [SMALL_STATE(185)] = 8151,
  [SMALL_STATE(186)] = 8182,
  [SMALL_STATE(187)] = 8210,
  [SMALL_STATE(188)] = 8240,
  [SMALL_STATE(189)] = 8266,
  [SMALL_STATE(190)] = 8292,
  [SMALL_STATE(191)] = 8322,
  [SMALL_STATE(192)] = 8348,
  [SMALL_STATE(193)] = 8402,
  [SMALL_STATE(194)] = 8428,
  [SMALL_STATE(195)] = 8456,
  [SMALL_STATE(196)] = 8484,
  [SMALL_STATE(197)] = 8514,
  [SMALL_STATE(198)] = 8540,
  [SMALL_STATE(199)] = 8566,
  [SMALL_STATE(200)] = 8596,
  [SMALL_STATE(201)] = 8626,
  [SMALL_STATE(202)] = 8656,
  [SMALL_STATE(203)] = 8684,
  [SMALL_STATE(204)] = 8738,
  [SMALL_STATE(205)] = 8792,
  [SMALL_STATE(206)] = 8822,
  [SMALL_STATE(207)] = 8850,
  [SMALL_STATE(208)] = 8876,
  [SMALL_STATE(209)] = 8906,
  [SMALL_STATE(210)] = 8932,
  [SMALL_STATE(211)] = 8960,
  [SMALL_STATE(212)] = 8990,
  [SMALL_STATE(213)] = 9020,
  [SMALL_STATE(214)] = 9046,
  [SMALL_STATE(215)] = 9076,
  [SMALL_STATE(216)] = 9130,
  [SMALL_STATE(217)] = 9159,
  [SMALL_STATE(218)] = 9188,
  [SMALL_STATE(219)] = 9217,
  [SMALL_STATE(220)] = 9262,
  [SMALL_STATE(221)] = 9289,
  [SMALL_STATE(222)] = 9340,
  [SMALL_STATE(223)] = 9369,
  [SMALL_STATE(224)] = 9398,
  [SMALL_STATE(225)] = 9449,
  [SMALL_STATE(226)] = 9500,
  [SMALL_STATE(227)] = 9551,
  [SMALL_STATE(228)] = 9580,
  [SMALL_STATE(229)] = 9625,
  [SMALL_STATE(230)] = 9654,
  [SMALL_STATE(231)] = 9683,
  [SMALL_STATE(232)] = 9712,
  [SMALL_STATE(233)] = 9757,
  [SMALL_STATE(234)] = 9786,
  [SMALL_STATE(235)] = 9823,
  [SMALL_STATE(236)] = 9868,
  [SMALL_STATE(237)] = 9919,
  [SMALL_STATE(238)] = 9948,
  [SMALL_STATE(239)] = 9973,
  [SMALL_STATE(240)] = 10024,
  [SMALL_STATE(241)] = 10075,
  [SMALL_STATE(242)] = 10104,
  [SMALL_STATE(243)] = 10133,
  [SMALL_STATE(244)] = 10184,
  [SMALL_STATE(245)] = 10213,
  [SMALL_STATE(246)] = 10264,
  [SMALL_STATE(247)] = 10293,
  [SMALL_STATE(248)] = 10322,
  [SMALL_STATE(249)] = 10351,
  [SMALL_STATE(250)] = 10402,
  [SMALL_STATE(251)] = 10439,
  [SMALL_STATE(252)] = 10468,
  [SMALL_STATE(253)] = 10519,
  [SMALL_STATE(254)] = 10548,
  [SMALL_STATE(255)] = 10593,
  [SMALL_STATE(256)] = 10630,
  [SMALL_STATE(257)] = 10659,
  [SMALL_STATE(258)] = 10688,
  [SMALL_STATE(259)] = 10717,
  [SMALL_STATE(260)] = 10762,
  [SMALL_STATE(261)] = 10791,
  [SMALL_STATE(262)] = 10820,
  [SMALL_STATE(263)] = 10849,
  [SMALL_STATE(264)] = 10878,
  [SMALL_STATE(265)] = 10929,
  [SMALL_STATE(266)] = 10980,
  [SMALL_STATE(267)] = 11004,
  [SMALL_STATE(268)] = 11032,
  [SMALL_STATE(269)] = 11060,
  [SMALL_STATE(270)] = 11108,
  [SMALL_STATE(271)] = 11156,
  [SMALL_STATE(272)] = 11184,
  [SMALL_STATE(273)] = 11212,
  [SMALL_STATE(274)] = 11240,
  [SMALL_STATE(275)] = 11288,
  [SMALL_STATE(276)] = 11326,
  [SMALL_STATE(277)] = 11354,
  [SMALL_STATE(278)] = 11380,
  [SMALL_STATE(279)] = 11408,
  [SMALL_STATE(280)] = 11434,
  [SMALL_STATE(281)] = 11462,
  [SMALL_STATE(282)] = 11488,
  [SMALL_STATE(283)] = 11536,
  [SMALL_STATE(284)] = 11560,
  [SMALL_STATE(285)] = 11584,
  [SMALL_STATE(286)] = 11608,
  [SMALL_STATE(287)] = 11656,
  [SMALL_STATE(288)] = 11680,
  [SMALL_STATE(289)] = 11728,
  [SMALL_STATE(290)] = 11776,
  [SMALL_STATE(291)] = 11824,
  [SMALL_STATE(292)] = 11872,
  [SMALL_STATE(293)] = 11910,
  [SMALL_STATE(294)] = 11938,
  [SMALL_STATE(295)] = 11986,
  [SMALL_STATE(296)] = 12014,
  [SMALL_STATE(297)] = 12042,
  [SMALL_STATE(298)] = 12069,
  [SMALL_STATE(299)] = 12102,
  [SMALL_STATE(300)] = 12129,
  [SMALL_STATE(301)] = 12172,
  [SMALL_STATE(302)] = 12199,
  [SMALL_STATE(303)] = 12242,
  [SMALL_STATE(304)] = 12269,
  [SMALL_STATE(305)] = 12292,
  [SMALL_STATE(306)] = 12319,
  [SMALL_STATE(307)] = 12346,
  [SMALL_STATE(308)] = 12373,
  [SMALL_STATE(309)] = 12400,
  [SMALL_STATE(310)] = 12427,
  [SMALL_STATE(311)] = 12450,
  [SMALL_STATE(312)] = 12493,
  [SMALL_STATE(313)] = 12536,
  [SMALL_STATE(314)] = 12579,
  [SMALL_STATE(315)] = 12606,
  [SMALL_STATE(316)] = 12633,
  [SMALL_STATE(317)] = 12660,
  [SMALL_STATE(318)] = 12705,
  [SMALL_STATE(319)] = 12738,
  [SMALL_STATE(320)] = 12765,
  [SMALL_STATE(321)] = 12792,
  [SMALL_STATE(322)] = 12819,
  [SMALL_STATE(323)] = 12842,
  [SMALL_STATE(324)] = 12869,
  [SMALL_STATE(325)] = 12902,
  [SMALL_STATE(326)] = 12931,
  [SMALL_STATE(327)] = 12966,
  [SMALL_STATE(328)] = 12993,
  [SMALL_STATE(329)] = 13020,
  [SMALL_STATE(330)] = 13047,
  [SMALL_STATE(331)] = 13074,
  [SMALL_STATE(332)] = 13117,
  [SMALL_STATE(333)] = 13152,
  [SMALL_STATE(334)] = 13178,
  [SMALL_STATE(335)] = 13208,
  [SMALL_STATE(336)] = 13236,
  [SMALL_STATE(337)] = 13264,
  [SMALL_STATE(338)] = 13286,
  [SMALL_STATE(339)] = 13312,
  [SMALL_STATE(340)] = 13342,
  [SMALL_STATE(341)] = 13364,
  [SMALL_STATE(342)] = 13390,
  [SMALL_STATE(343)] = 13416,
  [SMALL_STATE(344)] = 13438,
  [SMALL_STATE(345)] = 13460,
  [SMALL_STATE(346)] = 13486,
  [SMALL_STATE(347)] = 13508,
  [SMALL_STATE(348)] = 13530,
  [SMALL_STATE(349)] = 13556,
  [SMALL_STATE(350)] = 13586,
  [SMALL_STATE(351)] = 13608,
  [SMALL_STATE(352)] = 13630,
  [SMALL_STATE(353)] = 13652,
  [SMALL_STATE(354)] = 13674,
  [SMALL_STATE(355)] = 13696,
  [SMALL_STATE(356)] = 13738,
  [SMALL_STATE(357)] = 13760,
  [SMALL_STATE(358)] = 13782,
  [SMALL_STATE(359)] = 13808,
  [SMALL_STATE(360)] = 13834,
  [SMALL_STATE(361)] = 13862,
  [SMALL_STATE(362)] = 13890,
  [SMALL_STATE(363)] = 13916,
  [SMALL_STATE(364)] = 13942,
  [SMALL_STATE(365)] = 13981,
  [SMALL_STATE(366)] = 14002,
  [SMALL_STATE(367)] = 14041,
  [SMALL_STATE(368)] = 14062,
  [SMALL_STATE(369)] = 14085,
  [SMALL_STATE(370)] = 14120,
  [SMALL_STATE(371)] = 14149,
  [SMALL_STATE(372)] = 14184,
  [SMALL_STATE(373)] = 14205,
  [SMALL_STATE(374)] = 14226,
  [SMALL_STATE(375)] = 14247,
  [SMALL_STATE(376)] = 14276,
  [SMALL_STATE(377)] = 14297,
  [SMALL_STATE(378)] = 14336,
  [SMALL_STATE(379)] = 14371,
  [SMALL_STATE(380)] = 14410,
  [SMALL_STATE(381)] = 14449,
  [SMALL_STATE(382)] = 14484,
  [SMALL_STATE(383)] = 14523,
  [SMALL_STATE(384)] = 14543,
  [SMALL_STATE(385)] = 14575,
  [SMALL_STATE(386)] = 14607,
  [SMALL_STATE(387)] = 14631,
  [SMALL_STATE(388)] = 14669,
  [SMALL_STATE(389)] = 14693,
  [SMALL_STATE(390)] = 14731,
  [SMALL_STATE(391)] = 14765,
  [SMALL_STATE(392)] = 14789,
  [SMALL_STATE(393)] = 14821,
  [SMALL_STATE(394)] = 14845,
  [SMALL_STATE(395)] = 14871,
  [SMALL_STATE(396)] = 14897,
  [SMALL_STATE(397)] = 14929,
  [SMALL_STATE(398)] = 14953,
  [SMALL_STATE(399)] = 14977,
  [SMALL_STATE(400)] = 15009,
  [SMALL_STATE(401)] = 15033,
  [SMALL_STATE(402)] = 15057,
  [SMALL_STATE(403)] = 15079,
  [SMALL_STATE(404)] = 15111,
  [SMALL_STATE(405)] = 15135,
  [SMALL_STATE(406)] = 15161,
  [SMALL_STATE(407)] = 15185,
  [SMALL_STATE(408)] = 15216,
  [SMALL_STATE(409)] = 15241,
  [SMALL_STATE(410)] = 15272,
  [SMALL_STATE(411)] = 15295,
  [SMALL_STATE(412)] = 15326,
  [SMALL_STATE(413)] = 15349,
  [SMALL_STATE(414)] = 15372,
  [SMALL_STATE(415)] = 15411,
  [SMALL_STATE(416)] = 15442,
  [SMALL_STATE(417)] = 15475,
  [SMALL_STATE(418)] = 15498,
  [SMALL_STATE(419)] = 15521,
  [SMALL_STATE(420)] = 15544,
  [SMALL_STATE(421)] = 15567,
  [SMALL_STATE(422)] = 15589,
  [SMALL_STATE(423)] = 15623,
  [SMALL_STATE(424)] = 15655,
  [SMALL_STATE(425)] = 15689,
  [SMALL_STATE(426)] = 15723,
  [SMALL_STATE(427)] = 15755,
  [SMALL_STATE(428)] = 15789,
  [SMALL_STATE(429)] = 15807,
  [SMALL_STATE(430)] = 15841,
  [SMALL_STATE(431)] = 15875,
  [SMALL_STATE(432)] = 15893,
  [SMALL_STATE(433)] = 15925,
  [SMALL_STATE(434)] = 15957,
  [SMALL_STATE(435)] = 15979,
  [SMALL_STATE(436)] = 16001,
  [SMALL_STATE(437)] = 16033,
  [SMALL_STATE(438)] = 16055,
  [SMALL_STATE(439)] = 16077,
  [SMALL_STATE(440)] = 16099,
  [SMALL_STATE(441)] = 16121,
  [SMALL_STATE(442)] = 16155,
  [SMALL_STATE(443)] = 16187,
  [SMALL_STATE(444)] = 16209,
  [SMALL_STATE(445)] = 16231,
  [SMALL_STATE(446)] = 16265,
  [SMALL_STATE(447)] = 16299,
  [SMALL_STATE(448)] = 16319,
  [SMALL_STATE(449)] = 16353,
  [SMALL_STATE(450)] = 16387,
  [SMALL_STATE(451)] = 16409,
  [SMALL_STATE(452)] = 16445,
  [SMALL_STATE(453)] = 16467,
  [SMALL_STATE(454)] = 16499,
  [SMALL_STATE(455)] = 16517,
  [SMALL_STATE(456)] = 16539,
  [SMALL_STATE(457)] = 16573,
  [SMALL_STATE(458)] = 16596,
  [SMALL_STATE(459)] = 16627,
  [SMALL_STATE(460)] = 16656,
  [SMALL_STATE(461)] = 16687,
  [SMALL_STATE(462)] = 16710,
  [SMALL_STATE(463)] = 16741,
  [SMALL_STATE(464)] = 16768,
  [SMALL_STATE(465)] = 16799,
  [SMALL_STATE(466)] = 16832,
  [SMALL_STATE(467)] = 16861,
  [SMALL_STATE(468)] = 16890,
  [SMALL_STATE(469)] = 16921,
  [SMALL_STATE(470)] = 16952,
  [SMALL_STATE(471)] = 16985,
  [SMALL_STATE(472)] = 17016,
  [SMALL_STATE(473)] = 17047,
  [SMALL_STATE(474)] = 17078,
  [SMALL_STATE(475)] = 17095,
  [SMALL_STATE(476)] = 17112,
  [SMALL_STATE(477)] = 17143,
  [SMALL_STATE(478)] = 17172,
  [SMALL_STATE(479)] = 17201,
  [SMALL_STATE(480)] = 17218,
  [SMALL_STATE(481)] = 17249,
  [SMALL_STATE(482)] = 17280,
  [SMALL_STATE(483)] = 17309,
  [SMALL_STATE(484)] = 17340,
  [SMALL_STATE(485)] = 17363,
  [SMALL_STATE(486)] = 17380,
  [SMALL_STATE(487)] = 17413,
  [SMALL_STATE(488)] = 17444,
  [SMALL_STATE(489)] = 17472,
  [SMALL_STATE(490)] = 17488,
  [SMALL_STATE(491)] = 17504,
  [SMALL_STATE(492)] = 17532,
  [SMALL_STATE(493)] = 17560,
  [SMALL_STATE(494)] = 17582,
  [SMALL_STATE(495)] = 17604,
  [SMALL_STATE(496)] = 17632,
  [SMALL_STATE(497)] = 17660,
  [SMALL_STATE(498)] = 17688,
  [SMALL_STATE(499)] = 17716,
  [SMALL_STATE(500)] = 17746,
  [SMALL_STATE(501)] = 17776,
  [SMALL_STATE(502)] = 17806,
  [SMALL_STATE(503)] = 17834,
  [SMALL_STATE(504)] = 17864,
  [SMALL_STATE(505)] = 17894,
  [SMALL_STATE(506)] = 17922,
  [SMALL_STATE(507)] = 17950,
  [SMALL_STATE(508)] = 17972,
  [SMALL_STATE(509)] = 18000,
  [SMALL_STATE(510)] = 18022,
  [SMALL_STATE(511)] = 18044,
  [SMALL_STATE(512)] = 18065,
  [SMALL_STATE(513)] = 18092,
  [SMALL_STATE(514)] = 18123,
  [SMALL_STATE(515)] = 18154,
  [SMALL_STATE(516)] = 18175,
  [SMALL_STATE(517)] = 18206,
  [SMALL_STATE(518)] = 18237,
  [SMALL_STATE(519)] = 18258,
  [SMALL_STATE(520)] = 18287,
  [SMALL_STATE(521)] = 18308,
  [SMALL_STATE(522)] = 18329,
  [SMALL_STATE(523)] = 18360,
  [SMALL_STATE(524)] = 18391,
  [SMALL_STATE(525)] = 18412,
  [SMALL_STATE(526)] = 18443,
  [SMALL_STATE(527)] = 18474,
  [SMALL_STATE(528)] = 18505,
  [SMALL_STATE(529)] = 18532,
  [SMALL_STATE(530)] = 18556,
  [SMALL_STATE(531)] = 18584,
  [SMALL_STATE(532)] = 18600,
  [SMALL_STATE(533)] = 18616,
  [SMALL_STATE(534)] = 18632,
  [SMALL_STATE(535)] = 18656,
  [SMALL_STATE(536)] = 18680,
  [SMALL_STATE(537)] = 18704,
  [SMALL_STATE(538)] = 18728,
  [SMALL_STATE(539)] = 18744,
  [SMALL_STATE(540)] = 18760,
  [SMALL_STATE(541)] = 18784,
  [SMALL_STATE(542)] = 18812,
  [SMALL_STATE(543)] = 18836,
  [SMALL_STATE(544)] = 18852,
  [SMALL_STATE(545)] = 18880,
  [SMALL_STATE(546)] = 18904,
  [SMALL_STATE(547)] = 18930,
  [SMALL_STATE(548)] = 18954,
  [SMALL_STATE(549)] = 18970,
  [SMALL_STATE(550)] = 18998,
  [SMALL_STATE(551)] = 19014,
  [SMALL_STATE(552)] = 19042,
  [SMALL_STATE(553)] = 19066,
  [SMALL_STATE(554)] = 19094,
  [SMALL_STATE(555)] = 19122,
  [SMALL_STATE(556)] = 19146,
  [SMALL_STATE(557)] = 19162,
  [SMALL_STATE(558)] = 19190,
  [SMALL_STATE(559)] = 19206,
  [SMALL_STATE(560)] = 19222,
  [SMALL_STATE(561)] = 19250,
  [SMALL_STATE(562)] = 19278,
  [SMALL_STATE(563)] = 19294,
  [SMALL_STATE(564)] = 19316,
  [SMALL_STATE(565)] = 19332,
  [SMALL_STATE(566)] = 19358,
  [SMALL_STATE(567)] = 19382,
  [SMALL_STATE(568)] = 19398,
  [SMALL_STATE(569)] = 19422,
  [SMALL_STATE(570)] = 19438,
  [SMALL_STATE(571)] = 19454,
  [SMALL_STATE(572)] = 19478,
  [SMALL_STATE(573)] = 19503,
  [SMALL_STATE(574)] = 19522,
  [SMALL_STATE(575)] = 19547,
  [SMALL_STATE(576)] = 19562,
  [SMALL_STATE(577)] = 19579,
  [SMALL_STATE(578)] = 19594,
  [SMALL_STATE(579)] = 19613,
  [SMALL_STATE(580)] = 19632,
  [SMALL_STATE(581)] = 19647,
  [SMALL_STATE(582)] = 19662,
  [SMALL_STATE(583)] = 19677,
  [SMALL_STATE(584)] = 19694,
  [SMALL_STATE(585)] = 19714,
  [SMALL_STATE(586)] = 19736,
  [SMALL_STATE(587)] = 19756,
  [SMALL_STATE(588)] = 19772,
  [SMALL_STATE(589)] = 19794,
  [SMALL_STATE(590)] = 19816,
  [SMALL_STATE(591)] = 19836,
  [SMALL_STATE(592)] = 19854,
  [SMALL_STATE(593)] = 19876,
  [SMALL_STATE(594)] = 19896,
  [SMALL_STATE(595)] = 19918,
  [SMALL_STATE(596)] = 19936,
  [SMALL_STATE(597)] = 19958,
  [SMALL_STATE(598)] = 19978,
  [SMALL_STATE(599)] = 19998,
  [SMALL_STATE(600)] = 20020,
  [SMALL_STATE(601)] = 20042,
  [SMALL_STATE(602)] = 20062,
  [SMALL_STATE(603)] = 20084,
  [SMALL_STATE(604)] = 20104,
  [SMALL_STATE(605)] = 20126,
  [SMALL_STATE(606)] = 20148,
  [SMALL_STATE(607)] = 20166,
  [SMALL_STATE(608)] = 20184,
  [SMALL_STATE(609)] = 20206,
  [SMALL_STATE(610)] = 20226,
  [SMALL_STATE(611)] = 20246,
  [SMALL_STATE(612)] = 20262,
  [SMALL_STATE(613)] = 20284,
  [SMALL_STATE(614)] = 20306,
  [SMALL_STATE(615)] = 20326,
  [SMALL_STATE(616)] = 20346,
  [SMALL_STATE(617)] = 20366,
  [SMALL_STATE(618)] = 20384,
  [SMALL_STATE(619)] = 20400,
  [SMALL_STATE(620)] = 20420,
  [SMALL_STATE(621)] = 20442,
  [SMALL_STATE(622)] = 20462,
  [SMALL_STATE(623)] = 20482,
  [SMALL_STATE(624)] = 20504,
  [SMALL_STATE(625)] = 20526,
  [SMALL_STATE(626)] = 20548,
  [SMALL_STATE(627)] = 20564,
  [SMALL_STATE(628)] = 20584,
  [SMALL_STATE(629)] = 20606,
  [SMALL_STATE(630)] = 20626,
  [SMALL_STATE(631)] = 20642,
  [SMALL_STATE(632)] = 20661,
  [SMALL_STATE(633)] = 20680,
  [SMALL_STATE(634)] = 20693,
  [SMALL_STATE(635)] = 20712,
  [SMALL_STATE(636)] = 20725,
  [SMALL_STATE(637)] = 20744,
  [SMALL_STATE(638)] = 20757,
  [SMALL_STATE(639)] = 20770,
  [SMALL_STATE(640)] = 20783,
  [SMALL_STATE(641)] = 20796,
  [SMALL_STATE(642)] = 20809,
  [SMALL_STATE(643)] = 20822,
  [SMALL_STATE(644)] = 20835,
  [SMALL_STATE(645)] = 20848,
  [SMALL_STATE(646)] = 20867,
  [SMALL_STATE(647)] = 20880,
  [SMALL_STATE(648)] = 20893,
  [SMALL_STATE(649)] = 20912,
  [SMALL_STATE(650)] = 20925,
  [SMALL_STATE(651)] = 20938,
  [SMALL_STATE(652)] = 20951,
  [SMALL_STATE(653)] = 20970,
  [SMALL_STATE(654)] = 20989,
  [SMALL_STATE(655)] = 21002,
  [SMALL_STATE(656)] = 21015,
  [SMALL_STATE(657)] = 21028,
  [SMALL_STATE(658)] = 21047,
  [SMALL_STATE(659)] = 21066,
  [SMALL_STATE(660)] = 21078,
  [SMALL_STATE(661)] = 21094,
  [SMALL_STATE(662)] = 21110,
  [SMALL_STATE(663)] = 21126,
  [SMALL_STATE(664)] = 21142,
  [SMALL_STATE(665)] = 21158,
  [SMALL_STATE(666)] = 21174,
  [SMALL_STATE(667)] = 21190,
  [SMALL_STATE(668)] = 21206,
  [SMALL_STATE(669)] = 21222,
  [SMALL_STATE(670)] = 21238,
  [SMALL_STATE(671)] = 21254,
  [SMALL_STATE(672)] = 21270,
  [SMALL_STATE(673)] = 21282,
  [SMALL_STATE(674)] = 21297,
  [SMALL_STATE(675)] = 21312,
  [SMALL_STATE(676)] = 21327,
  [SMALL_STATE(677)] = 21342,
  [SMALL_STATE(678)] = 21357,
  [SMALL_STATE(679)] = 21370,
  [SMALL_STATE(680)] = 21385,
  [SMALL_STATE(681)] = 21400,
  [SMALL_STATE(682)] = 21415,
  [SMALL_STATE(683)] = 21430,
  [SMALL_STATE(684)] = 21443,
  [SMALL_STATE(685)] = 21458,
  [SMALL_STATE(686)] = 21473,
  [SMALL_STATE(687)] = 21488,
  [SMALL_STATE(688)] = 21503,
  [SMALL_STATE(689)] = 21518,
  [SMALL_STATE(690)] = 21531,
  [SMALL_STATE(691)] = 21546,
  [SMALL_STATE(692)] = 21561,
  [SMALL_STATE(693)] = 21571,
  [SMALL_STATE(694)] = 21581,
  [SMALL_STATE(695)] = 21591,
  [SMALL_STATE(696)] = 21601,
  [SMALL_STATE(697)] = 21611,
  [SMALL_STATE(698)] = 21621,
  [SMALL_STATE(699)] = 21631,
  [SMALL_STATE(700)] = 21641,
  [SMALL_STATE(701)] = 21651,
  [SMALL_STATE(702)] = 21661,
  [SMALL_STATE(703)] = 21673,
  [SMALL_STATE(704)] = 21685,
  [SMALL_STATE(705)] = 21695,
  [SMALL_STATE(706)] = 21705,
  [SMALL_STATE(707)] = 21715,
  [SMALL_STATE(708)] = 21725,
  [SMALL_STATE(709)] = 21739,
  [SMALL_STATE(710)] = 21749,
  [SMALL_STATE(711)] = 21761,
  [SMALL_STATE(712)] = 21771,
  [SMALL_STATE(713)] = 21785,
  [SMALL_STATE(714)] = 21795,
  [SMALL_STATE(715)] = 21805,
  [SMALL_STATE(716)] = 21815,
  [SMALL_STATE(717)] = 21825,
  [SMALL_STATE(718)] = 21835,
  [SMALL_STATE(719)] = 21845,
  [SMALL_STATE(720)] = 21857,
  [SMALL_STATE(721)] = 21867,
  [SMALL_STATE(722)] = 21879,
  [SMALL_STATE(723)] = 21889,
  [SMALL_STATE(724)] = 21901,
  [SMALL_STATE(725)] = 21911,
  [SMALL_STATE(726)] = 21921,
  [SMALL_STATE(727)] = 21931,
  [SMALL_STATE(728)] = 21943,
  [SMALL_STATE(729)] = 21953,
  [SMALL_STATE(730)] = 21965,
  [SMALL_STATE(731)] = 21977,
  [SMALL_STATE(732)] = 21987,
  [SMALL_STATE(733)] = 21997,
  [SMALL_STATE(734)] = 22009,
  [SMALL_STATE(735)] = 22019,
  [SMALL_STATE(736)] = 22029,
  [SMALL_STATE(737)] = 22039,
  [SMALL_STATE(738)] = 22051,
  [SMALL_STATE(739)] = 22061,
  [SMALL_STATE(740)] = 22073,
  [SMALL_STATE(741)] = 22083,
  [SMALL_STATE(742)] = 22093,
  [SMALL_STATE(743)] = 22103,
  [SMALL_STATE(744)] = 22113,
  [SMALL_STATE(745)] = 22123,
  [SMALL_STATE(746)] = 22133,
  [SMALL_STATE(747)] = 22145,
  [SMALL_STATE(748)] = 22155,
  [SMALL_STATE(749)] = 22165,
  [SMALL_STATE(750)] = 22177,
  [SMALL_STATE(751)] = 22187,
  [SMALL_STATE(752)] = 22197,
  [SMALL_STATE(753)] = 22207,
  [SMALL_STATE(754)] = 22219,
  [SMALL_STATE(755)] = 22231,
  [SMALL_STATE(756)] = 22245,
  [SMALL_STATE(757)] = 22255,
  [SMALL_STATE(758)] = 22265,
  [SMALL_STATE(759)] = 22275,
  [SMALL_STATE(760)] = 22287,
  [SMALL_STATE(761)] = 22297,
  [SMALL_STATE(762)] = 22309,
  [SMALL_STATE(763)] = 22323,
  [SMALL_STATE(764)] = 22337,
  [SMALL_STATE(765)] = 22349,
  [SMALL_STATE(766)] = 22363,
  [SMALL_STATE(767)] = 22372,
  [SMALL_STATE(768)] = 22381,
  [SMALL_STATE(769)] = 22392,
  [SMALL_STATE(770)] = 22403,
  [SMALL_STATE(771)] = 22412,
  [SMALL_STATE(772)] = 22421,
  [SMALL_STATE(773)] = 22430,
  [SMALL_STATE(774)] = 22439,
  [SMALL_STATE(775)] = 22452,
  [SMALL_STATE(776)] = 22465,
  [SMALL_STATE(777)] = 22474,
  [SMALL_STATE(778)] = 22483,
  [SMALL_STATE(779)] = 22492,
  [SMALL_STATE(780)] = 22501,
  [SMALL_STATE(781)] = 22510,
  [SMALL_STATE(782)] = 22519,
  [SMALL_STATE(783)] = 22528,
  [SMALL_STATE(784)] = 22539,
  [SMALL_STATE(785)] = 22548,
  [SMALL_STATE(786)] = 22557,
  [SMALL_STATE(787)] = 22566,
  [SMALL_STATE(788)] = 22575,
  [SMALL_STATE(789)] = 22588,
  [SMALL_STATE(790)] = 22597,
  [SMALL_STATE(791)] = 22608,
  [SMALL_STATE(792)] = 22617,
  [SMALL_STATE(793)] = 22626,
  [SMALL_STATE(794)] = 22635,
  [SMALL_STATE(795)] = 22644,
  [SMALL_STATE(796)] = 22653,
  [SMALL_STATE(797)] = 22662,
  [SMALL_STATE(798)] = 22671,
  [SMALL_STATE(799)] = 22678,
  [SMALL_STATE(800)] = 22687,
  [SMALL_STATE(801)] = 22700,
  [SMALL_STATE(802)] = 22709,
  [SMALL_STATE(803)] = 22722,
  [SMALL_STATE(804)] = 22731,
  [SMALL_STATE(805)] = 22740,
  [SMALL_STATE(806)] = 22749,
  [SMALL_STATE(807)] = 22758,
  [SMALL_STATE(808)] = 22767,
  [SMALL_STATE(809)] = 22776,
  [SMALL_STATE(810)] = 22785,
  [SMALL_STATE(811)] = 22794,
  [SMALL_STATE(812)] = 22803,
  [SMALL_STATE(813)] = 22812,
  [SMALL_STATE(814)] = 22825,
  [SMALL_STATE(815)] = 22834,
  [SMALL_STATE(816)] = 22843,
  [SMALL_STATE(817)] = 22852,
  [SMALL_STATE(818)] = 22861,
  [SMALL_STATE(819)] = 22870,
  [SMALL_STATE(820)] = 22879,
  [SMALL_STATE(821)] = 22888,
  [SMALL_STATE(822)] = 22897,
  [SMALL_STATE(823)] = 22906,
  [SMALL_STATE(824)] = 22919,
  [SMALL_STATE(825)] = 22928,
  [SMALL_STATE(826)] = 22937,
  [SMALL_STATE(827)] = 22946,
  [SMALL_STATE(828)] = 22955,
  [SMALL_STATE(829)] = 22964,
  [SMALL_STATE(830)] = 22973,
  [SMALL_STATE(831)] = 22981,
  [SMALL_STATE(832)] = 22991,
  [SMALL_STATE(833)] = 23001,
  [SMALL_STATE(834)] = 23011,
  [SMALL_STATE(835)] = 23021,
  [SMALL_STATE(836)] = 23031,
  [SMALL_STATE(837)] = 23041,
  [SMALL_STATE(838)] = 23051,
  [SMALL_STATE(839)] = 23059,
  [SMALL_STATE(840)] = 23069,
  [SMALL_STATE(841)] = 23079,
  [SMALL_STATE(842)] = 23089,
  [SMALL_STATE(843)] = 23099,
  [SMALL_STATE(844)] = 23104,
  [SMALL_STATE(845)] = 23109,
  [SMALL_STATE(846)] = 23114,
  [SMALL_STATE(847)] = 23119,
  [SMALL_STATE(848)] = 23124,
  [SMALL_STATE(849)] = 23131,
  [SMALL_STATE(850)] = 23138,
  [SMALL_STATE(851)] = 23143,
  [SMALL_STATE(852)] = 23150,
  [SMALL_STATE(853)] = 23155,
  [SMALL_STATE(854)] = 23162,
  [SMALL_STATE(855)] = 23169,
  [SMALL_STATE(856)] = 23174,
  [SMALL_STATE(857)] = 23179,
  [SMALL_STATE(858)] = 23184,
  [SMALL_STATE(859)] = 23189,
  [SMALL_STATE(860)] = 23194,
  [SMALL_STATE(861)] = 23199,
  [SMALL_STATE(862)] = 23204,
  [SMALL_STATE(863)] = 23209,
  [SMALL_STATE(864)] = 23214,
  [SMALL_STATE(865)] = 23219,
  [SMALL_STATE(866)] = 23224,
  [SMALL_STATE(867)] = 23229,
  [SMALL_STATE(868)] = 23236,
  [SMALL_STATE(869)] = 23243,
  [SMALL_STATE(870)] = 23248,
  [SMALL_STATE(871)] = 23253,
  [SMALL_STATE(872)] = 23258,
  [SMALL_STATE(873)] = 23263,
  [SMALL_STATE(874)] = 23270,
  [SMALL_STATE(875)] = 23275,
  [SMALL_STATE(876)] = 23280,
  [SMALL_STATE(877)] = 23285,
  [SMALL_STATE(878)] = 23292,
  [SMALL_STATE(879)] = 23299,
  [SMALL_STATE(880)] = 23304,
  [SMALL_STATE(881)] = 23309,
  [SMALL_STATE(882)] = 23314,
  [SMALL_STATE(883)] = 23321,
  [SMALL_STATE(884)] = 23326,
  [SMALL_STATE(885)] = 23333,
  [SMALL_STATE(886)] = 23340,
  [SMALL_STATE(887)] = 23347,
  [SMALL_STATE(888)] = 23352,
  [SMALL_STATE(889)] = 23359,
  [SMALL_STATE(890)] = 23366,
  [SMALL_STATE(891)] = 23373,
  [SMALL_STATE(892)] = 23380,
  [SMALL_STATE(893)] = 23387,
  [SMALL_STATE(894)] = 23391,
  [SMALL_STATE(895)] = 23395,
  [SMALL_STATE(896)] = 23399,
  [SMALL_STATE(897)] = 23403,
  [SMALL_STATE(898)] = 23407,
  [SMALL_STATE(899)] = 23411,
  [SMALL_STATE(900)] = 23415,
  [SMALL_STATE(901)] = 23419,
  [SMALL_STATE(902)] = 23423,
  [SMALL_STATE(903)] = 23427,
  [SMALL_STATE(904)] = 23431,
  [SMALL_STATE(905)] = 23435,
  [SMALL_STATE(906)] = 23439,
  [SMALL_STATE(907)] = 23443,
  [SMALL_STATE(908)] = 23447,
  [SMALL_STATE(909)] = 23451,
  [SMALL_STATE(910)] = 23455,
  [SMALL_STATE(911)] = 23459,
  [SMALL_STATE(912)] = 23463,
  [SMALL_STATE(913)] = 23467,
  [SMALL_STATE(914)] = 23471,
  [SMALL_STATE(915)] = 23475,
  [SMALL_STATE(916)] = 23479,
  [SMALL_STATE(917)] = 23483,
  [SMALL_STATE(918)] = 23487,
  [SMALL_STATE(919)] = 23491,
  [SMALL_STATE(920)] = 23495,
  [SMALL_STATE(921)] = 23499,
  [SMALL_STATE(922)] = 23503,
  [SMALL_STATE(923)] = 23507,
  [SMALL_STATE(924)] = 23511,
  [SMALL_STATE(925)] = 23515,
  [SMALL_STATE(926)] = 23519,
  [SMALL_STATE(927)] = 23523,
  [SMALL_STATE(928)] = 23527,
  [SMALL_STATE(929)] = 23531,
  [SMALL_STATE(930)] = 23535,
  [SMALL_STATE(931)] = 23539,
  [SMALL_STATE(932)] = 23543,
  [SMALL_STATE(933)] = 23547,
  [SMALL_STATE(934)] = 23551,
  [SMALL_STATE(935)] = 23555,
  [SMALL_STATE(936)] = 23559,
  [SMALL_STATE(937)] = 23563,
  [SMALL_STATE(938)] = 23567,
  [SMALL_STATE(939)] = 23571,
  [SMALL_STATE(940)] = 23575,
  [SMALL_STATE(941)] = 23579,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_no_language, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_iri, 1),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype_iri, 1), REDUCE(sym_class_iri, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_iri, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_iri, 1),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_data_property_iri, 1), REDUCE(sym_object_property_iri, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_literal, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_with_language, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(29),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(31),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(36),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotations, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_iri, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_primary, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(867),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(653),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(202),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_repeat1, 2), SHIFT_REPEAT(195),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(71),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(78),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 3),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(560),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(939),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(313),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(525),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(124),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(142),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(131),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(130),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(416),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(448),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inverse_object_property, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2), SHIFT_REPEAT(355),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_iri, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 2),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(290),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(174),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_data_property_iri, 1), REDUCE(sym_object_property_iri, 1),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(302),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 3),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(429),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(578),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(555),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(317),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(525),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(470),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(132),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(563),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(500),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(501),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inverse_object_property, 2),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(286),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(312),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(424),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_property_iri, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(282),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(203),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 6),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(546),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(178),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(498),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(645),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(648),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(652),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(657),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(552),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(136),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(387),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(486),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(525),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(519),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(128),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(162),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(842),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 2),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(300),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(427),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 3),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(149),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 4),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(291),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 3),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2), SHIFT_REPEAT(236),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 2),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(549),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2), SHIFT_REPEAT(451),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2), SHIFT_REPEAT(499),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(513),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(125),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(414),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(465),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(325),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(151),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 3),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_union_of, 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 1),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(525),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(574),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(561),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_union_of, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjoint_with, 2),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_class_of, 2),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalent_to, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact, 2),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_fact, 2),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_fact, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2), SHIFT_REPEAT(602),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 3),
  [985] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(360),
  [988] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(361),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(572),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 3),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_iri, 1),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ontology_iri, 1),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri, 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 3),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(425),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2),
  [1049] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(525),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1054] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(394),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), REDUCE(sym_datatype_frame, 4),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(311),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [1065] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(660),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(405),
  [1075] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(408),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(294),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_iri, 1),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 4),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2), SHIFT_REPEAT(597),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 3),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 3),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 4),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2),
  [1168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2), SHIFT_REPEAT(536),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 4),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2), SHIFT_REPEAT(568),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2), SHIFT_REPEAT(240),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(457),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(461),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_equavalent_to, 3),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_equavalent_to, 2),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(484),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(493),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_no_language, 1),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(507),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(509),
  [1281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(510),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(544),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 2),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 1),
  [1297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(520),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 3),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_literal, 3),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_iri, 1),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_with_language, 2),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_iri, 1),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotations, 2),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_property_iri, 1),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(554),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(541),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(530),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(553),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(557),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(445),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(331),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [1499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(885),
  [1502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(551),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2), SHIFT_REPEAT(916),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(274),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(576),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2), SHIFT_REPEAT(529),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2),
  [1623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2), SHIFT_REPEAT(411),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 2),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 1),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 2),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 1),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ontology_document, 2),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
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

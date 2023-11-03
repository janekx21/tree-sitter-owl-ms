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
#define STATE_COUNT 946
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
  sym__iri_rfc3987 = 176,
  sym__ihier_part = 177,
  sym__iauthority = 178,
  sym__iuserinfo = 179,
  sym__ihost = 180,
  aux_sym__ipath_abempty = 181,
  sym__isegment = 182,
  aux_sym__positive_integer_repeat1 = 183,
  aux_sym__ontology_document_repeat1 = 184,
  aux_sym_ontology_repeat1 = 185,
  aux_sym_ontology_repeat2 = 186,
  aux_sym_ontology_repeat3 = 187,
  aux_sym_data_range_repeat1 = 188,
  aux_sym__data_conjunction_repeat1 = 189,
  aux_sym_datatype_restriction_repeat1 = 190,
  aux_sym_description_repeat1 = 191,
  aux_sym__conjunction_repeat1 = 192,
  aux_sym__conjunction_repeat2 = 193,
  aux_sym_datatype_frame_repeat1 = 194,
  aux_sym_class_frame_repeat1 = 195,
  aux_sym_class_frame_repeat2 = 196,
  aux_sym_object_property_frame_repeat1 = 197,
  aux_sym_object_property_frame_repeat2 = 198,
  aux_sym_data_property_frame_repeat1 = 199,
  aux_sym_annotation_property_frame_repeat1 = 200,
  aux_sym_individual_frame_repeat1 = 201,
  aux_sym__description_annotated_list_repeat1 = 202,
  aux_sym__annotation_annotated_list_repeat1 = 203,
  aux_sym__object_property_expression_annotated_list_repeat1 = 204,
  aux_sym__object_property_characteristic_annotated_list_repeat1 = 205,
  aux_sym__data_range_annotated_list_repeat1 = 206,
  aux_sym__data_property_expression_annotated_list_repeat1 = 207,
  aux_sym__iri_annotated_list_repeat1 = 208,
  aux_sym__annotation_property_iri_annotated_list_repeat1 = 209,
  aux_sym__individual_annotated_list_repeat1 = 210,
  aux_sym__fact_annotated_list_repeat1 = 211,
  aux_sym__description_2list_repeat1 = 212,
  aux_sym__object_property_2list_repeat1 = 213,
  aux_sym__data_property_2list_repeat1 = 214,
  aux_sym__individual_2list_repeat1 = 215,
  aux_sym__literal_list_repeat1 = 216,
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
  [aux_sym_datatype_frame_repeat1] = "datatype_frame_repeat1",
  [aux_sym_class_frame_repeat1] = "class_frame_repeat1",
  [aux_sym_class_frame_repeat2] = "class_frame_repeat2",
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
  [aux_sym_datatype_frame_repeat1] = aux_sym_datatype_frame_repeat1,
  [aux_sym_class_frame_repeat1] = aux_sym_class_frame_repeat1,
  [aux_sym_class_frame_repeat2] = aux_sym_class_frame_repeat2,
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
  [6] = 2,
  [7] = 7,
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
  [30] = 30,
  [31] = 29,
  [32] = 30,
  [33] = 28,
  [34] = 30,
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 28,
  [39] = 39,
  [40] = 30,
  [41] = 41,
  [42] = 42,
  [43] = 28,
  [44] = 44,
  [45] = 29,
  [46] = 44,
  [47] = 47,
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
  [58] = 2,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 44,
  [66] = 66,
  [67] = 67,
  [68] = 44,
  [69] = 30,
  [70] = 21,
  [71] = 22,
  [72] = 28,
  [73] = 29,
  [74] = 27,
  [75] = 25,
  [76] = 26,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 79,
  [82] = 79,
  [83] = 79,
  [84] = 84,
  [85] = 79,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 44,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 96,
  [100] = 96,
  [101] = 96,
  [102] = 96,
  [103] = 96,
  [104] = 96,
  [105] = 105,
  [106] = 106,
  [107] = 98,
  [108] = 98,
  [109] = 98,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 98,
  [114] = 114,
  [115] = 98,
  [116] = 116,
  [117] = 117,
  [118] = 96,
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
  [141] = 112,
  [142] = 105,
  [143] = 110,
  [144] = 144,
  [145] = 111,
  [146] = 106,
  [147] = 147,
  [148] = 119,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 114,
  [153] = 153,
  [154] = 138,
  [155] = 116,
  [156] = 156,
  [157] = 138,
  [158] = 117,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 138,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 119,
  [178] = 178,
  [179] = 127,
  [180] = 106,
  [181] = 112,
  [182] = 122,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 110,
  [190] = 190,
  [191] = 120,
  [192] = 105,
  [193] = 193,
  [194] = 194,
  [195] = 3,
  [196] = 8,
  [197] = 7,
  [198] = 7,
  [199] = 199,
  [200] = 8,
  [201] = 3,
  [202] = 111,
  [203] = 117,
  [204] = 204,
  [205] = 131,
  [206] = 116,
  [207] = 207,
  [208] = 124,
  [209] = 114,
  [210] = 210,
  [211] = 211,
  [212] = 120,
  [213] = 213,
  [214] = 211,
  [215] = 105,
  [216] = 213,
  [217] = 217,
  [218] = 124,
  [219] = 219,
  [220] = 111,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 114,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 106,
  [232] = 232,
  [233] = 217,
  [234] = 112,
  [235] = 131,
  [236] = 117,
  [237] = 162,
  [238] = 211,
  [239] = 239,
  [240] = 147,
  [241] = 241,
  [242] = 116,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 166,
  [248] = 213,
  [249] = 249,
  [250] = 139,
  [251] = 156,
  [252] = 213,
  [253] = 119,
  [254] = 110,
  [255] = 255,
  [256] = 244,
  [257] = 211,
  [258] = 131,
  [259] = 259,
  [260] = 260,
  [261] = 147,
  [262] = 262,
  [263] = 139,
  [264] = 262,
  [265] = 162,
  [266] = 266,
  [267] = 21,
  [268] = 22,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 7,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 262,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 8,
  [281] = 262,
  [282] = 282,
  [283] = 3,
  [284] = 284,
  [285] = 285,
  [286] = 262,
  [287] = 120,
  [288] = 124,
  [289] = 289,
  [290] = 290,
  [291] = 156,
  [292] = 166,
  [293] = 262,
  [294] = 294,
  [295] = 93,
  [296] = 91,
  [297] = 94,
  [298] = 298,
  [299] = 299,
  [300] = 162,
  [301] = 301,
  [302] = 302,
  [303] = 92,
  [304] = 304,
  [305] = 299,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 299,
  [313] = 313,
  [314] = 166,
  [315] = 299,
  [316] = 25,
  [317] = 27,
  [318] = 318,
  [319] = 147,
  [320] = 139,
  [321] = 95,
  [322] = 322,
  [323] = 26,
  [324] = 324,
  [325] = 156,
  [326] = 326,
  [327] = 327,
  [328] = 299,
  [329] = 299,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 28,
  [335] = 335,
  [336] = 336,
  [337] = 25,
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
  [348] = 29,
  [349] = 30,
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
  [360] = 21,
  [361] = 361,
  [362] = 22,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 22,
  [367] = 21,
  [368] = 365,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 365,
  [374] = 365,
  [375] = 375,
  [376] = 365,
  [377] = 365,
  [378] = 27,
  [379] = 106,
  [380] = 105,
  [381] = 112,
  [382] = 119,
  [383] = 383,
  [384] = 114,
  [385] = 385,
  [386] = 110,
  [387] = 25,
  [388] = 388,
  [389] = 26,
  [390] = 390,
  [391] = 391,
  [392] = 111,
  [393] = 117,
  [394] = 27,
  [395] = 395,
  [396] = 396,
  [397] = 26,
  [398] = 116,
  [399] = 25,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 25,
  [409] = 409,
  [410] = 120,
  [411] = 124,
  [412] = 131,
  [413] = 413,
  [414] = 405,
  [415] = 290,
  [416] = 416,
  [417] = 417,
  [418] = 21,
  [419] = 419,
  [420] = 416,
  [421] = 416,
  [422] = 22,
  [423] = 423,
  [424] = 424,
  [425] = 423,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 44,
  [433] = 260,
  [434] = 434,
  [435] = 423,
  [436] = 423,
  [437] = 22,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 423,
  [443] = 416,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 21,
  [448] = 416,
  [449] = 449,
  [450] = 21,
  [451] = 289,
  [452] = 452,
  [453] = 416,
  [454] = 22,
  [455] = 455,
  [456] = 456,
  [457] = 423,
  [458] = 25,
  [459] = 459,
  [460] = 460,
  [461] = 459,
  [462] = 27,
  [463] = 26,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 466,
  [468] = 25,
  [469] = 466,
  [470] = 466,
  [471] = 471,
  [472] = 472,
  [473] = 466,
  [474] = 26,
  [475] = 466,
  [476] = 27,
  [477] = 477,
  [478] = 459,
  [479] = 459,
  [480] = 27,
  [481] = 459,
  [482] = 21,
  [483] = 459,
  [484] = 25,
  [485] = 26,
  [486] = 22,
  [487] = 487,
  [488] = 25,
  [489] = 487,
  [490] = 26,
  [491] = 487,
  [492] = 492,
  [493] = 487,
  [494] = 27,
  [495] = 495,
  [496] = 496,
  [497] = 487,
  [498] = 498,
  [499] = 25,
  [500] = 487,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 25,
  [505] = 505,
  [506] = 10,
  [507] = 25,
  [508] = 487,
  [509] = 487,
  [510] = 510,
  [511] = 511,
  [512] = 95,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 91,
  [517] = 517,
  [518] = 518,
  [519] = 25,
  [520] = 92,
  [521] = 510,
  [522] = 522,
  [523] = 510,
  [524] = 94,
  [525] = 510,
  [526] = 93,
  [527] = 510,
  [528] = 510,
  [529] = 529,
  [530] = 510,
  [531] = 510,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 7,
  [536] = 536,
  [537] = 536,
  [538] = 14,
  [539] = 3,
  [540] = 536,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 39,
  [545] = 16,
  [546] = 546,
  [547] = 536,
  [548] = 536,
  [549] = 549,
  [550] = 536,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 18,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 15,
  [559] = 17,
  [560] = 560,
  [561] = 8,
  [562] = 533,
  [563] = 12,
  [564] = 11,
  [565] = 536,
  [566] = 566,
  [567] = 36,
  [568] = 536,
  [569] = 37,
  [570] = 24,
  [571] = 536,
  [572] = 13,
  [573] = 20,
  [574] = 574,
  [575] = 575,
  [576] = 10,
  [577] = 144,
  [578] = 375,
  [579] = 275,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 3,
  [584] = 584,
  [585] = 585,
  [586] = 7,
  [587] = 8,
  [588] = 588,
  [589] = 588,
  [590] = 590,
  [591] = 588,
  [592] = 592,
  [593] = 593,
  [594] = 592,
  [595] = 590,
  [596] = 590,
  [597] = 588,
  [598] = 592,
  [599] = 588,
  [600] = 593,
  [601] = 592,
  [602] = 93,
  [603] = 593,
  [604] = 592,
  [605] = 590,
  [606] = 95,
  [607] = 607,
  [608] = 92,
  [609] = 94,
  [610] = 93,
  [611] = 592,
  [612] = 592,
  [613] = 95,
  [614] = 593,
  [615] = 590,
  [616] = 616,
  [617] = 91,
  [618] = 590,
  [619] = 593,
  [620] = 94,
  [621] = 592,
  [622] = 92,
  [623] = 623,
  [624] = 590,
  [625] = 588,
  [626] = 592,
  [627] = 593,
  [628] = 628,
  [629] = 91,
  [630] = 630,
  [631] = 590,
  [632] = 593,
  [633] = 590,
  [634] = 588,
  [635] = 36,
  [636] = 14,
  [637] = 15,
  [638] = 638,
  [639] = 8,
  [640] = 7,
  [641] = 17,
  [642] = 3,
  [643] = 643,
  [644] = 643,
  [645] = 645,
  [646] = 643,
  [647] = 647,
  [648] = 648,
  [649] = 24,
  [650] = 650,
  [651] = 11,
  [652] = 12,
  [653] = 13,
  [654] = 654,
  [655] = 20,
  [656] = 39,
  [657] = 657,
  [658] = 643,
  [659] = 659,
  [660] = 37,
  [661] = 18,
  [662] = 16,
  [663] = 144,
  [664] = 664,
  [665] = 664,
  [666] = 664,
  [667] = 10,
  [668] = 275,
  [669] = 10,
  [670] = 670,
  [671] = 10,
  [672] = 664,
  [673] = 673,
  [674] = 674,
  [675] = 664,
  [676] = 664,
  [677] = 91,
  [678] = 92,
  [679] = 95,
  [680] = 95,
  [681] = 91,
  [682] = 92,
  [683] = 10,
  [684] = 94,
  [685] = 93,
  [686] = 93,
  [687] = 91,
  [688] = 92,
  [689] = 689,
  [690] = 93,
  [691] = 94,
  [692] = 95,
  [693] = 94,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 18,
  [698] = 13,
  [699] = 20,
  [700] = 37,
  [701] = 701,
  [702] = 16,
  [703] = 39,
  [704] = 14,
  [705] = 17,
  [706] = 15,
  [707] = 3,
  [708] = 8,
  [709] = 7,
  [710] = 12,
  [711] = 11,
  [712] = 701,
  [713] = 106,
  [714] = 111,
  [715] = 36,
  [716] = 105,
  [717] = 701,
  [718] = 114,
  [719] = 701,
  [720] = 24,
  [721] = 13,
  [722] = 20,
  [723] = 119,
  [724] = 37,
  [725] = 701,
  [726] = 24,
  [727] = 3,
  [728] = 8,
  [729] = 7,
  [730] = 15,
  [731] = 17,
  [732] = 116,
  [733] = 112,
  [734] = 117,
  [735] = 14,
  [736] = 39,
  [737] = 737,
  [738] = 16,
  [739] = 16,
  [740] = 18,
  [741] = 701,
  [742] = 37,
  [743] = 36,
  [744] = 39,
  [745] = 14,
  [746] = 20,
  [747] = 13,
  [748] = 17,
  [749] = 95,
  [750] = 24,
  [751] = 701,
  [752] = 92,
  [753] = 11,
  [754] = 12,
  [755] = 36,
  [756] = 94,
  [757] = 15,
  [758] = 701,
  [759] = 3,
  [760] = 11,
  [761] = 12,
  [762] = 701,
  [763] = 91,
  [764] = 93,
  [765] = 765,
  [766] = 110,
  [767] = 8,
  [768] = 7,
  [769] = 18,
  [770] = 8,
  [771] = 771,
  [772] = 15,
  [773] = 275,
  [774] = 774,
  [775] = 17,
  [776] = 774,
  [777] = 3,
  [778] = 778,
  [779] = 275,
  [780] = 7,
  [781] = 781,
  [782] = 782,
  [783] = 14,
  [784] = 131,
  [785] = 39,
  [786] = 771,
  [787] = 771,
  [788] = 16,
  [789] = 275,
  [790] = 790,
  [791] = 774,
  [792] = 781,
  [793] = 781,
  [794] = 782,
  [795] = 795,
  [796] = 18,
  [797] = 781,
  [798] = 782,
  [799] = 781,
  [800] = 782,
  [801] = 790,
  [802] = 37,
  [803] = 782,
  [804] = 781,
  [805] = 790,
  [806] = 20,
  [807] = 781,
  [808] = 13,
  [809] = 24,
  [810] = 771,
  [811] = 36,
  [812] = 11,
  [813] = 12,
  [814] = 790,
  [815] = 782,
  [816] = 771,
  [817] = 790,
  [818] = 124,
  [819] = 771,
  [820] = 790,
  [821] = 774,
  [822] = 782,
  [823] = 823,
  [824] = 774,
  [825] = 790,
  [826] = 120,
  [827] = 771,
  [828] = 781,
  [829] = 774,
  [830] = 781,
  [831] = 782,
  [832] = 832,
  [833] = 782,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 275,
  [841] = 841,
  [842] = 842,
  [843] = 446,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 847,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 847,
  [853] = 853,
  [854] = 847,
  [855] = 855,
  [856] = 856,
  [857] = 849,
  [858] = 850,
  [859] = 859,
  [860] = 860,
  [861] = 856,
  [862] = 860,
  [863] = 849,
  [864] = 850,
  [865] = 865,
  [866] = 856,
  [867] = 849,
  [868] = 849,
  [869] = 856,
  [870] = 870,
  [871] = 847,
  [872] = 847,
  [873] = 850,
  [874] = 874,
  [875] = 849,
  [876] = 876,
  [877] = 860,
  [878] = 860,
  [879] = 879,
  [880] = 850,
  [881] = 850,
  [882] = 860,
  [883] = 849,
  [884] = 856,
  [885] = 860,
  [886] = 886,
  [887] = 860,
  [888] = 847,
  [889] = 856,
  [890] = 847,
  [891] = 847,
  [892] = 847,
  [893] = 847,
  [894] = 894,
  [895] = 856,
  [896] = 850,
  [897] = 897,
  [898] = 897,
  [899] = 899,
  [900] = 899,
  [901] = 897,
  [902] = 899,
  [903] = 899,
  [904] = 899,
  [905] = 905,
  [906] = 899,
  [907] = 905,
  [908] = 908,
  [909] = 909,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 905,
  [915] = 915,
  [916] = 905,
  [917] = 905,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 899,
  [927] = 927,
  [928] = 897,
  [929] = 899,
  [930] = 899,
  [931] = 931,
  [932] = 897,
  [933] = 899,
  [934] = 934,
  [935] = 897,
  [936] = 905,
  [937] = 905,
  [938] = 897,
  [939] = 899,
  [940] = 922,
  [941] = 941,
  [942] = 942,
  [943] = 905,
  [944] = 944,
  [945] = 945,
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
  [6] = {.lex_state = 507},
  [7] = {.lex_state = 510},
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
  [21] = {.lex_state = 509},
  [22] = {.lex_state = 509},
  [23] = {.lex_state = 510},
  [24] = {.lex_state = 510},
  [25] = {.lex_state = 509},
  [26] = {.lex_state = 509},
  [27] = {.lex_state = 509},
  [28] = {.lex_state = 500},
  [29] = {.lex_state = 500},
  [30] = {.lex_state = 500},
  [31] = {.lex_state = 501},
  [32] = {.lex_state = 501},
  [33] = {.lex_state = 501},
  [34] = {.lex_state = 502},
  [35] = {.lex_state = 502},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 502},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 503},
  [41] = {.lex_state = 513},
  [42] = {.lex_state = 513},
  [43] = {.lex_state = 503},
  [44] = {.lex_state = 499},
  [45] = {.lex_state = 503},
  [46] = {.lex_state = 505},
  [47] = {.lex_state = 510},
  [48] = {.lex_state = 510},
  [49] = {.lex_state = 512},
  [50] = {.lex_state = 510},
  [51] = {.lex_state = 512},
  [52] = {.lex_state = 510},
  [53] = {.lex_state = 510},
  [54] = {.lex_state = 510},
  [55] = {.lex_state = 510},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 510},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 510},
  [60] = {.lex_state = 510},
  [61] = {.lex_state = 510},
  [62] = {.lex_state = 510},
  [63] = {.lex_state = 510},
  [64] = {.lex_state = 510},
  [65] = {.lex_state = 506},
  [66] = {.lex_state = 512},
  [67] = {.lex_state = 510},
  [68] = {.lex_state = 507},
  [69] = {.lex_state = 504},
  [70] = {.lex_state = 511},
  [71] = {.lex_state = 511},
  [72] = {.lex_state = 504},
  [73] = {.lex_state = 504},
  [74] = {.lex_state = 511},
  [75] = {.lex_state = 511},
  [76] = {.lex_state = 511},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 508},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 510},
  [106] = {.lex_state = 510},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 510},
  [111] = {.lex_state = 510},
  [112] = {.lex_state = 510},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 510},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 510},
  [117] = {.lex_state = 510},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 510},
  [120] = {.lex_state = 510},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 510},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 510},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 510},
  [132] = {.lex_state = 510},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 510},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 510},
  [141] = {.lex_state = 510},
  [142] = {.lex_state = 510},
  [143] = {.lex_state = 510},
  [144] = {.lex_state = 512},
  [145] = {.lex_state = 510},
  [146] = {.lex_state = 510},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 510},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 510},
  [152] = {.lex_state = 510},
  [153] = {.lex_state = 510},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 510},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 510},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 510},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 510},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 512},
  [180] = {.lex_state = 510},
  [181] = {.lex_state = 510},
  [182] = {.lex_state = 512},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 510},
  [189] = {.lex_state = 510},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 510},
  [192] = {.lex_state = 510},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 512},
  [196] = {.lex_state = 512},
  [197] = {.lex_state = 512},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 510},
  [203] = {.lex_state = 510},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 510},
  [206] = {.lex_state = 510},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 510},
  [209] = {.lex_state = 510},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 510},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 510},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 510},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 510},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 510},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 510},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 510},
  [235] = {.lex_state = 510},
  [236] = {.lex_state = 510},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 510},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 510},
  [254] = {.lex_state = 510},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 510},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 513},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 513},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 513},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 510},
  [288] = {.lex_state = 510},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 10},
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
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 10},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 10},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 3},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 7},
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
  [349] = {.lex_state = 3},
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
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 17},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 11},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 6},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 513},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 11},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 11},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 8},
  [379] = {.lex_state = 510},
  [380] = {.lex_state = 510},
  [381] = {.lex_state = 510},
  [382] = {.lex_state = 510},
  [383] = {.lex_state = 63},
  [384] = {.lex_state = 510},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 510},
  [387] = {.lex_state = 17},
  [388] = {.lex_state = 16},
  [389] = {.lex_state = 8},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 510},
  [393] = {.lex_state = 510},
  [394] = {.lex_state = 17},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 17},
  [398] = {.lex_state = 510},
  [399] = {.lex_state = 6},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 63},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 510},
  [411] = {.lex_state = 510},
  [412] = {.lex_state = 510},
  [413] = {.lex_state = 64},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 10},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 19},
  [419] = {.lex_state = 11},
  [420] = {.lex_state = 10},
  [421] = {.lex_state = 10},
  [422] = {.lex_state = 19},
  [423] = {.lex_state = 10},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 10},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 64},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 4},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 10},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 10},
  [443] = {.lex_state = 10},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 20},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 18},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 10},
  [454] = {.lex_state = 18},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 10},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 11},
  [460] = {.lex_state = 63},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 22},
  [463] = {.lex_state = 22},
  [464] = {.lex_state = 62},
  [465] = {.lex_state = 62},
  [466] = {.lex_state = 11},
  [467] = {.lex_state = 11},
  [468] = {.lex_state = 18},
  [469] = {.lex_state = 11},
  [470] = {.lex_state = 11},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 11},
  [474] = {.lex_state = 24},
  [475] = {.lex_state = 11},
  [476] = {.lex_state = 24},
  [477] = {.lex_state = 11},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 11},
  [480] = {.lex_state = 23},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 21},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 19},
  [485] = {.lex_state = 23},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 16},
  [488] = {.lex_state = 24},
  [489] = {.lex_state = 16},
  [490] = {.lex_state = 25},
  [491] = {.lex_state = 16},
  [492] = {.lex_state = 62},
  [493] = {.lex_state = 16},
  [494] = {.lex_state = 25},
  [495] = {.lex_state = 27},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 16},
  [498] = {.lex_state = 16},
  [499] = {.lex_state = 21},
  [500] = {.lex_state = 16},
  [501] = {.lex_state = 27},
  [502] = {.lex_state = 63},
  [503] = {.lex_state = 63},
  [504] = {.lex_state = 23},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 9},
  [507] = {.lex_state = 22},
  [508] = {.lex_state = 16},
  [509] = {.lex_state = 16},
  [510] = {.lex_state = 65},
  [511] = {.lex_state = 65},
  [512] = {.lex_state = 9},
  [513] = {.lex_state = 65},
  [514] = {.lex_state = 26},
  [515] = {.lex_state = 65},
  [516] = {.lex_state = 9},
  [517] = {.lex_state = 65},
  [518] = {.lex_state = 26},
  [519] = {.lex_state = 25},
  [520] = {.lex_state = 9},
  [521] = {.lex_state = 65},
  [522] = {.lex_state = 65},
  [523] = {.lex_state = 65},
  [524] = {.lex_state = 9},
  [525] = {.lex_state = 65},
  [526] = {.lex_state = 9},
  [527] = {.lex_state = 65},
  [528] = {.lex_state = 65},
  [529] = {.lex_state = 65},
  [530] = {.lex_state = 65},
  [531] = {.lex_state = 65},
  [532] = {.lex_state = 65},
  [533] = {.lex_state = 26},
  [534] = {.lex_state = 26},
  [535] = {.lex_state = 9},
  [536] = {.lex_state = 65},
  [537] = {.lex_state = 65},
  [538] = {.lex_state = 9},
  [539] = {.lex_state = 9},
  [540] = {.lex_state = 65},
  [541] = {.lex_state = 11},
  [542] = {.lex_state = 11},
  [543] = {.lex_state = 26},
  [544] = {.lex_state = 9},
  [545] = {.lex_state = 9},
  [546] = {.lex_state = 28},
  [547] = {.lex_state = 65},
  [548] = {.lex_state = 65},
  [549] = {.lex_state = 65},
  [550] = {.lex_state = 65},
  [551] = {.lex_state = 11},
  [552] = {.lex_state = 26},
  [553] = {.lex_state = 26},
  [554] = {.lex_state = 9},
  [555] = {.lex_state = 65},
  [556] = {.lex_state = 26},
  [557] = {.lex_state = 11},
  [558] = {.lex_state = 9},
  [559] = {.lex_state = 9},
  [560] = {.lex_state = 26},
  [561] = {.lex_state = 9},
  [562] = {.lex_state = 26},
  [563] = {.lex_state = 9},
  [564] = {.lex_state = 9},
  [565] = {.lex_state = 65},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 9},
  [568] = {.lex_state = 65},
  [569] = {.lex_state = 9},
  [570] = {.lex_state = 9},
  [571] = {.lex_state = 65},
  [572] = {.lex_state = 9},
  [573] = {.lex_state = 9},
  [574] = {.lex_state = 11},
  [575] = {.lex_state = 11},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 1},
  [578] = {.lex_state = 1},
  [579] = {.lex_state = 9},
  [580] = {.lex_state = 509},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 65},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 65},
  [585] = {.lex_state = 509},
  [586] = {.lex_state = 1},
  [587] = {.lex_state = 1},
  [588] = {.lex_state = 509},
  [589] = {.lex_state = 509},
  [590] = {.lex_state = 28},
  [591] = {.lex_state = 509},
  [592] = {.lex_state = 28},
  [593] = {.lex_state = 509},
  [594] = {.lex_state = 28},
  [595] = {.lex_state = 28},
  [596] = {.lex_state = 28},
  [597] = {.lex_state = 509},
  [598] = {.lex_state = 28},
  [599] = {.lex_state = 509},
  [600] = {.lex_state = 509},
  [601] = {.lex_state = 28},
  [602] = {.lex_state = 10},
  [603] = {.lex_state = 509},
  [604] = {.lex_state = 28},
  [605] = {.lex_state = 28},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 65},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 28},
  [612] = {.lex_state = 28},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 509},
  [615] = {.lex_state = 28},
  [616] = {.lex_state = 28},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 28},
  [619] = {.lex_state = 509},
  [620] = {.lex_state = 10},
  [621] = {.lex_state = 28},
  [622] = {.lex_state = 10},
  [623] = {.lex_state = 28},
  [624] = {.lex_state = 28},
  [625] = {.lex_state = 509},
  [626] = {.lex_state = 28},
  [627] = {.lex_state = 509},
  [628] = {.lex_state = 28},
  [629] = {.lex_state = 10},
  [630] = {.lex_state = 28},
  [631] = {.lex_state = 28},
  [632] = {.lex_state = 509},
  [633] = {.lex_state = 28},
  [634] = {.lex_state = 509},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 10},
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 28},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 28},
  [644] = {.lex_state = 28},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 28},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 28},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 28},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 28},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 10},
  [657] = {.lex_state = 28},
  [658] = {.lex_state = 28},
  [659] = {.lex_state = 28},
  [660] = {.lex_state = 10},
  [661] = {.lex_state = 10},
  [662] = {.lex_state = 10},
  [663] = {.lex_state = 510},
  [664] = {.lex_state = 510},
  [665] = {.lex_state = 510},
  [666] = {.lex_state = 510},
  [667] = {.lex_state = 11},
  [668] = {.lex_state = 10},
  [669] = {.lex_state = 27},
  [670] = {.lex_state = 28},
  [671] = {.lex_state = 26},
  [672] = {.lex_state = 510},
  [673] = {.lex_state = 28},
  [674] = {.lex_state = 28},
  [675] = {.lex_state = 510},
  [676] = {.lex_state = 510},
  [677] = {.lex_state = 26},
  [678] = {.lex_state = 26},
  [679] = {.lex_state = 11},
  [680] = {.lex_state = 27},
  [681] = {.lex_state = 27},
  [682] = {.lex_state = 27},
  [683] = {.lex_state = 28},
  [684] = {.lex_state = 27},
  [685] = {.lex_state = 27},
  [686] = {.lex_state = 26},
  [687] = {.lex_state = 11},
  [688] = {.lex_state = 11},
  [689] = {.lex_state = 509},
  [690] = {.lex_state = 11},
  [691] = {.lex_state = 26},
  [692] = {.lex_state = 26},
  [693] = {.lex_state = 11},
  [694] = {.lex_state = 509},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 499},
  [697] = {.lex_state = 26},
  [698] = {.lex_state = 11},
  [699] = {.lex_state = 11},
  [700] = {.lex_state = 11},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 11},
  [703] = {.lex_state = 11},
  [704] = {.lex_state = 11},
  [705] = {.lex_state = 11},
  [706] = {.lex_state = 11},
  [707] = {.lex_state = 27},
  [708] = {.lex_state = 27},
  [709] = {.lex_state = 27},
  [710] = {.lex_state = 26},
  [711] = {.lex_state = 26},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 510},
  [714] = {.lex_state = 510},
  [715] = {.lex_state = 26},
  [716] = {.lex_state = 510},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 510},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 26},
  [721] = {.lex_state = 26},
  [722] = {.lex_state = 26},
  [723] = {.lex_state = 510},
  [724] = {.lex_state = 26},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 11},
  [727] = {.lex_state = 26},
  [728] = {.lex_state = 26},
  [729] = {.lex_state = 26},
  [730] = {.lex_state = 27},
  [731] = {.lex_state = 27},
  [732] = {.lex_state = 510},
  [733] = {.lex_state = 510},
  [734] = {.lex_state = 510},
  [735] = {.lex_state = 27},
  [736] = {.lex_state = 27},
  [737] = {.lex_state = 499},
  [738] = {.lex_state = 27},
  [739] = {.lex_state = 26},
  [740] = {.lex_state = 27},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 27},
  [743] = {.lex_state = 11},
  [744] = {.lex_state = 26},
  [745] = {.lex_state = 26},
  [746] = {.lex_state = 27},
  [747] = {.lex_state = 27},
  [748] = {.lex_state = 26},
  [749] = {.lex_state = 28},
  [750] = {.lex_state = 27},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 28},
  [753] = {.lex_state = 11},
  [754] = {.lex_state = 11},
  [755] = {.lex_state = 27},
  [756] = {.lex_state = 28},
  [757] = {.lex_state = 26},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 11},
  [760] = {.lex_state = 27},
  [761] = {.lex_state = 27},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 28},
  [764] = {.lex_state = 28},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 510},
  [767] = {.lex_state = 11},
  [768] = {.lex_state = 11},
  [769] = {.lex_state = 11},
  [770] = {.lex_state = 28},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 28},
  [773] = {.lex_state = 26},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 28},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 28},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 11},
  [780] = {.lex_state = 28},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 28},
  [784] = {.lex_state = 510},
  [785] = {.lex_state = 28},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 28},
  [789] = {.lex_state = 27},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 662},
  [796] = {.lex_state = 28},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 28},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 28},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 28},
  [809] = {.lex_state = 28},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 28},
  [812] = {.lex_state = 28},
  [813] = {.lex_state = 28},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 510},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 499},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 510},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 509},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 28},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 495},
  [848] = {.lex_state = 495},
  [849] = {.lex_state = 509},
  [850] = {.lex_state = 509},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 495},
  [853] = {.lex_state = 662},
  [854] = {.lex_state = 495},
  [855] = {.lex_state = 662},
  [856] = {.lex_state = 509},
  [857] = {.lex_state = 509},
  [858] = {.lex_state = 509},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 509},
  [861] = {.lex_state = 509},
  [862] = {.lex_state = 509},
  [863] = {.lex_state = 509},
  [864] = {.lex_state = 509},
  [865] = {.lex_state = 510},
  [866] = {.lex_state = 509},
  [867] = {.lex_state = 509},
  [868] = {.lex_state = 509},
  [869] = {.lex_state = 509},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 495},
  [872] = {.lex_state = 495},
  [873] = {.lex_state = 509},
  [874] = {.lex_state = 509},
  [875] = {.lex_state = 509},
  [876] = {.lex_state = 499},
  [877] = {.lex_state = 509},
  [878] = {.lex_state = 509},
  [879] = {.lex_state = 509},
  [880] = {.lex_state = 509},
  [881] = {.lex_state = 509},
  [882] = {.lex_state = 509},
  [883] = {.lex_state = 509},
  [884] = {.lex_state = 509},
  [885] = {.lex_state = 509},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 509},
  [888] = {.lex_state = 495},
  [889] = {.lex_state = 509},
  [890] = {.lex_state = 495},
  [891] = {.lex_state = 495},
  [892] = {.lex_state = 495},
  [893] = {.lex_state = 495},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 509},
  [896] = {.lex_state = 509},
  [897] = {.lex_state = 496},
  [898] = {.lex_state = 496},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 496},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 66},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 499},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 663},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 499},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 496},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 496},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 496},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 496},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 663},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
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
    [sym_source_file] = STATE(945),
    [sym__ontology_document] = STATE(944),
    [sym_prefix_declaration] = STATE(765),
    [sym_ontology] = STATE(944),
    [aux_sym__ontology_document_repeat1] = STATE(765),
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
    STATE(47), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(62), 7,
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
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(62), 7,
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
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(62), 7,
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
  [311] = 16,
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
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(62), 7,
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
  [394] = 1,
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
  [447] = 1,
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
    STATE(47), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(62), 7,
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
  [901] = 1,
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
  [946] = 1,
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
  [991] = 5,
    ACTIONS(47), 1,
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
    ACTIONS(63), 33,
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
  [1089] = 8,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    STATE(889), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(81), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
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
  [1147] = 8,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(867), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(91), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
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
  [1205] = 3,
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
  [1253] = 1,
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
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(77), 2,
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
  [1401] = 7,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    STATE(882), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(108), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(106), 31,
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
  [1456] = 4,
    ACTIONS(114), 2,
      sym__non_zero,
      sym__zero,
    STATE(29), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(112), 30,
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
    ACTIONS(120), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
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
  [1554] = 4,
    ACTIONS(126), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(124), 30,
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
    STATE(32), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(124), 28,
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
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(112), 28,
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
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(124), 27,
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
  [1916] = 4,
    ACTIONS(145), 2,
      sym__non_zero,
      sym__zero,
    STATE(35), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(112), 27,
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
  [2002] = 4,
    ACTIONS(149), 2,
      sym__non_zero,
      sym__zero,
    STATE(40), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(124), 26,
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
  [2047] = 20,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      anon_sym_Import_COLON,
    ACTIONS(156), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(158), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(160), 1,
      anon_sym_Class_COLON,
    ACTIONS(162), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(164), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(166), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(168), 1,
      anon_sym_Individual_COLON,
    STATE(89), 1,
      sym_version_iri,
    ACTIONS(170), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(172), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(174), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(87), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(123), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(424), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(249), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [2124] = 20,
    ACTIONS(154), 1,
      anon_sym_Import_COLON,
    ACTIONS(156), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(158), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(160), 1,
      anon_sym_Class_COLON,
    ACTIONS(162), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(164), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(166), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(168), 1,
      anon_sym_Individual_COLON,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    STATE(41), 1,
      sym_ontology_iri,
    ACTIONS(170), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(172), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(174), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(86), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(134), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(372), 4,
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
  [2201] = 4,
    ACTIONS(184), 2,
      sym__non_zero,
      sym__zero,
    STATE(45), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(112), 26,
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
  [2246] = 2,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(188), 30,
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
  [2287] = 4,
    ACTIONS(190), 2,
      sym__non_zero,
      sym__zero,
    STATE(40), 2,
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
  [2332] = 2,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(188), 28,
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
  [2371] = 2,
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
  [2410] = 1,
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
  [2447] = 8,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_inverse,
    ACTIONS(206), 1,
      sym__pn_local,
    ACTIONS(208), 1,
      sym__pname_ln,
    STATE(144), 4,
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
      aux_sym_class_frame_repeat1,
    ACTIONS(202), 18,
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
  [2497] = 1,
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
  [2533] = 8,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_inverse,
    ACTIONS(206), 1,
      sym__pn_local,
    ACTIONS(208), 1,
      sym__pname_ln,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(144), 4,
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
      aux_sym_class_frame_repeat1,
    ACTIONS(214), 18,
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
  [2583] = 1,
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
  [2619] = 1,
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
  [2655] = 1,
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
  [2691] = 1,
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
  [2727] = 20,
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
    ACTIONS(222), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(723), 1,
      sym_class_iri,
    STATE(784), 1,
      sym__conjunction,
    STATE(910), 1,
      sym_description,
    STATE(927), 1,
      sym_data_range,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(128), 3,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(766), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2801] = 1,
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
  [2837] = 16,
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
    ACTIONS(222), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    ACTIONS(7), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(62), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [2903] = 1,
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
  [2939] = 1,
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
  [2975] = 1,
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
  [3011] = 1,
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
  [3047] = 1,
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
  [3083] = 1,
    ACTIONS(236), 33,
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
  [3119] = 2,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(188), 27,
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
  [3157] = 8,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      anon_sym_LT,
    ACTIONS(245), 1,
      anon_sym_inverse,
    ACTIONS(248), 1,
      sym__pn_local,
    ACTIONS(251), 1,
      sym__pname_ln,
    STATE(144), 4,
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
      aux_sym_class_frame_repeat1,
    ACTIONS(243), 18,
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
  [3207] = 1,
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
  [3242] = 2,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(188), 26,
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
  [3279] = 4,
    ACTIONS(256), 2,
      sym__non_zero,
      sym__zero,
    STATE(69), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(124), 21,
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
  [3319] = 9,
    ACTIONS(81), 1,
      anon_sym_f,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_F,
    STATE(889), 1,
      sym__exponent,
    ACTIONS(259), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
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
  [3369] = 9,
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
    STATE(867), 1,
      sym__exponent,
    ACTIONS(259), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
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
  [3419] = 4,
    ACTIONS(269), 2,
      sym__non_zero,
      sym__zero,
    STATE(73), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(112), 21,
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
  [3459] = 4,
    ACTIONS(271), 2,
      sym__non_zero,
      sym__zero,
    STATE(69), 2,
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
  [3499] = 8,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(108), 1,
      anon_sym_f,
    ACTIONS(273), 1,
      anon_sym_F,
    STATE(882), 1,
      sym__exponent,
    ACTIONS(259), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(106), 21,
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
  [3546] = 4,
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
  [3585] = 8,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(85), 1,
      anon_sym_E,
    ACTIONS(104), 1,
      anon_sym_f,
    ACTIONS(278), 1,
      anon_sym_F,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(259), 2,
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
  [3632] = 1,
    ACTIONS(280), 30,
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
  [3665] = 1,
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
  [3698] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3756] = 14,
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
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3814] = 14,
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
    ACTIONS(222), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3872] = 14,
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
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3930] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [3988] = 16,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
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
    STATE(911), 1,
      sym__individual_list,
    STATE(924), 1,
      sym__literal_list,
    STATE(943), 1,
      sym__lexial_value,
    ACTIONS(286), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    STATE(842), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(836), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [4050] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 7,
      sym_class_iri,
      sym__data_primary,
      sym__data_atomic,
      sym_datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4108] = 15,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      anon_sym_Import_COLON,
    ACTIONS(298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(123), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(391), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(249), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4167] = 15,
    ACTIONS(296), 1,
      anon_sym_Import_COLON,
    ACTIONS(298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(136), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(391), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(245), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4226] = 15,
    ACTIONS(296), 1,
      anon_sym_Import_COLON,
    ACTIONS(298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(129), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(391), 2,
      sym_import,
      aux_sym_ontology_repeat1,
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
  [4285] = 15,
    ACTIONS(296), 1,
      anon_sym_Import_COLON,
    ACTIONS(298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(88), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(136), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(245), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4344] = 2,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(188), 21,
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
  [4376] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 25,
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
  [4410] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 25,
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
  [4444] = 3,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(93), 1,
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
  [4478] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(93), 1,
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
  [4512] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(92), 1,
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
  [4546] = 12,
    ACTIONS(333), 1,
      anon_sym_LT,
    ACTIONS(335), 1,
      anon_sym__COLON,
    ACTIONS(339), 1,
      anon_sym_PLUS,
    ACTIONS(341), 1,
      anon_sym_DASH,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(347), 1,
      sym__pn_local,
    ACTIONS(349), 1,
      sym__pname_ln,
    STATE(916), 1,
      sym__lexial_value,
    ACTIONS(337), 2,
      sym__non_zero,
      sym__zero,
    STATE(267), 2,
      aux_sym__digits,
      sym__digit,
    STATE(567), 13,
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
  [4597] = 12,
    ACTIONS(351), 1,
      anon_sym_LT,
    ACTIONS(353), 1,
      anon_sym__COLON,
    ACTIONS(357), 1,
      anon_sym_PLUS,
    ACTIONS(359), 1,
      anon_sym_DASH,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(363), 1,
      sym__quoted_string,
    ACTIONS(365), 1,
      sym__pn_local,
    ACTIONS(367), 1,
      sym__pname_ln,
    STATE(905), 1,
      sym__lexial_value,
    ACTIONS(355), 2,
      sym__non_zero,
      sym__zero,
    STATE(447), 2,
      aux_sym__digits,
      sym__digit,
    STATE(755), 13,
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
  [4648] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(50), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4703] = 12,
    ACTIONS(369), 1,
      anon_sym_LT,
    ACTIONS(371), 1,
      anon_sym__COLON,
    ACTIONS(375), 1,
      anon_sym_PLUS,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      sym__quoted_string,
    ACTIONS(383), 1,
      sym__pn_local,
    ACTIONS(385), 1,
      sym__pname_ln,
    STATE(907), 1,
      sym__lexial_value,
    ACTIONS(373), 2,
      sym__non_zero,
      sym__zero,
    STATE(367), 2,
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
  [4754] = 12,
    ACTIONS(387), 1,
      anon_sym_LT,
    ACTIONS(389), 1,
      anon_sym__COLON,
    ACTIONS(393), 1,
      anon_sym_PLUS,
    ACTIONS(395), 1,
      anon_sym_DASH,
    ACTIONS(397), 1,
      anon_sym_DOT,
    ACTIONS(399), 1,
      sym__quoted_string,
    ACTIONS(401), 1,
      sym__pn_local,
    ACTIONS(403), 1,
      sym__pname_ln,
    STATE(936), 1,
      sym__lexial_value,
    ACTIONS(391), 2,
      sym__non_zero,
      sym__zero,
    STATE(418), 2,
      aux_sym__digits,
      sym__digit,
    STATE(743), 13,
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
  [4805] = 12,
    ACTIONS(405), 1,
      anon_sym_LT,
    ACTIONS(407), 1,
      anon_sym__COLON,
    ACTIONS(411), 1,
      anon_sym_PLUS,
    ACTIONS(413), 1,
      anon_sym_DASH,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      sym__quoted_string,
    ACTIONS(419), 1,
      sym__pn_local,
    ACTIONS(421), 1,
      sym__pname_ln,
    STATE(917), 1,
      sym__lexial_value,
    ACTIONS(409), 2,
      sym__non_zero,
      sym__zero,
    STATE(450), 2,
      aux_sym__digits,
      sym__digit,
    STATE(715), 13,
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
  [4856] = 12,
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
    ACTIONS(425), 1,
      anon_sym_PLUS,
    ACTIONS(427), 1,
      anon_sym_DASH,
    STATE(914), 1,
      sym__lexial_value,
    ACTIONS(423), 2,
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
  [4907] = 12,
    ACTIONS(429), 1,
      anon_sym_LT,
    ACTIONS(431), 1,
      anon_sym__COLON,
    ACTIONS(435), 1,
      anon_sym_PLUS,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(441), 1,
      sym__quoted_string,
    ACTIONS(443), 1,
      sym__pn_local,
    ACTIONS(445), 1,
      sym__pname_ln,
    STATE(937), 1,
      sym__lexial_value,
    ACTIONS(433), 2,
      sym__non_zero,
      sym__zero,
    STATE(482), 2,
      aux_sym__digits,
      sym__digit,
    STATE(811), 13,
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
  [4958] = 12,
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
    ACTIONS(449), 1,
      anon_sym_PLUS,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(914), 1,
      sym__lexial_value,
    ACTIONS(447), 2,
      sym__non_zero,
      sym__zero,
    STATE(360), 2,
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
  [5009] = 3,
    ACTIONS(455), 1,
      anon_sym_and,
    STATE(116), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 24,
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
  [5042] = 3,
    ACTIONS(455), 1,
      anon_sym_and,
    STATE(114), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(457), 24,
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
  [5075] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(50), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5130] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(50), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5185] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(50), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5240] = 3,
    ACTIONS(461), 1,
      anon_sym_and,
    STATE(112), 1,
      aux_sym__conjunction_repeat2,
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
  [5273] = 3,
    ACTIONS(463), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(228), 24,
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
  [5306] = 3,
    ACTIONS(461), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(466), 24,
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
  [5339] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(50), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5394] = 3,
    ACTIONS(455), 1,
      anon_sym_and,
    STATE(117), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 24,
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
  [5427] = 14,
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
    STATE(47), 1,
      sym_datatype,
    STATE(50), 2,
      sym__data_atomic,
      sym_datatype_restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(19), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5482] = 3,
    ACTIONS(455), 1,
      anon_sym_and,
    STATE(117), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(468), 24,
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
  [5515] = 3,
    ACTIONS(470), 1,
      anon_sym_and,
    STATE(117), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(224), 24,
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
  [5548] = 12,
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
    STATE(914), 1,
      sym__lexial_value,
    ACTIONS(286), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
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
  [5599] = 2,
    ACTIONS(475), 1,
      anon_sym_that,
    ACTIONS(473), 25,
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
  [5630] = 3,
    ACTIONS(477), 1,
      anon_sym_or,
    STATE(120), 1,
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
  [5662] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym__annotations,
    STATE(253), 1,
      sym_class_iri,
    STATE(258), 1,
      sym__conjunction,
    STATE(325), 1,
      sym_description,
    STATE(358), 1,
      sym__description_annotated_list,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(254), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5722] = 1,
    ACTIONS(488), 25,
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
  [5750] = 13,
    ACTIONS(298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(245), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [5802] = 3,
    ACTIONS(492), 1,
      anon_sym_or,
    STATE(120), 1,
      aux_sym_description_repeat1,
    ACTIONS(490), 23,
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
  [5834] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_not,
    STATE(177), 1,
      sym_class_iri,
    STATE(213), 1,
      sym__annotations,
    STATE(235), 1,
      sym__conjunction,
    STATE(291), 1,
      sym_description,
    STATE(331), 1,
      sym__description_annotated_list,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(189), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5894] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_not,
    STATE(210), 1,
      sym__annotations,
    STATE(331), 1,
      sym__description_2list,
    STATE(723), 1,
      sym_class_iri,
    STATE(784), 1,
      sym__conjunction,
    STATE(940), 1,
      sym_description,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(766), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5954] = 1,
    ACTIONS(498), 25,
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
  [5982] = 3,
    ACTIONS(502), 1,
      anon_sym_and,
    STATE(135), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(500), 23,
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
  [6014] = 13,
    ACTIONS(298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(221), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6066] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(119), 1,
      sym_class_iri,
    STATE(131), 1,
      sym__conjunction,
    STATE(156), 1,
      sym_description,
    STATE(252), 1,
      sym__annotations,
    STATE(255), 1,
      sym__description_annotated_list,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(110), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6126] = 3,
    ACTIONS(492), 1,
      anon_sym_or,
    STATE(124), 1,
      aux_sym_description_repeat1,
    ACTIONS(508), 23,
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
  [6158] = 3,
    ACTIONS(512), 1,
      anon_sym_and,
    STATE(132), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(510), 23,
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
  [6190] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(148), 1,
      sym_class_iri,
    STATE(205), 1,
      sym__conjunction,
    STATE(248), 1,
      sym__annotations,
    STATE(251), 1,
      sym_description,
    STATE(326), 1,
      sym__description_annotated_list,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6250] = 13,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(249), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [6302] = 3,
    ACTIONS(502), 1,
      anon_sym_and,
    STATE(132), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(517), 23,
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
  [6334] = 13,
    ACTIONS(298), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [6386] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_not,
    STATE(187), 1,
      sym__annotations,
    STATE(496), 1,
      sym__description_2list,
    STATE(723), 1,
      sym_class_iri,
    STATE(784), 1,
      sym__conjunction,
    STATE(922), 1,
      sym_description,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(766), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6446] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(148), 1,
      sym_class_iri,
    STATE(205), 1,
      sym__conjunction,
    STATE(238), 1,
      sym__annotations,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6503] = 3,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(139), 1,
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
  [6534] = 3,
    ACTIONS(524), 1,
      anon_sym_or,
    STATE(151), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(522), 22,
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
  [6565] = 3,
    ACTIONS(526), 1,
      anon_sym_and,
    STATE(145), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(466), 22,
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
  [6596] = 3,
    ACTIONS(528), 1,
      anon_sym_and,
    STATE(155), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 22,
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
  [6627] = 3,
    ACTIONS(526), 1,
      anon_sym_and,
    STATE(141), 1,
      aux_sym__conjunction_repeat2,
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
  [6658] = 2,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(530), 20,
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
  [6687] = 3,
    ACTIONS(533), 1,
      anon_sym_and,
    STATE(145), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(228), 22,
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
  [6718] = 3,
    ACTIONS(528), 1,
      anon_sym_and,
    STATE(152), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(457), 22,
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
  [6749] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(536), 22,
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
  [6780] = 2,
    ACTIONS(540), 1,
      anon_sym_that,
    ACTIONS(473), 23,
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
  [6809] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(243), 1,
      sym_data_range,
    STATE(269), 1,
      sym__annotations,
    STATE(326), 1,
      sym__data_range_annotated_list,
    STATE(128), 3,
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
  [6866] = 3,
    ACTIONS(552), 1,
      anon_sym_o,
    STATE(172), 1,
      aux_sym_object_property_frame_repeat1,
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
  [6897] = 3,
    ACTIONS(556), 1,
      anon_sym_or,
    STATE(151), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(554), 22,
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
  [6928] = 3,
    ACTIONS(528), 1,
      anon_sym_and,
    STATE(158), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 22,
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
  [6959] = 1,
    ACTIONS(510), 24,
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
  [6986] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(119), 1,
      sym_class_iri,
    STATE(131), 1,
      sym__conjunction,
    STATE(214), 1,
      sym__annotations,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(110), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7043] = 3,
    ACTIONS(528), 1,
      anon_sym_and,
    STATE(158), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(468), 22,
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
  [7074] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(166), 1,
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
  [7105] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(177), 1,
      sym_class_iri,
    STATE(235), 1,
      sym__conjunction,
    STATE(257), 1,
      sym__annotations,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(189), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7162] = 3,
    ACTIONS(561), 1,
      anon_sym_and,
    STATE(158), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(224), 22,
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
  [7193] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [7224] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(568), 22,
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
  [7255] = 3,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(570), 22,
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
  [7286] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [7317] = 3,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
    ACTIONS(577), 22,
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
  [7348] = 3,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [7379] = 3,
    ACTIONS(524), 1,
      anon_sym_or,
    STATE(140), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(586), 22,
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
  [7410] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [7441] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(568), 22,
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
  [7472] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_description,
    STATE(211), 1,
      sym__annotations,
    STATE(253), 1,
      sym_class_iri,
    STATE(258), 1,
      sym__conjunction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(254), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7529] = 3,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [7560] = 3,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [7591] = 3,
    ACTIONS(552), 1,
      anon_sym_o,
    STATE(172), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(590), 22,
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
  [7622] = 3,
    ACTIONS(594), 1,
      anon_sym_o,
    STATE(172), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(592), 22,
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
  [7653] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [7684] = 3,
    ACTIONS(552), 1,
      anon_sym_o,
    STATE(171), 1,
      aux_sym_object_property_frame_repeat1,
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
  [7715] = 3,
    ACTIONS(552), 1,
      anon_sym_o,
    STATE(150), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(599), 22,
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
  [7746] = 3,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym__object_property_characteristic_annotated_list_repeat1,
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
  [7777] = 2,
    ACTIONS(603), 1,
      anon_sym_that,
    ACTIONS(473), 22,
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
  [7805] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(266), 1,
      sym__annotations,
    STATE(438), 1,
      sym_data_range,
    STATE(128), 3,
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
  [7859] = 2,
    ACTIONS(498), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(605), 20,
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
  [7887] = 3,
    ACTIONS(607), 1,
      anon_sym_and,
    STATE(209), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(457), 21,
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
  [7917] = 3,
    ACTIONS(609), 1,
      anon_sym_and,
    STATE(202), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(466), 21,
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
  [7947] = 2,
    ACTIONS(488), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(611), 20,
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
  [7975] = 7,
    ACTIONS(615), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(621), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(623), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(184), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(619), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(617), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(613), 13,
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
  [8013] = 7,
    ACTIONS(625), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(634), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(637), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(184), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(631), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(628), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(599), 13,
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
  [8051] = 1,
    ACTIONS(570), 23,
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
  [8077] = 1,
    ACTIONS(581), 23,
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
  [8103] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_not,
    STATE(505), 1,
      sym__description_2list,
    STATE(723), 1,
      sym_class_iri,
    STATE(784), 1,
      sym__conjunction,
    STATE(922), 1,
      sym_description,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(766), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8157] = 1,
    ACTIONS(554), 23,
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
  [8183] = 3,
    ACTIONS(609), 1,
      anon_sym_and,
    STATE(181), 1,
      aux_sym__conjunction_repeat2,
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
  [8213] = 1,
    ACTIONS(592), 23,
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
  [8239] = 3,
    ACTIONS(640), 1,
      anon_sym_or,
    STATE(191), 1,
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
  [8269] = 3,
    ACTIONS(607), 1,
      anon_sym_and,
    STATE(206), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 21,
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
  [8299] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(278), 1,
      sym__annotations,
    STATE(279), 1,
      sym_data_range,
    STATE(128), 3,
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
  [8353] = 7,
    ACTIONS(615), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(621), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(623), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(183), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(619), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(617), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(643), 13,
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
  [8391] = 2,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(645), 20,
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
  [8419] = 2,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(647), 20,
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
  [8447] = 2,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(649), 20,
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
  [8475] = 1,
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
  [8501] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(542), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(282), 1,
      sym__annotations,
    STATE(434), 1,
      sym_data_range,
    STATE(128), 3,
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
  [8555] = 1,
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
  [8581] = 1,
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
  [8607] = 3,
    ACTIONS(651), 1,
      anon_sym_and,
    STATE(202), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(228), 21,
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
  [8637] = 3,
    ACTIONS(654), 1,
      anon_sym_and,
    STATE(203), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(224), 21,
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
  [8667] = 1,
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
  [8693] = 3,
    ACTIONS(659), 1,
      anon_sym_or,
    STATE(208), 1,
      aux_sym_description_repeat1,
    ACTIONS(508), 21,
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
  [8723] = 3,
    ACTIONS(607), 1,
      anon_sym_and,
    STATE(203), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(468), 21,
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
  [8753] = 1,
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
  [8779] = 3,
    ACTIONS(659), 1,
      anon_sym_or,
    STATE(191), 1,
      aux_sym_description_repeat1,
    ACTIONS(490), 21,
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
  [8809] = 3,
    ACTIONS(607), 1,
      anon_sym_and,
    STATE(203), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 21,
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
  [8839] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_not,
    STATE(336), 1,
      sym__description_2list,
    STATE(723), 1,
      sym_class_iri,
    STATE(784), 1,
      sym__conjunction,
    STATE(940), 1,
      sym_description,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(766), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8893] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_description,
    STATE(253), 1,
      sym_class_iri,
    STATE(258), 1,
      sym__conjunction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(254), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8944] = 3,
    ACTIONS(663), 1,
      anon_sym_or,
    STATE(212), 1,
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
  [8973] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_not,
    STATE(177), 1,
      sym_class_iri,
    STATE(235), 1,
      sym__conjunction,
    STATE(265), 1,
      sym_description,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(189), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9024] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(119), 1,
      sym_class_iri,
    STATE(131), 1,
      sym__conjunction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(110), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9075] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(242), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 20,
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
  [9104] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(253), 1,
      sym_class_iri,
    STATE(258), 1,
      sym__conjunction,
    STATE(300), 1,
      sym_description,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(254), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9155] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      anon_sym_not,
    STATE(304), 1,
      sym_description,
    STATE(382), 1,
      sym_class_iri,
    STATE(412), 1,
      sym__conjunction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(386), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9206] = 3,
    ACTIONS(670), 1,
      anon_sym_or,
    STATE(212), 1,
      aux_sym_description_repeat1,
    ACTIONS(490), 20,
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
  [9235] = 11,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9280] = 3,
    ACTIONS(672), 1,
      anon_sym_and,
    STATE(220), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(228), 20,
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
  [9309] = 11,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9354] = 11,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
    ACTIONS(679), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(682), 1,
      anon_sym_Class_COLON,
    ACTIONS(685), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(688), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(691), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(694), 1,
      anon_sym_Individual_COLON,
    ACTIONS(697), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(700), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(703), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9399] = 3,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(706), 20,
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
  [9428] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(711), 20,
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
  [9457] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(236), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 20,
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
  [9486] = 3,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(715), 20,
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
  [9515] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(720), 20,
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
  [9544] = 11,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9589] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym__data_range_annotated_list_repeat1,
    ACTIONS(711), 20,
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
    ACTIONS(724), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(722), 20,
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
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(225), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(457), 20,
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
  [9676] = 3,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(722), 20,
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
  [9705] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_not,
    STATE(177), 1,
      sym_class_iri,
    STATE(235), 1,
      sym__conjunction,
    STATE(304), 1,
      sym_description,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(189), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9756] = 3,
    ACTIONS(726), 1,
      anon_sym_and,
    STATE(220), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(466), 20,
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
  [9785] = 3,
    ACTIONS(670), 1,
      anon_sym_or,
    STATE(218), 1,
      aux_sym_description_repeat1,
    ACTIONS(508), 20,
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
  [9814] = 3,
    ACTIONS(728), 1,
      anon_sym_and,
    STATE(236), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(224), 20,
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
  [9843] = 3,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(575), 20,
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
  [9872] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(148), 1,
      sym_class_iri,
    STATE(205), 1,
      sym__conjunction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9923] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_not,
    STATE(723), 1,
      sym_class_iri,
    STATE(784), 1,
      sym__conjunction,
    STATE(910), 1,
      sym_description,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(766), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9974] = 3,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(536), 20,
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
  [10003] = 3,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(733), 20,
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
  [10032] = 3,
    ACTIONS(666), 1,
      anon_sym_and,
    STATE(236), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(468), 20,
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
  [10061] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym__data_range_annotated_list_repeat1,
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
  [10090] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_not,
    STATE(177), 1,
      sym_class_iri,
    STATE(235), 1,
      sym__conjunction,
    STATE(260), 1,
      sym_description,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(189), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10141] = 11,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10186] = 3,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym__data_property_expression_annotated_list_repeat1,
    ACTIONS(737), 20,
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
  [10215] = 3,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(575), 20,
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
  [10244] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(148), 1,
      sym_class_iri,
    STATE(205), 1,
      sym__conjunction,
    STATE(237), 1,
      sym_description,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10295] = 11,
    ACTIONS(300), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(302), 1,
      anon_sym_Class_COLON,
    ACTIONS(304), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(306), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(308), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(310), 1,
      anon_sym_Individual_COLON,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(314), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(316), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(222), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [10340] = 3,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    STATE(250), 1,
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
  [10369] = 3,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    STATE(247), 1,
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
  [10398] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(119), 1,
      sym_class_iri,
    STATE(131), 1,
      sym__conjunction,
    STATE(162), 1,
      sym_description,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(110), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10449] = 2,
    ACTIONS(742), 1,
      anon_sym_that,
    ACTIONS(473), 21,
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
  [10476] = 3,
    ACTIONS(726), 1,
      anon_sym_and,
    STATE(234), 1,
      aux_sym__conjunction_repeat2,
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
  [10505] = 1,
    ACTIONS(599), 22,
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
  [10530] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      anon_sym_not,
    STATE(382), 1,
      sym_class_iri,
    STATE(412), 1,
      sym__conjunction,
    STATE(433), 1,
      sym_description,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(386), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10581] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(177), 1,
      sym_class_iri,
    STATE(235), 1,
      sym__conjunction,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(189), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10632] = 3,
    ACTIONS(744), 1,
      anon_sym_or,
    STATE(288), 1,
      aux_sym_description_repeat1,
    ACTIONS(508), 19,
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
  [10660] = 1,
    ACTIONS(68), 21,
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
  [10684] = 3,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(746), 19,
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
  [10712] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(536), 19,
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
  [10740] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(723), 1,
      sym_class_iri,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(766), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10788] = 3,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    STATE(263), 1,
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
  [10816] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(177), 1,
      sym_class_iri,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(189), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10864] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(575), 19,
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
  [10892] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(431), 1,
      sym_data_range,
    STATE(128), 3,
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
  [10940] = 8,
    ACTIONS(759), 1,
      anon_sym_DOT,
    STATE(856), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(757), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(761), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(316), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(755), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [10978] = 8,
    ACTIONS(765), 1,
      anon_sym_DOT,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(757), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(767), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(316), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(763), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11016] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(229), 1,
      sym_data_range,
    STATE(128), 3,
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
  [11064] = 7,
    ACTIONS(771), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(777), 1,
      anon_sym_Domain_COLON,
    ACTIONS(780), 1,
      anon_sym_Range_COLON,
    ACTIONS(783), 1,
      anon_sym_Characteristics_COLON,
    STATE(270), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(774), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(769), 13,
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
  [11100] = 7,
    ACTIONS(788), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(792), 1,
      anon_sym_Domain_COLON,
    ACTIONS(794), 1,
      anon_sym_Range_COLON,
    ACTIONS(796), 1,
      anon_sym_Characteristics_COLON,
    STATE(270), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(790), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(786), 13,
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
  [11136] = 2,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(649), 15,
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
  [11162] = 1,
    ACTIONS(706), 21,
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
  [11186] = 7,
    ACTIONS(788), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(792), 1,
      anon_sym_Domain_COLON,
    ACTIONS(794), 1,
      anon_sym_Range_COLON,
    ACTIONS(796), 1,
      anon_sym_Characteristics_COLON,
    STATE(271), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(790), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(798), 13,
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
  [11222] = 1,
    ACTIONS(800), 21,
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
  [11246] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(382), 1,
      sym_class_iri,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(386), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11294] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(927), 1,
      sym_data_range,
    STATE(128), 3,
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
  [11342] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(284), 1,
      sym_data_range,
    STATE(128), 3,
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
  [11390] = 1,
    ACTIONS(715), 21,
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
  [11414] = 2,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(647), 15,
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
  [11440] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(119), 1,
      sym_class_iri,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(110), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11488] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(165), 1,
      sym__data_conjunction,
    STATE(438), 1,
      sym_data_range,
    STATE(128), 3,
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
  [11536] = 2,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(645), 15,
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
  [11562] = 1,
    ACTIONS(802), 21,
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
  [11586] = 1,
    ACTIONS(804), 21,
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
  [11610] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym__conjunction,
    STATE(253), 1,
      sym_class_iri,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(254), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11658] = 3,
    ACTIONS(806), 1,
      anon_sym_or,
    STATE(287), 1,
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
  [11686] = 3,
    ACTIONS(744), 1,
      anon_sym_or,
    STATE(287), 1,
      aux_sym_description_repeat1,
    ACTIONS(490), 19,
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
  [11714] = 3,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(289), 1,
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
  [11742] = 3,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(814), 19,
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
  [11770] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(292), 1,
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
  [11798] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(575), 19,
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
  [11826] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(67), 1,
      sym__conjunction,
    STATE(148), 1,
      sym_class_iri,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(143), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11874] = 3,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(816), 18,
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
  [11901] = 3,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(295), 1,
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
  [11928] = 3,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 18,
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
  [11955] = 3,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(295), 1,
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
  [11982] = 3,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(816), 18,
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
  [12009] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12052] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(575), 18,
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
  [12079] = 3,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(827), 18,
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
  [12106] = 3,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(827), 18,
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
  [12133] = 3,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 18,
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
  [12160] = 1,
    ACTIONS(809), 20,
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
  [12183] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(668), 1,
      anon_sym_not,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12226] = 3,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(831), 18,
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
  [12253] = 3,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym__individual_annotated_list_repeat1,
    ACTIONS(833), 18,
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
  [12280] = 3,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym__individual_annotated_list_repeat1,
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
  [12307] = 3,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(840), 18,
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
  [12334] = 3,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(845), 18,
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
  [12361] = 3,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym__fact_annotated_list_repeat1,
    ACTIONS(847), 18,
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
  [12388] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(506), 1,
      anon_sym_not,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12431] = 6,
    ACTIONS(851), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(855), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(857), 1,
      anon_sym_HasKey_COLON,
    STATE(322), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(853), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(849), 13,
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
  [12464] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(575), 18,
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
  [12491] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_not,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12534] = 4,
    ACTIONS(859), 2,
      sym__non_zero,
      sym__zero,
    STATE(316), 2,
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
  [12563] = 7,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(864), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(866), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(337), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(106), 5,
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
  [12598] = 1,
    ACTIONS(868), 20,
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
  [12621] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(536), 18,
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
  [12648] = 3,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(320), 1,
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
  [12675] = 3,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(303), 1,
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
  [12702] = 6,
    ACTIONS(851), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(855), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(857), 1,
      anon_sym_HasKey_COLON,
    STATE(327), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(853), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(873), 13,
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
  [12735] = 7,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(864), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(877), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(337), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(875), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [12770] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(188), 1,
      sym__data_conjunction,
    STATE(128), 3,
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
  [12815] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(314), 1,
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
  [12842] = 1,
    ACTIONS(769), 20,
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
  [12865] = 6,
    ACTIONS(879), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(885), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(888), 1,
      anon_sym_HasKey_COLON,
    STATE(327), 1,
      aux_sym_class_frame_repeat2,
    ACTIONS(882), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(212), 13,
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
  [12898] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_not,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12941] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_not,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(60), 4,
      sym_class_iri,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [12984] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(891), 17,
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
  [13010] = 1,
    ACTIONS(212), 19,
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
  [13032] = 6,
    ACTIONS(897), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(899), 1,
      anon_sym_Types_COLON,
    ACTIONS(901), 1,
      anon_sym_Facts_COLON,
    STATE(340), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(903), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(895), 13,
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
  [13064] = 1,
    ACTIONS(66), 19,
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
  [13086] = 4,
    ACTIONS(905), 2,
      sym__non_zero,
      sym__zero,
    STATE(348), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(110), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(112), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13114] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(544), 1,
      anon_sym_not,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(153), 3,
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
  [13156] = 1,
    ACTIONS(198), 19,
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
  [13178] = 4,
    ACTIONS(907), 2,
      sym__non_zero,
      sym__zero,
    STATE(337), 2,
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
  [13206] = 6,
    ACTIONS(912), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(915), 1,
      anon_sym_Types_COLON,
    ACTIONS(918), 1,
      anon_sym_Facts_COLON,
    STATE(338), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(921), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(910), 13,
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
  [13238] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(891), 17,
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
  [13264] = 6,
    ACTIONS(897), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(899), 1,
      anon_sym_Types_COLON,
    ACTIONS(901), 1,
      anon_sym_Facts_COLON,
    STATE(338), 1,
      aux_sym_individual_frame_repeat1,
    ACTIONS(903), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    ACTIONS(924), 13,
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
  [13296] = 3,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(926), 17,
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
  [13322] = 3,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(926), 17,
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
  [13348] = 1,
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
  [13370] = 1,
    ACTIONS(932), 19,
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
  [13392] = 1,
    ACTIONS(934), 19,
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
  [13414] = 1,
    ACTIONS(936), 19,
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
  [13436] = 1,
    ACTIONS(938), 19,
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
  [13458] = 4,
    ACTIONS(940), 2,
      sym__non_zero,
      sym__zero,
    STATE(349), 2,
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
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13486] = 4,
    ACTIONS(942), 2,
      sym__non_zero,
      sym__zero,
    STATE(349), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(122), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(124), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [13514] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(330), 1,
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
  [13540] = 3,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(947), 17,
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
  [13566] = 1,
    ACTIONS(833), 19,
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
  [13588] = 3,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(949), 17,
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
  [13614] = 3,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [13640] = 1,
    ACTIONS(840), 19,
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
  [13662] = 3,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
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
  [13688] = 3,
    ACTIONS(960), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym__annotation_property_iri_annotated_list_repeat1,
    ACTIONS(958), 17,
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
  [13714] = 1,
    ACTIONS(910), 18,
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
  [13735] = 5,
    ACTIONS(965), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(971), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(359), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(968), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(963), 13,
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
  [13764] = 8,
    ACTIONS(81), 1,
      anon_sym_f,
    ACTIONS(263), 1,
      anon_sym_F,
    ACTIONS(976), 1,
      anon_sym_DOT,
    STATE(889), 1,
      sym__exponent,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(974), 2,
      sym__non_zero,
      sym__zero,
    STATE(387), 2,
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
  [13799] = 1,
    ACTIONS(958), 18,
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
  [13820] = 8,
    ACTIONS(91), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_F,
    ACTIONS(978), 1,
      anon_sym_DOT,
    STATE(867), 1,
      sym__exponent,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(974), 2,
      sym__non_zero,
      sym__zero,
    STATE(387), 2,
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
  [13855] = 5,
    ACTIONS(982), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(986), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(371), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(984), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(980), 13,
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
  [13884] = 1,
    ACTIONS(949), 18,
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
  [13905] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13944] = 8,
    ACTIONS(990), 1,
      anon_sym_DOT,
    STATE(883), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(988), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(992), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(399), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(763), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(87), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13979] = 8,
    ACTIONS(994), 1,
      anon_sym_DOT,
    STATE(884), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(988), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(996), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(399), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(755), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14014] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14053] = 1,
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
  [14074] = 1,
    ACTIONS(1000), 18,
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
  [14095] = 5,
    ACTIONS(982), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(986), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(359), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(984), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(1002), 13,
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
  [14124] = 2,
    ACTIONS(1004), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1006), 15,
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
  [14147] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14186] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14225] = 1,
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
  [14246] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14285] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(63), 3,
      sym_class_iri,
      sym__restriction,
      sym__atomic,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(23), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14324] = 7,
    STATE(878), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1010), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1012), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(408), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(862), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(106), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14356] = 3,
    ACTIONS(1014), 1,
      anon_sym_and,
    STATE(384), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(457), 15,
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
  [14380] = 3,
    ACTIONS(1014), 1,
      anon_sym_and,
    STATE(398), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 15,
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
  [14404] = 3,
    ACTIONS(1016), 1,
      anon_sym_and,
    STATE(392), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(466), 15,
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
  [14428] = 2,
    ACTIONS(1018), 1,
      anon_sym_that,
    ACTIONS(473), 16,
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
  [14450] = 10,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    ACTIONS(1020), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1022), 1,
      anon_sym_inverse,
    STATE(419), 1,
      sym__annotations,
    STATE(496), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(919), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(920), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(144), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14488] = 3,
    ACTIONS(1014), 1,
      anon_sym_and,
    STATE(393), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 15,
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
  [14512] = 8,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    STATE(924), 1,
      sym__literal_list,
    STATE(943), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    STATE(836), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [14546] = 3,
    ACTIONS(1016), 1,
      anon_sym_and,
    STATE(381), 1,
      aux_sym__conjunction_repeat2,
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
  [14570] = 4,
    ACTIONS(100), 1,
      anon_sym_F,
    ACTIONS(1028), 2,
      sym__non_zero,
      sym__zero,
    STATE(387), 2,
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
  [14596] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(47), 1,
      sym_datatype,
    STATE(50), 2,
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
  [14634] = 7,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1010), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1031), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(408), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(875), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(102), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14666] = 1,
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
  [14686] = 3,
    ACTIONS(1035), 1,
      anon_sym_Import_COLON,
    STATE(391), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    ACTIONS(1033), 14,
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
  [14710] = 3,
    ACTIONS(1038), 1,
      anon_sym_and,
    STATE(392), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(228), 15,
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
  [14734] = 3,
    ACTIONS(1041), 1,
      anon_sym_and,
    STATE(393), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(224), 15,
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
  [14758] = 7,
    ACTIONS(108), 1,
      anon_sym_f,
    ACTIONS(273), 1,
      anon_sym_F,
    STATE(882), 1,
      sym__exponent,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(974), 2,
      sym__non_zero,
      sym__zero,
    STATE(387), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(106), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14790] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    STATE(943), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    STATE(894), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [14822] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    STATE(943), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    STATE(839), 8,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym__restriction_value,
  [14854] = 7,
    ACTIONS(104), 1,
      anon_sym_f,
    ACTIONS(278), 1,
      anon_sym_F,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(974), 2,
      sym__non_zero,
      sym__zero,
    STATE(387), 2,
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
  [14886] = 3,
    ACTIONS(1014), 1,
      anon_sym_and,
    STATE(393), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(468), 15,
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
  [14910] = 4,
    ACTIONS(1044), 2,
      sym__non_zero,
      sym__zero,
    STATE(399), 2,
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
  [14936] = 4,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1051), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(409), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1047), 13,
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
  [14961] = 8,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_inverse,
    ACTIONS(206), 1,
      sym__pn_local,
    ACTIONS(208), 1,
      sym__pname_ln,
    ACTIONS(1020), 1,
      anon_sym_Annotations_COLON,
    STATE(477), 1,
      sym__annotations,
    STATE(144), 4,
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
      aux_sym_class_frame_repeat1,
  [14994] = 3,
    ACTIONS(1055), 1,
      anon_sym_Annotations_COLON,
    STATE(402), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1053), 14,
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
  [15017] = 3,
    ACTIONS(1060), 1,
      anon_sym_Annotations_COLON,
    STATE(403), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1058), 13,
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
  [15040] = 4,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1065), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(400), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1063), 13,
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
  [15065] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    STATE(914), 1,
      sym__lexial_value,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1067), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
      aux_sym__digits,
      sym__digit,
    STATE(54), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15096] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    STATE(914), 1,
      sym__lexial_value,
    ACTIONS(425), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1067), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
      aux_sym__digits,
      sym__digit,
    STATE(346), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15127] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    STATE(943), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    STATE(886), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15158] = 4,
    ACTIONS(1069), 2,
      sym__non_zero,
      sym__zero,
    STATE(408), 2,
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
  [15183] = 4,
    ACTIONS(1053), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(1055), 1,
      anon_sym_Annotations_COLON,
    STATE(402), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1072), 13,
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
  [15208] = 3,
    ACTIONS(1075), 1,
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
  [15231] = 3,
    ACTIONS(1078), 1,
      anon_sym_or,
    STATE(410), 1,
      aux_sym_description_repeat1,
    ACTIONS(490), 14,
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
  [15254] = 3,
    ACTIONS(1078), 1,
      anon_sym_or,
    STATE(411), 1,
      aux_sym_description_repeat1,
    ACTIONS(508), 14,
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
  [15277] = 11,
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
    STATE(358), 1,
      sym__fact_annotated_list,
    STATE(406), 1,
      sym_data_property_iri,
    STATE(501), 1,
      sym__annotations,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(311), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15316] = 7,
    ACTIONS(294), 1,
      sym__quoted_string,
    ACTIONS(1026), 1,
      anon_sym_DOT,
    STATE(914), 1,
      sym__lexial_value,
    ACTIONS(288), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1024), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    STATE(54), 7,
      sym__literal,
      sym_typed_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_integer_literal,
      sym_decimal_literal,
      sym_floating_point_literal,
  [15347] = 3,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(814), 13,
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
  [15369] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1092), 1,
      anon_sym_not,
    STATE(231), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15403] = 1,
    ACTIONS(1094), 15,
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
  [15421] = 8,
    ACTIONS(1098), 1,
      anon_sym_DOT,
    STATE(895), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(755), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1096), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1100), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(484), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15453] = 8,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    ACTIONS(1022), 1,
      anon_sym_inverse,
    STATE(505), 2,
      sym__object_property_2list,
      sym__data_property_2list,
    STATE(919), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(920), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(144), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
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
    STATE(180), 1,
      sym__restriction,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15519] = 9,
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
    STATE(713), 1,
      sym__restriction,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15553] = 8,
    ACTIONS(1106), 1,
      anon_sym_DOT,
    STATE(849), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(763), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1096), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1108), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(484), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15585] = 9,
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
    STATE(57), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15619] = 1,
    ACTIONS(1112), 15,
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
  [15637] = 9,
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
    STATE(57), 1,
      sym__restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15671] = 3,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    STATE(402), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1116), 13,
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
  [15693] = 10,
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
    STATE(406), 1,
      sym_data_property_iri,
    STATE(495), 1,
      sym__annotations,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(355), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15729] = 3,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    STATE(402), 1,
      aux_sym_datatype_frame_repeat1,
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
  [15751] = 1,
    ACTIONS(1120), 15,
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
  [15769] = 3,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    STATE(402), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1122), 13,
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
  [15791] = 3,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    STATE(428), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1116), 13,
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
  [15813] = 2,
    ACTIONS(186), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(188), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [15833] = 3,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      aux_sym__description_2list_repeat1,
    ACTIONS(746), 13,
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
  [15855] = 3,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    STATE(430), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1124), 13,
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
  [15877] = 9,
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
    STATE(57), 1,
      sym__restriction,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15911] = 9,
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
    STATE(57), 1,
      sym__restriction,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15945] = 8,
    ACTIONS(1132), 1,
      anon_sym_DOT,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(763), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1130), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1134), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(458), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15977] = 3,
    ACTIONS(1049), 1,
      anon_sym_Annotations_COLON,
    STATE(426), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(1122), 13,
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
  [15999] = 3,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      aux_sym__object_property_2list_repeat1,
    ACTIONS(1136), 13,
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
  [16021] = 3,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym__object_property_2list_repeat1,
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
  [16043] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1142), 13,
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
  [16065] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1146), 1,
      anon_sym_not,
    STATE(57), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16099] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1148), 1,
      anon_sym_not,
    STATE(106), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16133] = 3,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(444), 1,
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
  [16155] = 3,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1155), 13,
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
  [16177] = 3,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1120), 13,
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
  [16199] = 8,
    ACTIONS(1162), 1,
      anon_sym_DOT,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(755), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1130), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1164), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(458), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16231] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1166), 1,
      anon_sym_not,
    STATE(379), 1,
      sym__restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16265] = 3,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(449), 1,
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
  [16287] = 8,
    ACTIONS(1175), 1,
      anon_sym_DOT,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(755), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1173), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1177), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(468), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16319] = 3,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    STATE(451), 1,
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
  [16341] = 1,
    ACTIONS(1053), 15,
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
  [16359] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1182), 1,
      anon_sym_not,
    STATE(146), 1,
      sym__restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16393] = 8,
    ACTIONS(1184), 1,
      anon_sym_DOT,
    STATE(868), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(763), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1173), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1186), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(468), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16425] = 3,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym__data_property_2list_repeat1,
    ACTIONS(1188), 13,
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
  [16447] = 3,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      aux_sym__individual_2list_repeat1,
    ACTIONS(1190), 13,
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
  [16469] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1192), 1,
      anon_sym_not,
    STATE(57), 1,
      sym__restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16503] = 4,
    ACTIONS(1194), 2,
      sym__non_zero,
      sym__zero,
    STATE(458), 2,
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
  [16526] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(380), 1,
      sym__restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16557] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1020), 1,
      anon_sym_Annotations_COLON,
    STATE(255), 1,
      sym__object_property_expression_annotated_list,
    STATE(575), 1,
      sym__annotations,
    STATE(173), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16590] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(105), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16621] = 7,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(862), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1197), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1199), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(507), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(106), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16650] = 7,
    STATE(873), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(875), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1197), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1201), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(507), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16679] = 9,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1203), 1,
      anon_sym_Annotations_COLON,
    STATE(496), 1,
      sym__individual_2list,
    STATE(518), 1,
      sym__annotations,
    STATE(918), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16712] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1203), 1,
      anon_sym_Annotations_COLON,
    STATE(358), 1,
      sym__individual_annotated_list,
    STATE(556), 1,
      sym__annotations,
    STATE(308), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16745] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(53), 1,
      sym__restriction,
    STATE(664), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16776] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(53), 1,
      sym__restriction,
    STATE(666), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16807] = 4,
    ACTIONS(1205), 2,
      sym__non_zero,
      sym__zero,
    STATE(468), 2,
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
  [16830] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(53), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16861] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(53), 1,
      sym__restriction,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16892] = 1,
    ACTIONS(1168), 14,
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
  [16909] = 1,
    ACTIONS(1150), 14,
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
  [16926] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(53), 1,
      sym__restriction,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16957] = 7,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(875), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1208), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1210), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(488), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16986] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(53), 1,
      sym__restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17017] = 7,
    STATE(885), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(862), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1208), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1212), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(488), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(106), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17046] = 6,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_inverse,
    ACTIONS(206), 1,
      sym__pn_local,
    ACTIONS(208), 1,
      sym__pname_ln,
    STATE(144), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(49), 6,
      sym_data_property_iri,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
      sym__data_property_expression,
      aux_sym_class_frame_repeat1,
  [17073] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(192), 1,
      sym__restriction,
    STATE(676), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17104] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(716), 1,
      sym__restriction,
    STATE(675), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17135] = 7,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(862), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1214), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1216), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(504), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(106), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17164] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(215), 1,
      sym__restriction,
    STATE(665), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17195] = 8,
    ACTIONS(755), 1,
      sym__pn_local,
    ACTIONS(1220), 1,
      anon_sym_DOT,
    STATE(861), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1218), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1222), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(499), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17226] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(142), 1,
      sym__restriction,
    STATE(672), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(925), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(663), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17257] = 4,
    ACTIONS(1224), 2,
      sym__non_zero,
      sym__zero,
    STATE(484), 2,
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
  [17280] = 7,
    STATE(896), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(875), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1214), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1227), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(504), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17309] = 8,
    ACTIONS(763), 1,
      sym__pn_local,
    ACTIONS(1229), 1,
      anon_sym_DOT,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1218), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1231), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(499), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17340] = 7,
    ACTIONS(429), 1,
      anon_sym_LT,
    ACTIONS(443), 1,
      sym__pn_local,
    ACTIONS(445), 1,
      sym__pname_ln,
    STATE(788), 1,
      sym_datatype,
    STATE(813), 1,
      sym_datatype_iri,
    ACTIONS(1233), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(812), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17368] = 4,
    ACTIONS(1235), 2,
      sym__non_zero,
      sym__zero,
    STATE(488), 2,
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
  [17390] = 7,
    ACTIONS(351), 1,
      anon_sym_LT,
    ACTIONS(365), 1,
      sym__pn_local,
    ACTIONS(367), 1,
      sym__pname_ln,
    STATE(738), 1,
      sym_datatype,
    STATE(761), 1,
      sym_datatype_iri,
    ACTIONS(1238), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(760), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17418] = 7,
    ACTIONS(875), 1,
      sym__pn_local,
    STATE(864), 1,
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
    STATE(519), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17446] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(16), 1,
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
  [17474] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    ACTIONS(1203), 1,
      anon_sym_Annotations_COLON,
    STATE(543), 1,
      sym__annotations,
    STATE(352), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17504] = 7,
    ACTIONS(405), 1,
      anon_sym_LT,
    ACTIONS(419), 1,
      sym__pn_local,
    ACTIONS(421), 1,
      sym__pname_ln,
    STATE(710), 1,
      sym_datatype_iri,
    STATE(739), 1,
      sym_datatype,
    ACTIONS(1244), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(711), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17532] = 7,
    ACTIONS(862), 1,
      sym__pn_local,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(85), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1240), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1246), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(519), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(106), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [17560] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1084), 1,
      anon_sym_not,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(406), 1,
      sym_data_property_iri,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(344), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17590] = 1,
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
  [17606] = 7,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(16), 1,
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
  [17634] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(12), 1,
      sym_datatype_iri,
    STATE(404), 1,
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
  [17662] = 4,
    ACTIONS(1250), 2,
      sym__non_zero,
      sym__zero,
    STATE(499), 2,
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
  [17684] = 7,
    ACTIONS(333), 1,
      anon_sym_LT,
    ACTIONS(347), 1,
      sym__pn_local,
    ACTIONS(349), 1,
      sym__pname_ln,
    STATE(545), 1,
      sym_datatype,
    STATE(563), 1,
      sym_datatype_iri,
    ACTIONS(1253), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(564), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17712] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1084), 1,
      anon_sym_not,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(406), 1,
      sym_data_property_iri,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(302), 3,
      sym__fact,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17742] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1020), 1,
      anon_sym_Annotations_COLON,
    STATE(541), 1,
      sym__annotations,
    STATE(185), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17772] = 8,
    ACTIONS(1020), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1255), 1,
      anon_sym_LT,
    ACTIONS(1257), 1,
      anon_sym_inverse,
    ACTIONS(1259), 1,
      sym__pn_local,
    ACTIONS(1261), 1,
      sym__pname_ln,
    STATE(551), 1,
      sym__annotations,
    STATE(175), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17802] = 4,
    ACTIONS(1263), 2,
      sym__non_zero,
      sym__zero,
    STATE(504), 2,
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
  [17824] = 1,
    ACTIONS(1266), 13,
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
  [17840] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1270), 1,
      sym__language_tag,
    ACTIONS(41), 5,
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
  [17862] = 4,
    ACTIONS(1272), 2,
      sym__non_zero,
      sym__zero,
    STATE(507), 2,
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
  [17884] = 7,
    ACTIONS(369), 1,
      anon_sym_LT,
    ACTIONS(383), 1,
      sym__pn_local,
    ACTIONS(385), 1,
      sym__pname_ln,
    STATE(652), 1,
      sym_datatype_iri,
    STATE(662), 1,
      sym_datatype,
    ACTIONS(1275), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(651), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17912] = 7,
    ACTIONS(387), 1,
      anon_sym_LT,
    ACTIONS(401), 1,
      sym__pn_local,
    ACTIONS(403), 1,
      sym__pname_ln,
    STATE(702), 1,
      sym_datatype,
    STATE(754), 1,
      sym_datatype_iri,
    ACTIONS(1277), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(753), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17940] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(103), 1,
      sym_annotation_property_iri,
    STATE(615), 1,
      sym__annotations,
    STATE(749), 1,
      sym_annotation,
    STATE(840), 1,
      sym__annotation_annotated_list,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17971] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(326), 1,
      sym__data_property_expression_annotated_list,
    STATE(628), 1,
      sym__annotations,
    STATE(246), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(259), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18000] = 4,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(520), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1281), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18021] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(95), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(331), 1,
      sym__annotation_annotated_list,
    STATE(595), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18052] = 7,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(911), 1,
      sym__individual_list,
    STATE(842), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18079] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(95), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(326), 1,
      sym__annotation_annotated_list,
    STATE(595), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18110] = 4,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1285), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18131] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(95), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(390), 1,
      sym__annotation_annotated_list,
    STATE(595), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18162] = 7,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(505), 1,
      sym__individual_2list,
    STATE(918), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18189] = 4,
    ACTIONS(1287), 2,
      sym__non_zero,
      sym__zero,
    STATE(519), 2,
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
  [18210] = 4,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(526), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1285), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18231] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(275), 1,
      sym__annotation_annotated_list,
    STATE(590), 1,
      sym__annotations,
    STATE(613), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18262] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(102), 1,
      sym_annotation_property_iri,
    STATE(321), 1,
      sym_annotation,
    STATE(358), 1,
      sym__annotation_annotated_list,
    STATE(605), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18293] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(606), 1,
      sym_annotation,
    STATE(624), 1,
      sym__annotations,
    STATE(668), 1,
      sym__annotation_annotated_list,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18324] = 4,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(526), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1290), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18345] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(618), 1,
      sym__annotations,
    STATE(692), 1,
      sym_annotation,
    STATE(773), 1,
      sym__annotation_annotated_list,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18376] = 4,
    ACTIONS(1294), 1,
      anon_sym_COMMA,
    STATE(526), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 4,
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
  [18397] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(96), 1,
      sym_annotation_property_iri,
    STATE(512), 1,
      sym_annotation,
    STATE(579), 1,
      sym__annotation_annotated_list,
    STATE(633), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18428] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(95), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(275), 1,
      sym__annotation_annotated_list,
    STATE(595), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18459] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(95), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(255), 1,
      sym__annotation_annotated_list,
    STATE(595), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18490] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation_property_iri,
    STATE(631), 1,
      sym__annotations,
    STATE(679), 1,
      sym_annotation,
    STATE(779), 1,
      sym__annotation_annotated_list,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18521] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(596), 1,
      sym__annotations,
    STATE(680), 1,
      sym_annotation,
    STATE(789), 1,
      sym__annotation_annotated_list,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18552] = 9,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(95), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(452), 1,
      sym__annotation_annotated_list,
    STATE(595), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18583] = 6,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(429), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18607] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(54), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18631] = 2,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(649), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18647] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(96), 1,
      sym_annotation_property_iri,
    STATE(569), 1,
      sym_annotation,
    STATE(601), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18675] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(621), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18703] = 2,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1297), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18719] = 2,
    ACTIONS(27), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(645), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18735] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(612), 1,
      sym__annotations,
    STATE(724), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18763] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(207), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18787] = 6,
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
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18811] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(343), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18835] = 2,
    ACTIONS(147), 5,
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
  [18851] = 2,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1301), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18867] = 7,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(406), 1,
      sym_data_property_iri,
    STATE(552), 1,
      sym_object_property_iri,
    STATE(345), 2,
      sym__object_property_fact,
      sym__data_property_fact,
    STATE(577), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18893] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(100), 1,
      sym_annotation_property_iri,
    STATE(626), 1,
      sym__annotations,
    STATE(700), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18921] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(102), 1,
      sym_annotation_property_iri,
    STATE(598), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18949] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(351), 1,
      sym_annotation_property_iri,
    STATE(390), 1,
      sym__annotation_property_iri_annotated_list,
    STATE(638), 1,
      sym__annotations,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18977] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(611), 1,
      sym__annotations,
    STATE(660), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19005] = 6,
    ACTIONS(1255), 1,
      anon_sym_LT,
    ACTIONS(1257), 1,
      anon_sym_inverse,
    ACTIONS(1259), 1,
      sym__pn_local,
    ACTIONS(1261), 1,
      sym__pname_ln,
    STATE(174), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19029] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(347), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19053] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(332), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19077] = 2,
    ACTIONS(61), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1303), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19093] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(623), 1,
      sym__annotations,
    STATE(273), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(259), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19119] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(298), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19143] = 6,
    ACTIONS(1255), 1,
      anon_sym_LT,
    ACTIONS(1257), 1,
      anon_sym_inverse,
    ACTIONS(1259), 1,
      sym__pn_local,
    ACTIONS(1261), 1,
      sym__pname_ln,
    STATE(190), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19167] = 2,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1305), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19183] = 2,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1307), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19199] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(445), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19223] = 2,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(647), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19239] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(284), 1,
      anon_sym__COLON,
    STATE(429), 3,
      sym_individual_iri,
      sym__individual,
      sym_node_id,
    STATE(48), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19263] = 2,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1309), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19279] = 2,
    ACTIONS(47), 5,
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
  [19295] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(37), 1,
      sym_annotation,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(604), 1,
      sym__annotations,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19323] = 5,
    ACTIONS(1313), 1,
      anon_sym_Annotations_COLON,
    STATE(176), 1,
      sym__object_property_characteristic,
    STATE(255), 1,
      sym__object_property_characteristic_annotated_list,
    STATE(645), 1,
      sym__annotations,
    ACTIONS(1315), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19345] = 2,
    ACTIONS(141), 5,
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
  [19361] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(103), 1,
      sym_annotation_property_iri,
    STATE(592), 1,
      sym__annotations,
    STATE(802), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19389] = 2,
    ACTIONS(143), 5,
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
  [19405] = 2,
    ACTIONS(93), 5,
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
  [19421] = 8,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(594), 1,
      sym__annotations,
    STATE(742), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19449] = 2,
    ACTIONS(51), 5,
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
  [19465] = 2,
    ACTIONS(73), 5,
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
  [19481] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(440), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19505] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(160), 3,
      sym_object_property_iri,
      sym__object_property_expression,
      sym__inverse_object_property,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19529] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1325), 1,
      sym__language_tag,
    ACTIONS(1268), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(41), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19548] = 4,
    ACTIONS(68), 2,
      anon_sym_PLUS,
      sym__quoted_string,
    ACTIONS(498), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(605), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1327), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
  [19567] = 2,
    ACTIONS(1008), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(1329), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19582] = 2,
    ACTIONS(800), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1331), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [19597] = 3,
    STATE(396), 1,
      sym__facet,
    ACTIONS(1333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1335), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [19614] = 4,
    ACTIONS(1313), 1,
      anon_sym_Annotations_COLON,
    STATE(186), 1,
      sym__object_property_characteristic,
    STATE(647), 1,
      sym__annotations,
    ACTIONS(1337), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19633] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(390), 1,
      sym__iri_annotated_list,
    STATE(673), 1,
      sym__annotations,
    STATE(350), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19658] = 2,
    ACTIONS(27), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(645), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19673] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(361), 1,
      sym_annotation_property_iri,
    STATE(650), 1,
      sym__annotations,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19698] = 3,
    STATE(395), 1,
      sym__facet,
    ACTIONS(1339), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1341), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [19715] = 2,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(649), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19730] = 2,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(647), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19745] = 5,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(104), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [19765] = 5,
    STATE(873), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1343), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [19785] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(617), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19807] = 5,
    STATE(864), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1345), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [19827] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(103), 1,
      sym_annotation_property_iri,
    STATE(785), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19849] = 5,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1347), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [19869] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(736), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19891] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(91), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19913] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(97), 1,
      sym_annotation_property_iri,
    STATE(681), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19935] = 5,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1349), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [19955] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(39), 1,
      sym_annotation,
    STATE(102), 1,
      sym_annotation_property_iri,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19977] = 5,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1351), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [19997] = 5,
    STATE(857), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1353), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20017] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(96), 1,
      sym_annotation_property_iri,
    STATE(544), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20039] = 4,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(602), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1292), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20057] = 5,
    STATE(875), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1358), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20077] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(39), 1,
      sym_annotation,
    STATE(104), 1,
      sym_annotation_property_iri,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20099] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(102), 1,
      sym_annotation_property_iri,
    STATE(296), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20121] = 4,
    ACTIONS(1360), 1,
      anon_sym_COMMA,
    STATE(622), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1281), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(331), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20139] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    ACTIONS(1279), 1,
      anon_sym_Annotations_COLON,
    STATE(670), 1,
      sym__annotations,
    STATE(364), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20161] = 3,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    STATE(610), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20177] = 3,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    STATE(610), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20193] = 3,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    STATE(610), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20209] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(656), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20231] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(744), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20253] = 3,
    ACTIONS(1362), 1,
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
  [20269] = 5,
    STATE(868), 1,
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
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20289] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(103), 1,
      sym_annotation_property_iri,
    STATE(763), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20311] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(441), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(259), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20331] = 3,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    STATE(609), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20347] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(101), 1,
      sym_annotation_property_iri,
    STATE(677), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20369] = 5,
    STATE(867), 1,
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
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20389] = 4,
    ACTIONS(1360), 1,
      anon_sym_COMMA,
    STATE(602), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1290), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(329), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20407] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(39), 1,
      sym_annotation,
    STATE(118), 1,
      sym_annotation_property_iri,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20429] = 4,
    ACTIONS(1360), 1,
      anon_sym_COMMA,
    STATE(602), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1285), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20447] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(285), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(259), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20467] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(99), 1,
      sym_annotation_property_iri,
    STATE(629), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20489] = 5,
    STATE(896), 1,
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
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20509] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(100), 1,
      sym_annotation_property_iri,
    STATE(703), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20531] = 5,
    STATE(849), 1,
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
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20551] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(232), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(259), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20571] = 4,
    ACTIONS(1360), 1,
      anon_sym_COMMA,
    STATE(620), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1285), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(322), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20589] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(472), 2,
      sym_data_property_iri,
      sym__data_property_expression,
    STATE(259), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20609] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(100), 1,
      sym_annotation_property_iri,
    STATE(687), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20631] = 5,
    STATE(883), 1,
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
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20651] = 6,
    ACTIONS(1080), 1,
      anon_sym_LT,
    ACTIONS(1086), 1,
      sym__pn_local,
    ACTIONS(1088), 1,
      sym__pname_ln,
    STATE(96), 1,
      sym_annotation_property_iri,
    STATE(516), 1,
      sym_annotation,
    STATE(578), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20673] = 5,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(83), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1375), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [20693] = 2,
    ACTIONS(1317), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(141), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20706] = 2,
    ACTIONS(1297), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20719] = 2,
    ACTIONS(1305), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20732] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(342), 1,
      sym_annotation_property_iri,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20751] = 2,
    ACTIONS(647), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20764] = 2,
    ACTIONS(649), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20777] = 2,
    ACTIONS(1307), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20790] = 2,
    ACTIONS(645), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(27), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20803] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(122), 1,
      sym_object_property_iri,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20822] = 5,
    ACTIONS(1255), 1,
      anon_sym_LT,
    ACTIONS(1259), 1,
      sym__pn_local,
    ACTIONS(1261), 1,
      sym__pname_ln,
    STATE(122), 1,
      sym_object_property_iri,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20841] = 2,
    STATE(169), 1,
      sym__object_property_characteristic,
    ACTIONS(1377), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20854] = 5,
    ACTIONS(178), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      sym__pn_local,
    ACTIONS(182), 1,
      sym__pname_ln,
    STATE(122), 1,
      sym_object_property_iri,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20873] = 2,
    STATE(204), 1,
      sym__object_property_characteristic,
    ACTIONS(1379), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20886] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(363), 1,
      sym_annotation_property_iri,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20905] = 2,
    ACTIONS(1319), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20918] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(369), 1,
      sym_annotation_property_iri,
    STATE(375), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20937] = 2,
    ACTIONS(1311), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20950] = 2,
    ACTIONS(1309), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20963] = 2,
    ACTIONS(1321), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20976] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(313), 1,
      sym_class_iri,
    STATE(333), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20995] = 2,
    ACTIONS(1323), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21008] = 2,
    ACTIONS(1299), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(147), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21021] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(194), 1,
      sym_object_property_iri,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21040] = 5,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      sym__pn_local,
    ACTIONS(208), 1,
      sym__pname_ln,
    STATE(182), 1,
      sym_object_property_iri,
    STATE(179), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21059] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(274), 1,
      sym_data_property_iri,
    STATE(259), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21078] = 2,
    ACTIONS(1292), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21091] = 2,
    ACTIONS(1303), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(61), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21104] = 2,
    ACTIONS(1301), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [21117] = 2,
    ACTIONS(70), 1,
      anon_sym_value,
    ACTIONS(68), 6,
      anon_sym_some,
      anon_sym_only,
      anon_sym_Self,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21129] = 4,
    ACTIONS(1383), 1,
      anon_sym_Self,
    ACTIONS(1387), 1,
      anon_sym_value,
    ACTIONS(1381), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1385), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21145] = 4,
    ACTIONS(1383), 1,
      anon_sym_Self,
    ACTIONS(1393), 1,
      anon_sym_value,
    ACTIONS(1389), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1391), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21161] = 4,
    ACTIONS(1383), 1,
      anon_sym_Self,
    ACTIONS(1387), 1,
      anon_sym_value,
    ACTIONS(1395), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1397), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21177] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1399), 1,
      sym__language_tag,
    ACTIONS(1268), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21193] = 2,
    ACTIONS(1331), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(800), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [21205] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1401), 1,
      sym__language_tag,
    ACTIONS(1268), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21221] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(370), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21237] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1403), 1,
      sym__language_tag,
    ACTIONS(1268), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21253] = 4,
    ACTIONS(1383), 1,
      anon_sym_Self,
    ACTIONS(1387), 1,
      anon_sym_value,
    ACTIONS(1405), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1407), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21269] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(339), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21285] = 4,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__pn_local,
    ACTIONS(25), 1,
      sym__pname_ln,
    STATE(417), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [21301] = 4,
    ACTIONS(1383), 1,
      anon_sym_Self,
    ACTIONS(1387), 1,
      anon_sym_value,
    ACTIONS(1409), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1411), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21317] = 4,
    ACTIONS(1383), 1,
      anon_sym_Self,
    ACTIONS(1387), 1,
      anon_sym_value,
    ACTIONS(1413), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1415), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [21333] = 4,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1285), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21348] = 4,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1285), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21363] = 4,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1281), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21378] = 4,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(682), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1281), 2,
      anon_sym_not,
      sym__pn_local,
  [21393] = 4,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(684), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1285), 2,
      anon_sym_not,
      sym__pn_local,
  [21408] = 4,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1285), 2,
      anon_sym_not,
      sym__pn_local,
  [21423] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1268), 1,
      sym__pn_local,
    ACTIONS(1423), 1,
      sym__language_tag,
    ACTIONS(41), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21438] = 4,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1290), 2,
      anon_sym_not,
      sym__pn_local,
  [21453] = 4,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym_not,
      sym__pn_local,
  [21468] = 4,
    ACTIONS(1428), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21483] = 4,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(693), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1285), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21498] = 4,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(690), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1285), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21513] = 3,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1431), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [21526] = 4,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    STATE(690), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1292), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21541] = 4,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(686), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1290), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21556] = 4,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(678), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1281), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21571] = 4,
    ACTIONS(1419), 1,
      anon_sym_COMMA,
    STATE(690), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1290), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21586] = 3,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1436), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [21599] = 3,
    ACTIONS(1438), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1440), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(694), 2,
      aux_sym__digits,
      sym__digit,
  [21612] = 3,
    ACTIONS(1444), 1,
      anon_sym_SLASH,
    STATE(737), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1442), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [21624] = 2,
    ACTIONS(1303), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21634] = 2,
    ACTIONS(1321), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21644] = 2,
    ACTIONS(1323), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21654] = 2,
    ACTIONS(1292), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21664] = 3,
    ACTIONS(1448), 1,
      anon_sym_DOT,
    ACTIONS(1446), 2,
      sym__non_zero,
      sym__zero,
    STATE(362), 2,
      aux_sym__digits,
      sym__digit,
  [21676] = 2,
    ACTIONS(1301), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21686] = 2,
    ACTIONS(1299), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21696] = 2,
    ACTIONS(1297), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21706] = 2,
    ACTIONS(1307), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21716] = 2,
    ACTIONS(1305), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21726] = 2,
    ACTIONS(645), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21736] = 2,
    ACTIONS(647), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21746] = 2,
    ACTIONS(649), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21756] = 2,
    ACTIONS(1309), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21766] = 2,
    ACTIONS(1311), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21776] = 3,
    ACTIONS(1452), 1,
      anon_sym_DOT,
    ACTIONS(1450), 2,
      sym__non_zero,
      sym__zero,
    STATE(454), 2,
      aux_sym__digits,
      sym__digit,
  [21788] = 3,
    ACTIONS(1454), 1,
      anon_sym_and,
    STATE(718), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(457), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21800] = 3,
    ACTIONS(1456), 1,
      anon_sym_and,
    STATE(714), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(228), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21812] = 2,
    ACTIONS(1317), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21822] = 3,
    ACTIONS(1454), 1,
      anon_sym_and,
    STATE(732), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21834] = 3,
    ACTIONS(1461), 1,
      anon_sym_DOT,
    ACTIONS(1459), 2,
      sym__non_zero,
      sym__zero,
    STATE(437), 2,
      aux_sym__digits,
      sym__digit,
  [21846] = 3,
    ACTIONS(1454), 1,
      anon_sym_and,
    STATE(734), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(453), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21858] = 3,
    ACTIONS(1465), 1,
      anon_sym_DOT,
    ACTIONS(1463), 2,
      sym__non_zero,
      sym__zero,
    STATE(366), 2,
      aux_sym__digits,
      sym__digit,
  [21870] = 2,
    ACTIONS(1319), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21880] = 2,
    ACTIONS(1321), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21890] = 2,
    ACTIONS(1323), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21900] = 2,
    ACTIONS(1467), 1,
      anon_sym_that,
    ACTIONS(473), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21910] = 2,
    ACTIONS(1292), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21920] = 3,
    ACTIONS(1448), 1,
      anon_sym_DOT,
    ACTIONS(1469), 2,
      sym__non_zero,
      sym__zero,
    STATE(71), 2,
      aux_sym__digits,
      sym__digit,
  [21932] = 2,
    ACTIONS(1319), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21942] = 2,
    ACTIONS(645), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21952] = 2,
    ACTIONS(647), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21962] = 2,
    ACTIONS(649), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21972] = 2,
    ACTIONS(1305), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21982] = 2,
    ACTIONS(1307), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21992] = 3,
    ACTIONS(1454), 1,
      anon_sym_and,
    STATE(734), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(468), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22004] = 3,
    ACTIONS(1471), 1,
      anon_sym_and,
    STATE(714), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(466), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22016] = 3,
    ACTIONS(1473), 1,
      anon_sym_and,
    STATE(734), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(224), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22028] = 2,
    ACTIONS(1297), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22038] = 2,
    ACTIONS(1299), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22048] = 3,
    ACTIONS(1478), 1,
      anon_sym_SLASH,
    STATE(737), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1476), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [22060] = 2,
    ACTIONS(1301), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22070] = 2,
    ACTIONS(1301), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22080] = 2,
    ACTIONS(1303), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22090] = 3,
    ACTIONS(1448), 1,
      anon_sym_DOT,
    ACTIONS(1481), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
  [22102] = 2,
    ACTIONS(1292), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22112] = 2,
    ACTIONS(1317), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22122] = 2,
    ACTIONS(1299), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22132] = 2,
    ACTIONS(1297), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22142] = 2,
    ACTIONS(1323), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22152] = 2,
    ACTIONS(1321), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22162] = 2,
    ACTIONS(1307), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22172] = 4,
    ACTIONS(1281), 1,
      sym__pn_local,
    ACTIONS(1483), 1,
      anon_sym_COMMA,
    STATE(752), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22186] = 2,
    ACTIONS(1319), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22196] = 3,
    ACTIONS(1487), 1,
      anon_sym_DOT,
    ACTIONS(1485), 2,
      sym__non_zero,
      sym__zero,
    STATE(422), 2,
      aux_sym__digits,
      sym__digit,
  [22208] = 4,
    ACTIONS(1285), 1,
      sym__pn_local,
    ACTIONS(1483), 1,
      anon_sym_COMMA,
    STATE(764), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22222] = 2,
    ACTIONS(1311), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22232] = 2,
    ACTIONS(1309), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22242] = 2,
    ACTIONS(1317), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22252] = 4,
    ACTIONS(1290), 1,
      sym__pn_local,
    ACTIONS(1483), 1,
      anon_sym_COMMA,
    STATE(764), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(329), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22266] = 2,
    ACTIONS(1305), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22276] = 3,
    ACTIONS(1491), 1,
      anon_sym_DOT,
    ACTIONS(1489), 2,
      sym__non_zero,
      sym__zero,
    STATE(268), 2,
      aux_sym__digits,
      sym__digit,
  [22288] = 2,
    ACTIONS(645), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22298] = 2,
    ACTIONS(1311), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22308] = 2,
    ACTIONS(1309), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22318] = 3,
    ACTIONS(1495), 1,
      anon_sym_DOT,
    ACTIONS(1493), 2,
      sym__non_zero,
      sym__zero,
    STATE(486), 2,
      aux_sym__digits,
      sym__digit,
  [22330] = 4,
    ACTIONS(1285), 1,
      sym__pn_local,
    ACTIONS(1483), 1,
      anon_sym_COMMA,
    STATE(756), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22344] = 4,
    ACTIONS(1292), 1,
      sym__pn_local,
    ACTIONS(1497), 1,
      anon_sym_COMMA,
    STATE(764), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22358] = 4,
    ACTIONS(3), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(5), 1,
      anon_sym_Ontology_COLON,
    STATE(934), 1,
      sym_ontology,
    STATE(778), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [22372] = 3,
    ACTIONS(1471), 1,
      anon_sym_and,
    STATE(733), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(459), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22384] = 2,
    ACTIONS(647), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22394] = 2,
    ACTIONS(649), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22404] = 2,
    ACTIONS(1303), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22414] = 2,
    ACTIONS(647), 1,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22423] = 2,
    ACTIONS(1500), 2,
      sym__non_zero,
      sym__zero,
    STATE(614), 2,
      aux_sym__digits,
      sym__digit,
  [22432] = 2,
    ACTIONS(1305), 1,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22441] = 2,
    ACTIONS(800), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1331), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22450] = 4,
    ACTIONS(1502), 1,
      sym__non_zero,
    ACTIONS(1504), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(65), 1,
      sym__positive_integer,
  [22463] = 2,
    ACTIONS(1307), 1,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22472] = 4,
    ACTIONS(1506), 1,
      sym__non_zero,
    ACTIONS(1508), 1,
      sym__zero,
    STATE(9), 1,
      sym_non_negative_integer,
    STATE(90), 1,
      sym__positive_integer,
  [22485] = 2,
    ACTIONS(645), 1,
      sym__pn_local,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22494] = 3,
    ACTIONS(1510), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(1513), 1,
      anon_sym_Ontology_COLON,
    STATE(778), 2,
      sym_prefix_declaration,
      aux_sym__ontology_document_repeat1,
  [22505] = 2,
    ACTIONS(800), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1331), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22514] = 2,
    ACTIONS(649), 1,
      sym__pn_local,
    ACTIONS(35), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22523] = 2,
    ACTIONS(1515), 2,
      sym__non_zero,
      sym__zero,
    STATE(323), 2,
      aux_sym__digits,
      sym__digit,
  [22532] = 2,
    ACTIONS(1517), 2,
      sym__non_zero,
      sym__zero,
    STATE(317), 2,
      aux_sym__digits,
      sym__digit,
  [22541] = 2,
    ACTIONS(1297), 1,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22550] = 3,
    ACTIONS(1519), 1,
      anon_sym_or,
    STATE(818), 1,
      aux_sym_description_repeat1,
    ACTIONS(508), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22561] = 2,
    ACTIONS(1299), 1,
      sym__pn_local,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22570] = 2,
    ACTIONS(1521), 2,
      sym__non_zero,
      sym__zero,
    STATE(627), 2,
      aux_sym__digits,
      sym__digit,
  [22579] = 2,
    ACTIONS(1523), 2,
      sym__non_zero,
      sym__zero,
    STATE(619), 2,
      aux_sym__digits,
      sym__digit,
  [22588] = 2,
    ACTIONS(1301), 1,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22597] = 2,
    ACTIONS(800), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1331), 2,
      anon_sym_not,
      sym__pn_local,
  [22606] = 2,
    ACTIONS(1525), 2,
      sym__non_zero,
      sym__zero,
    STATE(634), 2,
      aux_sym__digits,
      sym__digit,
  [22615] = 4,
    ACTIONS(1527), 1,
      sym__non_zero,
    ACTIONS(1529), 1,
      sym__zero,
    STATE(58), 1,
      sym_non_negative_integer,
    STATE(432), 1,
      sym__positive_integer,
  [22628] = 2,
    ACTIONS(1531), 2,
      sym__non_zero,
      sym__zero,
    STATE(389), 2,
      aux_sym__digits,
      sym__digit,
  [22637] = 2,
    ACTIONS(1533), 2,
      sym__non_zero,
      sym__zero,
    STATE(397), 2,
      aux_sym__digits,
      sym__digit,
  [22646] = 2,
    ACTIONS(1535), 2,
      sym__non_zero,
      sym__zero,
    STATE(394), 2,
      aux_sym__digits,
      sym__digit,
  [22655] = 4,
    ACTIONS(1537), 1,
      sym__iunreserved,
    STATE(874), 1,
      sym__ihost,
    STATE(876), 1,
      sym__iauthority,
    STATE(913), 1,
      sym__iuserinfo,
  [22668] = 2,
    ACTIONS(1303), 1,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22677] = 2,
    ACTIONS(1539), 2,
      sym__non_zero,
      sym__zero,
    STATE(463), 2,
      aux_sym__digits,
      sym__digit,
  [22686] = 2,
    ACTIONS(1541), 2,
      sym__non_zero,
      sym__zero,
    STATE(494), 2,
      aux_sym__digits,
      sym__digit,
  [22695] = 2,
    ACTIONS(1543), 2,
      sym__non_zero,
      sym__zero,
    STATE(474), 2,
      aux_sym__digits,
      sym__digit,
  [22704] = 2,
    ACTIONS(1545), 2,
      sym__non_zero,
      sym__zero,
    STATE(476), 2,
      aux_sym__digits,
      sym__digit,
  [22713] = 2,
    ACTIONS(1547), 2,
      sym__non_zero,
      sym__zero,
    STATE(588), 2,
      aux_sym__digits,
      sym__digit,
  [22722] = 2,
    ACTIONS(1292), 1,
      sym__pn_local,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22731] = 2,
    ACTIONS(1549), 2,
      sym__non_zero,
      sym__zero,
    STATE(378), 2,
      aux_sym__digits,
      sym__digit,
  [22740] = 2,
    ACTIONS(1551), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      aux_sym__digits,
      sym__digit,
  [22749] = 2,
    ACTIONS(1553), 2,
      sym__non_zero,
      sym__zero,
    STATE(599), 2,
      aux_sym__digits,
      sym__digit,
  [22758] = 2,
    ACTIONS(1323), 1,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22767] = 2,
    ACTIONS(1555), 2,
      sym__non_zero,
      sym__zero,
    STATE(490), 2,
      aux_sym__digits,
      sym__digit,
  [22776] = 2,
    ACTIONS(1321), 1,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22785] = 2,
    ACTIONS(1319), 1,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22794] = 2,
    ACTIONS(1557), 2,
      sym__non_zero,
      sym__zero,
    STATE(593), 2,
      aux_sym__digits,
      sym__digit,
  [22803] = 2,
    ACTIONS(1317), 1,
      sym__pn_local,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22812] = 2,
    ACTIONS(1311), 1,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22821] = 2,
    ACTIONS(1309), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22830] = 2,
    ACTIONS(1559), 2,
      sym__non_zero,
      sym__zero,
    STATE(591), 2,
      aux_sym__digits,
      sym__digit,
  [22839] = 2,
    ACTIONS(1561), 2,
      sym__non_zero,
      sym__zero,
    STATE(462), 2,
      aux_sym__digits,
      sym__digit,
  [22848] = 2,
    ACTIONS(1563), 2,
      sym__non_zero,
      sym__zero,
    STATE(603), 2,
      aux_sym__digits,
      sym__digit,
  [22857] = 2,
    ACTIONS(1565), 2,
      sym__non_zero,
      sym__zero,
    STATE(597), 2,
      aux_sym__digits,
      sym__digit,
  [22866] = 3,
    ACTIONS(1519), 1,
      anon_sym_or,
    STATE(826), 1,
      aux_sym_description_repeat1,
    ACTIONS(490), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22877] = 2,
    ACTIONS(1567), 2,
      sym__non_zero,
      sym__zero,
    STATE(600), 2,
      aux_sym__digits,
      sym__digit,
  [22886] = 2,
    ACTIONS(1569), 2,
      sym__non_zero,
      sym__zero,
    STATE(625), 2,
      aux_sym__digits,
      sym__digit,
  [22895] = 4,
    ACTIONS(1571), 1,
      sym__non_zero,
    ACTIONS(1573), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(44), 1,
      sym__positive_integer,
  [22908] = 2,
    ACTIONS(1575), 2,
      sym__non_zero,
      sym__zero,
    STATE(74), 2,
      aux_sym__digits,
      sym__digit,
  [22917] = 1,
    ACTIONS(1476), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [22924] = 4,
    ACTIONS(1577), 1,
      sym__non_zero,
    ACTIONS(1579), 1,
      sym__zero,
    STATE(6), 1,
      sym_non_negative_integer,
    STATE(68), 1,
      sym__positive_integer,
  [22937] = 2,
    ACTIONS(1581), 2,
      sym__non_zero,
      sym__zero,
    STATE(589), 2,
      aux_sym__digits,
      sym__digit,
  [22946] = 3,
    ACTIONS(1583), 1,
      anon_sym_or,
    STATE(826), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22957] = 2,
    ACTIONS(1586), 2,
      sym__non_zero,
      sym__zero,
    STATE(632), 2,
      aux_sym__digits,
      sym__digit,
  [22966] = 2,
    ACTIONS(1588), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
  [22975] = 4,
    ACTIONS(1590), 1,
      sym__non_zero,
    ACTIONS(1592), 1,
      sym__zero,
    STATE(4), 1,
      sym_non_negative_integer,
    STATE(46), 1,
      sym__positive_integer,
  [22988] = 2,
    ACTIONS(1594), 2,
      sym__non_zero,
      sym__zero,
    STATE(485), 2,
      aux_sym__digits,
      sym__digit,
  [22997] = 2,
    ACTIONS(1596), 2,
      sym__non_zero,
      sym__zero,
    STATE(27), 2,
      aux_sym__digits,
      sym__digit,
  [23006] = 2,
    ACTIONS(1598), 2,
      sym__non_zero,
      sym__zero,
    STATE(689), 2,
      aux_sym__digits,
      sym__digit,
  [23015] = 2,
    ACTIONS(1600), 2,
      sym__non_zero,
      sym__zero,
    STATE(480), 2,
      aux_sym__digits,
      sym__digit,
  [23024] = 2,
    ACTIONS(1604), 1,
      anon_sym_AT,
    ACTIONS(1602), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [23032] = 3,
    ACTIONS(1606), 1,
      anon_sym_RBRACE,
    ACTIONS(1608), 1,
      anon_sym_COMMA,
    STATE(843), 1,
      aux_sym__individual_2list_repeat1,
  [23042] = 3,
    ACTIONS(1610), 1,
      anon_sym_RBRACE,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    STATE(845), 1,
      aux_sym__literal_list_repeat1,
  [23052] = 3,
    ACTIONS(1614), 1,
      anon_sym_RBRACE,
    ACTIONS(1616), 1,
      anon_sym_COMMA,
    STATE(837), 1,
      aux_sym__literal_list_repeat1,
  [23062] = 3,
    ACTIONS(1619), 1,
      anon_sym_COMMA,
    ACTIONS(1621), 1,
      anon_sym_RBRACK,
    STATE(846), 1,
      aux_sym_datatype_restriction_repeat1,
  [23072] = 3,
    ACTIONS(1619), 1,
      anon_sym_COMMA,
    ACTIONS(1623), 1,
      anon_sym_RBRACK,
    STATE(838), 1,
      aux_sym_datatype_restriction_repeat1,
  [23082] = 2,
    ACTIONS(1331), 1,
      sym__pn_local,
    ACTIONS(800), 2,
      anon_sym_LT,
      sym__pname_ln,
  [23090] = 3,
    ACTIONS(1625), 1,
      anon_sym_GT,
    ACTIONS(1627), 1,
      sym__iquery,
    ACTIONS(1629), 1,
      sym__ifragment,
  [23100] = 3,
    ACTIONS(1608), 1,
      anon_sym_COMMA,
    ACTIONS(1631), 1,
      anon_sym_RBRACE,
    STATE(835), 1,
      aux_sym__individual_2list_repeat1,
  [23110] = 3,
    ACTIONS(1120), 1,
      anon_sym_RBRACE,
    ACTIONS(1633), 1,
      anon_sym_COMMA,
    STATE(843), 1,
      aux_sym__individual_2list_repeat1,
  [23120] = 3,
    ACTIONS(1313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1636), 1,
      anon_sym_Functional,
    STATE(909), 1,
      sym__annotations,
  [23130] = 3,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    ACTIONS(1638), 1,
      anon_sym_RBRACE,
    STATE(837), 1,
      aux_sym__literal_list_repeat1,
  [23140] = 3,
    ACTIONS(1640), 1,
      anon_sym_COMMA,
    ACTIONS(1643), 1,
      anon_sym_RBRACK,
    STATE(846), 1,
      aux_sym_datatype_restriction_repeat1,
  [23150] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(902), 1,
      sym__iri_rfc3987,
  [23157] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(906), 1,
      sym__iri_rfc3987,
  [23164] = 1,
    ACTIONS(1369), 2,
      anon_sym_f,
      anon_sym_F,
  [23169] = 1,
    ACTIONS(108), 2,
      anon_sym_f,
      anon_sym_F,
  [23174] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(859), 1,
      sym_full_iri,
  [23181] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(930), 1,
      sym__iri_rfc3987,
  [23188] = 2,
    ACTIONS(1647), 1,
      sym__iunreserved,
    STATE(879), 1,
      sym__ihost,
  [23195] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(933), 1,
      sym__iri_rfc3987,
  [23202] = 2,
    ACTIONS(1649), 1,
      sym__iunreserved,
    STATE(823), 1,
      sym__isegment,
  [23209] = 1,
    ACTIONS(1353), 2,
      anon_sym_f,
      anon_sym_F,
  [23214] = 1,
    ACTIONS(1349), 2,
      anon_sym_f,
      anon_sym_F,
  [23219] = 1,
    ACTIONS(1651), 2,
      anon_sym_f,
      anon_sym_F,
  [23224] = 1,
    ACTIONS(1653), 2,
      anon_sym_Prefix_COLON,
      anon_sym_Ontology_COLON,
  [23229] = 1,
    ACTIONS(1655), 2,
      anon_sym_f,
      anon_sym_F,
  [23234] = 1,
    ACTIONS(1347), 2,
      anon_sym_f,
      anon_sym_F,
  [23239] = 1,
    ACTIONS(1657), 2,
      anon_sym_f,
      anon_sym_F,
  [23244] = 1,
    ACTIONS(1345), 2,
      anon_sym_f,
      anon_sym_F,
  [23249] = 1,
    ACTIONS(1659), 2,
      anon_sym_f,
      anon_sym_F,
  [23254] = 2,
    ACTIONS(1661), 1,
      anon_sym_SLASH_SLASH,
    STATE(841), 1,
      sym__ihier_part,
  [23261] = 1,
    ACTIONS(1367), 2,
      anon_sym_f,
      anon_sym_F,
  [23266] = 1,
    ACTIONS(104), 2,
      anon_sym_f,
      anon_sym_F,
  [23271] = 1,
    ACTIONS(1343), 2,
      anon_sym_f,
      anon_sym_F,
  [23276] = 1,
    ACTIONS(1358), 2,
      anon_sym_f,
      anon_sym_F,
  [23281] = 2,
    ACTIONS(1663), 1,
      anon_sym_GT,
    ACTIONS(1665), 1,
      sym__ifragment,
  [23288] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(929), 1,
      sym__iri_rfc3987,
  [23295] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(900), 1,
      sym__iri_rfc3987,
  [23302] = 1,
    ACTIONS(1667), 2,
      anon_sym_f,
      anon_sym_F,
  [23307] = 2,
    ACTIONS(1669), 1,
      anon_sym_COLON,
    ACTIONS(1671), 1,
      anon_sym_SLASH,
  [23314] = 1,
    ACTIONS(1351), 2,
      anon_sym_f,
      anon_sym_F,
  [23319] = 2,
    ACTIONS(1444), 1,
      anon_sym_SLASH,
    STATE(696), 1,
      aux_sym__ipath_abempty,
  [23326] = 1,
    ACTIONS(1673), 2,
      anon_sym_f,
      anon_sym_F,
  [23331] = 1,
    ACTIONS(1675), 2,
      anon_sym_f,
      anon_sym_F,
  [23336] = 2,
    ACTIONS(1677), 1,
      anon_sym_COLON,
    ACTIONS(1679), 1,
      anon_sym_SLASH,
  [23343] = 1,
    ACTIONS(1681), 2,
      anon_sym_f,
      anon_sym_F,
  [23348] = 1,
    ACTIONS(1683), 2,
      anon_sym_f,
      anon_sym_F,
  [23353] = 1,
    ACTIONS(1685), 2,
      anon_sym_f,
      anon_sym_F,
  [23358] = 1,
    ACTIONS(1375), 2,
      anon_sym_f,
      anon_sym_F,
  [23363] = 1,
    ACTIONS(1373), 2,
      anon_sym_f,
      anon_sym_F,
  [23368] = 1,
    ACTIONS(1687), 2,
      anon_sym_f,
      anon_sym_F,
  [23373] = 1,
    ACTIONS(1614), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [23378] = 1,
    ACTIONS(1689), 2,
      anon_sym_f,
      anon_sym_F,
  [23383] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(939), 1,
      sym__iri_rfc3987,
  [23390] = 1,
    ACTIONS(91), 2,
      anon_sym_f,
      anon_sym_F,
  [23395] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(899), 1,
      sym__iri_rfc3987,
  [23402] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(903), 1,
      sym__iri_rfc3987,
  [23409] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(904), 1,
      sym__iri_rfc3987,
  [23416] = 2,
    ACTIONS(1645), 1,
      sym__scheme,
    STATE(926), 1,
      sym__iri_rfc3987,
  [23423] = 1,
    ACTIONS(1691), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [23428] = 1,
    ACTIONS(1371), 2,
      anon_sym_f,
      anon_sym_F,
  [23433] = 1,
    ACTIONS(1693), 2,
      anon_sym_f,
      anon_sym_F,
  [23438] = 1,
    ACTIONS(1695), 1,
      sym__pn_local,
  [23442] = 1,
    ACTIONS(1697), 1,
      sym__pn_local,
  [23446] = 1,
    ACTIONS(1699), 1,
      anon_sym_GT,
  [23450] = 1,
    ACTIONS(1701), 1,
      anon_sym_GT,
  [23454] = 1,
    ACTIONS(1703), 1,
      sym__pn_local,
  [23458] = 1,
    ACTIONS(1705), 1,
      anon_sym_GT,
  [23462] = 1,
    ACTIONS(1707), 1,
      anon_sym_GT,
  [23466] = 1,
    ACTIONS(1709), 1,
      anon_sym_GT,
  [23470] = 1,
    ACTIONS(1711), 1,
      anon_sym_CARET_CARET,
  [23474] = 1,
    ACTIONS(1713), 1,
      anon_sym_GT,
  [23478] = 1,
    ACTIONS(1715), 1,
      anon_sym_CARET_CARET,
  [23482] = 1,
    ACTIONS(1717), 1,
      sym_prefix_name,
  [23486] = 1,
    ACTIONS(1719), 1,
      anon_sym_Functional,
  [23490] = 1,
    ACTIONS(1721), 1,
      anon_sym_RPAREN,
  [23494] = 1,
    ACTIONS(1721), 1,
      anon_sym_RBRACE,
  [23498] = 1,
    ACTIONS(1679), 1,
      anon_sym_SLASH,
  [23502] = 1,
    ACTIONS(1723), 1,
      anon_sym_AT,
  [23506] = 1,
    ACTIONS(1725), 1,
      anon_sym_CARET_CARET,
  [23510] = 1,
    ACTIONS(1663), 1,
      anon_sym_GT,
  [23514] = 1,
    ACTIONS(1727), 1,
      anon_sym_CARET_CARET,
  [23518] = 1,
    ACTIONS(1729), 1,
      anon_sym_CARET_CARET,
  [23522] = 1,
    ACTIONS(1731), 1,
      anon_sym_COMMA,
  [23526] = 1,
    ACTIONS(1733), 1,
      anon_sym_COMMA,
  [23530] = 1,
    ACTIONS(1735), 1,
      anon_sym_COMMA,
  [23534] = 1,
    ACTIONS(1737), 1,
      sym__port,
  [23538] = 1,
    ACTIONS(1739), 1,
      anon_sym_COMMA,
  [23542] = 1,
    ACTIONS(1741), 1,
      anon_sym_SLASH,
  [23546] = 1,
    ACTIONS(1743), 1,
      anon_sym_RBRACE,
  [23550] = 1,
    ACTIONS(1745), 1,
      anon_sym_value,
  [23554] = 1,
    ACTIONS(1747), 1,
      anon_sym_GT,
  [23558] = 1,
    ACTIONS(1743), 1,
      anon_sym_RPAREN,
  [23562] = 1,
    ACTIONS(1749), 1,
      sym__pn_local,
  [23566] = 1,
    ACTIONS(1751), 1,
      anon_sym_GT,
  [23570] = 1,
    ACTIONS(1753), 1,
      anon_sym_GT,
  [23574] = 1,
    ACTIONS(1755), 1,
      anon_sym_COLON,
  [23578] = 1,
    ACTIONS(1757), 1,
      sym__pn_local,
  [23582] = 1,
    ACTIONS(1759), 1,
      anon_sym_GT,
  [23586] = 1,
    ACTIONS(1761), 1,
      ts_builtin_sym_end,
  [23590] = 1,
    ACTIONS(1763), 1,
      sym__pn_local,
  [23594] = 1,
    ACTIONS(1765), 1,
      anon_sym_CARET_CARET,
  [23598] = 1,
    ACTIONS(1767), 1,
      anon_sym_CARET_CARET,
  [23602] = 1,
    ACTIONS(1769), 1,
      sym__pn_local,
  [23606] = 1,
    ACTIONS(1771), 1,
      anon_sym_GT,
  [23610] = 1,
    ACTIONS(1773), 1,
      anon_sym_COMMA,
  [23614] = 1,
    ACTIONS(1775), 1,
      sym__port,
  [23618] = 1,
    ACTIONS(1777), 1,
      anon_sym_GT,
  [23622] = 1,
    ACTIONS(1779), 1,
      anon_sym_CARET_CARET,
  [23626] = 1,
    ACTIONS(1781), 1,
      ts_builtin_sym_end,
  [23630] = 1,
    ACTIONS(1783), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 227,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 394,
  [SMALL_STATE(8)] = 447,
  [SMALL_STATE(9)] = 500,
  [SMALL_STATE(10)] = 578,
  [SMALL_STATE(11)] = 629,
  [SMALL_STATE(12)] = 675,
  [SMALL_STATE(13)] = 721,
  [SMALL_STATE(14)] = 766,
  [SMALL_STATE(15)] = 811,
  [SMALL_STATE(16)] = 856,
  [SMALL_STATE(17)] = 901,
  [SMALL_STATE(18)] = 946,
  [SMALL_STATE(19)] = 991,
  [SMALL_STATE(20)] = 1044,
  [SMALL_STATE(21)] = 1089,
  [SMALL_STATE(22)] = 1147,
  [SMALL_STATE(23)] = 1205,
  [SMALL_STATE(24)] = 1253,
  [SMALL_STATE(25)] = 1297,
  [SMALL_STATE(26)] = 1346,
  [SMALL_STATE(27)] = 1401,
  [SMALL_STATE(28)] = 1456,
  [SMALL_STATE(29)] = 1505,
  [SMALL_STATE(30)] = 1554,
  [SMALL_STATE(31)] = 1603,
  [SMALL_STATE(32)] = 1650,
  [SMALL_STATE(33)] = 1697,
  [SMALL_STATE(34)] = 1744,
  [SMALL_STATE(35)] = 1790,
  [SMALL_STATE(36)] = 1836,
  [SMALL_STATE(37)] = 1876,
  [SMALL_STATE(38)] = 1916,
  [SMALL_STATE(39)] = 1962,
  [SMALL_STATE(40)] = 2002,
  [SMALL_STATE(41)] = 2047,
  [SMALL_STATE(42)] = 2124,
  [SMALL_STATE(43)] = 2201,
  [SMALL_STATE(44)] = 2246,
  [SMALL_STATE(45)] = 2287,
  [SMALL_STATE(46)] = 2332,
  [SMALL_STATE(47)] = 2371,
  [SMALL_STATE(48)] = 2410,
  [SMALL_STATE(49)] = 2447,
  [SMALL_STATE(50)] = 2497,
  [SMALL_STATE(51)] = 2533,
  [SMALL_STATE(52)] = 2583,
  [SMALL_STATE(53)] = 2619,
  [SMALL_STATE(54)] = 2655,
  [SMALL_STATE(55)] = 2691,
  [SMALL_STATE(56)] = 2727,
  [SMALL_STATE(57)] = 2801,
  [SMALL_STATE(58)] = 2837,
  [SMALL_STATE(59)] = 2903,
  [SMALL_STATE(60)] = 2939,
  [SMALL_STATE(61)] = 2975,
  [SMALL_STATE(62)] = 3011,
  [SMALL_STATE(63)] = 3047,
  [SMALL_STATE(64)] = 3083,
  [SMALL_STATE(65)] = 3119,
  [SMALL_STATE(66)] = 3157,
  [SMALL_STATE(67)] = 3207,
  [SMALL_STATE(68)] = 3242,
  [SMALL_STATE(69)] = 3279,
  [SMALL_STATE(70)] = 3319,
  [SMALL_STATE(71)] = 3369,
  [SMALL_STATE(72)] = 3419,
  [SMALL_STATE(73)] = 3459,
  [SMALL_STATE(74)] = 3499,
  [SMALL_STATE(75)] = 3546,
  [SMALL_STATE(76)] = 3585,
  [SMALL_STATE(77)] = 3632,
  [SMALL_STATE(78)] = 3665,
  [SMALL_STATE(79)] = 3698,
  [SMALL_STATE(80)] = 3756,
  [SMALL_STATE(81)] = 3814,
  [SMALL_STATE(82)] = 3872,
  [SMALL_STATE(83)] = 3930,
  [SMALL_STATE(84)] = 3988,
  [SMALL_STATE(85)] = 4050,
  [SMALL_STATE(86)] = 4108,
  [SMALL_STATE(87)] = 4167,
  [SMALL_STATE(88)] = 4226,
  [SMALL_STATE(89)] = 4285,
  [SMALL_STATE(90)] = 4344,
  [SMALL_STATE(91)] = 4376,
  [SMALL_STATE(92)] = 4410,
  [SMALL_STATE(93)] = 4444,
  [SMALL_STATE(94)] = 4478,
  [SMALL_STATE(95)] = 4512,
  [SMALL_STATE(96)] = 4546,
  [SMALL_STATE(97)] = 4597,
  [SMALL_STATE(98)] = 4648,
  [SMALL_STATE(99)] = 4703,
  [SMALL_STATE(100)] = 4754,
  [SMALL_STATE(101)] = 4805,
  [SMALL_STATE(102)] = 4856,
  [SMALL_STATE(103)] = 4907,
  [SMALL_STATE(104)] = 4958,
  [SMALL_STATE(105)] = 5009,
  [SMALL_STATE(106)] = 5042,
  [SMALL_STATE(107)] = 5075,
  [SMALL_STATE(108)] = 5130,
  [SMALL_STATE(109)] = 5185,
  [SMALL_STATE(110)] = 5240,
  [SMALL_STATE(111)] = 5273,
  [SMALL_STATE(112)] = 5306,
  [SMALL_STATE(113)] = 5339,
  [SMALL_STATE(114)] = 5394,
  [SMALL_STATE(115)] = 5427,
  [SMALL_STATE(116)] = 5482,
  [SMALL_STATE(117)] = 5515,
  [SMALL_STATE(118)] = 5548,
  [SMALL_STATE(119)] = 5599,
  [SMALL_STATE(120)] = 5630,
  [SMALL_STATE(121)] = 5662,
  [SMALL_STATE(122)] = 5722,
  [SMALL_STATE(123)] = 5750,
  [SMALL_STATE(124)] = 5802,
  [SMALL_STATE(125)] = 5834,
  [SMALL_STATE(126)] = 5894,
  [SMALL_STATE(127)] = 5954,
  [SMALL_STATE(128)] = 5982,
  [SMALL_STATE(129)] = 6014,
  [SMALL_STATE(130)] = 6066,
  [SMALL_STATE(131)] = 6126,
  [SMALL_STATE(132)] = 6158,
  [SMALL_STATE(133)] = 6190,
  [SMALL_STATE(134)] = 6250,
  [SMALL_STATE(135)] = 6302,
  [SMALL_STATE(136)] = 6334,
  [SMALL_STATE(137)] = 6386,
  [SMALL_STATE(138)] = 6446,
  [SMALL_STATE(139)] = 6503,
  [SMALL_STATE(140)] = 6534,
  [SMALL_STATE(141)] = 6565,
  [SMALL_STATE(142)] = 6596,
  [SMALL_STATE(143)] = 6627,
  [SMALL_STATE(144)] = 6658,
  [SMALL_STATE(145)] = 6687,
  [SMALL_STATE(146)] = 6718,
  [SMALL_STATE(147)] = 6749,
  [SMALL_STATE(148)] = 6780,
  [SMALL_STATE(149)] = 6809,
  [SMALL_STATE(150)] = 6866,
  [SMALL_STATE(151)] = 6897,
  [SMALL_STATE(152)] = 6928,
  [SMALL_STATE(153)] = 6959,
  [SMALL_STATE(154)] = 6986,
  [SMALL_STATE(155)] = 7043,
  [SMALL_STATE(156)] = 7074,
  [SMALL_STATE(157)] = 7105,
  [SMALL_STATE(158)] = 7162,
  [SMALL_STATE(159)] = 7193,
  [SMALL_STATE(160)] = 7224,
  [SMALL_STATE(161)] = 7255,
  [SMALL_STATE(162)] = 7286,
  [SMALL_STATE(163)] = 7317,
  [SMALL_STATE(164)] = 7348,
  [SMALL_STATE(165)] = 7379,
  [SMALL_STATE(166)] = 7410,
  [SMALL_STATE(167)] = 7441,
  [SMALL_STATE(168)] = 7472,
  [SMALL_STATE(169)] = 7529,
  [SMALL_STATE(170)] = 7560,
  [SMALL_STATE(171)] = 7591,
  [SMALL_STATE(172)] = 7622,
  [SMALL_STATE(173)] = 7653,
  [SMALL_STATE(174)] = 7684,
  [SMALL_STATE(175)] = 7715,
  [SMALL_STATE(176)] = 7746,
  [SMALL_STATE(177)] = 7777,
  [SMALL_STATE(178)] = 7805,
  [SMALL_STATE(179)] = 7859,
  [SMALL_STATE(180)] = 7887,
  [SMALL_STATE(181)] = 7917,
  [SMALL_STATE(182)] = 7947,
  [SMALL_STATE(183)] = 7975,
  [SMALL_STATE(184)] = 8013,
  [SMALL_STATE(185)] = 8051,
  [SMALL_STATE(186)] = 8077,
  [SMALL_STATE(187)] = 8103,
  [SMALL_STATE(188)] = 8157,
  [SMALL_STATE(189)] = 8183,
  [SMALL_STATE(190)] = 8213,
  [SMALL_STATE(191)] = 8239,
  [SMALL_STATE(192)] = 8269,
  [SMALL_STATE(193)] = 8299,
  [SMALL_STATE(194)] = 8353,
  [SMALL_STATE(195)] = 8391,
  [SMALL_STATE(196)] = 8419,
  [SMALL_STATE(197)] = 8447,
  [SMALL_STATE(198)] = 8475,
  [SMALL_STATE(199)] = 8501,
  [SMALL_STATE(200)] = 8555,
  [SMALL_STATE(201)] = 8581,
  [SMALL_STATE(202)] = 8607,
  [SMALL_STATE(203)] = 8637,
  [SMALL_STATE(204)] = 8667,
  [SMALL_STATE(205)] = 8693,
  [SMALL_STATE(206)] = 8723,
  [SMALL_STATE(207)] = 8753,
  [SMALL_STATE(208)] = 8779,
  [SMALL_STATE(209)] = 8809,
  [SMALL_STATE(210)] = 8839,
  [SMALL_STATE(211)] = 8893,
  [SMALL_STATE(212)] = 8944,
  [SMALL_STATE(213)] = 8973,
  [SMALL_STATE(214)] = 9024,
  [SMALL_STATE(215)] = 9075,
  [SMALL_STATE(216)] = 9104,
  [SMALL_STATE(217)] = 9155,
  [SMALL_STATE(218)] = 9206,
  [SMALL_STATE(219)] = 9235,
  [SMALL_STATE(220)] = 9280,
  [SMALL_STATE(221)] = 9309,
  [SMALL_STATE(222)] = 9354,
  [SMALL_STATE(223)] = 9399,
  [SMALL_STATE(224)] = 9428,
  [SMALL_STATE(225)] = 9457,
  [SMALL_STATE(226)] = 9486,
  [SMALL_STATE(227)] = 9515,
  [SMALL_STATE(228)] = 9544,
  [SMALL_STATE(229)] = 9589,
  [SMALL_STATE(230)] = 9618,
  [SMALL_STATE(231)] = 9647,
  [SMALL_STATE(232)] = 9676,
  [SMALL_STATE(233)] = 9705,
  [SMALL_STATE(234)] = 9756,
  [SMALL_STATE(235)] = 9785,
  [SMALL_STATE(236)] = 9814,
  [SMALL_STATE(237)] = 9843,
  [SMALL_STATE(238)] = 9872,
  [SMALL_STATE(239)] = 9923,
  [SMALL_STATE(240)] = 9974,
  [SMALL_STATE(241)] = 10003,
  [SMALL_STATE(242)] = 10032,
  [SMALL_STATE(243)] = 10061,
  [SMALL_STATE(244)] = 10090,
  [SMALL_STATE(245)] = 10141,
  [SMALL_STATE(246)] = 10186,
  [SMALL_STATE(247)] = 10215,
  [SMALL_STATE(248)] = 10244,
  [SMALL_STATE(249)] = 10295,
  [SMALL_STATE(250)] = 10340,
  [SMALL_STATE(251)] = 10369,
  [SMALL_STATE(252)] = 10398,
  [SMALL_STATE(253)] = 10449,
  [SMALL_STATE(254)] = 10476,
  [SMALL_STATE(255)] = 10505,
  [SMALL_STATE(256)] = 10530,
  [SMALL_STATE(257)] = 10581,
  [SMALL_STATE(258)] = 10632,
  [SMALL_STATE(259)] = 10660,
  [SMALL_STATE(260)] = 10684,
  [SMALL_STATE(261)] = 10712,
  [SMALL_STATE(262)] = 10740,
  [SMALL_STATE(263)] = 10788,
  [SMALL_STATE(264)] = 10816,
  [SMALL_STATE(265)] = 10864,
  [SMALL_STATE(266)] = 10892,
  [SMALL_STATE(267)] = 10940,
  [SMALL_STATE(268)] = 10978,
  [SMALL_STATE(269)] = 11016,
  [SMALL_STATE(270)] = 11064,
  [SMALL_STATE(271)] = 11100,
  [SMALL_STATE(272)] = 11136,
  [SMALL_STATE(273)] = 11162,
  [SMALL_STATE(274)] = 11186,
  [SMALL_STATE(275)] = 11222,
  [SMALL_STATE(276)] = 11246,
  [SMALL_STATE(277)] = 11294,
  [SMALL_STATE(278)] = 11342,
  [SMALL_STATE(279)] = 11390,
  [SMALL_STATE(280)] = 11414,
  [SMALL_STATE(281)] = 11440,
  [SMALL_STATE(282)] = 11488,
  [SMALL_STATE(283)] = 11536,
  [SMALL_STATE(284)] = 11562,
  [SMALL_STATE(285)] = 11586,
  [SMALL_STATE(286)] = 11610,
  [SMALL_STATE(287)] = 11658,
  [SMALL_STATE(288)] = 11686,
  [SMALL_STATE(289)] = 11714,
  [SMALL_STATE(290)] = 11742,
  [SMALL_STATE(291)] = 11770,
  [SMALL_STATE(292)] = 11798,
  [SMALL_STATE(293)] = 11826,
  [SMALL_STATE(294)] = 11874,
  [SMALL_STATE(295)] = 11901,
  [SMALL_STATE(296)] = 11928,
  [SMALL_STATE(297)] = 11955,
  [SMALL_STATE(298)] = 11982,
  [SMALL_STATE(299)] = 12009,
  [SMALL_STATE(300)] = 12052,
  [SMALL_STATE(301)] = 12079,
  [SMALL_STATE(302)] = 12106,
  [SMALL_STATE(303)] = 12133,
  [SMALL_STATE(304)] = 12160,
  [SMALL_STATE(305)] = 12183,
  [SMALL_STATE(306)] = 12226,
  [SMALL_STATE(307)] = 12253,
  [SMALL_STATE(308)] = 12280,
  [SMALL_STATE(309)] = 12307,
  [SMALL_STATE(310)] = 12334,
  [SMALL_STATE(311)] = 12361,
  [SMALL_STATE(312)] = 12388,
  [SMALL_STATE(313)] = 12431,
  [SMALL_STATE(314)] = 12464,
  [SMALL_STATE(315)] = 12491,
  [SMALL_STATE(316)] = 12534,
  [SMALL_STATE(317)] = 12563,
  [SMALL_STATE(318)] = 12598,
  [SMALL_STATE(319)] = 12621,
  [SMALL_STATE(320)] = 12648,
  [SMALL_STATE(321)] = 12675,
  [SMALL_STATE(322)] = 12702,
  [SMALL_STATE(323)] = 12735,
  [SMALL_STATE(324)] = 12770,
  [SMALL_STATE(325)] = 12815,
  [SMALL_STATE(326)] = 12842,
  [SMALL_STATE(327)] = 12865,
  [SMALL_STATE(328)] = 12898,
  [SMALL_STATE(329)] = 12941,
  [SMALL_STATE(330)] = 12984,
  [SMALL_STATE(331)] = 13010,
  [SMALL_STATE(332)] = 13032,
  [SMALL_STATE(333)] = 13064,
  [SMALL_STATE(334)] = 13086,
  [SMALL_STATE(335)] = 13114,
  [SMALL_STATE(336)] = 13156,
  [SMALL_STATE(337)] = 13178,
  [SMALL_STATE(338)] = 13206,
  [SMALL_STATE(339)] = 13238,
  [SMALL_STATE(340)] = 13264,
  [SMALL_STATE(341)] = 13296,
  [SMALL_STATE(342)] = 13322,
  [SMALL_STATE(343)] = 13348,
  [SMALL_STATE(344)] = 13370,
  [SMALL_STATE(345)] = 13392,
  [SMALL_STATE(346)] = 13414,
  [SMALL_STATE(347)] = 13436,
  [SMALL_STATE(348)] = 13458,
  [SMALL_STATE(349)] = 13486,
  [SMALL_STATE(350)] = 13514,
  [SMALL_STATE(351)] = 13540,
  [SMALL_STATE(352)] = 13566,
  [SMALL_STATE(353)] = 13588,
  [SMALL_STATE(354)] = 13614,
  [SMALL_STATE(355)] = 13640,
  [SMALL_STATE(356)] = 13662,
  [SMALL_STATE(357)] = 13688,
  [SMALL_STATE(358)] = 13714,
  [SMALL_STATE(359)] = 13735,
  [SMALL_STATE(360)] = 13764,
  [SMALL_STATE(361)] = 13799,
  [SMALL_STATE(362)] = 13820,
  [SMALL_STATE(363)] = 13855,
  [SMALL_STATE(364)] = 13884,
  [SMALL_STATE(365)] = 13905,
  [SMALL_STATE(366)] = 13944,
  [SMALL_STATE(367)] = 13979,
  [SMALL_STATE(368)] = 14014,
  [SMALL_STATE(369)] = 14053,
  [SMALL_STATE(370)] = 14074,
  [SMALL_STATE(371)] = 14095,
  [SMALL_STATE(372)] = 14124,
  [SMALL_STATE(373)] = 14147,
  [SMALL_STATE(374)] = 14186,
  [SMALL_STATE(375)] = 14225,
  [SMALL_STATE(376)] = 14246,
  [SMALL_STATE(377)] = 14285,
  [SMALL_STATE(378)] = 14324,
  [SMALL_STATE(379)] = 14356,
  [SMALL_STATE(380)] = 14380,
  [SMALL_STATE(381)] = 14404,
  [SMALL_STATE(382)] = 14428,
  [SMALL_STATE(383)] = 14450,
  [SMALL_STATE(384)] = 14488,
  [SMALL_STATE(385)] = 14512,
  [SMALL_STATE(386)] = 14546,
  [SMALL_STATE(387)] = 14570,
  [SMALL_STATE(388)] = 14596,
  [SMALL_STATE(389)] = 14634,
  [SMALL_STATE(390)] = 14666,
  [SMALL_STATE(391)] = 14686,
  [SMALL_STATE(392)] = 14710,
  [SMALL_STATE(393)] = 14734,
  [SMALL_STATE(394)] = 14758,
  [SMALL_STATE(395)] = 14790,
  [SMALL_STATE(396)] = 14822,
  [SMALL_STATE(397)] = 14854,
  [SMALL_STATE(398)] = 14886,
  [SMALL_STATE(399)] = 14910,
  [SMALL_STATE(400)] = 14936,
  [SMALL_STATE(401)] = 14961,
  [SMALL_STATE(402)] = 14994,
  [SMALL_STATE(403)] = 15017,
  [SMALL_STATE(404)] = 15040,
  [SMALL_STATE(405)] = 15065,
  [SMALL_STATE(406)] = 15096,
  [SMALL_STATE(407)] = 15127,
  [SMALL_STATE(408)] = 15158,
  [SMALL_STATE(409)] = 15183,
  [SMALL_STATE(410)] = 15208,
  [SMALL_STATE(411)] = 15231,
  [SMALL_STATE(412)] = 15254,
  [SMALL_STATE(413)] = 15277,
  [SMALL_STATE(414)] = 15316,
  [SMALL_STATE(415)] = 15347,
  [SMALL_STATE(416)] = 15369,
  [SMALL_STATE(417)] = 15403,
  [SMALL_STATE(418)] = 15421,
  [SMALL_STATE(419)] = 15453,
  [SMALL_STATE(420)] = 15485,
  [SMALL_STATE(421)] = 15519,
  [SMALL_STATE(422)] = 15553,
  [SMALL_STATE(423)] = 15585,
  [SMALL_STATE(424)] = 15619,
  [SMALL_STATE(425)] = 15637,
  [SMALL_STATE(426)] = 15671,
  [SMALL_STATE(427)] = 15693,
  [SMALL_STATE(428)] = 15729,
  [SMALL_STATE(429)] = 15751,
  [SMALL_STATE(430)] = 15769,
  [SMALL_STATE(431)] = 15791,
  [SMALL_STATE(432)] = 15813,
  [SMALL_STATE(433)] = 15833,
  [SMALL_STATE(434)] = 15855,
  [SMALL_STATE(435)] = 15877,
  [SMALL_STATE(436)] = 15911,
  [SMALL_STATE(437)] = 15945,
  [SMALL_STATE(438)] = 15977,
  [SMALL_STATE(439)] = 15999,
  [SMALL_STATE(440)] = 16021,
  [SMALL_STATE(441)] = 16043,
  [SMALL_STATE(442)] = 16065,
  [SMALL_STATE(443)] = 16099,
  [SMALL_STATE(444)] = 16133,
  [SMALL_STATE(445)] = 16155,
  [SMALL_STATE(446)] = 16177,
  [SMALL_STATE(447)] = 16199,
  [SMALL_STATE(448)] = 16231,
  [SMALL_STATE(449)] = 16265,
  [SMALL_STATE(450)] = 16287,
  [SMALL_STATE(451)] = 16319,
  [SMALL_STATE(452)] = 16341,
  [SMALL_STATE(453)] = 16359,
  [SMALL_STATE(454)] = 16393,
  [SMALL_STATE(455)] = 16425,
  [SMALL_STATE(456)] = 16447,
  [SMALL_STATE(457)] = 16469,
  [SMALL_STATE(458)] = 16503,
  [SMALL_STATE(459)] = 16526,
  [SMALL_STATE(460)] = 16557,
  [SMALL_STATE(461)] = 16590,
  [SMALL_STATE(462)] = 16621,
  [SMALL_STATE(463)] = 16650,
  [SMALL_STATE(464)] = 16679,
  [SMALL_STATE(465)] = 16712,
  [SMALL_STATE(466)] = 16745,
  [SMALL_STATE(467)] = 16776,
  [SMALL_STATE(468)] = 16807,
  [SMALL_STATE(469)] = 16830,
  [SMALL_STATE(470)] = 16861,
  [SMALL_STATE(471)] = 16892,
  [SMALL_STATE(472)] = 16909,
  [SMALL_STATE(473)] = 16926,
  [SMALL_STATE(474)] = 16957,
  [SMALL_STATE(475)] = 16986,
  [SMALL_STATE(476)] = 17017,
  [SMALL_STATE(477)] = 17046,
  [SMALL_STATE(478)] = 17073,
  [SMALL_STATE(479)] = 17104,
  [SMALL_STATE(480)] = 17135,
  [SMALL_STATE(481)] = 17164,
  [SMALL_STATE(482)] = 17195,
  [SMALL_STATE(483)] = 17226,
  [SMALL_STATE(484)] = 17257,
  [SMALL_STATE(485)] = 17280,
  [SMALL_STATE(486)] = 17309,
  [SMALL_STATE(487)] = 17340,
  [SMALL_STATE(488)] = 17368,
  [SMALL_STATE(489)] = 17390,
  [SMALL_STATE(490)] = 17418,
  [SMALL_STATE(491)] = 17446,
  [SMALL_STATE(492)] = 17474,
  [SMALL_STATE(493)] = 17504,
  [SMALL_STATE(494)] = 17532,
  [SMALL_STATE(495)] = 17560,
  [SMALL_STATE(496)] = 17590,
  [SMALL_STATE(497)] = 17606,
  [SMALL_STATE(498)] = 17634,
  [SMALL_STATE(499)] = 17662,
  [SMALL_STATE(500)] = 17684,
  [SMALL_STATE(501)] = 17712,
  [SMALL_STATE(502)] = 17742,
  [SMALL_STATE(503)] = 17772,
  [SMALL_STATE(504)] = 17802,
  [SMALL_STATE(505)] = 17824,
  [SMALL_STATE(506)] = 17840,
  [SMALL_STATE(507)] = 17862,
  [SMALL_STATE(508)] = 17884,
  [SMALL_STATE(509)] = 17912,
  [SMALL_STATE(510)] = 17940,
  [SMALL_STATE(511)] = 17971,
  [SMALL_STATE(512)] = 18000,
  [SMALL_STATE(513)] = 18021,
  [SMALL_STATE(514)] = 18052,
  [SMALL_STATE(515)] = 18079,
  [SMALL_STATE(516)] = 18110,
  [SMALL_STATE(517)] = 18131,
  [SMALL_STATE(518)] = 18162,
  [SMALL_STATE(519)] = 18189,
  [SMALL_STATE(520)] = 18210,
  [SMALL_STATE(521)] = 18231,
  [SMALL_STATE(522)] = 18262,
  [SMALL_STATE(523)] = 18293,
  [SMALL_STATE(524)] = 18324,
  [SMALL_STATE(525)] = 18345,
  [SMALL_STATE(526)] = 18376,
  [SMALL_STATE(527)] = 18397,
  [SMALL_STATE(528)] = 18428,
  [SMALL_STATE(529)] = 18459,
  [SMALL_STATE(530)] = 18490,
  [SMALL_STATE(531)] = 18521,
  [SMALL_STATE(532)] = 18552,
  [SMALL_STATE(533)] = 18583,
  [SMALL_STATE(534)] = 18607,
  [SMALL_STATE(535)] = 18631,
  [SMALL_STATE(536)] = 18647,
  [SMALL_STATE(537)] = 18675,
  [SMALL_STATE(538)] = 18703,
  [SMALL_STATE(539)] = 18719,
  [SMALL_STATE(540)] = 18735,
  [SMALL_STATE(541)] = 18763,
  [SMALL_STATE(542)] = 18787,
  [SMALL_STATE(543)] = 18811,
  [SMALL_STATE(544)] = 18835,
  [SMALL_STATE(545)] = 18851,
  [SMALL_STATE(546)] = 18867,
  [SMALL_STATE(547)] = 18893,
  [SMALL_STATE(548)] = 18921,
  [SMALL_STATE(549)] = 18949,
  [SMALL_STATE(550)] = 18977,
  [SMALL_STATE(551)] = 19005,
  [SMALL_STATE(552)] = 19029,
  [SMALL_STATE(553)] = 19053,
  [SMALL_STATE(554)] = 19077,
  [SMALL_STATE(555)] = 19093,
  [SMALL_STATE(556)] = 19119,
  [SMALL_STATE(557)] = 19143,
  [SMALL_STATE(558)] = 19167,
  [SMALL_STATE(559)] = 19183,
  [SMALL_STATE(560)] = 19199,
  [SMALL_STATE(561)] = 19223,
  [SMALL_STATE(562)] = 19239,
  [SMALL_STATE(563)] = 19263,
  [SMALL_STATE(564)] = 19279,
  [SMALL_STATE(565)] = 19295,
  [SMALL_STATE(566)] = 19323,
  [SMALL_STATE(567)] = 19345,
  [SMALL_STATE(568)] = 19361,
  [SMALL_STATE(569)] = 19389,
  [SMALL_STATE(570)] = 19405,
  [SMALL_STATE(571)] = 19421,
  [SMALL_STATE(572)] = 19449,
  [SMALL_STATE(573)] = 19465,
  [SMALL_STATE(574)] = 19481,
  [SMALL_STATE(575)] = 19505,
  [SMALL_STATE(576)] = 19529,
  [SMALL_STATE(577)] = 19548,
  [SMALL_STATE(578)] = 19567,
  [SMALL_STATE(579)] = 19582,
  [SMALL_STATE(580)] = 19597,
  [SMALL_STATE(581)] = 19614,
  [SMALL_STATE(582)] = 19633,
  [SMALL_STATE(583)] = 19658,
  [SMALL_STATE(584)] = 19673,
  [SMALL_STATE(585)] = 19698,
  [SMALL_STATE(586)] = 19715,
  [SMALL_STATE(587)] = 19730,
  [SMALL_STATE(588)] = 19745,
  [SMALL_STATE(589)] = 19765,
  [SMALL_STATE(590)] = 19785,
  [SMALL_STATE(591)] = 19807,
  [SMALL_STATE(592)] = 19827,
  [SMALL_STATE(593)] = 19849,
  [SMALL_STATE(594)] = 19869,
  [SMALL_STATE(595)] = 19891,
  [SMALL_STATE(596)] = 19913,
  [SMALL_STATE(597)] = 19935,
  [SMALL_STATE(598)] = 19955,
  [SMALL_STATE(599)] = 19977,
  [SMALL_STATE(600)] = 19997,
  [SMALL_STATE(601)] = 20017,
  [SMALL_STATE(602)] = 20039,
  [SMALL_STATE(603)] = 20057,
  [SMALL_STATE(604)] = 20077,
  [SMALL_STATE(605)] = 20099,
  [SMALL_STATE(606)] = 20121,
  [SMALL_STATE(607)] = 20139,
  [SMALL_STATE(608)] = 20161,
  [SMALL_STATE(609)] = 20177,
  [SMALL_STATE(610)] = 20193,
  [SMALL_STATE(611)] = 20209,
  [SMALL_STATE(612)] = 20231,
  [SMALL_STATE(613)] = 20253,
  [SMALL_STATE(614)] = 20269,
  [SMALL_STATE(615)] = 20289,
  [SMALL_STATE(616)] = 20311,
  [SMALL_STATE(617)] = 20331,
  [SMALL_STATE(618)] = 20347,
  [SMALL_STATE(619)] = 20369,
  [SMALL_STATE(620)] = 20389,
  [SMALL_STATE(621)] = 20407,
  [SMALL_STATE(622)] = 20429,
  [SMALL_STATE(623)] = 20447,
  [SMALL_STATE(624)] = 20467,
  [SMALL_STATE(625)] = 20489,
  [SMALL_STATE(626)] = 20509,
  [SMALL_STATE(627)] = 20531,
  [SMALL_STATE(628)] = 20551,
  [SMALL_STATE(629)] = 20571,
  [SMALL_STATE(630)] = 20589,
  [SMALL_STATE(631)] = 20609,
  [SMALL_STATE(632)] = 20631,
  [SMALL_STATE(633)] = 20651,
  [SMALL_STATE(634)] = 20673,
  [SMALL_STATE(635)] = 20693,
  [SMALL_STATE(636)] = 20706,
  [SMALL_STATE(637)] = 20719,
  [SMALL_STATE(638)] = 20732,
  [SMALL_STATE(639)] = 20751,
  [SMALL_STATE(640)] = 20764,
  [SMALL_STATE(641)] = 20777,
  [SMALL_STATE(642)] = 20790,
  [SMALL_STATE(643)] = 20803,
  [SMALL_STATE(644)] = 20822,
  [SMALL_STATE(645)] = 20841,
  [SMALL_STATE(646)] = 20854,
  [SMALL_STATE(647)] = 20873,
  [SMALL_STATE(648)] = 20886,
  [SMALL_STATE(649)] = 20905,
  [SMALL_STATE(650)] = 20918,
  [SMALL_STATE(651)] = 20937,
  [SMALL_STATE(652)] = 20950,
  [SMALL_STATE(653)] = 20963,
  [SMALL_STATE(654)] = 20976,
  [SMALL_STATE(655)] = 20995,
  [SMALL_STATE(656)] = 21008,
  [SMALL_STATE(657)] = 21021,
  [SMALL_STATE(658)] = 21040,
  [SMALL_STATE(659)] = 21059,
  [SMALL_STATE(660)] = 21078,
  [SMALL_STATE(661)] = 21091,
  [SMALL_STATE(662)] = 21104,
  [SMALL_STATE(663)] = 21117,
  [SMALL_STATE(664)] = 21129,
  [SMALL_STATE(665)] = 21145,
  [SMALL_STATE(666)] = 21161,
  [SMALL_STATE(667)] = 21177,
  [SMALL_STATE(668)] = 21193,
  [SMALL_STATE(669)] = 21205,
  [SMALL_STATE(670)] = 21221,
  [SMALL_STATE(671)] = 21237,
  [SMALL_STATE(672)] = 21253,
  [SMALL_STATE(673)] = 21269,
  [SMALL_STATE(674)] = 21285,
  [SMALL_STATE(675)] = 21301,
  [SMALL_STATE(676)] = 21317,
  [SMALL_STATE(677)] = 21333,
  [SMALL_STATE(678)] = 21348,
  [SMALL_STATE(679)] = 21363,
  [SMALL_STATE(680)] = 21378,
  [SMALL_STATE(681)] = 21393,
  [SMALL_STATE(682)] = 21408,
  [SMALL_STATE(683)] = 21423,
  [SMALL_STATE(684)] = 21438,
  [SMALL_STATE(685)] = 21453,
  [SMALL_STATE(686)] = 21468,
  [SMALL_STATE(687)] = 21483,
  [SMALL_STATE(688)] = 21498,
  [SMALL_STATE(689)] = 21513,
  [SMALL_STATE(690)] = 21526,
  [SMALL_STATE(691)] = 21541,
  [SMALL_STATE(692)] = 21556,
  [SMALL_STATE(693)] = 21571,
  [SMALL_STATE(694)] = 21586,
  [SMALL_STATE(695)] = 21599,
  [SMALL_STATE(696)] = 21612,
  [SMALL_STATE(697)] = 21624,
  [SMALL_STATE(698)] = 21634,
  [SMALL_STATE(699)] = 21644,
  [SMALL_STATE(700)] = 21654,
  [SMALL_STATE(701)] = 21664,
  [SMALL_STATE(702)] = 21676,
  [SMALL_STATE(703)] = 21686,
  [SMALL_STATE(704)] = 21696,
  [SMALL_STATE(705)] = 21706,
  [SMALL_STATE(706)] = 21716,
  [SMALL_STATE(707)] = 21726,
  [SMALL_STATE(708)] = 21736,
  [SMALL_STATE(709)] = 21746,
  [SMALL_STATE(710)] = 21756,
  [SMALL_STATE(711)] = 21766,
  [SMALL_STATE(712)] = 21776,
  [SMALL_STATE(713)] = 21788,
  [SMALL_STATE(714)] = 21800,
  [SMALL_STATE(715)] = 21812,
  [SMALL_STATE(716)] = 21822,
  [SMALL_STATE(717)] = 21834,
  [SMALL_STATE(718)] = 21846,
  [SMALL_STATE(719)] = 21858,
  [SMALL_STATE(720)] = 21870,
  [SMALL_STATE(721)] = 21880,
  [SMALL_STATE(722)] = 21890,
  [SMALL_STATE(723)] = 21900,
  [SMALL_STATE(724)] = 21910,
  [SMALL_STATE(725)] = 21920,
  [SMALL_STATE(726)] = 21932,
  [SMALL_STATE(727)] = 21942,
  [SMALL_STATE(728)] = 21952,
  [SMALL_STATE(729)] = 21962,
  [SMALL_STATE(730)] = 21972,
  [SMALL_STATE(731)] = 21982,
  [SMALL_STATE(732)] = 21992,
  [SMALL_STATE(733)] = 22004,
  [SMALL_STATE(734)] = 22016,
  [SMALL_STATE(735)] = 22028,
  [SMALL_STATE(736)] = 22038,
  [SMALL_STATE(737)] = 22048,
  [SMALL_STATE(738)] = 22060,
  [SMALL_STATE(739)] = 22070,
  [SMALL_STATE(740)] = 22080,
  [SMALL_STATE(741)] = 22090,
  [SMALL_STATE(742)] = 22102,
  [SMALL_STATE(743)] = 22112,
  [SMALL_STATE(744)] = 22122,
  [SMALL_STATE(745)] = 22132,
  [SMALL_STATE(746)] = 22142,
  [SMALL_STATE(747)] = 22152,
  [SMALL_STATE(748)] = 22162,
  [SMALL_STATE(749)] = 22172,
  [SMALL_STATE(750)] = 22186,
  [SMALL_STATE(751)] = 22196,
  [SMALL_STATE(752)] = 22208,
  [SMALL_STATE(753)] = 22222,
  [SMALL_STATE(754)] = 22232,
  [SMALL_STATE(755)] = 22242,
  [SMALL_STATE(756)] = 22252,
  [SMALL_STATE(757)] = 22266,
  [SMALL_STATE(758)] = 22276,
  [SMALL_STATE(759)] = 22288,
  [SMALL_STATE(760)] = 22298,
  [SMALL_STATE(761)] = 22308,
  [SMALL_STATE(762)] = 22318,
  [SMALL_STATE(763)] = 22330,
  [SMALL_STATE(764)] = 22344,
  [SMALL_STATE(765)] = 22358,
  [SMALL_STATE(766)] = 22372,
  [SMALL_STATE(767)] = 22384,
  [SMALL_STATE(768)] = 22394,
  [SMALL_STATE(769)] = 22404,
  [SMALL_STATE(770)] = 22414,
  [SMALL_STATE(771)] = 22423,
  [SMALL_STATE(772)] = 22432,
  [SMALL_STATE(773)] = 22441,
  [SMALL_STATE(774)] = 22450,
  [SMALL_STATE(775)] = 22463,
  [SMALL_STATE(776)] = 22472,
  [SMALL_STATE(777)] = 22485,
  [SMALL_STATE(778)] = 22494,
  [SMALL_STATE(779)] = 22505,
  [SMALL_STATE(780)] = 22514,
  [SMALL_STATE(781)] = 22523,
  [SMALL_STATE(782)] = 22532,
  [SMALL_STATE(783)] = 22541,
  [SMALL_STATE(784)] = 22550,
  [SMALL_STATE(785)] = 22561,
  [SMALL_STATE(786)] = 22570,
  [SMALL_STATE(787)] = 22579,
  [SMALL_STATE(788)] = 22588,
  [SMALL_STATE(789)] = 22597,
  [SMALL_STATE(790)] = 22606,
  [SMALL_STATE(791)] = 22615,
  [SMALL_STATE(792)] = 22628,
  [SMALL_STATE(793)] = 22637,
  [SMALL_STATE(794)] = 22646,
  [SMALL_STATE(795)] = 22655,
  [SMALL_STATE(796)] = 22668,
  [SMALL_STATE(797)] = 22677,
  [SMALL_STATE(798)] = 22686,
  [SMALL_STATE(799)] = 22695,
  [SMALL_STATE(800)] = 22704,
  [SMALL_STATE(801)] = 22713,
  [SMALL_STATE(802)] = 22722,
  [SMALL_STATE(803)] = 22731,
  [SMALL_STATE(804)] = 22740,
  [SMALL_STATE(805)] = 22749,
  [SMALL_STATE(806)] = 22758,
  [SMALL_STATE(807)] = 22767,
  [SMALL_STATE(808)] = 22776,
  [SMALL_STATE(809)] = 22785,
  [SMALL_STATE(810)] = 22794,
  [SMALL_STATE(811)] = 22803,
  [SMALL_STATE(812)] = 22812,
  [SMALL_STATE(813)] = 22821,
  [SMALL_STATE(814)] = 22830,
  [SMALL_STATE(815)] = 22839,
  [SMALL_STATE(816)] = 22848,
  [SMALL_STATE(817)] = 22857,
  [SMALL_STATE(818)] = 22866,
  [SMALL_STATE(819)] = 22877,
  [SMALL_STATE(820)] = 22886,
  [SMALL_STATE(821)] = 22895,
  [SMALL_STATE(822)] = 22908,
  [SMALL_STATE(823)] = 22917,
  [SMALL_STATE(824)] = 22924,
  [SMALL_STATE(825)] = 22937,
  [SMALL_STATE(826)] = 22946,
  [SMALL_STATE(827)] = 22957,
  [SMALL_STATE(828)] = 22966,
  [SMALL_STATE(829)] = 22975,
  [SMALL_STATE(830)] = 22988,
  [SMALL_STATE(831)] = 22997,
  [SMALL_STATE(832)] = 23006,
  [SMALL_STATE(833)] = 23015,
  [SMALL_STATE(834)] = 23024,
  [SMALL_STATE(835)] = 23032,
  [SMALL_STATE(836)] = 23042,
  [SMALL_STATE(837)] = 23052,
  [SMALL_STATE(838)] = 23062,
  [SMALL_STATE(839)] = 23072,
  [SMALL_STATE(840)] = 23082,
  [SMALL_STATE(841)] = 23090,
  [SMALL_STATE(842)] = 23100,
  [SMALL_STATE(843)] = 23110,
  [SMALL_STATE(844)] = 23120,
  [SMALL_STATE(845)] = 23130,
  [SMALL_STATE(846)] = 23140,
  [SMALL_STATE(847)] = 23150,
  [SMALL_STATE(848)] = 23157,
  [SMALL_STATE(849)] = 23164,
  [SMALL_STATE(850)] = 23169,
  [SMALL_STATE(851)] = 23174,
  [SMALL_STATE(852)] = 23181,
  [SMALL_STATE(853)] = 23188,
  [SMALL_STATE(854)] = 23195,
  [SMALL_STATE(855)] = 23202,
  [SMALL_STATE(856)] = 23209,
  [SMALL_STATE(857)] = 23214,
  [SMALL_STATE(858)] = 23219,
  [SMALL_STATE(859)] = 23224,
  [SMALL_STATE(860)] = 23229,
  [SMALL_STATE(861)] = 23234,
  [SMALL_STATE(862)] = 23239,
  [SMALL_STATE(863)] = 23244,
  [SMALL_STATE(864)] = 23249,
  [SMALL_STATE(865)] = 23254,
  [SMALL_STATE(866)] = 23261,
  [SMALL_STATE(867)] = 23266,
  [SMALL_STATE(868)] = 23271,
  [SMALL_STATE(869)] = 23276,
  [SMALL_STATE(870)] = 23281,
  [SMALL_STATE(871)] = 23288,
  [SMALL_STATE(872)] = 23295,
  [SMALL_STATE(873)] = 23302,
  [SMALL_STATE(874)] = 23307,
  [SMALL_STATE(875)] = 23314,
  [SMALL_STATE(876)] = 23319,
  [SMALL_STATE(877)] = 23326,
  [SMALL_STATE(878)] = 23331,
  [SMALL_STATE(879)] = 23336,
  [SMALL_STATE(880)] = 23343,
  [SMALL_STATE(881)] = 23348,
  [SMALL_STATE(882)] = 23353,
  [SMALL_STATE(883)] = 23358,
  [SMALL_STATE(884)] = 23363,
  [SMALL_STATE(885)] = 23368,
  [SMALL_STATE(886)] = 23373,
  [SMALL_STATE(887)] = 23378,
  [SMALL_STATE(888)] = 23383,
  [SMALL_STATE(889)] = 23390,
  [SMALL_STATE(890)] = 23395,
  [SMALL_STATE(891)] = 23402,
  [SMALL_STATE(892)] = 23409,
  [SMALL_STATE(893)] = 23416,
  [SMALL_STATE(894)] = 23423,
  [SMALL_STATE(895)] = 23428,
  [SMALL_STATE(896)] = 23433,
  [SMALL_STATE(897)] = 23438,
  [SMALL_STATE(898)] = 23442,
  [SMALL_STATE(899)] = 23446,
  [SMALL_STATE(900)] = 23450,
  [SMALL_STATE(901)] = 23454,
  [SMALL_STATE(902)] = 23458,
  [SMALL_STATE(903)] = 23462,
  [SMALL_STATE(904)] = 23466,
  [SMALL_STATE(905)] = 23470,
  [SMALL_STATE(906)] = 23474,
  [SMALL_STATE(907)] = 23478,
  [SMALL_STATE(908)] = 23482,
  [SMALL_STATE(909)] = 23486,
  [SMALL_STATE(910)] = 23490,
  [SMALL_STATE(911)] = 23494,
  [SMALL_STATE(912)] = 23498,
  [SMALL_STATE(913)] = 23502,
  [SMALL_STATE(914)] = 23506,
  [SMALL_STATE(915)] = 23510,
  [SMALL_STATE(916)] = 23514,
  [SMALL_STATE(917)] = 23518,
  [SMALL_STATE(918)] = 23522,
  [SMALL_STATE(919)] = 23526,
  [SMALL_STATE(920)] = 23530,
  [SMALL_STATE(921)] = 23534,
  [SMALL_STATE(922)] = 23538,
  [SMALL_STATE(923)] = 23542,
  [SMALL_STATE(924)] = 23546,
  [SMALL_STATE(925)] = 23550,
  [SMALL_STATE(926)] = 23554,
  [SMALL_STATE(927)] = 23558,
  [SMALL_STATE(928)] = 23562,
  [SMALL_STATE(929)] = 23566,
  [SMALL_STATE(930)] = 23570,
  [SMALL_STATE(931)] = 23574,
  [SMALL_STATE(932)] = 23578,
  [SMALL_STATE(933)] = 23582,
  [SMALL_STATE(934)] = 23586,
  [SMALL_STATE(935)] = 23590,
  [SMALL_STATE(936)] = 23594,
  [SMALL_STATE(937)] = 23598,
  [SMALL_STATE(938)] = 23602,
  [SMALL_STATE(939)] = 23606,
  [SMALL_STATE(940)] = 23610,
  [SMALL_STATE(941)] = 23614,
  [SMALL_STATE(942)] = 23618,
  [SMALL_STATE(943)] = 23622,
  [SMALL_STATE(944)] = 23626,
  [SMALL_STATE(945)] = 23630,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_no_language, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_iri, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_with_language, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_literal, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype_iri, 1), REDUCE(sym_class_iri, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_iri, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_iri, 1),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_data_property_iri, 1), REDUCE(sym_object_property_iri, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(25),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(30),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(32),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(34),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(40),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_iri, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat2, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_primary, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat2, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(871),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(658),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(197),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(196),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(69),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(75),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(537),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(932),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(312),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 5),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(423),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(281),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inverse_object_property, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_iri, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2), SHIFT_REPEAT(335),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(154),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_data_property_iri, 1), REDUCE(sym_object_property_iri, 1),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(315),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(324),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 1),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(457),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(502),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(581),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(557),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_characteristic_annotated_list, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_property_iri, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inverse_object_property, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(529),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(460),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(130),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(566),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(503),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(293),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(328),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(436),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_characteristic_annotated_list_repeat1, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 3),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(264),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(299),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 6),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(498),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(654),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(657),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(659),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(648),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(553),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(137),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(383),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(464),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(555),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(193),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(442),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_range_annotated_list, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_expression_annotated_list, 1),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(138),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(157),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(515),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(511),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(133),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(149),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(844),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotations, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_range_annotated_list_repeat1, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_expression_annotated_list_repeat1, 3),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(286),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2), SHIFT_REPEAT(233),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_2list, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(548),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 2), SHIFT_REPEAT(492),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_annotated_list, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 2), SHIFT_REPEAT(427),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact_annotated_list, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(316),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(168),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(513),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(125),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(126),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(401),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [907] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(337),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(522),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(121),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(413),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(465),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_annotated_list_repeat1, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fact_annotated_list_repeat1, 3),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fact, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_fact, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_fact, 2),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [942] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(349),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2), SHIFT_REPEAT(607),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 3),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_property_iri_annotated_list, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(584),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(517),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(582),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(549),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_property_iri_annotated_list_repeat1, 3),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_iri, 1),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ontology_iri, 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri, 1),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(387),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(674),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(305),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(425),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(399),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), SHIFT_REPEAT(532),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(528),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1069] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(408),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), REDUCE(sym_datatype_frame, 4),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(276),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_iri, 1),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 4),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_2list, 3),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 3),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_property_2list_repeat1, 2), SHIFT_REPEAT(630),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 3),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2), SHIFT_REPEAT(562),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_2list_repeat1, 2), SHIFT_REPEAT(542),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_2list_repeat1, 2), SHIFT_REPEAT(217),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_2list, 4),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_2list, 4),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(458),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(468),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(484),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(488),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2),
  [1250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(499),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(504),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_no_language, 1),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(507),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 2),
  [1287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(519),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 3),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [1294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(536),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_literal, 3),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_iri, 1),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_with_language, 2),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_iri, 1),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_property_iri, 1),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotations, 2),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(550),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(565),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(571),
  [1428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(540),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(547),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(329),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(435),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [1478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(855),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(568),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2), SHIFT_REPEAT(908),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ontology_document_repeat1, 2),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(262),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 2),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 1),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2),
  [1616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2), SHIFT_REPEAT(407),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 1),
  [1633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__individual_2list_repeat1, 2), SHIFT_REPEAT(533),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 2),
  [1640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(585),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ontology_document, 2),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1783] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

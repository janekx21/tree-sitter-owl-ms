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
#define STATE_COUNT 941
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 202
#define ALIAS_COUNT 6
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 34

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
  sym_individual = 103,
  sym_node_id = 104,
  sym_non_negative_integer = 105,
  sym__positive_integer = 106,
  aux_sym__digits = 107,
  sym__digit = 108,
  sym__literal = 109,
  sym_decimal_literal = 110,
  sym_floating_point_literal = 111,
  sym_integer_literal = 112,
  sym__exponent = 113,
  sym_string_literal_no_language = 114,
  sym_string_literal_with_language = 115,
  sym_typed_literal = 116,
  sym__lexial_value = 117,
  sym_prefix_declaration = 118,
  sym_ontology = 119,
  sym_import = 120,
  sym__frame = 121,
  sym__annotations = 122,
  sym_annotation = 123,
  sym__annotation_target = 124,
  sym__object_property_expression = 125,
  sym_data_range = 126,
  sym__data_conjunction = 127,
  sym__data_primary = 128,
  sym__data_atomic = 129,
  sym__datatype_restriction = 130,
  sym_facet = 131,
  sym_description = 132,
  sym__conjunction = 133,
  sym__primary = 134,
  sym__restriction = 135,
  sym__atomic = 136,
  sym_datatype_frame = 137,
  sym_class_frame = 138,
  sym_has_key_list = 139,
  sym_object_property_frame = 140,
  sym_object_property_characteristic = 141,
  sym_data_property_frame = 142,
  sym_annotation_property_frame = 143,
  sym_individual_frame = 144,
  sym_fact = 145,
  sym_object_property_fact = 146,
  sym_data_property_fact = 147,
  sym_misc = 148,
  sym__description_annotated_list = 149,
  sym__annotation_annotated_list = 150,
  sym__object_property_expression_annotated_list = 151,
  sym_object_property_characteristic_annotated_list = 152,
  sym_data_range_annotated_list = 153,
  sym__iri_annotated_list = 154,
  sym_annotation_property_iri_annotated_list = 155,
  sym_individual_annotated_list = 156,
  sym_fact_annotated_list = 157,
  sym_description_2list = 158,
  sym_object_property_2list = 159,
  sym_data_property_2list = 160,
  sym_individual_2list = 161,
  sym__individual_list = 162,
  sym__literal_list = 163,
  sym__iri_rfc3987 = 164,
  sym__ihier_part = 165,
  sym__iauthority = 166,
  sym__iuserinfo = 167,
  sym__ihost = 168,
  aux_sym__ipath_abempty = 169,
  sym__isegment = 170,
  aux_sym_source_file_repeat1 = 171,
  aux_sym__positive_integer_repeat1 = 172,
  aux_sym_ontology_repeat1 = 173,
  aux_sym_ontology_repeat2 = 174,
  aux_sym_ontology_repeat3 = 175,
  aux_sym_data_range_repeat1 = 176,
  aux_sym__data_conjunction_repeat1 = 177,
  aux_sym__datatype_restriction_repeat1 = 178,
  aux_sym_description_repeat1 = 179,
  aux_sym__conjunction_repeat1 = 180,
  aux_sym__conjunction_repeat2 = 181,
  aux_sym_class_frame_repeat1 = 182,
  aux_sym_has_key_list_repeat1 = 183,
  aux_sym_object_property_frame_repeat1 = 184,
  aux_sym_object_property_frame_repeat2 = 185,
  aux_sym_data_property_frame_repeat1 = 186,
  aux_sym_annotation_property_frame_repeat1 = 187,
  aux_sym_individual_frame_repeat1 = 188,
  aux_sym__description_annotated_list_repeat1 = 189,
  aux_sym__annotation_annotated_list_repeat1 = 190,
  aux_sym__object_property_expression_annotated_list_repeat1 = 191,
  aux_sym_object_property_characteristic_annotated_list_repeat1 = 192,
  aux_sym_data_range_annotated_list_repeat1 = 193,
  aux_sym__iri_annotated_list_repeat1 = 194,
  aux_sym_individual_annotated_list_repeat1 = 195,
  aux_sym_fact_annotated_list_repeat1 = 196,
  aux_sym_description_2list_repeat1 = 197,
  aux_sym_object_property_2list_repeat1 = 198,
  aux_sym_data_property_2list_repeat1 = 199,
  aux_sym_individual_2list_repeat1 = 200,
  aux_sym__literal_list_repeat1 = 201,
  alias_sym_disjoint_union_of_list = 202,
  alias_sym_disjoint_with_list = 203,
  alias_sym_domain_list = 204,
  alias_sym_equivalent_to_list = 205,
  alias_sym_sub_class_of_list = 206,
  alias_sym_sub_property_of_list = 207,
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
  [sym_individual] = "individual",
  [sym_node_id] = "node_id",
  [sym_non_negative_integer] = "non_negative_integer",
  [sym__positive_integer] = "_positive_integer",
  [aux_sym__digits] = "_digits",
  [sym__digit] = "_digit",
  [sym__literal] = "_literal",
  [sym_decimal_literal] = "decimal_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_integer_literal] = "integer_literal",
  [sym__exponent] = "_exponent",
  [sym_string_literal_no_language] = "string_literal_no_language",
  [sym_string_literal_with_language] = "string_literal_with_language",
  [sym_typed_literal] = "typed_literal",
  [sym__lexial_value] = "_lexial_value",
  [sym_prefix_declaration] = "prefix_declaration",
  [sym_ontology] = "ontology",
  [sym_import] = "import",
  [sym__frame] = "_frame",
  [sym__annotations] = "_annotations",
  [sym_annotation] = "annotation",
  [sym__annotation_target] = "_annotation_target",
  [sym__object_property_expression] = "_object_property_expression",
  [sym_data_range] = "data_range",
  [sym__data_conjunction] = "_data_conjunction",
  [sym__data_primary] = "_data_primary",
  [sym__data_atomic] = "_data_atomic",
  [sym__datatype_restriction] = "_datatype_restriction",
  [sym_facet] = "facet",
  [sym_description] = "description",
  [sym__conjunction] = "_conjunction",
  [sym__primary] = "_primary",
  [sym__restriction] = "_restriction",
  [sym__atomic] = "_atomic",
  [sym_datatype_frame] = "datatype_frame",
  [sym_class_frame] = "class_frame",
  [sym_has_key_list] = "has_key_list",
  [sym_object_property_frame] = "object_property_frame",
  [sym_object_property_characteristic] = "object_property_characteristic",
  [sym_data_property_frame] = "data_property_frame",
  [sym_annotation_property_frame] = "annotation_property_frame",
  [sym_individual_frame] = "individual_frame",
  [sym_fact] = "fact",
  [sym_object_property_fact] = "object_property_fact",
  [sym_data_property_fact] = "data_property_fact",
  [sym_misc] = "misc",
  [sym__description_annotated_list] = "_description_annotated_list",
  [sym__annotation_annotated_list] = "_annotation_annotated_list",
  [sym__object_property_expression_annotated_list] = "_object_property_expression_annotated_list",
  [sym_object_property_characteristic_annotated_list] = "object_property_characteristic_annotated_list",
  [sym_data_range_annotated_list] = "range_list",
  [sym__iri_annotated_list] = "_iri_annotated_list",
  [sym_annotation_property_iri_annotated_list] = "annotation_property_iri_annotated_list",
  [sym_individual_annotated_list] = "individual_annotated_list",
  [sym_fact_annotated_list] = "fact_annotated_list",
  [sym_description_2list] = "description_2list",
  [sym_object_property_2list] = "object_property_2list",
  [sym_data_property_2list] = "data_property_2list",
  [sym_individual_2list] = "individual_2list",
  [sym__individual_list] = "_individual_list",
  [sym__literal_list] = "_literal_list",
  [sym__iri_rfc3987] = "_iri_rfc3987",
  [sym__ihier_part] = "_ihier_part",
  [sym__iauthority] = "_iauthority",
  [sym__iuserinfo] = "_iuserinfo",
  [sym__ihost] = "_ihost",
  [aux_sym__ipath_abempty] = "_ipath_abempty",
  [sym__isegment] = "_isegment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__positive_integer_repeat1] = "_positive_integer_repeat1",
  [aux_sym_ontology_repeat1] = "ontology_repeat1",
  [aux_sym_ontology_repeat2] = "ontology_repeat2",
  [aux_sym_ontology_repeat3] = "ontology_repeat3",
  [aux_sym_data_range_repeat1] = "data_range_repeat1",
  [aux_sym__data_conjunction_repeat1] = "_data_conjunction_repeat1",
  [aux_sym__datatype_restriction_repeat1] = "_datatype_restriction_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym__conjunction_repeat1] = "_conjunction_repeat1",
  [aux_sym__conjunction_repeat2] = "_conjunction_repeat2",
  [aux_sym_class_frame_repeat1] = "class_frame_repeat1",
  [aux_sym_has_key_list_repeat1] = "has_key_list_repeat1",
  [aux_sym_object_property_frame_repeat1] = "object_property_frame_repeat1",
  [aux_sym_object_property_frame_repeat2] = "object_property_frame_repeat2",
  [aux_sym_data_property_frame_repeat1] = "data_property_frame_repeat1",
  [aux_sym_annotation_property_frame_repeat1] = "annotation_property_frame_repeat1",
  [aux_sym_individual_frame_repeat1] = "individual_frame_repeat1",
  [aux_sym__description_annotated_list_repeat1] = "_description_annotated_list_repeat1",
  [aux_sym__annotation_annotated_list_repeat1] = "_annotation_annotated_list_repeat1",
  [aux_sym__object_property_expression_annotated_list_repeat1] = "_object_property_expression_annotated_list_repeat1",
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = "object_property_characteristic_annotated_list_repeat1",
  [aux_sym_data_range_annotated_list_repeat1] = "data_range_annotated_list_repeat1",
  [aux_sym__iri_annotated_list_repeat1] = "_iri_annotated_list_repeat1",
  [aux_sym_individual_annotated_list_repeat1] = "individual_annotated_list_repeat1",
  [aux_sym_fact_annotated_list_repeat1] = "fact_annotated_list_repeat1",
  [aux_sym_description_2list_repeat1] = "description_2list_repeat1",
  [aux_sym_object_property_2list_repeat1] = "object_property_2list_repeat1",
  [aux_sym_data_property_2list_repeat1] = "data_property_2list_repeat1",
  [aux_sym_individual_2list_repeat1] = "individual_2list_repeat1",
  [aux_sym__literal_list_repeat1] = "_literal_list_repeat1",
  [alias_sym_disjoint_union_of_list] = "disjoint_union_of_list",
  [alias_sym_disjoint_with_list] = "disjoint_with_list",
  [alias_sym_domain_list] = "domain_list",
  [alias_sym_equivalent_to_list] = "equivalent_to_list",
  [alias_sym_sub_class_of_list] = "sub_class_of_list",
  [alias_sym_sub_property_of_list] = "sub_property_of_list",
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
  [sym_individual] = sym_individual,
  [sym_node_id] = sym_node_id,
  [sym_non_negative_integer] = sym_non_negative_integer,
  [sym__positive_integer] = sym__positive_integer,
  [aux_sym__digits] = aux_sym__digits,
  [sym__digit] = sym__digit,
  [sym__literal] = sym__literal,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_floating_point_literal] = sym_floating_point_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym__exponent] = sym__exponent,
  [sym_string_literal_no_language] = sym_string_literal_no_language,
  [sym_string_literal_with_language] = sym_string_literal_with_language,
  [sym_typed_literal] = sym_typed_literal,
  [sym__lexial_value] = sym__lexial_value,
  [sym_prefix_declaration] = sym_prefix_declaration,
  [sym_ontology] = sym_ontology,
  [sym_import] = sym_import,
  [sym__frame] = sym__frame,
  [sym__annotations] = sym__annotations,
  [sym_annotation] = sym_annotation,
  [sym__annotation_target] = sym__annotation_target,
  [sym__object_property_expression] = sym__object_property_expression,
  [sym_data_range] = sym_data_range,
  [sym__data_conjunction] = sym__data_conjunction,
  [sym__data_primary] = sym__data_primary,
  [sym__data_atomic] = sym__data_atomic,
  [sym__datatype_restriction] = sym__datatype_restriction,
  [sym_facet] = sym_facet,
  [sym_description] = sym_description,
  [sym__conjunction] = sym__conjunction,
  [sym__primary] = sym__primary,
  [sym__restriction] = sym__restriction,
  [sym__atomic] = sym__atomic,
  [sym_datatype_frame] = sym_datatype_frame,
  [sym_class_frame] = sym_class_frame,
  [sym_has_key_list] = sym_has_key_list,
  [sym_object_property_frame] = sym_object_property_frame,
  [sym_object_property_characteristic] = sym_object_property_characteristic,
  [sym_data_property_frame] = sym_data_property_frame,
  [sym_annotation_property_frame] = sym_annotation_property_frame,
  [sym_individual_frame] = sym_individual_frame,
  [sym_fact] = sym_fact,
  [sym_object_property_fact] = sym_object_property_fact,
  [sym_data_property_fact] = sym_data_property_fact,
  [sym_misc] = sym_misc,
  [sym__description_annotated_list] = sym__description_annotated_list,
  [sym__annotation_annotated_list] = sym__annotation_annotated_list,
  [sym__object_property_expression_annotated_list] = sym__object_property_expression_annotated_list,
  [sym_object_property_characteristic_annotated_list] = sym_object_property_characteristic_annotated_list,
  [sym_data_range_annotated_list] = sym_data_range_annotated_list,
  [sym__iri_annotated_list] = sym__iri_annotated_list,
  [sym_annotation_property_iri_annotated_list] = sym_annotation_property_iri_annotated_list,
  [sym_individual_annotated_list] = sym_individual_annotated_list,
  [sym_fact_annotated_list] = sym_fact_annotated_list,
  [sym_description_2list] = sym_description_2list,
  [sym_object_property_2list] = sym_object_property_2list,
  [sym_data_property_2list] = sym_data_property_2list,
  [sym_individual_2list] = sym_individual_2list,
  [sym__individual_list] = sym__individual_list,
  [sym__literal_list] = sym__literal_list,
  [sym__iri_rfc3987] = sym__iri_rfc3987,
  [sym__ihier_part] = sym__ihier_part,
  [sym__iauthority] = sym__iauthority,
  [sym__iuserinfo] = sym__iuserinfo,
  [sym__ihost] = sym__ihost,
  [aux_sym__ipath_abempty] = aux_sym__ipath_abempty,
  [sym__isegment] = sym__isegment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__positive_integer_repeat1] = aux_sym__positive_integer_repeat1,
  [aux_sym_ontology_repeat1] = aux_sym_ontology_repeat1,
  [aux_sym_ontology_repeat2] = aux_sym_ontology_repeat2,
  [aux_sym_ontology_repeat3] = aux_sym_ontology_repeat3,
  [aux_sym_data_range_repeat1] = aux_sym_data_range_repeat1,
  [aux_sym__data_conjunction_repeat1] = aux_sym__data_conjunction_repeat1,
  [aux_sym__datatype_restriction_repeat1] = aux_sym__datatype_restriction_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym__conjunction_repeat1] = aux_sym__conjunction_repeat1,
  [aux_sym__conjunction_repeat2] = aux_sym__conjunction_repeat2,
  [aux_sym_class_frame_repeat1] = aux_sym_class_frame_repeat1,
  [aux_sym_has_key_list_repeat1] = aux_sym_has_key_list_repeat1,
  [aux_sym_object_property_frame_repeat1] = aux_sym_object_property_frame_repeat1,
  [aux_sym_object_property_frame_repeat2] = aux_sym_object_property_frame_repeat2,
  [aux_sym_data_property_frame_repeat1] = aux_sym_data_property_frame_repeat1,
  [aux_sym_annotation_property_frame_repeat1] = aux_sym_annotation_property_frame_repeat1,
  [aux_sym_individual_frame_repeat1] = aux_sym_individual_frame_repeat1,
  [aux_sym__description_annotated_list_repeat1] = aux_sym__description_annotated_list_repeat1,
  [aux_sym__annotation_annotated_list_repeat1] = aux_sym__annotation_annotated_list_repeat1,
  [aux_sym__object_property_expression_annotated_list_repeat1] = aux_sym__object_property_expression_annotated_list_repeat1,
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = aux_sym_object_property_characteristic_annotated_list_repeat1,
  [aux_sym_data_range_annotated_list_repeat1] = aux_sym_data_range_annotated_list_repeat1,
  [aux_sym__iri_annotated_list_repeat1] = aux_sym__iri_annotated_list_repeat1,
  [aux_sym_individual_annotated_list_repeat1] = aux_sym_individual_annotated_list_repeat1,
  [aux_sym_fact_annotated_list_repeat1] = aux_sym_fact_annotated_list_repeat1,
  [aux_sym_description_2list_repeat1] = aux_sym_description_2list_repeat1,
  [aux_sym_object_property_2list_repeat1] = aux_sym_object_property_2list_repeat1,
  [aux_sym_data_property_2list_repeat1] = aux_sym_data_property_2list_repeat1,
  [aux_sym_individual_2list_repeat1] = aux_sym_individual_2list_repeat1,
  [aux_sym__literal_list_repeat1] = aux_sym__literal_list_repeat1,
  [alias_sym_disjoint_union_of_list] = alias_sym_disjoint_union_of_list,
  [alias_sym_disjoint_with_list] = alias_sym_disjoint_with_list,
  [alias_sym_domain_list] = alias_sym_domain_list,
  [alias_sym_equivalent_to_list] = alias_sym_equivalent_to_list,
  [alias_sym_sub_class_of_list] = alias_sym_sub_class_of_list,
  [alias_sym_sub_property_of_list] = alias_sym_sub_property_of_list,
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
  [sym__literal] = {
    .visible = false,
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
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__exponent] = {
    .visible = false,
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
  [sym_typed_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__lexial_value] = {
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
  [sym__datatype_restriction] = {
    .visible = false,
    .named = true,
  },
  [sym_facet] = {
    .visible = true,
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
  [sym_has_key_list] = {
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
  [sym_object_property_characteristic_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_data_range_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym__iri_annotated_list] = {
    .visible = false,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__positive_integer_repeat1] = {
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
  [aux_sym__datatype_restriction_repeat1] = {
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
  [aux_sym_has_key_list_repeat1] = {
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
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_range_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__iri_annotated_list_repeat1] = {
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
  [aux_sym__literal_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_disjoint_union_of_list] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_disjoint_with_list] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_domain_list] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_equivalent_to_list] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sub_class_of_list] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sub_property_of_list] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_annotations = 1,
  field_equivalent_to = 2,
  field_frames = 3,
  field_imports = 4,
  field_source = 5,
  field_target = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_annotations] = "annotations",
  [field_equivalent_to] = "equivalent_to",
  [field_frames] = "frames",
  [field_imports] = "imports",
  [field_source] = "source",
  [field_target] = "target",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 3},
  [18] = {.index = 26, .length = 2},
  [25] = {.index = 28, .length = 2},
  [26] = {.index = 30, .length = 2},
  [27] = {.index = 32, .length = 2},
  [28] = {.index = 34, .length = 3},
  [29] = {.index = 37, .length = 3},
  [30] = {.index = 40, .length = 2},
  [32] = {.index = 42, .length = 3},
  [33] = {.index = 45, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_imports, 1},
  [1] =
    {field_annotations, 1},
  [2] =
    {field_frames, 1},
  [3] =
    {field_imports, 2},
  [4] =
    {field_annotations, 2},
  [5] =
    {field_frames, 2},
  [6] =
    {field_annotations, 2},
    {field_imports, 1},
  [8] =
    {field_frames, 2},
    {field_imports, 1},
  [10] =
    {field_annotations, 1},
    {field_frames, 2},
  [12] =
    {field_source, 0},
    {field_target, 1},
  [14] =
    {field_imports, 3},
  [15] =
    {field_annotations, 3},
  [16] =
    {field_frames, 3},
  [17] =
    {field_annotations, 3},
    {field_imports, 2},
  [19] =
    {field_frames, 3},
    {field_imports, 2},
  [21] =
    {field_annotations, 2},
    {field_frames, 3},
  [23] =
    {field_annotations, 2},
    {field_frames, 3},
    {field_imports, 1},
  [26] =
    {field_equivalent_to, 2},
    {field_equivalent_to, 3},
  [28] =
    {field_annotations, 4},
    {field_imports, 3},
  [30] =
    {field_frames, 4},
    {field_imports, 3},
  [32] =
    {field_annotations, 3},
    {field_frames, 4},
  [34] =
    {field_annotations, 3},
    {field_frames, 4},
    {field_imports, 2},
  [37] =
    {field_equivalent_to, 2},
    {field_equivalent_to, 3},
    {field_equivalent_to, 4},
  [40] =
    {field_equivalent_to, 3},
    {field_equivalent_to, 4},
  [42] =
    {field_annotations, 4},
    {field_frames, 5},
    {field_imports, 3},
  [45] =
    {field_equivalent_to, 3},
    {field_equivalent_to, 4},
    {field_equivalent_to, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [19] = {
    [1] = alias_sym_equivalent_to_list,
  },
  [20] = {
    [1] = alias_sym_sub_class_of_list,
  },
  [21] = {
    [1] = alias_sym_disjoint_with_list,
  },
  [22] = {
    [1] = alias_sym_disjoint_union_of_list,
  },
  [23] = {
    [1] = alias_sym_domain_list,
  },
  [24] = {
    [1] = alias_sym_sub_property_of_list,
  },
  [31] = {
    [2] = alias_sym_disjoint_union_of_list,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__description_annotated_list, 5,
    sym__description_annotated_list,
    alias_sym_disjoint_with_list,
    alias_sym_domain_list,
    alias_sym_equivalent_to_list,
    alias_sym_sub_class_of_list,
  sym__iri_annotated_list, 4,
    sym__iri_annotated_list,
    alias_sym_disjoint_with_list,
    alias_sym_equivalent_to_list,
    alias_sym_sub_property_of_list,
  sym_description_2list, 2,
    sym_description_2list,
    alias_sym_disjoint_union_of_list,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 5,
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
  [27] = 5,
  [28] = 23,
  [29] = 26,
  [30] = 22,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 34,
  [35] = 23,
  [36] = 22,
  [37] = 37,
  [38] = 22,
  [39] = 39,
  [40] = 23,
  [41] = 26,
  [42] = 42,
  [43] = 43,
  [44] = 37,
  [45] = 45,
  [46] = 46,
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
  [58] = 37,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 37,
  [63] = 63,
  [64] = 64,
  [65] = 26,
  [66] = 20,
  [67] = 51,
  [68] = 18,
  [69] = 23,
  [70] = 22,
  [71] = 57,
  [72] = 24,
  [73] = 63,
  [74] = 25,
  [75] = 57,
  [76] = 21,
  [77] = 77,
  [78] = 78,
  [79] = 51,
  [80] = 80,
  [81] = 63,
  [82] = 82,
  [83] = 51,
  [84] = 57,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 63,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 37,
  [95] = 5,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 104,
  [105] = 101,
  [106] = 106,
  [107] = 107,
  [108] = 101,
  [109] = 101,
  [110] = 101,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 101,
  [115] = 115,
  [116] = 101,
  [117] = 101,
  [118] = 118,
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
  [131] = 107,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 111,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 57,
  [146] = 115,
  [147] = 112,
  [148] = 113,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 51,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 100,
  [163] = 106,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 103,
  [168] = 168,
  [169] = 169,
  [170] = 3,
  [171] = 171,
  [172] = 2,
  [173] = 171,
  [174] = 174,
  [175] = 127,
  [176] = 171,
  [177] = 4,
  [178] = 129,
  [179] = 4,
  [180] = 3,
  [181] = 121,
  [182] = 171,
  [183] = 115,
  [184] = 112,
  [185] = 185,
  [186] = 171,
  [187] = 187,
  [188] = 171,
  [189] = 2,
  [190] = 190,
  [191] = 111,
  [192] = 124,
  [193] = 193,
  [194] = 194,
  [195] = 103,
  [196] = 113,
  [197] = 100,
  [198] = 107,
  [199] = 63,
  [200] = 106,
  [201] = 134,
  [202] = 111,
  [203] = 203,
  [204] = 204,
  [205] = 106,
  [206] = 149,
  [207] = 207,
  [208] = 115,
  [209] = 112,
  [210] = 113,
  [211] = 211,
  [212] = 103,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 133,
  [222] = 222,
  [223] = 100,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 161,
  [228] = 121,
  [229] = 229,
  [230] = 129,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 165,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 124,
  [242] = 242,
  [243] = 243,
  [244] = 107,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 2,
  [251] = 251,
  [252] = 161,
  [253] = 134,
  [254] = 18,
  [255] = 255,
  [256] = 149,
  [257] = 121,
  [258] = 258,
  [259] = 129,
  [260] = 260,
  [261] = 133,
  [262] = 262,
  [263] = 165,
  [264] = 20,
  [265] = 124,
  [266] = 266,
  [267] = 267,
  [268] = 4,
  [269] = 3,
  [270] = 270,
  [271] = 134,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 165,
  [277] = 96,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 98,
  [282] = 161,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 93,
  [287] = 284,
  [288] = 149,
  [289] = 289,
  [290] = 290,
  [291] = 284,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 21,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 97,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 284,
  [309] = 24,
  [310] = 25,
  [311] = 92,
  [312] = 312,
  [313] = 284,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 284,
  [319] = 319,
  [320] = 320,
  [321] = 133,
  [322] = 322,
  [323] = 21,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 326,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 23,
  [333] = 326,
  [334] = 326,
  [335] = 22,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 26,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 20,
  [353] = 353,
  [354] = 18,
  [355] = 18,
  [356] = 356,
  [357] = 357,
  [358] = 20,
  [359] = 24,
  [360] = 24,
  [361] = 21,
  [362] = 362,
  [363] = 363,
  [364] = 106,
  [365] = 365,
  [366] = 366,
  [367] = 366,
  [368] = 365,
  [369] = 111,
  [370] = 370,
  [371] = 103,
  [372] = 372,
  [373] = 113,
  [374] = 21,
  [375] = 366,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 112,
  [381] = 381,
  [382] = 25,
  [383] = 365,
  [384] = 366,
  [385] = 365,
  [386] = 107,
  [387] = 387,
  [388] = 25,
  [389] = 100,
  [390] = 377,
  [391] = 381,
  [392] = 115,
  [393] = 393,
  [394] = 129,
  [395] = 395,
  [396] = 395,
  [397] = 397,
  [398] = 21,
  [399] = 399,
  [400] = 395,
  [401] = 395,
  [402] = 402,
  [403] = 395,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 121,
  [410] = 410,
  [411] = 404,
  [412] = 412,
  [413] = 395,
  [414] = 124,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 20,
  [419] = 419,
  [420] = 255,
  [421] = 419,
  [422] = 419,
  [423] = 423,
  [424] = 18,
  [425] = 20,
  [426] = 20,
  [427] = 419,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 18,
  [432] = 37,
  [433] = 18,
  [434] = 260,
  [435] = 435,
  [436] = 419,
  [437] = 419,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 251,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 18,
  [447] = 20,
  [448] = 24,
  [449] = 25,
  [450] = 21,
  [451] = 25,
  [452] = 452,
  [453] = 24,
  [454] = 24,
  [455] = 21,
  [456] = 25,
  [457] = 21,
  [458] = 458,
  [459] = 459,
  [460] = 21,
  [461] = 8,
  [462] = 458,
  [463] = 463,
  [464] = 21,
  [465] = 24,
  [466] = 466,
  [467] = 21,
  [468] = 21,
  [469] = 25,
  [470] = 470,
  [471] = 458,
  [472] = 458,
  [473] = 473,
  [474] = 474,
  [475] = 458,
  [476] = 458,
  [477] = 92,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 480,
  [482] = 98,
  [483] = 97,
  [484] = 480,
  [485] = 480,
  [486] = 93,
  [487] = 480,
  [488] = 57,
  [489] = 480,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 96,
  [494] = 480,
  [495] = 480,
  [496] = 21,
  [497] = 51,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 498,
  [502] = 502,
  [503] = 503,
  [504] = 498,
  [505] = 498,
  [506] = 506,
  [507] = 507,
  [508] = 503,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 510,
  [513] = 15,
  [514] = 503,
  [515] = 11,
  [516] = 16,
  [517] = 31,
  [518] = 498,
  [519] = 14,
  [520] = 503,
  [521] = 503,
  [522] = 510,
  [523] = 17,
  [524] = 498,
  [525] = 503,
  [526] = 34,
  [527] = 510,
  [528] = 63,
  [529] = 13,
  [530] = 4,
  [531] = 531,
  [532] = 12,
  [533] = 510,
  [534] = 19,
  [535] = 3,
  [536] = 2,
  [537] = 503,
  [538] = 33,
  [539] = 510,
  [540] = 503,
  [541] = 10,
  [542] = 503,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 543,
  [547] = 547,
  [548] = 8,
  [549] = 549,
  [550] = 39,
  [551] = 543,
  [552] = 552,
  [553] = 543,
  [554] = 2,
  [555] = 544,
  [556] = 556,
  [557] = 544,
  [558] = 558,
  [559] = 544,
  [560] = 543,
  [561] = 556,
  [562] = 562,
  [563] = 543,
  [564] = 564,
  [565] = 544,
  [566] = 566,
  [567] = 567,
  [568] = 3,
  [569] = 4,
  [570] = 570,
  [571] = 547,
  [572] = 572,
  [573] = 556,
  [574] = 556,
  [575] = 575,
  [576] = 543,
  [577] = 577,
  [578] = 578,
  [579] = 544,
  [580] = 556,
  [581] = 581,
  [582] = 543,
  [583] = 556,
  [584] = 543,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 586,
  [589] = 93,
  [590] = 587,
  [591] = 591,
  [592] = 586,
  [593] = 593,
  [594] = 594,
  [595] = 92,
  [596] = 96,
  [597] = 586,
  [598] = 587,
  [599] = 586,
  [600] = 97,
  [601] = 601,
  [602] = 602,
  [603] = 587,
  [604] = 604,
  [605] = 97,
  [606] = 92,
  [607] = 587,
  [608] = 98,
  [609] = 586,
  [610] = 96,
  [611] = 98,
  [612] = 587,
  [613] = 613,
  [614] = 586,
  [615] = 587,
  [616] = 93,
  [617] = 17,
  [618] = 618,
  [619] = 618,
  [620] = 620,
  [621] = 33,
  [622] = 620,
  [623] = 19,
  [624] = 12,
  [625] = 13,
  [626] = 618,
  [627] = 34,
  [628] = 14,
  [629] = 31,
  [630] = 16,
  [631] = 618,
  [632] = 620,
  [633] = 11,
  [634] = 618,
  [635] = 15,
  [636] = 620,
  [637] = 618,
  [638] = 620,
  [639] = 639,
  [640] = 618,
  [641] = 620,
  [642] = 620,
  [643] = 618,
  [644] = 644,
  [645] = 10,
  [646] = 620,
  [647] = 2,
  [648] = 3,
  [649] = 4,
  [650] = 620,
  [651] = 618,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 39,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 658,
  [660] = 660,
  [661] = 661,
  [662] = 652,
  [663] = 652,
  [664] = 658,
  [665] = 658,
  [666] = 666,
  [667] = 652,
  [668] = 658,
  [669] = 669,
  [670] = 670,
  [671] = 8,
  [672] = 8,
  [673] = 673,
  [674] = 658,
  [675] = 8,
  [676] = 92,
  [677] = 97,
  [678] = 678,
  [679] = 98,
  [680] = 98,
  [681] = 96,
  [682] = 682,
  [683] = 97,
  [684] = 93,
  [685] = 96,
  [686] = 8,
  [687] = 98,
  [688] = 93,
  [689] = 93,
  [690] = 690,
  [691] = 92,
  [692] = 92,
  [693] = 97,
  [694] = 96,
  [695] = 695,
  [696] = 106,
  [697] = 115,
  [698] = 698,
  [699] = 97,
  [700] = 15,
  [701] = 11,
  [702] = 16,
  [703] = 31,
  [704] = 14,
  [705] = 17,
  [706] = 100,
  [707] = 34,
  [708] = 13,
  [709] = 698,
  [710] = 107,
  [711] = 698,
  [712] = 12,
  [713] = 113,
  [714] = 19,
  [715] = 2,
  [716] = 698,
  [717] = 717,
  [718] = 111,
  [719] = 10,
  [720] = 698,
  [721] = 33,
  [722] = 19,
  [723] = 12,
  [724] = 33,
  [725] = 13,
  [726] = 726,
  [727] = 698,
  [728] = 34,
  [729] = 112,
  [730] = 10,
  [731] = 103,
  [732] = 17,
  [733] = 733,
  [734] = 96,
  [735] = 14,
  [736] = 698,
  [737] = 31,
  [738] = 98,
  [739] = 33,
  [740] = 19,
  [741] = 12,
  [742] = 13,
  [743] = 31,
  [744] = 14,
  [745] = 2,
  [746] = 3,
  [747] = 16,
  [748] = 4,
  [749] = 17,
  [750] = 92,
  [751] = 2,
  [752] = 3,
  [753] = 4,
  [754] = 15,
  [755] = 11,
  [756] = 34,
  [757] = 93,
  [758] = 16,
  [759] = 11,
  [760] = 15,
  [761] = 698,
  [762] = 698,
  [763] = 4,
  [764] = 3,
  [765] = 10,
  [766] = 17,
  [767] = 767,
  [768] = 39,
  [769] = 767,
  [770] = 770,
  [771] = 15,
  [772] = 39,
  [773] = 11,
  [774] = 16,
  [775] = 121,
  [776] = 31,
  [777] = 14,
  [778] = 778,
  [779] = 779,
  [780] = 778,
  [781] = 781,
  [782] = 781,
  [783] = 779,
  [784] = 39,
  [785] = 781,
  [786] = 786,
  [787] = 779,
  [788] = 778,
  [789] = 34,
  [790] = 767,
  [791] = 129,
  [792] = 786,
  [793] = 779,
  [794] = 781,
  [795] = 767,
  [796] = 778,
  [797] = 781,
  [798] = 786,
  [799] = 13,
  [800] = 778,
  [801] = 786,
  [802] = 778,
  [803] = 2,
  [804] = 778,
  [805] = 781,
  [806] = 779,
  [807] = 12,
  [808] = 767,
  [809] = 19,
  [810] = 810,
  [811] = 124,
  [812] = 778,
  [813] = 778,
  [814] = 786,
  [815] = 781,
  [816] = 33,
  [817] = 4,
  [818] = 818,
  [819] = 3,
  [820] = 779,
  [821] = 10,
  [822] = 767,
  [823] = 781,
  [824] = 779,
  [825] = 786,
  [826] = 781,
  [827] = 827,
  [828] = 786,
  [829] = 438,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 39,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 844,
  [850] = 850,
  [851] = 846,
  [852] = 843,
  [853] = 846,
  [854] = 854,
  [855] = 845,
  [856] = 845,
  [857] = 857,
  [858] = 847,
  [859] = 847,
  [860] = 843,
  [861] = 844,
  [862] = 862,
  [863] = 843,
  [864] = 864,
  [865] = 845,
  [866] = 866,
  [867] = 843,
  [868] = 868,
  [869] = 869,
  [870] = 844,
  [871] = 844,
  [872] = 872,
  [873] = 844,
  [874] = 844,
  [875] = 844,
  [876] = 843,
  [877] = 847,
  [878] = 844,
  [879] = 846,
  [880] = 844,
  [881] = 845,
  [882] = 843,
  [883] = 846,
  [884] = 847,
  [885] = 845,
  [886] = 846,
  [887] = 847,
  [888] = 846,
  [889] = 844,
  [890] = 845,
  [891] = 847,
  [892] = 892,
  [893] = 892,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 896,
  [899] = 892,
  [900] = 900,
  [901] = 896,
  [902] = 896,
  [903] = 892,
  [904] = 892,
  [905] = 905,
  [906] = 892,
  [907] = 907,
  [908] = 908,
  [909] = 897,
  [910] = 892,
  [911] = 896,
  [912] = 892,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 892,
  [919] = 897,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 897,
  [924] = 924,
  [925] = 892,
  [926] = 926,
  [927] = 927,
  [928] = 928,
  [929] = 929,
  [930] = 892,
  [931] = 897,
  [932] = 896,
  [933] = 896,
  [934] = 896,
  [935] = 920,
  [936] = 897,
  [937] = 937,
  [938] = 897,
  [939] = 939,
  [940] = 940,
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
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(540);
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
      if (lookahead == 'E') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(541);
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
      if (lookahead == ')') ADVANCE(575);
      if (lookahead == ',') ADVANCE(577);
      if (lookahead == '/') ADVANCE(664);
      if (lookahead == ':') ADVANCE(658);
      if (lookahead == '>') ADVANCE(517);
      if (lookahead == '?') ADVANCE(666);
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
          lookahead == ' ') SKIP(499)
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
          lookahead == ' ') SKIP(509)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 510:
      if (eof) ADVANCE(514);
      if (lookahead == ')') ADVANCE(575);
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
      if (lookahead == '}') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(510)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(530);
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
  [3] = {.lex_state = 499},
  [4] = {.lex_state = 499},
  [5] = {.lex_state = 500},
  [6] = {.lex_state = 506},
  [7] = {.lex_state = 507},
  [8] = {.lex_state = 499},
  [9] = {.lex_state = 508},
  [10] = {.lex_state = 499},
  [11] = {.lex_state = 499},
  [12] = {.lex_state = 499},
  [13] = {.lex_state = 499},
  [14] = {.lex_state = 499},
  [15] = {.lex_state = 499},
  [16] = {.lex_state = 499},
  [17] = {.lex_state = 499},
  [18] = {.lex_state = 510},
  [19] = {.lex_state = 499},
  [20] = {.lex_state = 510},
  [21] = {.lex_state = 510},
  [22] = {.lex_state = 501},
  [23] = {.lex_state = 501},
  [24] = {.lex_state = 510},
  [25] = {.lex_state = 510},
  [26] = {.lex_state = 501},
  [27] = {.lex_state = 509},
  [28] = {.lex_state = 502},
  [29] = {.lex_state = 502},
  [30] = {.lex_state = 502},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 503},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 503},
  [36] = {.lex_state = 503},
  [37] = {.lex_state = 500},
  [38] = {.lex_state = 504},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 504},
  [41] = {.lex_state = 504},
  [42] = {.lex_state = 512},
  [43] = {.lex_state = 512},
  [44] = {.lex_state = 506},
  [45] = {.lex_state = 499},
  [46] = {.lex_state = 499},
  [47] = {.lex_state = 499},
  [48] = {.lex_state = 499},
  [49] = {.lex_state = 499},
  [50] = {.lex_state = 499},
  [51] = {.lex_state = 499},
  [52] = {.lex_state = 499},
  [53] = {.lex_state = 499},
  [54] = {.lex_state = 499},
  [55] = {.lex_state = 499},
  [56] = {.lex_state = 499},
  [57] = {.lex_state = 499},
  [58] = {.lex_state = 507},
  [59] = {.lex_state = 499},
  [60] = {.lex_state = 499},
  [61] = {.lex_state = 499},
  [62] = {.lex_state = 508},
  [63] = {.lex_state = 499},
  [64] = {.lex_state = 499},
  [65] = {.lex_state = 505},
  [66] = {.lex_state = 511},
  [67] = {.lex_state = 499},
  [68] = {.lex_state = 511},
  [69] = {.lex_state = 505},
  [70] = {.lex_state = 505},
  [71] = {.lex_state = 499},
  [72] = {.lex_state = 511},
  [73] = {.lex_state = 499},
  [74] = {.lex_state = 511},
  [75] = {.lex_state = 499},
  [76] = {.lex_state = 511},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 499},
  [80] = {.lex_state = 513},
  [81] = {.lex_state = 499},
  [82] = {.lex_state = 513},
  [83] = {.lex_state = 499},
  [84] = {.lex_state = 499},
  [85] = {.lex_state = 513},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 499},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 509},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 499},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 499},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 499},
  [107] = {.lex_state = 499},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 499},
  [112] = {.lex_state = 499},
  [113] = {.lex_state = 499},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 499},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 499},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 499},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 499},
  [125] = {.lex_state = 499},
  [126] = {.lex_state = 499},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 499},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 499},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 499},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 499},
  [143] = {.lex_state = 499},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 499},
  [146] = {.lex_state = 499},
  [147] = {.lex_state = 499},
  [148] = {.lex_state = 499},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 499},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 499},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 499},
  [163] = {.lex_state = 499},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 499},
  [167] = {.lex_state = 499},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 499},
  [175] = {.lex_state = 513},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 499},
  [179] = {.lex_state = 513},
  [180] = {.lex_state = 513},
  [181] = {.lex_state = 499},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 499},
  [184] = {.lex_state = 499},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 513},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 499},
  [192] = {.lex_state = 499},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 499},
  [196] = {.lex_state = 499},
  [197] = {.lex_state = 499},
  [198] = {.lex_state = 499},
  [199] = {.lex_state = 499},
  [200] = {.lex_state = 499},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 499},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 499},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 499},
  [209] = {.lex_state = 499},
  [210] = {.lex_state = 499},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 499},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 499},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 499},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 499},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 499},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 499},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 12},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 512},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 499},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 499},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 499},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 512},
  [269] = {.lex_state = 512},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 9},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 15},
  [285] = {.lex_state = 13},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 15},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 15},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 13},
  [297] = {.lex_state = 13},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 13},
  [302] = {.lex_state = 13},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 15},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 15},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 13},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 15},
  [319] = {.lex_state = 13},
  [320] = {.lex_state = 13},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 9},
  [323] = {.lex_state = 7},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 13},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 13},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 3},
  [333] = {.lex_state = 13},
  [334] = {.lex_state = 13},
  [335] = {.lex_state = 3},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 10},
  [352] = {.lex_state = 17},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 17},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 6},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 499},
  [365] = {.lex_state = 10},
  [366] = {.lex_state = 10},
  [367] = {.lex_state = 10},
  [368] = {.lex_state = 10},
  [369] = {.lex_state = 499},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 499},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 499},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 10},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 10},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 499},
  [381] = {.lex_state = 10},
  [382] = {.lex_state = 8},
  [383] = {.lex_state = 10},
  [384] = {.lex_state = 10},
  [385] = {.lex_state = 10},
  [386] = {.lex_state = 499},
  [387] = {.lex_state = 10},
  [388] = {.lex_state = 17},
  [389] = {.lex_state = 499},
  [390] = {.lex_state = 10},
  [391] = {.lex_state = 10},
  [392] = {.lex_state = 499},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 499},
  [395] = {.lex_state = 10},
  [396] = {.lex_state = 10},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 10},
  [401] = {.lex_state = 10},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 10},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 16},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 499},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 10},
  [414] = {.lex_state = 499},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 18},
  [419] = {.lex_state = 10},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 10},
  [422] = {.lex_state = 10},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 20},
  [425] = {.lex_state = 20},
  [426] = {.lex_state = 19},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 18},
  [432] = {.lex_state = 4},
  [433] = {.lex_state = 19},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 10},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 64},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 21},
  [447] = {.lex_state = 21},
  [448] = {.lex_state = 23},
  [449] = {.lex_state = 23},
  [450] = {.lex_state = 19},
  [451] = {.lex_state = 24},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 24},
  [454] = {.lex_state = 22},
  [455] = {.lex_state = 20},
  [456] = {.lex_state = 22},
  [457] = {.lex_state = 18},
  [458] = {.lex_state = 11},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 21},
  [461] = {.lex_state = 9},
  [462] = {.lex_state = 11},
  [463] = {.lex_state = 62},
  [464] = {.lex_state = 24},
  [465] = {.lex_state = 25},
  [466] = {.lex_state = 64},
  [467] = {.lex_state = 22},
  [468] = {.lex_state = 23},
  [469] = {.lex_state = 25},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 11},
  [472] = {.lex_state = 11},
  [473] = {.lex_state = 62},
  [474] = {.lex_state = 63},
  [475] = {.lex_state = 11},
  [476] = {.lex_state = 11},
  [477] = {.lex_state = 9},
  [478] = {.lex_state = 62},
  [479] = {.lex_state = 16},
  [480] = {.lex_state = 16},
  [481] = {.lex_state = 16},
  [482] = {.lex_state = 9},
  [483] = {.lex_state = 9},
  [484] = {.lex_state = 16},
  [485] = {.lex_state = 16},
  [486] = {.lex_state = 9},
  [487] = {.lex_state = 16},
  [488] = {.lex_state = 499},
  [489] = {.lex_state = 16},
  [490] = {.lex_state = 63},
  [491] = {.lex_state = 63},
  [492] = {.lex_state = 499},
  [493] = {.lex_state = 9},
  [494] = {.lex_state = 16},
  [495] = {.lex_state = 16},
  [496] = {.lex_state = 25},
  [497] = {.lex_state = 499},
  [498] = {.lex_state = 10},
  [499] = {.lex_state = 27},
  [500] = {.lex_state = 26},
  [501] = {.lex_state = 10},
  [502] = {.lex_state = 63},
  [503] = {.lex_state = 65},
  [504] = {.lex_state = 10},
  [505] = {.lex_state = 10},
  [506] = {.lex_state = 11},
  [507] = {.lex_state = 26},
  [508] = {.lex_state = 65},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 10},
  [511] = {.lex_state = 63},
  [512] = {.lex_state = 10},
  [513] = {.lex_state = 9},
  [514] = {.lex_state = 65},
  [515] = {.lex_state = 9},
  [516] = {.lex_state = 9},
  [517] = {.lex_state = 9},
  [518] = {.lex_state = 10},
  [519] = {.lex_state = 9},
  [520] = {.lex_state = 65},
  [521] = {.lex_state = 65},
  [522] = {.lex_state = 10},
  [523] = {.lex_state = 9},
  [524] = {.lex_state = 10},
  [525] = {.lex_state = 65},
  [526] = {.lex_state = 9},
  [527] = {.lex_state = 10},
  [528] = {.lex_state = 499},
  [529] = {.lex_state = 9},
  [530] = {.lex_state = 9},
  [531] = {.lex_state = 27},
  [532] = {.lex_state = 9},
  [533] = {.lex_state = 10},
  [534] = {.lex_state = 9},
  [535] = {.lex_state = 9},
  [536] = {.lex_state = 9},
  [537] = {.lex_state = 65},
  [538] = {.lex_state = 9},
  [539] = {.lex_state = 10},
  [540] = {.lex_state = 65},
  [541] = {.lex_state = 9},
  [542] = {.lex_state = 65},
  [543] = {.lex_state = 65},
  [544] = {.lex_state = 11},
  [545] = {.lex_state = 510},
  [546] = {.lex_state = 65},
  [547] = {.lex_state = 26},
  [548] = {.lex_state = 10},
  [549] = {.lex_state = 26},
  [550] = {.lex_state = 9},
  [551] = {.lex_state = 65},
  [552] = {.lex_state = 26},
  [553] = {.lex_state = 65},
  [554] = {.lex_state = 1},
  [555] = {.lex_state = 11},
  [556] = {.lex_state = 11},
  [557] = {.lex_state = 11},
  [558] = {.lex_state = 11},
  [559] = {.lex_state = 11},
  [560] = {.lex_state = 65},
  [561] = {.lex_state = 11},
  [562] = {.lex_state = 26},
  [563] = {.lex_state = 65},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 11},
  [566] = {.lex_state = 26},
  [567] = {.lex_state = 26},
  [568] = {.lex_state = 1},
  [569] = {.lex_state = 1},
  [570] = {.lex_state = 65},
  [571] = {.lex_state = 26},
  [572] = {.lex_state = 65},
  [573] = {.lex_state = 11},
  [574] = {.lex_state = 11},
  [575] = {.lex_state = 65},
  [576] = {.lex_state = 65},
  [577] = {.lex_state = 65},
  [578] = {.lex_state = 65},
  [579] = {.lex_state = 11},
  [580] = {.lex_state = 11},
  [581] = {.lex_state = 510},
  [582] = {.lex_state = 65},
  [583] = {.lex_state = 11},
  [584] = {.lex_state = 65},
  [585] = {.lex_state = 28},
  [586] = {.lex_state = 510},
  [587] = {.lex_state = 510},
  [588] = {.lex_state = 510},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 510},
  [591] = {.lex_state = 11},
  [592] = {.lex_state = 510},
  [593] = {.lex_state = 65},
  [594] = {.lex_state = 11},
  [595] = {.lex_state = 10},
  [596] = {.lex_state = 10},
  [597] = {.lex_state = 510},
  [598] = {.lex_state = 510},
  [599] = {.lex_state = 510},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 11},
  [602] = {.lex_state = 11},
  [603] = {.lex_state = 510},
  [604] = {.lex_state = 11},
  [605] = {.lex_state = 10},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 510},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 510},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 10},
  [612] = {.lex_state = 510},
  [613] = {.lex_state = 11},
  [614] = {.lex_state = 510},
  [615] = {.lex_state = 510},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 10},
  [618] = {.lex_state = 28},
  [619] = {.lex_state = 28},
  [620] = {.lex_state = 28},
  [621] = {.lex_state = 10},
  [622] = {.lex_state = 28},
  [623] = {.lex_state = 10},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 10},
  [626] = {.lex_state = 28},
  [627] = {.lex_state = 10},
  [628] = {.lex_state = 10},
  [629] = {.lex_state = 10},
  [630] = {.lex_state = 10},
  [631] = {.lex_state = 28},
  [632] = {.lex_state = 28},
  [633] = {.lex_state = 10},
  [634] = {.lex_state = 28},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 28},
  [637] = {.lex_state = 28},
  [638] = {.lex_state = 28},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 28},
  [641] = {.lex_state = 28},
  [642] = {.lex_state = 28},
  [643] = {.lex_state = 28},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 28},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 28},
  [651] = {.lex_state = 28},
  [652] = {.lex_state = 28},
  [653] = {.lex_state = 28},
  [654] = {.lex_state = 28},
  [655] = {.lex_state = 10},
  [656] = {.lex_state = 28},
  [657] = {.lex_state = 28},
  [658] = {.lex_state = 499},
  [659] = {.lex_state = 499},
  [660] = {.lex_state = 28},
  [661] = {.lex_state = 28},
  [662] = {.lex_state = 28},
  [663] = {.lex_state = 28},
  [664] = {.lex_state = 499},
  [665] = {.lex_state = 499},
  [666] = {.lex_state = 28},
  [667] = {.lex_state = 28},
  [668] = {.lex_state = 499},
  [669] = {.lex_state = 28},
  [670] = {.lex_state = 28},
  [671] = {.lex_state = 26},
  [672] = {.lex_state = 11},
  [673] = {.lex_state = 28},
  [674] = {.lex_state = 499},
  [675] = {.lex_state = 27},
  [676] = {.lex_state = 26},
  [677] = {.lex_state = 26},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 26},
  [680] = {.lex_state = 11},
  [681] = {.lex_state = 26},
  [682] = {.lex_state = 510},
  [683] = {.lex_state = 11},
  [684] = {.lex_state = 26},
  [685] = {.lex_state = 11},
  [686] = {.lex_state = 28},
  [687] = {.lex_state = 27},
  [688] = {.lex_state = 27},
  [689] = {.lex_state = 11},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 11},
  [692] = {.lex_state = 27},
  [693] = {.lex_state = 27},
  [694] = {.lex_state = 27},
  [695] = {.lex_state = 510},
  [696] = {.lex_state = 499},
  [697] = {.lex_state = 499},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 28},
  [700] = {.lex_state = 11},
  [701] = {.lex_state = 11},
  [702] = {.lex_state = 11},
  [703] = {.lex_state = 11},
  [704] = {.lex_state = 11},
  [705] = {.lex_state = 11},
  [706] = {.lex_state = 499},
  [707] = {.lex_state = 11},
  [708] = {.lex_state = 11},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 499},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 11},
  [713] = {.lex_state = 499},
  [714] = {.lex_state = 11},
  [715] = {.lex_state = 11},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 499},
  [718] = {.lex_state = 499},
  [719] = {.lex_state = 26},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 26},
  [722] = {.lex_state = 26},
  [723] = {.lex_state = 26},
  [724] = {.lex_state = 11},
  [725] = {.lex_state = 26},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 26},
  [729] = {.lex_state = 499},
  [730] = {.lex_state = 11},
  [731] = {.lex_state = 499},
  [732] = {.lex_state = 26},
  [733] = {.lex_state = 499},
  [734] = {.lex_state = 28},
  [735] = {.lex_state = 26},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 26},
  [738] = {.lex_state = 28},
  [739] = {.lex_state = 27},
  [740] = {.lex_state = 27},
  [741] = {.lex_state = 27},
  [742] = {.lex_state = 27},
  [743] = {.lex_state = 27},
  [744] = {.lex_state = 27},
  [745] = {.lex_state = 27},
  [746] = {.lex_state = 27},
  [747] = {.lex_state = 26},
  [748] = {.lex_state = 27},
  [749] = {.lex_state = 27},
  [750] = {.lex_state = 28},
  [751] = {.lex_state = 26},
  [752] = {.lex_state = 26},
  [753] = {.lex_state = 26},
  [754] = {.lex_state = 27},
  [755] = {.lex_state = 27},
  [756] = {.lex_state = 27},
  [757] = {.lex_state = 28},
  [758] = {.lex_state = 27},
  [759] = {.lex_state = 26},
  [760] = {.lex_state = 26},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 11},
  [764] = {.lex_state = 11},
  [765] = {.lex_state = 27},
  [766] = {.lex_state = 28},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 27},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 28},
  [772] = {.lex_state = 26},
  [773] = {.lex_state = 28},
  [774] = {.lex_state = 28},
  [775] = {.lex_state = 499},
  [776] = {.lex_state = 28},
  [777] = {.lex_state = 28},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 11},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 28},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 499},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 28},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 28},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 28},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 28},
  [810] = {.lex_state = 499},
  [811] = {.lex_state = 499},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 28},
  [817] = {.lex_state = 28},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 28},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 28},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 662},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 28},
  [836] = {.lex_state = 510},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 662},
  [843] = {.lex_state = 510},
  [844] = {.lex_state = 495},
  [845] = {.lex_state = 510},
  [846] = {.lex_state = 510},
  [847] = {.lex_state = 510},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 495},
  [850] = {.lex_state = 662},
  [851] = {.lex_state = 510},
  [852] = {.lex_state = 510},
  [853] = {.lex_state = 510},
  [854] = {.lex_state = 499},
  [855] = {.lex_state = 510},
  [856] = {.lex_state = 510},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 510},
  [859] = {.lex_state = 510},
  [860] = {.lex_state = 510},
  [861] = {.lex_state = 495},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 510},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 510},
  [866] = {.lex_state = 500},
  [867] = {.lex_state = 510},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 499},
  [870] = {.lex_state = 495},
  [871] = {.lex_state = 495},
  [872] = {.lex_state = 499},
  [873] = {.lex_state = 495},
  [874] = {.lex_state = 495},
  [875] = {.lex_state = 495},
  [876] = {.lex_state = 510},
  [877] = {.lex_state = 510},
  [878] = {.lex_state = 495},
  [879] = {.lex_state = 510},
  [880] = {.lex_state = 495},
  [881] = {.lex_state = 510},
  [882] = {.lex_state = 510},
  [883] = {.lex_state = 510},
  [884] = {.lex_state = 510},
  [885] = {.lex_state = 510},
  [886] = {.lex_state = 510},
  [887] = {.lex_state = 510},
  [888] = {.lex_state = 510},
  [889] = {.lex_state = 495},
  [890] = {.lex_state = 510},
  [891] = {.lex_state = 510},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 66},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 496},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 663},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 496},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 496},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 499},
  [923] = {.lex_state = 496},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 499},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 496},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 496},
  [937] = {.lex_state = 663},
  [938] = {.lex_state = 496},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
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
    [sym_source_file] = STATE(940),
    [sym_prefix_declaration] = STATE(726),
    [sym_ontology] = STATE(939),
    [aux_sym_source_file_repeat1] = STATE(726),
    [anon_sym_Prefix_COLON] = ACTIONS(3),
    [anon_sym_Ontology_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(7), 52,
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
  [55] = 1,
    ACTIONS(9), 50,
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
  [108] = 1,
    ACTIONS(11), 50,
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
  [161] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(57), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(19), 23,
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
  [238] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(71), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(19), 21,
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
  [313] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(35), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(75), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(19), 20,
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
  [387] = 3,
    ACTIONS(39), 1,
      sym__language_tag,
    ACTIONS(41), 1,
      anon_sym_CARET_CARET,
    ACTIONS(37), 42,
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
  [438] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(43), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(84), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(19), 19,
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
  [511] = 1,
    ACTIONS(45), 43,
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
  [557] = 1,
    ACTIONS(47), 42,
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
  [602] = 1,
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
  [647] = 1,
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
  [692] = 1,
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
  [737] = 1,
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
  [782] = 1,
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
  [827] = 1,
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
  [872] = 8,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_e,
    ACTIONS(71), 1,
      anon_sym_E,
    STATE(865), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(67), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(61), 31,
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
  [930] = 1,
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
  [974] = 8,
    ACTIONS(69), 1,
      anon_sym_e,
    ACTIONS(71), 1,
      anon_sym_E,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(886), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(79), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
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
  [1032] = 4,
    ACTIONS(86), 1,
      anon_sym_E,
    ACTIONS(83), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 35,
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
  [1081] = 4,
    ACTIONS(92), 2,
      sym__non_zero,
      sym__zero,
    STATE(23), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(90), 30,
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
  [1130] = 4,
    ACTIONS(98), 2,
      sym__non_zero,
      sym__zero,
    STATE(23), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(96), 30,
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
  [1179] = 7,
    ACTIONS(69), 1,
      anon_sym_e,
    ACTIONS(71), 1,
      anon_sym_E,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(103), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(101), 31,
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
  [1234] = 7,
    ACTIONS(69), 1,
      anon_sym_e,
    ACTIONS(71), 1,
      anon_sym_E,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(107), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 31,
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
  [1289] = 4,
    ACTIONS(113), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
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
  [1338] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(115), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(145), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(19), 14,
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
  [1406] = 4,
    ACTIONS(117), 2,
      sym__non_zero,
      sym__zero,
    STATE(28), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(96), 28,
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
  [1453] = 4,
    ACTIONS(120), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
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
  [1500] = 4,
    ACTIONS(122), 2,
      sym__non_zero,
      sym__zero,
    STATE(28), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(90), 28,
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
  [1547] = 1,
    ACTIONS(124), 37,
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
  [1587] = 4,
    ACTIONS(126), 2,
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
  [1633] = 1,
    ACTIONS(128), 37,
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
  [1673] = 1,
    ACTIONS(130), 37,
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
  [1713] = 4,
    ACTIONS(132), 2,
      sym__non_zero,
      sym__zero,
    STATE(35), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(96), 27,
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
  [1759] = 4,
    ACTIONS(135), 2,
      sym__non_zero,
      sym__zero,
    STATE(35), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(90), 27,
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
  [1805] = 2,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(139), 30,
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
  [1846] = 4,
    ACTIONS(141), 2,
      sym__non_zero,
      sym__zero,
    STATE(40), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(90), 26,
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
  [1891] = 1,
    ACTIONS(143), 36,
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
  [1930] = 4,
    ACTIONS(145), 2,
      sym__non_zero,
      sym__zero,
    STATE(40), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(96), 26,
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
  [1975] = 4,
    ACTIONS(148), 2,
      sym__non_zero,
      sym__zero,
    STATE(38), 2,
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
  [2020] = 19,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_LT,
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
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
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
    STATE(120), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(43), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(204), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [2094] = 19,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
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
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(172), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(174), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(88), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(122), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(89), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(207), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [2168] = 2,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(139), 28,
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
  [2207] = 1,
    ACTIONS(182), 34,
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
  [2244] = 2,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 33,
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
  [2283] = 1,
    ACTIONS(188), 33,
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
  [2319] = 1,
    ACTIONS(190), 33,
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
  [2355] = 1,
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
  [2391] = 1,
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
  [2427] = 6,
    ACTIONS(198), 1,
      anon_sym_that,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(200), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(204), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 25,
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
  [2473] = 1,
    ACTIONS(209), 33,
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
  [2509] = 1,
    ACTIONS(211), 33,
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
  [2545] = 1,
    ACTIONS(213), 33,
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
  [2581] = 1,
    ACTIONS(13), 33,
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
  [2617] = 1,
    ACTIONS(215), 33,
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
  [2653] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(200), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(204), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(217), 25,
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
  [2699] = 2,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(139), 27,
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
  [2737] = 1,
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
  [2773] = 1,
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
  [2809] = 1,
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
  [2845] = 2,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(139), 26,
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
  [2882] = 5,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(200), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(204), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 25,
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
  [2925] = 1,
    ACTIONS(226), 32,
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
  [2960] = 4,
    ACTIONS(228), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
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
  [3000] = 9,
    ACTIONS(69), 1,
      anon_sym_e,
    ACTIONS(71), 1,
      anon_sym_E,
    ACTIONS(79), 1,
      anon_sym_f,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_F,
    STATE(886), 1,
      sym__exponent,
    ACTIONS(230), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
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
  [3050] = 6,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(236), 1,
      anon_sym_that,
    ACTIONS(238), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(240), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 23,
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
  [3094] = 9,
    ACTIONS(67), 1,
      anon_sym_f,
    ACTIONS(69), 1,
      anon_sym_e,
    ACTIONS(71), 1,
      anon_sym_E,
    ACTIONS(242), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_F,
    STATE(865), 1,
      sym__exponent,
    ACTIONS(230), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(61), 21,
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
  [3144] = 4,
    ACTIONS(246), 2,
      sym__non_zero,
      sym__zero,
    STATE(69), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(96), 21,
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
  [3184] = 4,
    ACTIONS(249), 2,
      sym__non_zero,
      sym__zero,
    STATE(69), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(90), 21,
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
  [3224] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(238), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(240), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(217), 23,
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
  [3268] = 8,
    ACTIONS(69), 1,
      anon_sym_e,
    ACTIONS(71), 1,
      anon_sym_E,
    ACTIONS(103), 1,
      anon_sym_f,
    ACTIONS(251), 1,
      anon_sym_F,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(230), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(101), 21,
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
  [3315] = 5,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(238), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(240), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 23,
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
  [3356] = 8,
    ACTIONS(69), 1,
      anon_sym_e,
    ACTIONS(71), 1,
      anon_sym_E,
    ACTIONS(107), 1,
      anon_sym_f,
    ACTIONS(253), 1,
      anon_sym_F,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(230), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
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
  [3403] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(255), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(257), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(217), 22,
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
  [3446] = 4,
    ACTIONS(86), 2,
      anon_sym_F,
      anon_sym_E,
    ACTIONS(259), 2,
      sym__non_zero,
      sym__zero,
    STATE(76), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 24,
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
  [3485] = 1,
    ACTIONS(262), 30,
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
  [3518] = 1,
    ACTIONS(264), 30,
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
  [3551] = 6,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(266), 1,
      anon_sym_that,
    ACTIONS(255), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(257), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 22,
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
  [3594] = 7,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_inverse,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    STATE(82), 6,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
      aux_sym_has_key_list_repeat1,
    ACTIONS(272), 18,
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
  [3638] = 5,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(255), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(257), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 22,
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
  [3678] = 7,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      anon_sym_LT,
    ACTIONS(287), 1,
      anon_sym_inverse,
    ACTIONS(290), 1,
      sym__pn_local,
    ACTIONS(293), 1,
      sym__pname_ln,
    STATE(82), 6,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
      aux_sym_has_key_list_repeat1,
    ACTIONS(285), 18,
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
  [3722] = 6,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(296), 1,
      anon_sym_that,
    ACTIONS(302), 1,
      anon_sym_value,
    ACTIONS(298), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(300), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 21,
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
  [3764] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(302), 1,
      anon_sym_value,
    ACTIONS(298), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(300), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(217), 21,
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
  [3806] = 7,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_inverse,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(82), 6,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
      aux_sym_has_key_list_repeat1,
    ACTIONS(307), 18,
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
  [3850] = 15,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      anon_sym_Import_COLON,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(119), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(370), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(233), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [3909] = 15,
    ACTIONS(311), 1,
      anon_sym_Import_COLON,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(123), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(370), 2,
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
  [3968] = 15,
    ACTIONS(311), 1,
      anon_sym_Import_COLON,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(128), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(370), 2,
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
  [4027] = 15,
    ACTIONS(311), 1,
      anon_sym_Import_COLON,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(86), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(130), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(239), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4086] = 5,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(302), 1,
      anon_sym_value,
    ACTIONS(298), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(300), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 21,
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
  [4125] = 16,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
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
    STATE(839), 1,
      sym_individual,
    STATE(908), 1,
      sym__individual_list,
    STATE(924), 1,
      sym__literal_list,
    STATE(932), 1,
      sym__lexial_value,
    ACTIONS(341), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      aux_sym__digits,
      sym__digit,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
    STATE(832), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [4186] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 25,
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
  [4220] = 3,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(130), 25,
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
  [4254] = 2,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(139), 21,
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
  [4286] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(358), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(19), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(488), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(50), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4342] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(360), 25,
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
  [4376] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 25,
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
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 25,
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
  [4444] = 17,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(358), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(775), 1,
      sym__conjunction,
    STATE(907), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(927), 1,
      sym_data_range,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    STATE(718), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(492), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4506] = 3,
    ACTIONS(366), 1,
      anon_sym_and,
    STATE(113), 1,
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
  [4539] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(370), 1,
      anon_sym_PLUS,
    ACTIONS(372), 1,
      anon_sym_DASH,
    STATE(911), 1,
      sym__lexial_value,
    ACTIONS(368), 2,
      sym__non_zero,
      sym__zero,
    STATE(66), 2,
      aux_sym__digits,
      sym__digit,
    STATE(33), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [4590] = 12,
    ACTIONS(374), 1,
      anon_sym_LT,
    ACTIONS(376), 1,
      anon_sym__COLON,
    ACTIONS(380), 1,
      anon_sym_PLUS,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym__quoted_string,
    ACTIONS(388), 1,
      sym__pn_local,
    ACTIONS(390), 1,
      sym__pname_ln,
    STATE(933), 1,
      sym__lexial_value,
    ACTIONS(378), 2,
      sym__non_zero,
      sym__zero,
    STATE(426), 2,
      aux_sym__digits,
      sym__digit,
    STATE(724), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [4641] = 3,
    ACTIONS(394), 1,
      anon_sym_and,
    STATE(106), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(392), 24,
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
  [4674] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(370), 1,
      anon_sym_PLUS,
    ACTIONS(372), 1,
      anon_sym_DASH,
    STATE(343), 1,
      sym_individual,
    STATE(911), 1,
      sym__lexial_value,
    ACTIONS(368), 2,
      sym__non_zero,
      sym__zero,
    STATE(66), 2,
      aux_sym__digits,
      sym__digit,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
    STATE(327), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [4729] = 12,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(398), 1,
      anon_sym__COLON,
    ACTIONS(402), 1,
      anon_sym_PLUS,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      sym__quoted_string,
    ACTIONS(410), 1,
      sym__pn_local,
    ACTIONS(412), 1,
      sym__pname_ln,
    STATE(901), 1,
      sym__lexial_value,
    ACTIONS(400), 2,
      sym__non_zero,
      sym__zero,
    STATE(418), 2,
      aux_sym__digits,
      sym__digit,
    STATE(721), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [4780] = 3,
    ACTIONS(414), 1,
      anon_sym_and,
    STATE(106), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(222), 24,
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
  [4813] = 3,
    ACTIONS(366), 1,
      anon_sym_and,
    STATE(112), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 24,
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
  [4846] = 12,
    ACTIONS(419), 1,
      anon_sym_LT,
    ACTIONS(421), 1,
      anon_sym__COLON,
    ACTIONS(425), 1,
      anon_sym_PLUS,
    ACTIONS(427), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      anon_sym_DOT,
    ACTIONS(431), 1,
      sym__quoted_string,
    ACTIONS(433), 1,
      sym__pn_local,
    ACTIONS(435), 1,
      sym__pname_ln,
    STATE(902), 1,
      sym__lexial_value,
    ACTIONS(423), 2,
      sym__non_zero,
      sym__zero,
    STATE(264), 2,
      aux_sym__digits,
      sym__digit,
    STATE(538), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [4897] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(439), 1,
      anon_sym_PLUS,
    ACTIONS(441), 1,
      anon_sym_DASH,
    STATE(911), 1,
      sym__lexial_value,
    ACTIONS(437), 2,
      sym__non_zero,
      sym__zero,
    STATE(352), 2,
      aux_sym__digits,
      sym__digit,
    STATE(33), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [4948] = 12,
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
    STATE(896), 1,
      sym__lexial_value,
    ACTIONS(447), 2,
      sym__non_zero,
      sym__zero,
    STATE(425), 2,
      aux_sym__digits,
      sym__digit,
    STATE(739), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [4999] = 3,
    ACTIONS(394), 1,
      anon_sym_and,
    STATE(103), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(461), 24,
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
  [5032] = 3,
    ACTIONS(366), 1,
      anon_sym_and,
    STATE(115), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(463), 24,
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
  [5065] = 3,
    ACTIONS(366), 1,
      anon_sym_and,
    STATE(115), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 24,
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
  [5098] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
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
    STATE(911), 1,
      sym__lexial_value,
    ACTIONS(341), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      aux_sym__digits,
      sym__digit,
    STATE(33), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [5149] = 3,
    ACTIONS(465), 1,
      anon_sym_and,
    STATE(115), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(188), 24,
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
  [5182] = 12,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(470), 1,
      anon_sym__COLON,
    ACTIONS(474), 1,
      anon_sym_PLUS,
    ACTIONS(476), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      sym__quoted_string,
    ACTIONS(482), 1,
      sym__pn_local,
    ACTIONS(484), 1,
      sym__pname_ln,
    STATE(898), 1,
      sym__lexial_value,
    ACTIONS(472), 2,
      sym__non_zero,
      sym__zero,
    STATE(358), 2,
      aux_sym__digits,
      sym__digit,
    STATE(621), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [5233] = 12,
    ACTIONS(486), 1,
      anon_sym_LT,
    ACTIONS(488), 1,
      anon_sym__COLON,
    ACTIONS(492), 1,
      anon_sym_PLUS,
    ACTIONS(494), 1,
      anon_sym_DASH,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(498), 1,
      sym__quoted_string,
    ACTIONS(500), 1,
      sym__pn_local,
    ACTIONS(502), 1,
      sym__pname_ln,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(490), 2,
      sym__non_zero,
      sym__zero,
    STATE(447), 2,
      aux_sym__digits,
      sym__digit,
    STATE(816), 13,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
      sym__annotation_target,
  [5284] = 3,
    ACTIONS(506), 1,
      anon_sym_and,
    STATE(118), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(504), 23,
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
  [5316] = 13,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(248), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [5368] = 13,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(240), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [5420] = 3,
    ACTIONS(515), 1,
      anon_sym_or,
    STATE(129), 1,
      aux_sym_description_repeat1,
    ACTIONS(513), 23,
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
  [5452] = 13,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(231), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [5504] = 13,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [5556] = 3,
    ACTIONS(521), 1,
      anon_sym_or,
    STATE(124), 1,
      aux_sym_description_repeat1,
    ACTIONS(226), 23,
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
  [5588] = 3,
    ACTIONS(526), 1,
      anon_sym_and,
    STATE(118), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(524), 23,
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
  [5620] = 3,
    ACTIONS(526), 1,
      anon_sym_and,
    STATE(125), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(528), 23,
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
  [5652] = 1,
    ACTIONS(530), 25,
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
  [5680] = 13,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(236), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [5732] = 3,
    ACTIONS(515), 1,
      anon_sym_or,
    STATE(124), 1,
      aux_sym_description_repeat1,
    ACTIONS(534), 23,
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
  [5764] = 13,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(237), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [5816] = 3,
    ACTIONS(538), 1,
      anon_sym_and,
    STATE(147), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 22,
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
  [5847] = 3,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(540), 22,
      ts_builtin_sym_end,
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
  [5878] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(544), 22,
      ts_builtin_sym_end,
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
  [5909] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(548), 22,
      ts_builtin_sym_end,
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
  [5940] = 3,
    ACTIONS(550), 1,
      anon_sym_and,
    STATE(167), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(461), 22,
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
  [5971] = 3,
    ACTIONS(554), 1,
      anon_sym_o,
    STATE(136), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(552), 22,
      ts_builtin_sym_end,
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
  [6002] = 3,
    ACTIONS(559), 1,
      anon_sym_o,
    STATE(136), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(557), 22,
      ts_builtin_sym_end,
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
  [6033] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(561), 22,
      ts_builtin_sym_end,
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
  [6064] = 3,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
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
  [6095] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(140), 1,
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
  [6126] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [6157] = 1,
    ACTIONS(504), 24,
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
  [6184] = 3,
    ACTIONS(579), 1,
      anon_sym_or,
    STATE(143), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(577), 22,
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
  [6215] = 7,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(588), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(590), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(586), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(159), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(584), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(582), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6254] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(592), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(594), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(217), 16,
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
  [6291] = 3,
    ACTIONS(596), 1,
      anon_sym_and,
    STATE(146), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(188), 22,
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
  [6322] = 3,
    ACTIONS(538), 1,
      anon_sym_and,
    STATE(146), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(463), 22,
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
  [6353] = 3,
    ACTIONS(538), 1,
      anon_sym_and,
    STATE(146), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 22,
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
  [6384] = 3,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(262), 22,
      ts_builtin_sym_end,
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
  [6415] = 3,
    ACTIONS(559), 1,
      anon_sym_o,
    STATE(136), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(602), 22,
      ts_builtin_sym_end,
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
  [6446] = 3,
    ACTIONS(559), 1,
      anon_sym_o,
    STATE(137), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(602), 22,
      ts_builtin_sym_end,
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
  [6477] = 3,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(604), 22,
      ts_builtin_sym_end,
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
  [6508] = 3,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(604), 22,
      ts_builtin_sym_end,
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
  [6539] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(606), 22,
      ts_builtin_sym_end,
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
  [6570] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
    ACTIONS(606), 22,
      ts_builtin_sym_end,
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
  [6601] = 6,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(608), 1,
      anon_sym_that,
    ACTIONS(592), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(594), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 16,
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
  [6638] = 3,
    ACTIONS(559), 1,
      anon_sym_o,
    STATE(150), 1,
      aux_sym_object_property_frame_repeat1,
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
  [6669] = 7,
    ACTIONS(612), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(621), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(624), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(618), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(158), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(615), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(610), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6708] = 7,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(588), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(590), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(586), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(158), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(584), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(627), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6747] = 3,
    ACTIONS(631), 1,
      anon_sym_or,
    STATE(166), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(629), 22,
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
  [6778] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(633), 22,
      ts_builtin_sym_end,
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
  [6809] = 3,
    ACTIONS(538), 1,
      anon_sym_and,
    STATE(148), 1,
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
  [6840] = 3,
    ACTIONS(635), 1,
      anon_sym_and,
    STATE(163), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(222), 22,
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
  [6871] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [6902] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(544), 22,
      ts_builtin_sym_end,
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
  [6933] = 3,
    ACTIONS(631), 1,
      anon_sym_or,
    STATE(143), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(640), 22,
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
  [6964] = 3,
    ACTIONS(550), 1,
      anon_sym_and,
    STATE(163), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(392), 22,
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
  [6995] = 1,
    ACTIONS(552), 23,
      ts_builtin_sym_end,
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
  [7021] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(642), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(213), 1,
      sym_data_range,
    STATE(307), 1,
      sym__annotations,
    STATE(312), 1,
      sym_data_range_annotated_list,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7075] = 1,
    ACTIONS(9), 23,
      ts_builtin_sym_end,
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
  [7101] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(358), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(488), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(55), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7149] = 1,
    ACTIONS(7), 23,
      ts_builtin_sym_end,
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
  [7175] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(57), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(55), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7223] = 1,
    ACTIONS(577), 23,
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
  [7249] = 2,
    ACTIONS(530), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(650), 20,
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
  [7277] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(33), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(71), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(55), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7325] = 1,
    ACTIONS(11), 23,
      ts_builtin_sym_end,
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
  [7351] = 3,
    ACTIONS(652), 1,
      anon_sym_or,
    STATE(192), 1,
      aux_sym_description_repeat1,
    ACTIONS(534), 21,
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
  [7381] = 2,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(654), 20,
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
  [7409] = 2,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(656), 20,
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
  [7437] = 3,
    ACTIONS(652), 1,
      anon_sym_or,
    STATE(178), 1,
      aux_sym_description_repeat1,
    ACTIONS(513), 21,
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
  [7467] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(35), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(75), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(55), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7515] = 3,
    ACTIONS(658), 1,
      anon_sym_and,
    STATE(183), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(188), 21,
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
  [7545] = 3,
    ACTIONS(661), 1,
      anon_sym_and,
    STATE(183), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(463), 21,
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
  [7575] = 1,
    ACTIONS(568), 23,
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
  [7601] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(43), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(84), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(55), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7649] = 1,
    ACTIONS(663), 23,
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
  [7675] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(115), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(145), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(55), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7723] = 2,
    ACTIONS(7), 3,
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
  [7751] = 1,
    ACTIONS(561), 23,
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
  [7777] = 3,
    ACTIONS(667), 1,
      anon_sym_and,
    STATE(195), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(461), 21,
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
  [7807] = 3,
    ACTIONS(669), 1,
      anon_sym_or,
    STATE(192), 1,
      aux_sym_description_repeat1,
    ACTIONS(226), 21,
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
  [7837] = 1,
    ACTIONS(672), 23,
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
  [7863] = 1,
    ACTIONS(674), 23,
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
  [7889] = 3,
    ACTIONS(667), 1,
      anon_sym_and,
    STATE(200), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(392), 21,
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
  [7919] = 3,
    ACTIONS(661), 1,
      anon_sym_and,
    STATE(183), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 21,
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
  [7949] = 3,
    ACTIONS(661), 1,
      anon_sym_and,
    STATE(196), 1,
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
  [7979] = 3,
    ACTIONS(661), 1,
      anon_sym_and,
    STATE(184), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 21,
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
  [8009] = 5,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(592), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(594), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 16,
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
  [8043] = 3,
    ACTIONS(676), 1,
      anon_sym_and,
    STATE(200), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(222), 21,
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
  [8073] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(548), 20,
      ts_builtin_sym_end,
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
  [8102] = 3,
    ACTIONS(681), 1,
      anon_sym_and,
    STATE(212), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(461), 20,
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
  [8131] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [8160] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(687), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [8205] = 3,
    ACTIONS(689), 1,
      anon_sym_and,
    STATE(205), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(222), 20,
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
  [8234] = 3,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(262), 20,
      ts_builtin_sym_end,
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
  [8263] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(695), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [8308] = 3,
    ACTIONS(697), 1,
      anon_sym_and,
    STATE(208), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(188), 20,
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
  [8337] = 3,
    ACTIONS(700), 1,
      anon_sym_and,
    STATE(208), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(463), 20,
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
  [8366] = 3,
    ACTIONS(700), 1,
      anon_sym_and,
    STATE(208), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 20,
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
  [8395] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(702), 20,
      ts_builtin_sym_end,
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
  [8424] = 3,
    ACTIONS(681), 1,
      anon_sym_and,
    STATE(205), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(392), 20,
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
  [8453] = 3,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(707), 20,
      ts_builtin_sym_end,
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
  [8482] = 3,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_data_range_annotated_list_repeat1,
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
  [8511] = 9,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(715), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(717), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(719), 1,
      anon_sym_Domain_COLON,
    ACTIONS(721), 1,
      anon_sym_Range_COLON,
    ACTIONS(723), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(725), 1,
      anon_sym_Characteristics_COLON,
    STATE(235), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(713), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8552] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(727), 20,
      ts_builtin_sym_end,
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
  [8581] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [8610] = 3,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(729), 20,
      ts_builtin_sym_end,
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
  [8639] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(734), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [8684] = 3,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(736), 20,
      ts_builtin_sym_end,
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
  [8713] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(544), 20,
      ts_builtin_sym_end,
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
  [8742] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [8787] = 3,
    ACTIONS(700), 1,
      anon_sym_and,
    STATE(210), 1,
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
  [8816] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [8845] = 3,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(736), 20,
      ts_builtin_sym_end,
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
  [8874] = 1,
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
  [8899] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(633), 20,
      ts_builtin_sym_end,
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
  [8928] = 3,
    ACTIONS(742), 1,
      anon_sym_or,
    STATE(230), 1,
      aux_sym_description_repeat1,
    ACTIONS(513), 20,
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
  [8957] = 8,
    ACTIONS(746), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(749), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(752), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(755), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(758), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(761), 1,
      anon_sym_HasKey_COLON,
    STATE(229), 3,
      sym__annotations,
      sym_has_key_list,
      aux_sym_class_frame_repeat1,
    ACTIONS(744), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8996] = 3,
    ACTIONS(742), 1,
      anon_sym_or,
    STATE(241), 1,
      aux_sym_description_repeat1,
    ACTIONS(534), 20,
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
  [9025] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(764), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9070] = 8,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(768), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(770), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(772), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(774), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(776), 1,
      anon_sym_HasKey_COLON,
    STATE(229), 3,
      sym__annotations,
      sym_has_key_list,
      aux_sym_class_frame_repeat1,
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
  [9109] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9154] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(544), 20,
      ts_builtin_sym_end,
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
  [9183] = 9,
    ACTIONS(782), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(785), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(788), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(791), 1,
      anon_sym_Domain_COLON,
    ACTIONS(794), 1,
      anon_sym_Range_COLON,
    ACTIONS(797), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(800), 1,
      anon_sym_Characteristics_COLON,
    STATE(235), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(780), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9224] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(803), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9269] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9314] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(642), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(267), 1,
      sym_data_range,
    STATE(280), 1,
      sym__annotations,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9365] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(807), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9410] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9455] = 3,
    ACTIONS(811), 1,
      anon_sym_or,
    STATE(241), 1,
      aux_sym_description_repeat1,
    ACTIONS(226), 20,
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
  [9484] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(814), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9529] = 8,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(768), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(770), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(772), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(774), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(776), 1,
      anon_sym_HasKey_COLON,
    STATE(232), 3,
      sym__annotations,
      sym_has_key_list,
      aux_sym_class_frame_repeat1,
    ACTIONS(816), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9568] = 3,
    ACTIONS(700), 1,
      anon_sym_and,
    STATE(209), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 20,
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
  [9597] = 9,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(715), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(717), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(719), 1,
      anon_sym_Domain_COLON,
    ACTIONS(721), 1,
      anon_sym_Range_COLON,
    ACTIONS(723), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(725), 1,
      anon_sym_Characteristics_COLON,
    STATE(215), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(818), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9638] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(642), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(272), 1,
      sym__annotations,
    STATE(415), 1,
      sym_data_range,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9689] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(642), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(273), 1,
      sym__annotations,
    STATE(416), 1,
      sym_data_range,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9740] = 11,
    ACTIONS(315), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(317), 1,
      anon_sym_Class_COLON,
    ACTIONS(319), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(321), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(323), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(325), 1,
      anon_sym_Individual_COLON,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(329), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(331), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9785] = 11,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
    ACTIONS(824), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(827), 1,
      anon_sym_Class_COLON,
    ACTIONS(830), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(833), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(836), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(839), 1,
      anon_sym_Individual_COLON,
    ACTIONS(842), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(845), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(848), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
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
  [9830] = 2,
    ACTIONS(7), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(665), 15,
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
  [9856] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(851), 19,
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
  [9884] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(633), 19,
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
  [9912] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(548), 19,
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
  [9940] = 8,
    ACTIONS(861), 1,
      anon_sym_DOT,
    STATE(856), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(859), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(863), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(295), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(61), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(857), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [9978] = 3,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(865), 19,
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
  [10006] = 3,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(262), 19,
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
  [10034] = 3,
    ACTIONS(873), 1,
      anon_sym_or,
    STATE(259), 1,
      aux_sym_description_repeat1,
    ACTIONS(513), 19,
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
  [10062] = 1,
    ACTIONS(875), 21,
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
  [10086] = 3,
    ACTIONS(873), 1,
      anon_sym_or,
    STATE(265), 1,
      aux_sym_description_repeat1,
    ACTIONS(534), 19,
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
  [10114] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(877), 19,
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
  [10142] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(544), 19,
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
  [10170] = 1,
    ACTIONS(729), 21,
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
  [10194] = 3,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(544), 19,
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
  [10222] = 8,
    ACTIONS(881), 1,
      anon_sym_DOT,
    STATE(851), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(859), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(883), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(295), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(879), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [10260] = 3,
    ACTIONS(885), 1,
      anon_sym_or,
    STATE(265), 1,
      aux_sym_description_repeat1,
    ACTIONS(226), 19,
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
  [10288] = 1,
    ACTIONS(888), 21,
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
  [10312] = 1,
    ACTIONS(702), 21,
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
  [10336] = 2,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(654), 15,
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
  [10362] = 2,
    ACTIONS(9), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(656), 15,
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
  [10388] = 3,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(890), 18,
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
  [10415] = 3,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(548), 18,
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
  [10442] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(399), 1,
      sym_data_range,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10487] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(410), 1,
      sym_data_range,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10532] = 3,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(896), 18,
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
  [10559] = 3,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_fact_annotated_list_repeat1,
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
  [10586] = 3,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(544), 18,
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
  [10613] = 3,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(360), 18,
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
  [10640] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_fact_annotated_list_repeat1,
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
  [10667] = 6,
    ACTIONS(911), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(914), 1,
      anon_sym_Types_COLON,
    ACTIONS(917), 1,
      anon_sym_Facts_COLON,
    ACTIONS(920), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(279), 2,
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
  [10700] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(258), 1,
      sym_data_range,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10745] = 3,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 18,
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
  [10772] = 3,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(633), 18,
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
  [10799] = 1,
    ACTIONS(923), 20,
      ts_builtin_sym_end,
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
  [10822] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(56), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(488), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10867] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(927), 1,
      anon_sym_not,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym__conjunction,
    STATE(201), 1,
      sym_description,
    STATE(305), 1,
      sym__description_annotated_list,
    STATE(375), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(135), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(67), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10918] = 3,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(130), 18,
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
  [10945] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(56), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(145), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10990] = 3,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(262), 18,
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
  [11017] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(939), 18,
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
  [11044] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(939), 18,
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
  [11071] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(56), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(71), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11116] = 3,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(890), 18,
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
  [11143] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(927), 1,
      sym_data_range,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11188] = 6,
    ACTIONS(943), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(945), 1,
      anon_sym_Types_COLON,
    ACTIONS(947), 1,
      anon_sym_Facts_COLON,
    ACTIONS(949), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(279), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
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
  [11221] = 4,
    ACTIONS(951), 2,
      sym__non_zero,
      sym__zero,
    STATE(295), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 11,
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
  [11250] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      anon_sym_not,
    STATE(121), 1,
      sym__conjunction,
    STATE(134), 1,
      sym_description,
    STATE(226), 1,
      sym__description_annotated_list,
    STATE(384), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(111), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(51), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11301] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(956), 1,
      anon_sym_not,
    STATE(356), 1,
      sym__annotations,
    STATE(470), 1,
      sym_description_2list,
    STATE(775), 1,
      sym__conjunction,
    STATE(920), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(718), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(497), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11352] = 3,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(958), 18,
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
  [11379] = 3,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 18,
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
  [11406] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(960), 18,
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
  [11433] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(956), 1,
      anon_sym_not,
    STATE(348), 1,
      sym_description_2list,
    STATE(351), 1,
      sym__annotations,
    STATE(775), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(935), 1,
      sym_description,
    STATE(718), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(497), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11484] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(228), 1,
      sym__conjunction,
    STATE(253), 1,
      sym_description,
    STATE(349), 1,
      sym__description_annotated_list,
    STATE(366), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11535] = 1,
    ACTIONS(964), 20,
      ts_builtin_sym_end,
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
  [11558] = 1,
    ACTIONS(966), 20,
      ts_builtin_sym_end,
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
  [11581] = 1,
    ACTIONS(968), 20,
      ts_builtin_sym_end,
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
  [11604] = 1,
    ACTIONS(865), 20,
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
  [11627] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(220), 1,
      sym_data_range,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11672] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(56), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(57), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11717] = 7,
    STATE(843), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(972), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(974), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(323), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(101), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(970), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11752] = 7,
    STATE(859), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(972), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(978), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(323), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(976), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11787] = 3,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 18,
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
  [11814] = 1,
    ACTIONS(780), 20,
      ts_builtin_sym_end,
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
  [11837] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(56), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(84), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11882] = 6,
    ACTIONS(943), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(945), 1,
      anon_sym_Types_COLON,
    ACTIONS(947), 1,
      anon_sym_Facts_COLON,
    ACTIONS(949), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(294), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
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
  [11915] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(228), 1,
      sym__conjunction,
    STATE(253), 1,
      sym_description,
    STATE(340), 1,
      sym__description_annotated_list,
    STATE(366), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11966] = 3,
    ACTIONS(984), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(982), 18,
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
  [11993] = 1,
    ACTIONS(987), 20,
      ts_builtin_sym_end,
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
  [12016] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_datatype,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(56), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(75), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12061] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(989), 1,
      anon_sym_not,
    STATE(257), 1,
      sym__conjunction,
    STATE(271), 1,
      sym_description,
    STATE(353), 1,
      sym__description_annotated_list,
    STATE(367), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(202), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12112] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(228), 1,
      sym__conjunction,
    STATE(253), 1,
      sym_description,
    STATE(329), 1,
      sym__description_annotated_list,
    STATE(366), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12163] = 3,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(544), 18,
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
  [12190] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(174), 1,
      sym__data_conjunction,
    STATE(126), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12232] = 4,
    ACTIONS(991), 2,
      sym__non_zero,
      sym__zero,
    STATE(323), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 10,
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
  [12260] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(994), 17,
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
  [12286] = 5,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1000), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(998), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(350), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
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
  [12316] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(989), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(257), 1,
      sym__conjunction,
    STATE(383), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(202), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12364] = 1,
    ACTIONS(1002), 19,
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
  [12386] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(121), 1,
      sym__conjunction,
    STATE(385), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(111), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(51), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12434] = 1,
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
  [12456] = 1,
    ACTIONS(982), 19,
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
  [12478] = 1,
    ACTIONS(1006), 19,
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
  [12500] = 4,
    ACTIONS(1008), 2,
      sym__non_zero,
      sym__zero,
    STATE(332), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(94), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(96), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [12528] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(927), 1,
      anon_sym_not,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_description,
    STATE(181), 1,
      sym__conjunction,
    STATE(365), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(135), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(67), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12576] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(925), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_description,
    STATE(228), 1,
      sym__conjunction,
    STATE(368), 1,
      sym__annotations,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12624] = 4,
    ACTIONS(1011), 2,
      sym__non_zero,
      sym__zero,
    STATE(332), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(90), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [12652] = 1,
    ACTIONS(1013), 19,
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
  [12674] = 1,
    ACTIONS(1015), 19,
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
  [12696] = 1,
    ACTIONS(898), 19,
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
  [12718] = 1,
    ACTIONS(1017), 19,
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
  [12740] = 1,
    ACTIONS(1019), 19,
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
  [12762] = 5,
    ACTIONS(1023), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1029), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(1026), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(341), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(1021), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12792] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(1032), 17,
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
  [12818] = 1,
    ACTIONS(1034), 19,
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
  [12840] = 1,
    ACTIONS(1036), 19,
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
  [12862] = 4,
    ACTIONS(1038), 2,
      sym__non_zero,
      sym__zero,
    STATE(335), 2,
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
  [12890] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(1040), 17,
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
  [12916] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(1040), 17,
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
  [12942] = 1,
    ACTIONS(1042), 19,
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
  [12964] = 1,
    ACTIONS(1044), 19,
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
  [12986] = 5,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1000), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(998), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(341), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(1046), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13016] = 13,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(956), 1,
      anon_sym_not,
    STATE(339), 1,
      sym_description_2list,
    STATE(775), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(935), 1,
      sym_description,
    STATE(718), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(497), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13061] = 8,
    ACTIONS(79), 1,
      anon_sym_f,
    ACTIONS(234), 1,
      anon_sym_F,
    ACTIONS(1050), 1,
      anon_sym_DOT,
    STATE(886), 1,
      sym__exponent,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1048), 2,
      sym__non_zero,
      sym__zero,
    STATE(374), 2,
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
  [13096] = 1,
    ACTIONS(909), 18,
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
  [13117] = 8,
    ACTIONS(67), 1,
      anon_sym_f,
    ACTIONS(244), 1,
      anon_sym_F,
    ACTIONS(1052), 1,
      anon_sym_DOT,
    STATE(865), 1,
      sym__exponent,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1048), 2,
      sym__non_zero,
      sym__zero,
    STATE(374), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(61), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [13152] = 8,
    ACTIONS(1056), 1,
      anon_sym_DOT,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1054), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1058), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(361), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(857), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(61), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13187] = 13,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(956), 1,
      anon_sym_not,
    STATE(459), 1,
      sym_description_2list,
    STATE(775), 1,
      sym__conjunction,
    STATE(920), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(718), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(497), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13232] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(644), 1,
      anon_sym_not,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(142), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13271] = 8,
    ACTIONS(1060), 1,
      anon_sym_DOT,
    STATE(883), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1054), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1062), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(361), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(879), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13306] = 7,
    STATE(876), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1064), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1066), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(398), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(970), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(101), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13338] = 7,
    ACTIONS(103), 1,
      anon_sym_f,
    ACTIONS(251), 1,
      anon_sym_F,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1048), 2,
      sym__non_zero,
      sym__zero,
    STATE(374), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(101), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [13370] = 4,
    ACTIONS(1068), 2,
      sym__non_zero,
      sym__zero,
    STATE(361), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 8,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [13396] = 3,
    ACTIONS(1073), 1,
      anon_sym_Annotations_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1071), 14,
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
  [13420] = 4,
    ACTIONS(1071), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(1073), 1,
      anon_sym_Annotations_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1076), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13446] = 3,
    ACTIONS(1079), 1,
      anon_sym_and,
    STATE(364), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(222), 15,
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
  [13470] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(927), 1,
      anon_sym_not,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_description,
    STATE(181), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(135), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(67), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13512] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(228), 1,
      sym__conjunction,
    STATE(261), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13554] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(989), 1,
      anon_sym_not,
    STATE(257), 1,
      sym__conjunction,
    STATE(321), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(202), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13596] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(228), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13638] = 3,
    ACTIONS(1082), 1,
      anon_sym_and,
    STATE(371), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(461), 15,
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
  [13662] = 3,
    ACTIONS(1086), 1,
      anon_sym_Import_COLON,
    STATE(370), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    ACTIONS(1084), 14,
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
  [13686] = 3,
    ACTIONS(1082), 1,
      anon_sym_and,
    STATE(364), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(392), 15,
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
  [13710] = 8,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(1091), 1,
      anon_sym_DOT,
    STATE(924), 1,
      sym__literal_list,
    STATE(932), 1,
      sym__lexial_value,
    ACTIONS(343), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1089), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      aux_sym__digits,
      sym__digit,
    STATE(832), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [13744] = 3,
    ACTIONS(1093), 1,
      anon_sym_and,
    STATE(392), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 15,
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
  [13768] = 4,
    ACTIONS(86), 1,
      anon_sym_F,
    ACTIONS(1095), 2,
      sym__non_zero,
      sym__zero,
    STATE(374), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 12,
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
  [13794] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(927), 1,
      anon_sym_not,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym__conjunction,
    STATE(221), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(135), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(67), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13836] = 4,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1100), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(379), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1098), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13862] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(228), 1,
      sym__conjunction,
    STATE(306), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13904] = 1,
    ACTIONS(1021), 17,
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
  [13924] = 4,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1104), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(363), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1102), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
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
    ACTIONS(1093), 1,
      anon_sym_and,
    STATE(392), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(463), 15,
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
  [13974] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(228), 1,
      sym__conjunction,
    STATE(251), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14016] = 7,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1064), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1106), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(398), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(976), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(105), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [14048] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(989), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(257), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(202), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14090] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      anon_sym_not,
    STATE(121), 1,
      sym__conjunction,
    STATE(133), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(111), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(51), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14132] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_description,
    STATE(121), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(111), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(51), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14174] = 3,
    ACTIONS(1093), 1,
      anon_sym_and,
    STATE(380), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 15,
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
  [14198] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(956), 1,
      anon_sym_not,
    STATE(775), 1,
      sym__conjunction,
    STATE(907), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(718), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(497), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14240] = 7,
    ACTIONS(107), 1,
      anon_sym_f,
    ACTIONS(253), 1,
      anon_sym_F,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1048), 2,
      sym__non_zero,
      sym__zero,
    STATE(374), 2,
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
  [14272] = 3,
    ACTIONS(1093), 1,
      anon_sym_and,
    STATE(373), 1,
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
  [14296] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(1108), 1,
      anon_sym_not,
    STATE(306), 1,
      sym_description,
    STATE(409), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(369), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(156), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14338] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(1108), 1,
      anon_sym_not,
    STATE(409), 1,
      sym__conjunction,
    STATE(442), 1,
      sym_description,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(369), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(156), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14380] = 3,
    ACTIONS(1110), 1,
      anon_sym_and,
    STATE(392), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(188), 15,
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
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1113), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14427] = 3,
    ACTIONS(1115), 1,
      anon_sym_or,
    STATE(414), 1,
      aux_sym_description_repeat1,
    ACTIONS(534), 14,
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
  [14450] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(956), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(718), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(497), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14489] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(191), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14528] = 7,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(1091), 1,
      anon_sym_DOT,
    STATE(932), 1,
      sym__lexial_value,
    ACTIONS(343), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1089), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      aux_sym__digits,
      sym__digit,
    STATE(864), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [14559] = 4,
    ACTIONS(1117), 2,
      sym__non_zero,
      sym__zero,
    STATE(398), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 7,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
  [14584] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(408), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [14607] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(989), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(202), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14646] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(111), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(51), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14685] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [14708] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(1108), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(369), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(156), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14747] = 7,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(1091), 1,
      anon_sym_DOT,
    STATE(911), 1,
      sym__lexial_value,
    ACTIONS(343), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1089), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      aux_sym__digits,
      sym__digit,
    STATE(55), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [14778] = 7,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(1091), 1,
      anon_sym_DOT,
    STATE(932), 1,
      sym__lexial_value,
    ACTIONS(343), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1089), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      aux_sym__digits,
      sym__digit,
    STATE(862), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [14809] = 7,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(1091), 1,
      anon_sym_DOT,
    STATE(932), 1,
      sym__lexial_value,
    ACTIONS(343), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1089), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      aux_sym__digits,
      sym__digit,
    STATE(830), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [14840] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_datatype,
    STATE(56), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14875] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [14898] = 3,
    ACTIONS(1115), 1,
      anon_sym_or,
    STATE(394), 1,
      aux_sym_description_repeat1,
    ACTIONS(513), 14,
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
  [14921] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(402), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1126), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14944] = 7,
    ACTIONS(349), 1,
      sym__quoted_string,
    ACTIONS(1091), 1,
      anon_sym_DOT,
    STATE(911), 1,
      sym__lexial_value,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1128), 2,
      sym__non_zero,
      sym__zero,
    STATE(66), 2,
      aux_sym__digits,
      sym__digit,
    STATE(55), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [14975] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(362), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [14998] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(927), 1,
      anon_sym_not,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__conjunction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(135), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(67), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15037] = 3,
    ACTIONS(1132), 1,
      anon_sym_or,
    STATE(414), 1,
      aux_sym_description_repeat1,
    ACTIONS(226), 14,
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
  [15060] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(393), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1135), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15083] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(412), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [15106] = 3,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_object_property_2list_repeat1,
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
  [15128] = 8,
    ACTIONS(1145), 1,
      anon_sym_DOT,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(879), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1143), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1147), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15160] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(1108), 1,
      anon_sym_not,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(60), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(199), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15196] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    STATE(420), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(865), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15218] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(956), 1,
      anon_sym_not,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(60), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(528), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15254] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(927), 1,
      anon_sym_not,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(60), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(73), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15290] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    STATE(438), 1,
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
  [15312] = 8,
    ACTIONS(1158), 1,
      anon_sym_DOT,
    STATE(885), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(857), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1156), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1160), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(455), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15344] = 8,
    ACTIONS(1162), 1,
      anon_sym_DOT,
    STATE(879), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(879), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1156), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1164), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(455), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15376] = 8,
    ACTIONS(1168), 1,
      anon_sym_DOT,
    STATE(846), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(879), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1166), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1170), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(450), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15408] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(989), 1,
      anon_sym_not,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(60), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(90), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15444] = 3,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym_data_property_2list_repeat1,
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
  [15466] = 1,
    ACTIONS(1177), 15,
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
  [15484] = 1,
    ACTIONS(1179), 15,
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
  [15502] = 8,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    STATE(890), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(857), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1143), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1183), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15534] = 2,
    ACTIONS(137), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(139), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [15554] = 8,
    ACTIONS(1185), 1,
      anon_sym_DOT,
    STATE(845), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(857), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1166), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1187), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(450), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15586] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(420), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(877), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15608] = 3,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    STATE(423), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1191), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15630] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      anon_sym_not,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(60), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(81), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15666] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      anon_sym_not,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(60), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(63), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15702] = 3,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym_individual_2list_repeat1,
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
  [15724] = 3,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    STATE(439), 1,
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
  [15746] = 3,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym_data_property_2list_repeat1,
    ACTIONS(1201), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15768] = 3,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    STATE(417), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1205), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15790] = 3,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_description_2list_repeat1,
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
  [15812] = 3,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_data_property_2list_repeat1,
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
  [15834] = 10,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1211), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1213), 1,
      anon_sym_not,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(300), 1,
      sym_fact,
    STATE(353), 1,
      sym_fact_annotated_list,
    STATE(531), 1,
      sym__annotations,
    STATE(336), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(104), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15869] = 1,
    ACTIONS(1196), 14,
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
  [15886] = 8,
    ACTIONS(857), 1,
      sym__pn_local,
    ACTIONS(1221), 1,
      anon_sym_DOT,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1219), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1223), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(460), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15917] = 8,
    ACTIONS(879), 1,
      sym__pn_local,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    STATE(853), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1219), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1227), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(460), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15948] = 7,
    STATE(852), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(970), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1229), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1231), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(468), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15977] = 7,
    STATE(891), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(976), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1229), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1233), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(468), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16006] = 4,
    ACTIONS(1235), 2,
      sym__non_zero,
      sym__zero,
    STATE(450), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [16029] = 7,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(976), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1238), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1240), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(464), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16058] = 1,
    ACTIONS(1172), 14,
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
  [16075] = 7,
    STATE(867), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(970), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1238), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1242), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(464), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16104] = 7,
    STATE(882), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(970), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1244), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1246), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16133] = 4,
    ACTIONS(1248), 2,
      sym__non_zero,
      sym__zero,
    STATE(455), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 7,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [16156] = 7,
    STATE(884), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(976), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1244), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1251), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16185] = 4,
    ACTIONS(1253), 2,
      sym__non_zero,
      sym__zero,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 7,
      anon_sym__COLON,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [16208] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    STATE(90), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16240] = 1,
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
  [16256] = 4,
    ACTIONS(1258), 2,
      sym__non_zero,
      sym__zero,
    STATE(460), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 6,
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [16278] = 4,
    ACTIONS(41), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1263), 1,
      sym__language_tag,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1261), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [16300] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    STATE(81), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16332] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    ACTIONS(1265), 1,
      anon_sym_Annotations_COLON,
    STATE(274), 1,
      sym_individual,
    STATE(353), 1,
      sym_individual_annotated_list,
    STATE(566), 1,
      sym__annotations,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [16364] = 4,
    ACTIONS(1267), 2,
      sym__non_zero,
      sym__zero,
    STATE(464), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_not,
      sym__pn_local,
  [16386] = 7,
    ACTIONS(970), 1,
      sym__pn_local,
    STATE(863), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1270), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1272), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(496), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(101), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16414] = 9,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1211), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1213), 1,
      anon_sym_not,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(338), 1,
      sym_fact,
    STATE(499), 1,
      sym__annotations,
    STATE(336), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(104), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16446] = 4,
    ACTIONS(1274), 2,
      sym__non_zero,
      sym__zero,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 6,
      anon_sym__COLON,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [16468] = 4,
    ACTIONS(1277), 2,
      sym__non_zero,
      sym__zero,
    STATE(468), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 6,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [16490] = 7,
    ACTIONS(976), 1,
      sym__pn_local,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1270), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1280), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(496), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16518] = 1,
    ACTIONS(1282), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16534] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    STATE(63), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16566] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    STATE(528), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16598] = 9,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    ACTIONS(1265), 1,
      anon_sym_Annotations_COLON,
    STATE(470), 1,
      sym_individual_2list,
    STATE(507), 1,
      sym__annotations,
    STATE(915), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [16630] = 9,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1286), 1,
      anon_sym_inverse,
    STATE(506), 1,
      sym__annotations,
    STATE(916), 1,
      sym__object_property_expression,
    STATE(470), 2,
      sym_object_property_2list,
      sym_data_property_2list,
    STATE(917), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16662] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    STATE(73), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16694] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(61), 2,
      sym__restriction,
      sym__atomic,
    STATE(199), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16726] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 4,
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
  [16747] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    ACTIONS(1265), 1,
      anon_sym_Annotations_COLON,
    STATE(330), 1,
      sym_individual,
    STATE(567), 1,
      sym__annotations,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [16776] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(376), 1,
      sym_datatype,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16801] = 6,
    ACTIONS(486), 1,
      anon_sym_LT,
    ACTIONS(500), 1,
      sym__pn_local,
    ACTIONS(502), 1,
      sym__pname_ln,
    STATE(777), 1,
      sym_datatype,
    ACTIONS(1292), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(821), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16826] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(14), 1,
      sym_datatype,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16851] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(477), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 4,
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
  [16872] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 4,
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
  [16893] = 6,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(410), 1,
      sym__pn_local,
    ACTIONS(412), 1,
      sym__pname_ln,
    STATE(735), 1,
      sym_datatype,
    ACTIONS(1296), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(719), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16918] = 6,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
    STATE(14), 1,
      sym_datatype,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(10), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16943] = 4,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(130), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1298), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [16964] = 6,
    ACTIONS(443), 1,
      anon_sym_LT,
    ACTIONS(457), 1,
      sym__pn_local,
    ACTIONS(459), 1,
      sym__pname_ln,
    STATE(744), 1,
      sym_datatype,
    ACTIONS(1303), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(765), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16989] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(1305), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1307), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(217), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17014] = 6,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(482), 1,
      sym__pn_local,
    ACTIONS(484), 1,
      sym__pname_ln,
    STATE(628), 1,
      sym_datatype,
    ACTIONS(1309), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(645), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17039] = 7,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_inverse,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(558), 1,
      sym__annotations,
    STATE(80), 6,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
      aux_sym_has_key_list_repeat1,
  [17066] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(226), 1,
      sym__object_property_expression_annotated_list,
    STATE(602), 1,
      sym__annotations,
    STATE(164), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [17095] = 7,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(1311), 1,
      anon_sym_that,
    ACTIONS(1305), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(217), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
    ACTIONS(1307), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [17122] = 4,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(483), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(360), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1313), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17143] = 6,
    ACTIONS(419), 1,
      anon_sym_LT,
    ACTIONS(433), 1,
      sym__pn_local,
    ACTIONS(435), 1,
      sym__pname_ln,
    STATE(519), 1,
      sym_datatype,
    ACTIONS(1315), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(541), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17168] = 6,
    ACTIONS(374), 1,
      anon_sym_LT,
    ACTIONS(388), 1,
      sym__pn_local,
    ACTIONS(390), 1,
      sym__pname_ln,
    STATE(704), 1,
      sym_datatype,
    ACTIONS(1317), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(730), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17193] = 4,
    ACTIONS(1319), 2,
      sym__non_zero,
      sym__zero,
    STATE(496), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(86), 5,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [17214] = 6,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(1311), 1,
      anon_sym_that,
    ACTIONS(1305), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1307), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17239] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1322), 1,
      anon_sym_not,
    STATE(47), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(674), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17267] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1213), 1,
      anon_sym_not,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(331), 1,
      sym_fact,
    STATE(336), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(104), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17293] = 7,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(839), 1,
      sym_individual,
    STATE(908), 1,
      sym__individual_list,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [17319] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1324), 1,
      anon_sym_not,
    STATE(47), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(658), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17347] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    STATE(613), 1,
      sym__annotations,
    STATE(185), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [17373] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(641), 1,
      sym__annotations,
    STATE(685), 1,
      sym_annotation,
    STATE(784), 1,
      sym__annotation_annotated_list,
    STATE(102), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17401] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_not,
    STATE(47), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(665), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17429] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1330), 1,
      anon_sym_not,
    STATE(47), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17457] = 7,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
    ACTIONS(1286), 1,
      anon_sym_inverse,
    STATE(916), 1,
      sym__object_property_expression,
    STATE(459), 2,
      sym_object_property_2list,
      sym_data_property_2list,
    STATE(917), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17483] = 7,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(459), 1,
      sym_individual_2list,
    STATE(915), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [17509] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(642), 1,
      sym__annotations,
    STATE(734), 1,
      sym_annotation,
    STATE(835), 1,
      sym__annotation_annotated_list,
    STATE(117), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17537] = 5,
    ACTIONS(1332), 1,
      anon_sym_Annotations_COLON,
    STATE(132), 1,
      sym_object_property_characteristic,
    STATE(226), 1,
      sym_object_property_characteristic_annotated_list,
    STATE(644), 1,
      sym__annotations,
    ACTIONS(1334), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [17559] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1336), 1,
      anon_sym_not,
    STATE(223), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(664), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17587] = 7,
    ACTIONS(1284), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1338), 1,
      anon_sym_LT,
    ACTIONS(1340), 1,
      anon_sym_inverse,
    ACTIONS(1342), 1,
      sym__pn_local,
    ACTIONS(1344), 1,
      sym__pname_ln,
    STATE(601), 1,
      sym__annotations,
    STATE(157), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [17613] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1346), 1,
      anon_sym_not,
    STATE(162), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(674), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17641] = 2,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1348), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17657] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(596), 1,
      sym_annotation,
    STATE(650), 1,
      sym__annotations,
    STATE(655), 1,
      sym__annotation_annotated_list,
    STATE(116), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17685] = 2,
    ACTIONS(47), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1350), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17701] = 2,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1352), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17717] = 2,
    ACTIONS(124), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1354), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17733] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1356), 1,
      anon_sym_not,
    STATE(47), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(664), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17761] = 2,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1358), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17777] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(39), 1,
      sym__annotation_annotated_list,
    STATE(277), 1,
      sym_annotation,
    STATE(620), 1,
      sym__annotations,
    STATE(101), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17805] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(638), 1,
      sym__annotations,
    STATE(681), 1,
      sym_annotation,
    STATE(772), 1,
      sym__annotation_annotated_list,
    STATE(105), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17833] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1360), 1,
      anon_sym_not,
    STATE(197), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(668), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17861] = 2,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1362), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17877] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1364), 1,
      anon_sym_not,
    STATE(47), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(668), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17905] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(636), 1,
      sym__annotations,
    STATE(694), 1,
      sym_annotation,
    STATE(768), 1,
      sym__annotation_annotated_list,
    STATE(110), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17933] = 2,
    ACTIONS(130), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1298), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17949] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1366), 1,
      anon_sym_not,
    STATE(100), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17977] = 5,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(1305), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1307), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(196), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17999] = 2,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1368), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18015] = 2,
    ACTIONS(11), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(654), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18031] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1213), 1,
      anon_sym_not,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(289), 1,
      sym_fact,
    STATE(336), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(104), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18057] = 2,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1370), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18073] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1372), 1,
      anon_sym_not,
    STATE(389), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(665), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18101] = 2,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1374), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18117] = 2,
    ACTIONS(9), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(656), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18133] = 2,
    ACTIONS(7), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(665), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18149] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(39), 1,
      sym__annotation_annotated_list,
    STATE(610), 1,
      sym_annotation,
    STATE(632), 1,
      sym__annotations,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18177] = 2,
    ACTIONS(128), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1376), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18193] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1378), 1,
      anon_sym_not,
    STATE(706), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(658), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18221] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(493), 1,
      sym_annotation,
    STATE(550), 1,
      sym__annotation_annotated_list,
    STATE(622), 1,
      sym__annotations,
    STATE(108), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18249] = 2,
    ACTIONS(45), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1380), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18265] = 8,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(39), 1,
      sym__annotation_annotated_list,
    STATE(96), 1,
      sym_annotation,
    STATE(646), 1,
      sym__annotations,
    STATE(114), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18293] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(627), 1,
      sym_annotation,
    STATE(643), 1,
      sym__annotations,
    STATE(116), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18318] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(52), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18343] = 3,
    STATE(397), 1,
      sym_facet,
    ACTIONS(1382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1384), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [18360] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(526), 1,
      sym_annotation,
    STATE(626), 1,
      sym__annotations,
    STATE(108), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18385] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(430), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18408] = 4,
    ACTIONS(41), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1386), 1,
      sym__language_tag,
    ACTIONS(1261), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [18427] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(314), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18450] = 2,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1388), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18465] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(631), 1,
      sym__annotations,
    STATE(728), 1,
      sym_annotation,
    STATE(105), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18490] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(55), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18513] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(637), 1,
      sym__annotations,
    STATE(756), 1,
      sym_annotation,
    STATE(110), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18538] = 2,
    ACTIONS(7), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(665), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [18553] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(52), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(664), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18578] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(244), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(664), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18603] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(52), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(658), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18628] = 5,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_inverse,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    STATE(85), 6,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
      aux_sym_has_key_list_repeat1,
  [18649] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(52), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(674), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18674] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(34), 1,
      sym_annotation,
    STATE(619), 1,
      sym__annotations,
    STATE(101), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18699] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(107), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(659), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18724] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(435), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18747] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(640), 1,
      sym__annotations,
    STATE(707), 1,
      sym_annotation,
    STATE(102), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18772] = 4,
    ACTIONS(1332), 1,
      anon_sym_Annotations_COLON,
    STATE(190), 1,
      sym_object_property_characteristic,
    STATE(639), 1,
      sym__annotations,
    ACTIONS(1334), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [18791] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(52), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(665), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18816] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(270), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18839] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(337), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18862] = 2,
    ACTIONS(9), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(656), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [18877] = 2,
    ACTIONS(11), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(654), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [18892] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(378), 1,
      sym_annotation_property_iri_annotated_list,
    STATE(673), 1,
      sym__annotations,
    STATE(324), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18917] = 6,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
    ACTIONS(339), 1,
      anon_sym__COLON,
    STATE(430), 1,
      sym_individual,
    STATE(45), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18940] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(378), 1,
      sym__iri_annotated_list,
    STATE(656), 1,
      sym__annotations,
    STATE(224), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18965] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(710), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(658), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18990] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(198), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(668), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19015] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(317), 1,
      sym__iri_annotated_list,
    STATE(656), 1,
      sym__annotations,
    STATE(224), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19040] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(34), 1,
      sym_annotation,
    STATE(634), 1,
      sym__annotations,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19065] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(304), 1,
      sym__iri_annotated_list,
    STATE(656), 1,
      sym__annotations,
    STATE(224), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19090] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(303), 1,
      sym__iri_annotated_list,
    STATE(656), 1,
      sym__annotations,
    STATE(224), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19115] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(52), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(668), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19140] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(131), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(674), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19165] = 3,
    STATE(406), 1,
      sym_facet,
    ACTIONS(1382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1384), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [19182] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(618), 1,
      sym__annotations,
    STATE(789), 1,
      sym_annotation,
    STATE(117), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19207] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(386), 1,
      sym__restriction,
    STATE(921), 1,
      sym__object_property_expression,
    STATE(665), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19232] = 7,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(34), 1,
      sym_annotation,
    STATE(651), 1,
      sym__annotations,
    STATE(114), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19257] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(344), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(104), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19277] = 5,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(107), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19297] = 5,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1390), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19317] = 5,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1392), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19337] = 4,
    ACTIONS(1394), 1,
      anon_sym_COMMA,
    STATE(589), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1298), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(130), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19355] = 5,
    STATE(856), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1397), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19375] = 5,
    ACTIONS(1338), 1,
      anon_sym_LT,
    ACTIONS(1340), 1,
      anon_sym_inverse,
    ACTIONS(1342), 1,
      sym__pn_local,
    ACTIONS(1344), 1,
      sym__pname_ln,
    STATE(168), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19395] = 5,
    STATE(859), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1399), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19415] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1326), 1,
      anon_sym_Annotations_COLON,
    STATE(670), 1,
      sym__annotations,
    STATE(262), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19437] = 5,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(441), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19457] = 4,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(589), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1288), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19475] = 4,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(605), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1313), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(360), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19493] = 5,
    STATE(858), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1403), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19513] = 5,
    STATE(845), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1405), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19533] = 5,
    STATE(891), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1407), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19553] = 3,
    ACTIONS(1409), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19569] = 5,
    ACTIONS(1338), 1,
      anon_sym_LT,
    ACTIONS(1340), 1,
      anon_sym_inverse,
    ACTIONS(1342), 1,
      sym__pn_local,
    ACTIONS(1344), 1,
      sym__pname_ln,
    STATE(151), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19589] = 5,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(155), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19609] = 5,
    STATE(865), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(67), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19629] = 5,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(445), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19649] = 4,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(589), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1294), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(362), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19667] = 3,
    ACTIONS(1409), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19683] = 5,
    STATE(890), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1411), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19703] = 3,
    ACTIONS(1409), 1,
      anon_sym_COMMA,
    STATE(606), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19719] = 5,
    STATE(884), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1413), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19739] = 3,
    ACTIONS(1409), 1,
      anon_sym_COMMA,
    STATE(600), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(360), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19755] = 4,
    ACTIONS(1401), 1,
      anon_sym_COMMA,
    STATE(595), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1294), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(362), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19773] = 5,
    STATE(885), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1415), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19793] = 5,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(194), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19813] = 5,
    STATE(887), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1417), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19833] = 5,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1419), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19853] = 3,
    ACTIONS(1421), 1,
      anon_sym_COMMA,
    STATE(616), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(130), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19869] = 2,
    ACTIONS(1362), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19882] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(776), 1,
      sym_annotation,
    STATE(117), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19901] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(31), 1,
      sym_annotation,
    STATE(101), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19920] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(281), 1,
      sym_annotation,
    STATE(101), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19939] = 2,
    ACTIONS(1376), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(128), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19952] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(482), 1,
      sym_annotation,
    STATE(108), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19971] = 2,
    ACTIONS(1374), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19984] = 2,
    ACTIONS(1370), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19997] = 2,
    ACTIONS(1368), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20010] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(517), 1,
      sym_annotation,
    STATE(108), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20029] = 2,
    ACTIONS(1298), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(130), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20042] = 2,
    ACTIONS(1358), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20055] = 2,
    ACTIONS(1354), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(124), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20068] = 2,
    ACTIONS(1352), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20081] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(737), 1,
      sym_annotation,
    STATE(105), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20100] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(608), 1,
      sym_annotation,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20119] = 2,
    ACTIONS(1350), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20132] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(31), 1,
      sym_annotation,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20151] = 2,
    ACTIONS(1348), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20164] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(687), 1,
      sym_annotation,
    STATE(110), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20183] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(743), 1,
      sym_annotation,
    STATE(110), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20202] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(679), 1,
      sym_annotation,
    STATE(105), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20221] = 2,
    STATE(193), 1,
      sym_object_property_characteristic,
    ACTIONS(1334), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20234] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(703), 1,
      sym_annotation,
    STATE(102), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20253] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(680), 1,
      sym_annotation,
    STATE(102), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20272] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(738), 1,
      sym_annotation,
    STATE(117), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20291] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(629), 1,
      sym_annotation,
    STATE(116), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20310] = 2,
    STATE(153), 1,
      sym_object_property_characteristic,
    ACTIONS(1334), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20323] = 2,
    ACTIONS(1380), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(45), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20336] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(98), 1,
      sym_annotation,
    STATE(114), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20355] = 2,
    ACTIONS(665), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(7), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20368] = 2,
    ACTIONS(656), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(9), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20381] = 2,
    ACTIONS(654), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(11), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20394] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(611), 1,
      sym_annotation,
    STATE(116), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20413] = 5,
    ACTIONS(1209), 1,
      anon_sym_LT,
    ACTIONS(1215), 1,
      sym__pn_local,
    ACTIONS(1217), 1,
      sym__pname_ln,
    STATE(31), 1,
      sym_annotation,
    STATE(114), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20432] = 4,
    ACTIONS(1338), 1,
      anon_sym_LT,
    ACTIONS(1342), 1,
      sym__pn_local,
    ACTIONS(1344), 1,
      sym__pname_ln,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20448] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(325), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20464] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(243), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20480] = 2,
    ACTIONS(1388), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20492] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(203), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20508] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(144), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20524] = 4,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(1305), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1307), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20540] = 4,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(200), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(204), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20556] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(245), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20572] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(443), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20588] = 4,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    STATE(175), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20604] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20620] = 4,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(302), 1,
      anon_sym_value,
    ACTIONS(298), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(300), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20636] = 4,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(592), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(594), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20652] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(429), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20668] = 4,
    ACTIONS(152), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      sym__pn_local,
    ACTIONS(178), 1,
      sym__pname_ln,
    STATE(127), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20684] = 4,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(255), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(257), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20700] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(452), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20716] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(266), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20732] = 4,
    ACTIONS(41), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1424), 1,
      sym__language_tag,
    ACTIONS(1261), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [20748] = 4,
    ACTIONS(41), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1426), 1,
      sym__language_tag,
    ACTIONS(1261), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [20764] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(346), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20780] = 4,
    ACTIONS(202), 1,
      anon_sym_Self,
    ACTIONS(206), 1,
      anon_sym_value,
    ACTIONS(238), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(240), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20796] = 4,
    ACTIONS(41), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1428), 1,
      sym__language_tag,
    ACTIONS(1261), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [20812] = 4,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(684), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1288), 2,
      anon_sym__COLON,
      sym__pn_local,
  [20827] = 4,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(684), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym__COLON,
      sym__pn_local,
  [20842] = 1,
    ACTIONS(1432), 6,
      sym__non_zero,
      sym__zero,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__quoted_string,
  [20851] = 4,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(676), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym__COLON,
      sym__pn_local,
  [20866] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym_inverse,
      sym__pn_local,
  [20881] = 4,
    ACTIONS(1430), 1,
      anon_sym_COMMA,
    STATE(677), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1313), 2,
      anon_sym__COLON,
      sym__pn_local,
  [20896] = 3,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1436), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [20909] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(689), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym_inverse,
      sym__pn_local,
  [20924] = 4,
    ACTIONS(1438), 1,
      anon_sym_COMMA,
    STATE(684), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(130), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1298), 2,
      anon_sym__COLON,
      sym__pn_local,
  [20939] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(683), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1313), 2,
      anon_sym_inverse,
      sym__pn_local,
  [20954] = 4,
    ACTIONS(41), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1261), 1,
      sym__pn_local,
    ACTIONS(1441), 1,
      sym__language_tag,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [20969] = 4,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    STATE(692), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym_not,
      sym__pn_local,
  [20984] = 4,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(130), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1298), 2,
      anon_sym_not,
      sym__pn_local,
  [20999] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    STATE(689), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(130), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1298), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21014] = 3,
    ACTIONS(1451), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1453), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(695), 2,
      aux_sym__digits,
      sym__digit,
  [21027] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(689), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1288), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21042] = 4,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1288), 2,
      anon_sym_not,
      sym__pn_local,
  [21057] = 4,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1294), 2,
      anon_sym_not,
      sym__pn_local,
  [21072] = 4,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    STATE(693), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1313), 2,
      anon_sym_not,
      sym__pn_local,
  [21087] = 3,
    ACTIONS(63), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1455), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [21100] = 3,
    ACTIONS(1457), 1,
      anon_sym_and,
    STATE(696), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(222), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21112] = 3,
    ACTIONS(1460), 1,
      anon_sym_and,
    STATE(697), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(188), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21124] = 3,
    ACTIONS(1465), 1,
      anon_sym_DOT,
    ACTIONS(1463), 2,
      sym__non_zero,
      sym__zero,
    STATE(354), 2,
      aux_sym__digits,
      sym__digit,
  [21136] = 4,
    ACTIONS(1294), 1,
      sym__pn_local,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    STATE(757), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21150] = 2,
    ACTIONS(1348), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21160] = 2,
    ACTIONS(1350), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21170] = 2,
    ACTIONS(1352), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21180] = 2,
    ACTIONS(1354), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21190] = 2,
    ACTIONS(1358), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21200] = 2,
    ACTIONS(1362), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21210] = 3,
    ACTIONS(1469), 1,
      anon_sym_and,
    STATE(713), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(364), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21222] = 2,
    ACTIONS(1298), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(130), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21232] = 2,
    ACTIONS(1368), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21242] = 3,
    ACTIONS(1473), 1,
      anon_sym_DOT,
    ACTIONS(1471), 2,
      sym__non_zero,
      sym__zero,
    STATE(254), 2,
      aux_sym__digits,
      sym__digit,
  [21254] = 3,
    ACTIONS(1469), 1,
      anon_sym_and,
    STATE(729), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21266] = 3,
    ACTIONS(1477), 1,
      anon_sym_DOT,
    ACTIONS(1475), 2,
      sym__non_zero,
      sym__zero,
    STATE(424), 2,
      aux_sym__digits,
      sym__digit,
  [21278] = 2,
    ACTIONS(1370), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21288] = 3,
    ACTIONS(1469), 1,
      anon_sym_and,
    STATE(697), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(417), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21300] = 2,
    ACTIONS(1374), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21310] = 2,
    ACTIONS(665), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(7), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21320] = 3,
    ACTIONS(1465), 1,
      anon_sym_DOT,
    ACTIONS(1479), 2,
      sym__non_zero,
      sym__zero,
    STATE(18), 2,
      aux_sym__digits,
      sym__digit,
  [21332] = 3,
    ACTIONS(1483), 1,
      anon_sym_SLASH,
    STATE(733), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1481), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [21344] = 3,
    ACTIONS(1485), 1,
      anon_sym_and,
    STATE(731), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(461), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21356] = 2,
    ACTIONS(1380), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21366] = 3,
    ACTIONS(1489), 1,
      anon_sym_DOT,
    ACTIONS(1487), 2,
      sym__non_zero,
      sym__zero,
    STATE(431), 2,
      aux_sym__digits,
      sym__digit,
  [21378] = 2,
    ACTIONS(1376), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(128), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21388] = 2,
    ACTIONS(1374), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21398] = 2,
    ACTIONS(1370), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21408] = 2,
    ACTIONS(1376), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(128), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21418] = 2,
    ACTIONS(1368), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21428] = 4,
    ACTIONS(3), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(5), 1,
      anon_sym_Ontology_COLON,
    STATE(929), 1,
      sym_ontology,
    STATE(770), 2,
      sym_prefix_declaration,
      aux_sym_source_file_repeat1,
  [21442] = 3,
    ACTIONS(1493), 1,
      anon_sym_DOT,
    ACTIONS(1491), 2,
      sym__non_zero,
      sym__zero,
    STATE(433), 2,
      aux_sym__digits,
      sym__digit,
  [21454] = 2,
    ACTIONS(1298), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(130), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21464] = 3,
    ACTIONS(1469), 1,
      anon_sym_and,
    STATE(697), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(463), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21476] = 2,
    ACTIONS(1380), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21486] = 3,
    ACTIONS(1485), 1,
      anon_sym_and,
    STATE(696), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(392), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21498] = 2,
    ACTIONS(1362), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21508] = 3,
    ACTIONS(1497), 1,
      anon_sym_SLASH,
    STATE(733), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1495), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [21520] = 4,
    ACTIONS(1313), 1,
      sym__pn_local,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    STATE(699), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21534] = 2,
    ACTIONS(1358), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21544] = 3,
    ACTIONS(1502), 1,
      anon_sym_DOT,
    ACTIONS(1500), 2,
      sym__non_zero,
      sym__zero,
    STATE(446), 2,
      aux_sym__digits,
      sym__digit,
  [21556] = 2,
    ACTIONS(1354), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21566] = 4,
    ACTIONS(1294), 1,
      sym__pn_local,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    STATE(750), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21580] = 2,
    ACTIONS(1376), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(128), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21590] = 2,
    ACTIONS(1374), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21600] = 2,
    ACTIONS(1370), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21610] = 2,
    ACTIONS(1368), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21620] = 2,
    ACTIONS(1354), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21630] = 2,
    ACTIONS(1358), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21640] = 2,
    ACTIONS(665), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(7), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21650] = 2,
    ACTIONS(656), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(9), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21660] = 2,
    ACTIONS(1352), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21670] = 2,
    ACTIONS(654), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(11), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21680] = 2,
    ACTIONS(1362), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21690] = 4,
    ACTIONS(1288), 1,
      sym__pn_local,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    STATE(757), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21704] = 2,
    ACTIONS(665), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(7), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21714] = 2,
    ACTIONS(656), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(9), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21724] = 2,
    ACTIONS(654), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(11), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21734] = 2,
    ACTIONS(1348), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21744] = 2,
    ACTIONS(1350), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21754] = 2,
    ACTIONS(1298), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(130), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21764] = 4,
    ACTIONS(1298), 1,
      sym__pn_local,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    STATE(757), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(130), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21778] = 2,
    ACTIONS(1352), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21788] = 2,
    ACTIONS(1350), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21798] = 2,
    ACTIONS(1348), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21808] = 3,
    ACTIONS(1465), 1,
      anon_sym_DOT,
    ACTIONS(1507), 2,
      sym__non_zero,
      sym__zero,
    STATE(68), 2,
      aux_sym__digits,
      sym__digit,
  [21820] = 3,
    ACTIONS(1511), 1,
      anon_sym_DOT,
    ACTIONS(1509), 2,
      sym__non_zero,
      sym__zero,
    STATE(355), 2,
      aux_sym__digits,
      sym__digit,
  [21832] = 2,
    ACTIONS(654), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(11), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21842] = 2,
    ACTIONS(656), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(9), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21852] = 2,
    ACTIONS(1380), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21862] = 2,
    ACTIONS(1362), 1,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21871] = 4,
    ACTIONS(1513), 1,
      sym__non_zero,
    ACTIONS(1515), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(37), 1,
      sym__positive_integer,
  [21884] = 2,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1388), 2,
      anon_sym_not,
      sym__pn_local,
  [21893] = 4,
    ACTIONS(1517), 1,
      sym__non_zero,
    ACTIONS(1519), 1,
      sym__zero,
    STATE(7), 1,
      sym_non_negative_integer,
    STATE(58), 1,
      sym__positive_integer,
  [21906] = 3,
    ACTIONS(1521), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(1524), 1,
      anon_sym_Ontology_COLON,
    STATE(770), 2,
      sym_prefix_declaration,
      aux_sym_source_file_repeat1,
  [21917] = 2,
    ACTIONS(1348), 1,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21926] = 2,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1388), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21935] = 2,
    ACTIONS(1350), 1,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21944] = 2,
    ACTIONS(1352), 1,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21953] = 3,
    ACTIONS(1526), 1,
      anon_sym_or,
    STATE(791), 1,
      aux_sym_description_repeat1,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21964] = 2,
    ACTIONS(1354), 1,
      sym__pn_local,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21973] = 2,
    ACTIONS(1358), 1,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21982] = 2,
    ACTIONS(1528), 2,
      sym__non_zero,
      sym__zero,
    STATE(382), 2,
      aux_sym__digits,
      sym__digit,
  [21991] = 2,
    ACTIONS(1530), 2,
      sym__non_zero,
      sym__zero,
    STATE(603), 2,
      aux_sym__digits,
      sym__digit,
  [22000] = 2,
    ACTIONS(1532), 2,
      sym__non_zero,
      sym__zero,
    STATE(310), 2,
      aux_sym__digits,
      sym__digit,
  [22009] = 2,
    ACTIONS(1534), 2,
      sym__non_zero,
      sym__zero,
    STATE(309), 2,
      aux_sym__digits,
      sym__digit,
  [22018] = 2,
    ACTIONS(1536), 2,
      sym__non_zero,
      sym__zero,
    STATE(465), 2,
      aux_sym__digits,
      sym__digit,
  [22027] = 2,
    ACTIONS(1538), 2,
      sym__non_zero,
      sym__zero,
    STATE(587), 2,
      aux_sym__digits,
      sym__digit,
  [22036] = 2,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1388), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22045] = 2,
    ACTIONS(1540), 2,
      sym__non_zero,
      sym__zero,
    STATE(72), 2,
      aux_sym__digits,
      sym__digit,
  [22054] = 2,
    ACTIONS(1542), 2,
      sym__non_zero,
      sym__zero,
    STATE(614), 2,
      aux_sym__digits,
      sym__digit,
  [22063] = 2,
    ACTIONS(1544), 2,
      sym__non_zero,
      sym__zero,
    STATE(612), 2,
      aux_sym__digits,
      sym__digit,
  [22072] = 2,
    ACTIONS(1546), 2,
      sym__non_zero,
      sym__zero,
    STATE(74), 2,
      aux_sym__digits,
      sym__digit,
  [22081] = 2,
    ACTIONS(1298), 1,
      sym__pn_local,
    ACTIONS(130), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22090] = 4,
    ACTIONS(1548), 1,
      sym__non_zero,
    ACTIONS(1550), 1,
      sym__zero,
    STATE(95), 1,
      sym_non_negative_integer,
    STATE(432), 1,
      sym__positive_integer,
  [22103] = 3,
    ACTIONS(1526), 1,
      anon_sym_or,
    STATE(811), 1,
      aux_sym_description_repeat1,
    ACTIONS(534), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22114] = 2,
    ACTIONS(1552), 2,
      sym__non_zero,
      sym__zero,
    STATE(592), 2,
      aux_sym__digits,
      sym__digit,
  [22123] = 2,
    ACTIONS(1554), 2,
      sym__non_zero,
      sym__zero,
    STATE(590), 2,
      aux_sym__digits,
      sym__digit,
  [22132] = 2,
    ACTIONS(1556), 2,
      sym__non_zero,
      sym__zero,
    STATE(359), 2,
      aux_sym__digits,
      sym__digit,
  [22141] = 4,
    ACTIONS(1558), 1,
      sym__non_zero,
    ACTIONS(1560), 1,
      sym__zero,
    STATE(6), 1,
      sym_non_negative_integer,
    STATE(44), 1,
      sym__positive_integer,
  [22154] = 2,
    ACTIONS(1562), 2,
      sym__non_zero,
      sym__zero,
    STATE(388), 2,
      aux_sym__digits,
      sym__digit,
  [22163] = 2,
    ACTIONS(1564), 2,
      sym__non_zero,
      sym__zero,
    STATE(360), 2,
      aux_sym__digits,
      sym__digit,
  [22172] = 2,
    ACTIONS(1566), 2,
      sym__non_zero,
      sym__zero,
    STATE(586), 2,
      aux_sym__digits,
      sym__digit,
  [22181] = 2,
    ACTIONS(1368), 1,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22190] = 2,
    ACTIONS(1568), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      aux_sym__digits,
      sym__digit,
  [22199] = 2,
    ACTIONS(1570), 2,
      sym__non_zero,
      sym__zero,
    STATE(609), 2,
      aux_sym__digits,
      sym__digit,
  [22208] = 2,
    ACTIONS(1572), 2,
      sym__non_zero,
      sym__zero,
    STATE(469), 2,
      aux_sym__digits,
      sym__digit,
  [22217] = 2,
    ACTIONS(665), 1,
      sym__pn_local,
    ACTIONS(7), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22226] = 2,
    ACTIONS(1574), 2,
      sym__non_zero,
      sym__zero,
    STATE(451), 2,
      aux_sym__digits,
      sym__digit,
  [22235] = 2,
    ACTIONS(1576), 2,
      sym__non_zero,
      sym__zero,
    STATE(453), 2,
      aux_sym__digits,
      sym__digit,
  [22244] = 2,
    ACTIONS(1578), 2,
      sym__non_zero,
      sym__zero,
    STATE(607), 2,
      aux_sym__digits,
      sym__digit,
  [22253] = 2,
    ACTIONS(1370), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22262] = 4,
    ACTIONS(1580), 1,
      sym__non_zero,
    ACTIONS(1582), 1,
      sym__zero,
    STATE(9), 1,
      sym_non_negative_integer,
    STATE(62), 1,
      sym__positive_integer,
  [22275] = 2,
    ACTIONS(1374), 1,
      sym__pn_local,
    ACTIONS(73), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22284] = 1,
    ACTIONS(1495), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [22291] = 3,
    ACTIONS(1584), 1,
      anon_sym_or,
    STATE(811), 1,
      aux_sym_description_repeat1,
    ACTIONS(226), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22302] = 2,
    ACTIONS(1587), 2,
      sym__non_zero,
      sym__zero,
    STATE(449), 2,
      aux_sym__digits,
      sym__digit,
  [22311] = 2,
    ACTIONS(1589), 2,
      sym__non_zero,
      sym__zero,
    STATE(456), 2,
      aux_sym__digits,
      sym__digit,
  [22320] = 2,
    ACTIONS(1591), 2,
      sym__non_zero,
      sym__zero,
    STATE(599), 2,
      aux_sym__digits,
      sym__digit,
  [22329] = 2,
    ACTIONS(1593), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
  [22338] = 2,
    ACTIONS(1376), 1,
      sym__pn_local,
    ACTIONS(128), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22347] = 2,
    ACTIONS(654), 1,
      sym__pn_local,
    ACTIONS(11), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22356] = 2,
    ACTIONS(1595), 2,
      sym__non_zero,
      sym__zero,
    STATE(682), 2,
      aux_sym__digits,
      sym__digit,
  [22365] = 2,
    ACTIONS(656), 1,
      sym__pn_local,
    ACTIONS(9), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22374] = 2,
    ACTIONS(1597), 2,
      sym__non_zero,
      sym__zero,
    STATE(615), 2,
      aux_sym__digits,
      sym__digit,
  [22383] = 2,
    ACTIONS(1380), 1,
      sym__pn_local,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22392] = 4,
    ACTIONS(1599), 1,
      sym__non_zero,
    ACTIONS(1601), 1,
      sym__zero,
    STATE(27), 1,
      sym_non_negative_integer,
    STATE(94), 1,
      sym__positive_integer,
  [22405] = 2,
    ACTIONS(1603), 2,
      sym__non_zero,
      sym__zero,
    STATE(454), 2,
      aux_sym__digits,
      sym__digit,
  [22414] = 2,
    ACTIONS(1605), 2,
      sym__non_zero,
      sym__zero,
    STATE(598), 2,
      aux_sym__digits,
      sym__digit,
  [22423] = 2,
    ACTIONS(1607), 2,
      sym__non_zero,
      sym__zero,
    STATE(588), 2,
      aux_sym__digits,
      sym__digit,
  [22432] = 2,
    ACTIONS(1609), 2,
      sym__non_zero,
      sym__zero,
    STATE(448), 2,
      aux_sym__digits,
      sym__digit,
  [22441] = 4,
    ACTIONS(1611), 1,
      sym__iunreserved,
    STATE(869), 1,
      sym__ihost,
    STATE(872), 1,
      sym__iauthority,
    STATE(913), 1,
      sym__iuserinfo,
  [22454] = 2,
    ACTIONS(1613), 2,
      sym__non_zero,
      sym__zero,
    STATE(597), 2,
      aux_sym__digits,
      sym__digit,
  [22463] = 3,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    ACTIONS(1615), 1,
      anon_sym_COMMA,
    STATE(829), 1,
      aux_sym_individual_2list_repeat1,
  [22473] = 3,
    ACTIONS(1618), 1,
      anon_sym_COMMA,
    ACTIONS(1620), 1,
      anon_sym_RBRACK,
    STATE(833), 1,
      aux_sym__datatype_restriction_repeat1,
  [22483] = 3,
    ACTIONS(1622), 1,
      anon_sym_RBRACE,
    ACTIONS(1624), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym__literal_list_repeat1,
  [22493] = 3,
    ACTIONS(1627), 1,
      anon_sym_RBRACE,
    ACTIONS(1629), 1,
      anon_sym_COMMA,
    STATE(841), 1,
      aux_sym__literal_list_repeat1,
  [22503] = 3,
    ACTIONS(1618), 1,
      anon_sym_COMMA,
    ACTIONS(1631), 1,
      anon_sym_RBRACK,
    STATE(834), 1,
      aux_sym__datatype_restriction_repeat1,
  [22513] = 3,
    ACTIONS(1633), 1,
      anon_sym_COMMA,
    ACTIONS(1636), 1,
      anon_sym_RBRACK,
    STATE(834), 1,
      aux_sym__datatype_restriction_repeat1,
  [22523] = 2,
    ACTIONS(1388), 1,
      sym__pn_local,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22531] = 2,
    ACTIONS(1640), 1,
      anon_sym_AT,
    ACTIONS(1638), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [22539] = 3,
    ACTIONS(1642), 1,
      anon_sym_RBRACE,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    STATE(829), 1,
      aux_sym_individual_2list_repeat1,
  [22549] = 3,
    ACTIONS(1646), 1,
      anon_sym_GT,
    ACTIONS(1648), 1,
      sym__iquery,
    ACTIONS(1650), 1,
      sym__ifragment,
  [22559] = 3,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    ACTIONS(1652), 1,
      anon_sym_RBRACE,
    STATE(837), 1,
      aux_sym_individual_2list_repeat1,
  [22569] = 3,
    ACTIONS(1332), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1654), 1,
      anon_sym_Functional,
    STATE(900), 1,
      sym__annotations,
  [22579] = 3,
    ACTIONS(1629), 1,
      anon_sym_COMMA,
    ACTIONS(1656), 1,
      anon_sym_RBRACE,
    STATE(831), 1,
      aux_sym__literal_list_repeat1,
  [22589] = 2,
    ACTIONS(1658), 1,
      sym__iunreserved,
    STATE(810), 1,
      sym__isegment,
  [22596] = 1,
    ACTIONS(1660), 2,
      anon_sym_f,
      anon_sym_F,
  [22601] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(893), 1,
      sym__iri_rfc3987,
  [22608] = 1,
    ACTIONS(1407), 2,
      anon_sym_f,
      anon_sym_F,
  [22613] = 1,
    ACTIONS(1405), 2,
      anon_sym_f,
      anon_sym_F,
  [22618] = 1,
    ACTIONS(103), 2,
      anon_sym_f,
      anon_sym_F,
  [22623] = 2,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(857), 1,
      sym_full_iri,
  [22630] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(925), 1,
      sym__iri_rfc3987,
  [22637] = 2,
    ACTIONS(1664), 1,
      sym__iunreserved,
    STATE(854), 1,
      sym__ihost,
  [22644] = 1,
    ACTIONS(1397), 2,
      anon_sym_f,
      anon_sym_F,
  [22649] = 1,
    ACTIONS(1666), 2,
      anon_sym_f,
      anon_sym_F,
  [22654] = 1,
    ACTIONS(1419), 2,
      anon_sym_f,
      anon_sym_F,
  [22659] = 2,
    ACTIONS(1668), 1,
      anon_sym_COLON,
    ACTIONS(1670), 1,
      anon_sym_SLASH,
  [22666] = 1,
    ACTIONS(1403), 2,
      anon_sym_f,
      anon_sym_F,
  [22671] = 1,
    ACTIONS(1399), 2,
      anon_sym_f,
      anon_sym_F,
  [22676] = 1,
    ACTIONS(1672), 2,
      anon_sym_Prefix_COLON,
      anon_sym_Ontology_COLON,
  [22681] = 1,
    ACTIONS(1674), 2,
      anon_sym_f,
      anon_sym_F,
  [22686] = 1,
    ACTIONS(1676), 2,
      anon_sym_f,
      anon_sym_F,
  [22691] = 1,
    ACTIONS(1678), 2,
      anon_sym_f,
      anon_sym_F,
  [22696] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(930), 1,
      sym__iri_rfc3987,
  [22703] = 1,
    ACTIONS(1622), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [22708] = 1,
    ACTIONS(1680), 2,
      anon_sym_f,
      anon_sym_F,
  [22713] = 1,
    ACTIONS(1682), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [22718] = 1,
    ACTIONS(107), 2,
      anon_sym_f,
      anon_sym_F,
  [22723] = 2,
    ACTIONS(1684), 1,
      anon_sym_SLASH_SLASH,
    STATE(838), 1,
      sym__ihier_part,
  [22730] = 1,
    ACTIONS(1686), 2,
      anon_sym_f,
      anon_sym_F,
  [22735] = 2,
    ACTIONS(1688), 1,
      anon_sym_GT,
    ACTIONS(1690), 1,
      sym__ifragment,
  [22742] = 2,
    ACTIONS(1692), 1,
      anon_sym_COLON,
    ACTIONS(1694), 1,
      anon_sym_SLASH,
  [22749] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(904), 1,
      sym__iri_rfc3987,
  [22756] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(903), 1,
      sym__iri_rfc3987,
  [22763] = 2,
    ACTIONS(1483), 1,
      anon_sym_SLASH,
    STATE(717), 1,
      aux_sym__ipath_abempty,
  [22770] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(899), 1,
      sym__iri_rfc3987,
  [22777] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(906), 1,
      sym__iri_rfc3987,
  [22784] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(892), 1,
      sym__iri_rfc3987,
  [22791] = 1,
    ACTIONS(1696), 2,
      anon_sym_f,
      anon_sym_F,
  [22796] = 1,
    ACTIONS(1698), 2,
      anon_sym_f,
      anon_sym_F,
  [22801] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(918), 1,
      sym__iri_rfc3987,
  [22808] = 1,
    ACTIONS(1415), 2,
      anon_sym_f,
      anon_sym_F,
  [22813] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(912), 1,
      sym__iri_rfc3987,
  [22820] = 1,
    ACTIONS(1392), 2,
      anon_sym_f,
      anon_sym_F,
  [22825] = 1,
    ACTIONS(1700), 2,
      anon_sym_f,
      anon_sym_F,
  [22830] = 1,
    ACTIONS(1390), 2,
      anon_sym_f,
      anon_sym_F,
  [22835] = 1,
    ACTIONS(1702), 2,
      anon_sym_f,
      anon_sym_F,
  [22840] = 1,
    ACTIONS(1417), 2,
      anon_sym_f,
      anon_sym_F,
  [22845] = 1,
    ACTIONS(67), 2,
      anon_sym_f,
      anon_sym_F,
  [22850] = 1,
    ACTIONS(1704), 2,
      anon_sym_f,
      anon_sym_F,
  [22855] = 1,
    ACTIONS(1411), 2,
      anon_sym_f,
      anon_sym_F,
  [22860] = 2,
    ACTIONS(1662), 1,
      sym__scheme,
    STATE(910), 1,
      sym__iri_rfc3987,
  [22867] = 1,
    ACTIONS(1413), 2,
      anon_sym_f,
      anon_sym_F,
  [22872] = 1,
    ACTIONS(1706), 2,
      anon_sym_f,
      anon_sym_F,
  [22877] = 1,
    ACTIONS(1708), 1,
      anon_sym_GT,
  [22881] = 1,
    ACTIONS(1710), 1,
      anon_sym_GT,
  [22885] = 1,
    ACTIONS(1712), 1,
      anon_sym_GT,
  [22889] = 1,
    ACTIONS(1714), 1,
      sym_prefix_name,
  [22893] = 1,
    ACTIONS(1716), 1,
      anon_sym_CARET_CARET,
  [22897] = 1,
    ACTIONS(1718), 1,
      sym__pn_local,
  [22901] = 1,
    ACTIONS(1720), 1,
      anon_sym_CARET_CARET,
  [22905] = 1,
    ACTIONS(1722), 1,
      anon_sym_GT,
  [22909] = 1,
    ACTIONS(1724), 1,
      anon_sym_Functional,
  [22913] = 1,
    ACTIONS(1726), 1,
      anon_sym_CARET_CARET,
  [22917] = 1,
    ACTIONS(1728), 1,
      anon_sym_CARET_CARET,
  [22921] = 1,
    ACTIONS(1730), 1,
      anon_sym_GT,
  [22925] = 1,
    ACTIONS(1732), 1,
      anon_sym_GT,
  [22929] = 1,
    ACTIONS(1734), 1,
      sym__port,
  [22933] = 1,
    ACTIONS(1736), 1,
      anon_sym_GT,
  [22937] = 1,
    ACTIONS(1738), 1,
      anon_sym_RPAREN,
  [22941] = 1,
    ACTIONS(1738), 1,
      anon_sym_RBRACE,
  [22945] = 1,
    ACTIONS(1740), 1,
      sym__pn_local,
  [22949] = 1,
    ACTIONS(1742), 1,
      anon_sym_GT,
  [22953] = 1,
    ACTIONS(1744), 1,
      anon_sym_CARET_CARET,
  [22957] = 1,
    ACTIONS(1746), 1,
      anon_sym_GT,
  [22961] = 1,
    ACTIONS(1748), 1,
      anon_sym_AT,
  [22965] = 1,
    ACTIONS(1688), 1,
      anon_sym_GT,
  [22969] = 1,
    ACTIONS(1750), 1,
      anon_sym_COMMA,
  [22973] = 1,
    ACTIONS(1752), 1,
      anon_sym_COMMA,
  [22977] = 1,
    ACTIONS(1754), 1,
      anon_sym_COMMA,
  [22981] = 1,
    ACTIONS(1757), 1,
      anon_sym_GT,
  [22985] = 1,
    ACTIONS(1759), 1,
      sym__pn_local,
  [22989] = 1,
    ACTIONS(1761), 1,
      anon_sym_COMMA,
  [22993] = 1,
    ACTIONS(1763), 1,
      anon_sym_value,
  [22997] = 1,
    ACTIONS(1765), 1,
      anon_sym_SLASH,
  [23001] = 1,
    ACTIONS(1767), 1,
      sym__pn_local,
  [23005] = 1,
    ACTIONS(1769), 1,
      anon_sym_RBRACE,
  [23009] = 1,
    ACTIONS(1771), 1,
      anon_sym_GT,
  [23013] = 1,
    ACTIONS(1773), 1,
      anon_sym_COLON,
  [23017] = 1,
    ACTIONS(1769), 1,
      anon_sym_RPAREN,
  [23021] = 1,
    ACTIONS(1670), 1,
      anon_sym_SLASH,
  [23025] = 1,
    ACTIONS(1775), 1,
      ts_builtin_sym_end,
  [23029] = 1,
    ACTIONS(1777), 1,
      anon_sym_GT,
  [23033] = 1,
    ACTIONS(1779), 1,
      sym__pn_local,
  [23037] = 1,
    ACTIONS(1781), 1,
      anon_sym_CARET_CARET,
  [23041] = 1,
    ACTIONS(1783), 1,
      anon_sym_CARET_CARET,
  [23045] = 1,
    ACTIONS(1785), 1,
      anon_sym_CARET_CARET,
  [23049] = 1,
    ACTIONS(1787), 1,
      anon_sym_COMMA,
  [23053] = 1,
    ACTIONS(1789), 1,
      sym__pn_local,
  [23057] = 1,
    ACTIONS(1791), 1,
      sym__port,
  [23061] = 1,
    ACTIONS(1793), 1,
      sym__pn_local,
  [23065] = 1,
    ACTIONS(1795), 1,
      ts_builtin_sym_end,
  [23069] = 1,
    ACTIONS(1797), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 161,
  [SMALL_STATE(6)] = 238,
  [SMALL_STATE(7)] = 313,
  [SMALL_STATE(8)] = 387,
  [SMALL_STATE(9)] = 438,
  [SMALL_STATE(10)] = 511,
  [SMALL_STATE(11)] = 557,
  [SMALL_STATE(12)] = 602,
  [SMALL_STATE(13)] = 647,
  [SMALL_STATE(14)] = 692,
  [SMALL_STATE(15)] = 737,
  [SMALL_STATE(16)] = 782,
  [SMALL_STATE(17)] = 827,
  [SMALL_STATE(18)] = 872,
  [SMALL_STATE(19)] = 930,
  [SMALL_STATE(20)] = 974,
  [SMALL_STATE(21)] = 1032,
  [SMALL_STATE(22)] = 1081,
  [SMALL_STATE(23)] = 1130,
  [SMALL_STATE(24)] = 1179,
  [SMALL_STATE(25)] = 1234,
  [SMALL_STATE(26)] = 1289,
  [SMALL_STATE(27)] = 1338,
  [SMALL_STATE(28)] = 1406,
  [SMALL_STATE(29)] = 1453,
  [SMALL_STATE(30)] = 1500,
  [SMALL_STATE(31)] = 1547,
  [SMALL_STATE(32)] = 1587,
  [SMALL_STATE(33)] = 1633,
  [SMALL_STATE(34)] = 1673,
  [SMALL_STATE(35)] = 1713,
  [SMALL_STATE(36)] = 1759,
  [SMALL_STATE(37)] = 1805,
  [SMALL_STATE(38)] = 1846,
  [SMALL_STATE(39)] = 1891,
  [SMALL_STATE(40)] = 1930,
  [SMALL_STATE(41)] = 1975,
  [SMALL_STATE(42)] = 2020,
  [SMALL_STATE(43)] = 2094,
  [SMALL_STATE(44)] = 2168,
  [SMALL_STATE(45)] = 2207,
  [SMALL_STATE(46)] = 2244,
  [SMALL_STATE(47)] = 2283,
  [SMALL_STATE(48)] = 2319,
  [SMALL_STATE(49)] = 2355,
  [SMALL_STATE(50)] = 2391,
  [SMALL_STATE(51)] = 2427,
  [SMALL_STATE(52)] = 2473,
  [SMALL_STATE(53)] = 2509,
  [SMALL_STATE(54)] = 2545,
  [SMALL_STATE(55)] = 2581,
  [SMALL_STATE(56)] = 2617,
  [SMALL_STATE(57)] = 2653,
  [SMALL_STATE(58)] = 2699,
  [SMALL_STATE(59)] = 2737,
  [SMALL_STATE(60)] = 2773,
  [SMALL_STATE(61)] = 2809,
  [SMALL_STATE(62)] = 2845,
  [SMALL_STATE(63)] = 2882,
  [SMALL_STATE(64)] = 2925,
  [SMALL_STATE(65)] = 2960,
  [SMALL_STATE(66)] = 3000,
  [SMALL_STATE(67)] = 3050,
  [SMALL_STATE(68)] = 3094,
  [SMALL_STATE(69)] = 3144,
  [SMALL_STATE(70)] = 3184,
  [SMALL_STATE(71)] = 3224,
  [SMALL_STATE(72)] = 3268,
  [SMALL_STATE(73)] = 3315,
  [SMALL_STATE(74)] = 3356,
  [SMALL_STATE(75)] = 3403,
  [SMALL_STATE(76)] = 3446,
  [SMALL_STATE(77)] = 3485,
  [SMALL_STATE(78)] = 3518,
  [SMALL_STATE(79)] = 3551,
  [SMALL_STATE(80)] = 3594,
  [SMALL_STATE(81)] = 3638,
  [SMALL_STATE(82)] = 3678,
  [SMALL_STATE(83)] = 3722,
  [SMALL_STATE(84)] = 3764,
  [SMALL_STATE(85)] = 3806,
  [SMALL_STATE(86)] = 3850,
  [SMALL_STATE(87)] = 3909,
  [SMALL_STATE(88)] = 3968,
  [SMALL_STATE(89)] = 4027,
  [SMALL_STATE(90)] = 4086,
  [SMALL_STATE(91)] = 4125,
  [SMALL_STATE(92)] = 4186,
  [SMALL_STATE(93)] = 4220,
  [SMALL_STATE(94)] = 4254,
  [SMALL_STATE(95)] = 4286,
  [SMALL_STATE(96)] = 4342,
  [SMALL_STATE(97)] = 4376,
  [SMALL_STATE(98)] = 4410,
  [SMALL_STATE(99)] = 4444,
  [SMALL_STATE(100)] = 4506,
  [SMALL_STATE(101)] = 4539,
  [SMALL_STATE(102)] = 4590,
  [SMALL_STATE(103)] = 4641,
  [SMALL_STATE(104)] = 4674,
  [SMALL_STATE(105)] = 4729,
  [SMALL_STATE(106)] = 4780,
  [SMALL_STATE(107)] = 4813,
  [SMALL_STATE(108)] = 4846,
  [SMALL_STATE(109)] = 4897,
  [SMALL_STATE(110)] = 4948,
  [SMALL_STATE(111)] = 4999,
  [SMALL_STATE(112)] = 5032,
  [SMALL_STATE(113)] = 5065,
  [SMALL_STATE(114)] = 5098,
  [SMALL_STATE(115)] = 5149,
  [SMALL_STATE(116)] = 5182,
  [SMALL_STATE(117)] = 5233,
  [SMALL_STATE(118)] = 5284,
  [SMALL_STATE(119)] = 5316,
  [SMALL_STATE(120)] = 5368,
  [SMALL_STATE(121)] = 5420,
  [SMALL_STATE(122)] = 5452,
  [SMALL_STATE(123)] = 5504,
  [SMALL_STATE(124)] = 5556,
  [SMALL_STATE(125)] = 5588,
  [SMALL_STATE(126)] = 5620,
  [SMALL_STATE(127)] = 5652,
  [SMALL_STATE(128)] = 5680,
  [SMALL_STATE(129)] = 5732,
  [SMALL_STATE(130)] = 5764,
  [SMALL_STATE(131)] = 5816,
  [SMALL_STATE(132)] = 5847,
  [SMALL_STATE(133)] = 5878,
  [SMALL_STATE(134)] = 5909,
  [SMALL_STATE(135)] = 5940,
  [SMALL_STATE(136)] = 5971,
  [SMALL_STATE(137)] = 6002,
  [SMALL_STATE(138)] = 6033,
  [SMALL_STATE(139)] = 6064,
  [SMALL_STATE(140)] = 6095,
  [SMALL_STATE(141)] = 6126,
  [SMALL_STATE(142)] = 6157,
  [SMALL_STATE(143)] = 6184,
  [SMALL_STATE(144)] = 6215,
  [SMALL_STATE(145)] = 6254,
  [SMALL_STATE(146)] = 6291,
  [SMALL_STATE(147)] = 6322,
  [SMALL_STATE(148)] = 6353,
  [SMALL_STATE(149)] = 6384,
  [SMALL_STATE(150)] = 6415,
  [SMALL_STATE(151)] = 6446,
  [SMALL_STATE(152)] = 6477,
  [SMALL_STATE(153)] = 6508,
  [SMALL_STATE(154)] = 6539,
  [SMALL_STATE(155)] = 6570,
  [SMALL_STATE(156)] = 6601,
  [SMALL_STATE(157)] = 6638,
  [SMALL_STATE(158)] = 6669,
  [SMALL_STATE(159)] = 6708,
  [SMALL_STATE(160)] = 6747,
  [SMALL_STATE(161)] = 6778,
  [SMALL_STATE(162)] = 6809,
  [SMALL_STATE(163)] = 6840,
  [SMALL_STATE(164)] = 6871,
  [SMALL_STATE(165)] = 6902,
  [SMALL_STATE(166)] = 6933,
  [SMALL_STATE(167)] = 6964,
  [SMALL_STATE(168)] = 6995,
  [SMALL_STATE(169)] = 7021,
  [SMALL_STATE(170)] = 7075,
  [SMALL_STATE(171)] = 7101,
  [SMALL_STATE(172)] = 7149,
  [SMALL_STATE(173)] = 7175,
  [SMALL_STATE(174)] = 7223,
  [SMALL_STATE(175)] = 7249,
  [SMALL_STATE(176)] = 7277,
  [SMALL_STATE(177)] = 7325,
  [SMALL_STATE(178)] = 7351,
  [SMALL_STATE(179)] = 7381,
  [SMALL_STATE(180)] = 7409,
  [SMALL_STATE(181)] = 7437,
  [SMALL_STATE(182)] = 7467,
  [SMALL_STATE(183)] = 7515,
  [SMALL_STATE(184)] = 7545,
  [SMALL_STATE(185)] = 7575,
  [SMALL_STATE(186)] = 7601,
  [SMALL_STATE(187)] = 7649,
  [SMALL_STATE(188)] = 7675,
  [SMALL_STATE(189)] = 7723,
  [SMALL_STATE(190)] = 7751,
  [SMALL_STATE(191)] = 7777,
  [SMALL_STATE(192)] = 7807,
  [SMALL_STATE(193)] = 7837,
  [SMALL_STATE(194)] = 7863,
  [SMALL_STATE(195)] = 7889,
  [SMALL_STATE(196)] = 7919,
  [SMALL_STATE(197)] = 7949,
  [SMALL_STATE(198)] = 7979,
  [SMALL_STATE(199)] = 8009,
  [SMALL_STATE(200)] = 8043,
  [SMALL_STATE(201)] = 8073,
  [SMALL_STATE(202)] = 8102,
  [SMALL_STATE(203)] = 8131,
  [SMALL_STATE(204)] = 8160,
  [SMALL_STATE(205)] = 8205,
  [SMALL_STATE(206)] = 8234,
  [SMALL_STATE(207)] = 8263,
  [SMALL_STATE(208)] = 8308,
  [SMALL_STATE(209)] = 8337,
  [SMALL_STATE(210)] = 8366,
  [SMALL_STATE(211)] = 8395,
  [SMALL_STATE(212)] = 8424,
  [SMALL_STATE(213)] = 8453,
  [SMALL_STATE(214)] = 8482,
  [SMALL_STATE(215)] = 8511,
  [SMALL_STATE(216)] = 8552,
  [SMALL_STATE(217)] = 8581,
  [SMALL_STATE(218)] = 8610,
  [SMALL_STATE(219)] = 8639,
  [SMALL_STATE(220)] = 8684,
  [SMALL_STATE(221)] = 8713,
  [SMALL_STATE(222)] = 8742,
  [SMALL_STATE(223)] = 8787,
  [SMALL_STATE(224)] = 8816,
  [SMALL_STATE(225)] = 8845,
  [SMALL_STATE(226)] = 8874,
  [SMALL_STATE(227)] = 8899,
  [SMALL_STATE(228)] = 8928,
  [SMALL_STATE(229)] = 8957,
  [SMALL_STATE(230)] = 8996,
  [SMALL_STATE(231)] = 9025,
  [SMALL_STATE(232)] = 9070,
  [SMALL_STATE(233)] = 9109,
  [SMALL_STATE(234)] = 9154,
  [SMALL_STATE(235)] = 9183,
  [SMALL_STATE(236)] = 9224,
  [SMALL_STATE(237)] = 9269,
  [SMALL_STATE(238)] = 9314,
  [SMALL_STATE(239)] = 9365,
  [SMALL_STATE(240)] = 9410,
  [SMALL_STATE(241)] = 9455,
  [SMALL_STATE(242)] = 9484,
  [SMALL_STATE(243)] = 9529,
  [SMALL_STATE(244)] = 9568,
  [SMALL_STATE(245)] = 9597,
  [SMALL_STATE(246)] = 9638,
  [SMALL_STATE(247)] = 9689,
  [SMALL_STATE(248)] = 9740,
  [SMALL_STATE(249)] = 9785,
  [SMALL_STATE(250)] = 9830,
  [SMALL_STATE(251)] = 9856,
  [SMALL_STATE(252)] = 9884,
  [SMALL_STATE(253)] = 9912,
  [SMALL_STATE(254)] = 9940,
  [SMALL_STATE(255)] = 9978,
  [SMALL_STATE(256)] = 10006,
  [SMALL_STATE(257)] = 10034,
  [SMALL_STATE(258)] = 10062,
  [SMALL_STATE(259)] = 10086,
  [SMALL_STATE(260)] = 10114,
  [SMALL_STATE(261)] = 10142,
  [SMALL_STATE(262)] = 10170,
  [SMALL_STATE(263)] = 10194,
  [SMALL_STATE(264)] = 10222,
  [SMALL_STATE(265)] = 10260,
  [SMALL_STATE(266)] = 10288,
  [SMALL_STATE(267)] = 10312,
  [SMALL_STATE(268)] = 10336,
  [SMALL_STATE(269)] = 10362,
  [SMALL_STATE(270)] = 10388,
  [SMALL_STATE(271)] = 10415,
  [SMALL_STATE(272)] = 10442,
  [SMALL_STATE(273)] = 10487,
  [SMALL_STATE(274)] = 10532,
  [SMALL_STATE(275)] = 10559,
  [SMALL_STATE(276)] = 10586,
  [SMALL_STATE(277)] = 10613,
  [SMALL_STATE(278)] = 10640,
  [SMALL_STATE(279)] = 10667,
  [SMALL_STATE(280)] = 10700,
  [SMALL_STATE(281)] = 10745,
  [SMALL_STATE(282)] = 10772,
  [SMALL_STATE(283)] = 10799,
  [SMALL_STATE(284)] = 10822,
  [SMALL_STATE(285)] = 10867,
  [SMALL_STATE(286)] = 10918,
  [SMALL_STATE(287)] = 10945,
  [SMALL_STATE(288)] = 10990,
  [SMALL_STATE(289)] = 11017,
  [SMALL_STATE(290)] = 11044,
  [SMALL_STATE(291)] = 11071,
  [SMALL_STATE(292)] = 11116,
  [SMALL_STATE(293)] = 11143,
  [SMALL_STATE(294)] = 11188,
  [SMALL_STATE(295)] = 11221,
  [SMALL_STATE(296)] = 11250,
  [SMALL_STATE(297)] = 11301,
  [SMALL_STATE(298)] = 11352,
  [SMALL_STATE(299)] = 11379,
  [SMALL_STATE(300)] = 11406,
  [SMALL_STATE(301)] = 11433,
  [SMALL_STATE(302)] = 11484,
  [SMALL_STATE(303)] = 11535,
  [SMALL_STATE(304)] = 11558,
  [SMALL_STATE(305)] = 11581,
  [SMALL_STATE(306)] = 11604,
  [SMALL_STATE(307)] = 11627,
  [SMALL_STATE(308)] = 11672,
  [SMALL_STATE(309)] = 11717,
  [SMALL_STATE(310)] = 11752,
  [SMALL_STATE(311)] = 11787,
  [SMALL_STATE(312)] = 11814,
  [SMALL_STATE(313)] = 11837,
  [SMALL_STATE(314)] = 11882,
  [SMALL_STATE(315)] = 11915,
  [SMALL_STATE(316)] = 11966,
  [SMALL_STATE(317)] = 11993,
  [SMALL_STATE(318)] = 12016,
  [SMALL_STATE(319)] = 12061,
  [SMALL_STATE(320)] = 12112,
  [SMALL_STATE(321)] = 12163,
  [SMALL_STATE(322)] = 12190,
  [SMALL_STATE(323)] = 12232,
  [SMALL_STATE(324)] = 12260,
  [SMALL_STATE(325)] = 12286,
  [SMALL_STATE(326)] = 12316,
  [SMALL_STATE(327)] = 12364,
  [SMALL_STATE(328)] = 12386,
  [SMALL_STATE(329)] = 12434,
  [SMALL_STATE(330)] = 12456,
  [SMALL_STATE(331)] = 12478,
  [SMALL_STATE(332)] = 12500,
  [SMALL_STATE(333)] = 12528,
  [SMALL_STATE(334)] = 12576,
  [SMALL_STATE(335)] = 12624,
  [SMALL_STATE(336)] = 12652,
  [SMALL_STATE(337)] = 12674,
  [SMALL_STATE(338)] = 12696,
  [SMALL_STATE(339)] = 12718,
  [SMALL_STATE(340)] = 12740,
  [SMALL_STATE(341)] = 12762,
  [SMALL_STATE(342)] = 12792,
  [SMALL_STATE(343)] = 12818,
  [SMALL_STATE(344)] = 12840,
  [SMALL_STATE(345)] = 12862,
  [SMALL_STATE(346)] = 12890,
  [SMALL_STATE(347)] = 12916,
  [SMALL_STATE(348)] = 12942,
  [SMALL_STATE(349)] = 12964,
  [SMALL_STATE(350)] = 12986,
  [SMALL_STATE(351)] = 13016,
  [SMALL_STATE(352)] = 13061,
  [SMALL_STATE(353)] = 13096,
  [SMALL_STATE(354)] = 13117,
  [SMALL_STATE(355)] = 13152,
  [SMALL_STATE(356)] = 13187,
  [SMALL_STATE(357)] = 13232,
  [SMALL_STATE(358)] = 13271,
  [SMALL_STATE(359)] = 13306,
  [SMALL_STATE(360)] = 13338,
  [SMALL_STATE(361)] = 13370,
  [SMALL_STATE(362)] = 13396,
  [SMALL_STATE(363)] = 13420,
  [SMALL_STATE(364)] = 13446,
  [SMALL_STATE(365)] = 13470,
  [SMALL_STATE(366)] = 13512,
  [SMALL_STATE(367)] = 13554,
  [SMALL_STATE(368)] = 13596,
  [SMALL_STATE(369)] = 13638,
  [SMALL_STATE(370)] = 13662,
  [SMALL_STATE(371)] = 13686,
  [SMALL_STATE(372)] = 13710,
  [SMALL_STATE(373)] = 13744,
  [SMALL_STATE(374)] = 13768,
  [SMALL_STATE(375)] = 13794,
  [SMALL_STATE(376)] = 13836,
  [SMALL_STATE(377)] = 13862,
  [SMALL_STATE(378)] = 13904,
  [SMALL_STATE(379)] = 13924,
  [SMALL_STATE(380)] = 13950,
  [SMALL_STATE(381)] = 13974,
  [SMALL_STATE(382)] = 14016,
  [SMALL_STATE(383)] = 14048,
  [SMALL_STATE(384)] = 14090,
  [SMALL_STATE(385)] = 14132,
  [SMALL_STATE(386)] = 14174,
  [SMALL_STATE(387)] = 14198,
  [SMALL_STATE(388)] = 14240,
  [SMALL_STATE(389)] = 14272,
  [SMALL_STATE(390)] = 14296,
  [SMALL_STATE(391)] = 14338,
  [SMALL_STATE(392)] = 14380,
  [SMALL_STATE(393)] = 14404,
  [SMALL_STATE(394)] = 14427,
  [SMALL_STATE(395)] = 14450,
  [SMALL_STATE(396)] = 14489,
  [SMALL_STATE(397)] = 14528,
  [SMALL_STATE(398)] = 14559,
  [SMALL_STATE(399)] = 14584,
  [SMALL_STATE(400)] = 14607,
  [SMALL_STATE(401)] = 14646,
  [SMALL_STATE(402)] = 14685,
  [SMALL_STATE(403)] = 14708,
  [SMALL_STATE(404)] = 14747,
  [SMALL_STATE(405)] = 14778,
  [SMALL_STATE(406)] = 14809,
  [SMALL_STATE(407)] = 14840,
  [SMALL_STATE(408)] = 14875,
  [SMALL_STATE(409)] = 14898,
  [SMALL_STATE(410)] = 14921,
  [SMALL_STATE(411)] = 14944,
  [SMALL_STATE(412)] = 14975,
  [SMALL_STATE(413)] = 14998,
  [SMALL_STATE(414)] = 15037,
  [SMALL_STATE(415)] = 15060,
  [SMALL_STATE(416)] = 15083,
  [SMALL_STATE(417)] = 15106,
  [SMALL_STATE(418)] = 15128,
  [SMALL_STATE(419)] = 15160,
  [SMALL_STATE(420)] = 15196,
  [SMALL_STATE(421)] = 15218,
  [SMALL_STATE(422)] = 15254,
  [SMALL_STATE(423)] = 15290,
  [SMALL_STATE(424)] = 15312,
  [SMALL_STATE(425)] = 15344,
  [SMALL_STATE(426)] = 15376,
  [SMALL_STATE(427)] = 15408,
  [SMALL_STATE(428)] = 15444,
  [SMALL_STATE(429)] = 15466,
  [SMALL_STATE(430)] = 15484,
  [SMALL_STATE(431)] = 15502,
  [SMALL_STATE(432)] = 15534,
  [SMALL_STATE(433)] = 15554,
  [SMALL_STATE(434)] = 15586,
  [SMALL_STATE(435)] = 15608,
  [SMALL_STATE(436)] = 15630,
  [SMALL_STATE(437)] = 15666,
  [SMALL_STATE(438)] = 15702,
  [SMALL_STATE(439)] = 15724,
  [SMALL_STATE(440)] = 15746,
  [SMALL_STATE(441)] = 15768,
  [SMALL_STATE(442)] = 15790,
  [SMALL_STATE(443)] = 15812,
  [SMALL_STATE(444)] = 15834,
  [SMALL_STATE(445)] = 15869,
  [SMALL_STATE(446)] = 15886,
  [SMALL_STATE(447)] = 15917,
  [SMALL_STATE(448)] = 15948,
  [SMALL_STATE(449)] = 15977,
  [SMALL_STATE(450)] = 16006,
  [SMALL_STATE(451)] = 16029,
  [SMALL_STATE(452)] = 16058,
  [SMALL_STATE(453)] = 16075,
  [SMALL_STATE(454)] = 16104,
  [SMALL_STATE(455)] = 16133,
  [SMALL_STATE(456)] = 16156,
  [SMALL_STATE(457)] = 16185,
  [SMALL_STATE(458)] = 16208,
  [SMALL_STATE(459)] = 16240,
  [SMALL_STATE(460)] = 16256,
  [SMALL_STATE(461)] = 16278,
  [SMALL_STATE(462)] = 16300,
  [SMALL_STATE(463)] = 16332,
  [SMALL_STATE(464)] = 16364,
  [SMALL_STATE(465)] = 16386,
  [SMALL_STATE(466)] = 16414,
  [SMALL_STATE(467)] = 16446,
  [SMALL_STATE(468)] = 16468,
  [SMALL_STATE(469)] = 16490,
  [SMALL_STATE(470)] = 16518,
  [SMALL_STATE(471)] = 16534,
  [SMALL_STATE(472)] = 16566,
  [SMALL_STATE(473)] = 16598,
  [SMALL_STATE(474)] = 16630,
  [SMALL_STATE(475)] = 16662,
  [SMALL_STATE(476)] = 16694,
  [SMALL_STATE(477)] = 16726,
  [SMALL_STATE(478)] = 16747,
  [SMALL_STATE(479)] = 16776,
  [SMALL_STATE(480)] = 16801,
  [SMALL_STATE(481)] = 16826,
  [SMALL_STATE(482)] = 16851,
  [SMALL_STATE(483)] = 16872,
  [SMALL_STATE(484)] = 16893,
  [SMALL_STATE(485)] = 16918,
  [SMALL_STATE(486)] = 16943,
  [SMALL_STATE(487)] = 16964,
  [SMALL_STATE(488)] = 16989,
  [SMALL_STATE(489)] = 17014,
  [SMALL_STATE(490)] = 17039,
  [SMALL_STATE(491)] = 17066,
  [SMALL_STATE(492)] = 17095,
  [SMALL_STATE(493)] = 17122,
  [SMALL_STATE(494)] = 17143,
  [SMALL_STATE(495)] = 17168,
  [SMALL_STATE(496)] = 17193,
  [SMALL_STATE(497)] = 17214,
  [SMALL_STATE(498)] = 17239,
  [SMALL_STATE(499)] = 17267,
  [SMALL_STATE(500)] = 17293,
  [SMALL_STATE(501)] = 17319,
  [SMALL_STATE(502)] = 17347,
  [SMALL_STATE(503)] = 17373,
  [SMALL_STATE(504)] = 17401,
  [SMALL_STATE(505)] = 17429,
  [SMALL_STATE(506)] = 17457,
  [SMALL_STATE(507)] = 17483,
  [SMALL_STATE(508)] = 17509,
  [SMALL_STATE(509)] = 17537,
  [SMALL_STATE(510)] = 17559,
  [SMALL_STATE(511)] = 17587,
  [SMALL_STATE(512)] = 17613,
  [SMALL_STATE(513)] = 17641,
  [SMALL_STATE(514)] = 17657,
  [SMALL_STATE(515)] = 17685,
  [SMALL_STATE(516)] = 17701,
  [SMALL_STATE(517)] = 17717,
  [SMALL_STATE(518)] = 17733,
  [SMALL_STATE(519)] = 17761,
  [SMALL_STATE(520)] = 17777,
  [SMALL_STATE(521)] = 17805,
  [SMALL_STATE(522)] = 17833,
  [SMALL_STATE(523)] = 17861,
  [SMALL_STATE(524)] = 17877,
  [SMALL_STATE(525)] = 17905,
  [SMALL_STATE(526)] = 17933,
  [SMALL_STATE(527)] = 17949,
  [SMALL_STATE(528)] = 17977,
  [SMALL_STATE(529)] = 17999,
  [SMALL_STATE(530)] = 18015,
  [SMALL_STATE(531)] = 18031,
  [SMALL_STATE(532)] = 18057,
  [SMALL_STATE(533)] = 18073,
  [SMALL_STATE(534)] = 18101,
  [SMALL_STATE(535)] = 18117,
  [SMALL_STATE(536)] = 18133,
  [SMALL_STATE(537)] = 18149,
  [SMALL_STATE(538)] = 18177,
  [SMALL_STATE(539)] = 18193,
  [SMALL_STATE(540)] = 18221,
  [SMALL_STATE(541)] = 18249,
  [SMALL_STATE(542)] = 18265,
  [SMALL_STATE(543)] = 18293,
  [SMALL_STATE(544)] = 18318,
  [SMALL_STATE(545)] = 18343,
  [SMALL_STATE(546)] = 18360,
  [SMALL_STATE(547)] = 18385,
  [SMALL_STATE(548)] = 18408,
  [SMALL_STATE(549)] = 18427,
  [SMALL_STATE(550)] = 18450,
  [SMALL_STATE(551)] = 18465,
  [SMALL_STATE(552)] = 18490,
  [SMALL_STATE(553)] = 18513,
  [SMALL_STATE(554)] = 18538,
  [SMALL_STATE(555)] = 18553,
  [SMALL_STATE(556)] = 18578,
  [SMALL_STATE(557)] = 18603,
  [SMALL_STATE(558)] = 18628,
  [SMALL_STATE(559)] = 18649,
  [SMALL_STATE(560)] = 18674,
  [SMALL_STATE(561)] = 18699,
  [SMALL_STATE(562)] = 18724,
  [SMALL_STATE(563)] = 18747,
  [SMALL_STATE(564)] = 18772,
  [SMALL_STATE(565)] = 18791,
  [SMALL_STATE(566)] = 18816,
  [SMALL_STATE(567)] = 18839,
  [SMALL_STATE(568)] = 18862,
  [SMALL_STATE(569)] = 18877,
  [SMALL_STATE(570)] = 18892,
  [SMALL_STATE(571)] = 18917,
  [SMALL_STATE(572)] = 18940,
  [SMALL_STATE(573)] = 18965,
  [SMALL_STATE(574)] = 18990,
  [SMALL_STATE(575)] = 19015,
  [SMALL_STATE(576)] = 19040,
  [SMALL_STATE(577)] = 19065,
  [SMALL_STATE(578)] = 19090,
  [SMALL_STATE(579)] = 19115,
  [SMALL_STATE(580)] = 19140,
  [SMALL_STATE(581)] = 19165,
  [SMALL_STATE(582)] = 19182,
  [SMALL_STATE(583)] = 19207,
  [SMALL_STATE(584)] = 19232,
  [SMALL_STATE(585)] = 19257,
  [SMALL_STATE(586)] = 19277,
  [SMALL_STATE(587)] = 19297,
  [SMALL_STATE(588)] = 19317,
  [SMALL_STATE(589)] = 19337,
  [SMALL_STATE(590)] = 19355,
  [SMALL_STATE(591)] = 19375,
  [SMALL_STATE(592)] = 19395,
  [SMALL_STATE(593)] = 19415,
  [SMALL_STATE(594)] = 19437,
  [SMALL_STATE(595)] = 19457,
  [SMALL_STATE(596)] = 19475,
  [SMALL_STATE(597)] = 19493,
  [SMALL_STATE(598)] = 19513,
  [SMALL_STATE(599)] = 19533,
  [SMALL_STATE(600)] = 19553,
  [SMALL_STATE(601)] = 19569,
  [SMALL_STATE(602)] = 19589,
  [SMALL_STATE(603)] = 19609,
  [SMALL_STATE(604)] = 19629,
  [SMALL_STATE(605)] = 19649,
  [SMALL_STATE(606)] = 19667,
  [SMALL_STATE(607)] = 19683,
  [SMALL_STATE(608)] = 19703,
  [SMALL_STATE(609)] = 19719,
  [SMALL_STATE(610)] = 19739,
  [SMALL_STATE(611)] = 19755,
  [SMALL_STATE(612)] = 19773,
  [SMALL_STATE(613)] = 19793,
  [SMALL_STATE(614)] = 19813,
  [SMALL_STATE(615)] = 19833,
  [SMALL_STATE(616)] = 19853,
  [SMALL_STATE(617)] = 19869,
  [SMALL_STATE(618)] = 19882,
  [SMALL_STATE(619)] = 19901,
  [SMALL_STATE(620)] = 19920,
  [SMALL_STATE(621)] = 19939,
  [SMALL_STATE(622)] = 19952,
  [SMALL_STATE(623)] = 19971,
  [SMALL_STATE(624)] = 19984,
  [SMALL_STATE(625)] = 19997,
  [SMALL_STATE(626)] = 20010,
  [SMALL_STATE(627)] = 20029,
  [SMALL_STATE(628)] = 20042,
  [SMALL_STATE(629)] = 20055,
  [SMALL_STATE(630)] = 20068,
  [SMALL_STATE(631)] = 20081,
  [SMALL_STATE(632)] = 20100,
  [SMALL_STATE(633)] = 20119,
  [SMALL_STATE(634)] = 20132,
  [SMALL_STATE(635)] = 20151,
  [SMALL_STATE(636)] = 20164,
  [SMALL_STATE(637)] = 20183,
  [SMALL_STATE(638)] = 20202,
  [SMALL_STATE(639)] = 20221,
  [SMALL_STATE(640)] = 20234,
  [SMALL_STATE(641)] = 20253,
  [SMALL_STATE(642)] = 20272,
  [SMALL_STATE(643)] = 20291,
  [SMALL_STATE(644)] = 20310,
  [SMALL_STATE(645)] = 20323,
  [SMALL_STATE(646)] = 20336,
  [SMALL_STATE(647)] = 20355,
  [SMALL_STATE(648)] = 20368,
  [SMALL_STATE(649)] = 20381,
  [SMALL_STATE(650)] = 20394,
  [SMALL_STATE(651)] = 20413,
  [SMALL_STATE(652)] = 20432,
  [SMALL_STATE(653)] = 20448,
  [SMALL_STATE(654)] = 20464,
  [SMALL_STATE(655)] = 20480,
  [SMALL_STATE(656)] = 20492,
  [SMALL_STATE(657)] = 20508,
  [SMALL_STATE(658)] = 20524,
  [SMALL_STATE(659)] = 20540,
  [SMALL_STATE(660)] = 20556,
  [SMALL_STATE(661)] = 20572,
  [SMALL_STATE(662)] = 20588,
  [SMALL_STATE(663)] = 20604,
  [SMALL_STATE(664)] = 20620,
  [SMALL_STATE(665)] = 20636,
  [SMALL_STATE(666)] = 20652,
  [SMALL_STATE(667)] = 20668,
  [SMALL_STATE(668)] = 20684,
  [SMALL_STATE(669)] = 20700,
  [SMALL_STATE(670)] = 20716,
  [SMALL_STATE(671)] = 20732,
  [SMALL_STATE(672)] = 20748,
  [SMALL_STATE(673)] = 20764,
  [SMALL_STATE(674)] = 20780,
  [SMALL_STATE(675)] = 20796,
  [SMALL_STATE(676)] = 20812,
  [SMALL_STATE(677)] = 20827,
  [SMALL_STATE(678)] = 20842,
  [SMALL_STATE(679)] = 20851,
  [SMALL_STATE(680)] = 20866,
  [SMALL_STATE(681)] = 20881,
  [SMALL_STATE(682)] = 20896,
  [SMALL_STATE(683)] = 20909,
  [SMALL_STATE(684)] = 20924,
  [SMALL_STATE(685)] = 20939,
  [SMALL_STATE(686)] = 20954,
  [SMALL_STATE(687)] = 20969,
  [SMALL_STATE(688)] = 20984,
  [SMALL_STATE(689)] = 20999,
  [SMALL_STATE(690)] = 21014,
  [SMALL_STATE(691)] = 21027,
  [SMALL_STATE(692)] = 21042,
  [SMALL_STATE(693)] = 21057,
  [SMALL_STATE(694)] = 21072,
  [SMALL_STATE(695)] = 21087,
  [SMALL_STATE(696)] = 21100,
  [SMALL_STATE(697)] = 21112,
  [SMALL_STATE(698)] = 21124,
  [SMALL_STATE(699)] = 21136,
  [SMALL_STATE(700)] = 21150,
  [SMALL_STATE(701)] = 21160,
  [SMALL_STATE(702)] = 21170,
  [SMALL_STATE(703)] = 21180,
  [SMALL_STATE(704)] = 21190,
  [SMALL_STATE(705)] = 21200,
  [SMALL_STATE(706)] = 21210,
  [SMALL_STATE(707)] = 21222,
  [SMALL_STATE(708)] = 21232,
  [SMALL_STATE(709)] = 21242,
  [SMALL_STATE(710)] = 21254,
  [SMALL_STATE(711)] = 21266,
  [SMALL_STATE(712)] = 21278,
  [SMALL_STATE(713)] = 21288,
  [SMALL_STATE(714)] = 21300,
  [SMALL_STATE(715)] = 21310,
  [SMALL_STATE(716)] = 21320,
  [SMALL_STATE(717)] = 21332,
  [SMALL_STATE(718)] = 21344,
  [SMALL_STATE(719)] = 21356,
  [SMALL_STATE(720)] = 21366,
  [SMALL_STATE(721)] = 21378,
  [SMALL_STATE(722)] = 21388,
  [SMALL_STATE(723)] = 21398,
  [SMALL_STATE(724)] = 21408,
  [SMALL_STATE(725)] = 21418,
  [SMALL_STATE(726)] = 21428,
  [SMALL_STATE(727)] = 21442,
  [SMALL_STATE(728)] = 21454,
  [SMALL_STATE(729)] = 21464,
  [SMALL_STATE(730)] = 21476,
  [SMALL_STATE(731)] = 21486,
  [SMALL_STATE(732)] = 21498,
  [SMALL_STATE(733)] = 21508,
  [SMALL_STATE(734)] = 21520,
  [SMALL_STATE(735)] = 21534,
  [SMALL_STATE(736)] = 21544,
  [SMALL_STATE(737)] = 21556,
  [SMALL_STATE(738)] = 21566,
  [SMALL_STATE(739)] = 21580,
  [SMALL_STATE(740)] = 21590,
  [SMALL_STATE(741)] = 21600,
  [SMALL_STATE(742)] = 21610,
  [SMALL_STATE(743)] = 21620,
  [SMALL_STATE(744)] = 21630,
  [SMALL_STATE(745)] = 21640,
  [SMALL_STATE(746)] = 21650,
  [SMALL_STATE(747)] = 21660,
  [SMALL_STATE(748)] = 21670,
  [SMALL_STATE(749)] = 21680,
  [SMALL_STATE(750)] = 21690,
  [SMALL_STATE(751)] = 21704,
  [SMALL_STATE(752)] = 21714,
  [SMALL_STATE(753)] = 21724,
  [SMALL_STATE(754)] = 21734,
  [SMALL_STATE(755)] = 21744,
  [SMALL_STATE(756)] = 21754,
  [SMALL_STATE(757)] = 21764,
  [SMALL_STATE(758)] = 21778,
  [SMALL_STATE(759)] = 21788,
  [SMALL_STATE(760)] = 21798,
  [SMALL_STATE(761)] = 21808,
  [SMALL_STATE(762)] = 21820,
  [SMALL_STATE(763)] = 21832,
  [SMALL_STATE(764)] = 21842,
  [SMALL_STATE(765)] = 21852,
  [SMALL_STATE(766)] = 21862,
  [SMALL_STATE(767)] = 21871,
  [SMALL_STATE(768)] = 21884,
  [SMALL_STATE(769)] = 21893,
  [SMALL_STATE(770)] = 21906,
  [SMALL_STATE(771)] = 21917,
  [SMALL_STATE(772)] = 21926,
  [SMALL_STATE(773)] = 21935,
  [SMALL_STATE(774)] = 21944,
  [SMALL_STATE(775)] = 21953,
  [SMALL_STATE(776)] = 21964,
  [SMALL_STATE(777)] = 21973,
  [SMALL_STATE(778)] = 21982,
  [SMALL_STATE(779)] = 21991,
  [SMALL_STATE(780)] = 22000,
  [SMALL_STATE(781)] = 22009,
  [SMALL_STATE(782)] = 22018,
  [SMALL_STATE(783)] = 22027,
  [SMALL_STATE(784)] = 22036,
  [SMALL_STATE(785)] = 22045,
  [SMALL_STATE(786)] = 22054,
  [SMALL_STATE(787)] = 22063,
  [SMALL_STATE(788)] = 22072,
  [SMALL_STATE(789)] = 22081,
  [SMALL_STATE(790)] = 22090,
  [SMALL_STATE(791)] = 22103,
  [SMALL_STATE(792)] = 22114,
  [SMALL_STATE(793)] = 22123,
  [SMALL_STATE(794)] = 22132,
  [SMALL_STATE(795)] = 22141,
  [SMALL_STATE(796)] = 22154,
  [SMALL_STATE(797)] = 22163,
  [SMALL_STATE(798)] = 22172,
  [SMALL_STATE(799)] = 22181,
  [SMALL_STATE(800)] = 22190,
  [SMALL_STATE(801)] = 22199,
  [SMALL_STATE(802)] = 22208,
  [SMALL_STATE(803)] = 22217,
  [SMALL_STATE(804)] = 22226,
  [SMALL_STATE(805)] = 22235,
  [SMALL_STATE(806)] = 22244,
  [SMALL_STATE(807)] = 22253,
  [SMALL_STATE(808)] = 22262,
  [SMALL_STATE(809)] = 22275,
  [SMALL_STATE(810)] = 22284,
  [SMALL_STATE(811)] = 22291,
  [SMALL_STATE(812)] = 22302,
  [SMALL_STATE(813)] = 22311,
  [SMALL_STATE(814)] = 22320,
  [SMALL_STATE(815)] = 22329,
  [SMALL_STATE(816)] = 22338,
  [SMALL_STATE(817)] = 22347,
  [SMALL_STATE(818)] = 22356,
  [SMALL_STATE(819)] = 22365,
  [SMALL_STATE(820)] = 22374,
  [SMALL_STATE(821)] = 22383,
  [SMALL_STATE(822)] = 22392,
  [SMALL_STATE(823)] = 22405,
  [SMALL_STATE(824)] = 22414,
  [SMALL_STATE(825)] = 22423,
  [SMALL_STATE(826)] = 22432,
  [SMALL_STATE(827)] = 22441,
  [SMALL_STATE(828)] = 22454,
  [SMALL_STATE(829)] = 22463,
  [SMALL_STATE(830)] = 22473,
  [SMALL_STATE(831)] = 22483,
  [SMALL_STATE(832)] = 22493,
  [SMALL_STATE(833)] = 22503,
  [SMALL_STATE(834)] = 22513,
  [SMALL_STATE(835)] = 22523,
  [SMALL_STATE(836)] = 22531,
  [SMALL_STATE(837)] = 22539,
  [SMALL_STATE(838)] = 22549,
  [SMALL_STATE(839)] = 22559,
  [SMALL_STATE(840)] = 22569,
  [SMALL_STATE(841)] = 22579,
  [SMALL_STATE(842)] = 22589,
  [SMALL_STATE(843)] = 22596,
  [SMALL_STATE(844)] = 22601,
  [SMALL_STATE(845)] = 22608,
  [SMALL_STATE(846)] = 22613,
  [SMALL_STATE(847)] = 22618,
  [SMALL_STATE(848)] = 22623,
  [SMALL_STATE(849)] = 22630,
  [SMALL_STATE(850)] = 22637,
  [SMALL_STATE(851)] = 22644,
  [SMALL_STATE(852)] = 22649,
  [SMALL_STATE(853)] = 22654,
  [SMALL_STATE(854)] = 22659,
  [SMALL_STATE(855)] = 22666,
  [SMALL_STATE(856)] = 22671,
  [SMALL_STATE(857)] = 22676,
  [SMALL_STATE(858)] = 22681,
  [SMALL_STATE(859)] = 22686,
  [SMALL_STATE(860)] = 22691,
  [SMALL_STATE(861)] = 22696,
  [SMALL_STATE(862)] = 22703,
  [SMALL_STATE(863)] = 22708,
  [SMALL_STATE(864)] = 22713,
  [SMALL_STATE(865)] = 22718,
  [SMALL_STATE(866)] = 22723,
  [SMALL_STATE(867)] = 22730,
  [SMALL_STATE(868)] = 22735,
  [SMALL_STATE(869)] = 22742,
  [SMALL_STATE(870)] = 22749,
  [SMALL_STATE(871)] = 22756,
  [SMALL_STATE(872)] = 22763,
  [SMALL_STATE(873)] = 22770,
  [SMALL_STATE(874)] = 22777,
  [SMALL_STATE(875)] = 22784,
  [SMALL_STATE(876)] = 22791,
  [SMALL_STATE(877)] = 22796,
  [SMALL_STATE(878)] = 22801,
  [SMALL_STATE(879)] = 22808,
  [SMALL_STATE(880)] = 22813,
  [SMALL_STATE(881)] = 22820,
  [SMALL_STATE(882)] = 22825,
  [SMALL_STATE(883)] = 22830,
  [SMALL_STATE(884)] = 22835,
  [SMALL_STATE(885)] = 22840,
  [SMALL_STATE(886)] = 22845,
  [SMALL_STATE(887)] = 22850,
  [SMALL_STATE(888)] = 22855,
  [SMALL_STATE(889)] = 22860,
  [SMALL_STATE(890)] = 22867,
  [SMALL_STATE(891)] = 22872,
  [SMALL_STATE(892)] = 22877,
  [SMALL_STATE(893)] = 22881,
  [SMALL_STATE(894)] = 22885,
  [SMALL_STATE(895)] = 22889,
  [SMALL_STATE(896)] = 22893,
  [SMALL_STATE(897)] = 22897,
  [SMALL_STATE(898)] = 22901,
  [SMALL_STATE(899)] = 22905,
  [SMALL_STATE(900)] = 22909,
  [SMALL_STATE(901)] = 22913,
  [SMALL_STATE(902)] = 22917,
  [SMALL_STATE(903)] = 22921,
  [SMALL_STATE(904)] = 22925,
  [SMALL_STATE(905)] = 22929,
  [SMALL_STATE(906)] = 22933,
  [SMALL_STATE(907)] = 22937,
  [SMALL_STATE(908)] = 22941,
  [SMALL_STATE(909)] = 22945,
  [SMALL_STATE(910)] = 22949,
  [SMALL_STATE(911)] = 22953,
  [SMALL_STATE(912)] = 22957,
  [SMALL_STATE(913)] = 22961,
  [SMALL_STATE(914)] = 22965,
  [SMALL_STATE(915)] = 22969,
  [SMALL_STATE(916)] = 22973,
  [SMALL_STATE(917)] = 22977,
  [SMALL_STATE(918)] = 22981,
  [SMALL_STATE(919)] = 22985,
  [SMALL_STATE(920)] = 22989,
  [SMALL_STATE(921)] = 22993,
  [SMALL_STATE(922)] = 22997,
  [SMALL_STATE(923)] = 23001,
  [SMALL_STATE(924)] = 23005,
  [SMALL_STATE(925)] = 23009,
  [SMALL_STATE(926)] = 23013,
  [SMALL_STATE(927)] = 23017,
  [SMALL_STATE(928)] = 23021,
  [SMALL_STATE(929)] = 23025,
  [SMALL_STATE(930)] = 23029,
  [SMALL_STATE(931)] = 23033,
  [SMALL_STATE(932)] = 23037,
  [SMALL_STATE(933)] = 23041,
  [SMALL_STATE(934)] = 23045,
  [SMALL_STATE(935)] = 23049,
  [SMALL_STATE(936)] = 23053,
  [SMALL_STATE(937)] = 23057,
  [SMALL_STATE(938)] = 23061,
  [SMALL_STATE(939)] = 23065,
  [SMALL_STATE(940)] = 23069,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__restriction, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_no_language, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_with_language, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_literal, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(21),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(28),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2, .production_id = 10),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(35),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotations, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(40),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datatype_restriction, 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datatype_restriction, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__object_property_expression, 1), SHIFT(404),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_primary, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype, 1), REDUCE(sym__atomic, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(69),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(76),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key_list, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key_list, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_has_key_list_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_list_repeat1, 2), SHIFT_REPEAT(878),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_has_key_list_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_list_repeat1, 2), SHIFT_REPEAT(662),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_has_key_list_repeat1, 2), SHIFT_REPEAT(179),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_has_key_list_repeat1, 2), SHIFT_REPEAT(180),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__object_property_expression, 1), SHIFT(411),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_key_list, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_has_key_list, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 11),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(584),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(936),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(437),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 5),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(505),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2), SHIFT_REPEAT(357),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, .production_id = 25),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2, .production_id = 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 7),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(401),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 14),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 12),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(591),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(564),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(502),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(322),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(498),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(328),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(542),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(491),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(296),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(509),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(511),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 3),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(422),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_property_expression, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(524),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(413),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 3),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(436),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2, .production_id = 3),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(427),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(333),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 6),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(518),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(238),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2), SHIFT_REPEAT(593),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 8),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 17),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(542),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(320),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(315),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(302),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(301),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(490),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 16),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, .production_id = 26),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(542),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(578),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(577),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(285),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(169),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(575),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(840),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, .production_id = 28),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, .production_id = 27),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 13),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 9),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(396),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 15),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 6, .production_id = 32),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(479),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(654),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(657),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(660),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(653),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(549),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(297),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(474),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(473),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_2list, 3),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2), SHIFT_REPEAT(377),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(334),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_2list, 4),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(400),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 2),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 2),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 2), SHIFT_REPEAT(466),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(520),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(319),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(444),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(463),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(560),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(326),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [951] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(295),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 3),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 1),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, .production_id = 19),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, .production_id = 21),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, .production_id = 23),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 2),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 2), SHIFT_REPEAT(478),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, .production_id = 24),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(323),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_fact, 2),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, .production_id = 19),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 3),
  [1008] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(332),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 3),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 3, .production_id = 31),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, .production_id = 20),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(542),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(572),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(570),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 3),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_fact, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, .production_id = 22),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2, .production_id = 21),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1068] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(361),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(542),
  [1076] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), REDUCE(sym_datatype_frame, 4),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(419),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(666),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(374),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(504),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5, .production_id = 18),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(398),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5, .production_id = 29),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7, .production_id = 33),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6, .production_id = 29),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6, .production_id = 33),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6, .production_id = 30),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(403),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4, .production_id = 18),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5, .production_id = 30),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_2list, 4),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [1149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2), SHIFT_REPEAT(390),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_2list, 4),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_2list_repeat1, 2),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_2list_repeat1, 2), SHIFT_REPEAT(669),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_2list, 3),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2), SHIFT_REPEAT(547),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_2list_repeat1, 2),
  [1198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_2list_repeat1, 2), SHIFT_REPEAT(604),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_2list, 4),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_2list, 3),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_2list, 3),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(450),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(455),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(457),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3),
  [1258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(460),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_no_language, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(464),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(467),
  [1277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(468),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 3),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 2),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(546),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 1),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(496),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [1352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_literal, 3),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_with_language, 2),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2, .production_id = 10),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotations, 2),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(543),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(576),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facet, 1),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(551),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(553),
  [1448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(563),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(421),
  [1460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(501),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [1497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(842),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(582),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(895),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(395),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2), SHIFT_REPEAT(571),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2),
  [1624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2), SHIFT_REPEAT(405),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 1),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__datatype_restriction_repeat1, 2), SHIFT_REPEAT(545),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__datatype_restriction_repeat1, 2),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 2),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 1),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 2),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__datatype_restriction_repeat1, 3),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__object_property_expression, 1), SHIFT(661),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1797] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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

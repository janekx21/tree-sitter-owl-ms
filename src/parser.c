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
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 6
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 36

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
  sym_object_property_frame = 139,
  sym_object_property_characteristic = 140,
  sym_data_property_frame = 141,
  sym_annotation_property_frame = 142,
  sym_individual_frame = 143,
  sym_fact = 144,
  sym_object_property_fact = 145,
  sym_data_property_fact = 146,
  sym_misc = 147,
  sym__description_annotated_list = 148,
  sym__annotation_annotated_list = 149,
  sym__object_property_expression_annotated_list = 150,
  sym_object_property_characteristic_annotated_list = 151,
  sym_data_range_annotated_list = 152,
  sym__iri_annotated_list = 153,
  sym_annotation_property_iri_annotated_list = 154,
  sym_individual_annotated_list = 155,
  sym_fact_annotated_list = 156,
  sym_description_2list = 157,
  sym_object_property_2list = 158,
  sym_data_property_2list = 159,
  sym_individual_2list = 160,
  sym__individual_list = 161,
  sym__literal_list = 162,
  sym__iri_rfc3987 = 163,
  sym__ihier_part = 164,
  sym__iauthority = 165,
  sym__iuserinfo = 166,
  sym__ihost = 167,
  aux_sym__ipath_abempty = 168,
  sym__isegment = 169,
  aux_sym_source_file_repeat1 = 170,
  aux_sym__positive_integer_repeat1 = 171,
  aux_sym_ontology_repeat1 = 172,
  aux_sym_ontology_repeat2 = 173,
  aux_sym_ontology_repeat3 = 174,
  aux_sym_data_range_repeat1 = 175,
  aux_sym__data_conjunction_repeat1 = 176,
  aux_sym__datatype_restriction_repeat1 = 177,
  aux_sym_description_repeat1 = 178,
  aux_sym__conjunction_repeat1 = 179,
  aux_sym__conjunction_repeat2 = 180,
  aux_sym_class_frame_repeat1 = 181,
  aux_sym_class_frame_repeat2 = 182,
  aux_sym_object_property_frame_repeat1 = 183,
  aux_sym_object_property_frame_repeat2 = 184,
  aux_sym_data_property_frame_repeat1 = 185,
  aux_sym_annotation_property_frame_repeat1 = 186,
  aux_sym_individual_frame_repeat1 = 187,
  aux_sym__description_annotated_list_repeat1 = 188,
  aux_sym__annotation_annotated_list_repeat1 = 189,
  aux_sym__object_property_expression_annotated_list_repeat1 = 190,
  aux_sym_object_property_characteristic_annotated_list_repeat1 = 191,
  aux_sym_data_range_annotated_list_repeat1 = 192,
  aux_sym__iri_annotated_list_repeat1 = 193,
  aux_sym_individual_annotated_list_repeat1 = 194,
  aux_sym_fact_annotated_list_repeat1 = 195,
  aux_sym_description_2list_repeat1 = 196,
  aux_sym_object_property_2list_repeat1 = 197,
  aux_sym_data_property_2list_repeat1 = 198,
  aux_sym_individual_2list_repeat1 = 199,
  aux_sym__literal_list_repeat1 = 200,
  alias_sym_disjoint_union_of_list = 201,
  alias_sym_disjoint_with_list = 202,
  alias_sym_domain_list = 203,
  alias_sym_equivalent_to_list = 204,
  alias_sym_sub_class_of_list = 205,
  alias_sym_sub_property_of_list = 206,
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
  [anon_sym_HasKey_COLON] = "has_key_list",
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
  [aux_sym_class_frame_repeat2] = "class_frame_repeat2",
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
  [aux_sym_class_frame_repeat2] = aux_sym_class_frame_repeat2,
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
    .named = true,
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
  [26] = {.index = 28, .length = 2},
  [27] = {.index = 30, .length = 2},
  [28] = {.index = 32, .length = 2},
  [29] = {.index = 34, .length = 3},
  [30] = {.index = 37, .length = 3},
  [31] = {.index = 40, .length = 2},
  [34] = {.index = 42, .length = 3},
  [35] = {.index = 45, .length = 3},
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
    [1] = anon_sym_HasKey_COLON,
  },
  [24] = {
    [1] = alias_sym_domain_list,
  },
  [25] = {
    [1] = alias_sym_sub_property_of_list,
  },
  [32] = {
    [2] = alias_sym_disjoint_union_of_list,
  },
  [33] = {
    [1] = anon_sym_HasKey_COLON,
    [2] = anon_sym_HasKey_COLON,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__annotations, 2,
    sym__annotations,
    anon_sym_HasKey_COLON,
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
  aux_sym_class_frame_repeat1, 2,
    aux_sym_class_frame_repeat1,
    anon_sym_HasKey_COLON,
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
  [8] = 5,
  [9] = 9,
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
  [28] = 26,
  [29] = 23,
  [30] = 25,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 25,
  [35] = 35,
  [36] = 23,
  [37] = 23,
  [38] = 38,
  [39] = 25,
  [40] = 40,
  [41] = 26,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 38,
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
  [57] = 38,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 38,
  [63] = 63,
  [64] = 64,
  [65] = 47,
  [66] = 25,
  [67] = 26,
  [68] = 23,
  [69] = 60,
  [70] = 20,
  [71] = 19,
  [72] = 22,
  [73] = 73,
  [74] = 47,
  [75] = 24,
  [76] = 76,
  [77] = 21,
  [78] = 63,
  [79] = 60,
  [80] = 63,
  [81] = 81,
  [82] = 82,
  [83] = 60,
  [84] = 47,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 63,
  [90] = 90,
  [91] = 91,
  [92] = 38,
  [93] = 93,
  [94] = 5,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 102,
  [104] = 104,
  [105] = 102,
  [106] = 102,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 102,
  [111] = 111,
  [112] = 112,
  [113] = 102,
  [114] = 102,
  [115] = 102,
  [116] = 102,
  [117] = 117,
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
  [131] = 47,
  [132] = 132,
  [133] = 133,
  [134] = 108,
  [135] = 135,
  [136] = 104,
  [137] = 137,
  [138] = 101,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 111,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 60,
  [148] = 107,
  [149] = 100,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 112,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 117,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 4,
  [169] = 112,
  [170] = 127,
  [171] = 171,
  [172] = 107,
  [173] = 173,
  [174] = 174,
  [175] = 104,
  [176] = 176,
  [177] = 174,
  [178] = 2,
  [179] = 179,
  [180] = 3,
  [181] = 181,
  [182] = 174,
  [183] = 111,
  [184] = 184,
  [185] = 174,
  [186] = 4,
  [187] = 3,
  [188] = 63,
  [189] = 2,
  [190] = 108,
  [191] = 191,
  [192] = 174,
  [193] = 193,
  [194] = 117,
  [195] = 174,
  [196] = 100,
  [197] = 126,
  [198] = 198,
  [199] = 125,
  [200] = 120,
  [201] = 101,
  [202] = 202,
  [203] = 127,
  [204] = 204,
  [205] = 125,
  [206] = 126,
  [207] = 207,
  [208] = 100,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 117,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 104,
  [220] = 220,
  [221] = 112,
  [222] = 222,
  [223] = 223,
  [224] = 107,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 111,
  [229] = 108,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 101,
  [236] = 133,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 141,
  [241] = 139,
  [242] = 137,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 135,
  [248] = 248,
  [249] = 126,
  [250] = 19,
  [251] = 20,
  [252] = 252,
  [253] = 253,
  [254] = 4,
  [255] = 3,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 2,
  [260] = 137,
  [261] = 139,
  [262] = 133,
  [263] = 263,
  [264] = 141,
  [265] = 265,
  [266] = 127,
  [267] = 267,
  [268] = 125,
  [269] = 135,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 98,
  [274] = 274,
  [275] = 275,
  [276] = 22,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 99,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 287,
  [289] = 289,
  [290] = 290,
  [291] = 97,
  [292] = 292,
  [293] = 287,
  [294] = 294,
  [295] = 295,
  [296] = 287,
  [297] = 287,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 21,
  [302] = 302,
  [303] = 303,
  [304] = 24,
  [305] = 137,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 141,
  [310] = 139,
  [311] = 311,
  [312] = 95,
  [313] = 313,
  [314] = 314,
  [315] = 93,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 133,
  [320] = 320,
  [321] = 287,
  [322] = 135,
  [323] = 23,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 26,
  [331] = 331,
  [332] = 329,
  [333] = 333,
  [334] = 334,
  [335] = 25,
  [336] = 336,
  [337] = 337,
  [338] = 329,
  [339] = 339,
  [340] = 340,
  [341] = 21,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 329,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 20,
  [353] = 19,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 20,
  [358] = 19,
  [359] = 359,
  [360] = 24,
  [361] = 361,
  [362] = 117,
  [363] = 363,
  [364] = 363,
  [365] = 365,
  [366] = 366,
  [367] = 100,
  [368] = 368,
  [369] = 104,
  [370] = 361,
  [371] = 108,
  [372] = 101,
  [373] = 21,
  [374] = 22,
  [375] = 111,
  [376] = 376,
  [377] = 361,
  [378] = 378,
  [379] = 379,
  [380] = 112,
  [381] = 381,
  [382] = 363,
  [383] = 107,
  [384] = 384,
  [385] = 381,
  [386] = 386,
  [387] = 384,
  [388] = 363,
  [389] = 24,
  [390] = 22,
  [391] = 391,
  [392] = 21,
  [393] = 361,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 394,
  [401] = 401,
  [402] = 402,
  [403] = 126,
  [404] = 394,
  [405] = 405,
  [406] = 394,
  [407] = 21,
  [408] = 408,
  [409] = 394,
  [410] = 410,
  [411] = 394,
  [412] = 127,
  [413] = 413,
  [414] = 125,
  [415] = 415,
  [416] = 395,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 419,
  [422] = 422,
  [423] = 252,
  [424] = 419,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 19,
  [429] = 429,
  [430] = 267,
  [431] = 431,
  [432] = 432,
  [433] = 38,
  [434] = 434,
  [435] = 419,
  [436] = 20,
  [437] = 19,
  [438] = 19,
  [439] = 439,
  [440] = 256,
  [441] = 20,
  [442] = 419,
  [443] = 20,
  [444] = 419,
  [445] = 22,
  [446] = 21,
  [447] = 24,
  [448] = 21,
  [449] = 20,
  [450] = 22,
  [451] = 24,
  [452] = 21,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 24,
  [457] = 22,
  [458] = 19,
  [459] = 459,
  [460] = 21,
  [461] = 461,
  [462] = 462,
  [463] = 461,
  [464] = 9,
  [465] = 24,
  [466] = 22,
  [467] = 21,
  [468] = 468,
  [469] = 461,
  [470] = 461,
  [471] = 471,
  [472] = 472,
  [473] = 461,
  [474] = 474,
  [475] = 461,
  [476] = 21,
  [477] = 21,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 98,
  [482] = 93,
  [483] = 478,
  [484] = 478,
  [485] = 485,
  [486] = 60,
  [487] = 97,
  [488] = 488,
  [489] = 95,
  [490] = 99,
  [491] = 478,
  [492] = 478,
  [493] = 493,
  [494] = 478,
  [495] = 478,
  [496] = 47,
  [497] = 478,
  [498] = 21,
  [499] = 31,
  [500] = 17,
  [501] = 501,
  [502] = 15,
  [503] = 503,
  [504] = 503,
  [505] = 503,
  [506] = 4,
  [507] = 501,
  [508] = 508,
  [509] = 509,
  [510] = 12,
  [511] = 3,
  [512] = 512,
  [513] = 513,
  [514] = 501,
  [515] = 509,
  [516] = 11,
  [517] = 517,
  [518] = 16,
  [519] = 509,
  [520] = 501,
  [521] = 501,
  [522] = 501,
  [523] = 2,
  [524] = 10,
  [525] = 13,
  [526] = 509,
  [527] = 509,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 14,
  [533] = 501,
  [534] = 33,
  [535] = 503,
  [536] = 509,
  [537] = 501,
  [538] = 503,
  [539] = 18,
  [540] = 63,
  [541] = 503,
  [542] = 35,
  [543] = 501,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 2,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 550,
  [552] = 545,
  [553] = 549,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 549,
  [560] = 550,
  [561] = 549,
  [562] = 562,
  [563] = 545,
  [564] = 549,
  [565] = 545,
  [566] = 566,
  [567] = 545,
  [568] = 40,
  [569] = 569,
  [570] = 550,
  [571] = 571,
  [572] = 549,
  [573] = 549,
  [574] = 574,
  [575] = 574,
  [576] = 550,
  [577] = 577,
  [578] = 549,
  [579] = 579,
  [580] = 9,
  [581] = 549,
  [582] = 550,
  [583] = 4,
  [584] = 3,
  [585] = 545,
  [586] = 586,
  [587] = 98,
  [588] = 99,
  [589] = 97,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 95,
  [595] = 586,
  [596] = 590,
  [597] = 597,
  [598] = 97,
  [599] = 586,
  [600] = 590,
  [601] = 586,
  [602] = 602,
  [603] = 590,
  [604] = 99,
  [605] = 605,
  [606] = 606,
  [607] = 590,
  [608] = 98,
  [609] = 609,
  [610] = 586,
  [611] = 586,
  [612] = 590,
  [613] = 590,
  [614] = 93,
  [615] = 93,
  [616] = 95,
  [617] = 586,
  [618] = 618,
  [619] = 31,
  [620] = 10,
  [621] = 618,
  [622] = 33,
  [623] = 623,
  [624] = 618,
  [625] = 623,
  [626] = 618,
  [627] = 4,
  [628] = 623,
  [629] = 18,
  [630] = 623,
  [631] = 631,
  [632] = 618,
  [633] = 623,
  [634] = 15,
  [635] = 11,
  [636] = 3,
  [637] = 618,
  [638] = 2,
  [639] = 623,
  [640] = 12,
  [641] = 17,
  [642] = 618,
  [643] = 618,
  [644] = 618,
  [645] = 623,
  [646] = 646,
  [647] = 623,
  [648] = 623,
  [649] = 13,
  [650] = 14,
  [651] = 35,
  [652] = 16,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 9,
  [657] = 657,
  [658] = 9,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 661,
  [663] = 663,
  [664] = 659,
  [665] = 661,
  [666] = 666,
  [667] = 667,
  [668] = 659,
  [669] = 661,
  [670] = 661,
  [671] = 661,
  [672] = 672,
  [673] = 40,
  [674] = 9,
  [675] = 675,
  [676] = 659,
  [677] = 95,
  [678] = 97,
  [679] = 679,
  [680] = 97,
  [681] = 681,
  [682] = 99,
  [683] = 683,
  [684] = 9,
  [685] = 95,
  [686] = 95,
  [687] = 687,
  [688] = 99,
  [689] = 98,
  [690] = 93,
  [691] = 97,
  [692] = 99,
  [693] = 98,
  [694] = 98,
  [695] = 93,
  [696] = 93,
  [697] = 14,
  [698] = 100,
  [699] = 699,
  [700] = 111,
  [701] = 701,
  [702] = 702,
  [703] = 95,
  [704] = 704,
  [705] = 93,
  [706] = 98,
  [707] = 99,
  [708] = 97,
  [709] = 104,
  [710] = 704,
  [711] = 101,
  [712] = 704,
  [713] = 704,
  [714] = 107,
  [715] = 10,
  [716] = 704,
  [717] = 704,
  [718] = 33,
  [719] = 18,
  [720] = 15,
  [721] = 11,
  [722] = 108,
  [723] = 4,
  [724] = 16,
  [725] = 35,
  [726] = 13,
  [727] = 17,
  [728] = 12,
  [729] = 10,
  [730] = 704,
  [731] = 33,
  [732] = 18,
  [733] = 117,
  [734] = 15,
  [735] = 11,
  [736] = 31,
  [737] = 16,
  [738] = 14,
  [739] = 35,
  [740] = 17,
  [741] = 16,
  [742] = 13,
  [743] = 112,
  [744] = 31,
  [745] = 2,
  [746] = 11,
  [747] = 3,
  [748] = 3,
  [749] = 15,
  [750] = 2,
  [751] = 18,
  [752] = 3,
  [753] = 4,
  [754] = 31,
  [755] = 12,
  [756] = 17,
  [757] = 33,
  [758] = 704,
  [759] = 2,
  [760] = 704,
  [761] = 13,
  [762] = 4,
  [763] = 35,
  [764] = 14,
  [765] = 12,
  [766] = 10,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 769,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 126,
  [775] = 775,
  [776] = 10,
  [777] = 125,
  [778] = 768,
  [779] = 769,
  [780] = 775,
  [781] = 767,
  [782] = 768,
  [783] = 767,
  [784] = 771,
  [785] = 33,
  [786] = 768,
  [787] = 18,
  [788] = 15,
  [789] = 769,
  [790] = 775,
  [791] = 768,
  [792] = 40,
  [793] = 769,
  [794] = 11,
  [795] = 31,
  [796] = 775,
  [797] = 16,
  [798] = 767,
  [799] = 14,
  [800] = 35,
  [801] = 13,
  [802] = 769,
  [803] = 775,
  [804] = 127,
  [805] = 771,
  [806] = 17,
  [807] = 768,
  [808] = 769,
  [809] = 12,
  [810] = 769,
  [811] = 775,
  [812] = 775,
  [813] = 813,
  [814] = 767,
  [815] = 4,
  [816] = 816,
  [817] = 3,
  [818] = 40,
  [819] = 771,
  [820] = 2,
  [821] = 767,
  [822] = 771,
  [823] = 767,
  [824] = 775,
  [825] = 40,
  [826] = 771,
  [827] = 769,
  [828] = 775,
  [829] = 768,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 40,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 439,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 845,
  [850] = 848,
  [851] = 848,
  [852] = 848,
  [853] = 844,
  [854] = 854,
  [855] = 855,
  [856] = 855,
  [857] = 857,
  [858] = 858,
  [859] = 855,
  [860] = 847,
  [861] = 845,
  [862] = 847,
  [863] = 845,
  [864] = 847,
  [865] = 865,
  [866] = 844,
  [867] = 867,
  [868] = 848,
  [869] = 848,
  [870] = 847,
  [871] = 871,
  [872] = 845,
  [873] = 873,
  [874] = 845,
  [875] = 845,
  [876] = 845,
  [877] = 855,
  [878] = 847,
  [879] = 845,
  [880] = 844,
  [881] = 855,
  [882] = 882,
  [883] = 848,
  [884] = 855,
  [885] = 845,
  [886] = 844,
  [887] = 887,
  [888] = 847,
  [889] = 845,
  [890] = 855,
  [891] = 844,
  [892] = 844,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 893,
  [898] = 894,
  [899] = 899,
  [900] = 894,
  [901] = 893,
  [902] = 899,
  [903] = 894,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 899,
  [908] = 893,
  [909] = 909,
  [910] = 899,
  [911] = 899,
  [912] = 894,
  [913] = 913,
  [914] = 899,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 899,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 899,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 926,
  [927] = 927,
  [928] = 893,
  [929] = 929,
  [930] = 894,
  [931] = 931,
  [932] = 899,
  [933] = 893,
  [934] = 893,
  [935] = 893,
  [936] = 906,
  [937] = 899,
  [938] = 899,
  [939] = 894,
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
  [8] = {.lex_state = 508},
  [9] = {.lex_state = 499},
  [10] = {.lex_state = 499},
  [11] = {.lex_state = 499},
  [12] = {.lex_state = 499},
  [13] = {.lex_state = 499},
  [14] = {.lex_state = 499},
  [15] = {.lex_state = 499},
  [16] = {.lex_state = 499},
  [17] = {.lex_state = 499},
  [18] = {.lex_state = 499},
  [19] = {.lex_state = 510},
  [20] = {.lex_state = 510},
  [21] = {.lex_state = 510},
  [22] = {.lex_state = 510},
  [23] = {.lex_state = 501},
  [24] = {.lex_state = 510},
  [25] = {.lex_state = 501},
  [26] = {.lex_state = 501},
  [27] = {.lex_state = 509},
  [28] = {.lex_state = 502},
  [29] = {.lex_state = 502},
  [30] = {.lex_state = 502},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 503},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 503},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 503},
  [37] = {.lex_state = 504},
  [38] = {.lex_state = 500},
  [39] = {.lex_state = 504},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 504},
  [42] = {.lex_state = 512},
  [43] = {.lex_state = 512},
  [44] = {.lex_state = 499},
  [45] = {.lex_state = 499},
  [46] = {.lex_state = 506},
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
  [57] = {.lex_state = 507},
  [58] = {.lex_state = 499},
  [59] = {.lex_state = 499},
  [60] = {.lex_state = 499},
  [61] = {.lex_state = 499},
  [62] = {.lex_state = 508},
  [63] = {.lex_state = 499},
  [64] = {.lex_state = 499},
  [65] = {.lex_state = 499},
  [66] = {.lex_state = 505},
  [67] = {.lex_state = 505},
  [68] = {.lex_state = 505},
  [69] = {.lex_state = 499},
  [70] = {.lex_state = 511},
  [71] = {.lex_state = 511},
  [72] = {.lex_state = 511},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 499},
  [75] = {.lex_state = 511},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 511},
  [78] = {.lex_state = 499},
  [79] = {.lex_state = 499},
  [80] = {.lex_state = 499},
  [81] = {.lex_state = 513},
  [82] = {.lex_state = 513},
  [83] = {.lex_state = 499},
  [84] = {.lex_state = 499},
  [85] = {.lex_state = 513},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 499},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 509},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 499},
  [101] = {.lex_state = 499},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 499},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 499},
  [108] = {.lex_state = 499},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 499},
  [112] = {.lex_state = 499},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 499},
  [118] = {.lex_state = 499},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 499},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 499},
  [126] = {.lex_state = 499},
  [127] = {.lex_state = 499},
  [128] = {.lex_state = 499},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 499},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 499},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 499},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 499},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 499},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 499},
  [147] = {.lex_state = 499},
  [148] = {.lex_state = 499},
  [149] = {.lex_state = 499},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 499},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 499},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 499},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 499},
  [166] = {.lex_state = 499},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 513},
  [169] = {.lex_state = 499},
  [170] = {.lex_state = 499},
  [171] = {.lex_state = 499},
  [172] = {.lex_state = 499},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 499},
  [176] = {.lex_state = 513},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 513},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 513},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 499},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 499},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 499},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 499},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 499},
  [197] = {.lex_state = 499},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 499},
  [200] = {.lex_state = 513},
  [201] = {.lex_state = 499},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 499},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 499},
  [206] = {.lex_state = 499},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 499},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 499},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 499},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 499},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 499},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 499},
  [229] = {.lex_state = 499},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 499},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 499},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 512},
  [255] = {.lex_state = 512},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 512},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 499},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 499},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 13},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 15},
  [288] = {.lex_state = 15},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 15},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 15},
  [297] = {.lex_state = 15},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 13},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 13},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 13},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 13},
  [318] = {.lex_state = 13},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 13},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 13},
  [330] = {.lex_state = 3},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 13},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 3},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 13},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 13},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 17},
  [353] = {.lex_state = 17},
  [354] = {.lex_state = 9},
  [355] = {.lex_state = 10},
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 8},
  [361] = {.lex_state = 10},
  [362] = {.lex_state = 499},
  [363] = {.lex_state = 10},
  [364] = {.lex_state = 10},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 499},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 499},
  [370] = {.lex_state = 10},
  [371] = {.lex_state = 499},
  [372] = {.lex_state = 499},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 499},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 10},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 499},
  [381] = {.lex_state = 10},
  [382] = {.lex_state = 10},
  [383] = {.lex_state = 499},
  [384] = {.lex_state = 10},
  [385] = {.lex_state = 10},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 10},
  [388] = {.lex_state = 10},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 10},
  [392] = {.lex_state = 17},
  [393] = {.lex_state = 10},
  [394] = {.lex_state = 10},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 10},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 499},
  [404] = {.lex_state = 10},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 10},
  [407] = {.lex_state = 8},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 10},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 10},
  [412] = {.lex_state = 499},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 499},
  [415] = {.lex_state = 16},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 10},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 10},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 10},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 19},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 4},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 10},
  [436] = {.lex_state = 18},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 18},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 20},
  [442] = {.lex_state = 10},
  [443] = {.lex_state = 19},
  [444] = {.lex_state = 10},
  [445] = {.lex_state = 23},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 23},
  [448] = {.lex_state = 19},
  [449] = {.lex_state = 21},
  [450] = {.lex_state = 24},
  [451] = {.lex_state = 24},
  [452] = {.lex_state = 18},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 64},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 22},
  [457] = {.lex_state = 22},
  [458] = {.lex_state = 21},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 23},
  [461] = {.lex_state = 11},
  [462] = {.lex_state = 62},
  [463] = {.lex_state = 11},
  [464] = {.lex_state = 9},
  [465] = {.lex_state = 25},
  [466] = {.lex_state = 25},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 11},
  [470] = {.lex_state = 11},
  [471] = {.lex_state = 63},
  [472] = {.lex_state = 62},
  [473] = {.lex_state = 11},
  [474] = {.lex_state = 64},
  [475] = {.lex_state = 11},
  [476] = {.lex_state = 24},
  [477] = {.lex_state = 22},
  [478] = {.lex_state = 16},
  [479] = {.lex_state = 63},
  [480] = {.lex_state = 499},
  [481] = {.lex_state = 9},
  [482] = {.lex_state = 9},
  [483] = {.lex_state = 16},
  [484] = {.lex_state = 16},
  [485] = {.lex_state = 16},
  [486] = {.lex_state = 499},
  [487] = {.lex_state = 9},
  [488] = {.lex_state = 62},
  [489] = {.lex_state = 9},
  [490] = {.lex_state = 9},
  [491] = {.lex_state = 16},
  [492] = {.lex_state = 16},
  [493] = {.lex_state = 63},
  [494] = {.lex_state = 16},
  [495] = {.lex_state = 16},
  [496] = {.lex_state = 499},
  [497] = {.lex_state = 16},
  [498] = {.lex_state = 25},
  [499] = {.lex_state = 9},
  [500] = {.lex_state = 9},
  [501] = {.lex_state = 65},
  [502] = {.lex_state = 9},
  [503] = {.lex_state = 10},
  [504] = {.lex_state = 10},
  [505] = {.lex_state = 10},
  [506] = {.lex_state = 9},
  [507] = {.lex_state = 65},
  [508] = {.lex_state = 63},
  [509] = {.lex_state = 10},
  [510] = {.lex_state = 9},
  [511] = {.lex_state = 9},
  [512] = {.lex_state = 27},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 65},
  [515] = {.lex_state = 10},
  [516] = {.lex_state = 9},
  [517] = {.lex_state = 63},
  [518] = {.lex_state = 9},
  [519] = {.lex_state = 10},
  [520] = {.lex_state = 65},
  [521] = {.lex_state = 65},
  [522] = {.lex_state = 65},
  [523] = {.lex_state = 9},
  [524] = {.lex_state = 9},
  [525] = {.lex_state = 9},
  [526] = {.lex_state = 10},
  [527] = {.lex_state = 10},
  [528] = {.lex_state = 27},
  [529] = {.lex_state = 26},
  [530] = {.lex_state = 26},
  [531] = {.lex_state = 11},
  [532] = {.lex_state = 9},
  [533] = {.lex_state = 65},
  [534] = {.lex_state = 9},
  [535] = {.lex_state = 10},
  [536] = {.lex_state = 10},
  [537] = {.lex_state = 65},
  [538] = {.lex_state = 10},
  [539] = {.lex_state = 9},
  [540] = {.lex_state = 499},
  [541] = {.lex_state = 10},
  [542] = {.lex_state = 9},
  [543] = {.lex_state = 65},
  [544] = {.lex_state = 510},
  [545] = {.lex_state = 11},
  [546] = {.lex_state = 65},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 65},
  [549] = {.lex_state = 65},
  [550] = {.lex_state = 11},
  [551] = {.lex_state = 11},
  [552] = {.lex_state = 11},
  [553] = {.lex_state = 65},
  [554] = {.lex_state = 65},
  [555] = {.lex_state = 65},
  [556] = {.lex_state = 26},
  [557] = {.lex_state = 510},
  [558] = {.lex_state = 65},
  [559] = {.lex_state = 65},
  [560] = {.lex_state = 11},
  [561] = {.lex_state = 65},
  [562] = {.lex_state = 26},
  [563] = {.lex_state = 11},
  [564] = {.lex_state = 65},
  [565] = {.lex_state = 11},
  [566] = {.lex_state = 26},
  [567] = {.lex_state = 11},
  [568] = {.lex_state = 9},
  [569] = {.lex_state = 26},
  [570] = {.lex_state = 11},
  [571] = {.lex_state = 11},
  [572] = {.lex_state = 65},
  [573] = {.lex_state = 65},
  [574] = {.lex_state = 26},
  [575] = {.lex_state = 26},
  [576] = {.lex_state = 11},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 65},
  [579] = {.lex_state = 26},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 65},
  [582] = {.lex_state = 11},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 1},
  [585] = {.lex_state = 11},
  [586] = {.lex_state = 510},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 510},
  [591] = {.lex_state = 11},
  [592] = {.lex_state = 11},
  [593] = {.lex_state = 28},
  [594] = {.lex_state = 10},
  [595] = {.lex_state = 510},
  [596] = {.lex_state = 510},
  [597] = {.lex_state = 11},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 510},
  [600] = {.lex_state = 510},
  [601] = {.lex_state = 510},
  [602] = {.lex_state = 11},
  [603] = {.lex_state = 510},
  [604] = {.lex_state = 10},
  [605] = {.lex_state = 11},
  [606] = {.lex_state = 65},
  [607] = {.lex_state = 510},
  [608] = {.lex_state = 10},
  [609] = {.lex_state = 11},
  [610] = {.lex_state = 510},
  [611] = {.lex_state = 510},
  [612] = {.lex_state = 510},
  [613] = {.lex_state = 510},
  [614] = {.lex_state = 10},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 510},
  [618] = {.lex_state = 28},
  [619] = {.lex_state = 10},
  [620] = {.lex_state = 10},
  [621] = {.lex_state = 28},
  [622] = {.lex_state = 10},
  [623] = {.lex_state = 28},
  [624] = {.lex_state = 28},
  [625] = {.lex_state = 28},
  [626] = {.lex_state = 28},
  [627] = {.lex_state = 10},
  [628] = {.lex_state = 28},
  [629] = {.lex_state = 10},
  [630] = {.lex_state = 28},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 28},
  [633] = {.lex_state = 28},
  [634] = {.lex_state = 10},
  [635] = {.lex_state = 10},
  [636] = {.lex_state = 10},
  [637] = {.lex_state = 28},
  [638] = {.lex_state = 10},
  [639] = {.lex_state = 28},
  [640] = {.lex_state = 10},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 28},
  [643] = {.lex_state = 28},
  [644] = {.lex_state = 28},
  [645] = {.lex_state = 28},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 28},
  [648] = {.lex_state = 28},
  [649] = {.lex_state = 10},
  [650] = {.lex_state = 10},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 28},
  [654] = {.lex_state = 28},
  [655] = {.lex_state = 28},
  [656] = {.lex_state = 26},
  [657] = {.lex_state = 28},
  [658] = {.lex_state = 27},
  [659] = {.lex_state = 28},
  [660] = {.lex_state = 28},
  [661] = {.lex_state = 499},
  [662] = {.lex_state = 499},
  [663] = {.lex_state = 28},
  [664] = {.lex_state = 28},
  [665] = {.lex_state = 499},
  [666] = {.lex_state = 28},
  [667] = {.lex_state = 28},
  [668] = {.lex_state = 28},
  [669] = {.lex_state = 499},
  [670] = {.lex_state = 499},
  [671] = {.lex_state = 499},
  [672] = {.lex_state = 28},
  [673] = {.lex_state = 10},
  [674] = {.lex_state = 11},
  [675] = {.lex_state = 28},
  [676] = {.lex_state = 28},
  [677] = {.lex_state = 11},
  [678] = {.lex_state = 27},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 11},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 27},
  [683] = {.lex_state = 510},
  [684] = {.lex_state = 28},
  [685] = {.lex_state = 26},
  [686] = {.lex_state = 27},
  [687] = {.lex_state = 510},
  [688] = {.lex_state = 11},
  [689] = {.lex_state = 11},
  [690] = {.lex_state = 27},
  [691] = {.lex_state = 26},
  [692] = {.lex_state = 26},
  [693] = {.lex_state = 26},
  [694] = {.lex_state = 27},
  [695] = {.lex_state = 11},
  [696] = {.lex_state = 26},
  [697] = {.lex_state = 11},
  [698] = {.lex_state = 499},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 499},
  [701] = {.lex_state = 499},
  [702] = {.lex_state = 499},
  [703] = {.lex_state = 28},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 28},
  [706] = {.lex_state = 28},
  [707] = {.lex_state = 28},
  [708] = {.lex_state = 28},
  [709] = {.lex_state = 499},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 499},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 499},
  [715] = {.lex_state = 11},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 11},
  [719] = {.lex_state = 11},
  [720] = {.lex_state = 11},
  [721] = {.lex_state = 11},
  [722] = {.lex_state = 499},
  [723] = {.lex_state = 27},
  [724] = {.lex_state = 11},
  [725] = {.lex_state = 11},
  [726] = {.lex_state = 11},
  [727] = {.lex_state = 11},
  [728] = {.lex_state = 11},
  [729] = {.lex_state = 26},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 26},
  [732] = {.lex_state = 26},
  [733] = {.lex_state = 499},
  [734] = {.lex_state = 26},
  [735] = {.lex_state = 26},
  [736] = {.lex_state = 26},
  [737] = {.lex_state = 26},
  [738] = {.lex_state = 26},
  [739] = {.lex_state = 26},
  [740] = {.lex_state = 26},
  [741] = {.lex_state = 27},
  [742] = {.lex_state = 26},
  [743] = {.lex_state = 499},
  [744] = {.lex_state = 27},
  [745] = {.lex_state = 27},
  [746] = {.lex_state = 27},
  [747] = {.lex_state = 27},
  [748] = {.lex_state = 11},
  [749] = {.lex_state = 27},
  [750] = {.lex_state = 26},
  [751] = {.lex_state = 27},
  [752] = {.lex_state = 26},
  [753] = {.lex_state = 26},
  [754] = {.lex_state = 11},
  [755] = {.lex_state = 27},
  [756] = {.lex_state = 27},
  [757] = {.lex_state = 27},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 11},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 27},
  [762] = {.lex_state = 11},
  [763] = {.lex_state = 27},
  [764] = {.lex_state = 27},
  [765] = {.lex_state = 26},
  [766] = {.lex_state = 27},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 499},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 499},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 28},
  [777] = {.lex_state = 499},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 28},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 28},
  [788] = {.lex_state = 28},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 27},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 28},
  [795] = {.lex_state = 28},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 28},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 28},
  [800] = {.lex_state = 28},
  [801] = {.lex_state = 28},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 499},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 28},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 28},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 662},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 28},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 28},
  [818] = {.lex_state = 11},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 28},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 26},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 28},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 510},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 662},
  [844] = {.lex_state = 510},
  [845] = {.lex_state = 495},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 510},
  [848] = {.lex_state = 510},
  [849] = {.lex_state = 495},
  [850] = {.lex_state = 510},
  [851] = {.lex_state = 510},
  [852] = {.lex_state = 510},
  [853] = {.lex_state = 510},
  [854] = {.lex_state = 499},
  [855] = {.lex_state = 510},
  [856] = {.lex_state = 510},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 500},
  [859] = {.lex_state = 510},
  [860] = {.lex_state = 510},
  [861] = {.lex_state = 495},
  [862] = {.lex_state = 510},
  [863] = {.lex_state = 495},
  [864] = {.lex_state = 510},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 510},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 510},
  [869] = {.lex_state = 510},
  [870] = {.lex_state = 510},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 495},
  [873] = {.lex_state = 499},
  [874] = {.lex_state = 495},
  [875] = {.lex_state = 495},
  [876] = {.lex_state = 495},
  [877] = {.lex_state = 510},
  [878] = {.lex_state = 510},
  [879] = {.lex_state = 495},
  [880] = {.lex_state = 510},
  [881] = {.lex_state = 510},
  [882] = {.lex_state = 499},
  [883] = {.lex_state = 510},
  [884] = {.lex_state = 510},
  [885] = {.lex_state = 495},
  [886] = {.lex_state = 510},
  [887] = {.lex_state = 662},
  [888] = {.lex_state = 510},
  [889] = {.lex_state = 495},
  [890] = {.lex_state = 510},
  [891] = {.lex_state = 510},
  [892] = {.lex_state = 510},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 496},
  [895] = {.lex_state = 66},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 496},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 496},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 496},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 0},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 0},
  [912] = {.lex_state = 496},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 663},
  [921] = {.lex_state = 499},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 663},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 496},
  [931] = {.lex_state = 499},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 0},
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
    [sym_source_file] = STATE(941),
    [sym_prefix_declaration] = STATE(699),
    [sym_ontology] = STATE(940),
    [aux_sym_source_file_repeat1] = STATE(699),
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 6,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(65), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 6,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(74), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 6,
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
  [387] = 14,
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
    ACTIONS(37), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
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
    STATE(54), 6,
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
  [460] = 3,
    ACTIONS(41), 1,
      sym__language_tag,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(39), 42,
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
  [872] = 1,
    ACTIONS(61), 41,
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
  [916] = 8,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_e,
    ACTIONS(73), 1,
      anon_sym_E,
    STATE(852), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(69), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(63), 31,
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
  [974] = 8,
    ACTIONS(71), 1,
      anon_sym_e,
    ACTIONS(73), 1,
      anon_sym_E,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(65), 2,
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
  [1081] = 7,
    ACTIONS(71), 1,
      anon_sym_e,
    ACTIONS(73), 1,
      anon_sym_E,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(90), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(88), 31,
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
  [1136] = 4,
    ACTIONS(96), 2,
      sym__non_zero,
      sym__zero,
    STATE(25), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(94), 30,
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
  [1185] = 7,
    ACTIONS(71), 1,
      anon_sym_e,
    ACTIONS(73), 1,
      anon_sym_E,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(100), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(98), 31,
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
  [1240] = 4,
    ACTIONS(106), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 30,
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
  [1289] = 4,
    ACTIONS(112), 2,
      sym__non_zero,
      sym__zero,
    STATE(26), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(110), 30,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(131), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 6,
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
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(110), 28,
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
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(94), 28,
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
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 28,
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
    STATE(32), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(110), 27,
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
    ACTIONS(129), 37,
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
  [1673] = 4,
    ACTIONS(131), 2,
      sym__non_zero,
      sym__zero,
    STATE(32), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 27,
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
  [1719] = 1,
    ACTIONS(133), 37,
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
  [1759] = 4,
    ACTIONS(135), 2,
      sym__non_zero,
      sym__zero,
    STATE(34), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(94), 27,
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
  [1805] = 4,
    ACTIONS(137), 2,
      sym__non_zero,
      sym__zero,
    STATE(39), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(94), 26,
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
  [1850] = 2,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(141), 30,
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
  [1891] = 4,
    ACTIONS(143), 2,
      sym__non_zero,
      sym__zero,
    STATE(41), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 26,
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
  [1936] = 1,
    ACTIONS(145), 36,
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
  [1975] = 4,
    ACTIONS(147), 2,
      sym__non_zero,
      sym__zero,
    STATE(41), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(110), 26,
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
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_Import_COLON,
    ACTIONS(154), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(156), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(158), 1,
      anon_sym_Class_COLON,
    ACTIONS(160), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(162), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(164), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(166), 1,
      anon_sym_Individual_COLON,
    ACTIONS(168), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(170), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(172), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(91), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(122), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(90), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(210), 9,
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
    ACTIONS(152), 1,
      anon_sym_Import_COLON,
    ACTIONS(154), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(156), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(158), 1,
      anon_sym_Class_COLON,
    ACTIONS(160), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(162), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(164), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(166), 1,
      anon_sym_Individual_COLON,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
    ACTIONS(168), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(170), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(172), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(87), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(119), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(42), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(230), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [2168] = 1,
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
  [2205] = 2,
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
  [2244] = 2,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(141), 28,
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
  [2283] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(191), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(195), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(188), 25,
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
  [2329] = 1,
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
  [2365] = 1,
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
  [2401] = 1,
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
  [2437] = 1,
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
  [2473] = 1,
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
  [2509] = 1,
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
  [2545] = 1,
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
  [2581] = 1,
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
  [2617] = 1,
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
  [2653] = 2,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(141), 27,
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
  [2691] = 1,
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
  [2727] = 1,
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
  [2763] = 6,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(222), 1,
      anon_sym_that,
    ACTIONS(191), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(195), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 25,
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
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(141), 26,
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
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(191), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(195), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 25,
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
  [2960] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(228), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(230), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(188), 23,
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
  [3004] = 4,
    ACTIONS(232), 2,
      sym__non_zero,
      sym__zero,
    STATE(67), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 21,
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
  [3044] = 4,
    ACTIONS(234), 2,
      sym__non_zero,
      sym__zero,
    STATE(67), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(110), 21,
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
  [3084] = 4,
    ACTIONS(237), 2,
      sym__non_zero,
      sym__zero,
    STATE(66), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(94), 21,
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
  [3124] = 6,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(239), 1,
      anon_sym_that,
    ACTIONS(228), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(230), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 23,
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
  [3168] = 9,
    ACTIONS(71), 1,
      anon_sym_e,
    ACTIONS(73), 1,
      anon_sym_E,
    ACTIONS(79), 1,
      anon_sym_f,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_F,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(241), 2,
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
  [3218] = 9,
    ACTIONS(69), 1,
      anon_sym_f,
    ACTIONS(71), 1,
      anon_sym_e,
    ACTIONS(73), 1,
      anon_sym_E,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(249), 1,
      anon_sym_F,
    STATE(852), 1,
      sym__exponent,
    ACTIONS(241), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(63), 21,
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
  [3268] = 8,
    ACTIONS(71), 1,
      anon_sym_e,
    ACTIONS(73), 1,
      anon_sym_E,
    ACTIONS(90), 1,
      anon_sym_f,
    ACTIONS(251), 1,
      anon_sym_F,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(241), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(88), 21,
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
  [3315] = 1,
    ACTIONS(253), 30,
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
  [3348] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(255), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(257), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(188), 22,
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
  [3391] = 8,
    ACTIONS(71), 1,
      anon_sym_e,
    ACTIONS(73), 1,
      anon_sym_E,
    ACTIONS(100), 1,
      anon_sym_f,
    ACTIONS(259), 1,
      anon_sym_F,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(241), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(98), 21,
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
  [3438] = 1,
    ACTIONS(261), 30,
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
  [3471] = 4,
    ACTIONS(86), 2,
      anon_sym_F,
      anon_sym_E,
    ACTIONS(263), 2,
      sym__non_zero,
      sym__zero,
    STATE(77), 2,
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
  [3510] = 5,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(228), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(230), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 23,
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
  [3551] = 6,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
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
    ACTIONS(220), 22,
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
  [3594] = 5,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(255), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(257), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 22,
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
  [3634] = 8,
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
    STATE(82), 1,
      aux_sym_class_frame_repeat1,
    STATE(176), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
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
  [3680] = 8,
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
    STATE(82), 1,
      aux_sym_class_frame_repeat1,
    STATE(176), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
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
  [3726] = 6,
    ACTIONS(193), 1,
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
    ACTIONS(220), 21,
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
  [3768] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
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
    ACTIONS(188), 21,
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
  [3810] = 8,
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
    STATE(82), 1,
      aux_sym_class_frame_repeat1,
    STATE(176), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
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
  [3856] = 15,
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
    STATE(124), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(386), 2,
      sym_import,
      aux_sym_ontology_repeat1,
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
  [3915] = 15,
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
    STATE(386), 2,
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
  [3974] = 16,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
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
    STATE(841), 1,
      sym_individual,
    STATE(897), 1,
      sym__lexial_value,
    STATE(919), 1,
      sym__literal_list,
    STATE(929), 1,
      sym__individual_list,
    ACTIONS(337), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
      aux_sym__digits,
      sym__digit,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
    STATE(839), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [4035] = 5,
    ACTIONS(193), 1,
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
    ACTIONS(220), 21,
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
  [4074] = 15,
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
    ACTIONS(347), 1,
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
    STATE(129), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(225), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4133] = 15,
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
    ACTIONS(349), 1,
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
    STATE(130), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    STATE(386), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    STATE(246), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [4192] = 2,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(141), 21,
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
  [4224] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(99), 1,
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
  [4258] = 14,
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
    ACTIONS(355), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
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
    STATE(496), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(54), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [4314] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(357), 25,
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
  [4348] = 17,
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
    ACTIONS(355), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(804), 1,
      sym__conjunction,
    STATE(896), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(926), 1,
      sym_data_range,
    STATE(121), 3,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
    STATE(709), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(480), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4410] = 3,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(124), 25,
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
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(97), 1,
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
  [4478] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(97), 1,
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
  [4512] = 3,
    ACTIONS(364), 1,
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
  [4545] = 3,
    ACTIONS(369), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 24,
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
  [4578] = 12,
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
    STATE(933), 1,
      sym__lexial_value,
    ACTIONS(375), 2,
      sym__non_zero,
      sym__zero,
    STATE(428), 2,
      aux_sym__digits,
      sym__digit,
    STATE(718), 13,
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
  [4629] = 12,
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
    STATE(928), 1,
      sym__lexial_value,
    ACTIONS(393), 2,
      sym__non_zero,
      sym__zero,
    STATE(358), 2,
      aux_sym__digits,
      sym__digit,
    STATE(622), 13,
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
  [4680] = 3,
    ACTIONS(409), 1,
      anon_sym_and,
    STATE(117), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(407), 24,
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
  [4713] = 12,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(413), 1,
      anon_sym__COLON,
    ACTIONS(417), 1,
      anon_sym_PLUS,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      sym__quoted_string,
    ACTIONS(425), 1,
      sym__pn_local,
    ACTIONS(427), 1,
      sym__pname_ln,
    STATE(935), 1,
      sym__lexial_value,
    ACTIONS(415), 2,
      sym__non_zero,
      sym__zero,
    STATE(438), 2,
      aux_sym__digits,
      sym__digit,
    STATE(731), 13,
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
  [4764] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
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
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(337), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
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
  [4815] = 3,
    ACTIONS(369), 1,
      anon_sym_and,
    STATE(108), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 24,
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
  [4848] = 3,
    ACTIONS(369), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(429), 24,
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
  [4881] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_DASH,
    STATE(344), 1,
      sym_individual,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(431), 2,
      sym__non_zero,
      sym__zero,
    STATE(71), 2,
      aux_sym__digits,
      sym__digit,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
    STATE(324), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [4936] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(433), 1,
      anon_sym_PLUS,
    ACTIONS(435), 1,
      anon_sym_DASH,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(431), 2,
      sym__non_zero,
      sym__zero,
    STATE(71), 2,
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
  [4987] = 3,
    ACTIONS(437), 1,
      anon_sym_and,
    STATE(111), 1,
      aux_sym__conjunction_repeat1,
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
  [5020] = 3,
    ACTIONS(369), 1,
      anon_sym_and,
    STATE(101), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(440), 24,
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
  [5053] = 12,
    ACTIONS(442), 1,
      anon_sym_LT,
    ACTIONS(444), 1,
      anon_sym__COLON,
    ACTIONS(448), 1,
      anon_sym_PLUS,
    ACTIONS(450), 1,
      anon_sym_DASH,
    ACTIONS(452), 1,
      anon_sym_DOT,
    ACTIONS(454), 1,
      sym__quoted_string,
    ACTIONS(456), 1,
      sym__pn_local,
    ACTIONS(458), 1,
      sym__pname_ln,
    STATE(893), 1,
      sym__lexial_value,
    ACTIONS(446), 2,
      sym__non_zero,
      sym__zero,
    STATE(458), 2,
      aux_sym__digits,
      sym__digit,
    STATE(785), 13,
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
  [5104] = 12,
    ACTIONS(460), 1,
      anon_sym_LT,
    ACTIONS(462), 1,
      anon_sym__COLON,
    ACTIONS(466), 1,
      anon_sym_PLUS,
    ACTIONS(468), 1,
      anon_sym_DASH,
    ACTIONS(470), 1,
      anon_sym_DOT,
    ACTIONS(472), 1,
      sym__quoted_string,
    ACTIONS(474), 1,
      sym__pn_local,
    ACTIONS(476), 1,
      sym__pname_ln,
    STATE(901), 1,
      sym__lexial_value,
    ACTIONS(464), 2,
      sym__non_zero,
      sym__zero,
    STATE(250), 2,
      aux_sym__digits,
      sym__digit,
    STATE(534), 13,
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
  [5155] = 12,
    ACTIONS(478), 1,
      anon_sym_LT,
    ACTIONS(480), 1,
      anon_sym__COLON,
    ACTIONS(484), 1,
      anon_sym_PLUS,
    ACTIONS(486), 1,
      anon_sym_DASH,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym__quoted_string,
    ACTIONS(492), 1,
      sym__pn_local,
    ACTIONS(494), 1,
      sym__pname_ln,
    STATE(908), 1,
      sym__lexial_value,
    ACTIONS(482), 2,
      sym__non_zero,
      sym__zero,
    STATE(437), 2,
      aux_sym__digits,
      sym__digit,
    STATE(757), 13,
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
  [5206] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(498), 1,
      anon_sym_PLUS,
    ACTIONS(500), 1,
      anon_sym_DASH,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(496), 2,
      sym__non_zero,
      sym__zero,
    STATE(353), 2,
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
  [5257] = 3,
    ACTIONS(409), 1,
      anon_sym_and,
    STATE(100), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(502), 24,
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
  [5290] = 3,
    ACTIONS(506), 1,
      anon_sym_and,
    STATE(128), 1,
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
  [5322] = 13,
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
    ACTIONS(508), 1,
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
    STATE(376), 2,
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
  [5374] = 1,
    ACTIONS(510), 25,
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
  [5402] = 3,
    ACTIONS(506), 1,
      anon_sym_and,
    STATE(118), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(512), 23,
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
  [5434] = 13,
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
    ACTIONS(514), 1,
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
    STATE(376), 2,
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
  [5486] = 13,
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
    ACTIONS(516), 1,
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
    STATE(376), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [5538] = 13,
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
    ACTIONS(518), 1,
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
    STATE(376), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [5590] = 3,
    ACTIONS(520), 1,
      anon_sym_or,
    STATE(125), 1,
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
  [5622] = 3,
    ACTIONS(525), 1,
      anon_sym_or,
    STATE(125), 1,
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
  [5654] = 3,
    ACTIONS(525), 1,
      anon_sym_or,
    STATE(126), 1,
      aux_sym_description_repeat1,
    ACTIONS(527), 23,
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
  [5686] = 3,
    ACTIONS(531), 1,
      anon_sym_and,
    STATE(128), 1,
      aux_sym__data_conjunction_repeat1,
    ACTIONS(529), 23,
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
  [5718] = 13,
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
    ACTIONS(534), 1,
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
    STATE(376), 2,
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
  [5770] = 13,
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
    STATE(376), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [5822] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(538), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(540), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(188), 16,
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
  [5859] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(542), 22,
      ts_builtin_sym_end,
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
  [5890] = 3,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [5921] = 3,
    ACTIONS(550), 1,
      anon_sym_and,
    STATE(143), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(429), 22,
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
  [5952] = 3,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [5983] = 3,
    ACTIONS(554), 1,
      anon_sym_and,
    STATE(157), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(407), 22,
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
  [6014] = 3,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(261), 22,
      ts_builtin_sym_end,
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
  [6045] = 3,
    ACTIONS(550), 1,
      anon_sym_and,
    STATE(143), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 22,
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
  [6076] = 3,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(137), 1,
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
  [6107] = 3,
    ACTIONS(563), 1,
      anon_sym_o,
    STATE(140), 1,
      aux_sym_object_property_frame_repeat1,
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
  [6138] = 3,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym__description_annotated_list_repeat1,
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
  [6169] = 3,
    ACTIONS(568), 1,
      anon_sym_o,
    STATE(140), 1,
      aux_sym_object_property_frame_repeat1,
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
  [6200] = 3,
    ACTIONS(570), 1,
      anon_sym_and,
    STATE(143), 1,
      aux_sym__conjunction_repeat1,
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
  [6231] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(144), 1,
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
  [6262] = 7,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(584), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(586), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(582), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(156), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(580), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(578), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6301] = 3,
    ACTIONS(590), 1,
      anon_sym_or,
    STATE(165), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(588), 22,
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
  [6332] = 6,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(592), 1,
      anon_sym_that,
    ACTIONS(538), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(540), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 16,
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
  [6369] = 3,
    ACTIONS(550), 1,
      anon_sym_and,
    STATE(134), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 22,
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
  [6400] = 3,
    ACTIONS(594), 1,
      anon_sym_and,
    STATE(149), 1,
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
  [6431] = 3,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(163), 1,
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
  [6462] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
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
  [6493] = 3,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(152), 1,
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
  [6524] = 3,
    ACTIONS(550), 1,
      anon_sym_and,
    STATE(138), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(440), 22,
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
  [6555] = 3,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(152), 1,
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
  [6586] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(608), 22,
      ts_builtin_sym_end,
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
  [6617] = 7,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(584), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(586), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(582), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(162), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(580), 4,
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
  [6656] = 3,
    ACTIONS(554), 1,
      anon_sym_and,
    STATE(149), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(502), 22,
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
  [6687] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(608), 22,
      ts_builtin_sym_end,
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
  [6718] = 3,
    ACTIONS(568), 1,
      anon_sym_o,
    STATE(142), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(612), 22,
      ts_builtin_sym_end,
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
  [6749] = 3,
    ACTIONS(590), 1,
      anon_sym_or,
    STATE(146), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(614), 22,
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
  [6780] = 3,
    ACTIONS(568), 1,
      anon_sym_o,
    STATE(140), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(612), 22,
      ts_builtin_sym_end,
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
  [6811] = 7,
    ACTIONS(618), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(627), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(630), 1,
      anon_sym_SubPropertyChain_COLON,
    ACTIONS(624), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(162), 2,
      sym__annotations,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(621), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(616), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [6850] = 3,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [6881] = 3,
    ACTIONS(568), 1,
      anon_sym_o,
    STATE(161), 1,
      aux_sym_object_property_frame_repeat1,
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
  [6912] = 3,
    ACTIONS(637), 1,
      anon_sym_or,
    STATE(165), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(635), 22,
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
  [6943] = 1,
    ACTIONS(529), 24,
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
  [6970] = 3,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym__object_property_expression_annotated_list_repeat1,
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
  [7001] = 2,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(642), 20,
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
  [7029] = 3,
    ACTIONS(644), 1,
      anon_sym_and,
    STATE(201), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(440), 21,
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
  [7059] = 3,
    ACTIONS(646), 1,
      anon_sym_or,
    STATE(197), 1,
      aux_sym_description_repeat1,
    ACTIONS(527), 21,
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
  [7089] = 1,
    ACTIONS(635), 23,
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
  [7115] = 3,
    ACTIONS(644), 1,
      anon_sym_and,
    STATE(190), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 21,
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
  [7145] = 1,
    ACTIONS(561), 23,
      ts_builtin_sym_end,
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
  [7171] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7219] = 3,
    ACTIONS(648), 1,
      anon_sym_and,
    STATE(194), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(407), 21,
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
  [7249] = 2,
    ACTIONS(650), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(652), 20,
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
    ACTIONS(355), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(496), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7325] = 2,
    ACTIONS(7), 3,
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
  [7353] = 1,
    ACTIONS(603), 23,
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
  [7379] = 2,
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
  [7407] = 1,
    ACTIONS(658), 23,
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
  [7433] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(74), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7481] = 3,
    ACTIONS(660), 1,
      anon_sym_and,
    STATE(183), 1,
      aux_sym__conjunction_repeat1,
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
  [7511] = 1,
    ACTIONS(573), 23,
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
  [7537] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(131), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7585] = 1,
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
  [7611] = 1,
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
  [7637] = 5,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(538), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(540), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 16,
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
  [7671] = 1,
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
  [7697] = 3,
    ACTIONS(644), 1,
      anon_sym_and,
    STATE(183), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(429), 21,
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
  [7727] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(663), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(209), 1,
      sym_data_range,
    STATE(278), 1,
      sym_data_range_annotated_list,
    STATE(279), 1,
      sym__annotations,
    STATE(121), 3,
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
  [7781] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(65), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(56), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7829] = 1,
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
  [7855] = 3,
    ACTIONS(648), 1,
      anon_sym_and,
    STATE(196), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(502), 21,
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
  [7885] = 12,
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
    ACTIONS(37), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
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
    STATE(56), 6,
      sym__data_primary,
      sym__data_atomic,
      sym__datatype_restriction,
      sym__primary,
      sym__restriction,
      sym__atomic,
  [7933] = 3,
    ACTIONS(673), 1,
      anon_sym_and,
    STATE(196), 1,
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
  [7963] = 3,
    ACTIONS(646), 1,
      anon_sym_or,
    STATE(199), 1,
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
  [7993] = 1,
    ACTIONS(676), 23,
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
  [8019] = 3,
    ACTIONS(678), 1,
      anon_sym_or,
    STATE(199), 1,
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
  [8049] = 2,
    ACTIONS(510), 3,
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
  [8077] = 3,
    ACTIONS(644), 1,
      anon_sym_and,
    STATE(183), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 21,
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
  [8107] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(234), 1,
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
  [8136] = 3,
    ACTIONS(687), 1,
      anon_sym_or,
    STATE(206), 1,
      aux_sym_description_repeat1,
    ACTIONS(527), 20,
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
  [8165] = 9,
    ACTIONS(691), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(694), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(697), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(700), 1,
      anon_sym_Domain_COLON,
    ACTIONS(703), 1,
      anon_sym_Range_COLON,
    ACTIONS(706), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(709), 1,
      anon_sym_Characteristics_COLON,
    STATE(204), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(689), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8206] = 3,
    ACTIONS(712), 1,
      anon_sym_or,
    STATE(205), 1,
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
  [8235] = 3,
    ACTIONS(687), 1,
      anon_sym_or,
    STATE(205), 1,
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
  [8264] = 11,
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
    ACTIONS(715), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [8309] = 3,
    ACTIONS(717), 1,
      anon_sym_and,
    STATE(208), 1,
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
  [8338] = 3,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_data_range_annotated_list_repeat1,
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
  [8367] = 11,
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
    ACTIONS(724), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [8412] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(663), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(298), 1,
      sym__annotations,
    STATE(398), 1,
      sym_data_range,
    STATE(121), 3,
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
  [8463] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(237), 1,
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
  [8492] = 3,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(726), 20,
      ts_builtin_sym_end,
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
  [8521] = 9,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(730), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(732), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(734), 1,
      anon_sym_Domain_COLON,
    ACTIONS(736), 1,
      anon_sym_Range_COLON,
    ACTIONS(738), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(740), 1,
      anon_sym_Characteristics_COLON,
    STATE(204), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(728), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [8562] = 3,
    ACTIONS(742), 1,
      anon_sym_and,
    STATE(208), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(502), 20,
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
  [8591] = 9,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(730), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(732), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(734), 1,
      anon_sym_Domain_COLON,
    ACTIONS(736), 1,
      anon_sym_Range_COLON,
    ACTIONS(738), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(740), 1,
      anon_sym_Characteristics_COLON,
    STATE(214), 2,
      sym__annotations,
      aux_sym_data_property_frame_repeat1,
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
  [8632] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [8661] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(663), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(253), 1,
      sym_data_range,
    STATE(285), 1,
      sym__annotations,
    STATE(121), 3,
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
  [8712] = 3,
    ACTIONS(742), 1,
      anon_sym_and,
    STATE(215), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(407), 20,
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
  [8741] = 3,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(726), 20,
      ts_builtin_sym_end,
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
  [8770] = 3,
    ACTIONS(748), 1,
      anon_sym_and,
    STATE(235), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(440), 20,
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
  [8799] = 1,
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
  [8824] = 11,
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
    ACTIONS(750), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [8869] = 3,
    ACTIONS(748), 1,
      anon_sym_and,
    STATE(229), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 20,
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
  [8898] = 11,
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
    ACTIONS(752), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [8943] = 11,
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
    ACTIONS(754), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [8988] = 11,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    ACTIONS(758), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(761), 1,
      anon_sym_Class_COLON,
    ACTIONS(764), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(767), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(770), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(773), 1,
      anon_sym_Individual_COLON,
    ACTIONS(776), 2,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
    ACTIONS(779), 2,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
    ACTIONS(782), 2,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9033] = 3,
    ACTIONS(785), 1,
      anon_sym_and,
    STATE(228), 1,
      aux_sym__conjunction_repeat1,
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
  [9062] = 3,
    ACTIONS(748), 1,
      anon_sym_and,
    STATE(228), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(429), 20,
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
  [9091] = 11,
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
    ACTIONS(788), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9136] = 11,
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
    ACTIONS(790), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9181] = 11,
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
    ACTIONS(792), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9226] = 11,
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
    ACTIONS(794), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9271] = 3,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [9300] = 3,
    ACTIONS(748), 1,
      anon_sym_and,
    STATE(228), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 20,
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
  [9329] = 3,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(546), 20,
      ts_builtin_sym_end,
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
  [9358] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__iri_annotated_list_repeat1,
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
  [9387] = 3,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_data_range_annotated_list_repeat1,
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
  [9416] = 3,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(807), 20,
      ts_builtin_sym_end,
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
  [9445] = 3,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(546), 20,
      ts_builtin_sym_end,
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
  [9474] = 3,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(242), 1,
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
  [9503] = 3,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(261), 20,
      ts_builtin_sym_end,
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
  [9532] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(663), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(307), 1,
      sym__annotations,
    STATE(413), 1,
      sym_data_range,
    STATE(121), 3,
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
  [9583] = 11,
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
    ACTIONS(815), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9628] = 11,
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
    ACTIONS(817), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9673] = 11,
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
    ACTIONS(819), 1,
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
    STATE(227), 9,
      sym__frame,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
      sym_individual_frame,
      sym_misc,
      aux_sym_ontology_repeat3,
  [9718] = 3,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(552), 20,
      ts_builtin_sym_end,
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
  [9747] = 8,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(823), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(825), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(827), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(829), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(831), 1,
      anon_sym_HasKey_COLON,
    STATE(270), 2,
      sym__annotations,
      aux_sym_class_frame_repeat2,
    ACTIONS(821), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [9785] = 3,
    ACTIONS(833), 1,
      anon_sym_or,
    STATE(268), 1,
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
  [9813] = 8,
    ACTIONS(839), 1,
      anon_sym_DOT,
    STATE(868), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(837), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(841), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(301), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(63), 5,
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
  [9851] = 8,
    ACTIONS(845), 1,
      anon_sym_DOT,
    STATE(892), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(837), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(847), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(301), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(843), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [9889] = 3,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(849), 19,
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
  [9917] = 1,
    ACTIONS(807), 21,
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
  [9941] = 2,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__pname_ln,
    ACTIONS(642), 15,
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
  [9967] = 2,
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
  [9993] = 3,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(854), 19,
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
  [10021] = 1,
    ACTIONS(796), 21,
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
  [10045] = 8,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(823), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(825), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(827), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(829), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(831), 1,
      anon_sym_HasKey_COLON,
    STATE(248), 2,
      sym__annotations,
      aux_sym_class_frame_repeat2,
    ACTIONS(858), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10083] = 2,
    ACTIONS(7), 6,
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
  [10109] = 3,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(261), 19,
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
  [10137] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(260), 1,
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
  [10165] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(546), 19,
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
  [10193] = 1,
    ACTIONS(865), 21,
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
  [10217] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(546), 19,
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
  [10245] = 1,
    ACTIONS(867), 21,
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
  [10269] = 3,
    ACTIONS(833), 1,
      anon_sym_or,
    STATE(249), 1,
      aux_sym_description_repeat1,
    ACTIONS(527), 19,
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
  [10297] = 3,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(869), 19,
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
  [10325] = 3,
    ACTIONS(871), 1,
      anon_sym_or,
    STATE(268), 1,
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
  [10353] = 3,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(552), 19,
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
  [10381] = 8,
    ACTIONS(876), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(879), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(882), 1,
      anon_sym_SubClassOf_COLON,
    ACTIONS(885), 1,
      anon_sym_DisjointWith_COLON,
    ACTIONS(888), 1,
      anon_sym_DisjointUnionOf_COLON,
    ACTIONS(891), 1,
      anon_sym_HasKey_COLON,
    STATE(270), 2,
      sym__annotations,
      aux_sym_class_frame_repeat2,
    ACTIONS(874), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [10419] = 3,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(894), 18,
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
  [10446] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(901), 1,
      anon_sym_not,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym__conjunction,
    STATE(322), 1,
      sym_description,
    STATE(359), 1,
      sym__description_annotated_list,
    STATE(377), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(219), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10497] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(291), 1,
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
  [10524] = 3,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_fact_annotated_list_repeat1,
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
  [10551] = 3,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(914), 18,
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
  [10578] = 7,
    STATE(890), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(920), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(922), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(341), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(88), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(918), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [10613] = 1,
    ACTIONS(924), 20,
      ts_builtin_sym_end,
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
  [10636] = 1,
    ACTIONS(689), 20,
      ts_builtin_sym_end,
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
  [10659] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(213), 1,
      sym_data_range,
    STATE(121), 3,
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
  [10704] = 1,
    ACTIONS(926), 20,
      ts_builtin_sym_end,
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
  [10727] = 1,
    ACTIONS(928), 20,
      ts_builtin_sym_end,
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
  [10750] = 1,
    ACTIONS(930), 20,
      ts_builtin_sym_end,
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
  [10773] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(291), 1,
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
  [10800] = 1,
    ACTIONS(932), 20,
      ts_builtin_sym_end,
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
  [10823] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(265), 1,
      sym_data_range,
    STATE(121), 3,
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
  [10868] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      anon_sym_not,
    STATE(355), 1,
      sym__annotations,
    STATE(459), 1,
      sym_description_2list,
    STATE(804), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(906), 1,
      sym_description,
    STATE(709), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(486), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10919] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(61), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(131), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [10964] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(61), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(496), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11009] = 6,
    ACTIONS(938), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(940), 1,
      anon_sym_Types_COLON,
    ACTIONS(942), 1,
      anon_sym_Facts_COLON,
    ACTIONS(944), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(314), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
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
  [11042] = 3,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(946), 18,
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
  [11069] = 3,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(124), 18,
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
  [11096] = 3,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(946), 18,
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
  [11123] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(61), 2,
      sym__data_atomic,
      sym__datatype_restriction,
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
  [11168] = 3,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(951), 18,
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
  [11195] = 3,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(951), 18,
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
  [11222] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(61), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(65), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11267] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(61), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(47), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11312] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(408), 1,
      sym_data_range,
    STATE(121), 3,
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
  [11357] = 1,
    ACTIONS(849), 20,
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
  [11380] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(203), 1,
      sym__conjunction,
    STATE(269), 1,
      sym_description,
    STATE(333), 1,
      sym__description_annotated_list,
    STATE(370), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11431] = 4,
    ACTIONS(957), 2,
      sym__non_zero,
      sym__zero,
    STATE(301), 2,
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
  [11460] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(203), 1,
      sym__conjunction,
    STATE(269), 1,
      sym_description,
    STATE(334), 1,
      sym__description_annotated_list,
    STATE(370), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11511] = 3,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_individual_annotated_list_repeat1,
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
  [11538] = 7,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(920), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(964), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(341), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(98), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(962), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [11573] = 3,
    ACTIONS(966), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(261), 18,
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
  [11600] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(203), 1,
      sym__conjunction,
    STATE(269), 1,
      sym_description,
    STATE(336), 1,
      sym__description_annotated_list,
    STATE(370), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [11651] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(396), 1,
      sym_data_range,
    STATE(121), 3,
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
  [11696] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(160), 1,
      sym__data_conjunction,
    STATE(926), 1,
      sym_data_range,
    STATE(121), 3,
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
  [11741] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(546), 18,
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
  [11768] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(305), 1,
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
  [11795] = 3,
    ACTIONS(953), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_individual_annotated_list_repeat1,
    ACTIONS(971), 18,
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
  [11822] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(357), 18,
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
  [11849] = 6,
    ACTIONS(975), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(978), 1,
      anon_sym_Types_COLON,
    ACTIONS(981), 1,
      anon_sym_Facts_COLON,
    ACTIONS(984), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(313), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(973), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11882] = 6,
    ACTIONS(938), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(940), 1,
      anon_sym_Types_COLON,
    ACTIONS(942), 1,
      anon_sym_Facts_COLON,
    ACTIONS(944), 2,
      anon_sym_SameAs_COLON,
      anon_sym_DifferentFrom_COLON,
    STATE(313), 2,
      sym__annotations,
      aux_sym_individual_frame_repeat1,
    ACTIONS(987), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [11915] = 3,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(283), 1,
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
  [11942] = 3,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_fact_annotated_list_repeat1,
    ACTIONS(989), 18,
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
  [11969] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      anon_sym_not,
    STATE(340), 1,
      sym_description_2list,
    STATE(356), 1,
      sym__annotations,
    STATE(804), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(936), 1,
      sym_description,
    STATE(709), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(486), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12020] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(991), 1,
      anon_sym_not,
    STATE(170), 1,
      sym__conjunction,
    STATE(247), 1,
      sym_description,
    STATE(280), 1,
      sym__description_annotated_list,
    STATE(393), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(136), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(69), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12071] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(546), 18,
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
  [12098] = 15,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_not,
    STATE(127), 1,
      sym__conjunction,
    STATE(135), 1,
      sym_description,
    STATE(222), 1,
      sym__description_annotated_list,
    STATE(361), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(104), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(60), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12149] = 12,
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
    STATE(45), 1,
      sym_datatype,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(61), 2,
      sym__data_atomic,
      sym__datatype_restriction,
    ACTIONS(17), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(74), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12194] = 3,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym__description_annotated_list_repeat1,
    ACTIONS(552), 18,
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
  [12221] = 4,
    ACTIONS(995), 2,
      sym__non_zero,
      sym__zero,
    STATE(335), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(92), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(94), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [12249] = 1,
    ACTIONS(997), 19,
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
  [12271] = 1,
    ACTIONS(999), 19,
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
  [12293] = 1,
    ACTIONS(894), 19,
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
  [12315] = 1,
    ACTIONS(1001), 19,
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
  [12337] = 5,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1007), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(1005), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(343), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(1003), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12367] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(901), 1,
      anon_sym_not,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_description,
    STATE(266), 1,
      sym__conjunction,
    STATE(364), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(219), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12415] = 4,
    ACTIONS(1009), 2,
      sym__non_zero,
      sym__zero,
    STATE(330), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(108), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(110), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [12443] = 1,
    ACTIONS(1012), 19,
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
  [12465] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(203), 1,
      sym__conjunction,
    STATE(363), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12513] = 1,
    ACTIONS(1014), 19,
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
  [12535] = 1,
    ACTIONS(1016), 19,
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
  [12557] = 4,
    ACTIONS(1018), 2,
      sym__non_zero,
      sym__zero,
    STATE(330), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(102), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(104), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [12585] = 1,
    ACTIONS(1020), 19,
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
  [12607] = 1,
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
  [12629] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(991), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(170), 1,
      sym__conjunction,
    STATE(382), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(136), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(69), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12677] = 5,
    ACTIONS(1024), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1030), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(1027), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(339), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(1022), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12707] = 1,
    ACTIONS(1033), 19,
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
  [12729] = 4,
    ACTIONS(1035), 2,
      sym__non_zero,
      sym__zero,
    STATE(341), 2,
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
  [12757] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(1038), 17,
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
  [12783] = 5,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1007), 1,
      anon_sym_SubPropertyOf_COLON,
    ACTIONS(1005), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    STATE(339), 2,
      sym__annotations,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(1040), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [12813] = 1,
    ACTIONS(1042), 19,
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
  [12835] = 1,
    ACTIONS(1044), 19,
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
  [12857] = 14,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(899), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_description,
    STATE(127), 1,
      sym__conjunction,
    STATE(388), 1,
      sym__annotations,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(104), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(60), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [12905] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(1046), 17,
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
  [12931] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(1048), 17,
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
  [12957] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(171), 1,
      sym__data_conjunction,
    STATE(121), 3,
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
  [12999] = 1,
    ACTIONS(1050), 19,
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
  [13021] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym__iri_annotated_list_repeat1,
    ACTIONS(1048), 17,
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
  [13047] = 8,
    ACTIONS(79), 1,
      anon_sym_f,
    ACTIONS(245), 1,
      anon_sym_F,
    ACTIONS(1054), 1,
      anon_sym_DOT,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1052), 2,
      sym__non_zero,
      sym__zero,
    STATE(392), 2,
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
  [13082] = 8,
    ACTIONS(69), 1,
      anon_sym_f,
    ACTIONS(249), 1,
      anon_sym_F,
    ACTIONS(1056), 1,
      anon_sym_DOT,
    STATE(852), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1052), 2,
      sym__non_zero,
      sym__zero,
    STATE(392), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(63), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [13117] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(665), 1,
      anon_sym_not,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(166), 3,
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
  [13156] = 13,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      anon_sym_not,
    STATE(468), 1,
      sym_description_2list,
    STATE(804), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(906), 1,
      sym_description,
    STATE(709), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(486), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13201] = 13,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      anon_sym_not,
    STATE(350), 1,
      sym_description_2list,
    STATE(804), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(936), 1,
      sym_description,
    STATE(709), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(486), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13246] = 8,
    ACTIONS(1060), 1,
      anon_sym_DOT,
    STATE(853), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1058), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1062), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(373), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(843), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13281] = 8,
    ACTIONS(1064), 1,
      anon_sym_DOT,
    STATE(850), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1058), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1066), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(373), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(835), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13316] = 1,
    ACTIONS(973), 18,
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
  [13337] = 7,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1068), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1070), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(407), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(962), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(98), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13369] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_not,
    STATE(127), 1,
      sym__conjunction,
    STATE(133), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(104), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(60), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13411] = 3,
    ACTIONS(1072), 1,
      anon_sym_and,
    STATE(367), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(502), 15,
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
  [13435] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(73), 1,
      sym_description,
    STATE(203), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13477] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(901), 1,
      anon_sym_not,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_description,
    STATE(266), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(219), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13519] = 4,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1076), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(378), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1074), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [13545] = 8,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    STATE(897), 1,
      sym__lexial_value,
    STATE(919), 1,
      sym__literal_list,
    ACTIONS(339), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1078), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
      aux_sym__digits,
      sym__digit,
    STATE(839), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [13579] = 3,
    ACTIONS(1082), 1,
      anon_sym_and,
    STATE(367), 1,
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
  [13603] = 4,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1091), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(376), 2,
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
  [13629] = 3,
    ACTIONS(1072), 1,
      anon_sym_and,
    STATE(362), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(407), 15,
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
  [13653] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(203), 1,
      sym__conjunction,
    STATE(262), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13695] = 3,
    ACTIONS(1093), 1,
      anon_sym_and,
    STATE(375), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(429), 15,
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
  [13719] = 3,
    ACTIONS(1093), 1,
      anon_sym_and,
    STATE(375), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 15,
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
  [13743] = 4,
    ACTIONS(1095), 2,
      sym__non_zero,
      sym__zero,
    STATE(373), 2,
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
  [13769] = 7,
    STATE(884), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1068), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1098), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(407), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(918), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(88), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [13801] = 3,
    ACTIONS(1100), 1,
      anon_sym_and,
    STATE(375), 1,
      aux_sym__conjunction_repeat1,
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
  [13825] = 3,
    ACTIONS(1088), 1,
      anon_sym_Annotations_COLON,
    STATE(376), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1091), 14,
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
  [13849] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(901), 1,
      anon_sym_not,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym__conjunction,
    STATE(319), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(219), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [13891] = 4,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1105), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(368), 2,
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
  [13917] = 1,
    ACTIONS(1022), 17,
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
  [13937] = 3,
    ACTIONS(1093), 1,
      anon_sym_and,
    STATE(372), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(440), 15,
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
  [13961] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      anon_sym_not,
    STATE(412), 1,
      sym__conjunction,
    STATE(430), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(369), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(147), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14003] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(991), 1,
      anon_sym_not,
    STATE(73), 1,
      sym_description,
    STATE(170), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(136), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(69), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14045] = 3,
    ACTIONS(1093), 1,
      anon_sym_and,
    STATE(371), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 15,
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
  [14069] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      anon_sym_not,
    STATE(299), 1,
      sym_description,
    STATE(412), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(369), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(147), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14111] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(203), 1,
      sym__conjunction,
    STATE(267), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14153] = 3,
    ACTIONS(1111), 1,
      anon_sym_Import_COLON,
    STATE(386), 2,
      sym_import,
      aux_sym_ontology_repeat1,
    ACTIONS(1109), 14,
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
  [14177] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(203), 1,
      sym__conjunction,
    STATE(299), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14219] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_not,
    STATE(73), 1,
      sym_description,
    STATE(127), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(104), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(60), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14261] = 7,
    ACTIONS(100), 1,
      anon_sym_f,
    ACTIONS(259), 1,
      anon_sym_F,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1052), 2,
      sym__non_zero,
      sym__zero,
    STATE(392), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(98), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14293] = 7,
    ACTIONS(90), 1,
      anon_sym_f,
    ACTIONS(251), 1,
      anon_sym_F,
    STATE(855), 1,
      sym__exponent,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1052), 2,
      sym__non_zero,
      sym__zero,
    STATE(392), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(88), 8,
      anon_sym_COMMA,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [14325] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      anon_sym_not,
    STATE(804), 1,
      sym__conjunction,
    STATE(896), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(709), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(486), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14367] = 4,
    ACTIONS(86), 1,
      anon_sym_F,
    ACTIONS(1114), 2,
      sym__non_zero,
      sym__zero,
    STATE(392), 2,
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
  [14393] = 12,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(991), 1,
      anon_sym_not,
    STATE(170), 1,
      sym__conjunction,
    STATE(236), 1,
      sym_description,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(136), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(69), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14435] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(709), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(486), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14474] = 7,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(339), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1078), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
      aux_sym__digits,
      sym__digit,
    STATE(56), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [14505] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(402), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1117), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14528] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(376), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1119), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14551] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(417), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1121), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14574] = 7,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    STATE(897), 1,
      sym__lexial_value,
    ACTIONS(339), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1078), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
      aux_sym__digits,
      sym__digit,
    STATE(865), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [14605] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(369), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(147), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14644] = 7,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    STATE(897), 1,
      sym__lexial_value,
    ACTIONS(339), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1078), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
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
  [14675] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(376), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [14698] = 3,
    ACTIONS(1125), 1,
      anon_sym_or,
    STATE(414), 1,
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
  [14721] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(175), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(79), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14760] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(376), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1127), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14783] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(991), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(136), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(69), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14822] = 4,
    ACTIONS(1129), 2,
      sym__non_zero,
      sym__zero,
    STATE(407), 2,
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
  [14847] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(405), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1132), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [14870] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(901), 1,
      anon_sym_not,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(219), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(83), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14909] = 7,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    STATE(897), 1,
      sym__lexial_value,
    ACTIONS(339), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1078), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
      aux_sym__digits,
      sym__digit,
    STATE(857), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [14940] = 11,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_not,
    STATE(64), 1,
      sym__conjunction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(104), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(60), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [14979] = 3,
    ACTIONS(1125), 1,
      anon_sym_or,
    STATE(403), 1,
      aux_sym_description_repeat1,
    ACTIONS(527), 14,
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
  [15002] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(397), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
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
  [15025] = 3,
    ACTIONS(1136), 1,
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
  [15048] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_datatype,
    STATE(61), 2,
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
  [15083] = 7,
    ACTIONS(345), 1,
      sym__quoted_string,
    ACTIONS(1080), 1,
      anon_sym_DOT,
    STATE(934), 1,
      sym__lexial_value,
    ACTIONS(433), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(1139), 2,
      sym__non_zero,
      sym__zero,
    STATE(71), 2,
      aux_sym__digits,
      sym__digit,
    STATE(56), 7,
      sym__literal,
      sym_decimal_literal,
      sym_floating_point_literal,
      sym_integer_literal,
      sym_string_literal_no_language,
      sym_string_literal_with_language,
      sym_typed_literal,
  [15114] = 3,
    ACTIONS(313), 1,
      anon_sym_Annotations_COLON,
    STATE(376), 2,
      sym__annotations,
      aux_sym_ontology_repeat2,
    ACTIONS(1141), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15137] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1143), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15159] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(934), 1,
      anon_sym_not,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(49), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(540), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15195] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_individual_2list_repeat1,
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
  [15217] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(1107), 1,
      anon_sym_not,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(49), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(188), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15253] = 3,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_object_property_2list_repeat1,
    ACTIONS(1151), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15275] = 3,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(423), 1,
      aux_sym_description_2list_repeat1,
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
  [15297] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(993), 1,
      anon_sym_not,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(49), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(63), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15333] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_data_property_2list_repeat1,
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
  [15355] = 1,
    ACTIONS(1160), 15,
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
  [15373] = 3,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
    STATE(420), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1162), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15395] = 8,
    ACTIONS(1166), 1,
      anon_sym_DOT,
    STATE(848), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(835), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1164), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1168), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(448), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15427] = 1,
    ACTIONS(1170), 15,
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
  [15445] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(869), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15467] = 3,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    STATE(431), 1,
      aux_sym_data_property_2list_repeat1,
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
  [15489] = 3,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(431), 1,
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
  [15511] = 2,
    ACTIONS(139), 6,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(141), 9,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_inverse,
      anon_sym_or,
      anon_sym_and,
      anon_sym_not,
      sym__pn_local,
  [15531] = 3,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_object_property_2list_repeat1,
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
  [15553] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_not,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(49), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(80), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15589] = 8,
    ACTIONS(1188), 1,
      anon_sym_DOT,
    STATE(844), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(843), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1186), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1190), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(452), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15621] = 8,
    ACTIONS(1194), 1,
      anon_sym_DOT,
    STATE(883), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(835), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1192), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1196), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(446), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15653] = 8,
    ACTIONS(1198), 1,
      anon_sym_DOT,
    STATE(851), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(835), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1186), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1200), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(452), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15685] = 3,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_individual_2list_repeat1,
    ACTIONS(1170), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15707] = 3,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(423), 1,
      aux_sym_description_2list_repeat1,
    ACTIONS(854), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [15729] = 8,
    ACTIONS(1205), 1,
      anon_sym_DOT,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(843), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1192), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1207), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(446), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15761] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(901), 1,
      anon_sym_not,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(49), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(89), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15797] = 8,
    ACTIONS(1209), 1,
      anon_sym_DOT,
    STATE(886), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(843), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1164), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1211), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(448), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15829] = 10,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(991), 1,
      anon_sym_not,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(49), 3,
      sym__primary,
      sym__restriction,
      sym__atomic,
    STATE(78), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [15865] = 7,
    STATE(859), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(918), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1213), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1215), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(460), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(88), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15894] = 4,
    ACTIONS(1217), 2,
      sym__non_zero,
      sym__zero,
    STATE(446), 2,
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
  [15917] = 7,
    STATE(864), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(962), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(1213), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1220), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(460), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [15946] = 4,
    ACTIONS(1222), 2,
      sym__non_zero,
      sym__zero,
    STATE(448), 2,
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
  [15969] = 8,
    ACTIONS(843), 1,
      sym__pn_local,
    ACTIONS(1227), 1,
      anon_sym_DOT,
    STATE(891), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1225), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1229), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16000] = 7,
    STATE(877), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(918), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1231), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1233), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(476), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(88), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16029] = 7,
    STATE(878), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(962), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(1231), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1235), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(476), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16058] = 4,
    ACTIONS(1237), 2,
      sym__non_zero,
      sym__zero,
    STATE(452), 2,
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
  [16081] = 1,
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
  [16098] = 10,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1242), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1244), 1,
      anon_sym_not,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(316), 1,
      sym_fact,
    STATE(359), 1,
      sym_fact_annotated_list,
    STATE(512), 1,
      sym__annotations,
    STATE(331), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16133] = 1,
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
  [16150] = 7,
    STATE(870), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(962), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1250), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1252), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(477), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16179] = 7,
    STATE(881), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(918), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(1250), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1254), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(477), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(88), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16208] = 8,
    ACTIONS(835), 1,
      sym__pn_local,
    ACTIONS(1256), 1,
      anon_sym_DOT,
    STATE(869), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1225), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1258), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(467), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16239] = 1,
    ACTIONS(1260), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16255] = 4,
    ACTIONS(1262), 2,
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
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_inverse,
      sym__pn_local,
  [16277] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(89), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16309] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    ACTIONS(1265), 1,
      anon_sym_Annotations_COLON,
    STATE(311), 1,
      sym_individual,
    STATE(359), 1,
      sym_individual_annotated_list,
    STATE(579), 1,
      sym__annotations,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [16341] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(540), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16373] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1269), 1,
      sym__language_tag,
    ACTIONS(39), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1267), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [16395] = 7,
    ACTIONS(962), 1,
      sym__pn_local,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1271), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1273), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(498), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16423] = 7,
    ACTIONS(918), 1,
      sym__pn_local,
    STATE(856), 1,
      sym__exponent,
    ACTIONS(73), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1271), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1275), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(498), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(88), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [16451] = 4,
    ACTIONS(1277), 2,
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
      anon_sym_DOT,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      sym__pn_local,
  [16473] = 1,
    ACTIONS(1280), 13,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      anon_sym_Individual_COLON,
      anon_sym_EquivalentClasses_COLON,
      anon_sym_DisjointClasses_COLON,
      anon_sym_EquivalentProperties_COLON,
      anon_sym_DisjointProperties_COLON,
      anon_sym_SameIndividual_COLON,
      anon_sym_DifferentIndividuals_COLON,
  [16489] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(188), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16521] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(63), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16553] = 9,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
    ACTIONS(1282), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1284), 1,
      anon_sym_inverse,
    STATE(531), 1,
      sym__annotations,
    STATE(924), 1,
      sym__object_property_expression,
    STATE(459), 2,
      sym_object_property_2list,
      sym_data_property_2list,
    STATE(916), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16585] = 9,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    ACTIONS(1265), 1,
      anon_sym_Annotations_COLON,
    STATE(459), 1,
      sym_individual_2list,
    STATE(529), 1,
      sym__annotations,
    STATE(927), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [16617] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(78), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16649] = 9,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1242), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1244), 1,
      anon_sym_not,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(337), 1,
      sym_fact,
    STATE(528), 1,
      sym__annotations,
    STATE(331), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16681] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(50), 2,
      sym__restriction,
      sym__atomic,
    STATE(80), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16713] = 4,
    ACTIONS(1286), 2,
      sym__non_zero,
      sym__zero,
    STATE(476), 2,
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
  [16735] = 4,
    ACTIONS(1289), 2,
      sym__non_zero,
      sym__zero,
    STATE(477), 2,
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
  [16757] = 6,
    ACTIONS(460), 1,
      anon_sym_LT,
    ACTIONS(474), 1,
      sym__pn_local,
    ACTIONS(476), 1,
      sym__pname_ln,
    STATE(532), 1,
      sym_datatype,
    ACTIONS(1292), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(524), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16782] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1282), 1,
      anon_sym_Annotations_COLON,
    STATE(222), 1,
      sym__object_property_expression_annotated_list,
    STATE(602), 1,
      sym__annotations,
    STATE(167), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [16811] = 7,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(1294), 1,
      anon_sym_that,
    ACTIONS(1296), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(188), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
    ACTIONS(1298), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [16838] = 4,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 4,
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
  [16859] = 4,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 4,
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
  [16880] = 6,
    ACTIONS(411), 1,
      anon_sym_LT,
    ACTIONS(425), 1,
      sym__pn_local,
    ACTIONS(427), 1,
      sym__pname_ln,
    STATE(738), 1,
      sym_datatype,
    ACTIONS(1304), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(729), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [16905] = 6,
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
  [16930] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(365), 1,
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
  [16955] = 6,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(1294), 1,
      anon_sym_that,
    ACTIONS(1296), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1298), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16980] = 4,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(124), 4,
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
  [17001] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    ACTIONS(1265), 1,
      anon_sym_Annotations_COLON,
    STATE(326), 1,
      sym_individual,
    STATE(566), 1,
      sym__annotations,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [17030] = 4,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    STATE(481), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(357), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1311), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17051] = 4,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 4,
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
  [17072] = 6,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
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
  [17097] = 6,
    ACTIONS(389), 1,
      anon_sym_LT,
    ACTIONS(403), 1,
      sym__pn_local,
    ACTIONS(405), 1,
      sym__pname_ln,
    STATE(650), 1,
      sym_datatype,
    ACTIONS(1315), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(620), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17122] = 8,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_inverse,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    ACTIONS(1282), 1,
      anon_sym_Annotations_COLON,
    STATE(85), 1,
      aux_sym_class_frame_repeat1,
    STATE(571), 1,
      sym__annotations,
    STATE(176), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [17151] = 6,
    ACTIONS(442), 1,
      anon_sym_LT,
    ACTIONS(456), 1,
      sym__pn_local,
    ACTIONS(458), 1,
      sym__pname_ln,
    STATE(799), 1,
      sym_datatype,
    ACTIONS(1317), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(776), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17176] = 6,
    ACTIONS(478), 1,
      anon_sym_LT,
    ACTIONS(492), 1,
      sym__pn_local,
    ACTIONS(494), 1,
      sym__pname_ln,
    STATE(764), 1,
      sym_datatype,
    ACTIONS(1319), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(766), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17201] = 6,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(1296), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1298), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(188), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17226] = 6,
    ACTIONS(371), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      sym__pn_local,
    ACTIONS(387), 1,
      sym__pname_ln,
    STATE(697), 1,
      sym_datatype,
    ACTIONS(1321), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    STATE(715), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17251] = 4,
    ACTIONS(1323), 2,
      sym__non_zero,
      sym__zero,
    STATE(498), 2,
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
  [17272] = 2,
    ACTIONS(124), 5,
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
  [17288] = 2,
    ACTIONS(59), 5,
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
  [17304] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(621), 1,
      sym__annotations,
    STATE(677), 1,
      sym_annotation,
    STATE(818), 1,
      sym__annotation_annotated_list,
    STATE(102), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17332] = 2,
    ACTIONS(55), 5,
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
  [17348] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1332), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(662), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17376] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1334), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(669), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17404] = 8,
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
    STATE(52), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(665), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17432] = 2,
    ACTIONS(11), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(642), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17448] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(626), 1,
      sym__annotations,
    STATE(686), 1,
      sym_annotation,
    STATE(792), 1,
      sym__annotation_annotated_list,
    STATE(115), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17476] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1282), 1,
      anon_sym_Annotations_COLON,
    STATE(597), 1,
      sym__annotations,
    STATE(179), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [17502] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1338), 1,
      anon_sym_not,
    STATE(380), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(669), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17530] = 2,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1340), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17546] = 2,
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
  [17562] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1244), 1,
      anon_sym_not,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(290), 1,
      sym_fact,
    STATE(331), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17588] = 5,
    ACTIONS(1342), 1,
      anon_sym_Annotations_COLON,
    STATE(132), 1,
      sym_object_property_characteristic,
    STATE(222), 1,
      sym_object_property_characteristic_annotated_list,
    STATE(646), 1,
      sym__annotations,
    ACTIONS(1344), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [17610] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(632), 1,
      sym__annotations,
    STATE(685), 1,
      sym_annotation,
    STATE(825), 1,
      sym__annotation_annotated_list,
    STATE(105), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17638] = 8,
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
    STATE(153), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17666] = 2,
    ACTIONS(47), 5,
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
  [17682] = 7,
    ACTIONS(1282), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1350), 1,
      anon_sym_LT,
    ACTIONS(1352), 1,
      anon_sym_inverse,
    ACTIONS(1354), 1,
      sym__pn_local,
    ACTIONS(1356), 1,
      sym__pname_ln,
    STATE(591), 1,
      sym__annotations,
    STATE(164), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [17708] = 2,
    ACTIONS(57), 5,
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
  [17724] = 8,
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
    STATE(112), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(661), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17752] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(643), 1,
      sym__annotations,
    STATE(703), 1,
      sym_annotation,
    STATE(837), 1,
      sym__annotation_annotated_list,
    STATE(113), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17780] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(489), 1,
      sym_annotation,
    STATE(568), 1,
      sym__annotation_annotated_list,
    STATE(618), 1,
      sym__annotations,
    STATE(114), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17808] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(40), 1,
      sym__annotation_annotated_list,
    STATE(616), 1,
      sym_annotation,
    STATE(644), 1,
      sym__annotations,
    STATE(116), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17836] = 2,
    ACTIONS(7), 5,
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
  [17852] = 2,
    ACTIONS(45), 5,
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
  [17868] = 2,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1364), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [17884] = 8,
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
    STATE(743), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(670), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17912] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1368), 1,
      anon_sym_not,
    STATE(221), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(662), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17940] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1244), 1,
      anon_sym_not,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(325), 1,
      sym_fact,
    STATE(331), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [17966] = 7,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(468), 1,
      sym_individual_2list,
    STATE(927), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [17992] = 7,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(841), 1,
      sym_individual,
    STATE(929), 1,
      sym__individual_list,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18018] = 7,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
    ACTIONS(1284), 1,
      anon_sym_inverse,
    STATE(924), 1,
      sym__object_property_expression,
    STATE(468), 2,
      sym_object_property_2list,
      sym_data_property_2list,
    STATE(916), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18044] = 2,
    ACTIONS(53), 5,
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
  [18060] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(594), 1,
      sym_annotation,
    STATE(624), 1,
      sym__annotations,
    STATE(673), 1,
      sym__annotation_annotated_list,
    STATE(103), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18088] = 2,
    ACTIONS(129), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1372), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18104] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1374), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(670), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18132] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1376), 1,
      anon_sym_not,
    STATE(169), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(665), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18160] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(40), 1,
      sym__annotation_annotated_list,
    STATE(95), 1,
      sym_annotation,
    STATE(637), 1,
      sym__annotations,
    STATE(106), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18188] = 8,
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
    STATE(52), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(661), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18216] = 2,
    ACTIONS(61), 5,
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
  [18232] = 5,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(1296), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1298), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
    ACTIONS(220), 4,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18254] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1382), 1,
      anon_sym_not,
    STATE(52), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18282] = 2,
    ACTIONS(133), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(1384), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18298] = 8,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(40), 1,
      sym__annotation_annotated_list,
    STATE(312), 1,
      sym_annotation,
    STATE(642), 1,
      sym__annotations,
    STATE(110), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18326] = 3,
    STATE(401), 1,
      sym_facet,
    ACTIONS(1386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1388), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [18343] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18368] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(282), 1,
      sym__iri_annotated_list,
    STATE(660), 1,
      sym__annotations,
    STATE(217), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18393] = 2,
    ACTIONS(7), 4,
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
  [18408] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(281), 1,
      sym__iri_annotated_list,
    STATE(660), 1,
      sym__annotations,
    STATE(217), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18433] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(633), 1,
      sym__annotations,
    STATE(754), 1,
      sym_annotation,
    STATE(102), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18458] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(148), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(671), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18483] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(172), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(665), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18508] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(661), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18533] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(31), 1,
      sym_annotation,
    STATE(630), 1,
      sym__annotations,
    STATE(106), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18558] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(277), 1,
      sym__iri_annotated_list,
    STATE(660), 1,
      sym__annotations,
    STATE(217), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18583] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(379), 1,
      sym__iri_annotated_list,
    STATE(660), 1,
      sym__annotations,
    STATE(217), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18608] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(289), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18631] = 3,
    STATE(399), 1,
      sym_facet,
    ACTIONS(1386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(1388), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [18648] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(379), 1,
      sym_annotation_property_iri_annotated_list,
    STATE(655), 1,
      sym__annotations,
    STATE(347), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18673] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(628), 1,
      sym__annotations,
    STATE(736), 1,
      sym_annotation,
    STATE(105), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18698] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(714), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(670), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18723] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(619), 1,
      sym_annotation,
    STATE(623), 1,
      sym__annotations,
    STATE(103), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18748] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(427), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18771] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(662), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18796] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(625), 1,
      sym__annotations,
    STATE(744), 1,
      sym_annotation,
    STATE(115), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18821] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(665), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18846] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(327), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18869] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(670), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18894] = 2,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(1390), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [18909] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(56), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [18932] = 7,
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
    STATE(905), 1,
      sym__object_property_expression,
    STATE(661), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [18957] = 6,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_inverse,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    STATE(81), 1,
      aux_sym_class_frame_repeat1,
    STATE(176), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [18980] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(31), 1,
      sym_annotation,
    STATE(648), 1,
      sym__annotations,
    STATE(110), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19005] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(31), 1,
      sym_annotation,
    STATE(639), 1,
      sym__annotations,
    STATE(116), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19030] = 6,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(429), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [19053] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(429), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [19076] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(224), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(662), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19101] = 4,
    ACTIONS(1342), 1,
      anon_sym_Annotations_COLON,
    STATE(184), 1,
      sym_object_property_characteristic,
    STATE(631), 1,
      sym__annotations,
    ACTIONS(1344), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19120] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(499), 1,
      sym_annotation,
    STATE(645), 1,
      sym__annotations,
    STATE(114), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19145] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(335), 1,
      anon_sym__COLON,
    STATE(295), 1,
      sym_individual,
    STATE(44), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym_node_id,
  [19168] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1392), 1,
      sym__language_tag,
    ACTIONS(1267), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(39), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19187] = 7,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(647), 1,
      sym__annotations,
    STATE(795), 1,
      sym_annotation,
    STATE(113), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19212] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(383), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(669), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19237] = 2,
    ACTIONS(11), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quoted_string,
      sym__pname_ln,
    ACTIONS(642), 6,
      anon_sym__COLON,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__pn_local,
  [19252] = 2,
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
  [19267] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(59), 1,
      sym__restriction,
    STATE(905), 1,
      sym__object_property_expression,
    STATE(669), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19292] = 5,
    STATE(891), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1394), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19312] = 3,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    STATE(598), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19328] = 3,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    STATE(598), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19344] = 4,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    STATE(589), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1306), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(124), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19362] = 5,
    STATE(864), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1401), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19382] = 5,
    ACTIONS(1350), 1,
      anon_sym_LT,
    ACTIONS(1352), 1,
      anon_sym_inverse,
    ACTIONS(1354), 1,
      sym__pn_local,
    ACTIONS(1356), 1,
      sym__pname_ln,
    STATE(159), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19402] = 5,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(422), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19422] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(345), 2,
      sym_object_property_fact,
      sym_data_property_fact,
    STATE(109), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19442] = 4,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1311), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(357), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19460] = 5,
    STATE(886), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1405), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19480] = 5,
    STATE(860), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1407), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19500] = 5,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(193), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19520] = 3,
    ACTIONS(1409), 1,
      anon_sym_COMMA,
    STATE(598), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(124), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19536] = 5,
    STATE(880), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1412), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19556] = 5,
    STATE(878), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1414), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19576] = 5,
    STATE(892), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1416), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19596] = 5,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(150), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19616] = 5,
    STATE(862), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(100), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19636] = 4,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(589), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1313), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(362), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19654] = 5,
    ACTIONS(1350), 1,
      anon_sym_LT,
    ACTIONS(1352), 1,
      anon_sym_inverse,
    ACTIONS(1354), 1,
      sym__pn_local,
    ACTIONS(1356), 1,
      sym__pname_ln,
    STATE(173), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19674] = 6,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    ACTIONS(1328), 1,
      anon_sym_Annotations_COLON,
    STATE(672), 1,
      sym__annotations,
    STATE(257), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19696] = 5,
    STATE(847), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1418), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19716] = 4,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(589), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1300), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19734] = 5,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_inverse,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(453), 5,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
      sym__object_property_expression,
  [19754] = 5,
    STATE(853), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1420), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19774] = 5,
    STATE(844), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1422), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19794] = 5,
    STATE(870), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1424), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19814] = 5,
    STATE(888), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1426), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19834] = 4,
    ACTIONS(1403), 1,
      anon_sym_COMMA,
    STATE(604), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(1300), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(351), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [19852] = 3,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    STATE(588), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19868] = 3,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    STATE(587), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(357), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [19884] = 5,
    STATE(866), 1,
      sym__exponent,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(71), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(79), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [19904] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(482), 1,
      sym_annotation,
    STATE(114), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19923] = 2,
    ACTIONS(1306), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(124), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19936] = 2,
    ACTIONS(1362), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(45), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19949] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(695), 1,
      sym_annotation,
    STATE(102), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [19968] = 2,
    ACTIONS(1372), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(129), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [19981] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(651), 1,
      sym_annotation,
    STATE(103), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20000] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(614), 1,
      sym_annotation,
    STATE(103), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20019] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(763), 1,
      sym_annotation,
    STATE(115), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20038] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(690), 1,
      sym_annotation,
    STATE(115), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20057] = 2,
    ACTIONS(642), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(11), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20070] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(739), 1,
      sym_annotation,
    STATE(105), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20089] = 2,
    ACTIONS(1380), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(61), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20102] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(35), 1,
      sym_annotation,
    STATE(106), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20121] = 2,
    STATE(198), 1,
      sym_object_property_characteristic,
    ACTIONS(1344), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20134] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(696), 1,
      sym_annotation,
    STATE(105), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20153] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(725), 1,
      sym_annotation,
    STATE(102), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20172] = 2,
    ACTIONS(1330), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20185] = 2,
    ACTIONS(1348), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20198] = 2,
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
  [20211] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(93), 1,
      sym_annotation,
    STATE(106), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20230] = 2,
    ACTIONS(654), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(7), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20243] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(35), 1,
      sym_annotation,
    STATE(116), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20262] = 2,
    ACTIONS(1340), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20275] = 2,
    ACTIONS(1326), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20288] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(315), 1,
      sym_annotation,
    STATE(110), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20307] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(705), 1,
      sym_annotation,
    STATE(113), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20326] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(615), 1,
      sym_annotation,
    STATE(116), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20345] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(542), 1,
      sym_annotation,
    STATE(114), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20364] = 2,
    STATE(155), 1,
      sym_object_property_characteristic,
    ACTIONS(1344), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [20377] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(800), 1,
      sym_annotation,
    STATE(113), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20396] = 5,
    ACTIONS(1240), 1,
      anon_sym_LT,
    ACTIONS(1246), 1,
      sym__pn_local,
    ACTIONS(1248), 1,
      sym__pname_ln,
    STATE(35), 1,
      sym_annotation,
    STATE(110), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20415] = 2,
    ACTIONS(1364), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20428] = 2,
    ACTIONS(1370), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20441] = 2,
    ACTIONS(1384), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(133), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20454] = 2,
    ACTIONS(1358), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [20467] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(258), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20483] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(328), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20499] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(351), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20515] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1428), 1,
      sym__language_tag,
    ACTIONS(1267), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [20531] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(455), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20547] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1430), 1,
      sym__language_tag,
    ACTIONS(1267), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [20563] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(120), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20579] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(212), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20595] = 4,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(191), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(195), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20611] = 4,
    ACTIONS(193), 1,
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
  [20627] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(426), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20643] = 4,
    ACTIONS(1350), 1,
      anon_sym_LT,
    ACTIONS(1354), 1,
      sym__pn_local,
    ACTIONS(1356), 1,
      sym__pname_ln,
    STATE(120), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20659] = 4,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(255), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(257), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20675] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(425), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20691] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(216), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20707] = 4,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    STATE(200), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20723] = 4,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(538), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(540), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20739] = 4,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(1296), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(1298), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20755] = 4,
    ACTIONS(193), 1,
      anon_sym_Self,
    ACTIONS(197), 1,
      anon_sym_value,
    ACTIONS(228), 2,
      anon_sym_some,
      anon_sym_only,
    ACTIONS(230), 3,
      anon_sym_min,
      anon_sym_max,
      anon_sym_exactly,
  [20771] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(263), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20787] = 2,
    ACTIONS(1390), 3,
      anon_sym_inverse,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
  [20799] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1432), 1,
      sym__language_tag,
    ACTIONS(1267), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [20815] = 4,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym__pn_local,
    ACTIONS(31), 1,
      sym__pname_ln,
    STATE(145), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20831] = 4,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(180), 1,
      sym__pname_ln,
    STATE(120), 4,
      sym__iri,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [20847] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(689), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(357), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1311), 2,
      anon_sym_inverse,
      sym__pn_local,
  [20862] = 4,
    ACTIONS(1436), 1,
      anon_sym_COMMA,
    STATE(678), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(124), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym_not,
      sym__pn_local,
  [20877] = 1,
    ACTIONS(1439), 6,
      sym__non_zero,
      sym__zero,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      sym__quoted_string,
  [20886] = 4,
    ACTIONS(1441), 1,
      anon_sym_COMMA,
    STATE(680), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(124), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym_inverse,
      sym__pn_local,
  [20901] = 3,
    ACTIONS(1444), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1446), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(687), 2,
      aux_sym__digits,
      sym__digit,
  [20914] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    STATE(678), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1313), 2,
      anon_sym_not,
      sym__pn_local,
  [20929] = 3,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1450), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [20942] = 4,
    ACTIONS(43), 1,
      anon_sym_CARET_CARET,
    ACTIONS(1267), 1,
      sym__pn_local,
    ACTIONS(1452), 1,
      sym__language_tag,
    ACTIONS(39), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [20957] = 4,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(693), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(357), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1311), 2,
      anon_sym__COLON,
      sym__pn_local,
  [20972] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    STATE(694), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(357), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1311), 2,
      anon_sym_not,
      sym__pn_local,
  [20987] = 3,
    ACTIONS(65), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(1456), 2,
      anon_sym_f,
      anon_sym_F,
    STATE(21), 2,
      aux_sym__digits,
      sym__digit,
  [21000] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(680), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1313), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21015] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(680), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21030] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    STATE(682), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym_not,
      sym__pn_local,
  [21045] = 4,
    ACTIONS(1458), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(124), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1306), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21060] = 4,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1313), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21075] = 4,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21090] = 4,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    STATE(678), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym_not,
      sym__pn_local,
  [21105] = 4,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(688), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym_inverse,
      sym__pn_local,
  [21120] = 4,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(692), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1300), 2,
      anon_sym__COLON,
      sym__pn_local,
  [21135] = 2,
    ACTIONS(1370), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21145] = 3,
    ACTIONS(1461), 1,
      anon_sym_and,
    STATE(698), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(202), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21157] = 4,
    ACTIONS(3), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(5), 1,
      anon_sym_Ontology_COLON,
    STATE(917), 1,
      sym_ontology,
    STATE(773), 2,
      sym_prefix_declaration,
      aux_sym_source_file_repeat1,
  [21171] = 3,
    ACTIONS(1464), 1,
      anon_sym_and,
    STATE(700), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(208), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21183] = 3,
    ACTIONS(1469), 1,
      anon_sym_SLASH,
    STATE(701), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1467), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [21195] = 3,
    ACTIONS(1474), 1,
      anon_sym_SLASH,
    STATE(701), 1,
      aux_sym__ipath_abempty,
    ACTIONS(1472), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [21207] = 4,
    ACTIONS(1311), 1,
      sym__pn_local,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    STATE(706), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(357), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21221] = 3,
    ACTIONS(1480), 1,
      anon_sym_DOT,
    ACTIONS(1478), 2,
      sym__non_zero,
      sym__zero,
    STATE(449), 2,
      aux_sym__digits,
      sym__digit,
  [21233] = 4,
    ACTIONS(1300), 1,
      sym__pn_local,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    STATE(707), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21247] = 4,
    ACTIONS(1300), 1,
      sym__pn_local,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    STATE(708), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21261] = 4,
    ACTIONS(1313), 1,
      sym__pn_local,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    STATE(708), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(362), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21275] = 4,
    ACTIONS(1306), 1,
      sym__pn_local,
    ACTIONS(1482), 1,
      anon_sym_COMMA,
    STATE(708), 1,
      aux_sym__annotation_annotated_list_repeat1,
    ACTIONS(124), 2,
      anon_sym_LT,
      sym__pname_ln,
  [21289] = 3,
    ACTIONS(1485), 1,
      anon_sym_and,
    STATE(733), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(407), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21301] = 3,
    ACTIONS(1489), 1,
      anon_sym_DOT,
    ACTIONS(1487), 2,
      sym__non_zero,
      sym__zero,
    STATE(357), 2,
      aux_sym__digits,
      sym__digit,
  [21313] = 3,
    ACTIONS(1491), 1,
      anon_sym_and,
    STATE(700), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21325] = 3,
    ACTIONS(1495), 1,
      anon_sym_DOT,
    ACTIONS(1493), 2,
      sym__non_zero,
      sym__zero,
    STATE(441), 2,
      aux_sym__digits,
      sym__digit,
  [21337] = 3,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1497), 2,
      sym__non_zero,
      sym__zero,
    STATE(352), 2,
      aux_sym__digits,
      sym__digit,
  [21349] = 3,
    ACTIONS(1491), 1,
      anon_sym_and,
    STATE(722), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(367), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21361] = 2,
    ACTIONS(1362), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21371] = 3,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1501), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      aux_sym__digits,
      sym__digit,
  [21383] = 3,
    ACTIONS(1505), 1,
      anon_sym_DOT,
    ACTIONS(1503), 2,
      sym__non_zero,
      sym__zero,
    STATE(443), 2,
      aux_sym__digits,
      sym__digit,
  [21395] = 2,
    ACTIONS(1372), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21405] = 2,
    ACTIONS(1380), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21415] = 2,
    ACTIONS(1330), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21425] = 2,
    ACTIONS(1348), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21435] = 3,
    ACTIONS(1491), 1,
      anon_sym_and,
    STATE(700), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(429), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21447] = 2,
    ACTIONS(642), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(11), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21457] = 2,
    ACTIONS(1358), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21467] = 2,
    ACTIONS(1384), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(133), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21477] = 2,
    ACTIONS(1364), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21487] = 2,
    ACTIONS(1326), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21497] = 2,
    ACTIONS(1340), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21507] = 2,
    ACTIONS(1362), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21517] = 3,
    ACTIONS(1509), 1,
      anon_sym_DOT,
    ACTIONS(1507), 2,
      sym__non_zero,
      sym__zero,
    STATE(436), 2,
      aux_sym__digits,
      sym__digit,
  [21529] = 2,
    ACTIONS(1372), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21539] = 2,
    ACTIONS(1380), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21549] = 3,
    ACTIONS(1485), 1,
      anon_sym_and,
    STATE(698), 1,
      aux_sym__conjunction_repeat2,
    ACTIONS(502), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21561] = 2,
    ACTIONS(1330), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21571] = 2,
    ACTIONS(1348), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21581] = 2,
    ACTIONS(1306), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21591] = 2,
    ACTIONS(1358), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21601] = 2,
    ACTIONS(1370), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21611] = 2,
    ACTIONS(1384), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(133), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21621] = 2,
    ACTIONS(1326), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21631] = 2,
    ACTIONS(1358), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21641] = 2,
    ACTIONS(1364), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21651] = 3,
    ACTIONS(1491), 1,
      anon_sym_and,
    STATE(711), 1,
      aux_sym__conjunction_repeat1,
    ACTIONS(440), 3,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21663] = 2,
    ACTIONS(1306), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21673] = 2,
    ACTIONS(654), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(7), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21683] = 2,
    ACTIONS(1348), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21693] = 2,
    ACTIONS(656), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(9), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21703] = 2,
    ACTIONS(656), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(9), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21713] = 2,
    ACTIONS(1330), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21723] = 2,
    ACTIONS(654), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(7), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21733] = 2,
    ACTIONS(1380), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21743] = 2,
    ACTIONS(656), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(9), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21753] = 2,
    ACTIONS(642), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(11), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21763] = 2,
    ACTIONS(1306), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21773] = 2,
    ACTIONS(1340), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21783] = 2,
    ACTIONS(1326), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21793] = 2,
    ACTIONS(1372), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21803] = 3,
    ACTIONS(1513), 1,
      anon_sym_DOT,
    ACTIONS(1511), 2,
      sym__non_zero,
      sym__zero,
    STATE(251), 2,
      aux_sym__digits,
      sym__digit,
  [21815] = 2,
    ACTIONS(654), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(7), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21825] = 3,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1515), 2,
      sym__non_zero,
      sym__zero,
    STATE(70), 2,
      aux_sym__digits,
      sym__digit,
  [21837] = 2,
    ACTIONS(1364), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21847] = 2,
    ACTIONS(642), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(11), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21857] = 2,
    ACTIONS(1384), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(133), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21867] = 2,
    ACTIONS(1370), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21877] = 2,
    ACTIONS(1340), 2,
      anon_sym__COLON,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21887] = 2,
    ACTIONS(1362), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21897] = 2,
    ACTIONS(1517), 2,
      sym__non_zero,
      sym__zero,
    STATE(586), 2,
      aux_sym__digits,
      sym__digit,
  [21906] = 2,
    ACTIONS(1519), 2,
      sym__non_zero,
      sym__zero,
    STATE(613), 2,
      aux_sym__digits,
      sym__digit,
  [21915] = 2,
    ACTIONS(1521), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      aux_sym__digits,
      sym__digit,
  [21924] = 2,
    ACTIONS(1523), 2,
      sym__non_zero,
      sym__zero,
    STATE(360), 2,
      aux_sym__digits,
      sym__digit,
  [21933] = 4,
    ACTIONS(1525), 1,
      sym__non_zero,
    ACTIONS(1527), 1,
      sym__zero,
    STATE(8), 1,
      sym_non_negative_integer,
    STATE(62), 1,
      sym__positive_integer,
  [21946] = 1,
    ACTIONS(1467), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [21953] = 3,
    ACTIONS(1529), 1,
      anon_sym_Prefix_COLON,
    ACTIONS(1532), 1,
      anon_sym_Ontology_COLON,
    STATE(773), 2,
      sym_prefix_declaration,
      aux_sym_source_file_repeat1,
  [21964] = 3,
    ACTIONS(1534), 1,
      anon_sym_or,
    STATE(777), 1,
      aux_sym_description_repeat1,
    ACTIONS(523), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21975] = 2,
    ACTIONS(1536), 2,
      sym__non_zero,
      sym__zero,
    STATE(374), 2,
      aux_sym__digits,
      sym__digit,
  [21984] = 2,
    ACTIONS(1362), 1,
      sym__pn_local,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [21993] = 3,
    ACTIONS(1538), 1,
      anon_sym_or,
    STATE(777), 1,
      aux_sym_description_repeat1,
    ACTIONS(226), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22004] = 2,
    ACTIONS(1541), 2,
      sym__non_zero,
      sym__zero,
    STATE(600), 2,
      aux_sym__digits,
      sym__digit,
  [22013] = 2,
    ACTIONS(1543), 2,
      sym__non_zero,
      sym__zero,
    STATE(75), 2,
      aux_sym__digits,
      sym__digit,
  [22022] = 2,
    ACTIONS(1545), 2,
      sym__non_zero,
      sym__zero,
    STATE(72), 2,
      aux_sym__digits,
      sym__digit,
  [22031] = 2,
    ACTIONS(1547), 2,
      sym__non_zero,
      sym__zero,
    STATE(599), 2,
      aux_sym__digits,
      sym__digit,
  [22040] = 2,
    ACTIONS(1549), 2,
      sym__non_zero,
      sym__zero,
    STATE(596), 2,
      aux_sym__digits,
      sym__digit,
  [22049] = 2,
    ACTIONS(1551), 2,
      sym__non_zero,
      sym__zero,
    STATE(601), 2,
      aux_sym__digits,
      sym__digit,
  [22058] = 4,
    ACTIONS(1553), 1,
      sym__non_zero,
    ACTIONS(1555), 1,
      sym__zero,
    STATE(27), 1,
      sym_non_negative_integer,
    STATE(92), 1,
      sym__positive_integer,
  [22071] = 2,
    ACTIONS(1372), 1,
      sym__pn_local,
    ACTIONS(129), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22080] = 2,
    ACTIONS(1557), 2,
      sym__non_zero,
      sym__zero,
    STATE(603), 2,
      aux_sym__digits,
      sym__digit,
  [22089] = 2,
    ACTIONS(1380), 1,
      sym__pn_local,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22098] = 2,
    ACTIONS(1330), 1,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22107] = 2,
    ACTIONS(1559), 2,
      sym__non_zero,
      sym__zero,
    STATE(304), 2,
      aux_sym__digits,
      sym__digit,
  [22116] = 2,
    ACTIONS(1561), 2,
      sym__non_zero,
      sym__zero,
    STATE(276), 2,
      aux_sym__digits,
      sym__digit,
  [22125] = 2,
    ACTIONS(1563), 2,
      sym__non_zero,
      sym__zero,
    STATE(612), 2,
      aux_sym__digits,
      sym__digit,
  [22134] = 2,
    ACTIONS(145), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1390), 2,
      anon_sym_not,
      sym__pn_local,
  [22143] = 2,
    ACTIONS(1565), 2,
      sym__non_zero,
      sym__zero,
    STATE(465), 2,
      aux_sym__digits,
      sym__digit,
  [22152] = 2,
    ACTIONS(1348), 1,
      sym__pn_local,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22161] = 2,
    ACTIONS(1306), 1,
      sym__pn_local,
    ACTIONS(124), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22170] = 2,
    ACTIONS(1567), 2,
      sym__non_zero,
      sym__zero,
    STATE(466), 2,
      aux_sym__digits,
      sym__digit,
  [22179] = 2,
    ACTIONS(1358), 1,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22188] = 2,
    ACTIONS(1569), 2,
      sym__non_zero,
      sym__zero,
    STATE(611), 2,
      aux_sym__digits,
      sym__digit,
  [22197] = 2,
    ACTIONS(1370), 1,
      sym__pn_local,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22206] = 2,
    ACTIONS(1384), 1,
      sym__pn_local,
    ACTIONS(133), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22215] = 2,
    ACTIONS(1364), 1,
      sym__pn_local,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22224] = 2,
    ACTIONS(1571), 2,
      sym__non_zero,
      sym__zero,
    STATE(389), 2,
      aux_sym__digits,
      sym__digit,
  [22233] = 2,
    ACTIONS(1573), 2,
      sym__non_zero,
      sym__zero,
    STATE(390), 2,
      aux_sym__digits,
      sym__digit,
  [22242] = 3,
    ACTIONS(1534), 1,
      anon_sym_or,
    STATE(774), 1,
      aux_sym_description_repeat1,
    ACTIONS(527), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22253] = 4,
    ACTIONS(1575), 1,
      sym__non_zero,
    ACTIONS(1577), 1,
      sym__zero,
    STATE(94), 1,
      sym_non_negative_integer,
    STATE(433), 1,
      sym__positive_integer,
  [22266] = 2,
    ACTIONS(1326), 1,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22275] = 2,
    ACTIONS(1579), 2,
      sym__non_zero,
      sym__zero,
    STATE(590), 2,
      aux_sym__digits,
      sym__digit,
  [22284] = 2,
    ACTIONS(1581), 2,
      sym__non_zero,
      sym__zero,
    STATE(447), 2,
      aux_sym__digits,
      sym__digit,
  [22293] = 2,
    ACTIONS(1340), 1,
      sym__pn_local,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22302] = 2,
    ACTIONS(1583), 2,
      sym__non_zero,
      sym__zero,
    STATE(451), 2,
      aux_sym__digits,
      sym__digit,
  [22311] = 2,
    ACTIONS(1585), 2,
      sym__non_zero,
      sym__zero,
    STATE(450), 2,
      aux_sym__digits,
      sym__digit,
  [22320] = 2,
    ACTIONS(1587), 2,
      sym__non_zero,
      sym__zero,
    STATE(445), 2,
      aux_sym__digits,
      sym__digit,
  [22329] = 4,
    ACTIONS(1589), 1,
      sym__iunreserved,
    STATE(873), 1,
      sym__ihost,
    STATE(882), 1,
      sym__iauthority,
    STATE(904), 1,
      sym__iuserinfo,
  [22342] = 2,
    ACTIONS(1591), 2,
      sym__non_zero,
      sym__zero,
    STATE(595), 2,
      aux_sym__digits,
      sym__digit,
  [22351] = 2,
    ACTIONS(642), 1,
      sym__pn_local,
    ACTIONS(11), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22360] = 2,
    ACTIONS(1593), 2,
      sym__non_zero,
      sym__zero,
    STATE(683), 2,
      aux_sym__digits,
      sym__digit,
  [22369] = 2,
    ACTIONS(656), 1,
      sym__pn_local,
    ACTIONS(9), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22378] = 2,
    ACTIONS(145), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1390), 2,
      anon_sym_inverse,
      sym__pn_local,
  [22387] = 4,
    ACTIONS(1595), 1,
      sym__non_zero,
    ACTIONS(1597), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(38), 1,
      sym__positive_integer,
  [22400] = 2,
    ACTIONS(654), 1,
      sym__pn_local,
    ACTIONS(7), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [22409] = 2,
    ACTIONS(1599), 2,
      sym__non_zero,
      sym__zero,
    STATE(617), 2,
      aux_sym__digits,
      sym__digit,
  [22418] = 4,
    ACTIONS(1601), 1,
      sym__non_zero,
    ACTIONS(1603), 1,
      sym__zero,
    STATE(6), 1,
      sym_non_negative_integer,
    STATE(46), 1,
      sym__positive_integer,
  [22431] = 2,
    ACTIONS(1605), 2,
      sym__non_zero,
      sym__zero,
    STATE(610), 2,
      aux_sym__digits,
      sym__digit,
  [22440] = 2,
    ACTIONS(1607), 2,
      sym__non_zero,
      sym__zero,
    STATE(22), 2,
      aux_sym__digits,
      sym__digit,
  [22449] = 2,
    ACTIONS(145), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(1390), 2,
      anon_sym__COLON,
      sym__pn_local,
  [22458] = 4,
    ACTIONS(1609), 1,
      sym__non_zero,
    ACTIONS(1611), 1,
      sym__zero,
    STATE(7), 1,
      sym_non_negative_integer,
    STATE(57), 1,
      sym__positive_integer,
  [22471] = 2,
    ACTIONS(1613), 2,
      sym__non_zero,
      sym__zero,
    STATE(456), 2,
      aux_sym__digits,
      sym__digit,
  [22480] = 2,
    ACTIONS(1615), 2,
      sym__non_zero,
      sym__zero,
    STATE(457), 2,
      aux_sym__digits,
      sym__digit,
  [22489] = 2,
    ACTIONS(1617), 2,
      sym__non_zero,
      sym__zero,
    STATE(607), 2,
      aux_sym__digits,
      sym__digit,
  [22498] = 3,
    ACTIONS(1619), 1,
      anon_sym_RBRACE,
    ACTIONS(1621), 1,
      anon_sym_COMMA,
    STATE(842), 1,
      aux_sym_individual_2list_repeat1,
  [22508] = 3,
    ACTIONS(1623), 1,
      anon_sym_RBRACE,
    ACTIONS(1625), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym__literal_list_repeat1,
  [22518] = 3,
    ACTIONS(1628), 1,
      anon_sym_COMMA,
    ACTIONS(1630), 1,
      anon_sym_RBRACK,
    STATE(834), 1,
      aux_sym__datatype_restriction_repeat1,
  [22528] = 3,
    ACTIONS(1632), 1,
      anon_sym_RBRACE,
    ACTIONS(1634), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym__literal_list_repeat1,
  [22538] = 3,
    ACTIONS(1628), 1,
      anon_sym_COMMA,
    ACTIONS(1636), 1,
      anon_sym_RBRACK,
    STATE(835), 1,
      aux_sym__datatype_restriction_repeat1,
  [22548] = 3,
    ACTIONS(1638), 1,
      anon_sym_COMMA,
    ACTIONS(1641), 1,
      anon_sym_RBRACK,
    STATE(835), 1,
      aux_sym__datatype_restriction_repeat1,
  [22558] = 3,
    ACTIONS(1342), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(1643), 1,
      anon_sym_Functional,
    STATE(915), 1,
      sym__annotations,
  [22568] = 2,
    ACTIONS(1390), 1,
      sym__pn_local,
    ACTIONS(145), 2,
      anon_sym_LT,
      sym__pname_ln,
  [22576] = 3,
    ACTIONS(1645), 1,
      anon_sym_GT,
    ACTIONS(1647), 1,
      sym__iquery,
    ACTIONS(1649), 1,
      sym__ifragment,
  [22586] = 3,
    ACTIONS(1634), 1,
      anon_sym_COMMA,
    ACTIONS(1651), 1,
      anon_sym_RBRACE,
    STATE(833), 1,
      aux_sym__literal_list_repeat1,
  [22596] = 2,
    ACTIONS(1655), 1,
      anon_sym_AT,
    ACTIONS(1653), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [22604] = 3,
    ACTIONS(1621), 1,
      anon_sym_COMMA,
    ACTIONS(1657), 1,
      anon_sym_RBRACE,
    STATE(830), 1,
      aux_sym_individual_2list_repeat1,
  [22614] = 3,
    ACTIONS(1170), 1,
      anon_sym_RBRACE,
    ACTIONS(1659), 1,
      anon_sym_COMMA,
    STATE(842), 1,
      aux_sym_individual_2list_repeat1,
  [22624] = 2,
    ACTIONS(1662), 1,
      sym__iunreserved,
    STATE(854), 1,
      sym__ihost,
  [22631] = 1,
    ACTIONS(1424), 2,
      anon_sym_f,
      anon_sym_F,
  [22636] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(932), 1,
      sym__iri_rfc3987,
  [22643] = 2,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(867), 1,
      sym_full_iri,
  [22650] = 1,
    ACTIONS(1666), 2,
      anon_sym_f,
      anon_sym_F,
  [22655] = 1,
    ACTIONS(1405), 2,
      anon_sym_f,
      anon_sym_F,
  [22660] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(910), 1,
      sym__iri_rfc3987,
  [22667] = 1,
    ACTIONS(1420), 2,
      anon_sym_f,
      anon_sym_F,
  [22672] = 1,
    ACTIONS(1422), 2,
      anon_sym_f,
      anon_sym_F,
  [22677] = 1,
    ACTIONS(79), 2,
      anon_sym_f,
      anon_sym_F,
  [22682] = 1,
    ACTIONS(1426), 2,
      anon_sym_f,
      anon_sym_F,
  [22687] = 2,
    ACTIONS(1668), 1,
      anon_sym_COLON,
    ACTIONS(1670), 1,
      anon_sym_SLASH,
  [22694] = 1,
    ACTIONS(1672), 2,
      anon_sym_f,
      anon_sym_F,
  [22699] = 1,
    ACTIONS(1674), 2,
      anon_sym_f,
      anon_sym_F,
  [22704] = 1,
    ACTIONS(1623), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [22709] = 2,
    ACTIONS(1676), 1,
      anon_sym_SLASH_SLASH,
    STATE(838), 1,
      sym__ihier_part,
  [22716] = 1,
    ACTIONS(1678), 2,
      anon_sym_f,
      anon_sym_F,
  [22721] = 1,
    ACTIONS(1680), 2,
      anon_sym_f,
      anon_sym_F,
  [22726] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(937), 1,
      sym__iri_rfc3987,
  [22733] = 1,
    ACTIONS(90), 2,
      anon_sym_f,
      anon_sym_F,
  [22738] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(914), 1,
      sym__iri_rfc3987,
  [22745] = 1,
    ACTIONS(1682), 2,
      anon_sym_f,
      anon_sym_F,
  [22750] = 1,
    ACTIONS(1684), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [22755] = 1,
    ACTIONS(100), 2,
      anon_sym_f,
      anon_sym_F,
  [22760] = 1,
    ACTIONS(1686), 2,
      anon_sym_Prefix_COLON,
      anon_sym_Ontology_COLON,
  [22765] = 1,
    ACTIONS(1416), 2,
      anon_sym_f,
      anon_sym_F,
  [22770] = 1,
    ACTIONS(1394), 2,
      anon_sym_f,
      anon_sym_F,
  [22775] = 1,
    ACTIONS(1688), 2,
      anon_sym_f,
      anon_sym_F,
  [22780] = 2,
    ACTIONS(1690), 1,
      anon_sym_GT,
    ACTIONS(1692), 1,
      sym__ifragment,
  [22787] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(922), 1,
      sym__iri_rfc3987,
  [22794] = 2,
    ACTIONS(1694), 1,
      anon_sym_COLON,
    ACTIONS(1696), 1,
      anon_sym_SLASH,
  [22801] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(918), 1,
      sym__iri_rfc3987,
  [22808] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(911), 1,
      sym__iri_rfc3987,
  [22815] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(907), 1,
      sym__iri_rfc3987,
  [22822] = 1,
    ACTIONS(1698), 2,
      anon_sym_f,
      anon_sym_F,
  [22827] = 1,
    ACTIONS(1700), 2,
      anon_sym_f,
      anon_sym_F,
  [22832] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(938), 1,
      sym__iri_rfc3987,
  [22839] = 1,
    ACTIONS(1414), 2,
      anon_sym_f,
      anon_sym_F,
  [22844] = 1,
    ACTIONS(1702), 2,
      anon_sym_f,
      anon_sym_F,
  [22849] = 2,
    ACTIONS(1474), 1,
      anon_sym_SLASH,
    STATE(702), 1,
      aux_sym__ipath_abempty,
  [22856] = 1,
    ACTIONS(1412), 2,
      anon_sym_f,
      anon_sym_F,
  [22861] = 1,
    ACTIONS(1704), 2,
      anon_sym_f,
      anon_sym_F,
  [22866] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(899), 1,
      sym__iri_rfc3987,
  [22873] = 1,
    ACTIONS(1401), 2,
      anon_sym_f,
      anon_sym_F,
  [22878] = 2,
    ACTIONS(1706), 1,
      sym__iunreserved,
    STATE(772), 1,
      sym__isegment,
  [22885] = 1,
    ACTIONS(1708), 2,
      anon_sym_f,
      anon_sym_F,
  [22890] = 2,
    ACTIONS(1664), 1,
      sym__scheme,
    STATE(902), 1,
      sym__iri_rfc3987,
  [22897] = 1,
    ACTIONS(1710), 2,
      anon_sym_f,
      anon_sym_F,
  [22902] = 1,
    ACTIONS(1418), 2,
      anon_sym_f,
      anon_sym_F,
  [22907] = 1,
    ACTIONS(1407), 2,
      anon_sym_f,
      anon_sym_F,
  [22912] = 1,
    ACTIONS(1712), 1,
      anon_sym_CARET_CARET,
  [22916] = 1,
    ACTIONS(1714), 1,
      sym__pn_local,
  [22920] = 1,
    ACTIONS(1716), 1,
      sym_prefix_name,
  [22924] = 1,
    ACTIONS(1718), 1,
      anon_sym_RPAREN,
  [22928] = 1,
    ACTIONS(1720), 1,
      anon_sym_CARET_CARET,
  [22932] = 1,
    ACTIONS(1722), 1,
      sym__pn_local,
  [22936] = 1,
    ACTIONS(1724), 1,
      anon_sym_GT,
  [22940] = 1,
    ACTIONS(1726), 1,
      sym__pn_local,
  [22944] = 1,
    ACTIONS(1728), 1,
      anon_sym_CARET_CARET,
  [22948] = 1,
    ACTIONS(1730), 1,
      anon_sym_GT,
  [22952] = 1,
    ACTIONS(1732), 1,
      sym__pn_local,
  [22956] = 1,
    ACTIONS(1734), 1,
      anon_sym_AT,
  [22960] = 1,
    ACTIONS(1736), 1,
      anon_sym_value,
  [22964] = 1,
    ACTIONS(1738), 1,
      anon_sym_COMMA,
  [22968] = 1,
    ACTIONS(1740), 1,
      anon_sym_GT,
  [22972] = 1,
    ACTIONS(1742), 1,
      anon_sym_CARET_CARET,
  [22976] = 1,
    ACTIONS(1690), 1,
      anon_sym_GT,
  [22980] = 1,
    ACTIONS(1744), 1,
      anon_sym_GT,
  [22984] = 1,
    ACTIONS(1746), 1,
      anon_sym_GT,
  [22988] = 1,
    ACTIONS(1748), 1,
      sym__pn_local,
  [22992] = 1,
    ACTIONS(1750), 1,
      anon_sym_COLON,
  [22996] = 1,
    ACTIONS(1752), 1,
      anon_sym_GT,
  [23000] = 1,
    ACTIONS(1754), 1,
      anon_sym_Functional,
  [23004] = 1,
    ACTIONS(1756), 1,
      anon_sym_COMMA,
  [23008] = 1,
    ACTIONS(1759), 1,
      ts_builtin_sym_end,
  [23012] = 1,
    ACTIONS(1761), 1,
      anon_sym_GT,
  [23016] = 1,
    ACTIONS(1763), 1,
      anon_sym_RBRACE,
  [23020] = 1,
    ACTIONS(1765), 1,
      sym__port,
  [23024] = 1,
    ACTIONS(1767), 1,
      anon_sym_SLASH,
  [23028] = 1,
    ACTIONS(1769), 1,
      anon_sym_GT,
  [23032] = 1,
    ACTIONS(1771), 1,
      anon_sym_GT,
  [23036] = 1,
    ACTIONS(1773), 1,
      anon_sym_COMMA,
  [23040] = 1,
    ACTIONS(1775), 1,
      sym__port,
  [23044] = 1,
    ACTIONS(1763), 1,
      anon_sym_RPAREN,
  [23048] = 1,
    ACTIONS(1777), 1,
      anon_sym_COMMA,
  [23052] = 1,
    ACTIONS(1779), 1,
      anon_sym_CARET_CARET,
  [23056] = 1,
    ACTIONS(1718), 1,
      anon_sym_RBRACE,
  [23060] = 1,
    ACTIONS(1781), 1,
      sym__pn_local,
  [23064] = 1,
    ACTIONS(1670), 1,
      anon_sym_SLASH,
  [23068] = 1,
    ACTIONS(1783), 1,
      anon_sym_GT,
  [23072] = 1,
    ACTIONS(1785), 1,
      anon_sym_CARET_CARET,
  [23076] = 1,
    ACTIONS(1787), 1,
      anon_sym_CARET_CARET,
  [23080] = 1,
    ACTIONS(1789), 1,
      anon_sym_CARET_CARET,
  [23084] = 1,
    ACTIONS(1791), 1,
      anon_sym_COMMA,
  [23088] = 1,
    ACTIONS(1793), 1,
      anon_sym_GT,
  [23092] = 1,
    ACTIONS(1795), 1,
      anon_sym_GT,
  [23096] = 1,
    ACTIONS(1797), 1,
      sym__pn_local,
  [23100] = 1,
    ACTIONS(1799), 1,
      ts_builtin_sym_end,
  [23104] = 1,
    ACTIONS(1801), 1,
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
  [SMALL_STATE(9)] = 460,
  [SMALL_STATE(10)] = 511,
  [SMALL_STATE(11)] = 557,
  [SMALL_STATE(12)] = 602,
  [SMALL_STATE(13)] = 647,
  [SMALL_STATE(14)] = 692,
  [SMALL_STATE(15)] = 737,
  [SMALL_STATE(16)] = 782,
  [SMALL_STATE(17)] = 827,
  [SMALL_STATE(18)] = 872,
  [SMALL_STATE(19)] = 916,
  [SMALL_STATE(20)] = 974,
  [SMALL_STATE(21)] = 1032,
  [SMALL_STATE(22)] = 1081,
  [SMALL_STATE(23)] = 1136,
  [SMALL_STATE(24)] = 1185,
  [SMALL_STATE(25)] = 1240,
  [SMALL_STATE(26)] = 1289,
  [SMALL_STATE(27)] = 1338,
  [SMALL_STATE(28)] = 1406,
  [SMALL_STATE(29)] = 1453,
  [SMALL_STATE(30)] = 1500,
  [SMALL_STATE(31)] = 1547,
  [SMALL_STATE(32)] = 1587,
  [SMALL_STATE(33)] = 1633,
  [SMALL_STATE(34)] = 1673,
  [SMALL_STATE(35)] = 1719,
  [SMALL_STATE(36)] = 1759,
  [SMALL_STATE(37)] = 1805,
  [SMALL_STATE(38)] = 1850,
  [SMALL_STATE(39)] = 1891,
  [SMALL_STATE(40)] = 1936,
  [SMALL_STATE(41)] = 1975,
  [SMALL_STATE(42)] = 2020,
  [SMALL_STATE(43)] = 2094,
  [SMALL_STATE(44)] = 2168,
  [SMALL_STATE(45)] = 2205,
  [SMALL_STATE(46)] = 2244,
  [SMALL_STATE(47)] = 2283,
  [SMALL_STATE(48)] = 2329,
  [SMALL_STATE(49)] = 2365,
  [SMALL_STATE(50)] = 2401,
  [SMALL_STATE(51)] = 2437,
  [SMALL_STATE(52)] = 2473,
  [SMALL_STATE(53)] = 2509,
  [SMALL_STATE(54)] = 2545,
  [SMALL_STATE(55)] = 2581,
  [SMALL_STATE(56)] = 2617,
  [SMALL_STATE(57)] = 2653,
  [SMALL_STATE(58)] = 2691,
  [SMALL_STATE(59)] = 2727,
  [SMALL_STATE(60)] = 2763,
  [SMALL_STATE(61)] = 2809,
  [SMALL_STATE(62)] = 2845,
  [SMALL_STATE(63)] = 2882,
  [SMALL_STATE(64)] = 2925,
  [SMALL_STATE(65)] = 2960,
  [SMALL_STATE(66)] = 3004,
  [SMALL_STATE(67)] = 3044,
  [SMALL_STATE(68)] = 3084,
  [SMALL_STATE(69)] = 3124,
  [SMALL_STATE(70)] = 3168,
  [SMALL_STATE(71)] = 3218,
  [SMALL_STATE(72)] = 3268,
  [SMALL_STATE(73)] = 3315,
  [SMALL_STATE(74)] = 3348,
  [SMALL_STATE(75)] = 3391,
  [SMALL_STATE(76)] = 3438,
  [SMALL_STATE(77)] = 3471,
  [SMALL_STATE(78)] = 3510,
  [SMALL_STATE(79)] = 3551,
  [SMALL_STATE(80)] = 3594,
  [SMALL_STATE(81)] = 3634,
  [SMALL_STATE(82)] = 3680,
  [SMALL_STATE(83)] = 3726,
  [SMALL_STATE(84)] = 3768,
  [SMALL_STATE(85)] = 3810,
  [SMALL_STATE(86)] = 3856,
  [SMALL_STATE(87)] = 3915,
  [SMALL_STATE(88)] = 3974,
  [SMALL_STATE(89)] = 4035,
  [SMALL_STATE(90)] = 4074,
  [SMALL_STATE(91)] = 4133,
  [SMALL_STATE(92)] = 4192,
  [SMALL_STATE(93)] = 4224,
  [SMALL_STATE(94)] = 4258,
  [SMALL_STATE(95)] = 4314,
  [SMALL_STATE(96)] = 4348,
  [SMALL_STATE(97)] = 4410,
  [SMALL_STATE(98)] = 4444,
  [SMALL_STATE(99)] = 4478,
  [SMALL_STATE(100)] = 4512,
  [SMALL_STATE(101)] = 4545,
  [SMALL_STATE(102)] = 4578,
  [SMALL_STATE(103)] = 4629,
  [SMALL_STATE(104)] = 4680,
  [SMALL_STATE(105)] = 4713,
  [SMALL_STATE(106)] = 4764,
  [SMALL_STATE(107)] = 4815,
  [SMALL_STATE(108)] = 4848,
  [SMALL_STATE(109)] = 4881,
  [SMALL_STATE(110)] = 4936,
  [SMALL_STATE(111)] = 4987,
  [SMALL_STATE(112)] = 5020,
  [SMALL_STATE(113)] = 5053,
  [SMALL_STATE(114)] = 5104,
  [SMALL_STATE(115)] = 5155,
  [SMALL_STATE(116)] = 5206,
  [SMALL_STATE(117)] = 5257,
  [SMALL_STATE(118)] = 5290,
  [SMALL_STATE(119)] = 5322,
  [SMALL_STATE(120)] = 5374,
  [SMALL_STATE(121)] = 5402,
  [SMALL_STATE(122)] = 5434,
  [SMALL_STATE(123)] = 5486,
  [SMALL_STATE(124)] = 5538,
  [SMALL_STATE(125)] = 5590,
  [SMALL_STATE(126)] = 5622,
  [SMALL_STATE(127)] = 5654,
  [SMALL_STATE(128)] = 5686,
  [SMALL_STATE(129)] = 5718,
  [SMALL_STATE(130)] = 5770,
  [SMALL_STATE(131)] = 5822,
  [SMALL_STATE(132)] = 5859,
  [SMALL_STATE(133)] = 5890,
  [SMALL_STATE(134)] = 5921,
  [SMALL_STATE(135)] = 5952,
  [SMALL_STATE(136)] = 5983,
  [SMALL_STATE(137)] = 6014,
  [SMALL_STATE(138)] = 6045,
  [SMALL_STATE(139)] = 6076,
  [SMALL_STATE(140)] = 6107,
  [SMALL_STATE(141)] = 6138,
  [SMALL_STATE(142)] = 6169,
  [SMALL_STATE(143)] = 6200,
  [SMALL_STATE(144)] = 6231,
  [SMALL_STATE(145)] = 6262,
  [SMALL_STATE(146)] = 6301,
  [SMALL_STATE(147)] = 6332,
  [SMALL_STATE(148)] = 6369,
  [SMALL_STATE(149)] = 6400,
  [SMALL_STATE(150)] = 6431,
  [SMALL_STATE(151)] = 6462,
  [SMALL_STATE(152)] = 6493,
  [SMALL_STATE(153)] = 6524,
  [SMALL_STATE(154)] = 6555,
  [SMALL_STATE(155)] = 6586,
  [SMALL_STATE(156)] = 6617,
  [SMALL_STATE(157)] = 6656,
  [SMALL_STATE(158)] = 6687,
  [SMALL_STATE(159)] = 6718,
  [SMALL_STATE(160)] = 6749,
  [SMALL_STATE(161)] = 6780,
  [SMALL_STATE(162)] = 6811,
  [SMALL_STATE(163)] = 6850,
  [SMALL_STATE(164)] = 6881,
  [SMALL_STATE(165)] = 6912,
  [SMALL_STATE(166)] = 6943,
  [SMALL_STATE(167)] = 6970,
  [SMALL_STATE(168)] = 7001,
  [SMALL_STATE(169)] = 7029,
  [SMALL_STATE(170)] = 7059,
  [SMALL_STATE(171)] = 7089,
  [SMALL_STATE(172)] = 7115,
  [SMALL_STATE(173)] = 7145,
  [SMALL_STATE(174)] = 7171,
  [SMALL_STATE(175)] = 7219,
  [SMALL_STATE(176)] = 7249,
  [SMALL_STATE(177)] = 7277,
  [SMALL_STATE(178)] = 7325,
  [SMALL_STATE(179)] = 7353,
  [SMALL_STATE(180)] = 7379,
  [SMALL_STATE(181)] = 7407,
  [SMALL_STATE(182)] = 7433,
  [SMALL_STATE(183)] = 7481,
  [SMALL_STATE(184)] = 7511,
  [SMALL_STATE(185)] = 7537,
  [SMALL_STATE(186)] = 7585,
  [SMALL_STATE(187)] = 7611,
  [SMALL_STATE(188)] = 7637,
  [SMALL_STATE(189)] = 7671,
  [SMALL_STATE(190)] = 7697,
  [SMALL_STATE(191)] = 7727,
  [SMALL_STATE(192)] = 7781,
  [SMALL_STATE(193)] = 7829,
  [SMALL_STATE(194)] = 7855,
  [SMALL_STATE(195)] = 7885,
  [SMALL_STATE(196)] = 7933,
  [SMALL_STATE(197)] = 7963,
  [SMALL_STATE(198)] = 7993,
  [SMALL_STATE(199)] = 8019,
  [SMALL_STATE(200)] = 8049,
  [SMALL_STATE(201)] = 8077,
  [SMALL_STATE(202)] = 8107,
  [SMALL_STATE(203)] = 8136,
  [SMALL_STATE(204)] = 8165,
  [SMALL_STATE(205)] = 8206,
  [SMALL_STATE(206)] = 8235,
  [SMALL_STATE(207)] = 8264,
  [SMALL_STATE(208)] = 8309,
  [SMALL_STATE(209)] = 8338,
  [SMALL_STATE(210)] = 8367,
  [SMALL_STATE(211)] = 8412,
  [SMALL_STATE(212)] = 8463,
  [SMALL_STATE(213)] = 8492,
  [SMALL_STATE(214)] = 8521,
  [SMALL_STATE(215)] = 8562,
  [SMALL_STATE(216)] = 8591,
  [SMALL_STATE(217)] = 8632,
  [SMALL_STATE(218)] = 8661,
  [SMALL_STATE(219)] = 8712,
  [SMALL_STATE(220)] = 8741,
  [SMALL_STATE(221)] = 8770,
  [SMALL_STATE(222)] = 8799,
  [SMALL_STATE(223)] = 8824,
  [SMALL_STATE(224)] = 8869,
  [SMALL_STATE(225)] = 8898,
  [SMALL_STATE(226)] = 8943,
  [SMALL_STATE(227)] = 8988,
  [SMALL_STATE(228)] = 9033,
  [SMALL_STATE(229)] = 9062,
  [SMALL_STATE(230)] = 9091,
  [SMALL_STATE(231)] = 9136,
  [SMALL_STATE(232)] = 9181,
  [SMALL_STATE(233)] = 9226,
  [SMALL_STATE(234)] = 9271,
  [SMALL_STATE(235)] = 9300,
  [SMALL_STATE(236)] = 9329,
  [SMALL_STATE(237)] = 9358,
  [SMALL_STATE(238)] = 9387,
  [SMALL_STATE(239)] = 9416,
  [SMALL_STATE(240)] = 9445,
  [SMALL_STATE(241)] = 9474,
  [SMALL_STATE(242)] = 9503,
  [SMALL_STATE(243)] = 9532,
  [SMALL_STATE(244)] = 9583,
  [SMALL_STATE(245)] = 9628,
  [SMALL_STATE(246)] = 9673,
  [SMALL_STATE(247)] = 9718,
  [SMALL_STATE(248)] = 9747,
  [SMALL_STATE(249)] = 9785,
  [SMALL_STATE(250)] = 9813,
  [SMALL_STATE(251)] = 9851,
  [SMALL_STATE(252)] = 9889,
  [SMALL_STATE(253)] = 9917,
  [SMALL_STATE(254)] = 9941,
  [SMALL_STATE(255)] = 9967,
  [SMALL_STATE(256)] = 9993,
  [SMALL_STATE(257)] = 10021,
  [SMALL_STATE(258)] = 10045,
  [SMALL_STATE(259)] = 10083,
  [SMALL_STATE(260)] = 10109,
  [SMALL_STATE(261)] = 10137,
  [SMALL_STATE(262)] = 10165,
  [SMALL_STATE(263)] = 10193,
  [SMALL_STATE(264)] = 10217,
  [SMALL_STATE(265)] = 10245,
  [SMALL_STATE(266)] = 10269,
  [SMALL_STATE(267)] = 10297,
  [SMALL_STATE(268)] = 10325,
  [SMALL_STATE(269)] = 10353,
  [SMALL_STATE(270)] = 10381,
  [SMALL_STATE(271)] = 10419,
  [SMALL_STATE(272)] = 10446,
  [SMALL_STATE(273)] = 10497,
  [SMALL_STATE(274)] = 10524,
  [SMALL_STATE(275)] = 10551,
  [SMALL_STATE(276)] = 10578,
  [SMALL_STATE(277)] = 10613,
  [SMALL_STATE(278)] = 10636,
  [SMALL_STATE(279)] = 10659,
  [SMALL_STATE(280)] = 10704,
  [SMALL_STATE(281)] = 10727,
  [SMALL_STATE(282)] = 10750,
  [SMALL_STATE(283)] = 10773,
  [SMALL_STATE(284)] = 10800,
  [SMALL_STATE(285)] = 10823,
  [SMALL_STATE(286)] = 10868,
  [SMALL_STATE(287)] = 10919,
  [SMALL_STATE(288)] = 10964,
  [SMALL_STATE(289)] = 11009,
  [SMALL_STATE(290)] = 11042,
  [SMALL_STATE(291)] = 11069,
  [SMALL_STATE(292)] = 11096,
  [SMALL_STATE(293)] = 11123,
  [SMALL_STATE(294)] = 11168,
  [SMALL_STATE(295)] = 11195,
  [SMALL_STATE(296)] = 11222,
  [SMALL_STATE(297)] = 11267,
  [SMALL_STATE(298)] = 11312,
  [SMALL_STATE(299)] = 11357,
  [SMALL_STATE(300)] = 11380,
  [SMALL_STATE(301)] = 11431,
  [SMALL_STATE(302)] = 11460,
  [SMALL_STATE(303)] = 11511,
  [SMALL_STATE(304)] = 11538,
  [SMALL_STATE(305)] = 11573,
  [SMALL_STATE(306)] = 11600,
  [SMALL_STATE(307)] = 11651,
  [SMALL_STATE(308)] = 11696,
  [SMALL_STATE(309)] = 11741,
  [SMALL_STATE(310)] = 11768,
  [SMALL_STATE(311)] = 11795,
  [SMALL_STATE(312)] = 11822,
  [SMALL_STATE(313)] = 11849,
  [SMALL_STATE(314)] = 11882,
  [SMALL_STATE(315)] = 11915,
  [SMALL_STATE(316)] = 11942,
  [SMALL_STATE(317)] = 11969,
  [SMALL_STATE(318)] = 12020,
  [SMALL_STATE(319)] = 12071,
  [SMALL_STATE(320)] = 12098,
  [SMALL_STATE(321)] = 12149,
  [SMALL_STATE(322)] = 12194,
  [SMALL_STATE(323)] = 12221,
  [SMALL_STATE(324)] = 12249,
  [SMALL_STATE(325)] = 12271,
  [SMALL_STATE(326)] = 12293,
  [SMALL_STATE(327)] = 12315,
  [SMALL_STATE(328)] = 12337,
  [SMALL_STATE(329)] = 12367,
  [SMALL_STATE(330)] = 12415,
  [SMALL_STATE(331)] = 12443,
  [SMALL_STATE(332)] = 12465,
  [SMALL_STATE(333)] = 12513,
  [SMALL_STATE(334)] = 12535,
  [SMALL_STATE(335)] = 12557,
  [SMALL_STATE(336)] = 12585,
  [SMALL_STATE(337)] = 12607,
  [SMALL_STATE(338)] = 12629,
  [SMALL_STATE(339)] = 12677,
  [SMALL_STATE(340)] = 12707,
  [SMALL_STATE(341)] = 12729,
  [SMALL_STATE(342)] = 12757,
  [SMALL_STATE(343)] = 12783,
  [SMALL_STATE(344)] = 12813,
  [SMALL_STATE(345)] = 12835,
  [SMALL_STATE(346)] = 12857,
  [SMALL_STATE(347)] = 12905,
  [SMALL_STATE(348)] = 12931,
  [SMALL_STATE(349)] = 12957,
  [SMALL_STATE(350)] = 12999,
  [SMALL_STATE(351)] = 13021,
  [SMALL_STATE(352)] = 13047,
  [SMALL_STATE(353)] = 13082,
  [SMALL_STATE(354)] = 13117,
  [SMALL_STATE(355)] = 13156,
  [SMALL_STATE(356)] = 13201,
  [SMALL_STATE(357)] = 13246,
  [SMALL_STATE(358)] = 13281,
  [SMALL_STATE(359)] = 13316,
  [SMALL_STATE(360)] = 13337,
  [SMALL_STATE(361)] = 13369,
  [SMALL_STATE(362)] = 13411,
  [SMALL_STATE(363)] = 13435,
  [SMALL_STATE(364)] = 13477,
  [SMALL_STATE(365)] = 13519,
  [SMALL_STATE(366)] = 13545,
  [SMALL_STATE(367)] = 13579,
  [SMALL_STATE(368)] = 13603,
  [SMALL_STATE(369)] = 13629,
  [SMALL_STATE(370)] = 13653,
  [SMALL_STATE(371)] = 13695,
  [SMALL_STATE(372)] = 13719,
  [SMALL_STATE(373)] = 13743,
  [SMALL_STATE(374)] = 13769,
  [SMALL_STATE(375)] = 13801,
  [SMALL_STATE(376)] = 13825,
  [SMALL_STATE(377)] = 13849,
  [SMALL_STATE(378)] = 13891,
  [SMALL_STATE(379)] = 13917,
  [SMALL_STATE(380)] = 13937,
  [SMALL_STATE(381)] = 13961,
  [SMALL_STATE(382)] = 14003,
  [SMALL_STATE(383)] = 14045,
  [SMALL_STATE(384)] = 14069,
  [SMALL_STATE(385)] = 14111,
  [SMALL_STATE(386)] = 14153,
  [SMALL_STATE(387)] = 14177,
  [SMALL_STATE(388)] = 14219,
  [SMALL_STATE(389)] = 14261,
  [SMALL_STATE(390)] = 14293,
  [SMALL_STATE(391)] = 14325,
  [SMALL_STATE(392)] = 14367,
  [SMALL_STATE(393)] = 14393,
  [SMALL_STATE(394)] = 14435,
  [SMALL_STATE(395)] = 14474,
  [SMALL_STATE(396)] = 14505,
  [SMALL_STATE(397)] = 14528,
  [SMALL_STATE(398)] = 14551,
  [SMALL_STATE(399)] = 14574,
  [SMALL_STATE(400)] = 14605,
  [SMALL_STATE(401)] = 14644,
  [SMALL_STATE(402)] = 14675,
  [SMALL_STATE(403)] = 14698,
  [SMALL_STATE(404)] = 14721,
  [SMALL_STATE(405)] = 14760,
  [SMALL_STATE(406)] = 14783,
  [SMALL_STATE(407)] = 14822,
  [SMALL_STATE(408)] = 14847,
  [SMALL_STATE(409)] = 14870,
  [SMALL_STATE(410)] = 14909,
  [SMALL_STATE(411)] = 14940,
  [SMALL_STATE(412)] = 14979,
  [SMALL_STATE(413)] = 15002,
  [SMALL_STATE(414)] = 15025,
  [SMALL_STATE(415)] = 15048,
  [SMALL_STATE(416)] = 15083,
  [SMALL_STATE(417)] = 15114,
  [SMALL_STATE(418)] = 15137,
  [SMALL_STATE(419)] = 15159,
  [SMALL_STATE(420)] = 15195,
  [SMALL_STATE(421)] = 15217,
  [SMALL_STATE(422)] = 15253,
  [SMALL_STATE(423)] = 15275,
  [SMALL_STATE(424)] = 15297,
  [SMALL_STATE(425)] = 15333,
  [SMALL_STATE(426)] = 15355,
  [SMALL_STATE(427)] = 15373,
  [SMALL_STATE(428)] = 15395,
  [SMALL_STATE(429)] = 15427,
  [SMALL_STATE(430)] = 15445,
  [SMALL_STATE(431)] = 15467,
  [SMALL_STATE(432)] = 15489,
  [SMALL_STATE(433)] = 15511,
  [SMALL_STATE(434)] = 15531,
  [SMALL_STATE(435)] = 15553,
  [SMALL_STATE(436)] = 15589,
  [SMALL_STATE(437)] = 15621,
  [SMALL_STATE(438)] = 15653,
  [SMALL_STATE(439)] = 15685,
  [SMALL_STATE(440)] = 15707,
  [SMALL_STATE(441)] = 15729,
  [SMALL_STATE(442)] = 15761,
  [SMALL_STATE(443)] = 15797,
  [SMALL_STATE(444)] = 15829,
  [SMALL_STATE(445)] = 15865,
  [SMALL_STATE(446)] = 15894,
  [SMALL_STATE(447)] = 15917,
  [SMALL_STATE(448)] = 15946,
  [SMALL_STATE(449)] = 15969,
  [SMALL_STATE(450)] = 16000,
  [SMALL_STATE(451)] = 16029,
  [SMALL_STATE(452)] = 16058,
  [SMALL_STATE(453)] = 16081,
  [SMALL_STATE(454)] = 16098,
  [SMALL_STATE(455)] = 16133,
  [SMALL_STATE(456)] = 16150,
  [SMALL_STATE(457)] = 16179,
  [SMALL_STATE(458)] = 16208,
  [SMALL_STATE(459)] = 16239,
  [SMALL_STATE(460)] = 16255,
  [SMALL_STATE(461)] = 16277,
  [SMALL_STATE(462)] = 16309,
  [SMALL_STATE(463)] = 16341,
  [SMALL_STATE(464)] = 16373,
  [SMALL_STATE(465)] = 16395,
  [SMALL_STATE(466)] = 16423,
  [SMALL_STATE(467)] = 16451,
  [SMALL_STATE(468)] = 16473,
  [SMALL_STATE(469)] = 16489,
  [SMALL_STATE(470)] = 16521,
  [SMALL_STATE(471)] = 16553,
  [SMALL_STATE(472)] = 16585,
  [SMALL_STATE(473)] = 16617,
  [SMALL_STATE(474)] = 16649,
  [SMALL_STATE(475)] = 16681,
  [SMALL_STATE(476)] = 16713,
  [SMALL_STATE(477)] = 16735,
  [SMALL_STATE(478)] = 16757,
  [SMALL_STATE(479)] = 16782,
  [SMALL_STATE(480)] = 16811,
  [SMALL_STATE(481)] = 16838,
  [SMALL_STATE(482)] = 16859,
  [SMALL_STATE(483)] = 16880,
  [SMALL_STATE(484)] = 16905,
  [SMALL_STATE(485)] = 16930,
  [SMALL_STATE(486)] = 16955,
  [SMALL_STATE(487)] = 16980,
  [SMALL_STATE(488)] = 17001,
  [SMALL_STATE(489)] = 17030,
  [SMALL_STATE(490)] = 17051,
  [SMALL_STATE(491)] = 17072,
  [SMALL_STATE(492)] = 17097,
  [SMALL_STATE(493)] = 17122,
  [SMALL_STATE(494)] = 17151,
  [SMALL_STATE(495)] = 17176,
  [SMALL_STATE(496)] = 17201,
  [SMALL_STATE(497)] = 17226,
  [SMALL_STATE(498)] = 17251,
  [SMALL_STATE(499)] = 17272,
  [SMALL_STATE(500)] = 17288,
  [SMALL_STATE(501)] = 17304,
  [SMALL_STATE(502)] = 17332,
  [SMALL_STATE(503)] = 17348,
  [SMALL_STATE(504)] = 17376,
  [SMALL_STATE(505)] = 17404,
  [SMALL_STATE(506)] = 17432,
  [SMALL_STATE(507)] = 17448,
  [SMALL_STATE(508)] = 17476,
  [SMALL_STATE(509)] = 17502,
  [SMALL_STATE(510)] = 17530,
  [SMALL_STATE(511)] = 17546,
  [SMALL_STATE(512)] = 17562,
  [SMALL_STATE(513)] = 17588,
  [SMALL_STATE(514)] = 17610,
  [SMALL_STATE(515)] = 17638,
  [SMALL_STATE(516)] = 17666,
  [SMALL_STATE(517)] = 17682,
  [SMALL_STATE(518)] = 17708,
  [SMALL_STATE(519)] = 17724,
  [SMALL_STATE(520)] = 17752,
  [SMALL_STATE(521)] = 17780,
  [SMALL_STATE(522)] = 17808,
  [SMALL_STATE(523)] = 17836,
  [SMALL_STATE(524)] = 17852,
  [SMALL_STATE(525)] = 17868,
  [SMALL_STATE(526)] = 17884,
  [SMALL_STATE(527)] = 17912,
  [SMALL_STATE(528)] = 17940,
  [SMALL_STATE(529)] = 17966,
  [SMALL_STATE(530)] = 17992,
  [SMALL_STATE(531)] = 18018,
  [SMALL_STATE(532)] = 18044,
  [SMALL_STATE(533)] = 18060,
  [SMALL_STATE(534)] = 18088,
  [SMALL_STATE(535)] = 18104,
  [SMALL_STATE(536)] = 18132,
  [SMALL_STATE(537)] = 18160,
  [SMALL_STATE(538)] = 18188,
  [SMALL_STATE(539)] = 18216,
  [SMALL_STATE(540)] = 18232,
  [SMALL_STATE(541)] = 18254,
  [SMALL_STATE(542)] = 18282,
  [SMALL_STATE(543)] = 18298,
  [SMALL_STATE(544)] = 18326,
  [SMALL_STATE(545)] = 18343,
  [SMALL_STATE(546)] = 18368,
  [SMALL_STATE(547)] = 18393,
  [SMALL_STATE(548)] = 18408,
  [SMALL_STATE(549)] = 18433,
  [SMALL_STATE(550)] = 18458,
  [SMALL_STATE(551)] = 18483,
  [SMALL_STATE(552)] = 18508,
  [SMALL_STATE(553)] = 18533,
  [SMALL_STATE(554)] = 18558,
  [SMALL_STATE(555)] = 18583,
  [SMALL_STATE(556)] = 18608,
  [SMALL_STATE(557)] = 18631,
  [SMALL_STATE(558)] = 18648,
  [SMALL_STATE(559)] = 18673,
  [SMALL_STATE(560)] = 18698,
  [SMALL_STATE(561)] = 18723,
  [SMALL_STATE(562)] = 18748,
  [SMALL_STATE(563)] = 18771,
  [SMALL_STATE(564)] = 18796,
  [SMALL_STATE(565)] = 18821,
  [SMALL_STATE(566)] = 18846,
  [SMALL_STATE(567)] = 18869,
  [SMALL_STATE(568)] = 18894,
  [SMALL_STATE(569)] = 18909,
  [SMALL_STATE(570)] = 18932,
  [SMALL_STATE(571)] = 18957,
  [SMALL_STATE(572)] = 18980,
  [SMALL_STATE(573)] = 19005,
  [SMALL_STATE(574)] = 19030,
  [SMALL_STATE(575)] = 19053,
  [SMALL_STATE(576)] = 19076,
  [SMALL_STATE(577)] = 19101,
  [SMALL_STATE(578)] = 19120,
  [SMALL_STATE(579)] = 19145,
  [SMALL_STATE(580)] = 19168,
  [SMALL_STATE(581)] = 19187,
  [SMALL_STATE(582)] = 19212,
  [SMALL_STATE(583)] = 19237,
  [SMALL_STATE(584)] = 19252,
  [SMALL_STATE(585)] = 19267,
  [SMALL_STATE(586)] = 19292,
  [SMALL_STATE(587)] = 19312,
  [SMALL_STATE(588)] = 19328,
  [SMALL_STATE(589)] = 19344,
  [SMALL_STATE(590)] = 19362,
  [SMALL_STATE(591)] = 19382,
  [SMALL_STATE(592)] = 19402,
  [SMALL_STATE(593)] = 19422,
  [SMALL_STATE(594)] = 19442,
  [SMALL_STATE(595)] = 19460,
  [SMALL_STATE(596)] = 19480,
  [SMALL_STATE(597)] = 19500,
  [SMALL_STATE(598)] = 19520,
  [SMALL_STATE(599)] = 19536,
  [SMALL_STATE(600)] = 19556,
  [SMALL_STATE(601)] = 19576,
  [SMALL_STATE(602)] = 19596,
  [SMALL_STATE(603)] = 19616,
  [SMALL_STATE(604)] = 19636,
  [SMALL_STATE(605)] = 19654,
  [SMALL_STATE(606)] = 19674,
  [SMALL_STATE(607)] = 19696,
  [SMALL_STATE(608)] = 19716,
  [SMALL_STATE(609)] = 19734,
  [SMALL_STATE(610)] = 19754,
  [SMALL_STATE(611)] = 19774,
  [SMALL_STATE(612)] = 19794,
  [SMALL_STATE(613)] = 19814,
  [SMALL_STATE(614)] = 19834,
  [SMALL_STATE(615)] = 19852,
  [SMALL_STATE(616)] = 19868,
  [SMALL_STATE(617)] = 19884,
  [SMALL_STATE(618)] = 19904,
  [SMALL_STATE(619)] = 19923,
  [SMALL_STATE(620)] = 19936,
  [SMALL_STATE(621)] = 19949,
  [SMALL_STATE(622)] = 19968,
  [SMALL_STATE(623)] = 19981,
  [SMALL_STATE(624)] = 20000,
  [SMALL_STATE(625)] = 20019,
  [SMALL_STATE(626)] = 20038,
  [SMALL_STATE(627)] = 20057,
  [SMALL_STATE(628)] = 20070,
  [SMALL_STATE(629)] = 20089,
  [SMALL_STATE(630)] = 20102,
  [SMALL_STATE(631)] = 20121,
  [SMALL_STATE(632)] = 20134,
  [SMALL_STATE(633)] = 20153,
  [SMALL_STATE(634)] = 20172,
  [SMALL_STATE(635)] = 20185,
  [SMALL_STATE(636)] = 20198,
  [SMALL_STATE(637)] = 20211,
  [SMALL_STATE(638)] = 20230,
  [SMALL_STATE(639)] = 20243,
  [SMALL_STATE(640)] = 20262,
  [SMALL_STATE(641)] = 20275,
  [SMALL_STATE(642)] = 20288,
  [SMALL_STATE(643)] = 20307,
  [SMALL_STATE(644)] = 20326,
  [SMALL_STATE(645)] = 20345,
  [SMALL_STATE(646)] = 20364,
  [SMALL_STATE(647)] = 20377,
  [SMALL_STATE(648)] = 20396,
  [SMALL_STATE(649)] = 20415,
  [SMALL_STATE(650)] = 20428,
  [SMALL_STATE(651)] = 20441,
  [SMALL_STATE(652)] = 20454,
  [SMALL_STATE(653)] = 20467,
  [SMALL_STATE(654)] = 20483,
  [SMALL_STATE(655)] = 20499,
  [SMALL_STATE(656)] = 20515,
  [SMALL_STATE(657)] = 20531,
  [SMALL_STATE(658)] = 20547,
  [SMALL_STATE(659)] = 20563,
  [SMALL_STATE(660)] = 20579,
  [SMALL_STATE(661)] = 20595,
  [SMALL_STATE(662)] = 20611,
  [SMALL_STATE(663)] = 20627,
  [SMALL_STATE(664)] = 20643,
  [SMALL_STATE(665)] = 20659,
  [SMALL_STATE(666)] = 20675,
  [SMALL_STATE(667)] = 20691,
  [SMALL_STATE(668)] = 20707,
  [SMALL_STATE(669)] = 20723,
  [SMALL_STATE(670)] = 20739,
  [SMALL_STATE(671)] = 20755,
  [SMALL_STATE(672)] = 20771,
  [SMALL_STATE(673)] = 20787,
  [SMALL_STATE(674)] = 20799,
  [SMALL_STATE(675)] = 20815,
  [SMALL_STATE(676)] = 20831,
  [SMALL_STATE(677)] = 20847,
  [SMALL_STATE(678)] = 20862,
  [SMALL_STATE(679)] = 20877,
  [SMALL_STATE(680)] = 20886,
  [SMALL_STATE(681)] = 20901,
  [SMALL_STATE(682)] = 20914,
  [SMALL_STATE(683)] = 20929,
  [SMALL_STATE(684)] = 20942,
  [SMALL_STATE(685)] = 20957,
  [SMALL_STATE(686)] = 20972,
  [SMALL_STATE(687)] = 20987,
  [SMALL_STATE(688)] = 21000,
  [SMALL_STATE(689)] = 21015,
  [SMALL_STATE(690)] = 21030,
  [SMALL_STATE(691)] = 21045,
  [SMALL_STATE(692)] = 21060,
  [SMALL_STATE(693)] = 21075,
  [SMALL_STATE(694)] = 21090,
  [SMALL_STATE(695)] = 21105,
  [SMALL_STATE(696)] = 21120,
  [SMALL_STATE(697)] = 21135,
  [SMALL_STATE(698)] = 21145,
  [SMALL_STATE(699)] = 21157,
  [SMALL_STATE(700)] = 21171,
  [SMALL_STATE(701)] = 21183,
  [SMALL_STATE(702)] = 21195,
  [SMALL_STATE(703)] = 21207,
  [SMALL_STATE(704)] = 21221,
  [SMALL_STATE(705)] = 21233,
  [SMALL_STATE(706)] = 21247,
  [SMALL_STATE(707)] = 21261,
  [SMALL_STATE(708)] = 21275,
  [SMALL_STATE(709)] = 21289,
  [SMALL_STATE(710)] = 21301,
  [SMALL_STATE(711)] = 21313,
  [SMALL_STATE(712)] = 21325,
  [SMALL_STATE(713)] = 21337,
  [SMALL_STATE(714)] = 21349,
  [SMALL_STATE(715)] = 21361,
  [SMALL_STATE(716)] = 21371,
  [SMALL_STATE(717)] = 21383,
  [SMALL_STATE(718)] = 21395,
  [SMALL_STATE(719)] = 21405,
  [SMALL_STATE(720)] = 21415,
  [SMALL_STATE(721)] = 21425,
  [SMALL_STATE(722)] = 21435,
  [SMALL_STATE(723)] = 21447,
  [SMALL_STATE(724)] = 21457,
  [SMALL_STATE(725)] = 21467,
  [SMALL_STATE(726)] = 21477,
  [SMALL_STATE(727)] = 21487,
  [SMALL_STATE(728)] = 21497,
  [SMALL_STATE(729)] = 21507,
  [SMALL_STATE(730)] = 21517,
  [SMALL_STATE(731)] = 21529,
  [SMALL_STATE(732)] = 21539,
  [SMALL_STATE(733)] = 21549,
  [SMALL_STATE(734)] = 21561,
  [SMALL_STATE(735)] = 21571,
  [SMALL_STATE(736)] = 21581,
  [SMALL_STATE(737)] = 21591,
  [SMALL_STATE(738)] = 21601,
  [SMALL_STATE(739)] = 21611,
  [SMALL_STATE(740)] = 21621,
  [SMALL_STATE(741)] = 21631,
  [SMALL_STATE(742)] = 21641,
  [SMALL_STATE(743)] = 21651,
  [SMALL_STATE(744)] = 21663,
  [SMALL_STATE(745)] = 21673,
  [SMALL_STATE(746)] = 21683,
  [SMALL_STATE(747)] = 21693,
  [SMALL_STATE(748)] = 21703,
  [SMALL_STATE(749)] = 21713,
  [SMALL_STATE(750)] = 21723,
  [SMALL_STATE(751)] = 21733,
  [SMALL_STATE(752)] = 21743,
  [SMALL_STATE(753)] = 21753,
  [SMALL_STATE(754)] = 21763,
  [SMALL_STATE(755)] = 21773,
  [SMALL_STATE(756)] = 21783,
  [SMALL_STATE(757)] = 21793,
  [SMALL_STATE(758)] = 21803,
  [SMALL_STATE(759)] = 21815,
  [SMALL_STATE(760)] = 21825,
  [SMALL_STATE(761)] = 21837,
  [SMALL_STATE(762)] = 21847,
  [SMALL_STATE(763)] = 21857,
  [SMALL_STATE(764)] = 21867,
  [SMALL_STATE(765)] = 21877,
  [SMALL_STATE(766)] = 21887,
  [SMALL_STATE(767)] = 21897,
  [SMALL_STATE(768)] = 21906,
  [SMALL_STATE(769)] = 21915,
  [SMALL_STATE(770)] = 21924,
  [SMALL_STATE(771)] = 21933,
  [SMALL_STATE(772)] = 21946,
  [SMALL_STATE(773)] = 21953,
  [SMALL_STATE(774)] = 21964,
  [SMALL_STATE(775)] = 21975,
  [SMALL_STATE(776)] = 21984,
  [SMALL_STATE(777)] = 21993,
  [SMALL_STATE(778)] = 22004,
  [SMALL_STATE(779)] = 22013,
  [SMALL_STATE(780)] = 22022,
  [SMALL_STATE(781)] = 22031,
  [SMALL_STATE(782)] = 22040,
  [SMALL_STATE(783)] = 22049,
  [SMALL_STATE(784)] = 22058,
  [SMALL_STATE(785)] = 22071,
  [SMALL_STATE(786)] = 22080,
  [SMALL_STATE(787)] = 22089,
  [SMALL_STATE(788)] = 22098,
  [SMALL_STATE(789)] = 22107,
  [SMALL_STATE(790)] = 22116,
  [SMALL_STATE(791)] = 22125,
  [SMALL_STATE(792)] = 22134,
  [SMALL_STATE(793)] = 22143,
  [SMALL_STATE(794)] = 22152,
  [SMALL_STATE(795)] = 22161,
  [SMALL_STATE(796)] = 22170,
  [SMALL_STATE(797)] = 22179,
  [SMALL_STATE(798)] = 22188,
  [SMALL_STATE(799)] = 22197,
  [SMALL_STATE(800)] = 22206,
  [SMALL_STATE(801)] = 22215,
  [SMALL_STATE(802)] = 22224,
  [SMALL_STATE(803)] = 22233,
  [SMALL_STATE(804)] = 22242,
  [SMALL_STATE(805)] = 22253,
  [SMALL_STATE(806)] = 22266,
  [SMALL_STATE(807)] = 22275,
  [SMALL_STATE(808)] = 22284,
  [SMALL_STATE(809)] = 22293,
  [SMALL_STATE(810)] = 22302,
  [SMALL_STATE(811)] = 22311,
  [SMALL_STATE(812)] = 22320,
  [SMALL_STATE(813)] = 22329,
  [SMALL_STATE(814)] = 22342,
  [SMALL_STATE(815)] = 22351,
  [SMALL_STATE(816)] = 22360,
  [SMALL_STATE(817)] = 22369,
  [SMALL_STATE(818)] = 22378,
  [SMALL_STATE(819)] = 22387,
  [SMALL_STATE(820)] = 22400,
  [SMALL_STATE(821)] = 22409,
  [SMALL_STATE(822)] = 22418,
  [SMALL_STATE(823)] = 22431,
  [SMALL_STATE(824)] = 22440,
  [SMALL_STATE(825)] = 22449,
  [SMALL_STATE(826)] = 22458,
  [SMALL_STATE(827)] = 22471,
  [SMALL_STATE(828)] = 22480,
  [SMALL_STATE(829)] = 22489,
  [SMALL_STATE(830)] = 22498,
  [SMALL_STATE(831)] = 22508,
  [SMALL_STATE(832)] = 22518,
  [SMALL_STATE(833)] = 22528,
  [SMALL_STATE(834)] = 22538,
  [SMALL_STATE(835)] = 22548,
  [SMALL_STATE(836)] = 22558,
  [SMALL_STATE(837)] = 22568,
  [SMALL_STATE(838)] = 22576,
  [SMALL_STATE(839)] = 22586,
  [SMALL_STATE(840)] = 22596,
  [SMALL_STATE(841)] = 22604,
  [SMALL_STATE(842)] = 22614,
  [SMALL_STATE(843)] = 22624,
  [SMALL_STATE(844)] = 22631,
  [SMALL_STATE(845)] = 22636,
  [SMALL_STATE(846)] = 22643,
  [SMALL_STATE(847)] = 22650,
  [SMALL_STATE(848)] = 22655,
  [SMALL_STATE(849)] = 22660,
  [SMALL_STATE(850)] = 22667,
  [SMALL_STATE(851)] = 22672,
  [SMALL_STATE(852)] = 22677,
  [SMALL_STATE(853)] = 22682,
  [SMALL_STATE(854)] = 22687,
  [SMALL_STATE(855)] = 22694,
  [SMALL_STATE(856)] = 22699,
  [SMALL_STATE(857)] = 22704,
  [SMALL_STATE(858)] = 22709,
  [SMALL_STATE(859)] = 22716,
  [SMALL_STATE(860)] = 22721,
  [SMALL_STATE(861)] = 22726,
  [SMALL_STATE(862)] = 22733,
  [SMALL_STATE(863)] = 22738,
  [SMALL_STATE(864)] = 22745,
  [SMALL_STATE(865)] = 22750,
  [SMALL_STATE(866)] = 22755,
  [SMALL_STATE(867)] = 22760,
  [SMALL_STATE(868)] = 22765,
  [SMALL_STATE(869)] = 22770,
  [SMALL_STATE(870)] = 22775,
  [SMALL_STATE(871)] = 22780,
  [SMALL_STATE(872)] = 22787,
  [SMALL_STATE(873)] = 22794,
  [SMALL_STATE(874)] = 22801,
  [SMALL_STATE(875)] = 22808,
  [SMALL_STATE(876)] = 22815,
  [SMALL_STATE(877)] = 22822,
  [SMALL_STATE(878)] = 22827,
  [SMALL_STATE(879)] = 22832,
  [SMALL_STATE(880)] = 22839,
  [SMALL_STATE(881)] = 22844,
  [SMALL_STATE(882)] = 22849,
  [SMALL_STATE(883)] = 22856,
  [SMALL_STATE(884)] = 22861,
  [SMALL_STATE(885)] = 22866,
  [SMALL_STATE(886)] = 22873,
  [SMALL_STATE(887)] = 22878,
  [SMALL_STATE(888)] = 22885,
  [SMALL_STATE(889)] = 22890,
  [SMALL_STATE(890)] = 22897,
  [SMALL_STATE(891)] = 22902,
  [SMALL_STATE(892)] = 22907,
  [SMALL_STATE(893)] = 22912,
  [SMALL_STATE(894)] = 22916,
  [SMALL_STATE(895)] = 22920,
  [SMALL_STATE(896)] = 22924,
  [SMALL_STATE(897)] = 22928,
  [SMALL_STATE(898)] = 22932,
  [SMALL_STATE(899)] = 22936,
  [SMALL_STATE(900)] = 22940,
  [SMALL_STATE(901)] = 22944,
  [SMALL_STATE(902)] = 22948,
  [SMALL_STATE(903)] = 22952,
  [SMALL_STATE(904)] = 22956,
  [SMALL_STATE(905)] = 22960,
  [SMALL_STATE(906)] = 22964,
  [SMALL_STATE(907)] = 22968,
  [SMALL_STATE(908)] = 22972,
  [SMALL_STATE(909)] = 22976,
  [SMALL_STATE(910)] = 22980,
  [SMALL_STATE(911)] = 22984,
  [SMALL_STATE(912)] = 22988,
  [SMALL_STATE(913)] = 22992,
  [SMALL_STATE(914)] = 22996,
  [SMALL_STATE(915)] = 23000,
  [SMALL_STATE(916)] = 23004,
  [SMALL_STATE(917)] = 23008,
  [SMALL_STATE(918)] = 23012,
  [SMALL_STATE(919)] = 23016,
  [SMALL_STATE(920)] = 23020,
  [SMALL_STATE(921)] = 23024,
  [SMALL_STATE(922)] = 23028,
  [SMALL_STATE(923)] = 23032,
  [SMALL_STATE(924)] = 23036,
  [SMALL_STATE(925)] = 23040,
  [SMALL_STATE(926)] = 23044,
  [SMALL_STATE(927)] = 23048,
  [SMALL_STATE(928)] = 23052,
  [SMALL_STATE(929)] = 23056,
  [SMALL_STATE(930)] = 23060,
  [SMALL_STATE(931)] = 23064,
  [SMALL_STATE(932)] = 23068,
  [SMALL_STATE(933)] = 23072,
  [SMALL_STATE(934)] = 23076,
  [SMALL_STATE(935)] = 23080,
  [SMALL_STATE(936)] = 23084,
  [SMALL_STATE(937)] = 23088,
  [SMALL_STATE(938)] = 23092,
  [SMALL_STATE(939)] = 23096,
  [SMALL_STATE(940)] = 23100,
  [SMALL_STATE(941)] = 23104,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__restriction, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_no_language, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lexial_value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_literal, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_with_language, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_literal, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(21),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(26),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(28),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2, .production_id = 10),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotations, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(41),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype, 1), REDUCE(sym__atomic, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__object_property_expression, 1), SHIFT(395),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_atomic, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datatype_restriction, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datatype_restriction, 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__restriction, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_primary, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(67),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(77),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 3, .production_id = 33),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat2, 3, .production_id = 33),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(879),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(668),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(168),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(180),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__object_property_expression, 1), SHIFT(416),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2, .production_id = 23),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat2, 2, .production_id = 23),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 11),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 1),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(553),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation_annotated_list, 3),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(424),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(939),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 5),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(538),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(900),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conjunction, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2, .production_id = 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_conjunction, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, .production_id = 26),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(411),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__data_conjunction_repeat1, 2), SHIFT_REPEAT(354),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 12),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 14),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(346),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_annotated_list, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(605),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(541),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(577),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(444),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(508),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(537),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(479),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(320),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(513),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(517),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(349),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_property_expression_annotated_list, 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_frame_repeat1, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic, 1),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(505),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_property_expression_annotated_list_repeat1, 3),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(435),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 3),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(406),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_property_expression, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(537),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(546),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(548),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(318),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(191),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(554),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(836),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(404),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 6, .production_id = 34),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(442),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 6),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 8),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 13),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3, .production_id = 9),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(485),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(653),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(675),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(667),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(654),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(556),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(286),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(471),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat3, 2), SHIFT_REPEAT(472),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(503),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2, .production_id = 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, .production_id = 27),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, .production_id = 28),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 5, .production_id = 29),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 2), SHIFT_REPEAT(606),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_annotated_list, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(218),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(338),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 17),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 16),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4, .production_id = 15),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2), SHIFT_REPEAT(387),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_2list, 4),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(332),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__iri_annotated_list_repeat1, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_2list, 3),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(409),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(537),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(300),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(302),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(306),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(317),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2), SHIFT_REPEAT(493),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 2),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 2), SHIFT_REPEAT(488),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 2),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 2), SHIFT_REPEAT(474),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, .production_id = 25),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, .production_id = 24),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, .production_id = 21),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2, .production_id = 19),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 2),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(572),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [957] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(301),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 3),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_annotated_list_repeat1, 2), SHIFT_REPEAT(329),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_annotated_list, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(543),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(272),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(454),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_frame_repeat1, 2), SHIFT_REPEAT(462),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_frame, 3),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_annotated_list, 1),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_fact, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fact_annotated_list_repeat1, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_annotated_list_repeat1, 3),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(330),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2, .production_id = 19),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2, .production_id = 20),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2, .production_id = 21),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(537),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(555),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(558),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 2, .production_id = 22),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(341),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 3),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_fact, 2),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 2),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat2, 3, .production_id = 32),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(421),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), REDUCE(sym_datatype_frame, 4),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2), SHIFT_REPEAT(537),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat2, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1095] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(373),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(504),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(663),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(392),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5, .production_id = 30),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5, .production_id = 18),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5, .production_id = 31),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6, .production_id = 30),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7, .production_id = 35),
  [1129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(407),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6, .production_id = 35),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 4, .production_id = 18),
  [1136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(400),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6, .production_id = 31),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_2list, 4),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_2list, 4),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_2list, 3),
  [1153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_2list_repeat1, 2), SHIFT_REPEAT(384),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_2list, 3),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_individual_2list, 3),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_2list_repeat1, 2),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_2list_repeat1, 2), SHIFT_REPEAT(657),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_2list, 4),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_2list_repeat1, 2),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_2list_repeat1, 2), SHIFT_REPEAT(609),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2), SHIFT_REPEAT(575),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [1217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(446),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [1222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(448),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(452),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 2),
  [1262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(460),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_no_language, 1),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(467),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_misc, 3),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(476),
  [1289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(477),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 2),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(578),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 1),
  [1313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotation_annotated_list, 3),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [1323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(498),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 5),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_with_language, 2),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 6),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 2),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 3),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_literal, 4),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_literal, 3),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2, .production_id = 10),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 3),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annotations, 2),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(561),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(573),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(564),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facet, 1),
  [1441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(549),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(559),
  [1461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat2, 2), SHIFT_REPEAT(419),
  [1464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conjunction_repeat1, 2), SHIFT_REPEAT(535),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [1469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(887),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(581),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(895),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(394),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 2),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2),
  [1625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__literal_list_repeat1, 2), SHIFT_REPEAT(410),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 2),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__datatype_restriction_repeat1, 2), SHIFT_REPEAT(557),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__datatype_restriction_repeat1, 2),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_list, 1),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__individual_list, 1),
  [1659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_individual_2list_repeat1, 2), SHIFT_REPEAT(574),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__datatype_restriction_repeat1, 3),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__object_property_expression, 1), SHIFT(666),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1801] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

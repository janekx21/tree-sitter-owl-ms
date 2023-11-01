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
#define STATE_COUNT 491
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
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
  sym__non_zero = 8,
  sym__zero = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  sym__quotedString = 12,
  anon_sym_Ontology_COLON = 13,
  anon_sym_Prefix_COLON = 14,
  anon_sym_Annotations_COLON = 15,
  anon_sym_inverse = 16,
  anon_sym_not = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_or = 22,
  anon_sym_and = 23,
  anon_sym_LBRACK = 24,
  anon_sym_COMMA = 25,
  anon_sym_RBRACK = 26,
  anon_sym_length = 27,
  anon_sym_minLength = 28,
  anon_sym_maxLength = 29,
  anon_sym_pattern = 30,
  anon_sym_langRange = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_that = 34,
  anon_sym_only = 35,
  anon_sym_exactly = 36,
  anon_sym_Datatype_COLON = 37,
  anon_sym_EquivalentTo_COLON = 38,
  anon_sym_Class_COLON = 39,
  anon_sym_SubClassOf_COLON = 40,
  anon_sym_ObjectProperty_COLON = 41,
  anon_sym_Domain_COLON = 42,
  anon_sym_Range_COLON = 43,
  anon_sym_SubPropertyOf_COLON = 44,
  anon_sym_DisjointWith_COLON = 45,
  anon_sym_InverseOf_COLON = 46,
  anon_sym_Characteristics_COLON = 47,
  anon_sym_SubPropertyChain_COLON = 48,
  anon_sym_o = 49,
  anon_sym_Functional = 50,
  anon_sym_InverseFunctional = 51,
  anon_sym_Reflexive = 52,
  anon_sym_Irreflexive = 53,
  anon_sym_Symmetric = 54,
  anon_sym_Asymmetric = 55,
  anon_sym_Transitive = 56,
  anon_sym_DataProperty_COLON = 57,
  anon_sym_AnnotationProperty_COLON = 58,
  anon_sym_COLON = 59,
  sym__scheme = 60,
  anon_sym_SLASH_SLASH = 61,
  anon_sym_AT = 62,
  sym__iunreserved = 63,
  sym__port = 64,
  anon_sym_SLASH = 65,
  sym__iquery = 66,
  sym__ifragment = 67,
  sym__pn_local = 68,
  sym__pname_ln = 69,
  sym_source_file = 70,
  sym_iri = 71,
  sym_full_iri = 72,
  sym_abbreviated_iri = 73,
  sym_simple_iri = 74,
  sym_datatype = 75,
  sym__datatype_iri = 76,
  sym__class_iri = 77,
  sym__annotation_property_iri = 78,
  sym__ontology_iri = 79,
  sym__data_property_iri = 80,
  sym__version_iri = 81,
  sym__object_property_iri = 82,
  sym_non_negative_integer = 83,
  sym__positive_integer = 84,
  aux_sym__digits = 85,
  sym__digit = 86,
  sym_literal = 87,
  sym__integer_literal = 88,
  sym__string_literal_no_language = 89,
  sym_ontology_document = 90,
  sym_ontology = 91,
  sym_frame = 92,
  sym_prefix_declaration = 93,
  sym_annotations = 94,
  sym_annotation = 95,
  sym_annotation_target = 96,
  sym_object_property_expression = 97,
  sym_inverse_object_property = 98,
  sym_data_property_expression = 99,
  sym_data_primary = 100,
  sym_data_atomic = 101,
  sym_data_range = 102,
  sym_data_conjunction = 103,
  sym_datatype_restriction = 104,
  sym_facet = 105,
  sym__restriction_value = 106,
  sym_description = 107,
  sym_conjunction = 108,
  sym_primary = 109,
  sym_restriction = 110,
  sym_atomic = 111,
  sym_datatype_frame = 112,
  sym_class_frame = 113,
  sym_object_property_frame = 114,
  sym_object_property_characteristic = 115,
  sym_data_property_frame = 116,
  sym_annotation_property_frame = 117,
  sym_description_annotated_list = 118,
  sym_annotation_annotated_list = 119,
  sym_object_property_expression_annotated_list = 120,
  sym_object_property_characteristic_annotated_list = 121,
  sym_data_range_annotated_list = 122,
  sym_data_property_expression_annotated_list = 123,
  sym_iri_annotated_list = 124,
  sym_annotation_property_iri_annotated_list = 125,
  sym__iri_rfc3987 = 126,
  sym__ihier_part = 127,
  sym__iauthority = 128,
  sym__iuserinfo = 129,
  sym__ihost = 130,
  aux_sym__ipath_abempty = 131,
  sym__isegment = 132,
  aux_sym__positive_integer_repeat1 = 133,
  aux_sym_ontology_document_repeat1 = 134,
  aux_sym_ontology_repeat1 = 135,
  aux_sym_data_range_repeat1 = 136,
  aux_sym_data_conjunction_repeat1 = 137,
  aux_sym_datatype_restriction_repeat1 = 138,
  aux_sym_description_repeat1 = 139,
  aux_sym_conjunction_repeat1 = 140,
  aux_sym_conjunction_repeat2 = 141,
  aux_sym_datatype_frame_repeat1 = 142,
  aux_sym_class_frame_repeat1 = 143,
  aux_sym_object_property_frame_repeat1 = 144,
  aux_sym_object_property_frame_repeat2 = 145,
  aux_sym_data_property_frame_repeat1 = 146,
  aux_sym_annotation_property_frame_repeat1 = 147,
  aux_sym_description_annotated_list_repeat1 = 148,
  aux_sym_annotation_annotated_list_repeat1 = 149,
  aux_sym_object_property_expression_annotated_list_repeat1 = 150,
  aux_sym_object_property_characteristic_annotated_list_repeat1 = 151,
  aux_sym_data_range_annotated_list_repeat1 = 152,
  aux_sym_data_property_expression_annotated_list_repeat1 = 153,
  aux_sym_iri_annotated_list_repeat1 = 154,
  aux_sym_annotation_property_iri_annotated_list_repeat1 = 155,
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
  [sym__non_zero] = "_non_zero",
  [sym__zero] = "_zero",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym__quotedString] = "_quotedString",
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
  [anon_sym_only] = "only",
  [anon_sym_exactly] = "exactly",
  [anon_sym_Datatype_COLON] = "Datatype:",
  [anon_sym_EquivalentTo_COLON] = "EquivalentTo:",
  [anon_sym_Class_COLON] = "Class:",
  [anon_sym_SubClassOf_COLON] = "SubClassOf:",
  [anon_sym_ObjectProperty_COLON] = "ObjectProperty:",
  [anon_sym_Domain_COLON] = "Domain:",
  [anon_sym_Range_COLON] = "Range:",
  [anon_sym_SubPropertyOf_COLON] = "SubPropertyOf:",
  [anon_sym_DisjointWith_COLON] = "DisjointWith:",
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
  [sym_non_negative_integer] = "non_negative_integer",
  [sym__positive_integer] = "_positive_integer",
  [aux_sym__digits] = "_digits",
  [sym__digit] = "_digit",
  [sym_literal] = "literal",
  [sym__integer_literal] = "_integer_literal",
  [sym__string_literal_no_language] = "_string_literal_no_language",
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
  [sym_description_annotated_list] = "description_annotated_list",
  [sym_annotation_annotated_list] = "annotation_annotated_list",
  [sym_object_property_expression_annotated_list] = "object_property_expression_annotated_list",
  [sym_object_property_characteristic_annotated_list] = "object_property_characteristic_annotated_list",
  [sym_data_range_annotated_list] = "data_range_annotated_list",
  [sym_data_property_expression_annotated_list] = "data_property_expression_annotated_list",
  [sym_iri_annotated_list] = "iri_annotated_list",
  [sym_annotation_property_iri_annotated_list] = "annotation_property_iri_annotated_list",
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
  [aux_sym_data_range_repeat1] = "data_range_repeat1",
  [aux_sym_data_conjunction_repeat1] = "data_conjunction_repeat1",
  [aux_sym_datatype_restriction_repeat1] = "datatype_restriction_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_datatype_frame_repeat1] = "datatype_frame_repeat1",
  [aux_sym_class_frame_repeat1] = "class_frame_repeat1",
  [aux_sym_object_property_frame_repeat1] = "object_property_frame_repeat1",
  [aux_sym_object_property_frame_repeat2] = "object_property_frame_repeat2",
  [aux_sym_data_property_frame_repeat1] = "data_property_frame_repeat1",
  [aux_sym_annotation_property_frame_repeat1] = "annotation_property_frame_repeat1",
  [aux_sym_description_annotated_list_repeat1] = "description_annotated_list_repeat1",
  [aux_sym_annotation_annotated_list_repeat1] = "annotation_annotated_list_repeat1",
  [aux_sym_object_property_expression_annotated_list_repeat1] = "object_property_expression_annotated_list_repeat1",
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = "object_property_characteristic_annotated_list_repeat1",
  [aux_sym_data_range_annotated_list_repeat1] = "data_range_annotated_list_repeat1",
  [aux_sym_data_property_expression_annotated_list_repeat1] = "data_property_expression_annotated_list_repeat1",
  [aux_sym_iri_annotated_list_repeat1] = "iri_annotated_list_repeat1",
  [aux_sym_annotation_property_iri_annotated_list_repeat1] = "annotation_property_iri_annotated_list_repeat1",
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
  [sym__non_zero] = sym__non_zero,
  [sym__zero] = sym__zero,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__quotedString] = sym__quotedString,
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
  [anon_sym_only] = anon_sym_only,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_Datatype_COLON] = anon_sym_Datatype_COLON,
  [anon_sym_EquivalentTo_COLON] = anon_sym_EquivalentTo_COLON,
  [anon_sym_Class_COLON] = anon_sym_Class_COLON,
  [anon_sym_SubClassOf_COLON] = anon_sym_SubClassOf_COLON,
  [anon_sym_ObjectProperty_COLON] = anon_sym_ObjectProperty_COLON,
  [anon_sym_Domain_COLON] = anon_sym_Domain_COLON,
  [anon_sym_Range_COLON] = anon_sym_Range_COLON,
  [anon_sym_SubPropertyOf_COLON] = anon_sym_SubPropertyOf_COLON,
  [anon_sym_DisjointWith_COLON] = anon_sym_DisjointWith_COLON,
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
  [sym_non_negative_integer] = sym_non_negative_integer,
  [sym__positive_integer] = sym__positive_integer,
  [aux_sym__digits] = aux_sym__digits,
  [sym__digit] = sym__digit,
  [sym_literal] = sym_literal,
  [sym__integer_literal] = sym__integer_literal,
  [sym__string_literal_no_language] = sym__string_literal_no_language,
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
  [sym_description_annotated_list] = sym_description_annotated_list,
  [sym_annotation_annotated_list] = sym_annotation_annotated_list,
  [sym_object_property_expression_annotated_list] = sym_object_property_expression_annotated_list,
  [sym_object_property_characteristic_annotated_list] = sym_object_property_characteristic_annotated_list,
  [sym_data_range_annotated_list] = sym_data_range_annotated_list,
  [sym_data_property_expression_annotated_list] = sym_data_property_expression_annotated_list,
  [sym_iri_annotated_list] = sym_iri_annotated_list,
  [sym_annotation_property_iri_annotated_list] = sym_annotation_property_iri_annotated_list,
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
  [aux_sym_data_range_repeat1] = aux_sym_data_range_repeat1,
  [aux_sym_data_conjunction_repeat1] = aux_sym_data_conjunction_repeat1,
  [aux_sym_datatype_restriction_repeat1] = aux_sym_datatype_restriction_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_datatype_frame_repeat1] = aux_sym_datatype_frame_repeat1,
  [aux_sym_class_frame_repeat1] = aux_sym_class_frame_repeat1,
  [aux_sym_object_property_frame_repeat1] = aux_sym_object_property_frame_repeat1,
  [aux_sym_object_property_frame_repeat2] = aux_sym_object_property_frame_repeat2,
  [aux_sym_data_property_frame_repeat1] = aux_sym_data_property_frame_repeat1,
  [aux_sym_annotation_property_frame_repeat1] = aux_sym_annotation_property_frame_repeat1,
  [aux_sym_description_annotated_list_repeat1] = aux_sym_description_annotated_list_repeat1,
  [aux_sym_annotation_annotated_list_repeat1] = aux_sym_annotation_annotated_list_repeat1,
  [aux_sym_object_property_expression_annotated_list_repeat1] = aux_sym_object_property_expression_annotated_list_repeat1,
  [aux_sym_object_property_characteristic_annotated_list_repeat1] = aux_sym_object_property_characteristic_annotated_list_repeat1,
  [aux_sym_data_range_annotated_list_repeat1] = aux_sym_data_range_annotated_list_repeat1,
  [aux_sym_data_property_expression_annotated_list_repeat1] = aux_sym_data_property_expression_annotated_list_repeat1,
  [aux_sym_iri_annotated_list_repeat1] = aux_sym_iri_annotated_list_repeat1,
  [aux_sym_annotation_property_iri_annotated_list_repeat1] = aux_sym_annotation_property_iri_annotated_list_repeat1,
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
  [sym__quotedString] = {
    .visible = false,
    .named = true,
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
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactly] = {
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
  [anon_sym_DisjointWith_COLON] = {
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
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal_no_language] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 2,
  [12] = 5,
  [13] = 6,
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 6,
  [22] = 22,
  [23] = 23,
  [24] = 5,
  [25] = 7,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 2,
  [37] = 37,
  [38] = 18,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
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
  [58] = 58,
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
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 68,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 85,
  [88] = 88,
  [89] = 85,
  [90] = 85,
  [91] = 85,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 7,
  [96] = 70,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 6,
  [101] = 5,
  [102] = 77,
  [103] = 78,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 97,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 80,
  [122] = 122,
  [123] = 79,
  [124] = 124,
  [125] = 73,
  [126] = 126,
  [127] = 71,
  [128] = 128,
  [129] = 67,
  [130] = 130,
  [131] = 105,
  [132] = 74,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 105,
  [138] = 9,
  [139] = 84,
  [140] = 140,
  [141] = 83,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 82,
  [146] = 146,
  [147] = 143,
  [148] = 148,
  [149] = 149,
  [150] = 4,
  [151] = 151,
  [152] = 143,
  [153] = 143,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 8,
  [158] = 158,
  [159] = 10,
  [160] = 160,
  [161] = 161,
  [162] = 16,
  [163] = 163,
  [164] = 17,
  [165] = 15,
  [166] = 166,
  [167] = 167,
  [168] = 160,
  [169] = 169,
  [170] = 120,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 160,
  [175] = 175,
  [176] = 111,
  [177] = 98,
  [178] = 178,
  [179] = 171,
  [180] = 171,
  [181] = 181,
  [182] = 108,
  [183] = 183,
  [184] = 160,
  [185] = 171,
  [186] = 107,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 196,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 196,
  [205] = 196,
  [206] = 18,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 22,
  [212] = 212,
  [213] = 67,
  [214] = 27,
  [215] = 26,
  [216] = 216,
  [217] = 23,
  [218] = 80,
  [219] = 74,
  [220] = 220,
  [221] = 221,
  [222] = 212,
  [223] = 223,
  [224] = 79,
  [225] = 73,
  [226] = 226,
  [227] = 20,
  [228] = 78,
  [229] = 229,
  [230] = 230,
  [231] = 70,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 212,
  [236] = 236,
  [237] = 237,
  [238] = 212,
  [239] = 239,
  [240] = 240,
  [241] = 77,
  [242] = 71,
  [243] = 212,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 246,
  [248] = 248,
  [249] = 249,
  [250] = 249,
  [251] = 251,
  [252] = 249,
  [253] = 28,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 246,
  [259] = 259,
  [260] = 260,
  [261] = 4,
  [262] = 8,
  [263] = 263,
  [264] = 9,
  [265] = 10,
  [266] = 266,
  [267] = 246,
  [268] = 268,
  [269] = 269,
  [270] = 83,
  [271] = 249,
  [272] = 29,
  [273] = 273,
  [274] = 249,
  [275] = 30,
  [276] = 245,
  [277] = 277,
  [278] = 278,
  [279] = 82,
  [280] = 84,
  [281] = 31,
  [282] = 33,
  [283] = 245,
  [284] = 245,
  [285] = 111,
  [286] = 286,
  [287] = 107,
  [288] = 108,
  [289] = 289,
  [290] = 289,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 120,
  [296] = 286,
  [297] = 289,
  [298] = 286,
  [299] = 15,
  [300] = 17,
  [301] = 16,
  [302] = 302,
  [303] = 289,
  [304] = 286,
  [305] = 305,
  [306] = 98,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 15,
  [312] = 17,
  [313] = 9,
  [314] = 314,
  [315] = 315,
  [316] = 8,
  [317] = 317,
  [318] = 4,
  [319] = 319,
  [320] = 320,
  [321] = 319,
  [322] = 319,
  [323] = 314,
  [324] = 314,
  [325] = 319,
  [326] = 16,
  [327] = 10,
  [328] = 314,
  [329] = 319,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 314,
  [335] = 335,
  [336] = 15,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 17,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 9,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 16,
  [350] = 10,
  [351] = 8,
  [352] = 352,
  [353] = 4,
  [354] = 354,
  [355] = 335,
  [356] = 356,
  [357] = 357,
  [358] = 23,
  [359] = 359,
  [360] = 307,
  [361] = 20,
  [362] = 26,
  [363] = 27,
  [364] = 22,
  [365] = 365,
  [366] = 8,
  [367] = 4,
  [368] = 33,
  [369] = 28,
  [370] = 31,
  [371] = 22,
  [372] = 27,
  [373] = 26,
  [374] = 29,
  [375] = 23,
  [376] = 30,
  [377] = 9,
  [378] = 378,
  [379] = 10,
  [380] = 20,
  [381] = 33,
  [382] = 30,
  [383] = 29,
  [384] = 28,
  [385] = 31,
  [386] = 27,
  [387] = 23,
  [388] = 388,
  [389] = 389,
  [390] = 20,
  [391] = 26,
  [392] = 4,
  [393] = 8,
  [394] = 9,
  [395] = 395,
  [396] = 10,
  [397] = 307,
  [398] = 398,
  [399] = 22,
  [400] = 400,
  [401] = 401,
  [402] = 77,
  [403] = 78,
  [404] = 80,
  [405] = 401,
  [406] = 406,
  [407] = 70,
  [408] = 400,
  [409] = 29,
  [410] = 30,
  [411] = 401,
  [412] = 31,
  [413] = 413,
  [414] = 401,
  [415] = 400,
  [416] = 416,
  [417] = 28,
  [418] = 33,
  [419] = 74,
  [420] = 10,
  [421] = 9,
  [422] = 79,
  [423] = 307,
  [424] = 8,
  [425] = 73,
  [426] = 71,
  [427] = 4,
  [428] = 67,
  [429] = 400,
  [430] = 401,
  [431] = 84,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 82,
  [437] = 437,
  [438] = 307,
  [439] = 83,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 443,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 443,
  [454] = 448,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 443,
  [459] = 448,
  [460] = 443,
  [461] = 448,
  [462] = 462,
  [463] = 443,
  [464] = 443,
  [465] = 443,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 467,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 467,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 467,
  [485] = 485,
  [486] = 467,
  [487] = 487,
  [488] = 467,
  [489] = 467,
  [490] = 467,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(313);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(409);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '+') ADVANCE(331);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '-') ADVANCE(332);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == '0') ADVANCE(329);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '<') ADVANCE(315);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead == '@') ADVANCE(403);
      if (lookahead == 'A') ADVANCE(181);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(280);
      if (lookahead == 'I') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(219);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(278);
      if (lookahead == 'T') ADVANCE(222);
      if (lookahead == '[') ADVANCE(351);
      if (lookahead == ']') ADVANCE(353);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '}') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '+') ADVANCE(331);
      if (lookahead == '-') ADVANCE(333);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(511);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(511);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(402);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(368);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(376);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(374);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(336);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(364);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(335);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(382);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(370);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(337);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(396);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(380);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(366);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(378);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(372);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(384);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(386);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(398);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(165);
      if (lookahead == 'P') ADVANCE(224);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(134);
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(116);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(235);
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(236);
      END_STATE();
    case 46:
      if (lookahead == 'P') ADVANCE(237);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 49:
      if (lookahead == 'W') ADVANCE(147);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(354);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 154:
      if (lookahead == 'j') ADVANCE(208);
      END_STATE();
    case 155:
      if (lookahead == 'j') ADVANCE(103);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 217:
      if (lookahead == 'q') ADVANCE(279);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 282:
      if (lookahead == 'v') ADVANCE(93);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 285:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 286:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 287:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 288:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 289:
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 290:
      if (lookahead == 'x') ADVANCE(149);
      END_STATE();
    case 291:
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 293:
      if (lookahead == 'y') ADVANCE(363);
      END_STATE();
    case 294:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 295:
      if (lookahead == 'y') ADVANCE(362);
      END_STATE();
    case 296:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 297:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 298:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 299:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 300:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 301:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 302:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(302)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(404);
      END_STATE();
    case 303:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(303)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 304:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 305:
      if (eof) ADVANCE(313);
      if (lookahead == '#') ADVANCE(409);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead == 'A') ADVANCE(502);
      if (lookahead == 'C') ADVANCE(471);
      if (lookahead == 'D') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(535);
      if (lookahead == 'I') ADVANCE(495);
      if (lookahead == 'O') ADVANCE(439);
      if (lookahead == 'R') ADVANCE(431);
      if (lookahead == 'S') ADVANCE(586);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(305)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 306:
      if (eof) ADVANCE(313);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(502);
      if (lookahead == 'C') ADVANCE(471);
      if (lookahead == 'D') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(535);
      if (lookahead == 'O') ADVANCE(439);
      if (lookahead == 'R') ADVANCE(431);
      if (lookahead == 'S') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(306)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 307:
      if (eof) ADVANCE(313);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(502);
      if (lookahead == 'C') ADVANCE(471);
      if (lookahead == 'D') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(535);
      if (lookahead == 'I') ADVANCE(495);
      if (lookahead == 'O') ADVANCE(439);
      if (lookahead == 'R') ADVANCE(431);
      if (lookahead == 'S') ADVANCE(586);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(307)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 308:
      if (eof) ADVANCE(313);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(502);
      if (lookahead == 'C') ADVANCE(471);
      if (lookahead == 'D') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(535);
      if (lookahead == 'O') ADVANCE(439);
      if (lookahead == 'R') ADVANCE(431);
      if (lookahead == 'S') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(308)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 309:
      if (eof) ADVANCE(313);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(502);
      if (lookahead == 'C') ADVANCE(490);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'O') ADVANCE(439);
      if (lookahead == 'S') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(309)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 310:
      if (eof) ADVANCE(313);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(502);
      if (lookahead == 'C') ADVANCE(490);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'O') ADVANCE(439);
      if (lookahead == 'S') ADVANCE(587);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'd') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == '{') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(310)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 311:
      if (eof) ADVANCE(313);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '/') ADVANCE(406);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '@') ADVANCE(403);
      if (lookahead == 'A') ADVANCE(181);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(280);
      if (lookahead == 'I') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(219);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(278);
      if (lookahead == 'T') ADVANCE(222);
      if (lookahead == '[') ADVANCE(351);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(311)
      END_STATE();
    case 312:
      if (eof) ADVANCE(313);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '<') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(512);
      if (lookahead == 'C') ADVANCE(490);
      if (lookahead == 'D') ADVANCE(426);
      if (lookahead == 'O') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(312)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(359);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(360);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__non_zero);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__non_zero);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__zero);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__quotedString);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_minLength);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_maxLength);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_langRange);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_Characteristics_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_SubPropertyChain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_Functional);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_InverseFunctional);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_Reflexive);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_Irreflexive);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_Symmetric);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_Asymmetric);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_Transitive);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_DataProperty_COLON);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_DataProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_AnnotationProperty_COLON);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_AnnotationProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__iunreserved);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(402);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'C') ADVANCE(473);
      if (lookahead == 'O') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'C') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(465);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'P') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'P') ADVANCE(549);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'P') ADVANCE(551);
      if (lookahead == 's') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'P') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'P') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'T') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'W') ADVANCE(482);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(487);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(415);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'b') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'f') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'f') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'f') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'g') ADVANCE(455);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'h') ADVANCE(436);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(505);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'j') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'j') ADVANCE(451);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(515);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(435);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(428);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(557);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(461);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'q') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(442);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'v') ADVANCE(453);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'v') ADVANCE(424);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'v') ADVANCE(464);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'y') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'y') ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'y') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'y') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'y') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(369);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(381);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 305},
  [3] = {.lex_state = 306},
  [4] = {.lex_state = 311},
  [5] = {.lex_state = 307},
  [6] = {.lex_state = 307},
  [7] = {.lex_state = 307},
  [8] = {.lex_state = 311},
  [9] = {.lex_state = 311},
  [10] = {.lex_state = 311},
  [11] = {.lex_state = 310},
  [12] = {.lex_state = 308},
  [13] = {.lex_state = 308},
  [14] = {.lex_state = 308},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 305},
  [19] = {.lex_state = 306},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 309},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 309},
  [25] = {.lex_state = 309},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 311},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 311},
  [38] = {.lex_state = 310},
  [39] = {.lex_state = 312},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 311},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 312},
  [47] = {.lex_state = 311},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 311},
  [50] = {.lex_state = 311},
  [51] = {.lex_state = 311},
  [52] = {.lex_state = 311},
  [53] = {.lex_state = 311},
  [54] = {.lex_state = 311},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 311},
  [57] = {.lex_state = 311},
  [58] = {.lex_state = 311},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 311},
  [61] = {.lex_state = 311},
  [62] = {.lex_state = 311},
  [63] = {.lex_state = 311},
  [64] = {.lex_state = 311},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 311},
  [67] = {.lex_state = 311},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 311},
  [71] = {.lex_state = 311},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 311},
  [74] = {.lex_state = 311},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 311},
  [77] = {.lex_state = 311},
  [78] = {.lex_state = 311},
  [79] = {.lex_state = 311},
  [80] = {.lex_state = 311},
  [81] = {.lex_state = 311},
  [82] = {.lex_state = 311},
  [83] = {.lex_state = 311},
  [84] = {.lex_state = 311},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 311},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 311},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 311},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 311},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 311},
  [103] = {.lex_state = 311},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 311},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 311},
  [122] = {.lex_state = 311},
  [123] = {.lex_state = 311},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 311},
  [126] = {.lex_state = 311},
  [127] = {.lex_state = 311},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 311},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 311},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 311},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 311},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 311},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 311},
  [149] = {.lex_state = 311},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 34},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 34},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 35},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 35},
  [213] = {.lex_state = 311},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 35},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 311},
  [219] = {.lex_state = 311},
  [220] = {.lex_state = 35},
  [221] = {.lex_state = 35},
  [222] = {.lex_state = 35},
  [223] = {.lex_state = 35},
  [224] = {.lex_state = 311},
  [225] = {.lex_state = 311},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 311},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 311},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 35},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 35},
  [238] = {.lex_state = 35},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 311},
  [242] = {.lex_state = 311},
  [243] = {.lex_state = 35},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 35},
  [250] = {.lex_state = 35},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 35},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 15},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 7},
  [265] = {.lex_state = 7},
  [266] = {.lex_state = 35},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 35},
  [270] = {.lex_state = 311},
  [271] = {.lex_state = 35},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 15},
  [274] = {.lex_state = 35},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 15},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 311},
  [280] = {.lex_state = 311},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 35},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 6},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 35},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 13},
  [312] = {.lex_state = 13},
  [313] = {.lex_state = 312},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 9},
  [316] = {.lex_state = 312},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 312},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 9},
  [323] = {.lex_state = 9},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 13},
  [327] = {.lex_state = 312},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 35},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 14},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 14},
  [341] = {.lex_state = 9},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 9},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 14},
  [350] = {.lex_state = 1},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 8},
  [359] = {.lex_state = 9},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 9},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 8},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 8},
  [371] = {.lex_state = 15},
  [372] = {.lex_state = 15},
  [373] = {.lex_state = 15},
  [374] = {.lex_state = 8},
  [375] = {.lex_state = 15},
  [376] = {.lex_state = 8},
  [377] = {.lex_state = 8},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 15},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 15},
  [384] = {.lex_state = 15},
  [385] = {.lex_state = 15},
  [386] = {.lex_state = 9},
  [387] = {.lex_state = 9},
  [388] = {.lex_state = 305},
  [389] = {.lex_state = 305},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 9},
  [392] = {.lex_state = 15},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 15},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 311},
  [403] = {.lex_state = 311},
  [404] = {.lex_state = 311},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 305},
  [407] = {.lex_state = 311},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 9},
  [410] = {.lex_state = 9},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 9},
  [413] = {.lex_state = 302},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 9},
  [418] = {.lex_state = 9},
  [419] = {.lex_state = 311},
  [420] = {.lex_state = 9},
  [421] = {.lex_state = 9},
  [422] = {.lex_state = 311},
  [423] = {.lex_state = 15},
  [424] = {.lex_state = 9},
  [425] = {.lex_state = 311},
  [426] = {.lex_state = 311},
  [427] = {.lex_state = 9},
  [428] = {.lex_state = 311},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 311},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 311},
  [436] = {.lex_state = 311},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 9},
  [439] = {.lex_state = 311},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 311},
  [443] = {.lex_state = 303},
  [444] = {.lex_state = 305},
  [445] = {.lex_state = 311},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 303},
  [448] = {.lex_state = 311},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 303},
  [454] = {.lex_state = 311},
  [455] = {.lex_state = 306},
  [456] = {.lex_state = 302},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 303},
  [459] = {.lex_state = 311},
  [460] = {.lex_state = 303},
  [461] = {.lex_state = 311},
  [462] = {.lex_state = 302},
  [463] = {.lex_state = 303},
  [464] = {.lex_state = 303},
  [465] = {.lex_state = 303},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 405},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 405},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 305},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 305},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 36},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
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
    [sym__non_zero] = ACTIONS(1),
    [sym__zero] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__quotedString] = ACTIONS(1),
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
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_Datatype_COLON] = ACTIONS(1),
    [anon_sym_EquivalentTo_COLON] = ACTIONS(1),
    [anon_sym_Class_COLON] = ACTIONS(1),
    [anon_sym_SubClassOf_COLON] = ACTIONS(1),
    [anon_sym_ObjectProperty_COLON] = ACTIONS(1),
    [anon_sym_Domain_COLON] = ACTIONS(1),
    [anon_sym_Range_COLON] = ACTIONS(1),
    [anon_sym_SubPropertyOf_COLON] = ACTIONS(1),
    [anon_sym_DisjointWith_COLON] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__iquery] = ACTIONS(1),
    [sym__ifragment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(485),
    [sym_ontology_document] = STATE(469),
    [sym_ontology] = STATE(470),
    [sym_prefix_declaration] = STATE(398),
    [aux_sym_ontology_document_repeat1] = STATE(398),
    [anon_sym_Ontology_COLON] = ACTIONS(3),
    [anon_sym_Prefix_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(47), 1,
      sym_data_primary,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(37), 2,
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
    ACTIONS(13), 16,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [68] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(47), 1,
      sym_data_primary,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(37), 2,
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
    ACTIONS(13), 14,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [134] = 1,
    ACTIONS(25), 33,
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
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [170] = 4,
    ACTIONS(31), 2,
      sym__non_zero,
      sym__zero,
    STATE(5), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(29), 22,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [211] = 4,
    ACTIONS(38), 2,
      sym__non_zero,
      sym__zero,
    STATE(5), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(36), 22,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [252] = 4,
    ACTIONS(44), 2,
      sym__non_zero,
      sym__zero,
    STATE(6), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(42), 22,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [293] = 1,
    ACTIONS(46), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [327] = 1,
    ACTIONS(48), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [361] = 1,
    ACTIONS(50), 31,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [395] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(47), 1,
      sym_data_primary,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(37), 2,
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
    ACTIONS(13), 9,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [456] = 4,
    ACTIONS(52), 2,
      sym__non_zero,
      sym__zero,
    STATE(12), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(29), 20,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [495] = 4,
    ACTIONS(55), 2,
      sym__non_zero,
      sym__zero,
    STATE(12), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(36), 20,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [534] = 4,
    ACTIONS(57), 2,
      sym__non_zero,
      sym__zero,
    STATE(13), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(42), 20,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [573] = 3,
    ACTIONS(61), 2,
      sym__non_zero,
      sym__zero,
    STATE(15), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(59), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [609] = 3,
    ACTIONS(66), 2,
      sym__non_zero,
      sym__zero,
    STATE(15), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(64), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [645] = 3,
    ACTIONS(66), 2,
      sym__non_zero,
      sym__zero,
    STATE(15), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(68), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [681] = 2,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(72), 22,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [714] = 2,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(72), 20,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [745] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(74), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [777] = 4,
    ACTIONS(78), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(36), 15,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [811] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(80), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [843] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(80), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [875] = 4,
    ACTIONS(82), 2,
      sym__non_zero,
      sym__zero,
    STATE(24), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(29), 15,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [909] = 4,
    ACTIONS(85), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(42), 15,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [943] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(87), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [975] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(92), 23,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [1007] = 1,
    ACTIONS(94), 25,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [1035] = 1,
    ACTIONS(96), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [1062] = 1,
    ACTIONS(87), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [1089] = 1,
    ACTIONS(98), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [1116] = 18,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(100), 1,
      anon_sym_Annotations_COLON,
    STATE(44), 1,
      sym_datatype,
    STATE(45), 1,
      sym_annotations,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(88), 1,
      sym_data_primary,
    STATE(118), 1,
      sym_data_conjunction,
    STATE(173), 1,
      sym_data_range,
    STATE(203), 1,
      sym_data_range_annotated_list,
    STATE(37), 2,
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
  [1177] = 1,
    ACTIONS(102), 24,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
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
  [1204] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(100), 1,
      anon_sym_Annotations_COLON,
    STATE(41), 1,
      sym_annotations,
    STATE(44), 1,
      sym_datatype,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(88), 1,
      sym_data_primary,
    STATE(118), 1,
      sym_data_conjunction,
    STATE(189), 1,
      sym_data_range,
    STATE(37), 2,
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
  [1262] = 2,
    ACTIONS(106), 2,
      anon_sym_only,
      anon_sym_exactly,
    ACTIONS(104), 21,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1290] = 15,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(47), 1,
      sym_data_primary,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(37), 2,
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
  [1343] = 1,
    ACTIONS(108), 21,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1367] = 2,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(72), 15,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_Annotations_COLON,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [1393] = 13,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LT,
    ACTIONS(114), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(116), 1,
      anon_sym_Class_COLON,
    ACTIONS(118), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(120), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(122), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(124), 1,
      sym__pn_local,
    ACTIONS(126), 1,
      sym__pname_ln,
    STATE(46), 2,
      sym_iri,
      sym__ontology_iri,
    STATE(207), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(316), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(378), 5,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
  [1441] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(88), 1,
      sym_data_primary,
    STATE(118), 1,
      sym_data_conjunction,
    STATE(337), 1,
      sym_data_range,
    STATE(37), 2,
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
  [1493] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(88), 1,
      sym_data_primary,
    STATE(118), 1,
      sym_data_conjunction,
    STATE(194), 1,
      sym_data_range,
    STATE(37), 2,
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
  [1545] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(88), 1,
      sym_data_primary,
    STATE(118), 1,
      sym_data_conjunction,
    STATE(474), 1,
      sym_data_range,
    STATE(37), 2,
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
  [1597] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(88), 1,
      sym_data_primary,
    STATE(118), 1,
      sym_data_conjunction,
    STATE(342), 1,
      sym_data_range,
    STATE(37), 2,
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
  [1649] = 2,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1675] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(88), 1,
      sym_data_primary,
    STATE(118), 1,
      sym_data_conjunction,
    STATE(166), 1,
      sym_data_range,
    STATE(37), 2,
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
  [1727] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(114), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(116), 1,
      anon_sym_Class_COLON,
    ACTIONS(118), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(120), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(122), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(198), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(199), 2,
      sym_iri,
      sym__version_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(378), 5,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
  [1775] = 1,
    ACTIONS(134), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1798] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(88), 1,
      sym_data_primary,
    STATE(149), 1,
      sym_data_conjunction,
    STATE(37), 2,
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
  [1847] = 1,
    ACTIONS(136), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1870] = 1,
    ACTIONS(138), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1893] = 1,
    ACTIONS(140), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1916] = 1,
    ACTIONS(142), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1939] = 1,
    ACTIONS(144), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1962] = 1,
    ACTIONS(146), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [1985] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(148), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(150), 1,
      anon_sym_not,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(97), 1,
      sym_annotations,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(231), 1,
      sym__class_iri,
    STATE(270), 1,
      sym_conjunction,
    STATE(306), 1,
      sym_description,
    STATE(343), 1,
      sym_description_annotated_list,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2040] = 1,
    ACTIONS(154), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2063] = 1,
    ACTIONS(156), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2086] = 1,
    ACTIONS(158), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2109] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(148), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(70), 1,
      sym__class_iri,
    STATE(80), 1,
      sym_primary,
    STATE(83), 1,
      sym_conjunction,
    STATE(98), 1,
      sym_description,
    STATE(99), 1,
      sym_annotations,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(167), 1,
      sym_description_annotated_list,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2164] = 1,
    ACTIONS(162), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2187] = 1,
    ACTIONS(164), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2210] = 1,
    ACTIONS(128), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2233] = 1,
    ACTIONS(166), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2256] = 1,
    ACTIONS(7), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2279] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(148), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(96), 1,
      sym__class_iri,
    STATE(110), 1,
      sym_annotations,
    STATE(121), 1,
      sym_primary,
    STATE(141), 1,
      sym_conjunction,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(177), 1,
      sym_description,
    STATE(203), 1,
      sym_description_annotated_list,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2334] = 1,
    ACTIONS(170), 20,
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
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2357] = 3,
    ACTIONS(172), 1,
      anon_sym_and,
    STATE(67), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(164), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2383] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(148), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(70), 1,
      sym__class_iri,
    STATE(80), 1,
      sym_primary,
    STATE(83), 1,
      sym_conjunction,
    STATE(105), 1,
      sym_annotations,
    STATE(136), 1,
      sym_description,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2435] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(148), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(150), 1,
      anon_sym_not,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(136), 1,
      sym_description,
    STATE(137), 1,
      sym_annotations,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(231), 1,
      sym__class_iri,
    STATE(270), 1,
      sym_conjunction,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2487] = 2,
    ACTIONS(175), 1,
      anon_sym_that,
    ACTIONS(154), 18,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2511] = 3,
    ACTIONS(179), 1,
      anon_sym_and,
    STATE(79), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(177), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2537] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(148), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(96), 1,
      sym__class_iri,
    STATE(121), 1,
      sym_primary,
    STATE(131), 1,
      sym_annotations,
    STATE(136), 1,
      sym_description,
    STATE(141), 1,
      sym_conjunction,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2589] = 3,
    ACTIONS(179), 1,
      anon_sym_and,
    STATE(79), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(181), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2615] = 3,
    ACTIONS(185), 1,
      anon_sym_and,
    STATE(67), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(183), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2641] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(53), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(126), 1,
      sym_data_primary,
    STATE(37), 2,
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
  [2687] = 1,
    ACTIONS(187), 19,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2709] = 3,
    ACTIONS(179), 1,
      anon_sym_and,
    STATE(73), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(177), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2735] = 3,
    ACTIONS(179), 1,
      anon_sym_and,
    STATE(71), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(189), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2761] = 3,
    ACTIONS(191), 1,
      anon_sym_and,
    STATE(79), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(140), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2787] = 3,
    ACTIONS(185), 1,
      anon_sym_and,
    STATE(74), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(194), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2813] = 3,
    ACTIONS(198), 1,
      anon_sym_and,
    STATE(86), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(196), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2838] = 3,
    ACTIONS(202), 1,
      anon_sym_or,
    STATE(84), 1,
      aux_sym_description_repeat1,
    ACTIONS(200), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2863] = 3,
    ACTIONS(202), 1,
      anon_sym_or,
    STATE(82), 1,
      aux_sym_description_repeat1,
    ACTIONS(204), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2888] = 3,
    ACTIONS(206), 1,
      anon_sym_or,
    STATE(84), 1,
      aux_sym_description_repeat1,
    ACTIONS(187), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2913] = 12,
    ACTIONS(209), 1,
      anon_sym_LT,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    ACTIONS(215), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      sym__quotedString,
    ACTIONS(219), 1,
      sym__pn_local,
    ACTIONS(221), 1,
      sym__pname_ln,
    STATE(385), 1,
      sym_annotation_target,
    ACTIONS(211), 2,
      sym__non_zero,
      sym__zero,
    STATE(326), 2,
      aux_sym__digits,
      sym__digit,
    STATE(381), 2,
      sym_iri,
      sym_literal,
    STATE(384), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(393), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2956] = 3,
    ACTIONS(225), 1,
      anon_sym_and,
    STATE(86), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(223), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [2981] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(230), 1,
      anon_sym_PLUS,
    ACTIONS(232), 1,
      anon_sym_DASH,
    ACTIONS(234), 1,
      sym__quotedString,
    STATE(31), 1,
      sym_annotation_target,
    ACTIONS(228), 2,
      sym__non_zero,
      sym__zero,
    STATE(16), 2,
      aux_sym__digits,
      sym__digit,
    STATE(28), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(33), 2,
      sym_iri,
      sym_literal,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3024] = 3,
    ACTIONS(198), 1,
      anon_sym_and,
    STATE(81), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(236), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3049] = 12,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_PLUS,
    ACTIONS(244), 1,
      anon_sym_DASH,
    ACTIONS(246), 1,
      sym__quotedString,
    ACTIONS(248), 1,
      sym__pn_local,
    ACTIONS(250), 1,
      sym__pname_ln,
    STATE(370), 1,
      sym_annotation_target,
    ACTIONS(240), 2,
      sym__non_zero,
      sym__zero,
    STATE(301), 2,
      aux_sym__digits,
      sym__digit,
    STATE(368), 2,
      sym_iri,
      sym_literal,
    STATE(369), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(366), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3092] = 12,
    ACTIONS(252), 1,
      anon_sym_LT,
    ACTIONS(256), 1,
      anon_sym_PLUS,
    ACTIONS(258), 1,
      anon_sym_DASH,
    ACTIONS(260), 1,
      sym__quotedString,
    ACTIONS(262), 1,
      sym__pn_local,
    ACTIONS(264), 1,
      sym__pname_ln,
    STATE(412), 1,
      sym_annotation_target,
    ACTIONS(254), 2,
      sym__non_zero,
      sym__zero,
    STATE(349), 2,
      aux_sym__digits,
      sym__digit,
    STATE(417), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(418), 2,
      sym_iri,
      sym_literal,
    STATE(424), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3135] = 12,
    ACTIONS(266), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_PLUS,
    ACTIONS(272), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      sym__quotedString,
    ACTIONS(276), 1,
      sym__pn_local,
    ACTIONS(278), 1,
      sym__pname_ln,
    STATE(281), 1,
      sym_annotation_target,
    ACTIONS(268), 2,
      sym__non_zero,
      sym__zero,
    STATE(162), 2,
      aux_sym__digits,
      sym__digit,
    STATE(253), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(282), 2,
      sym_iri,
      sym_literal,
    STATE(262), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3178] = 3,
    ACTIONS(282), 1,
      anon_sym_or,
    STATE(122), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(280), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3202] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(44), 1,
      sym_datatype,
    STATE(62), 1,
      sym_datatype_restriction,
    STATE(63), 1,
      sym_data_atomic,
    STATE(37), 2,
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
  [3242] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(404), 1,
      sym_primary,
    STATE(407), 1,
      sym__class_iri,
    STATE(439), 1,
      sym_conjunction,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(476), 1,
      sym_description,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3288] = 4,
    ACTIONS(286), 2,
      sym__non_zero,
      sym__zero,
    STATE(100), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(42), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [3314] = 2,
    ACTIONS(288), 1,
      anon_sym_that,
    ACTIONS(154), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3336] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(150), 1,
      anon_sym_not,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(231), 1,
      sym__class_iri,
    STATE(270), 1,
      sym_conjunction,
    STATE(285), 1,
      sym_description,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3382] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(290), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3406] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(70), 1,
      sym__class_iri,
    STATE(80), 1,
      sym_primary,
    STATE(83), 1,
      sym_conjunction,
    STATE(111), 1,
      sym_description,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3452] = 4,
    ACTIONS(294), 2,
      sym__non_zero,
      sym__zero,
    STATE(101), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(36), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [3478] = 4,
    ACTIONS(296), 2,
      sym__non_zero,
      sym__zero,
    STATE(101), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(29), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [3504] = 3,
    ACTIONS(299), 1,
      anon_sym_and,
    STATE(125), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(177), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3528] = 3,
    ACTIONS(299), 1,
      anon_sym_and,
    STATE(127), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(189), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3552] = 1,
    ACTIONS(301), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3572] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(70), 1,
      sym__class_iri,
    STATE(80), 1,
      sym_primary,
    STATE(83), 1,
      sym_conjunction,
    STATE(119), 1,
      sym_description,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3618] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(303), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3642] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(307), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3666] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(312), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3690] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(314), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3714] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(96), 1,
      sym__class_iri,
    STATE(121), 1,
      sym_primary,
    STATE(141), 1,
      sym_conjunction,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(176), 1,
      sym_description,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3760] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(318), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3784] = 3,
    ACTIONS(322), 1,
      anon_sym_o,
    STATE(112), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(320), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3808] = 3,
    ACTIONS(327), 1,
      anon_sym_o,
    STATE(128), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(325), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3832] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(329), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3856] = 1,
    ACTIONS(331), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3876] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(329), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3900] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(333), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3924] = 3,
    ACTIONS(282), 1,
      anon_sym_or,
    STATE(92), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(335), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3948] = 1,
    ACTIONS(337), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3968] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(318), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [3992] = 3,
    ACTIONS(339), 1,
      anon_sym_and,
    STATE(132), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(194), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4016] = 3,
    ACTIONS(343), 1,
      anon_sym_or,
    STATE(122), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(341), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4040] = 3,
    ACTIONS(346), 1,
      anon_sym_and,
    STATE(123), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(140), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4064] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(333), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4088] = 3,
    ACTIONS(299), 1,
      anon_sym_and,
    STATE(123), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(181), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4112] = 1,
    ACTIONS(223), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4132] = 3,
    ACTIONS(299), 1,
      anon_sym_and,
    STATE(123), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(177), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4156] = 3,
    ACTIONS(327), 1,
      anon_sym_o,
    STATE(112), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(349), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4180] = 3,
    ACTIONS(351), 1,
      anon_sym_and,
    STATE(129), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(164), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4204] = 3,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(354), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4228] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(96), 1,
      sym__class_iri,
    STATE(119), 1,
      sym_description,
    STATE(121), 1,
      sym_primary,
    STATE(141), 1,
      sym_conjunction,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4274] = 3,
    ACTIONS(339), 1,
      anon_sym_and,
    STATE(129), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(183), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4298] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_object_property_characteristic_annotated_list_repeat1,
    ACTIONS(359), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4322] = 3,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(361), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4346] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(366), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4370] = 1,
    ACTIONS(307), 17,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4390] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(150), 1,
      anon_sym_not,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(119), 1,
      sym_description,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(231), 1,
      sym__class_iri,
    STATE(270), 1,
      sym_conjunction,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4436] = 1,
    ACTIONS(48), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4455] = 3,
    ACTIONS(368), 1,
      anon_sym_or,
    STATE(139), 1,
      aux_sym_description_repeat1,
    ACTIONS(187), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4478] = 1,
    ACTIONS(361), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4497] = 3,
    ACTIONS(371), 1,
      anon_sym_or,
    STATE(145), 1,
      aux_sym_description_repeat1,
    ACTIONS(204), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4520] = 7,
    ACTIONS(375), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(381), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(383), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(156), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(379), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(377), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(373), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4551] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(150), 1,
      anon_sym_not,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(76), 1,
      sym_conjunction,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(218), 1,
      sym_primary,
    STATE(231), 1,
      sym__class_iri,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4594] = 1,
    ACTIONS(354), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4613] = 3,
    ACTIONS(371), 1,
      anon_sym_or,
    STATE(139), 1,
      aux_sym_description_repeat1,
    ACTIONS(200), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4636] = 7,
    ACTIONS(375), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(381), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(383), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(142), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(379), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(377), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(385), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4667] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(76), 1,
      sym_conjunction,
    STATE(96), 1,
      sym__class_iri,
    STATE(121), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4710] = 1,
    ACTIONS(387), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4729] = 1,
    ACTIONS(341), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4748] = 1,
    ACTIONS(25), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4767] = 1,
    ACTIONS(389), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4786] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(70), 1,
      sym__class_iri,
    STATE(76), 1,
      sym_conjunction,
    STATE(80), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4829] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(76), 1,
      sym_conjunction,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(404), 1,
      sym_primary,
    STATE(407), 1,
      sym__class_iri,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4872] = 1,
    ACTIONS(391), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4891] = 1,
    ACTIONS(320), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4910] = 7,
    ACTIONS(395), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(404), 1,
      anon_sym_Characteristics_COLON,
    ACTIONS(407), 1,
      anon_sym_SubPropertyChain_COLON,
    STATE(156), 1,
      aux_sym_object_property_frame_repeat2,
    ACTIONS(401), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(398), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(393), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4941] = 1,
    ACTIONS(46), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4960] = 1,
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4979] = 1,
    ACTIONS(50), 16,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_o,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [4998] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(150), 1,
      anon_sym_not,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(64), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5038] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(412), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5060] = 4,
    ACTIONS(419), 2,
      sym__non_zero,
      sym__zero,
    STATE(165), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(64), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(417), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [5084] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(421), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5106] = 4,
    ACTIONS(419), 2,
      sym__non_zero,
      sym__zero,
    STATE(165), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(68), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(425), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [5130] = 4,
    ACTIONS(429), 2,
      sym__non_zero,
      sym__zero,
    STATE(165), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(427), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [5154] = 3,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(432), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5176] = 1,
    ACTIONS(393), 15,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_SubPropertyChain_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5194] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(64), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5234] = 3,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(432), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5256] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(318), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5278] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(61), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5318] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(438), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5340] = 3,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(440), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5362] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(64), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5402] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(421), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5424] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(318), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5446] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(290), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5468] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(442), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5490] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(150), 1,
      anon_sym_not,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(61), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5530] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(61), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5570] = 3,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_data_property_expression_annotated_list_repeat1,
    ACTIONS(444), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5592] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(312), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5614] = 3,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_data_range_annotated_list_repeat1,
    ACTIONS(449), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5636] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(64), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5676] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(61), 1,
      sym_primary,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(52), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5716] = 3,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(307), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5738] = 7,
    ACTIONS(456), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(460), 1,
      anon_sym_Domain_COLON,
    ACTIONS(462), 1,
      anon_sym_Range_COLON,
    ACTIONS(464), 1,
      anon_sym_Characteristics_COLON,
    STATE(192), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(458), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(454), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5767] = 7,
    ACTIONS(456), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(460), 1,
      anon_sym_Domain_COLON,
    ACTIONS(462), 1,
      anon_sym_Range_COLON,
    ACTIONS(464), 1,
      anon_sym_Characteristics_COLON,
    STATE(187), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(458), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(466), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5796] = 1,
    ACTIONS(412), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5813] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(468), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(470), 1,
      anon_sym_inverse,
    STATE(106), 1,
      sym_object_property_expression,
    STATE(167), 1,
      sym_object_property_expression_annotated_list,
    STATE(259), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(104), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [5848] = 1,
    ACTIONS(444), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5865] = 7,
    ACTIONS(474), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(480), 1,
      anon_sym_Domain_COLON,
    ACTIONS(483), 1,
      anon_sym_Range_COLON,
    ACTIONS(486), 1,
      anon_sym_Characteristics_COLON,
    STATE(192), 1,
      aux_sym_data_property_frame_repeat1,
    ACTIONS(477), 3,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
    ACTIONS(472), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5894] = 1,
    ACTIONS(489), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5911] = 1,
    ACTIONS(491), 14,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [5928] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(468), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(470), 1,
      anon_sym_inverse,
    STATE(140), 1,
      sym_object_property_expression,
    STATE(277), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(104), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [5960] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5994] = 8,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(495), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(498), 1,
      anon_sym_Class_COLON,
    ACTIONS(501), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(504), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(507), 1,
      anon_sym_AnnotationProperty_COLON,
    STATE(197), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(378), 5,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
  [6024] = 8,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(514), 1,
      anon_sym_Class_COLON,
    ACTIONS(516), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(518), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(520), 1,
      anon_sym_AnnotationProperty_COLON,
    STATE(197), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(378), 5,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
  [6054] = 8,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(514), 1,
      anon_sym_Class_COLON,
    ACTIONS(516), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(518), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(520), 1,
      anon_sym_AnnotationProperty_COLON,
    STATE(201), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(378), 5,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
  [6084] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6118] = 8,
    ACTIONS(512), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(514), 1,
      anon_sym_Class_COLON,
    ACTIONS(516), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(518), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(520), 1,
      anon_sym_AnnotationProperty_COLON,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    STATE(197), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(378), 5,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
  [6148] = 1,
    ACTIONS(524), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6164] = 1,
    ACTIONS(472), 13,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_Characteristics_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6180] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6214] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_iri,
    STATE(56), 1,
      sym__class_iri,
    STATE(148), 1,
      sym__data_property_iri,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(54), 2,
      sym_restriction,
      sym_atomic,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6248] = 2,
    ACTIONS(70), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(72), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [6266] = 8,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(514), 1,
      anon_sym_Class_COLON,
    ACTIONS(516), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(518), 1,
      anon_sym_DataProperty_COLON,
    ACTIONS(520), 1,
      anon_sym_AnnotationProperty_COLON,
    STATE(197), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(378), 5,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
      sym_data_property_frame,
      sym_annotation_property_frame,
  [6296] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(310), 1,
      sym_datatype,
    STATE(37), 2,
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
  [6324] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(20), 1,
      sym_annotation,
    STATE(203), 1,
      sym_annotation_annotated_list,
    STATE(314), 1,
      sym_annotations,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6355] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(534), 10,
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
  [6374] = 4,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(80), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(538), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [6395] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(324), 1,
      sym_annotations,
    STATE(390), 1,
      sym_annotation,
    STATE(438), 1,
      sym_annotation_annotated_list,
    STATE(90), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6426] = 3,
    ACTIONS(542), 1,
      anon_sym_and,
    STATE(213), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(164), 10,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6445] = 4,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(92), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(545), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [6466] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(547), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [6487] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(20), 1,
      sym_annotation,
    STATE(302), 1,
      sym_annotation_annotated_list,
    STATE(314), 1,
      sym_annotations,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6518] = 4,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(80), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(538), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [6539] = 3,
    ACTIONS(552), 1,
      anon_sym_and,
    STATE(219), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(194), 10,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6558] = 3,
    ACTIONS(552), 1,
      anon_sym_and,
    STATE(213), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(183), 10,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6577] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    STATE(172), 1,
      sym_data_property_expression,
    STATE(203), 1,
      sym_data_property_expression_annotated_list,
    STATE(309), 1,
      sym_annotations,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6608] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(20), 1,
      sym_annotation,
    STATE(167), 1,
      sym_annotation_annotated_list,
    STATE(314), 1,
      sym_annotations,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6639] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(20), 1,
      sym_annotation,
    STATE(314), 1,
      sym_annotations,
    STATE(360), 1,
      sym_annotation_annotated_list,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6670] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(20), 1,
      sym_annotation,
    STATE(314), 1,
      sym_annotations,
    STATE(357), 1,
      sym_annotation_annotated_list,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6701] = 3,
    ACTIONS(554), 1,
      anon_sym_and,
    STATE(224), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(140), 10,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6720] = 3,
    ACTIONS(557), 1,
      anon_sym_and,
    STATE(224), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(181), 10,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6739] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(559), 10,
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
  [6758] = 4,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(74), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(561), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [6779] = 3,
    ACTIONS(557), 1,
      anon_sym_and,
    STATE(242), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6798] = 3,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(563), 10,
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
  [6817] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(568), 10,
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
  [6836] = 2,
    ACTIONS(572), 1,
      anon_sym_that,
    ACTIONS(154), 11,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [6853] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(574), 10,
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
  [6872] = 3,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(576), 10,
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
  [6891] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(581), 10,
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
  [6910] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(323), 1,
      sym_annotations,
    STATE(380), 1,
      sym_annotation,
    STATE(423), 1,
      sym_annotation_annotated_list,
    STATE(85), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6941] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(583), 10,
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
  [6960] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(20), 1,
      sym_annotation,
    STATE(314), 1,
      sym_annotations,
    STATE(343), 1,
      sym_annotation_annotated_list,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [6991] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(328), 1,
      sym_annotations,
    STATE(361), 1,
      sym_annotation,
    STATE(397), 1,
      sym_annotation_annotated_list,
    STATE(89), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7022] = 3,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_iri_annotated_list_repeat1,
    ACTIONS(583), 10,
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
  [7041] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_annotation_property_iri_annotated_list_repeat1,
    ACTIONS(559), 10,
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
  [7060] = 3,
    ACTIONS(557), 1,
      anon_sym_and,
    STATE(225), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [7079] = 3,
    ACTIONS(557), 1,
      anon_sym_and,
    STATE(224), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [7098] = 9,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(227), 1,
      sym_annotation,
    STATE(307), 1,
      sym_annotation_annotated_list,
    STATE(334), 1,
      sym_annotations,
    STATE(91), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7129] = 5,
    ACTIONS(585), 1,
      anon_sym_Annotations_COLON,
    STATE(109), 1,
      sym_object_property_characteristic,
    STATE(167), 1,
      sym_object_property_characteristic_annotated_list,
    STATE(354), 1,
      sym_annotations,
    ACTIONS(587), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [7151] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(589), 1,
      anon_sym_not,
    STATE(403), 1,
      sym_restriction,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7179] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(591), 1,
      anon_sym_not,
    STATE(51), 1,
      sym_restriction,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7207] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(593), 1,
      anon_sym_not,
    STATE(51), 1,
      sym_restriction,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7235] = 5,
    ACTIONS(597), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(601), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(263), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(599), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(595), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [7257] = 8,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(321), 1,
      sym_annotations,
    STATE(410), 1,
      sym_annotation,
    STATE(90), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7285] = 8,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(275), 1,
      sym_annotation,
    STATE(329), 1,
      sym_annotations,
    STATE(91), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7313] = 1,
    ACTIONS(576), 11,
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
  [7327] = 8,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(325), 1,
      sym_annotations,
    STATE(376), 1,
      sym_annotation,
    STATE(89), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7355] = 2,
    ACTIONS(94), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(603), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [7371] = 1,
    ACTIONS(605), 11,
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
  [7385] = 1,
    ACTIONS(607), 11,
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
  [7399] = 7,
    ACTIONS(609), 1,
      anon_sym_LT,
    ACTIONS(611), 1,
      anon_sym_inverse,
    ACTIONS(613), 1,
      sym__pn_local,
    ACTIONS(615), 1,
      sym__pname_ln,
    STATE(113), 1,
      sym_object_property_expression,
    STATE(104), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(157), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7425] = 1,
    ACTIONS(563), 11,
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
  [7439] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(617), 1,
      anon_sym_not,
    STATE(51), 1,
      sym_restriction,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7467] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(470), 1,
      anon_sym_inverse,
    STATE(124), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(104), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [7493] = 5,
    ACTIONS(621), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(627), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(260), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(624), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(619), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [7515] = 2,
    ACTIONS(25), 5,
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
  [7531] = 2,
    ACTIONS(46), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(632), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [7547] = 5,
    ACTIONS(597), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(601), 1,
      anon_sym_SubPropertyOf_COLON,
    STATE(260), 1,
      aux_sym_annotation_property_frame_repeat1,
    ACTIONS(599), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(634), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [7569] = 2,
    ACTIONS(48), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(636), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [7585] = 2,
    ACTIONS(50), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(638), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [7601] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    STATE(191), 1,
      sym_data_property_expression,
    STATE(315), 1,
      sym_annotations,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7629] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(640), 1,
      anon_sym_not,
    STATE(51), 1,
      sym_restriction,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7657] = 6,
    ACTIONS(234), 1,
      sym__quotedString,
    ACTIONS(230), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(642), 2,
      sym__non_zero,
      sym__zero,
    STATE(16), 2,
      aux_sym__digits,
      sym__digit,
    STATE(28), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(433), 2,
      sym_literal,
      sym__restriction_value,
  [7681] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    STATE(302), 1,
      sym_annotation_property_iri_annotated_list,
    STATE(338), 1,
      sym_annotations,
    STATE(210), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7709] = 3,
    ACTIONS(644), 1,
      anon_sym_or,
    STATE(279), 1,
      aux_sym_description_repeat1,
    ACTIONS(204), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [7727] = 8,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(322), 1,
      sym_annotations,
    STATE(382), 1,
      sym_annotation,
    STATE(85), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7755] = 2,
    ACTIONS(96), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(646), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [7771] = 7,
    ACTIONS(609), 1,
      anon_sym_LT,
    ACTIONS(611), 1,
      anon_sym_inverse,
    ACTIONS(613), 1,
      sym__pn_local,
    ACTIONS(615), 1,
      sym__pname_ln,
    STATE(155), 1,
      sym_object_property_expression,
    STATE(104), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
    STATE(157), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7797] = 8,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(30), 1,
      sym_annotation,
    STATE(319), 1,
      sym_annotations,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7825] = 2,
    ACTIONS(87), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(547), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [7841] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(648), 1,
      anon_sym_not,
    STATE(228), 1,
      sym_restriction,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [7869] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(470), 1,
      anon_sym_inverse,
    STATE(151), 1,
      sym_object_property_expression,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(104), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [7895] = 6,
    ACTIONS(234), 1,
      sym__quotedString,
    ACTIONS(230), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(642), 2,
      sym__non_zero,
      sym__zero,
    STATE(16), 2,
      aux_sym__digits,
      sym__digit,
    STATE(28), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(449), 2,
      sym_literal,
      sym__restriction_value,
  [7919] = 3,
    ACTIONS(644), 1,
      anon_sym_or,
    STATE(280), 1,
      aux_sym_description_repeat1,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [7937] = 3,
    ACTIONS(650), 1,
      anon_sym_or,
    STATE(280), 1,
      aux_sym_description_repeat1,
    ACTIONS(187), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [7955] = 2,
    ACTIONS(98), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(653), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [7971] = 2,
    ACTIONS(102), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(655), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [7987] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(657), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_restriction,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8015] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(659), 1,
      anon_sym_not,
    STATE(103), 1,
      sym_restriction,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8043] = 3,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8060] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(49), 1,
      sym_restriction,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8085] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(307), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8102] = 3,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8119] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(241), 1,
      sym_restriction,
    STATE(461), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8144] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(77), 1,
      sym_restriction,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8169] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    STATE(352), 1,
      sym_annotations,
    STATE(251), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8194] = 3,
    STATE(268), 1,
      sym_facet,
    ACTIONS(666), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(668), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8211] = 4,
    ACTIONS(585), 1,
      anon_sym_Annotations_COLON,
    STATE(144), 1,
      sym_object_property_characteristic,
    STATE(356), 1,
      sym_annotations,
    ACTIONS(587), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [8230] = 3,
    STATE(278), 1,
      sym_facet,
    ACTIONS(666), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(668), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8247] = 3,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8264] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(49), 1,
      sym_restriction,
    STATE(454), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8289] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(102), 1,
      sym_restriction,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8314] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(49), 1,
      sym_restriction,
    STATE(459), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8339] = 4,
    ACTIONS(427), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(670), 2,
      sym__non_zero,
      sym__zero,
    STATE(299), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(59), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [8358] = 4,
    ACTIONS(425), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(673), 2,
      sym__non_zero,
      sym__zero,
    STATE(299), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(68), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [8377] = 4,
    ACTIONS(417), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(673), 2,
      sym__non_zero,
      sym__zero,
    STATE(299), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(64), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [8396] = 1,
    ACTIONS(619), 10,
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
  [8409] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(402), 1,
      sym_restriction,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8434] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(49), 1,
      sym_restriction,
    STATE(448), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8459] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    STATE(232), 1,
      sym_iri,
    STATE(302), 1,
      sym_iri_annotated_list,
    STATE(359), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8486] = 3,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8503] = 2,
    ACTIONS(675), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(677), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [8518] = 3,
    ACTIONS(681), 1,
      anon_sym_Annotations_COLON,
    STATE(308), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(679), 7,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8534] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(175), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8556] = 4,
    ACTIONS(686), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(688), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(333), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(684), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8574] = 4,
    ACTIONS(427), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(690), 2,
      sym__non_zero,
      sym__zero,
    STATE(311), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [8592] = 4,
    ACTIONS(425), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(693), 2,
      sym__non_zero,
      sym__zero,
    STATE(311), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(68), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [8610] = 2,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(636), 6,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [8624] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(23), 1,
      sym_annotation,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8646] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(193), 1,
      sym_data_property_expression,
    STATE(148), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8668] = 2,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(632), 6,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [8682] = 4,
    ACTIONS(697), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(700), 1,
      anon_sym_SubClassOf_COLON,
    STATE(317), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(695), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8700] = 2,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(630), 6,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [8714] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(29), 1,
      sym_annotation,
    STATE(87), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8736] = 4,
    ACTIONS(705), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(707), 1,
      anon_sym_SubClassOf_COLON,
    STATE(317), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(703), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8754] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(409), 1,
      sym_annotation,
    STATE(90), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8776] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(383), 1,
      sym_annotation,
    STATE(85), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8798] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(375), 1,
      sym_annotation,
    STATE(85), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8820] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(387), 1,
      sym_annotation,
    STATE(90), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8842] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(374), 1,
      sym_annotation,
    STATE(89), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8864] = 4,
    ACTIONS(417), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(693), 2,
      sym__non_zero,
      sym__zero,
    STATE(311), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(64), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [8882] = 2,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(638), 6,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
      sym__pn_local,
  [8896] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(358), 1,
      sym_annotation,
    STATE(89), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8918] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(272), 1,
      sym_annotation,
    STATE(91), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8940] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(528), 1,
      anon_sym_Annotations_COLON,
    STATE(257), 1,
      sym_iri,
    STATE(365), 1,
      sym_annotations,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [8964] = 4,
    ACTIONS(705), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(707), 1,
      anon_sym_SubClassOf_COLON,
    STATE(320), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(709), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [8982] = 4,
    ACTIONS(679), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(681), 1,
      anon_sym_Annotations_COLON,
    STATE(308), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(711), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9000] = 4,
    ACTIONS(686), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(716), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(332), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(714), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9018] = 6,
    ACTIONS(526), 1,
      anon_sym_LT,
    ACTIONS(530), 1,
      sym__pn_local,
    ACTIONS(532), 1,
      sym__pname_ln,
    STATE(217), 1,
      sym_annotation,
    STATE(91), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(351), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9040] = 5,
    ACTIONS(609), 1,
      anon_sym_LT,
    ACTIONS(613), 1,
      sym__pn_local,
    ACTIONS(615), 1,
      sym__pname_ln,
    STATE(115), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(157), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9059] = 4,
    ACTIONS(427), 1,
      sym__pn_local,
    ACTIONS(718), 2,
      sym__non_zero,
      sym__zero,
    STATE(336), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9076] = 3,
    ACTIONS(686), 1,
      anon_sym_Annotations_COLON,
    STATE(348), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(721), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9091] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(240), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9110] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(331), 2,
      sym_iri,
      sym__class_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9129] = 4,
    ACTIONS(425), 1,
      sym__pn_local,
    ACTIONS(723), 2,
      sym__non_zero,
      sym__zero,
    STATE(336), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(68), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9146] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(146), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9165] = 3,
    ACTIONS(686), 1,
      anon_sym_Annotations_COLON,
    STATE(347), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(725), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9180] = 1,
    ACTIONS(695), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9191] = 2,
    ACTIONS(48), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(636), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [9204] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(188), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9223] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(248), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9242] = 3,
    ACTIONS(686), 1,
      anon_sym_Annotations_COLON,
    STATE(308), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(721), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9257] = 3,
    ACTIONS(686), 1,
      anon_sym_Annotations_COLON,
    STATE(308), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(727), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9272] = 4,
    ACTIONS(417), 1,
      sym__pn_local,
    ACTIONS(723), 2,
      sym__non_zero,
      sym__zero,
    STATE(336), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(64), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9289] = 2,
    ACTIONS(50), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(638), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [9302] = 2,
    ACTIONS(46), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(632), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [9315] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(255), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9334] = 2,
    ACTIONS(25), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(630), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [9347] = 2,
    STATE(116), 1,
      sym_object_property_characteristic,
    ACTIONS(587), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [9360] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(115), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9379] = 2,
    STATE(154), 1,
      sym_object_property_characteristic,
    ACTIONS(587), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [9392] = 1,
    ACTIONS(679), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9403] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(538), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(80), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [9419] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(239), 1,
      sym_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9437] = 1,
    ACTIONS(675), 7,
      anon_sym_Functional,
      anon_sym_InverseFunctional,
      anon_sym_Reflexive,
      anon_sym_Irreflexive,
      anon_sym_Symmetric,
      anon_sym_Asymmetric,
      anon_sym_Transitive,
  [9447] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(561), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(74), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [9463] = 4,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(547), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [9479] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(545), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(92), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [9495] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(538), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(80), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [9511] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(254), 1,
      sym_iri,
    STATE(8), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [9529] = 2,
    ACTIONS(632), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(46), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9540] = 2,
    ACTIONS(630), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(25), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9551] = 2,
    ACTIONS(655), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(102), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9562] = 2,
    ACTIONS(603), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(94), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9573] = 2,
    ACTIONS(653), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(98), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9584] = 4,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(80), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(538), 2,
      anon_sym_inverse,
      sym__pn_local,
  [9599] = 4,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(92), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(545), 2,
      anon_sym_inverse,
      sym__pn_local,
  [9614] = 4,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(87), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(547), 2,
      anon_sym_inverse,
      sym__pn_local,
  [9629] = 2,
    ACTIONS(646), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(96), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9640] = 4,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(80), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(538), 2,
      anon_sym_inverse,
      sym__pn_local,
  [9655] = 2,
    ACTIONS(547), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9666] = 2,
    ACTIONS(636), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(48), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9677] = 1,
    ACTIONS(739), 6,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      anon_sym_DataProperty_COLON,
      anon_sym_AnnotationProperty_COLON,
  [9686] = 2,
    ACTIONS(638), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(50), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [9697] = 4,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(74), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(561), 2,
      anon_sym_inverse,
      sym__pn_local,
  [9712] = 2,
    ACTIONS(655), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9722] = 2,
    ACTIONS(547), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9732] = 2,
    ACTIONS(646), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(96), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9742] = 2,
    ACTIONS(603), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(94), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9752] = 2,
    ACTIONS(653), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9762] = 4,
    ACTIONS(545), 1,
      sym__pn_local,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(92), 2,
      anon_sym_LT,
      sym__pname_ln,
  [9776] = 4,
    ACTIONS(538), 1,
      sym__pn_local,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(80), 2,
      anon_sym_LT,
      sym__pname_ln,
  [9790] = 3,
    ACTIONS(745), 1,
      anon_sym_SLASH,
    STATE(389), 1,
      aux_sym__ipath_abempty,
    ACTIONS(743), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [9802] = 3,
    ACTIONS(749), 1,
      anon_sym_SLASH,
    STATE(389), 1,
      aux_sym__ipath_abempty,
    ACTIONS(747), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [9814] = 4,
    ACTIONS(561), 1,
      sym__pn_local,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(74), 2,
      anon_sym_LT,
      sym__pname_ln,
  [9828] = 4,
    ACTIONS(547), 1,
      sym__pn_local,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(87), 2,
      anon_sym_LT,
      sym__pname_ln,
  [9842] = 2,
    ACTIONS(630), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9852] = 2,
    ACTIONS(632), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(46), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9862] = 2,
    ACTIONS(636), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(48), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9872] = 1,
    ACTIONS(755), 5,
      sym__non_zero,
      sym__zero,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__quotedString,
  [9880] = 2,
    ACTIONS(638), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(50), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [9890] = 2,
    ACTIONS(677), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(675), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [9900] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(473), 1,
      sym_ontology,
    STATE(416), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [9914] = 4,
    ACTIONS(538), 1,
      sym__pn_local,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(80), 2,
      anon_sym_LT,
      sym__pname_ln,
  [9928] = 4,
    ACTIONS(757), 1,
      sym__non_zero,
    ACTIONS(759), 1,
      sym__zero,
    STATE(3), 1,
      sym_non_negative_integer,
    STATE(19), 1,
      sym__positive_integer,
  [9941] = 2,
    ACTIONS(761), 2,
      sym__non_zero,
      sym__zero,
    STATE(340), 2,
      aux_sym__digits,
      sym__digit,
  [9950] = 3,
    ACTIONS(763), 1,
      anon_sym_and,
    STATE(425), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9961] = 3,
    ACTIONS(763), 1,
      anon_sym_and,
    STATE(426), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(189), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9972] = 3,
    ACTIONS(765), 1,
      anon_sym_and,
    STATE(419), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(194), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [9983] = 2,
    ACTIONS(767), 2,
      sym__non_zero,
      sym__zero,
    STATE(300), 2,
      aux_sym__digits,
      sym__digit,
  [9992] = 1,
    ACTIONS(747), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [9999] = 2,
    ACTIONS(769), 1,
      anon_sym_that,
    ACTIONS(154), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
  [10008] = 4,
    ACTIONS(771), 1,
      sym__non_zero,
    ACTIONS(773), 1,
      sym__zero,
    STATE(36), 1,
      sym_non_negative_integer,
    STATE(206), 1,
      sym__positive_integer,
  [10021] = 2,
    ACTIONS(646), 1,
      sym__pn_local,
    ACTIONS(96), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10030] = 2,
    ACTIONS(547), 1,
      sym__pn_local,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10039] = 2,
    ACTIONS(775), 2,
      sym__non_zero,
      sym__zero,
    STATE(164), 2,
      aux_sym__digits,
      sym__digit,
  [10048] = 2,
    ACTIONS(653), 1,
      sym__pn_local,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10057] = 4,
    ACTIONS(777), 1,
      sym__iunreserved,
    STATE(442), 1,
      sym__ihost,
    STATE(444), 1,
      sym__iauthority,
    STATE(468), 1,
      sym__iuserinfo,
  [10070] = 2,
    ACTIONS(779), 2,
      sym__non_zero,
      sym__zero,
    STATE(17), 2,
      aux_sym__digits,
      sym__digit,
  [10079] = 4,
    ACTIONS(781), 1,
      sym__non_zero,
    ACTIONS(783), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(18), 1,
      sym__positive_integer,
  [10092] = 3,
    ACTIONS(785), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(787), 1,
      anon_sym_Prefix_COLON,
    STATE(416), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [10103] = 2,
    ACTIONS(603), 1,
      sym__pn_local,
    ACTIONS(94), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10112] = 2,
    ACTIONS(655), 1,
      sym__pn_local,
    ACTIONS(102), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10121] = 3,
    ACTIONS(765), 1,
      anon_sym_and,
    STATE(428), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(183), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10132] = 2,
    ACTIONS(638), 1,
      sym__pn_local,
    ACTIONS(50), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10141] = 2,
    ACTIONS(636), 1,
      sym__pn_local,
    ACTIONS(48), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10150] = 3,
    ACTIONS(790), 1,
      anon_sym_and,
    STATE(422), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(140), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10161] = 2,
    ACTIONS(675), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(677), 2,
      anon_sym_inverse,
      sym__pn_local,
  [10170] = 2,
    ACTIONS(632), 1,
      sym__pn_local,
    ACTIONS(46), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10179] = 3,
    ACTIONS(763), 1,
      anon_sym_and,
    STATE(422), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(181), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10190] = 3,
    ACTIONS(763), 1,
      anon_sym_and,
    STATE(422), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10201] = 2,
    ACTIONS(630), 1,
      sym__pn_local,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [10210] = 3,
    ACTIONS(793), 1,
      anon_sym_and,
    STATE(428), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(164), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [10221] = 4,
    ACTIONS(796), 1,
      sym__non_zero,
    ACTIONS(798), 1,
      sym__zero,
    STATE(11), 1,
      sym_non_negative_integer,
    STATE(38), 1,
      sym__positive_integer,
  [10234] = 2,
    ACTIONS(800), 2,
      sym__non_zero,
      sym__zero,
    STATE(312), 2,
      aux_sym__digits,
      sym__digit,
  [10243] = 3,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(802), 1,
      anon_sym_or,
    STATE(431), 1,
      aux_sym_description_repeat1,
  [10253] = 3,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    STATE(432), 1,
      aux_sym_datatype_restriction_repeat1,
  [10263] = 3,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    STATE(434), 1,
      aux_sym_datatype_restriction_repeat1,
  [10273] = 3,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RBRACK,
    STATE(432), 1,
      aux_sym_datatype_restriction_repeat1,
  [10283] = 2,
    ACTIONS(818), 1,
      anon_sym_AT,
    ACTIONS(816), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [10291] = 3,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(820), 1,
      anon_sym_or,
    STATE(431), 1,
      aux_sym_description_repeat1,
  [10301] = 3,
    ACTIONS(822), 1,
      anon_sym_GT,
    ACTIONS(824), 1,
      sym__iquery,
    ACTIONS(826), 1,
      sym__ifragment,
  [10311] = 2,
    ACTIONS(677), 1,
      sym__pn_local,
    ACTIONS(675), 2,
      anon_sym_LT,
      sym__pname_ln,
  [10319] = 3,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(820), 1,
      anon_sym_or,
    STATE(436), 1,
      aux_sym_description_repeat1,
  [10329] = 1,
    ACTIONS(828), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [10334] = 2,
    ACTIONS(585), 1,
      anon_sym_Annotations_COLON,
    STATE(482), 1,
      sym_annotations,
  [10341] = 2,
    ACTIONS(830), 1,
      anon_sym_COLON,
    ACTIONS(832), 1,
      anon_sym_SLASH,
  [10348] = 2,
    ACTIONS(834), 1,
      sym__scheme,
    STATE(467), 1,
      sym__iri_rfc3987,
  [10355] = 2,
    ACTIONS(745), 1,
      anon_sym_SLASH,
    STATE(388), 1,
      aux_sym__ipath_abempty,
  [10362] = 2,
    ACTIONS(836), 1,
      anon_sym_COLON,
    ACTIONS(838), 1,
      anon_sym_SLASH,
  [10369] = 2,
    ACTIONS(840), 1,
      anon_sym_Annotations_COLON,
    STATE(43), 1,
      sym_annotations,
  [10376] = 2,
    ACTIONS(834), 1,
      sym__scheme,
    STATE(486), 1,
      sym__iri_rfc3987,
  [10383] = 2,
    ACTIONS(842), 1,
      anon_sym_only,
    ACTIONS(844), 1,
      anon_sym_exactly,
  [10390] = 1,
    ACTIONS(846), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10395] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(440), 1,
      sym_full_iri,
  [10402] = 2,
    ACTIONS(848), 1,
      anon_sym_Annotations_COLON,
    STATE(256), 1,
      sym_annotations,
  [10409] = 2,
    ACTIONS(850), 1,
      anon_sym_GT,
    ACTIONS(852), 1,
      sym__ifragment,
  [10416] = 2,
    ACTIONS(834), 1,
      sym__scheme,
    STATE(489), 1,
      sym__iri_rfc3987,
  [10423] = 2,
    ACTIONS(854), 1,
      anon_sym_only,
    ACTIONS(856), 1,
      anon_sym_exactly,
  [10430] = 2,
    ACTIONS(858), 1,
      anon_sym_SLASH_SLASH,
    STATE(437), 1,
      sym__ihier_part,
  [10437] = 2,
    ACTIONS(860), 1,
      sym__iunreserved,
    STATE(445), 1,
      sym__ihost,
  [10444] = 2,
    ACTIONS(840), 1,
      anon_sym_Annotations_COLON,
    STATE(40), 1,
      sym_annotations,
  [10451] = 2,
    ACTIONS(834), 1,
      sym__scheme,
    STATE(471), 1,
      sym__iri_rfc3987,
  [10458] = 2,
    ACTIONS(862), 1,
      anon_sym_only,
    ACTIONS(864), 1,
      anon_sym_exactly,
  [10465] = 2,
    ACTIONS(834), 1,
      sym__scheme,
    STATE(478), 1,
      sym__iri_rfc3987,
  [10472] = 2,
    ACTIONS(866), 1,
      anon_sym_only,
    ACTIONS(868), 1,
      anon_sym_exactly,
  [10479] = 2,
    ACTIONS(870), 1,
      sym__iunreserved,
    STATE(406), 1,
      sym__isegment,
  [10486] = 2,
    ACTIONS(834), 1,
      sym__scheme,
    STATE(488), 1,
      sym__iri_rfc3987,
  [10493] = 2,
    ACTIONS(834), 1,
      sym__scheme,
    STATE(484), 1,
      sym__iri_rfc3987,
  [10500] = 2,
    ACTIONS(834), 1,
      sym__scheme,
    STATE(490), 1,
      sym__iri_rfc3987,
  [10507] = 1,
    ACTIONS(850), 1,
      anon_sym_GT,
  [10511] = 1,
    ACTIONS(872), 1,
      anon_sym_GT,
  [10515] = 1,
    ACTIONS(874), 1,
      anon_sym_AT,
  [10519] = 1,
    ACTIONS(876), 1,
      ts_builtin_sym_end,
  [10523] = 1,
    ACTIONS(878), 1,
      ts_builtin_sym_end,
  [10527] = 1,
    ACTIONS(880), 1,
      anon_sym_GT,
  [10531] = 1,
    ACTIONS(882), 1,
      sym__port,
  [10535] = 1,
    ACTIONS(884), 1,
      ts_builtin_sym_end,
  [10539] = 1,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [10543] = 1,
    ACTIONS(888), 1,
      sym__port,
  [10547] = 1,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
  [10551] = 1,
    ACTIONS(892), 1,
      anon_sym_GT,
  [10555] = 1,
    ACTIONS(894), 1,
      anon_sym_GT,
  [10559] = 1,
    ACTIONS(896), 1,
      anon_sym_COLON,
  [10563] = 1,
    ACTIONS(898), 1,
      anon_sym_SLASH,
  [10567] = 1,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [10571] = 1,
    ACTIONS(902), 1,
      anon_sym_Functional,
  [10575] = 1,
    ACTIONS(838), 1,
      anon_sym_SLASH,
  [10579] = 1,
    ACTIONS(904), 1,
      anon_sym_GT,
  [10583] = 1,
    ACTIONS(906), 1,
      ts_builtin_sym_end,
  [10587] = 1,
    ACTIONS(908), 1,
      anon_sym_GT,
  [10591] = 1,
    ACTIONS(910), 1,
      sym_prefix_name,
  [10595] = 1,
    ACTIONS(912), 1,
      anon_sym_GT,
  [10599] = 1,
    ACTIONS(914), 1,
      anon_sym_GT,
  [10603] = 1,
    ACTIONS(916), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 211,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 293,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 361,
  [SMALL_STATE(11)] = 395,
  [SMALL_STATE(12)] = 456,
  [SMALL_STATE(13)] = 495,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 645,
  [SMALL_STATE(18)] = 681,
  [SMALL_STATE(19)] = 714,
  [SMALL_STATE(20)] = 745,
  [SMALL_STATE(21)] = 777,
  [SMALL_STATE(22)] = 811,
  [SMALL_STATE(23)] = 843,
  [SMALL_STATE(24)] = 875,
  [SMALL_STATE(25)] = 909,
  [SMALL_STATE(26)] = 943,
  [SMALL_STATE(27)] = 975,
  [SMALL_STATE(28)] = 1007,
  [SMALL_STATE(29)] = 1035,
  [SMALL_STATE(30)] = 1062,
  [SMALL_STATE(31)] = 1089,
  [SMALL_STATE(32)] = 1116,
  [SMALL_STATE(33)] = 1177,
  [SMALL_STATE(34)] = 1204,
  [SMALL_STATE(35)] = 1262,
  [SMALL_STATE(36)] = 1290,
  [SMALL_STATE(37)] = 1343,
  [SMALL_STATE(38)] = 1367,
  [SMALL_STATE(39)] = 1393,
  [SMALL_STATE(40)] = 1441,
  [SMALL_STATE(41)] = 1493,
  [SMALL_STATE(42)] = 1545,
  [SMALL_STATE(43)] = 1597,
  [SMALL_STATE(44)] = 1649,
  [SMALL_STATE(45)] = 1675,
  [SMALL_STATE(46)] = 1727,
  [SMALL_STATE(47)] = 1775,
  [SMALL_STATE(48)] = 1798,
  [SMALL_STATE(49)] = 1847,
  [SMALL_STATE(50)] = 1870,
  [SMALL_STATE(51)] = 1893,
  [SMALL_STATE(52)] = 1916,
  [SMALL_STATE(53)] = 1939,
  [SMALL_STATE(54)] = 1962,
  [SMALL_STATE(55)] = 1985,
  [SMALL_STATE(56)] = 2040,
  [SMALL_STATE(57)] = 2063,
  [SMALL_STATE(58)] = 2086,
  [SMALL_STATE(59)] = 2109,
  [SMALL_STATE(60)] = 2164,
  [SMALL_STATE(61)] = 2187,
  [SMALL_STATE(62)] = 2210,
  [SMALL_STATE(63)] = 2233,
  [SMALL_STATE(64)] = 2256,
  [SMALL_STATE(65)] = 2279,
  [SMALL_STATE(66)] = 2334,
  [SMALL_STATE(67)] = 2357,
  [SMALL_STATE(68)] = 2383,
  [SMALL_STATE(69)] = 2435,
  [SMALL_STATE(70)] = 2487,
  [SMALL_STATE(71)] = 2511,
  [SMALL_STATE(72)] = 2537,
  [SMALL_STATE(73)] = 2589,
  [SMALL_STATE(74)] = 2615,
  [SMALL_STATE(75)] = 2641,
  [SMALL_STATE(76)] = 2687,
  [SMALL_STATE(77)] = 2709,
  [SMALL_STATE(78)] = 2735,
  [SMALL_STATE(79)] = 2761,
  [SMALL_STATE(80)] = 2787,
  [SMALL_STATE(81)] = 2813,
  [SMALL_STATE(82)] = 2838,
  [SMALL_STATE(83)] = 2863,
  [SMALL_STATE(84)] = 2888,
  [SMALL_STATE(85)] = 2913,
  [SMALL_STATE(86)] = 2956,
  [SMALL_STATE(87)] = 2981,
  [SMALL_STATE(88)] = 3024,
  [SMALL_STATE(89)] = 3049,
  [SMALL_STATE(90)] = 3092,
  [SMALL_STATE(91)] = 3135,
  [SMALL_STATE(92)] = 3178,
  [SMALL_STATE(93)] = 3202,
  [SMALL_STATE(94)] = 3242,
  [SMALL_STATE(95)] = 3288,
  [SMALL_STATE(96)] = 3314,
  [SMALL_STATE(97)] = 3336,
  [SMALL_STATE(98)] = 3382,
  [SMALL_STATE(99)] = 3406,
  [SMALL_STATE(100)] = 3452,
  [SMALL_STATE(101)] = 3478,
  [SMALL_STATE(102)] = 3504,
  [SMALL_STATE(103)] = 3528,
  [SMALL_STATE(104)] = 3552,
  [SMALL_STATE(105)] = 3572,
  [SMALL_STATE(106)] = 3618,
  [SMALL_STATE(107)] = 3642,
  [SMALL_STATE(108)] = 3666,
  [SMALL_STATE(109)] = 3690,
  [SMALL_STATE(110)] = 3714,
  [SMALL_STATE(111)] = 3760,
  [SMALL_STATE(112)] = 3784,
  [SMALL_STATE(113)] = 3808,
  [SMALL_STATE(114)] = 3832,
  [SMALL_STATE(115)] = 3856,
  [SMALL_STATE(116)] = 3876,
  [SMALL_STATE(117)] = 3900,
  [SMALL_STATE(118)] = 3924,
  [SMALL_STATE(119)] = 3948,
  [SMALL_STATE(120)] = 3968,
  [SMALL_STATE(121)] = 3992,
  [SMALL_STATE(122)] = 4016,
  [SMALL_STATE(123)] = 4040,
  [SMALL_STATE(124)] = 4064,
  [SMALL_STATE(125)] = 4088,
  [SMALL_STATE(126)] = 4112,
  [SMALL_STATE(127)] = 4132,
  [SMALL_STATE(128)] = 4156,
  [SMALL_STATE(129)] = 4180,
  [SMALL_STATE(130)] = 4204,
  [SMALL_STATE(131)] = 4228,
  [SMALL_STATE(132)] = 4274,
  [SMALL_STATE(133)] = 4298,
  [SMALL_STATE(134)] = 4322,
  [SMALL_STATE(135)] = 4346,
  [SMALL_STATE(136)] = 4370,
  [SMALL_STATE(137)] = 4390,
  [SMALL_STATE(138)] = 4436,
  [SMALL_STATE(139)] = 4455,
  [SMALL_STATE(140)] = 4478,
  [SMALL_STATE(141)] = 4497,
  [SMALL_STATE(142)] = 4520,
  [SMALL_STATE(143)] = 4551,
  [SMALL_STATE(144)] = 4594,
  [SMALL_STATE(145)] = 4613,
  [SMALL_STATE(146)] = 4636,
  [SMALL_STATE(147)] = 4667,
  [SMALL_STATE(148)] = 4710,
  [SMALL_STATE(149)] = 4729,
  [SMALL_STATE(150)] = 4748,
  [SMALL_STATE(151)] = 4767,
  [SMALL_STATE(152)] = 4786,
  [SMALL_STATE(153)] = 4829,
  [SMALL_STATE(154)] = 4872,
  [SMALL_STATE(155)] = 4891,
  [SMALL_STATE(156)] = 4910,
  [SMALL_STATE(157)] = 4941,
  [SMALL_STATE(158)] = 4960,
  [SMALL_STATE(159)] = 4979,
  [SMALL_STATE(160)] = 4998,
  [SMALL_STATE(161)] = 5038,
  [SMALL_STATE(162)] = 5060,
  [SMALL_STATE(163)] = 5084,
  [SMALL_STATE(164)] = 5106,
  [SMALL_STATE(165)] = 5130,
  [SMALL_STATE(166)] = 5154,
  [SMALL_STATE(167)] = 5176,
  [SMALL_STATE(168)] = 5194,
  [SMALL_STATE(169)] = 5234,
  [SMALL_STATE(170)] = 5256,
  [SMALL_STATE(171)] = 5278,
  [SMALL_STATE(172)] = 5318,
  [SMALL_STATE(173)] = 5340,
  [SMALL_STATE(174)] = 5362,
  [SMALL_STATE(175)] = 5402,
  [SMALL_STATE(176)] = 5424,
  [SMALL_STATE(177)] = 5446,
  [SMALL_STATE(178)] = 5468,
  [SMALL_STATE(179)] = 5490,
  [SMALL_STATE(180)] = 5530,
  [SMALL_STATE(181)] = 5570,
  [SMALL_STATE(182)] = 5592,
  [SMALL_STATE(183)] = 5614,
  [SMALL_STATE(184)] = 5636,
  [SMALL_STATE(185)] = 5676,
  [SMALL_STATE(186)] = 5716,
  [SMALL_STATE(187)] = 5738,
  [SMALL_STATE(188)] = 5767,
  [SMALL_STATE(189)] = 5796,
  [SMALL_STATE(190)] = 5813,
  [SMALL_STATE(191)] = 5848,
  [SMALL_STATE(192)] = 5865,
  [SMALL_STATE(193)] = 5894,
  [SMALL_STATE(194)] = 5911,
  [SMALL_STATE(195)] = 5928,
  [SMALL_STATE(196)] = 5960,
  [SMALL_STATE(197)] = 5994,
  [SMALL_STATE(198)] = 6024,
  [SMALL_STATE(199)] = 6054,
  [SMALL_STATE(200)] = 6084,
  [SMALL_STATE(201)] = 6118,
  [SMALL_STATE(202)] = 6148,
  [SMALL_STATE(203)] = 6164,
  [SMALL_STATE(204)] = 6180,
  [SMALL_STATE(205)] = 6214,
  [SMALL_STATE(206)] = 6248,
  [SMALL_STATE(207)] = 6266,
  [SMALL_STATE(208)] = 6296,
  [SMALL_STATE(209)] = 6324,
  [SMALL_STATE(210)] = 6355,
  [SMALL_STATE(211)] = 6374,
  [SMALL_STATE(212)] = 6395,
  [SMALL_STATE(213)] = 6426,
  [SMALL_STATE(214)] = 6445,
  [SMALL_STATE(215)] = 6466,
  [SMALL_STATE(216)] = 6487,
  [SMALL_STATE(217)] = 6518,
  [SMALL_STATE(218)] = 6539,
  [SMALL_STATE(219)] = 6558,
  [SMALL_STATE(220)] = 6577,
  [SMALL_STATE(221)] = 6608,
  [SMALL_STATE(222)] = 6639,
  [SMALL_STATE(223)] = 6670,
  [SMALL_STATE(224)] = 6701,
  [SMALL_STATE(225)] = 6720,
  [SMALL_STATE(226)] = 6739,
  [SMALL_STATE(227)] = 6758,
  [SMALL_STATE(228)] = 6779,
  [SMALL_STATE(229)] = 6798,
  [SMALL_STATE(230)] = 6817,
  [SMALL_STATE(231)] = 6836,
  [SMALL_STATE(232)] = 6853,
  [SMALL_STATE(233)] = 6872,
  [SMALL_STATE(234)] = 6891,
  [SMALL_STATE(235)] = 6910,
  [SMALL_STATE(236)] = 6941,
  [SMALL_STATE(237)] = 6960,
  [SMALL_STATE(238)] = 6991,
  [SMALL_STATE(239)] = 7022,
  [SMALL_STATE(240)] = 7041,
  [SMALL_STATE(241)] = 7060,
  [SMALL_STATE(242)] = 7079,
  [SMALL_STATE(243)] = 7098,
  [SMALL_STATE(244)] = 7129,
  [SMALL_STATE(245)] = 7151,
  [SMALL_STATE(246)] = 7179,
  [SMALL_STATE(247)] = 7207,
  [SMALL_STATE(248)] = 7235,
  [SMALL_STATE(249)] = 7257,
  [SMALL_STATE(250)] = 7285,
  [SMALL_STATE(251)] = 7313,
  [SMALL_STATE(252)] = 7327,
  [SMALL_STATE(253)] = 7355,
  [SMALL_STATE(254)] = 7371,
  [SMALL_STATE(255)] = 7385,
  [SMALL_STATE(256)] = 7399,
  [SMALL_STATE(257)] = 7425,
  [SMALL_STATE(258)] = 7439,
  [SMALL_STATE(259)] = 7467,
  [SMALL_STATE(260)] = 7493,
  [SMALL_STATE(261)] = 7515,
  [SMALL_STATE(262)] = 7531,
  [SMALL_STATE(263)] = 7547,
  [SMALL_STATE(264)] = 7569,
  [SMALL_STATE(265)] = 7585,
  [SMALL_STATE(266)] = 7601,
  [SMALL_STATE(267)] = 7629,
  [SMALL_STATE(268)] = 7657,
  [SMALL_STATE(269)] = 7681,
  [SMALL_STATE(270)] = 7709,
  [SMALL_STATE(271)] = 7727,
  [SMALL_STATE(272)] = 7755,
  [SMALL_STATE(273)] = 7771,
  [SMALL_STATE(274)] = 7797,
  [SMALL_STATE(275)] = 7825,
  [SMALL_STATE(276)] = 7841,
  [SMALL_STATE(277)] = 7869,
  [SMALL_STATE(278)] = 7895,
  [SMALL_STATE(279)] = 7919,
  [SMALL_STATE(280)] = 7937,
  [SMALL_STATE(281)] = 7955,
  [SMALL_STATE(282)] = 7971,
  [SMALL_STATE(283)] = 7987,
  [SMALL_STATE(284)] = 8015,
  [SMALL_STATE(285)] = 8043,
  [SMALL_STATE(286)] = 8060,
  [SMALL_STATE(287)] = 8085,
  [SMALL_STATE(288)] = 8102,
  [SMALL_STATE(289)] = 8119,
  [SMALL_STATE(290)] = 8144,
  [SMALL_STATE(291)] = 8169,
  [SMALL_STATE(292)] = 8194,
  [SMALL_STATE(293)] = 8211,
  [SMALL_STATE(294)] = 8230,
  [SMALL_STATE(295)] = 8247,
  [SMALL_STATE(296)] = 8264,
  [SMALL_STATE(297)] = 8289,
  [SMALL_STATE(298)] = 8314,
  [SMALL_STATE(299)] = 8339,
  [SMALL_STATE(300)] = 8358,
  [SMALL_STATE(301)] = 8377,
  [SMALL_STATE(302)] = 8396,
  [SMALL_STATE(303)] = 8409,
  [SMALL_STATE(304)] = 8434,
  [SMALL_STATE(305)] = 8459,
  [SMALL_STATE(306)] = 8486,
  [SMALL_STATE(307)] = 8503,
  [SMALL_STATE(308)] = 8518,
  [SMALL_STATE(309)] = 8534,
  [SMALL_STATE(310)] = 8556,
  [SMALL_STATE(311)] = 8574,
  [SMALL_STATE(312)] = 8592,
  [SMALL_STATE(313)] = 8610,
  [SMALL_STATE(314)] = 8624,
  [SMALL_STATE(315)] = 8646,
  [SMALL_STATE(316)] = 8668,
  [SMALL_STATE(317)] = 8682,
  [SMALL_STATE(318)] = 8700,
  [SMALL_STATE(319)] = 8714,
  [SMALL_STATE(320)] = 8736,
  [SMALL_STATE(321)] = 8754,
  [SMALL_STATE(322)] = 8776,
  [SMALL_STATE(323)] = 8798,
  [SMALL_STATE(324)] = 8820,
  [SMALL_STATE(325)] = 8842,
  [SMALL_STATE(326)] = 8864,
  [SMALL_STATE(327)] = 8882,
  [SMALL_STATE(328)] = 8896,
  [SMALL_STATE(329)] = 8918,
  [SMALL_STATE(330)] = 8940,
  [SMALL_STATE(331)] = 8964,
  [SMALL_STATE(332)] = 8982,
  [SMALL_STATE(333)] = 9000,
  [SMALL_STATE(334)] = 9018,
  [SMALL_STATE(335)] = 9040,
  [SMALL_STATE(336)] = 9059,
  [SMALL_STATE(337)] = 9076,
  [SMALL_STATE(338)] = 9091,
  [SMALL_STATE(339)] = 9110,
  [SMALL_STATE(340)] = 9129,
  [SMALL_STATE(341)] = 9146,
  [SMALL_STATE(342)] = 9165,
  [SMALL_STATE(343)] = 9180,
  [SMALL_STATE(344)] = 9191,
  [SMALL_STATE(345)] = 9204,
  [SMALL_STATE(346)] = 9223,
  [SMALL_STATE(347)] = 9242,
  [SMALL_STATE(348)] = 9257,
  [SMALL_STATE(349)] = 9272,
  [SMALL_STATE(350)] = 9289,
  [SMALL_STATE(351)] = 9302,
  [SMALL_STATE(352)] = 9315,
  [SMALL_STATE(353)] = 9334,
  [SMALL_STATE(354)] = 9347,
  [SMALL_STATE(355)] = 9360,
  [SMALL_STATE(356)] = 9379,
  [SMALL_STATE(357)] = 9392,
  [SMALL_STATE(358)] = 9403,
  [SMALL_STATE(359)] = 9419,
  [SMALL_STATE(360)] = 9437,
  [SMALL_STATE(361)] = 9447,
  [SMALL_STATE(362)] = 9463,
  [SMALL_STATE(363)] = 9479,
  [SMALL_STATE(364)] = 9495,
  [SMALL_STATE(365)] = 9511,
  [SMALL_STATE(366)] = 9529,
  [SMALL_STATE(367)] = 9540,
  [SMALL_STATE(368)] = 9551,
  [SMALL_STATE(369)] = 9562,
  [SMALL_STATE(370)] = 9573,
  [SMALL_STATE(371)] = 9584,
  [SMALL_STATE(372)] = 9599,
  [SMALL_STATE(373)] = 9614,
  [SMALL_STATE(374)] = 9629,
  [SMALL_STATE(375)] = 9640,
  [SMALL_STATE(376)] = 9655,
  [SMALL_STATE(377)] = 9666,
  [SMALL_STATE(378)] = 9677,
  [SMALL_STATE(379)] = 9686,
  [SMALL_STATE(380)] = 9697,
  [SMALL_STATE(381)] = 9712,
  [SMALL_STATE(382)] = 9722,
  [SMALL_STATE(383)] = 9732,
  [SMALL_STATE(384)] = 9742,
  [SMALL_STATE(385)] = 9752,
  [SMALL_STATE(386)] = 9762,
  [SMALL_STATE(387)] = 9776,
  [SMALL_STATE(388)] = 9790,
  [SMALL_STATE(389)] = 9802,
  [SMALL_STATE(390)] = 9814,
  [SMALL_STATE(391)] = 9828,
  [SMALL_STATE(392)] = 9842,
  [SMALL_STATE(393)] = 9852,
  [SMALL_STATE(394)] = 9862,
  [SMALL_STATE(395)] = 9872,
  [SMALL_STATE(396)] = 9880,
  [SMALL_STATE(397)] = 9890,
  [SMALL_STATE(398)] = 9900,
  [SMALL_STATE(399)] = 9914,
  [SMALL_STATE(400)] = 9928,
  [SMALL_STATE(401)] = 9941,
  [SMALL_STATE(402)] = 9950,
  [SMALL_STATE(403)] = 9961,
  [SMALL_STATE(404)] = 9972,
  [SMALL_STATE(405)] = 9983,
  [SMALL_STATE(406)] = 9992,
  [SMALL_STATE(407)] = 9999,
  [SMALL_STATE(408)] = 10008,
  [SMALL_STATE(409)] = 10021,
  [SMALL_STATE(410)] = 10030,
  [SMALL_STATE(411)] = 10039,
  [SMALL_STATE(412)] = 10048,
  [SMALL_STATE(413)] = 10057,
  [SMALL_STATE(414)] = 10070,
  [SMALL_STATE(415)] = 10079,
  [SMALL_STATE(416)] = 10092,
  [SMALL_STATE(417)] = 10103,
  [SMALL_STATE(418)] = 10112,
  [SMALL_STATE(419)] = 10121,
  [SMALL_STATE(420)] = 10132,
  [SMALL_STATE(421)] = 10141,
  [SMALL_STATE(422)] = 10150,
  [SMALL_STATE(423)] = 10161,
  [SMALL_STATE(424)] = 10170,
  [SMALL_STATE(425)] = 10179,
  [SMALL_STATE(426)] = 10190,
  [SMALL_STATE(427)] = 10201,
  [SMALL_STATE(428)] = 10210,
  [SMALL_STATE(429)] = 10221,
  [SMALL_STATE(430)] = 10234,
  [SMALL_STATE(431)] = 10243,
  [SMALL_STATE(432)] = 10253,
  [SMALL_STATE(433)] = 10263,
  [SMALL_STATE(434)] = 10273,
  [SMALL_STATE(435)] = 10283,
  [SMALL_STATE(436)] = 10291,
  [SMALL_STATE(437)] = 10301,
  [SMALL_STATE(438)] = 10311,
  [SMALL_STATE(439)] = 10319,
  [SMALL_STATE(440)] = 10329,
  [SMALL_STATE(441)] = 10334,
  [SMALL_STATE(442)] = 10341,
  [SMALL_STATE(443)] = 10348,
  [SMALL_STATE(444)] = 10355,
  [SMALL_STATE(445)] = 10362,
  [SMALL_STATE(446)] = 10369,
  [SMALL_STATE(447)] = 10376,
  [SMALL_STATE(448)] = 10383,
  [SMALL_STATE(449)] = 10390,
  [SMALL_STATE(450)] = 10395,
  [SMALL_STATE(451)] = 10402,
  [SMALL_STATE(452)] = 10409,
  [SMALL_STATE(453)] = 10416,
  [SMALL_STATE(454)] = 10423,
  [SMALL_STATE(455)] = 10430,
  [SMALL_STATE(456)] = 10437,
  [SMALL_STATE(457)] = 10444,
  [SMALL_STATE(458)] = 10451,
  [SMALL_STATE(459)] = 10458,
  [SMALL_STATE(460)] = 10465,
  [SMALL_STATE(461)] = 10472,
  [SMALL_STATE(462)] = 10479,
  [SMALL_STATE(463)] = 10486,
  [SMALL_STATE(464)] = 10493,
  [SMALL_STATE(465)] = 10500,
  [SMALL_STATE(466)] = 10507,
  [SMALL_STATE(467)] = 10511,
  [SMALL_STATE(468)] = 10515,
  [SMALL_STATE(469)] = 10519,
  [SMALL_STATE(470)] = 10523,
  [SMALL_STATE(471)] = 10527,
  [SMALL_STATE(472)] = 10531,
  [SMALL_STATE(473)] = 10535,
  [SMALL_STATE(474)] = 10539,
  [SMALL_STATE(475)] = 10543,
  [SMALL_STATE(476)] = 10547,
  [SMALL_STATE(477)] = 10551,
  [SMALL_STATE(478)] = 10555,
  [SMALL_STATE(479)] = 10559,
  [SMALL_STATE(480)] = 10563,
  [SMALL_STATE(481)] = 10567,
  [SMALL_STATE(482)] = 10571,
  [SMALL_STATE(483)] = 10575,
  [SMALL_STATE(484)] = 10579,
  [SMALL_STATE(485)] = 10583,
  [SMALL_STATE(486)] = 10587,
  [SMALL_STATE(487)] = 10591,
  [SMALL_STATE(488)] = 10595,
  [SMALL_STATE(489)] = 10599,
  [SMALL_STATE(490)] = 10603,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(24),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(274),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_target, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_iri, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_iri, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(185),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(247),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(152),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2), SHIFT_REPEAT(75),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(101),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(68),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(273),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_object_property, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(48),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(267),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 4),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(180),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 2), SHIFT_REPEAT(293),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic_annotated_list, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(195),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 3),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(147),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_characteristic_annotated_list_repeat1, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(221),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(190),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(59),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(244),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat2, 2), SHIFT_REPEAT(451),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_characteristic, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 2), SHIFT_REPEAT(34),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(165),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression_annotated_list, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(266),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range_annotated_list, 3),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(72),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_frame, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(209),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(220),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(65),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(32),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 2), SHIFT_REPEAT(441),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_expression_annotated_list_repeat1, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_annotated_list_repeat1, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(208),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(339),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(341),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(345),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(346),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_frame_repeat1, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(179),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(250),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(246),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(330),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 2), SHIFT_REPEAT(291),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_iri_annotated_list, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_annotated_list, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iri_annotated_list_repeat1, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_iri_annotated_list_repeat1, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(216),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(305),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_property_frame_repeat1, 2), SHIFT_REPEAT(269),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property_frame, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(143),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_target, 1),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(69),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(299),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), SHIFT_REPEAT(223),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(311),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(237),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(55),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), REDUCE(sym_datatype_frame, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(336),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(252),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(271),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(462),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(249),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facet, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(487),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(258),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(171),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(153),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(294),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [906] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
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

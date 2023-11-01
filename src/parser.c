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
#define STATE_COUNT 368
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
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
  anon_sym_COLON = 47,
  sym__scheme = 48,
  anon_sym_SLASH_SLASH = 49,
  anon_sym_AT = 50,
  sym__iunreserved = 51,
  sym__port = 52,
  anon_sym_SLASH = 53,
  sym__iquery = 54,
  sym__ifragment = 55,
  sym__pn_local = 56,
  sym__pname_ln = 57,
  sym_source_file = 58,
  sym_iri = 59,
  sym_full_iri = 60,
  sym_abbreviated_iri = 61,
  sym_simple_iri = 62,
  sym_datatype = 63,
  sym__datatype_iri = 64,
  sym__class_iri = 65,
  sym__annotation_property_iri = 66,
  sym__ontology_iri = 67,
  sym__data_property_iri = 68,
  sym__version_iri = 69,
  sym__object_property_iri = 70,
  sym_non_negative_integer = 71,
  sym__positive_integer = 72,
  aux_sym__digits = 73,
  sym__digit = 74,
  sym_literal = 75,
  sym__integer_literal = 76,
  sym__string_literal_no_language = 77,
  sym_ontology_document = 78,
  sym_ontology = 79,
  sym_frame = 80,
  sym_prefix_declaration = 81,
  sym_annotations = 82,
  sym_annotation = 83,
  sym_annotation_target = 84,
  sym_object_property_expression = 85,
  sym_inverse_object_property = 86,
  sym_data_property_expression = 87,
  sym_data_primary = 88,
  sym_data_atomic = 89,
  sym_data_range = 90,
  sym_data_conjunction = 91,
  sym_datatype_restriction = 92,
  sym_facet = 93,
  sym__restriction_value = 94,
  sym_description = 95,
  sym_conjunction = 96,
  sym_primary = 97,
  sym_restriction = 98,
  sym_atomic = 99,
  sym_datatype_frame = 100,
  sym_class_frame = 101,
  sym_object_property_frame = 102,
  sym_description_annotated_list = 103,
  sym_annotation_annotated_list = 104,
  sym_object_property_expression_annotated_list = 105,
  sym__iri_rfc3987 = 106,
  sym__ihier_part = 107,
  sym__iauthority = 108,
  sym__iuserinfo = 109,
  sym__ihost = 110,
  aux_sym__ipath_abempty = 111,
  sym__isegment = 112,
  aux_sym__positive_integer_repeat1 = 113,
  aux_sym_ontology_document_repeat1 = 114,
  aux_sym_ontology_repeat1 = 115,
  aux_sym_data_range_repeat1 = 116,
  aux_sym_data_conjunction_repeat1 = 117,
  aux_sym_datatype_restriction_repeat1 = 118,
  aux_sym_description_repeat1 = 119,
  aux_sym_conjunction_repeat1 = 120,
  aux_sym_conjunction_repeat2 = 121,
  aux_sym_datatype_frame_repeat1 = 122,
  aux_sym_class_frame_repeat1 = 123,
  aux_sym_object_property_frame_repeat1 = 124,
  aux_sym_description_annotated_list_repeat1 = 125,
  aux_sym_annotation_annotated_list_repeat1 = 126,
  aux_sym_object_property_expression_annotated_list_repeat1 = 127,
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
  [sym_description_annotated_list] = "description_annotated_list",
  [sym_annotation_annotated_list] = "annotation_annotated_list",
  [sym_object_property_expression_annotated_list] = "object_property_expression_annotated_list",
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
  [aux_sym_description_annotated_list_repeat1] = "description_annotated_list_repeat1",
  [aux_sym_annotation_annotated_list_repeat1] = "annotation_annotated_list_repeat1",
  [aux_sym_object_property_expression_annotated_list_repeat1] = "object_property_expression_annotated_list_repeat1",
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
  [sym_description_annotated_list] = sym_description_annotated_list,
  [sym_annotation_annotated_list] = sym_annotation_annotated_list,
  [sym_object_property_expression_annotated_list] = sym_object_property_expression_annotated_list,
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
  [aux_sym_description_annotated_list_repeat1] = aux_sym_description_annotated_list_repeat1,
  [aux_sym_annotation_annotated_list_repeat1] = aux_sym_annotation_annotated_list_repeat1,
  [aux_sym_object_property_expression_annotated_list_repeat1] = aux_sym_object_property_expression_annotated_list_repeat1,
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
  [8] = 4,
  [9] = 6,
  [10] = 5,
  [11] = 2,
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
  [22] = 7,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 27,
  [34] = 27,
  [35] = 35,
  [36] = 36,
  [37] = 4,
  [38] = 38,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 6,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 5,
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
  [63] = 59,
  [64] = 64,
  [65] = 65,
  [66] = 59,
  [67] = 67,
  [68] = 31,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 73,
  [74] = 29,
  [75] = 71,
  [76] = 70,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 30,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 71,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 7,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 97,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 97,
  [118] = 118,
  [119] = 87,
  [120] = 94,
  [121] = 92,
  [122] = 91,
  [123] = 123,
  [124] = 124,
  [125] = 123,
  [126] = 126,
  [127] = 95,
  [128] = 123,
  [129] = 129,
  [130] = 130,
  [131] = 123,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 18,
  [138] = 138,
  [139] = 113,
  [140] = 140,
  [141] = 138,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 88,
  [146] = 100,
  [147] = 112,
  [148] = 148,
  [149] = 149,
  [150] = 105,
  [151] = 149,
  [152] = 138,
  [153] = 138,
  [154] = 144,
  [155] = 149,
  [156] = 138,
  [157] = 144,
  [158] = 12,
  [159] = 159,
  [160] = 20,
  [161] = 17,
  [162] = 162,
  [163] = 163,
  [164] = 31,
  [165] = 73,
  [166] = 67,
  [167] = 163,
  [168] = 29,
  [169] = 78,
  [170] = 30,
  [171] = 82,
  [172] = 172,
  [173] = 80,
  [174] = 174,
  [175] = 69,
  [176] = 176,
  [177] = 176,
  [178] = 83,
  [179] = 176,
  [180] = 77,
  [181] = 84,
  [182] = 163,
  [183] = 93,
  [184] = 184,
  [185] = 185,
  [186] = 29,
  [187] = 31,
  [188] = 188,
  [189] = 189,
  [190] = 188,
  [191] = 191,
  [192] = 188,
  [193] = 89,
  [194] = 185,
  [195] = 195,
  [196] = 185,
  [197] = 185,
  [198] = 198,
  [199] = 188,
  [200] = 30,
  [201] = 201,
  [202] = 202,
  [203] = 185,
  [204] = 188,
  [205] = 205,
  [206] = 90,
  [207] = 30,
  [208] = 29,
  [209] = 209,
  [210] = 31,
  [211] = 102,
  [212] = 96,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 17,
  [217] = 20,
  [218] = 18,
  [219] = 12,
  [220] = 109,
  [221] = 221,
  [222] = 222,
  [223] = 111,
  [224] = 224,
  [225] = 99,
  [226] = 226,
  [227] = 227,
  [228] = 91,
  [229] = 17,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 12,
  [234] = 234,
  [235] = 92,
  [236] = 87,
  [237] = 237,
  [238] = 95,
  [239] = 94,
  [240] = 18,
  [241] = 20,
  [242] = 242,
  [243] = 88,
  [244] = 94,
  [245] = 12,
  [246] = 246,
  [247] = 113,
  [248] = 248,
  [249] = 18,
  [250] = 100,
  [251] = 251,
  [252] = 252,
  [253] = 20,
  [254] = 17,
  [255] = 95,
  [256] = 112,
  [257] = 87,
  [258] = 105,
  [259] = 259,
  [260] = 92,
  [261] = 91,
  [262] = 262,
  [263] = 263,
  [264] = 18,
  [265] = 113,
  [266] = 266,
  [267] = 88,
  [268] = 100,
  [269] = 174,
  [270] = 12,
  [271] = 271,
  [272] = 272,
  [273] = 94,
  [274] = 112,
  [275] = 91,
  [276] = 105,
  [277] = 92,
  [278] = 87,
  [279] = 95,
  [280] = 20,
  [281] = 17,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 78,
  [286] = 105,
  [287] = 77,
  [288] = 69,
  [289] = 284,
  [290] = 283,
  [291] = 174,
  [292] = 112,
  [293] = 12,
  [294] = 73,
  [295] = 18,
  [296] = 100,
  [297] = 284,
  [298] = 20,
  [299] = 299,
  [300] = 17,
  [301] = 88,
  [302] = 84,
  [303] = 113,
  [304] = 83,
  [305] = 82,
  [306] = 306,
  [307] = 80,
  [308] = 67,
  [309] = 284,
  [310] = 310,
  [311] = 283,
  [312] = 284,
  [313] = 89,
  [314] = 90,
  [315] = 315,
  [316] = 93,
  [317] = 174,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 327,
  [334] = 325,
  [335] = 335,
  [336] = 327,
  [337] = 337,
  [338] = 325,
  [339] = 327,
  [340] = 327,
  [341] = 341,
  [342] = 327,
  [343] = 327,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 345,
  [348] = 348,
  [349] = 349,
  [350] = 345,
  [351] = 345,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 345,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 345,
  [364] = 364,
  [365] = 345,
  [366] = 366,
  [367] = 367,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(216);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(249);
      if (lookahead == '+') ADVANCE(234);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == '0') ADVANCE(232);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(218);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '?') ADVANCE(295);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'P') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(195);
      if (lookahead == '[') ADVANCE(254);
      if (lookahead == ']') ADVANCE(256);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '+') ADVANCE(234);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(249);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(249);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 12:
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 14:
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(289);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '@') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(291);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(271);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(279);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(277);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(239);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(267);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(238);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(285);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(273);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(240);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(283);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(269);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(281);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(275);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(164);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == 'W') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(257);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'j') ADVANCE(148);
      END_STATE();
    case 111:
      if (lookahead == 'j') ADVANCE(78);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == 'q') ADVANCE(196);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 197:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 199:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 200:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 201:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 202:
      if (lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 203:
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(266);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 206:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 207:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 208:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 209:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(209)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 210:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 211:
      if (eof) ADVANCE(216);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '>') ADVANCE(219);
      if (lookahead == '?') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(305);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'I') ADVANCE(358);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(211)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 212:
      if (eof) ADVANCE(216);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 213:
      if (eof) ADVANCE(216);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(305);
      if (lookahead == 'E') ADVANCE(381);
      if (lookahead == 'I') ADVANCE(358);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == 'R') ADVANCE(311);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(213)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 214:
      if (eof) ADVANCE(216);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ',') ADVANCE(255);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(214)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 215:
      if (eof) ADVANCE(216);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'C') ADVANCE(352);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(215)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(263);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__non_zero);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__non_zero);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__zero);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__quotedString);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_minLength);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_maxLength);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_langRange);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_ObjectProperty_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Domain_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Range_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SubPropertyOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DisjointWith_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_InverseOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__iunreserved);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(289);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'C') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'O') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'O') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'O') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'W') ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(431);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'j') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'j') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(312);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'q') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'v') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'v') ADVANCE(308);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'v') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'y') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'y') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == 'y') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 211},
  [3] = {.lex_state = 212},
  [4] = {.lex_state = 213},
  [5] = {.lex_state = 213},
  [6] = {.lex_state = 213},
  [7] = {.lex_state = 211},
  [8] = {.lex_state = 214},
  [9] = {.lex_state = 214},
  [10] = {.lex_state = 214},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 212},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 215},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 215},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 30},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 30},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 31},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 31},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 31},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 31},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 31},
  [153] = {.lex_state = 31},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 31},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 215},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 215},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 215},
  [241] = {.lex_state = 215},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 14},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 14},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 211},
  [264] = {.lex_state = 14},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 211},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 14},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 14},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 211},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 0},
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
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 16},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 16},
  [324] = {.lex_state = 211},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 209},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 212},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 16},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 209},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 209},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 209},
  [340] = {.lex_state = 209},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 209},
  [343] = {.lex_state = 209},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 211},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 211},
  [353] = {.lex_state = 292},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 32},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 292},
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
    [anon_sym_or] = ACTIONS(1),
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
    [anon_sym_only] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__iquery] = ACTIONS(1),
    [sym__ifragment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(362),
    [sym_ontology_document] = STATE(361),
    [sym_ontology] = STATE(360),
    [sym_prefix_declaration] = STATE(271),
    [aux_sym_ontology_document_repeat1] = STATE(271),
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
    STATE(38), 1,
      sym_datatype,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(55), 1,
      sym_data_atomic,
    STATE(58), 1,
      sym_data_primary,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 12,
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
  [64] = 15,
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
    STATE(38), 1,
      sym_datatype,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(55), 1,
      sym_data_atomic,
    STATE(58), 1,
      sym_data_primary,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(13), 7,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [123] = 4,
    ACTIONS(29), 2,
      sym__non_zero,
      sym__zero,
    STATE(4), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(27), 18,
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
      sym__pn_local,
  [160] = 4,
    ACTIONS(36), 2,
      sym__non_zero,
      sym__zero,
    STATE(4), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(32), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(34), 18,
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
      sym__pn_local,
  [197] = 4,
    ACTIONS(42), 2,
      sym__non_zero,
      sym__zero,
    STATE(5), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(40), 18,
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
      sym__pn_local,
  [234] = 2,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(46), 18,
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
      sym__pn_local,
  [263] = 4,
    ACTIONS(48), 2,
      sym__non_zero,
      sym__zero,
    STATE(8), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(27), 13,
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
      sym__pn_local,
  [295] = 4,
    ACTIONS(51), 2,
      sym__non_zero,
      sym__zero,
    STATE(10), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(40), 13,
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
      sym__pn_local,
  [327] = 4,
    ACTIONS(53), 2,
      sym__non_zero,
      sym__zero,
    STATE(8), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(32), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(34), 13,
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
      sym__pn_local,
  [359] = 15,
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
    STATE(38), 1,
      sym_datatype,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(55), 1,
      sym_data_atomic,
    STATE(58), 1,
      sym_data_primary,
    ACTIONS(13), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [412] = 1,
    ACTIONS(55), 22,
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
  [437] = 15,
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
    STATE(38), 1,
      sym_datatype,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(55), 1,
      sym_data_atomic,
    STATE(184), 1,
      sym_data_primary,
    STATE(214), 1,
      sym_data_conjunction,
    STATE(364), 1,
      sym_data_range,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [489] = 15,
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
    STATE(38), 1,
      sym_datatype,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(55), 1,
      sym_data_atomic,
    STATE(184), 1,
      sym_data_primary,
    STATE(214), 1,
      sym_data_conjunction,
    STATE(259), 1,
      sym_data_range,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [541] = 15,
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
    STATE(38), 1,
      sym_datatype,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(55), 1,
      sym_data_atomic,
    STATE(184), 1,
      sym_data_primary,
    STATE(214), 1,
      sym_data_conjunction,
    STATE(246), 1,
      sym_data_range,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [593] = 14,
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
    STATE(38), 1,
      sym_datatype,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(55), 1,
      sym_data_atomic,
    STATE(184), 1,
      sym_data_primary,
    STATE(234), 1,
      sym_data_conjunction,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [642] = 1,
    ACTIONS(57), 20,
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
  [665] = 1,
    ACTIONS(59), 20,
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
  [688] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(61), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(63), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(35), 1,
      sym_annotations,
    STATE(69), 1,
      sym_primary,
    STATE(73), 1,
      sym__class_iri,
    STATE(89), 1,
      sym_conjunction,
    STATE(102), 1,
      sym_description,
    STATE(140), 1,
      sym_description_annotated_list,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [743] = 1,
    ACTIONS(67), 20,
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
  [766] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(61), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(39), 1,
      sym_annotations,
    STATE(165), 1,
      sym__class_iri,
    STATE(175), 1,
      sym_primary,
    STATE(193), 1,
      sym_conjunction,
    STATE(211), 1,
      sym_description,
    STATE(251), 1,
      sym_description_annotated_list,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [821] = 2,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(46), 13,
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
      sym__pn_local,
  [845] = 2,
    ACTIONS(73), 2,
      anon_sym_only,
      anon_sym_exactly,
    ACTIONS(71), 17,
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
  [869] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(61), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(43), 1,
      sym_annotations,
    STATE(110), 1,
      sym_description,
    STATE(165), 1,
      sym__class_iri,
    STATE(175), 1,
      sym_primary,
    STATE(193), 1,
      sym_conjunction,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [921] = 13,
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
    STATE(38), 1,
      sym_datatype,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(55), 1,
      sym_data_atomic,
    STATE(209), 1,
      sym_data_primary,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [967] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(61), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(63), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(45), 1,
      sym_annotations,
    STATE(69), 1,
      sym_primary,
    STATE(73), 1,
      sym__class_iri,
    STATE(89), 1,
      sym_conjunction,
    STATE(110), 1,
      sym_description,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1019] = 12,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      anon_sym_PLUS,
    ACTIONS(81), 1,
      anon_sym_DASH,
    ACTIONS(83), 1,
      sym__quotedString,
    ACTIONS(85), 1,
      sym__pn_local,
    ACTIONS(87), 1,
      sym__pname_ln,
    STATE(296), 1,
      sym_annotation_target,
    ACTIONS(77), 2,
      sym__non_zero,
      sym__zero,
    STATE(210), 2,
      aux_sym__digits,
      sym__digit,
    STATE(301), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(303), 2,
      sym_iri,
      sym_literal,
    STATE(295), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1062] = 12,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      anon_sym_PLUS,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(97), 1,
      sym__quotedString,
    ACTIONS(99), 1,
      sym__pn_local,
    ACTIONS(101), 1,
      sym__pname_ln,
    STATE(146), 1,
      sym_annotation_target,
    ACTIONS(91), 2,
      sym__non_zero,
      sym__zero,
    STATE(68), 2,
      aux_sym__digits,
      sym__digit,
    STATE(139), 2,
      sym_iri,
      sym_literal,
    STATE(145), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(137), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1105] = 3,
    ACTIONS(105), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(103), 14,
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
  [1130] = 3,
    ACTIONS(109), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(107), 14,
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
  [1155] = 3,
    ACTIONS(105), 2,
      sym__non_zero,
      sym__zero,
    STATE(30), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(112), 14,
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
  [1180] = 12,
    ACTIONS(114), 1,
      anon_sym_LT,
    ACTIONS(118), 1,
      anon_sym_PLUS,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      sym__quotedString,
    ACTIONS(124), 1,
      sym__pn_local,
    ACTIONS(126), 1,
      sym__pname_ln,
    STATE(250), 1,
      sym_annotation_target,
    ACTIONS(116), 2,
      sym__non_zero,
      sym__zero,
    STATE(164), 2,
      aux_sym__digits,
      sym__digit,
    STATE(243), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(247), 2,
      sym_iri,
      sym_literal,
    STATE(249), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1223] = 12,
    ACTIONS(128), 1,
      anon_sym_LT,
    ACTIONS(132), 1,
      anon_sym_PLUS,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      sym__quotedString,
    ACTIONS(138), 1,
      sym__pn_local,
    ACTIONS(140), 1,
      sym__pname_ln,
    STATE(268), 1,
      sym_annotation_target,
    ACTIONS(130), 2,
      sym__non_zero,
      sym__zero,
    STATE(187), 2,
      aux_sym__digits,
      sym__digit,
    STATE(265), 2,
      sym_iri,
      sym_literal,
    STATE(267), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(264), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1266] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(144), 1,
      anon_sym_PLUS,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(148), 1,
      sym__quotedString,
    STATE(100), 1,
      sym_annotation_target,
    ACTIONS(142), 2,
      sym__non_zero,
      sym__zero,
    STATE(31), 2,
      aux_sym__digits,
      sym__digit,
    STATE(88), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(113), 2,
      sym_iri,
      sym_literal,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1309] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(63), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(69), 1,
      sym_primary,
    STATE(73), 1,
      sym__class_iri,
    STATE(89), 1,
      sym_conjunction,
    STATE(99), 1,
      sym_description,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1355] = 11,
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
    STATE(38), 1,
      sym_datatype,
    STATE(52), 1,
      sym_data_atomic,
    STATE(53), 1,
      sym_datatype_restriction,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [1395] = 4,
    ACTIONS(150), 2,
      sym__non_zero,
      sym__zero,
    STATE(37), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(25), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(27), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [1421] = 2,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 16,
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
  [1443] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(165), 1,
      sym__class_iri,
    STATE(175), 1,
      sym_primary,
    STATE(193), 1,
      sym_conjunction,
    STATE(225), 1,
      sym_description,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1489] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(288), 1,
      sym_primary,
    STATE(294), 1,
      sym__class_iri,
    STATE(313), 1,
      sym_conjunction,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(349), 1,
      sym_description,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1535] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(163), 1,
      anon_sym_Class_COLON,
    ACTIONS(165), 1,
      anon_sym_ObjectProperty_COLON,
    STATE(201), 2,
      sym_iri,
      sym__version_iri,
    STATE(202), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(306), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [1575] = 4,
    ACTIONS(167), 2,
      sym__non_zero,
      sym__zero,
    STATE(46), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(38), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(40), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [1601] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(104), 1,
      sym_description,
    STATE(165), 1,
      sym__class_iri,
    STATE(175), 1,
      sym_primary,
    STATE(193), 1,
      sym_conjunction,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1647] = 1,
    ACTIONS(169), 17,
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
  [1667] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(63), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(69), 1,
      sym_primary,
    STATE(73), 1,
      sym__class_iri,
    STATE(89), 1,
      sym_conjunction,
    STATE(104), 1,
      sym_description,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1713] = 4,
    ACTIONS(171), 2,
      sym__non_zero,
      sym__zero,
    STATE(37), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(32), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(34), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [1739] = 11,
    ACTIONS(161), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(163), 1,
      anon_sym_Class_COLON,
    ACTIONS(165), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      anon_sym_LT,
    ACTIONS(177), 1,
      sym__pn_local,
    ACTIONS(179), 1,
      sym__pname_ln,
    STATE(41), 2,
      sym_iri,
      sym__ontology_iri,
    STATE(195), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(240), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(306), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [1779] = 1,
    ACTIONS(181), 16,
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
  [1798] = 1,
    ACTIONS(183), 16,
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
  [1817] = 1,
    ACTIONS(185), 16,
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
  [1836] = 1,
    ACTIONS(187), 16,
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
  [1855] = 1,
    ACTIONS(189), 16,
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
  [1874] = 1,
    ACTIONS(153), 16,
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
  [1893] = 1,
    ACTIONS(191), 16,
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
  [1912] = 1,
    ACTIONS(193), 16,
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
  [1931] = 1,
    ACTIONS(195), 16,
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
  [1950] = 1,
    ACTIONS(197), 16,
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
  [1969] = 1,
    ACTIONS(199), 16,
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
  [1988] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(79), 1,
      sym_conjunction,
    STATE(288), 1,
      sym_primary,
    STATE(294), 1,
      sym__class_iri,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2031] = 1,
    ACTIONS(7), 16,
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
  [2050] = 1,
    ACTIONS(201), 16,
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
  [2069] = 1,
    ACTIONS(203), 16,
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
  [2088] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(63), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(69), 1,
      sym_primary,
    STATE(73), 1,
      sym__class_iri,
    STATE(79), 1,
      sym_conjunction,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2131] = 1,
    ACTIONS(205), 16,
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
  [2150] = 1,
    ACTIONS(207), 16,
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
  [2169] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(79), 1,
      sym_conjunction,
    STATE(165), 1,
      sym__class_iri,
    STATE(175), 1,
      sym_primary,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2212] = 3,
    ACTIONS(211), 1,
      anon_sym_and,
    STATE(80), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(209), 13,
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
  [2234] = 4,
    ACTIONS(215), 2,
      sym__non_zero,
      sym__zero,
    STATE(81), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(112), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(213), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [2258] = 3,
    ACTIONS(211), 1,
      anon_sym_and,
    STATE(67), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(217), 13,
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
  [2280] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(48), 1,
      sym_primary,
    STATE(54), 1,
      sym__class_iri,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2320] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(54), 1,
      sym__class_iri,
    STATE(60), 1,
      sym_primary,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2360] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(48), 1,
      sym_primary,
    STATE(54), 1,
      sym__class_iri,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2400] = 2,
    ACTIONS(219), 1,
      anon_sym_that,
    ACTIONS(191), 14,
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
  [2420] = 4,
    ACTIONS(215), 2,
      sym__non_zero,
      sym__zero,
    STATE(81), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(103), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(221), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [2444] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(63), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(54), 1,
      sym__class_iri,
    STATE(60), 1,
      sym_primary,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2484] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(63), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(48), 1,
      sym_primary,
    STATE(54), 1,
      sym__class_iri,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2524] = 3,
    ACTIONS(225), 1,
      anon_sym_and,
    STATE(82), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(223), 13,
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
  [2546] = 3,
    ACTIONS(225), 1,
      anon_sym_and,
    STATE(83), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(227), 13,
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
  [2568] = 1,
    ACTIONS(229), 15,
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
  [2586] = 3,
    ACTIONS(231), 1,
      anon_sym_and,
    STATE(80), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(181), 13,
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
  [2608] = 4,
    ACTIONS(236), 2,
      sym__non_zero,
      sym__zero,
    STATE(81), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(107), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(234), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [2632] = 3,
    ACTIONS(225), 1,
      anon_sym_and,
    STATE(84), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(227), 13,
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
  [2654] = 3,
    ACTIONS(225), 1,
      anon_sym_and,
    STATE(84), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(239), 13,
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
  [2676] = 3,
    ACTIONS(241), 1,
      anon_sym_and,
    STATE(84), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(197), 13,
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
  [2698] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_iri,
    STATE(54), 1,
      sym__class_iri,
    STATE(60), 1,
      sym_primary,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(64), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2738] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(244), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(246), 1,
      anon_sym_inverse,
    STATE(107), 1,
      sym_object_property_expression,
    STATE(140), 1,
      sym_object_property_expression_annotated_list,
    STATE(142), 1,
      sym_annotations,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(132), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [2773] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(248), 12,
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
  [2794] = 1,
    ACTIONS(252), 14,
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
  [2811] = 3,
    ACTIONS(256), 1,
      anon_sym_or,
    STATE(93), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 12,
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
  [2832] = 3,
    ACTIONS(258), 1,
      anon_sym_or,
    STATE(90), 1,
      aux_sym_description_repeat1,
    ACTIONS(229), 12,
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
  [2853] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(261), 12,
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
  [2874] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(261), 12,
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
  [2895] = 3,
    ACTIONS(256), 1,
      anon_sym_or,
    STATE(90), 1,
      aux_sym_description_repeat1,
    ACTIONS(263), 12,
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
  [2916] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(265), 12,
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
  [2937] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(267), 12,
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
  [2958] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(272), 11,
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
  [2978] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(54), 1,
      sym__class_iri,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(51), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3012] = 2,
    ACTIONS(44), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(46), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [3030] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(277), 11,
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
  [3050] = 1,
    ACTIONS(281), 13,
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
  [3066] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(226), 1,
      sym_datatype,
    STATE(44), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [3094] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(283), 11,
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
  [3114] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(54), 1,
      sym__class_iri,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(51), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3148] = 1,
    ACTIONS(285), 13,
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
  [3164] = 1,
    ACTIONS(287), 13,
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
  [3180] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(289), 11,
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
  [3200] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(294), 11,
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
  [3220] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(298), 11,
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
  [3240] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(300), 11,
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
  [3260] = 1,
    ACTIONS(272), 13,
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
  [3276] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(277), 11,
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
  [3296] = 1,
    ACTIONS(267), 13,
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
  [3312] = 1,
    ACTIONS(302), 13,
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
  [3328] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(304), 11,
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
  [3348] = 9,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(244), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(246), 1,
      anon_sym_inverse,
    STATE(130), 1,
      sym_object_property_expression,
    STATE(143), 1,
      sym_annotations,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(132), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [3380] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_object_property_expression_annotated_list_repeat1,
    ACTIONS(304), 11,
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
  [3400] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_iri,
    STATE(54), 1,
      sym__class_iri,
    STATE(326), 1,
      sym__data_property_iri,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(51), 2,
      sym_restriction,
      sym_atomic,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3434] = 1,
    ACTIONS(306), 12,
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
  [3449] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(248), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(308), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3470] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(265), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(312), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3491] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(261), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(314), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3512] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(261), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(314), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3533] = 9,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(120), 1,
      sym_annotation,
    STATE(174), 1,
      sym_annotation_annotated_list,
    STATE(199), 1,
      sym_annotations,
    STATE(28), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3564] = 1,
    ACTIONS(324), 12,
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
  [3579] = 9,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(204), 1,
      sym_annotations,
    STATE(239), 1,
      sym_annotation,
    STATE(269), 1,
      sym_annotation_annotated_list,
    STATE(32), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3610] = 5,
    ACTIONS(328), 1,
      anon_sym_Annotations_COLON,
    STATE(126), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(334), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(326), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(331), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
  [3633] = 4,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(267), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(337), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3654] = 9,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(190), 1,
      sym_annotations,
    STATE(244), 1,
      sym_annotation,
    STATE(291), 1,
      sym_annotation_annotated_list,
    STATE(33), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3685] = 5,
    ACTIONS(344), 1,
      anon_sym_Annotations_COLON,
    STATE(133), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(348), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(342), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(346), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
  [3708] = 1,
    ACTIONS(289), 12,
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
  [3723] = 9,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(192), 1,
      sym_annotations,
    STATE(273), 1,
      sym_annotation,
    STATE(317), 1,
      sym_annotation_annotated_list,
    STATE(27), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3754] = 1,
    ACTIONS(350), 12,
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
  [3769] = 5,
    ACTIONS(344), 1,
      anon_sym_Annotations_COLON,
    STATE(126), 1,
      aux_sym_object_property_frame_repeat1,
    ACTIONS(348), 2,
      anon_sym_Domain_COLON,
      anon_sym_Range_COLON,
    ACTIONS(346), 4,
      anon_sym_EquivalentTo_COLON,
      anon_sym_SubPropertyOf_COLON,
      anon_sym_DisjointWith_COLON,
      anon_sym_InverseOf_COLON,
    ACTIONS(352), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [3792] = 9,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(94), 1,
      sym_annotation,
    STATE(140), 1,
      sym_annotation_annotated_list,
    STATE(188), 1,
      sym_annotations,
    STATE(34), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3823] = 9,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(94), 1,
      sym_annotation,
    STATE(188), 1,
      sym_annotations,
    STATE(248), 1,
      sym_annotation_annotated_list,
    STATE(34), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3854] = 9,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(94), 1,
      sym_annotation,
    STATE(188), 1,
      sym_annotations,
    STATE(251), 1,
      sym_annotation_annotated_list,
    STATE(34), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3885] = 2,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(354), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3901] = 8,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(185), 1,
      sym_annotations,
    STATE(274), 1,
      sym_annotation,
    STATE(33), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3929] = 2,
    ACTIONS(302), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(356), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [3945] = 1,
    ACTIONS(326), 11,
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
  [3959] = 8,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(112), 1,
      sym_annotation,
    STATE(197), 1,
      sym_annotations,
    STATE(34), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [3987] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(246), 1,
      anon_sym_inverse,
    STATE(114), 1,
      sym_object_property_expression,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(132), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [4013] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(246), 1,
      anon_sym_inverse,
    STATE(124), 1,
      sym_object_property_expression,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    STATE(132), 3,
      sym_iri,
      sym__object_property_iri,
      sym_inverse_object_property,
  [4039] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(358), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_restriction,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4067] = 2,
    ACTIONS(252), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(360), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4083] = 2,
    ACTIONS(281), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(362), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4099] = 2,
    ACTIONS(267), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(337), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4115] = 6,
    ACTIONS(148), 1,
      sym__quotedString,
    ACTIONS(144), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(364), 2,
      sym__non_zero,
      sym__zero,
    STATE(31), 2,
      aux_sym__digits,
      sym__digit,
    STATE(88), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(321), 2,
      sym_literal,
      sym__restriction_value,
  [4139] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(366), 1,
      anon_sym_not,
    STATE(57), 1,
      sym_restriction,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4167] = 2,
    ACTIONS(287), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(368), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4183] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(370), 1,
      anon_sym_not,
    STATE(57), 1,
      sym_restriction,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4211] = 8,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(196), 1,
      sym_annotations,
    STATE(256), 1,
      sym_annotation,
    STATE(32), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4239] = 8,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(147), 1,
      sym_annotation,
    STATE(203), 1,
      sym_annotations,
    STATE(28), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4267] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(372), 1,
      anon_sym_not,
    STATE(287), 1,
      sym_restriction,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4295] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(374), 1,
      anon_sym_not,
    STATE(57), 1,
      sym_restriction,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4323] = 8,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(318), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(194), 1,
      sym_annotations,
    STATE(292), 1,
      sym_annotation,
    STATE(27), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4351] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(376), 1,
      anon_sym_not,
    STATE(180), 1,
      sym_restriction,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4379] = 2,
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(378), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4395] = 6,
    ACTIONS(148), 1,
      sym__quotedString,
    ACTIONS(144), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(364), 2,
      sym__non_zero,
      sym__zero,
    STATE(31), 2,
      aux_sym__digits,
      sym__digit,
    STATE(88), 2,
      sym__integer_literal,
      sym__string_literal_no_language,
    STATE(341), 2,
      sym_literal,
      sym__restriction_value,
  [4419] = 2,
    ACTIONS(67), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(380), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4435] = 2,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(382), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4451] = 3,
    STATE(159), 1,
      sym_facet,
    ACTIONS(384), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4468] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(285), 1,
      sym_restriction,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4493] = 4,
    ACTIONS(213), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(388), 2,
      sym__non_zero,
      sym__zero,
    STATE(170), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(112), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [4512] = 2,
    ACTIONS(390), 1,
      anon_sym_that,
    ACTIONS(191), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4527] = 3,
    ACTIONS(392), 1,
      anon_sym_and,
    STATE(173), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4544] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(78), 1,
      sym_restriction,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4569] = 4,
    ACTIONS(221), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(388), 2,
      sym__non_zero,
      sym__zero,
    STATE(170), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [4588] = 3,
    ACTIONS(394), 1,
      anon_sym_and,
    STATE(178), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4605] = 4,
    ACTIONS(234), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(396), 2,
      sym__non_zero,
      sym__zero,
    STATE(170), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(107), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [4624] = 3,
    ACTIONS(394), 1,
      anon_sym_and,
    STATE(181), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4641] = 3,
    STATE(148), 1,
      sym_facet,
    ACTIONS(384), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(386), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4658] = 3,
    ACTIONS(399), 1,
      anon_sym_and,
    STATE(173), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4675] = 2,
    ACTIONS(402), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(404), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [4690] = 3,
    ACTIONS(392), 1,
      anon_sym_and,
    STATE(166), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4707] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(62), 1,
      sym_restriction,
    STATE(338), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4732] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(62), 1,
      sym_restriction,
    STATE(334), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4757] = 3,
    ACTIONS(394), 1,
      anon_sym_and,
    STATE(181), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4774] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(62), 1,
      sym_restriction,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4799] = 3,
    ACTIONS(394), 1,
      anon_sym_and,
    STATE(171), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4816] = 3,
    ACTIONS(406), 1,
      anon_sym_and,
    STATE(181), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4833] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(169), 1,
      sym_restriction,
    STATE(325), 1,
      sym_data_property_expression,
    STATE(326), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4858] = 3,
    ACTIONS(409), 1,
      anon_sym_or,
    STATE(206), 1,
      aux_sym_description_repeat1,
    ACTIONS(263), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [4874] = 3,
    ACTIONS(413), 1,
      anon_sym_and,
    STATE(198), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(411), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [4890] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(276), 1,
      sym_annotation,
    STATE(33), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4912] = 4,
    ACTIONS(221), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(415), 2,
      sym__non_zero,
      sym__zero,
    STATE(200), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(103), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [4930] = 4,
    ACTIONS(213), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(415), 2,
      sym__non_zero,
      sym__zero,
    STATE(200), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(112), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [4948] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(91), 1,
      sym_annotation,
    STATE(34), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [4970] = 6,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(421), 1,
      anon_sym_Class_COLON,
    ACTIONS(423), 1,
      anon_sym_ObjectProperty_COLON,
    STATE(205), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(306), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [4992] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(261), 1,
      sym_annotation,
    STATE(33), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5014] = 3,
    ACTIONS(427), 1,
      anon_sym_and,
    STATE(191), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5030] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(275), 1,
      sym_annotation,
    STATE(27), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5052] = 3,
    ACTIONS(409), 1,
      anon_sym_or,
    STATE(183), 1,
      aux_sym_description_repeat1,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5068] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(286), 1,
      sym_annotation,
    STATE(27), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5090] = 6,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(421), 1,
      anon_sym_Class_COLON,
    ACTIONS(423), 1,
      anon_sym_ObjectProperty_COLON,
    STATE(205), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(306), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5112] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(258), 1,
      sym_annotation,
    STATE(32), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5134] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(105), 1,
      sym_annotation,
    STATE(34), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5156] = 3,
    ACTIONS(413), 1,
      anon_sym_and,
    STATE(191), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(430), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5172] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(122), 1,
      sym_annotation,
    STATE(28), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5194] = 4,
    ACTIONS(234), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(432), 2,
      sym__non_zero,
      sym__zero,
    STATE(200), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [5212] = 6,
    ACTIONS(419), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(421), 1,
      anon_sym_Class_COLON,
    ACTIONS(423), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    STATE(189), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(306), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5234] = 6,
    ACTIONS(419), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(421), 1,
      anon_sym_Class_COLON,
    ACTIONS(423), 1,
      anon_sym_ObjectProperty_COLON,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    STATE(205), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(306), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5256] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(150), 1,
      sym_annotation,
    STATE(28), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5278] = 6,
    ACTIONS(316), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      sym__pn_local,
    ACTIONS(322), 1,
      sym__pname_ln,
    STATE(228), 1,
      sym_annotation,
    STATE(32), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(218), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5300] = 6,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(442), 1,
      anon_sym_Class_COLON,
    ACTIONS(445), 1,
      anon_sym_ObjectProperty_COLON,
    STATE(205), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(306), 3,
      sym_datatype_frame,
      sym_class_frame,
      sym_object_property_frame,
  [5322] = 3,
    ACTIONS(448), 1,
      anon_sym_or,
    STATE(206), 1,
      aux_sym_description_repeat1,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5338] = 4,
    ACTIONS(234), 1,
      sym__pn_local,
    ACTIONS(451), 2,
      sym__non_zero,
      sym__zero,
    STATE(207), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [5355] = 4,
    ACTIONS(221), 1,
      sym__pn_local,
    ACTIONS(454), 2,
      sym__non_zero,
      sym__zero,
    STATE(207), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(103), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [5372] = 1,
    ACTIONS(425), 8,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5383] = 4,
    ACTIONS(213), 1,
      sym__pn_local,
    ACTIONS(454), 2,
      sym__non_zero,
      sym__zero,
    STATE(207), 2,
      aux_sym__digits,
      sym__digit,
    ACTIONS(112), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [5400] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(283), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5415] = 3,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(272), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5430] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(129), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5449] = 3,
    ACTIONS(463), 1,
      anon_sym_or,
    STATE(224), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(461), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5464] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(118), 2,
      sym_iri,
      sym__object_property_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5483] = 2,
    ACTIONS(57), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(382), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [5496] = 2,
    ACTIONS(67), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(380), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [5509] = 2,
    ACTIONS(59), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(354), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [5522] = 2,
    ACTIONS(55), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      sym__quotedString,
      sym__pname_ln,
    ACTIONS(378), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_DASH,
      sym__pn_local,
  [5535] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(300), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5550] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(237), 2,
      sym_iri,
      sym__class_iri,
    STATE(18), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [5569] = 3,
    ACTIONS(467), 1,
      anon_sym_or,
    STATE(222), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(465), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5584] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5599] = 3,
    ACTIONS(463), 1,
      anon_sym_or,
    STATE(222), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(470), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5614] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5629] = 4,
    ACTIONS(474), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(476), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(231), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(472), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5645] = 3,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    STATE(227), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(478), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5659] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(261), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [5675] = 2,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(382), 4,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [5687] = 4,
    ACTIONS(487), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(489), 1,
      anon_sym_SubClassOf_COLON,
    STATE(242), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(485), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5703] = 4,
    ACTIONS(474), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(493), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(232), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(491), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5719] = 4,
    ACTIONS(478), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(480), 1,
      anon_sym_Annotations_COLON,
    STATE(227), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(495), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5735] = 2,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(378), 4,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [5747] = 1,
    ACTIONS(465), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5757] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(314), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(261), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [5773] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(308), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(248), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [5789] = 4,
    ACTIONS(487), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(489), 1,
      anon_sym_SubClassOf_COLON,
    STATE(230), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(498), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5805] = 4,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(337), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(267), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [5821] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(312), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(265), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [5837] = 2,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(354), 4,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [5849] = 2,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(380), 4,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
      sym__pn_local,
  [5861] = 4,
    ACTIONS(505), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(508), 1,
      anon_sym_SubClassOf_COLON,
    STATE(242), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(503), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5877] = 2,
    ACTIONS(360), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(252), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [5888] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(265), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(312), 2,
      anon_sym_inverse,
      sym__pn_local,
  [5903] = 2,
    ACTIONS(378), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(55), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [5914] = 3,
    ACTIONS(474), 1,
      anon_sym_Annotations_COLON,
    STATE(262), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(513), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5927] = 2,
    ACTIONS(356), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(302), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [5938] = 1,
    ACTIONS(478), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5947] = 2,
    ACTIONS(354), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(59), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [5958] = 2,
    ACTIONS(362), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(281), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [5969] = 1,
    ACTIONS(503), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_ObjectProperty_COLON,
  [5978] = 3,
    ACTIONS(474), 1,
      anon_sym_Annotations_COLON,
    STATE(227), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(515), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [5991] = 2,
    ACTIONS(380), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(67), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6002] = 2,
    ACTIONS(382), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(57), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6013] = 4,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(267), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(337), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6028] = 2,
    ACTIONS(337), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(267), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6039] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(248), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(308), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6054] = 2,
    ACTIONS(368), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(287), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [6065] = 3,
    ACTIONS(474), 1,
      anon_sym_Annotations_COLON,
    STATE(252), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(520), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6078] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(261), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(314), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6093] = 4,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(261), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(314), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6108] = 3,
    ACTIONS(474), 1,
      anon_sym_Annotations_COLON,
    STATE(227), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(520), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6121] = 3,
    ACTIONS(524), 1,
      anon_sym_SLASH,
    STATE(263), 1,
      aux_sym__ipath_abempty,
    ACTIONS(522), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [6133] = 2,
    ACTIONS(354), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6143] = 2,
    ACTIONS(356), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6153] = 3,
    ACTIONS(529), 1,
      anon_sym_SLASH,
    STATE(263), 1,
      aux_sym__ipath_abempty,
    ACTIONS(527), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [6165] = 2,
    ACTIONS(360), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(252), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6175] = 2,
    ACTIONS(362), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(281), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6185] = 2,
    ACTIONS(404), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(402), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [6195] = 2,
    ACTIONS(378), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6205] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(357), 1,
      sym_ontology,
    STATE(310), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [6219] = 1,
    ACTIONS(531), 5,
      sym__non_zero,
      sym__zero,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__quotedString,
  [6227] = 4,
    ACTIONS(312), 1,
      sym__pn_local,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(265), 2,
      anon_sym_LT,
      sym__pname_ln,
  [6241] = 2,
    ACTIONS(337), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(267), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6251] = 4,
    ACTIONS(314), 1,
      sym__pn_local,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(261), 2,
      anon_sym_LT,
      sym__pname_ln,
  [6265] = 2,
    ACTIONS(368), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(287), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6275] = 4,
    ACTIONS(314), 1,
      sym__pn_local,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(261), 2,
      anon_sym_LT,
      sym__pname_ln,
  [6289] = 4,
    ACTIONS(308), 1,
      sym__pn_local,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(248), 2,
      anon_sym_LT,
      sym__pname_ln,
  [6303] = 4,
    ACTIONS(337), 1,
      sym__pn_local,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(267), 2,
      anon_sym_LT,
      sym__pname_ln,
  [6317] = 2,
    ACTIONS(380), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6327] = 2,
    ACTIONS(382), 2,
      anon_sym_inverse,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6337] = 4,
    ACTIONS(538), 1,
      sym__iunreserved,
    STATE(323), 1,
      sym__ihost,
    STATE(324), 1,
      sym__iauthority,
    STATE(366), 1,
      sym__iuserinfo,
  [6350] = 4,
    ACTIONS(540), 1,
      sym__non_zero,
    ACTIONS(542), 1,
      sym__zero,
    STATE(11), 1,
      sym_non_negative_integer,
    STATE(98), 1,
      sym__positive_integer,
  [6363] = 2,
    ACTIONS(544), 2,
      sym__non_zero,
      sym__zero,
    STATE(186), 2,
      aux_sym__digits,
      sym__digit,
  [6372] = 3,
    ACTIONS(546), 1,
      anon_sym_and,
    STATE(304), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(227), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6383] = 2,
    ACTIONS(368), 1,
      sym__pn_local,
    ACTIONS(287), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6392] = 3,
    ACTIONS(546), 1,
      anon_sym_and,
    STATE(305), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6403] = 3,
    ACTIONS(548), 1,
      anon_sym_and,
    STATE(308), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(217), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6414] = 2,
    ACTIONS(550), 2,
      sym__non_zero,
      sym__zero,
    STATE(168), 2,
      aux_sym__digits,
      sym__digit,
  [6423] = 4,
    ACTIONS(552), 1,
      sym__non_zero,
    ACTIONS(554), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(7), 1,
      sym__positive_integer,
  [6436] = 2,
    ACTIONS(402), 2,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(404), 2,
      anon_sym_inverse,
      sym__pn_local,
  [6445] = 2,
    ACTIONS(337), 1,
      sym__pn_local,
    ACTIONS(267), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6454] = 2,
    ACTIONS(378), 1,
      sym__pn_local,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6463] = 2,
    ACTIONS(556), 1,
      anon_sym_that,
    ACTIONS(191), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
  [6472] = 2,
    ACTIONS(354), 1,
      sym__pn_local,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6481] = 2,
    ACTIONS(362), 1,
      sym__pn_local,
    ACTIONS(281), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6490] = 2,
    ACTIONS(558), 2,
      sym__non_zero,
      sym__zero,
    STATE(74), 2,
      aux_sym__digits,
      sym__digit,
  [6499] = 2,
    ACTIONS(380), 1,
      sym__pn_local,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6508] = 1,
    ACTIONS(522), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [6515] = 2,
    ACTIONS(382), 1,
      sym__pn_local,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6524] = 2,
    ACTIONS(360), 1,
      sym__pn_local,
    ACTIONS(252), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6533] = 3,
    ACTIONS(560), 1,
      anon_sym_and,
    STATE(302), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(197), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6544] = 2,
    ACTIONS(356), 1,
      sym__pn_local,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [6553] = 3,
    ACTIONS(546), 1,
      anon_sym_and,
    STATE(302), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(239), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6564] = 3,
    ACTIONS(546), 1,
      anon_sym_and,
    STATE(302), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(227), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6575] = 1,
    ACTIONS(563), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_ObjectProperty_COLON,
  [6582] = 3,
    ACTIONS(565), 1,
      anon_sym_and,
    STATE(307), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(181), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6593] = 3,
    ACTIONS(548), 1,
      anon_sym_and,
    STATE(307), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [6604] = 2,
    ACTIONS(568), 2,
      sym__non_zero,
      sym__zero,
    STATE(29), 2,
      aux_sym__digits,
      sym__digit,
  [6613] = 3,
    ACTIONS(570), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(572), 1,
      anon_sym_Prefix_COLON,
    STATE(310), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [6624] = 4,
    ACTIONS(575), 1,
      sym__non_zero,
    ACTIONS(577), 1,
      sym__zero,
    STATE(3), 1,
      sym_non_negative_integer,
    STATE(22), 1,
      sym__positive_integer,
  [6637] = 2,
    ACTIONS(579), 2,
      sym__non_zero,
      sym__zero,
    STATE(208), 2,
      aux_sym__digits,
      sym__digit,
  [6646] = 3,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      anon_sym_or,
    STATE(316), 1,
      aux_sym_description_repeat1,
  [6656] = 3,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(583), 1,
      anon_sym_or,
    STATE(314), 1,
      aux_sym_description_repeat1,
  [6666] = 3,
    ACTIONS(586), 1,
      anon_sym_GT,
    ACTIONS(588), 1,
      sym__iquery,
    ACTIONS(590), 1,
      sym__ifragment,
  [6676] = 3,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      anon_sym_or,
    STATE(314), 1,
      aux_sym_description_repeat1,
  [6686] = 2,
    ACTIONS(404), 1,
      sym__pn_local,
    ACTIONS(402), 2,
      anon_sym_LT,
      sym__pname_ln,
  [6694] = 2,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(592), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [6702] = 3,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_datatype_restriction_repeat1,
  [6712] = 3,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_datatype_restriction_repeat1,
  [6722] = 3,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(320), 1,
      aux_sym_datatype_restriction_repeat1,
  [6732] = 1,
    ACTIONS(607), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [6737] = 2,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_SLASH,
  [6744] = 2,
    ACTIONS(529), 1,
      anon_sym_SLASH,
    STATE(266), 1,
      aux_sym__ipath_abempty,
  [6751] = 2,
    ACTIONS(613), 1,
      anon_sym_only,
    ACTIONS(615), 1,
      anon_sym_exactly,
  [6758] = 1,
    ACTIONS(617), 2,
      anon_sym_only,
      anon_sym_exactly,
  [6763] = 2,
    ACTIONS(619), 1,
      sym__scheme,
    STATE(345), 1,
      sym__iri_rfc3987,
  [6770] = 2,
    ACTIONS(621), 1,
      anon_sym_Annotations_COLON,
    STATE(15), 1,
      sym_annotations,
  [6777] = 2,
    ACTIONS(623), 1,
      anon_sym_SLASH_SLASH,
    STATE(315), 1,
      sym__ihier_part,
  [6784] = 2,
    ACTIONS(625), 1,
      anon_sym_GT,
    ACTIONS(627), 1,
      sym__ifragment,
  [6791] = 2,
    ACTIONS(629), 1,
      sym__iunreserved,
    STATE(332), 1,
      sym__ihost,
  [6798] = 2,
    ACTIONS(631), 1,
      anon_sym_COLON,
    ACTIONS(633), 1,
      anon_sym_SLASH,
  [6805] = 2,
    ACTIONS(619), 1,
      sym__scheme,
    STATE(365), 1,
      sym__iri_rfc3987,
  [6812] = 2,
    ACTIONS(635), 1,
      anon_sym_only,
    ACTIONS(637), 1,
      anon_sym_exactly,
  [6819] = 2,
    ACTIONS(639), 1,
      sym__iunreserved,
    STATE(299), 1,
      sym__isegment,
  [6826] = 2,
    ACTIONS(619), 1,
      sym__scheme,
    STATE(351), 1,
      sym__iri_rfc3987,
  [6833] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(322), 1,
      sym_full_iri,
  [6840] = 2,
    ACTIONS(641), 1,
      anon_sym_only,
    ACTIONS(643), 1,
      anon_sym_exactly,
  [6847] = 2,
    ACTIONS(619), 1,
      sym__scheme,
    STATE(363), 1,
      sym__iri_rfc3987,
  [6854] = 2,
    ACTIONS(619), 1,
      sym__scheme,
    STATE(350), 1,
      sym__iri_rfc3987,
  [6861] = 1,
    ACTIONS(645), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6866] = 2,
    ACTIONS(619), 1,
      sym__scheme,
    STATE(347), 1,
      sym__iri_rfc3987,
  [6873] = 2,
    ACTIONS(619), 1,
      sym__scheme,
    STATE(359), 1,
      sym__iri_rfc3987,
  [6880] = 2,
    ACTIONS(621), 1,
      anon_sym_Annotations_COLON,
    STATE(14), 1,
      sym_annotations,
  [6887] = 1,
    ACTIONS(647), 1,
      anon_sym_GT,
  [6891] = 1,
    ACTIONS(633), 1,
      anon_sym_SLASH,
  [6895] = 1,
    ACTIONS(649), 1,
      anon_sym_GT,
  [6899] = 1,
    ACTIONS(625), 1,
      anon_sym_GT,
  [6903] = 1,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [6907] = 1,
    ACTIONS(653), 1,
      anon_sym_GT,
  [6911] = 1,
    ACTIONS(655), 1,
      anon_sym_GT,
  [6915] = 1,
    ACTIONS(657), 1,
      anon_sym_SLASH,
  [6919] = 1,
    ACTIONS(659), 1,
      sym__port,
  [6923] = 1,
    ACTIONS(661), 1,
      anon_sym_COLON,
  [6927] = 1,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
  [6931] = 1,
    ACTIONS(665), 1,
      sym_prefix_name,
  [6935] = 1,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
  [6939] = 1,
    ACTIONS(669), 1,
      anon_sym_GT,
  [6943] = 1,
    ACTIONS(671), 1,
      anon_sym_GT,
  [6947] = 1,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
  [6951] = 1,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
  [6955] = 1,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
  [6959] = 1,
    ACTIONS(679), 1,
      anon_sym_GT,
  [6963] = 1,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [6967] = 1,
    ACTIONS(683), 1,
      anon_sym_GT,
  [6971] = 1,
    ACTIONS(685), 1,
      anon_sym_AT,
  [6975] = 1,
    ACTIONS(687), 1,
      sym__port,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 123,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 234,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 327,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 489,
  [SMALL_STATE(15)] = 541,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 665,
  [SMALL_STATE(19)] = 688,
  [SMALL_STATE(20)] = 743,
  [SMALL_STATE(21)] = 766,
  [SMALL_STATE(22)] = 821,
  [SMALL_STATE(23)] = 845,
  [SMALL_STATE(24)] = 869,
  [SMALL_STATE(25)] = 921,
  [SMALL_STATE(26)] = 967,
  [SMALL_STATE(27)] = 1019,
  [SMALL_STATE(28)] = 1062,
  [SMALL_STATE(29)] = 1105,
  [SMALL_STATE(30)] = 1130,
  [SMALL_STATE(31)] = 1155,
  [SMALL_STATE(32)] = 1180,
  [SMALL_STATE(33)] = 1223,
  [SMALL_STATE(34)] = 1266,
  [SMALL_STATE(35)] = 1309,
  [SMALL_STATE(36)] = 1355,
  [SMALL_STATE(37)] = 1395,
  [SMALL_STATE(38)] = 1421,
  [SMALL_STATE(39)] = 1443,
  [SMALL_STATE(40)] = 1489,
  [SMALL_STATE(41)] = 1535,
  [SMALL_STATE(42)] = 1575,
  [SMALL_STATE(43)] = 1601,
  [SMALL_STATE(44)] = 1647,
  [SMALL_STATE(45)] = 1667,
  [SMALL_STATE(46)] = 1713,
  [SMALL_STATE(47)] = 1739,
  [SMALL_STATE(48)] = 1779,
  [SMALL_STATE(49)] = 1798,
  [SMALL_STATE(50)] = 1817,
  [SMALL_STATE(51)] = 1836,
  [SMALL_STATE(52)] = 1855,
  [SMALL_STATE(53)] = 1874,
  [SMALL_STATE(54)] = 1893,
  [SMALL_STATE(55)] = 1912,
  [SMALL_STATE(56)] = 1931,
  [SMALL_STATE(57)] = 1950,
  [SMALL_STATE(58)] = 1969,
  [SMALL_STATE(59)] = 1988,
  [SMALL_STATE(60)] = 2031,
  [SMALL_STATE(61)] = 2050,
  [SMALL_STATE(62)] = 2069,
  [SMALL_STATE(63)] = 2088,
  [SMALL_STATE(64)] = 2131,
  [SMALL_STATE(65)] = 2150,
  [SMALL_STATE(66)] = 2169,
  [SMALL_STATE(67)] = 2212,
  [SMALL_STATE(68)] = 2234,
  [SMALL_STATE(69)] = 2258,
  [SMALL_STATE(70)] = 2280,
  [SMALL_STATE(71)] = 2320,
  [SMALL_STATE(72)] = 2360,
  [SMALL_STATE(73)] = 2400,
  [SMALL_STATE(74)] = 2420,
  [SMALL_STATE(75)] = 2444,
  [SMALL_STATE(76)] = 2484,
  [SMALL_STATE(77)] = 2524,
  [SMALL_STATE(78)] = 2546,
  [SMALL_STATE(79)] = 2568,
  [SMALL_STATE(80)] = 2586,
  [SMALL_STATE(81)] = 2608,
  [SMALL_STATE(82)] = 2632,
  [SMALL_STATE(83)] = 2654,
  [SMALL_STATE(84)] = 2676,
  [SMALL_STATE(85)] = 2698,
  [SMALL_STATE(86)] = 2738,
  [SMALL_STATE(87)] = 2773,
  [SMALL_STATE(88)] = 2794,
  [SMALL_STATE(89)] = 2811,
  [SMALL_STATE(90)] = 2832,
  [SMALL_STATE(91)] = 2853,
  [SMALL_STATE(92)] = 2874,
  [SMALL_STATE(93)] = 2895,
  [SMALL_STATE(94)] = 2916,
  [SMALL_STATE(95)] = 2937,
  [SMALL_STATE(96)] = 2958,
  [SMALL_STATE(97)] = 2978,
  [SMALL_STATE(98)] = 3012,
  [SMALL_STATE(99)] = 3030,
  [SMALL_STATE(100)] = 3050,
  [SMALL_STATE(101)] = 3066,
  [SMALL_STATE(102)] = 3094,
  [SMALL_STATE(103)] = 3114,
  [SMALL_STATE(104)] = 3148,
  [SMALL_STATE(105)] = 3164,
  [SMALL_STATE(106)] = 3180,
  [SMALL_STATE(107)] = 3200,
  [SMALL_STATE(108)] = 3220,
  [SMALL_STATE(109)] = 3240,
  [SMALL_STATE(110)] = 3260,
  [SMALL_STATE(111)] = 3276,
  [SMALL_STATE(112)] = 3296,
  [SMALL_STATE(113)] = 3312,
  [SMALL_STATE(114)] = 3328,
  [SMALL_STATE(115)] = 3348,
  [SMALL_STATE(116)] = 3380,
  [SMALL_STATE(117)] = 3400,
  [SMALL_STATE(118)] = 3434,
  [SMALL_STATE(119)] = 3449,
  [SMALL_STATE(120)] = 3470,
  [SMALL_STATE(121)] = 3491,
  [SMALL_STATE(122)] = 3512,
  [SMALL_STATE(123)] = 3533,
  [SMALL_STATE(124)] = 3564,
  [SMALL_STATE(125)] = 3579,
  [SMALL_STATE(126)] = 3610,
  [SMALL_STATE(127)] = 3633,
  [SMALL_STATE(128)] = 3654,
  [SMALL_STATE(129)] = 3685,
  [SMALL_STATE(130)] = 3708,
  [SMALL_STATE(131)] = 3723,
  [SMALL_STATE(132)] = 3754,
  [SMALL_STATE(133)] = 3769,
  [SMALL_STATE(134)] = 3792,
  [SMALL_STATE(135)] = 3823,
  [SMALL_STATE(136)] = 3854,
  [SMALL_STATE(137)] = 3885,
  [SMALL_STATE(138)] = 3901,
  [SMALL_STATE(139)] = 3929,
  [SMALL_STATE(140)] = 3945,
  [SMALL_STATE(141)] = 3959,
  [SMALL_STATE(142)] = 3987,
  [SMALL_STATE(143)] = 4013,
  [SMALL_STATE(144)] = 4039,
  [SMALL_STATE(145)] = 4067,
  [SMALL_STATE(146)] = 4083,
  [SMALL_STATE(147)] = 4099,
  [SMALL_STATE(148)] = 4115,
  [SMALL_STATE(149)] = 4139,
  [SMALL_STATE(150)] = 4167,
  [SMALL_STATE(151)] = 4183,
  [SMALL_STATE(152)] = 4211,
  [SMALL_STATE(153)] = 4239,
  [SMALL_STATE(154)] = 4267,
  [SMALL_STATE(155)] = 4295,
  [SMALL_STATE(156)] = 4323,
  [SMALL_STATE(157)] = 4351,
  [SMALL_STATE(158)] = 4379,
  [SMALL_STATE(159)] = 4395,
  [SMALL_STATE(160)] = 4419,
  [SMALL_STATE(161)] = 4435,
  [SMALL_STATE(162)] = 4451,
  [SMALL_STATE(163)] = 4468,
  [SMALL_STATE(164)] = 4493,
  [SMALL_STATE(165)] = 4512,
  [SMALL_STATE(166)] = 4527,
  [SMALL_STATE(167)] = 4544,
  [SMALL_STATE(168)] = 4569,
  [SMALL_STATE(169)] = 4588,
  [SMALL_STATE(170)] = 4605,
  [SMALL_STATE(171)] = 4624,
  [SMALL_STATE(172)] = 4641,
  [SMALL_STATE(173)] = 4658,
  [SMALL_STATE(174)] = 4675,
  [SMALL_STATE(175)] = 4690,
  [SMALL_STATE(176)] = 4707,
  [SMALL_STATE(177)] = 4732,
  [SMALL_STATE(178)] = 4757,
  [SMALL_STATE(179)] = 4774,
  [SMALL_STATE(180)] = 4799,
  [SMALL_STATE(181)] = 4816,
  [SMALL_STATE(182)] = 4833,
  [SMALL_STATE(183)] = 4858,
  [SMALL_STATE(184)] = 4874,
  [SMALL_STATE(185)] = 4890,
  [SMALL_STATE(186)] = 4912,
  [SMALL_STATE(187)] = 4930,
  [SMALL_STATE(188)] = 4948,
  [SMALL_STATE(189)] = 4970,
  [SMALL_STATE(190)] = 4992,
  [SMALL_STATE(191)] = 5014,
  [SMALL_STATE(192)] = 5030,
  [SMALL_STATE(193)] = 5052,
  [SMALL_STATE(194)] = 5068,
  [SMALL_STATE(195)] = 5090,
  [SMALL_STATE(196)] = 5112,
  [SMALL_STATE(197)] = 5134,
  [SMALL_STATE(198)] = 5156,
  [SMALL_STATE(199)] = 5172,
  [SMALL_STATE(200)] = 5194,
  [SMALL_STATE(201)] = 5212,
  [SMALL_STATE(202)] = 5234,
  [SMALL_STATE(203)] = 5256,
  [SMALL_STATE(204)] = 5278,
  [SMALL_STATE(205)] = 5300,
  [SMALL_STATE(206)] = 5322,
  [SMALL_STATE(207)] = 5338,
  [SMALL_STATE(208)] = 5355,
  [SMALL_STATE(209)] = 5372,
  [SMALL_STATE(210)] = 5383,
  [SMALL_STATE(211)] = 5400,
  [SMALL_STATE(212)] = 5415,
  [SMALL_STATE(213)] = 5430,
  [SMALL_STATE(214)] = 5449,
  [SMALL_STATE(215)] = 5464,
  [SMALL_STATE(216)] = 5483,
  [SMALL_STATE(217)] = 5496,
  [SMALL_STATE(218)] = 5509,
  [SMALL_STATE(219)] = 5522,
  [SMALL_STATE(220)] = 5535,
  [SMALL_STATE(221)] = 5550,
  [SMALL_STATE(222)] = 5569,
  [SMALL_STATE(223)] = 5584,
  [SMALL_STATE(224)] = 5599,
  [SMALL_STATE(225)] = 5614,
  [SMALL_STATE(226)] = 5629,
  [SMALL_STATE(227)] = 5645,
  [SMALL_STATE(228)] = 5659,
  [SMALL_STATE(229)] = 5675,
  [SMALL_STATE(230)] = 5687,
  [SMALL_STATE(231)] = 5703,
  [SMALL_STATE(232)] = 5719,
  [SMALL_STATE(233)] = 5735,
  [SMALL_STATE(234)] = 5747,
  [SMALL_STATE(235)] = 5757,
  [SMALL_STATE(236)] = 5773,
  [SMALL_STATE(237)] = 5789,
  [SMALL_STATE(238)] = 5805,
  [SMALL_STATE(239)] = 5821,
  [SMALL_STATE(240)] = 5837,
  [SMALL_STATE(241)] = 5849,
  [SMALL_STATE(242)] = 5861,
  [SMALL_STATE(243)] = 5877,
  [SMALL_STATE(244)] = 5888,
  [SMALL_STATE(245)] = 5903,
  [SMALL_STATE(246)] = 5914,
  [SMALL_STATE(247)] = 5927,
  [SMALL_STATE(248)] = 5938,
  [SMALL_STATE(249)] = 5947,
  [SMALL_STATE(250)] = 5958,
  [SMALL_STATE(251)] = 5969,
  [SMALL_STATE(252)] = 5978,
  [SMALL_STATE(253)] = 5991,
  [SMALL_STATE(254)] = 6002,
  [SMALL_STATE(255)] = 6013,
  [SMALL_STATE(256)] = 6028,
  [SMALL_STATE(257)] = 6039,
  [SMALL_STATE(258)] = 6054,
  [SMALL_STATE(259)] = 6065,
  [SMALL_STATE(260)] = 6078,
  [SMALL_STATE(261)] = 6093,
  [SMALL_STATE(262)] = 6108,
  [SMALL_STATE(263)] = 6121,
  [SMALL_STATE(264)] = 6133,
  [SMALL_STATE(265)] = 6143,
  [SMALL_STATE(266)] = 6153,
  [SMALL_STATE(267)] = 6165,
  [SMALL_STATE(268)] = 6175,
  [SMALL_STATE(269)] = 6185,
  [SMALL_STATE(270)] = 6195,
  [SMALL_STATE(271)] = 6205,
  [SMALL_STATE(272)] = 6219,
  [SMALL_STATE(273)] = 6227,
  [SMALL_STATE(274)] = 6241,
  [SMALL_STATE(275)] = 6251,
  [SMALL_STATE(276)] = 6265,
  [SMALL_STATE(277)] = 6275,
  [SMALL_STATE(278)] = 6289,
  [SMALL_STATE(279)] = 6303,
  [SMALL_STATE(280)] = 6317,
  [SMALL_STATE(281)] = 6327,
  [SMALL_STATE(282)] = 6337,
  [SMALL_STATE(283)] = 6350,
  [SMALL_STATE(284)] = 6363,
  [SMALL_STATE(285)] = 6372,
  [SMALL_STATE(286)] = 6383,
  [SMALL_STATE(287)] = 6392,
  [SMALL_STATE(288)] = 6403,
  [SMALL_STATE(289)] = 6414,
  [SMALL_STATE(290)] = 6423,
  [SMALL_STATE(291)] = 6436,
  [SMALL_STATE(292)] = 6445,
  [SMALL_STATE(293)] = 6454,
  [SMALL_STATE(294)] = 6463,
  [SMALL_STATE(295)] = 6472,
  [SMALL_STATE(296)] = 6481,
  [SMALL_STATE(297)] = 6490,
  [SMALL_STATE(298)] = 6499,
  [SMALL_STATE(299)] = 6508,
  [SMALL_STATE(300)] = 6515,
  [SMALL_STATE(301)] = 6524,
  [SMALL_STATE(302)] = 6533,
  [SMALL_STATE(303)] = 6544,
  [SMALL_STATE(304)] = 6553,
  [SMALL_STATE(305)] = 6564,
  [SMALL_STATE(306)] = 6575,
  [SMALL_STATE(307)] = 6582,
  [SMALL_STATE(308)] = 6593,
  [SMALL_STATE(309)] = 6604,
  [SMALL_STATE(310)] = 6613,
  [SMALL_STATE(311)] = 6624,
  [SMALL_STATE(312)] = 6637,
  [SMALL_STATE(313)] = 6646,
  [SMALL_STATE(314)] = 6656,
  [SMALL_STATE(315)] = 6666,
  [SMALL_STATE(316)] = 6676,
  [SMALL_STATE(317)] = 6686,
  [SMALL_STATE(318)] = 6694,
  [SMALL_STATE(319)] = 6702,
  [SMALL_STATE(320)] = 6712,
  [SMALL_STATE(321)] = 6722,
  [SMALL_STATE(322)] = 6732,
  [SMALL_STATE(323)] = 6737,
  [SMALL_STATE(324)] = 6744,
  [SMALL_STATE(325)] = 6751,
  [SMALL_STATE(326)] = 6758,
  [SMALL_STATE(327)] = 6763,
  [SMALL_STATE(328)] = 6770,
  [SMALL_STATE(329)] = 6777,
  [SMALL_STATE(330)] = 6784,
  [SMALL_STATE(331)] = 6791,
  [SMALL_STATE(332)] = 6798,
  [SMALL_STATE(333)] = 6805,
  [SMALL_STATE(334)] = 6812,
  [SMALL_STATE(335)] = 6819,
  [SMALL_STATE(336)] = 6826,
  [SMALL_STATE(337)] = 6833,
  [SMALL_STATE(338)] = 6840,
  [SMALL_STATE(339)] = 6847,
  [SMALL_STATE(340)] = 6854,
  [SMALL_STATE(341)] = 6861,
  [SMALL_STATE(342)] = 6866,
  [SMALL_STATE(343)] = 6873,
  [SMALL_STATE(344)] = 6880,
  [SMALL_STATE(345)] = 6887,
  [SMALL_STATE(346)] = 6891,
  [SMALL_STATE(347)] = 6895,
  [SMALL_STATE(348)] = 6899,
  [SMALL_STATE(349)] = 6903,
  [SMALL_STATE(350)] = 6907,
  [SMALL_STATE(351)] = 6911,
  [SMALL_STATE(352)] = 6915,
  [SMALL_STATE(353)] = 6919,
  [SMALL_STATE(354)] = 6923,
  [SMALL_STATE(355)] = 6927,
  [SMALL_STATE(356)] = 6931,
  [SMALL_STATE(357)] = 6935,
  [SMALL_STATE(358)] = 6939,
  [SMALL_STATE(359)] = 6943,
  [SMALL_STATE(360)] = 6947,
  [SMALL_STATE(361)] = 6951,
  [SMALL_STATE(362)] = 6955,
  [SMALL_STATE(363)] = 6959,
  [SMALL_STATE(364)] = 6963,
  [SMALL_STATE(365)] = 6967,
  [SMALL_STATE(366)] = 6971,
  [SMALL_STATE(367)] = 6975,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_iri, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_iri, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_literal, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(76),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__digits, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(81),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(151),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(63),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(141),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(26),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 2), SHIFT_REPEAT(115),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_target, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression_annotated_list, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_object_property, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_expression_annotated_list_repeat1, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(134),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(86),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_property_frame_repeat1, 2), SHIFT_REPEAT(19),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(153),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_expression, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property_frame, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_target, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(170),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(70),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(149),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2), SHIFT_REPEAT(25),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 2),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(200),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(101),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(221),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(213),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(66),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(207),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(24),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(16),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), SHIFT_REPEAT(135),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), REDUCE(sym_datatype_frame, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(152),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(136),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(21),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(138),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(335),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facet, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(156),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(155),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(72),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(356),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(59),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(162),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [677] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
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

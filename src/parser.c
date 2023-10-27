#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 264
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_Ontology_COLON = 12,
  anon_sym_Prefix_COLON = 13,
  anon_sym_Annotations_COLON = 14,
  anon_sym_not = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_or = 20,
  anon_sym_and = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  anon_sym_length = 25,
  anon_sym_minLength = 26,
  anon_sym_maxLength = 27,
  anon_sym_pattern = 28,
  anon_sym_langRange = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_GT_EQ = 31,
  anon_sym_that = 32,
  anon_sym_only = 33,
  anon_sym_exactly = 34,
  anon_sym_Datatype_COLON = 35,
  anon_sym_EquivalentTo_COLON = 36,
  anon_sym_Class_COLON = 37,
  anon_sym_SubClassOf_COLON = 38,
  anon_sym_COLON = 39,
  sym__scheme = 40,
  anon_sym_SLASH_SLASH = 41,
  anon_sym_AT = 42,
  sym__iunreserved = 43,
  sym__port = 44,
  anon_sym_SLASH = 45,
  sym__iquery = 46,
  sym__ifragment = 47,
  sym__pn_local = 48,
  sym__pname_ln = 49,
  sym_source_file = 50,
  sym_iri = 51,
  sym_full_iri = 52,
  sym_abbreviated_iri = 53,
  sym_simple_iri = 54,
  sym_datatype = 55,
  sym__datatype_iri = 56,
  sym__class_iri = 57,
  sym__annotation_property_iri = 58,
  sym__ontology_iri = 59,
  sym__data_property_iri = 60,
  sym__version_iri = 61,
  sym_non_negative_integer = 62,
  sym__positive_integer = 63,
  aux_sym__digits = 64,
  sym__digit = 65,
  sym_literal = 66,
  sym__integer_literal = 67,
  sym_ontology_document = 68,
  sym_ontology = 69,
  sym_frame = 70,
  sym_prefix_declaration = 71,
  sym_annotations = 72,
  sym_annotation = 73,
  sym_annotation_target = 74,
  sym_data_property_expression = 75,
  sym_data_primary = 76,
  sym_data_atomic = 77,
  sym_data_range = 78,
  sym_data_conjunction = 79,
  sym_datatype_restriction = 80,
  sym_facet = 81,
  sym__restriction_value = 82,
  sym_description = 83,
  sym_conjunction = 84,
  sym_primary = 85,
  sym_restriction = 86,
  sym_atomic = 87,
  sym_datatype_frame = 88,
  sym_class_frame = 89,
  sym_description_annotated_list = 90,
  sym_annotation_annotated_list = 91,
  sym__iri_rfc3987 = 92,
  sym__ihier_part = 93,
  sym__iauthority = 94,
  sym__iuserinfo = 95,
  sym__ihost = 96,
  aux_sym__ipath_abempty = 97,
  sym__isegment = 98,
  aux_sym__positive_integer_repeat1 = 99,
  aux_sym_ontology_document_repeat1 = 100,
  aux_sym_ontology_repeat1 = 101,
  aux_sym_data_range_repeat1 = 102,
  aux_sym_data_conjunction_repeat1 = 103,
  aux_sym_datatype_restriction_repeat1 = 104,
  aux_sym_description_repeat1 = 105,
  aux_sym_conjunction_repeat1 = 106,
  aux_sym_conjunction_repeat2 = 107,
  aux_sym_datatype_frame_repeat1 = 108,
  aux_sym_class_frame_repeat1 = 109,
  aux_sym_description_annotated_list_repeat1 = 110,
  aux_sym_annotation_annotated_list_repeat1 = 111,
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
  [anon_sym_Ontology_COLON] = "Ontology:",
  [anon_sym_Prefix_COLON] = "Prefix:",
  [anon_sym_Annotations_COLON] = "Annotations:",
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
  [sym_non_negative_integer] = "non_negative_integer",
  [sym__positive_integer] = "_positive_integer",
  [aux_sym__digits] = "_digits",
  [sym__digit] = "_digit",
  [sym_literal] = "literal",
  [sym__integer_literal] = "_integer_literal",
  [sym_ontology_document] = "ontology_document",
  [sym_ontology] = "ontology",
  [sym_frame] = "frame",
  [sym_prefix_declaration] = "prefix_declaration",
  [sym_annotations] = "annotations",
  [sym_annotation] = "annotation",
  [sym_annotation_target] = "annotation_target",
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
  [sym_description_annotated_list] = "description_annotated_list",
  [sym_annotation_annotated_list] = "annotation_annotated_list",
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
  [aux_sym_description_annotated_list_repeat1] = "description_annotated_list_repeat1",
  [aux_sym_annotation_annotated_list_repeat1] = "annotation_annotated_list_repeat1",
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
  [anon_sym_Ontology_COLON] = anon_sym_Ontology_COLON,
  [anon_sym_Prefix_COLON] = anon_sym_Prefix_COLON,
  [anon_sym_Annotations_COLON] = anon_sym_Annotations_COLON,
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
  [sym_non_negative_integer] = sym_non_negative_integer,
  [sym__positive_integer] = sym__positive_integer,
  [aux_sym__digits] = aux_sym__digits,
  [sym__digit] = sym__digit,
  [sym_literal] = sym_literal,
  [sym__integer_literal] = sym__integer_literal,
  [sym_ontology_document] = sym_ontology_document,
  [sym_ontology] = sym_ontology,
  [sym_frame] = sym_frame,
  [sym_prefix_declaration] = sym_prefix_declaration,
  [sym_annotations] = sym_annotations,
  [sym_annotation] = sym_annotation,
  [sym_annotation_target] = sym_annotation_target,
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
  [sym_description_annotated_list] = sym_description_annotated_list,
  [sym_annotation_annotated_list] = sym_annotation_annotated_list,
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
  [aux_sym_description_annotated_list_repeat1] = aux_sym_description_annotated_list_repeat1,
  [aux_sym_annotation_annotated_list_repeat1] = aux_sym_annotation_annotated_list_repeat1,
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
  [sym_description_annotated_list] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_annotated_list] = {
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
  [aux_sym_description_annotated_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_annotated_list_repeat1] = {
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 4,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 8,
  [20] = 20,
  [21] = 7,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 17,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 39,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 24,
  [51] = 31,
  [52] = 32,
  [53] = 53,
  [54] = 54,
  [55] = 33,
  [56] = 56,
  [57] = 54,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 53,
  [62] = 53,
  [63] = 47,
  [64] = 53,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 77,
  [78] = 75,
  [79] = 74,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 74,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 75,
  [88] = 88,
  [89] = 75,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 92,
  [94] = 94,
  [95] = 95,
  [96] = 92,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 92,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 42,
  [119] = 40,
  [120] = 44,
  [121] = 46,
  [122] = 122,
  [123] = 43,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 42,
  [129] = 46,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 44,
  [134] = 40,
  [135] = 43,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 33,
  [141] = 31,
  [142] = 32,
  [143] = 33,
  [144] = 58,
  [145] = 58,
  [146] = 59,
  [147] = 60,
  [148] = 148,
  [149] = 60,
  [150] = 48,
  [151] = 59,
  [152] = 152,
  [153] = 48,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 32,
  [160] = 160,
  [161] = 161,
  [162] = 31,
  [163] = 163,
  [164] = 24,
  [165] = 165,
  [166] = 24,
  [167] = 167,
  [168] = 168,
  [169] = 65,
  [170] = 170,
  [171] = 46,
  [172] = 44,
  [173] = 40,
  [174] = 174,
  [175] = 42,
  [176] = 176,
  [177] = 177,
  [178] = 43,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 59,
  [188] = 31,
  [189] = 189,
  [190] = 90,
  [191] = 91,
  [192] = 48,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 24,
  [197] = 113,
  [198] = 94,
  [199] = 104,
  [200] = 98,
  [201] = 109,
  [202] = 194,
  [203] = 32,
  [204] = 33,
  [205] = 205,
  [206] = 97,
  [207] = 100,
  [208] = 208,
  [209] = 58,
  [210] = 60,
  [211] = 211,
  [212] = 65,
  [213] = 117,
  [214] = 214,
  [215] = 125,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 131,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 224,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 224,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 224,
  [239] = 239,
  [240] = 240,
  [241] = 239,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 244,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 244,
  [252] = 252,
  [253] = 253,
  [254] = 244,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 244,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '+') ADVANCE(166);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '?') ADVANCE(210);
      if (lookahead == '@') ADVANCE(205);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(133);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '0') ADVANCE(165);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '@') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(206);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(169);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(195);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(168);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(170);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(100);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 'q') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 137:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 138:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 142:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 143:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 145:
      if (eof) ADVANCE(148);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '?') ADVANCE(210);
      if (lookahead == 'C') ADVANCE(235);
      if (lookahead == 'D') ADVANCE(215);
      if (lookahead == 'S') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 146:
      if (eof) ADVANCE(148);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '0') ADVANCE(165);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'C') ADVANCE(235);
      if (lookahead == 'D') ADVANCE(215);
      if (lookahead == 'S') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == 'C') ADVANCE(235);
      if (lookahead == 'D') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__non_zero);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__non_zero);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__zero);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_minLength);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_maxLength);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_langRange);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EquivalentTo_COLON);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__iunreserved);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 146},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 146},
  [8] = {.lex_state = 146},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 145},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 147},
  [30] = {.lex_state = 147},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 147},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 147},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 147},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 147},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 145},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 145},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 145},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 143},
  [225] = {.lex_state = 143},
  [226] = {.lex_state = 143},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 143},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 145},
  [238] = {.lex_state = 143},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 207},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 207},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 18},
  [258] = {.lex_state = 145},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 145},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
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
    [anon_sym_Ontology_COLON] = ACTIONS(1),
    [anon_sym_Prefix_COLON] = ACTIONS(1),
    [anon_sym_Annotations_COLON] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__iquery] = ACTIONS(1),
    [sym__ifragment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(263),
    [sym_ontology_document] = STATE(262),
    [sym_ontology] = STATE(261),
    [sym_prefix_declaration] = STATE(184),
    [aux_sym_ontology_document_repeat1] = STATE(184),
    [anon_sym_Ontology_COLON] = ACTIONS(3),
    [anon_sym_Prefix_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(68), 1,
      sym_datatype,
    STATE(85), 1,
      sym_data_atomic,
    STATE(88), 1,
      sym_datatype_restriction,
    STATE(95), 1,
      sym_data_primary,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(19), 5,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [57] = 15,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(68), 1,
      sym_datatype,
    STATE(85), 1,
      sym_data_atomic,
    STATE(88), 1,
      sym_datatype_restriction,
    STATE(95), 1,
      sym_data_primary,
    ACTIONS(19), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [110] = 4,
    ACTIONS(29), 2,
      sym__non_zero,
      sym__zero,
    STATE(7), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(27), 11,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      sym__pn_local,
  [140] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(68), 1,
      sym_datatype,
    STATE(85), 1,
      sym_data_atomic,
    STATE(88), 1,
      sym_datatype_restriction,
    STATE(105), 1,
      sym_data_primary,
    STATE(137), 1,
      sym_data_conjunction,
    STATE(182), 1,
      sym_data_range,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [192] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(68), 1,
      sym_datatype,
    STATE(85), 1,
      sym_data_atomic,
    STATE(88), 1,
      sym_datatype_restriction,
    STATE(105), 1,
      sym_data_primary,
    STATE(137), 1,
      sym_data_conjunction,
    STATE(185), 1,
      sym_data_range,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [244] = 4,
    ACTIONS(35), 2,
      sym__non_zero,
      sym__zero,
    STATE(8), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(33), 11,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      sym__pn_local,
  [274] = 4,
    ACTIONS(41), 2,
      sym__non_zero,
      sym__zero,
    STATE(8), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(39), 11,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      sym__pn_local,
  [304] = 15,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(68), 1,
      sym_datatype,
    STATE(85), 1,
      sym_data_atomic,
    STATE(88), 1,
      sym_datatype_restriction,
    STATE(105), 1,
      sym_data_primary,
    STATE(137), 1,
      sym_data_conjunction,
    STATE(256), 1,
      sym_data_range,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [356] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(44), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_annotations,
    STATE(49), 1,
      sym_iri,
    STATE(94), 1,
      sym_primary,
    STATE(113), 1,
      sym__class_iri,
    STATE(125), 1,
      sym_conjunction,
    STATE(163), 1,
      sym_description,
    STATE(205), 1,
      sym_description_annotated_list,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [411] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(68), 1,
      sym_datatype,
    STATE(85), 1,
      sym_data_atomic,
    STATE(88), 1,
      sym_datatype_restriction,
    STATE(105), 1,
      sym_data_primary,
    STATE(148), 1,
      sym_data_conjunction,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [460] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(68), 1,
      sym_datatype,
    STATE(85), 1,
      sym_data_atomic,
    STATE(88), 1,
      sym_datatype_restriction,
    STATE(138), 1,
      sym_data_primary,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [506] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(44), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_annotations,
    STATE(49), 1,
      sym_iri,
    STATE(94), 1,
      sym_primary,
    STATE(113), 1,
      sym__class_iri,
    STATE(125), 1,
      sym_conjunction,
    STATE(176), 1,
      sym_description,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [558] = 4,
    ACTIONS(50), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
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
  [584] = 11,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(68), 1,
      sym_datatype,
    STATE(82), 1,
      sym_data_atomic,
    STATE(88), 1,
      sym_datatype_restriction,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [624] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_iri,
    STATE(94), 1,
      sym_primary,
    STATE(113), 1,
      sym__class_iri,
    STATE(125), 1,
      sym_conjunction,
    STATE(183), 1,
      sym_description,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [670] = 2,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(54), 11,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      sym__pn_local,
  [692] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_iri,
    STATE(94), 1,
      sym_primary,
    STATE(113), 1,
      sym__class_iri,
    STATE(125), 1,
      sym_conjunction,
    STATE(157), 1,
      sym_description,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [738] = 4,
    ACTIONS(56), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(37), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(39), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [764] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_not,
    STATE(49), 1,
      sym_iri,
    STATE(197), 1,
      sym__class_iri,
    STATE(198), 1,
      sym_primary,
    STATE(215), 1,
      sym_conjunction,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(250), 1,
      sym_description,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [810] = 4,
    ACTIONS(61), 2,
      sym__non_zero,
      sym__zero,
    STATE(19), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(31), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(33), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [836] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_not,
    STATE(49), 1,
      sym_iri,
    STATE(130), 1,
      sym_conjunction,
    STATE(197), 1,
      sym__class_iri,
    STATE(198), 1,
      sym_primary,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [879] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_iri,
    STATE(94), 1,
      sym_primary,
    STATE(113), 1,
      sym__class_iri,
    STATE(130), 1,
      sym_conjunction,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [922] = 1,
    ACTIONS(63), 16,
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
  [941] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_not,
    STATE(49), 1,
      sym_iri,
    STATE(99), 1,
      sym__class_iri,
    STATE(108), 1,
      sym_primary,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [981] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_not,
    STATE(49), 1,
      sym_iri,
    STATE(99), 1,
      sym__class_iri,
    STATE(106), 1,
      sym_primary,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1021] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_iri,
    STATE(99), 1,
      sym__class_iri,
    STATE(106), 1,
      sym_primary,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1061] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_iri,
    STATE(99), 1,
      sym__class_iri,
    STATE(108), 1,
      sym_primary,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(112), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1101] = 10,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(71), 1,
      anon_sym_Class_COLON,
    ACTIONS(73), 1,
      sym__pn_local,
    ACTIONS(75), 1,
      sym__pname_ln,
    STATE(30), 2,
      sym_iri,
      sym__ontology_iri,
    STATE(124), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(220), 2,
      sym_datatype_frame,
      sym_class_frame,
    STATE(162), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1137] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(69), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(71), 1,
      anon_sym_Class_COLON,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(116), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(126), 2,
      sym_iri,
      sym__version_iri,
    STATE(220), 2,
      sym_datatype_frame,
      sym_class_frame,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1173] = 1,
    ACTIONS(79), 14,
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
  [1190] = 1,
    ACTIONS(81), 14,
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
  [1207] = 1,
    ACTIONS(83), 14,
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
  [1224] = 2,
    ACTIONS(52), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(54), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [1242] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_iri,
    STATE(99), 1,
      sym__class_iri,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(103), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1276] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_iri,
    STATE(99), 1,
      sym__class_iri,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 1,
      sym__data_property_iri,
    STATE(103), 2,
      sym_restriction,
      sym_atomic,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1310] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(165), 1,
      sym_datatype,
    STATE(56), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [1338] = 9,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(74), 1,
      sym_annotations,
    STATE(135), 1,
      sym_annotation,
    STATE(174), 1,
      sym_annotation_annotated_list,
    STATE(93), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1369] = 9,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(79), 1,
      sym_annotations,
    STATE(178), 1,
      sym_annotation,
    STATE(212), 1,
      sym_annotation_annotated_list,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1400] = 4,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(93), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(95), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1421] = 9,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(43), 1,
      sym_annotation,
    STATE(65), 1,
      sym_annotation_annotated_list,
    STATE(83), 1,
      sym_annotations,
    STATE(92), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1452] = 4,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(99), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(101), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1473] = 4,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(106), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(108), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1494] = 4,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(110), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(112), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1515] = 9,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(76), 1,
      sym_annotations,
    STATE(123), 1,
      sym_annotation,
    STATE(169), 1,
      sym_annotation_annotated_list,
    STATE(96), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1546] = 4,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(110), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(112), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1567] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(114), 1,
      anon_sym_not,
    STATE(199), 1,
      sym_restriction,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1595] = 2,
    ACTIONS(116), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(118), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1611] = 2,
    ACTIONS(122), 2,
      anon_sym_only,
      anon_sym_exactly,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_that,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [1627] = 2,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(124), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1643] = 2,
    ACTIONS(79), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(126), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1659] = 2,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(128), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1675] = 8,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(87), 1,
      sym_annotations,
    STATE(147), 1,
      sym_annotation,
    STATE(93), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1703] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(130), 1,
      anon_sym_not,
    STATE(102), 1,
      sym_restriction,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1731] = 2,
    ACTIONS(83), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(132), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1747] = 1,
    ACTIONS(134), 11,
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
  [1761] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(136), 1,
      anon_sym_not,
    STATE(102), 1,
      sym_restriction,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1789] = 2,
    ACTIONS(138), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(140), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1805] = 2,
    ACTIONS(142), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(144), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1821] = 2,
    ACTIONS(99), 5,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(101), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1837] = 8,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(75), 1,
      sym_annotations,
    STATE(149), 1,
      sym_annotation,
    STATE(96), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1865] = 8,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(89), 1,
      sym_annotations,
    STATE(210), 1,
      sym_annotation,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1893] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    ACTIONS(146), 1,
      anon_sym_not,
    STATE(104), 1,
      sym_restriction,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1921] = 8,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(60), 1,
      sym_annotation,
    STATE(78), 1,
      sym_annotations,
    STATE(92), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1949] = 2,
    ACTIONS(148), 4,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(150), 6,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      sym__pn_local,
  [1964] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(107), 1,
      sym_restriction,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1989] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(107), 1,
      sym_restriction,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2014] = 2,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2029] = 3,
    STATE(84), 1,
      sym_facet,
    ACTIONS(156), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2046] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(100), 1,
      sym_restriction,
    STATE(241), 1,
      sym_data_property_expression,
    STATE(242), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2071] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(207), 1,
      sym_restriction,
    STATE(239), 1,
      sym_data_property_expression,
    STATE(242), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2096] = 3,
    STATE(81), 1,
      sym_facet,
    ACTIONS(156), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(158), 7,
      anon_sym_length,
      anon_sym_minLength,
      anon_sym_maxLength,
      anon_sym_pattern,
      anon_sym_langRange,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2113] = 1,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2125] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(129), 1,
      sym_annotation,
    STATE(93), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2147] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(145), 1,
      sym_annotation,
    STATE(96), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2169] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(121), 1,
      sym_annotation,
    STATE(96), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2191] = 1,
    ACTIONS(162), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2203] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(58), 1,
      sym_annotation,
    STATE(92), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2225] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(171), 1,
      sym_annotation,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2247] = 1,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2259] = 5,
    STATE(231), 1,
      sym__integer_literal,
    ACTIONS(166), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(168), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(154), 2,
      aux_sym__digits,
      sym__digit,
    STATE(240), 2,
      sym_literal,
      sym__restriction_value,
  [2279] = 1,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2291] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_annotation,
    STATE(92), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2313] = 5,
    STATE(231), 1,
      sym__integer_literal,
    ACTIONS(166), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(168), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(154), 2,
      aux_sym__digits,
      sym__digit,
    STATE(214), 2,
      sym_literal,
      sym__restriction_value,
  [2333] = 1,
    ACTIONS(172), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2345] = 1,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2357] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(144), 1,
      sym_annotation,
    STATE(93), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2379] = 1,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2391] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(209), 1,
      sym_annotation,
    STATE(111), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2413] = 3,
    ACTIONS(178), 1,
      anon_sym_and,
    STATE(91), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2428] = 3,
    ACTIONS(182), 1,
      anon_sym_and,
    STATE(91), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2443] = 6,
    ACTIONS(185), 1,
      anon_sym_LT,
    ACTIONS(187), 1,
      sym__pn_local,
    ACTIONS(189), 1,
      sym__pname_ln,
    STATE(48), 1,
      sym_annotation_target,
    STATE(59), 1,
      sym_iri,
    STATE(51), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2464] = 6,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(146), 1,
      sym_iri,
    STATE(153), 1,
      sym_annotation_target,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2485] = 3,
    ACTIONS(193), 1,
      anon_sym_and,
    STATE(97), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2500] = 1,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2511] = 6,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      sym__pn_local,
    ACTIONS(201), 1,
      sym__pname_ln,
    STATE(150), 1,
      sym_annotation_target,
    STATE(151), 1,
      sym_iri,
    STATE(141), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2532] = 3,
    ACTIONS(193), 1,
      anon_sym_and,
    STATE(109), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2547] = 3,
    ACTIONS(178), 1,
      anon_sym_and,
    STATE(91), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2562] = 1,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2573] = 3,
    ACTIONS(178), 1,
      anon_sym_and,
    STATE(90), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2588] = 3,
    ACTIONS(211), 1,
      anon_sym_and,
    STATE(101), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2603] = 1,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2614] = 1,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2625] = 3,
    ACTIONS(178), 1,
      anon_sym_and,
    STATE(98), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2640] = 3,
    ACTIONS(220), 1,
      anon_sym_and,
    STATE(110), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2655] = 1,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2666] = 1,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2677] = 1,
    ACTIONS(7), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2688] = 3,
    ACTIONS(226), 1,
      anon_sym_and,
    STATE(109), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2703] = 3,
    ACTIONS(220), 1,
      anon_sym_and,
    STATE(101), 1,
      aux_sym_data_conjunction_repeat1,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2718] = 6,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym__pn_local,
    ACTIONS(91), 1,
      sym__pname_ln,
    STATE(187), 1,
      sym_iri,
    STATE(192), 1,
      sym_annotation_target,
    STATE(188), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2739] = 1,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2750] = 2,
    ACTIONS(233), 1,
      anon_sym_that,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2763] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      sym__pn_local,
    ACTIONS(23), 1,
      sym__pname_ln,
    STATE(180), 2,
      sym_iri,
      sym__class_iri,
    STATE(31), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [2782] = 1,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2793] = 5,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(241), 1,
      anon_sym_Class_COLON,
    STATE(127), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(220), 2,
      sym_datatype_frame,
      sym_class_frame,
  [2811] = 3,
    ACTIONS(245), 1,
      anon_sym_or,
    STATE(131), 1,
      aux_sym_description_repeat1,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2825] = 4,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(101), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [2841] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(95), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [2857] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(112), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(110), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [2873] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(112), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(110), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [2889] = 3,
    ACTIONS(254), 1,
      anon_sym_or,
    STATE(132), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2903] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(108), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(106), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [2919] = 5,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(241), 1,
      anon_sym_Class_COLON,
    STATE(127), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(220), 2,
      sym_datatype_frame,
      sym_class_frame,
  [2937] = 3,
    ACTIONS(245), 1,
      anon_sym_or,
    STATE(117), 1,
      aux_sym_description_repeat1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2951] = 5,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(241), 1,
      anon_sym_Class_COLON,
    STATE(136), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(220), 2,
      sym_datatype_frame,
      sym_class_frame,
  [2969] = 5,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(263), 1,
      anon_sym_Class_COLON,
    STATE(127), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(220), 2,
      sym_datatype_frame,
      sym_class_frame,
  [2987] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3001] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3015] = 1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3025] = 3,
    ACTIONS(273), 1,
      anon_sym_or,
    STATE(131), 1,
      aux_sym_description_repeat1,
    ACTIONS(271), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3039] = 3,
    ACTIONS(278), 1,
      anon_sym_or,
    STATE(132), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3053] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3067] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3081] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3095] = 5,
    ACTIONS(239), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(241), 1,
      anon_sym_Class_COLON,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(127), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(220), 2,
      sym_datatype_frame,
      sym_class_frame,
  [3113] = 3,
    ACTIONS(254), 1,
      anon_sym_or,
    STATE(122), 1,
      aux_sym_data_range_repeat1,
    ACTIONS(283), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3127] = 1,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3137] = 4,
    ACTIONS(287), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(289), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(167), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3152] = 2,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(132), 3,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      sym__pn_local,
  [3163] = 2,
    ACTIONS(126), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(79), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [3174] = 2,
    ACTIONS(128), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [3185] = 2,
    ACTIONS(132), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(83), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [3196] = 1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3205] = 2,
    ACTIONS(140), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(138), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [3216] = 1,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3225] = 1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3234] = 1,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3243] = 2,
    ACTIONS(101), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(99), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [3254] = 2,
    ACTIONS(118), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(116), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [3265] = 2,
    ACTIONS(144), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(142), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [3276] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3289] = 1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3298] = 3,
    ACTIONS(295), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(161), 2,
      aux_sym__digits,
      sym__digit,
  [3311] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(299), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3324] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(301), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3337] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(299), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3350] = 3,
    ACTIONS(308), 1,
      anon_sym_Annotations_COLON,
    STATE(158), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(306), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3363] = 2,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(128), 3,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      sym__pn_local,
  [3374] = 3,
    ACTIONS(295), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(161), 2,
      aux_sym__digits,
      sym__digit,
  [3387] = 3,
    ACTIONS(313), 2,
      sym__non_zero,
      sym__zero,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(161), 2,
      aux_sym__digits,
      sym__digit,
  [3400] = 2,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(126), 3,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      sym__pn_local,
  [3411] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(318), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3424] = 2,
    ACTIONS(124), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(63), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [3435] = 4,
    ACTIONS(287), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(322), 1,
      anon_sym_EquivalentTo_COLON,
    STATE(139), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(320), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3450] = 2,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym__pname_ln,
    ACTIONS(124), 3,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      sym__pn_local,
  [3461] = 4,
    ACTIONS(306), 1,
      anon_sym_EquivalentTo_COLON,
    ACTIONS(308), 1,
      anon_sym_Annotations_COLON,
    STATE(158), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(324), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3476] = 3,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    STATE(170), 1,
      aux_sym__ipath_abempty,
    ACTIONS(327), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [3488] = 2,
    ACTIONS(150), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(148), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [3498] = 3,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    STATE(170), 1,
      aux_sym__ipath_abempty,
    ACTIONS(331), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [3510] = 4,
    ACTIONS(112), 1,
      sym__pn_local,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(110), 2,
      anon_sym_LT,
      sym__pname_ln,
  [3524] = 4,
    ACTIONS(112), 1,
      sym__pn_local,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(110), 2,
      anon_sym_LT,
      sym__pname_ln,
  [3538] = 4,
    ACTIONS(95), 1,
      sym__pn_local,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(93), 2,
      anon_sym_LT,
      sym__pname_ln,
  [3552] = 1,
    ACTIONS(306), 5,
      ts_builtin_sym_end,
      anon_sym_Annotations_COLON,
      anon_sym_Datatype_COLON,
      anon_sym_EquivalentTo_COLON,
      anon_sym_Class_COLON,
  [3560] = 4,
    ACTIONS(101), 1,
      sym__pn_local,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(99), 2,
      anon_sym_LT,
      sym__pname_ln,
  [3574] = 1,
    ACTIONS(301), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3582] = 3,
    ACTIONS(343), 1,
      anon_sym_SubClassOf_COLON,
    STATE(177), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(341), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3594] = 4,
    ACTIONS(108), 1,
      sym__pn_local,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(106), 2,
      anon_sym_LT,
      sym__pname_ln,
  [3608] = 3,
    ACTIONS(287), 1,
      anon_sym_Annotations_COLON,
    STATE(158), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3620] = 3,
    ACTIONS(350), 1,
      anon_sym_SubClassOf_COLON,
    STATE(186), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3632] = 3,
    ACTIONS(287), 1,
      anon_sym_Annotations_COLON,
    STATE(158), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3644] = 3,
    ACTIONS(287), 1,
      anon_sym_Annotations_COLON,
    STATE(179), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3656] = 1,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3664] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(253), 1,
      sym_ontology,
    STATE(189), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [3678] = 3,
    ACTIONS(287), 1,
      anon_sym_Annotations_COLON,
    STATE(181), 1,
      aux_sym_datatype_frame_repeat1,
    ACTIONS(356), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3690] = 3,
    ACTIONS(350), 1,
      anon_sym_SubClassOf_COLON,
    STATE(177), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [3702] = 2,
    ACTIONS(144), 1,
      sym__pn_local,
    ACTIONS(142), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [3711] = 2,
    ACTIONS(126), 1,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [3720] = 3,
    ACTIONS(360), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(362), 1,
      anon_sym_Prefix_COLON,
    STATE(189), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [3731] = 3,
    ACTIONS(365), 1,
      anon_sym_and,
    STATE(191), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(176), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3742] = 3,
    ACTIONS(367), 1,
      anon_sym_and,
    STATE(191), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(180), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3753] = 2,
    ACTIONS(118), 1,
      sym__pn_local,
    ACTIONS(116), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [3762] = 4,
    ACTIONS(370), 1,
      sym__iunreserved,
    STATE(235), 1,
      sym__ihost,
    STATE(237), 1,
      sym__iauthority,
    STATE(246), 1,
      sym__iuserinfo,
  [3775] = 4,
    ACTIONS(372), 1,
      sym__non_zero,
    ACTIONS(374), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(17), 1,
      sym__positive_integer,
  [3788] = 2,
    ACTIONS(376), 2,
      sym__non_zero,
      sym__zero,
    STATE(160), 2,
      aux_sym__digits,
      sym__digit,
  [3797] = 2,
    ACTIONS(124), 1,
      sym__pn_local,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [3806] = 2,
    ACTIONS(378), 1,
      anon_sym_that,
    ACTIONS(207), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_and,
  [3815] = 3,
    ACTIONS(380), 1,
      anon_sym_and,
    STATE(206), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(191), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3826] = 3,
    ACTIONS(365), 1,
      anon_sym_and,
    STATE(200), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(216), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3837] = 3,
    ACTIONS(365), 1,
      anon_sym_and,
    STATE(191), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(205), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3848] = 3,
    ACTIONS(382), 1,
      anon_sym_and,
    STATE(201), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3859] = 4,
    ACTIONS(385), 1,
      sym__non_zero,
    ACTIONS(387), 1,
      sym__zero,
    STATE(3), 1,
      sym_non_negative_integer,
    STATE(34), 1,
      sym__positive_integer,
  [3872] = 2,
    ACTIONS(128), 1,
      sym__pn_local,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [3881] = 2,
    ACTIONS(132), 1,
      sym__pn_local,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [3890] = 1,
    ACTIONS(341), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [3897] = 3,
    ACTIONS(380), 1,
      anon_sym_and,
    STATE(201), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3908] = 3,
    ACTIONS(365), 1,
      anon_sym_and,
    STATE(190), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(205), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [3919] = 1,
    ACTIONS(389), 4,
      sym__non_zero,
      sym__zero,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3926] = 2,
    ACTIONS(140), 1,
      sym__pn_local,
    ACTIONS(138), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [3935] = 2,
    ACTIONS(101), 1,
      sym__pn_local,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [3944] = 1,
    ACTIONS(331), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [3951] = 2,
    ACTIONS(150), 1,
      sym__pn_local,
    ACTIONS(148), 2,
      anon_sym_LT,
      sym__pname_ln,
  [3959] = 3,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      anon_sym_or,
    STATE(219), 1,
      aux_sym_description_repeat1,
  [3969] = 3,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      aux_sym_datatype_restriction_repeat1,
  [3979] = 3,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      anon_sym_or,
    STATE(213), 1,
      aux_sym_description_repeat1,
  [3989] = 2,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(397), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [3997] = 3,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      aux_sym_datatype_restriction_repeat1,
  [4007] = 3,
    ACTIONS(406), 1,
      anon_sym_GT,
    ACTIONS(408), 1,
      sym__iquery,
    ACTIONS(410), 1,
      sym__ifragment,
  [4017] = 3,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      anon_sym_or,
    STATE(219), 1,
      aux_sym_description_repeat1,
  [4027] = 1,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [4033] = 3,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      aux_sym_datatype_restriction_repeat1,
  [4043] = 1,
    ACTIONS(419), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [4048] = 2,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(423), 1,
      anon_sym_SLASH,
  [4055] = 2,
    ACTIONS(425), 1,
      sym__scheme,
    STATE(244), 1,
      sym__iri_rfc3987,
  [4062] = 2,
    ACTIONS(425), 1,
      sym__scheme,
    STATE(247), 1,
      sym__iri_rfc3987,
  [4069] = 2,
    ACTIONS(425), 1,
      sym__scheme,
    STATE(254), 1,
      sym__iri_rfc3987,
  [4076] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(222), 1,
      sym_full_iri,
  [4083] = 2,
    ACTIONS(427), 1,
      sym__iunreserved,
    STATE(223), 1,
      sym__ihost,
  [4090] = 2,
    ACTIONS(429), 1,
      sym__iunreserved,
    STATE(211), 1,
      sym__isegment,
  [4097] = 2,
    ACTIONS(431), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 1,
      sym__ihier_part,
  [4104] = 1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4109] = 2,
    ACTIONS(435), 1,
      anon_sym_Annotations_COLON,
    STATE(6), 1,
      sym_annotations,
  [4116] = 2,
    ACTIONS(425), 1,
      sym__scheme,
    STATE(251), 1,
      sym__iri_rfc3987,
  [4123] = 2,
    ACTIONS(437), 1,
      anon_sym_GT,
    ACTIONS(439), 1,
      sym__ifragment,
  [4130] = 2,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_SLASH,
  [4137] = 2,
    ACTIONS(435), 1,
      anon_sym_Annotations_COLON,
    STATE(5), 1,
      sym_annotations,
  [4144] = 2,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    STATE(168), 1,
      aux_sym__ipath_abempty,
  [4151] = 2,
    ACTIONS(425), 1,
      sym__scheme,
    STATE(259), 1,
      sym__iri_rfc3987,
  [4158] = 2,
    ACTIONS(445), 1,
      anon_sym_only,
    ACTIONS(447), 1,
      anon_sym_exactly,
  [4165] = 1,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4170] = 2,
    ACTIONS(451), 1,
      anon_sym_only,
    ACTIONS(453), 1,
      anon_sym_exactly,
  [4177] = 1,
    ACTIONS(455), 2,
      anon_sym_only,
      anon_sym_exactly,
  [4182] = 1,
    ACTIONS(457), 1,
      anon_sym_GT,
  [4186] = 1,
    ACTIONS(459), 1,
      anon_sym_GT,
  [4190] = 1,
    ACTIONS(461), 1,
      sym__port,
  [4194] = 1,
    ACTIONS(463), 1,
      anon_sym_AT,
  [4198] = 1,
    ACTIONS(465), 1,
      anon_sym_GT,
  [4202] = 1,
    ACTIONS(437), 1,
      anon_sym_GT,
  [4206] = 1,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [4210] = 1,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
  [4214] = 1,
    ACTIONS(471), 1,
      anon_sym_GT,
  [4218] = 1,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [4222] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [4226] = 1,
    ACTIONS(477), 1,
      anon_sym_GT,
  [4230] = 1,
    ACTIONS(479), 1,
      sym__port,
  [4234] = 1,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
  [4238] = 1,
    ACTIONS(483), 1,
      sym_prefix_name,
  [4242] = 1,
    ACTIONS(423), 1,
      anon_sym_SLASH,
  [4246] = 1,
    ACTIONS(485), 1,
      anon_sym_GT,
  [4250] = 1,
    ACTIONS(487), 1,
      anon_sym_SLASH,
  [4254] = 1,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
  [4258] = 1,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
  [4262] = 1,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 140,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 244,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 304,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 411,
  [SMALL_STATE(12)] = 460,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 558,
  [SMALL_STATE(15)] = 584,
  [SMALL_STATE(16)] = 624,
  [SMALL_STATE(17)] = 670,
  [SMALL_STATE(18)] = 692,
  [SMALL_STATE(19)] = 738,
  [SMALL_STATE(20)] = 764,
  [SMALL_STATE(21)] = 810,
  [SMALL_STATE(22)] = 836,
  [SMALL_STATE(23)] = 879,
  [SMALL_STATE(24)] = 922,
  [SMALL_STATE(25)] = 941,
  [SMALL_STATE(26)] = 981,
  [SMALL_STATE(27)] = 1021,
  [SMALL_STATE(28)] = 1061,
  [SMALL_STATE(29)] = 1101,
  [SMALL_STATE(30)] = 1137,
  [SMALL_STATE(31)] = 1173,
  [SMALL_STATE(32)] = 1190,
  [SMALL_STATE(33)] = 1207,
  [SMALL_STATE(34)] = 1224,
  [SMALL_STATE(35)] = 1242,
  [SMALL_STATE(36)] = 1276,
  [SMALL_STATE(37)] = 1310,
  [SMALL_STATE(38)] = 1338,
  [SMALL_STATE(39)] = 1369,
  [SMALL_STATE(40)] = 1400,
  [SMALL_STATE(41)] = 1421,
  [SMALL_STATE(42)] = 1452,
  [SMALL_STATE(43)] = 1473,
  [SMALL_STATE(44)] = 1494,
  [SMALL_STATE(45)] = 1515,
  [SMALL_STATE(46)] = 1546,
  [SMALL_STATE(47)] = 1567,
  [SMALL_STATE(48)] = 1595,
  [SMALL_STATE(49)] = 1611,
  [SMALL_STATE(50)] = 1627,
  [SMALL_STATE(51)] = 1643,
  [SMALL_STATE(52)] = 1659,
  [SMALL_STATE(53)] = 1675,
  [SMALL_STATE(54)] = 1703,
  [SMALL_STATE(55)] = 1731,
  [SMALL_STATE(56)] = 1747,
  [SMALL_STATE(57)] = 1761,
  [SMALL_STATE(58)] = 1789,
  [SMALL_STATE(59)] = 1805,
  [SMALL_STATE(60)] = 1821,
  [SMALL_STATE(61)] = 1837,
  [SMALL_STATE(62)] = 1865,
  [SMALL_STATE(63)] = 1893,
  [SMALL_STATE(64)] = 1921,
  [SMALL_STATE(65)] = 1949,
  [SMALL_STATE(66)] = 1964,
  [SMALL_STATE(67)] = 1989,
  [SMALL_STATE(68)] = 2014,
  [SMALL_STATE(69)] = 2029,
  [SMALL_STATE(70)] = 2046,
  [SMALL_STATE(71)] = 2071,
  [SMALL_STATE(72)] = 2096,
  [SMALL_STATE(73)] = 2113,
  [SMALL_STATE(74)] = 2125,
  [SMALL_STATE(75)] = 2147,
  [SMALL_STATE(76)] = 2169,
  [SMALL_STATE(77)] = 2191,
  [SMALL_STATE(78)] = 2203,
  [SMALL_STATE(79)] = 2225,
  [SMALL_STATE(80)] = 2247,
  [SMALL_STATE(81)] = 2259,
  [SMALL_STATE(82)] = 2279,
  [SMALL_STATE(83)] = 2291,
  [SMALL_STATE(84)] = 2313,
  [SMALL_STATE(85)] = 2333,
  [SMALL_STATE(86)] = 2345,
  [SMALL_STATE(87)] = 2357,
  [SMALL_STATE(88)] = 2379,
  [SMALL_STATE(89)] = 2391,
  [SMALL_STATE(90)] = 2413,
  [SMALL_STATE(91)] = 2428,
  [SMALL_STATE(92)] = 2443,
  [SMALL_STATE(93)] = 2464,
  [SMALL_STATE(94)] = 2485,
  [SMALL_STATE(95)] = 2500,
  [SMALL_STATE(96)] = 2511,
  [SMALL_STATE(97)] = 2532,
  [SMALL_STATE(98)] = 2547,
  [SMALL_STATE(99)] = 2562,
  [SMALL_STATE(100)] = 2573,
  [SMALL_STATE(101)] = 2588,
  [SMALL_STATE(102)] = 2603,
  [SMALL_STATE(103)] = 2614,
  [SMALL_STATE(104)] = 2625,
  [SMALL_STATE(105)] = 2640,
  [SMALL_STATE(106)] = 2655,
  [SMALL_STATE(107)] = 2666,
  [SMALL_STATE(108)] = 2677,
  [SMALL_STATE(109)] = 2688,
  [SMALL_STATE(110)] = 2703,
  [SMALL_STATE(111)] = 2718,
  [SMALL_STATE(112)] = 2739,
  [SMALL_STATE(113)] = 2750,
  [SMALL_STATE(114)] = 2763,
  [SMALL_STATE(115)] = 2782,
  [SMALL_STATE(116)] = 2793,
  [SMALL_STATE(117)] = 2811,
  [SMALL_STATE(118)] = 2825,
  [SMALL_STATE(119)] = 2841,
  [SMALL_STATE(120)] = 2857,
  [SMALL_STATE(121)] = 2873,
  [SMALL_STATE(122)] = 2889,
  [SMALL_STATE(123)] = 2903,
  [SMALL_STATE(124)] = 2919,
  [SMALL_STATE(125)] = 2937,
  [SMALL_STATE(126)] = 2951,
  [SMALL_STATE(127)] = 2969,
  [SMALL_STATE(128)] = 2987,
  [SMALL_STATE(129)] = 3001,
  [SMALL_STATE(130)] = 3015,
  [SMALL_STATE(131)] = 3025,
  [SMALL_STATE(132)] = 3039,
  [SMALL_STATE(133)] = 3053,
  [SMALL_STATE(134)] = 3067,
  [SMALL_STATE(135)] = 3081,
  [SMALL_STATE(136)] = 3095,
  [SMALL_STATE(137)] = 3113,
  [SMALL_STATE(138)] = 3127,
  [SMALL_STATE(139)] = 3137,
  [SMALL_STATE(140)] = 3152,
  [SMALL_STATE(141)] = 3163,
  [SMALL_STATE(142)] = 3174,
  [SMALL_STATE(143)] = 3185,
  [SMALL_STATE(144)] = 3196,
  [SMALL_STATE(145)] = 3205,
  [SMALL_STATE(146)] = 3216,
  [SMALL_STATE(147)] = 3225,
  [SMALL_STATE(148)] = 3234,
  [SMALL_STATE(149)] = 3243,
  [SMALL_STATE(150)] = 3254,
  [SMALL_STATE(151)] = 3265,
  [SMALL_STATE(152)] = 3276,
  [SMALL_STATE(153)] = 3289,
  [SMALL_STATE(154)] = 3298,
  [SMALL_STATE(155)] = 3311,
  [SMALL_STATE(156)] = 3324,
  [SMALL_STATE(157)] = 3337,
  [SMALL_STATE(158)] = 3350,
  [SMALL_STATE(159)] = 3363,
  [SMALL_STATE(160)] = 3374,
  [SMALL_STATE(161)] = 3387,
  [SMALL_STATE(162)] = 3400,
  [SMALL_STATE(163)] = 3411,
  [SMALL_STATE(164)] = 3424,
  [SMALL_STATE(165)] = 3435,
  [SMALL_STATE(166)] = 3450,
  [SMALL_STATE(167)] = 3461,
  [SMALL_STATE(168)] = 3476,
  [SMALL_STATE(169)] = 3488,
  [SMALL_STATE(170)] = 3498,
  [SMALL_STATE(171)] = 3510,
  [SMALL_STATE(172)] = 3524,
  [SMALL_STATE(173)] = 3538,
  [SMALL_STATE(174)] = 3552,
  [SMALL_STATE(175)] = 3560,
  [SMALL_STATE(176)] = 3574,
  [SMALL_STATE(177)] = 3582,
  [SMALL_STATE(178)] = 3594,
  [SMALL_STATE(179)] = 3608,
  [SMALL_STATE(180)] = 3620,
  [SMALL_STATE(181)] = 3632,
  [SMALL_STATE(182)] = 3644,
  [SMALL_STATE(183)] = 3656,
  [SMALL_STATE(184)] = 3664,
  [SMALL_STATE(185)] = 3678,
  [SMALL_STATE(186)] = 3690,
  [SMALL_STATE(187)] = 3702,
  [SMALL_STATE(188)] = 3711,
  [SMALL_STATE(189)] = 3720,
  [SMALL_STATE(190)] = 3731,
  [SMALL_STATE(191)] = 3742,
  [SMALL_STATE(192)] = 3753,
  [SMALL_STATE(193)] = 3762,
  [SMALL_STATE(194)] = 3775,
  [SMALL_STATE(195)] = 3788,
  [SMALL_STATE(196)] = 3797,
  [SMALL_STATE(197)] = 3806,
  [SMALL_STATE(198)] = 3815,
  [SMALL_STATE(199)] = 3826,
  [SMALL_STATE(200)] = 3837,
  [SMALL_STATE(201)] = 3848,
  [SMALL_STATE(202)] = 3859,
  [SMALL_STATE(203)] = 3872,
  [SMALL_STATE(204)] = 3881,
  [SMALL_STATE(205)] = 3890,
  [SMALL_STATE(206)] = 3897,
  [SMALL_STATE(207)] = 3908,
  [SMALL_STATE(208)] = 3919,
  [SMALL_STATE(209)] = 3926,
  [SMALL_STATE(210)] = 3935,
  [SMALL_STATE(211)] = 3944,
  [SMALL_STATE(212)] = 3951,
  [SMALL_STATE(213)] = 3959,
  [SMALL_STATE(214)] = 3969,
  [SMALL_STATE(215)] = 3979,
  [SMALL_STATE(216)] = 3989,
  [SMALL_STATE(217)] = 3997,
  [SMALL_STATE(218)] = 4007,
  [SMALL_STATE(219)] = 4017,
  [SMALL_STATE(220)] = 4027,
  [SMALL_STATE(221)] = 4033,
  [SMALL_STATE(222)] = 4043,
  [SMALL_STATE(223)] = 4048,
  [SMALL_STATE(224)] = 4055,
  [SMALL_STATE(225)] = 4062,
  [SMALL_STATE(226)] = 4069,
  [SMALL_STATE(227)] = 4076,
  [SMALL_STATE(228)] = 4083,
  [SMALL_STATE(229)] = 4090,
  [SMALL_STATE(230)] = 4097,
  [SMALL_STATE(231)] = 4104,
  [SMALL_STATE(232)] = 4109,
  [SMALL_STATE(233)] = 4116,
  [SMALL_STATE(234)] = 4123,
  [SMALL_STATE(235)] = 4130,
  [SMALL_STATE(236)] = 4137,
  [SMALL_STATE(237)] = 4144,
  [SMALL_STATE(238)] = 4151,
  [SMALL_STATE(239)] = 4158,
  [SMALL_STATE(240)] = 4165,
  [SMALL_STATE(241)] = 4170,
  [SMALL_STATE(242)] = 4177,
  [SMALL_STATE(243)] = 4182,
  [SMALL_STATE(244)] = 4186,
  [SMALL_STATE(245)] = 4190,
  [SMALL_STATE(246)] = 4194,
  [SMALL_STATE(247)] = 4198,
  [SMALL_STATE(248)] = 4202,
  [SMALL_STATE(249)] = 4206,
  [SMALL_STATE(250)] = 4210,
  [SMALL_STATE(251)] = 4214,
  [SMALL_STATE(252)] = 4218,
  [SMALL_STATE(253)] = 4222,
  [SMALL_STATE(254)] = 4226,
  [SMALL_STATE(255)] = 4230,
  [SMALL_STATE(256)] = 4234,
  [SMALL_STATE(257)] = 4238,
  [SMALL_STATE(258)] = 4242,
  [SMALL_STATE(259)] = 4246,
  [SMALL_STATE(260)] = 4250,
  [SMALL_STATE(261)] = 4254,
  [SMALL_STATE(262)] = 4258,
  [SMALL_STATE(263)] = 4262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(64),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_iri, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_iri, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_target, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_target, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_restriction, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(54),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_conjunction_repeat1, 2), SHIFT_REPEAT(12),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 3),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(27),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_conjunction, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(61),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(37),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(114),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(53),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(23),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_range_repeat1, 2), SHIFT_REPEAT(11),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_range, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(13),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), SHIFT_REPEAT(38),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__digits, 2), SHIFT_REPEAT(161),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__digits, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_frame_repeat1, 2), REDUCE(sym_datatype_frame, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(229),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(62),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(10),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 7),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 6),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 5),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(257),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(57),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(26),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_facet, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2), SHIFT_REPEAT(72),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(22),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_restriction_repeat1, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [493] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

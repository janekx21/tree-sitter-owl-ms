#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_Ontology_COLON = 10,
  anon_sym_Prefix_COLON = 11,
  anon_sym_Annotations_COLON = 12,
  anon_sym_not = 13,
  anon_sym_or = 14,
  anon_sym_that = 15,
  anon_sym_and = 16,
  anon_sym_only = 17,
  anon_sym_exactly = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_Datatype_COLON = 21,
  anon_sym_Class_COLON = 22,
  anon_sym_SubClassOf_COLON = 23,
  anon_sym_COMMA = 24,
  anon_sym_COLON = 25,
  sym__scheme = 26,
  anon_sym_SLASH_SLASH = 27,
  anon_sym_AT = 28,
  sym__iunreserved = 29,
  sym__port = 30,
  anon_sym_SLASH = 31,
  sym__iquery = 32,
  sym__ifragment = 33,
  sym__pn_local = 34,
  sym__pname_ln = 35,
  sym_source_file = 36,
  sym_iri = 37,
  sym_full_iri = 38,
  sym_abbreviated_iri = 39,
  sym_simple_iri = 40,
  sym_datatype = 41,
  sym__datatype_iri = 42,
  sym__class_iri = 43,
  sym__annotation_property_iri = 44,
  sym__ontology_iri = 45,
  sym__data_property_iri = 46,
  sym_non_negative_integer = 47,
  sym__positive_integer = 48,
  sym__digit = 49,
  sym_ontology_document = 50,
  sym_ontology = 51,
  sym_frame = 52,
  sym_prefix_declaration = 53,
  sym_annotations = 54,
  sym_annotation = 55,
  sym_annotation_target = 56,
  sym_data_property_expression = 57,
  sym_data_primary = 58,
  sym_data_atomic = 59,
  sym_description = 60,
  sym_conjunction = 61,
  sym_primary = 62,
  sym_restriction = 63,
  sym_atomic = 64,
  sym_datatype_frame = 65,
  sym_class_frame = 66,
  sym_description_annotated_list = 67,
  sym_annotation_annotated_list = 68,
  sym__iri_rfc3987 = 69,
  sym__ihier_part = 70,
  sym__iauthority = 71,
  sym__iuserinfo = 72,
  sym__ihost = 73,
  aux_sym__ipath_abempty = 74,
  sym__isegment = 75,
  aux_sym__positive_integer_repeat1 = 76,
  aux_sym_ontology_document_repeat1 = 77,
  aux_sym_ontology_repeat1 = 78,
  aux_sym_description_repeat1 = 79,
  aux_sym_conjunction_repeat1 = 80,
  aux_sym_conjunction_repeat2 = 81,
  aux_sym_class_frame_repeat1 = 82,
  aux_sym_description_annotated_list_repeat1 = 83,
  aux_sym_annotation_annotated_list_repeat1 = 84,
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
  [anon_sym_Ontology_COLON] = "Ontology:",
  [anon_sym_Prefix_COLON] = "Prefix:",
  [anon_sym_Annotations_COLON] = "Annotations:",
  [anon_sym_not] = "not",
  [anon_sym_or] = "or",
  [anon_sym_that] = "that",
  [anon_sym_and] = "and",
  [anon_sym_only] = "only",
  [anon_sym_exactly] = "exactly",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Datatype_COLON] = "Datatype:",
  [anon_sym_Class_COLON] = "Class:",
  [anon_sym_SubClassOf_COLON] = "SubClassOf:",
  [anon_sym_COMMA] = ",",
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
  [sym_non_negative_integer] = "non_negative_integer",
  [sym__positive_integer] = "_positive_integer",
  [sym__digit] = "_digit",
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
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
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
  [anon_sym_Ontology_COLON] = anon_sym_Ontology_COLON,
  [anon_sym_Prefix_COLON] = anon_sym_Prefix_COLON,
  [anon_sym_Annotations_COLON] = anon_sym_Annotations_COLON,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Datatype_COLON] = anon_sym_Datatype_COLON,
  [anon_sym_Class_COLON] = anon_sym_Class_COLON,
  [anon_sym_SubClassOf_COLON] = anon_sym_SubClassOf_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_non_negative_integer] = sym_non_negative_integer,
  [sym__positive_integer] = sym__positive_integer,
  [sym__digit] = sym__digit,
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
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
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
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Datatype_COLON] = {
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
  [anon_sym_COMMA] = {
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
  [sym_non_negative_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__positive_integer] = {
    .visible = false,
    .named = true,
  },
  [sym__digit] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 7,
  [19] = 14,
  [20] = 4,
  [21] = 6,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 28,
  [30] = 28,
  [31] = 28,
  [32] = 32,
  [33] = 22,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 32,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 45,
  [47] = 45,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
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
  [83] = 77,
  [84] = 84,
  [85] = 80,
  [86] = 82,
  [87] = 87,
  [88] = 81,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 37,
  [93] = 35,
  [94] = 34,
  [95] = 95,
  [96] = 96,
  [97] = 25,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 81,
  [105] = 77,
  [106] = 82,
  [107] = 107,
  [108] = 81,
  [109] = 80,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 84,
  [115] = 80,
  [116] = 116,
  [117] = 117,
  [118] = 82,
  [119] = 119,
  [120] = 77,
  [121] = 37,
  [122] = 122,
  [123] = 35,
  [124] = 25,
  [125] = 53,
  [126] = 95,
  [127] = 102,
  [128] = 100,
  [129] = 129,
  [130] = 130,
  [131] = 70,
  [132] = 34,
  [133] = 130,
  [134] = 56,
  [135] = 101,
  [136] = 136,
  [137] = 49,
  [138] = 63,
  [139] = 139,
  [140] = 65,
  [141] = 67,
  [142] = 61,
  [143] = 50,
  [144] = 144,
  [145] = 74,
  [146] = 78,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 89,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 153,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 152,
  [161] = 161,
  [162] = 152,
  [163] = 157,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 177,
  [179] = 179,
  [180] = 180,
  [181] = 177,
  [182] = 182,
  [183] = 183,
  [184] = 184,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(102);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(59);
      if (lookahead == 'P') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(144);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(133);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(118);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 91:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 92:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 95:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 96:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 97:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 99:
      if (eof) ADVANCE(102);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'S') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 100:
      if (eof) ADVANCE(102);
      if (lookahead == ',') ADVANCE(139);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'S') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__non_zero);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__non_zero);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__zero);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__iunreserved);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 100},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 100},
  [7] = {.lex_state = 100},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 99},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 99},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 99},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 99},
  [152] = {.lex_state = 97},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 97},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 97},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 99},
  [169] = {.lex_state = 99},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 145},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 145},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 0},
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
    [anon_sym_Ontology_COLON] = ACTIONS(1),
    [anon_sym_Prefix_COLON] = ACTIONS(1),
    [anon_sym_Annotations_COLON] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Datatype_COLON] = ACTIONS(1),
    [anon_sym_Class_COLON] = ACTIONS(1),
    [anon_sym_SubClassOf_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__iquery] = ACTIONS(1),
    [sym__ifragment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(179),
    [sym_ontology_document] = STATE(176),
    [sym_ontology] = STATE(173),
    [sym_prefix_declaration] = STATE(117),
    [aux_sym_ontology_document_repeat1] = STATE(117),
    [anon_sym_Ontology_COLON] = ACTIONS(3),
    [anon_sym_Prefix_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(52), 1,
      sym_data_primary,
    STATE(55), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(72), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
    ACTIONS(15), 5,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [48] = 17,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(21), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_annotations,
    STATE(36), 1,
      sym_iri,
    STATE(61), 1,
      sym_primary,
    STATE(67), 1,
      sym__class_iri,
    STATE(89), 1,
      sym_conjunction,
    STATE(99), 1,
      sym_description,
    STATE(136), 1,
      sym_description_annotated_list,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [103] = 4,
    ACTIONS(31), 2,
      sym__non_zero,
      sym__zero,
    STATE(4), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(29), 11,
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
  [131] = 12,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(52), 1,
      sym_data_primary,
    STATE(55), 1,
      sym_data_atomic,
    STATE(62), 1,
      sym_datatype,
    ACTIONS(15), 2,
      anon_sym_or,
      anon_sym_and,
    STATE(72), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [175] = 4,
    ACTIONS(38), 2,
      sym__non_zero,
      sym__zero,
    STATE(4), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(36), 11,
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
  [203] = 4,
    ACTIONS(44), 2,
      sym__non_zero,
      sym__zero,
    STATE(6), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(42), 11,
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
  [231] = 16,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(21), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_annotations,
    STATE(36), 1,
      sym_iri,
    STATE(61), 1,
      sym_primary,
    STATE(67), 1,
      sym__class_iri,
    STATE(89), 1,
      sym_conjunction,
    STATE(107), 1,
      sym_description,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [283] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_not,
    STATE(36), 1,
      sym_iri,
    STATE(141), 1,
      sym__class_iri,
    STATE(142), 1,
      sym_primary,
    STATE(150), 1,
      sym_conjunction,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(180), 1,
      sym_description,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [329] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_iri,
    STATE(61), 1,
      sym_primary,
    STATE(67), 1,
      sym__class_iri,
    STATE(89), 1,
      sym_conjunction,
    STATE(98), 1,
      sym_description,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [375] = 14,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_iri,
    STATE(61), 1,
      sym_primary,
    STATE(67), 1,
      sym__class_iri,
    STATE(89), 1,
      sym_conjunction,
    STATE(113), 1,
      sym_description,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [421] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_not,
    STATE(36), 1,
      sym_iri,
    STATE(90), 1,
      sym_conjunction,
    STATE(141), 1,
      sym__class_iri,
    STATE(142), 1,
      sym_primary,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [464] = 13,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_iri,
    STATE(61), 1,
      sym_primary,
    STATE(67), 1,
      sym__class_iri,
    STATE(90), 1,
      sym_conjunction,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [507] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_not,
    STATE(36), 1,
      sym_iri,
    STATE(57), 1,
      sym_primary,
    STATE(58), 1,
      sym__class_iri,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [547] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_iri,
    STATE(58), 1,
      sym__class_iri,
    STATE(66), 1,
      sym_primary,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [587] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(52), 1,
      anon_sym_Class_COLON,
    STATE(76), 2,
      sym_iri,
      sym__ontology_iri,
    STATE(79), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(144), 2,
      sym_datatype_frame,
      sym_class_frame,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [623] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_not,
    STATE(36), 1,
      sym_iri,
    STATE(58), 1,
      sym__class_iri,
    STATE(66), 1,
      sym_primary,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [663] = 4,
    ACTIONS(54), 2,
      sym__non_zero,
      sym__zero,
    STATE(21), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(40), 3,
      anon_sym_LT,
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
  [687] = 12,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_iri,
    STATE(57), 1,
      sym_primary,
    STATE(58), 1,
      sym__class_iri,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(60), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [727] = 4,
    ACTIONS(56), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(27), 3,
      anon_sym_LT,
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
  [751] = 4,
    ACTIONS(59), 2,
      sym__non_zero,
      sym__zero,
    STATE(20), 2,
      sym__digit,
      aux_sym__positive_integer_repeat1,
    ACTIONS(34), 3,
      anon_sym_LT,
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
  [775] = 2,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
    ACTIONS(63), 11,
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
  [795] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(62), 1,
      sym_datatype,
    STATE(68), 1,
      sym_data_atomic,
    STATE(72), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [826] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(149), 1,
      sym_datatype,
    STATE(72), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(11), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [854] = 1,
    ACTIONS(65), 13,
      ts_builtin_sym_end,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [870] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_iri,
    STATE(58), 1,
      sym__class_iri,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(59), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [904] = 10,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_iri,
    STATE(58), 1,
      sym__class_iri,
    STATE(158), 1,
      sym__data_property_iri,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(59), 2,
      sym_restriction,
      sym_atomic,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [938] = 9,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(48), 1,
      sym_annotations,
    STATE(83), 1,
      sym_annotation,
    STATE(95), 1,
      sym_annotation_annotated_list,
    STATE(54), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [969] = 9,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(47), 1,
      sym_annotations,
    STATE(120), 1,
      sym_annotation,
    STATE(126), 1,
      sym_annotation_annotated_list,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1000] = 9,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(46), 1,
      sym_annotations,
    STATE(77), 1,
      sym_annotation,
    STATE(95), 1,
      sym_annotation_annotated_list,
    STATE(54), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1031] = 9,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(45), 1,
      sym_annotations,
    STATE(105), 1,
      sym_annotation,
    STATE(126), 1,
      sym_annotation_annotated_list,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1062] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(75), 1,
      anon_sym_not,
    STATE(64), 1,
      sym_restriction,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(158), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1090] = 2,
    ACTIONS(61), 3,
      anon_sym_LT,
      anon_sym_RPAREN,
      sym__pname_ln,
    ACTIONS(63), 8,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
      anon_sym_not,
      anon_sym_or,
      anon_sym_and,
      sym__pn_local,
  [1106] = 1,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1120] = 1,
    ACTIONS(79), 11,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1134] = 2,
    ACTIONS(83), 2,
      anon_sym_only,
      anon_sym_exactly,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1150] = 1,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_only,
      anon_sym_exactly,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1164] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(87), 1,
      anon_sym_not,
    STATE(143), 1,
      sym_restriction,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(158), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1192] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(89), 1,
      anon_sym_not,
    STATE(50), 1,
      sym_restriction,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1220] = 8,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(64), 1,
      sym_restriction,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1248] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(53), 1,
      sym_restriction,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1273] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(125), 1,
      sym_restriction,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(158), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1298] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(71), 1,
      sym_restriction,
    STATE(163), 1,
      sym_data_property_expression,
    STATE(158), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1323] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(71), 1,
      sym_restriction,
    STATE(157), 1,
      sym_data_property_expression,
    STATE(158), 2,
      sym_iri,
      sym__data_property_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1348] = 6,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(106), 1,
      sym_annotation,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1370] = 6,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(86), 1,
      sym_annotation,
    STATE(54), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1392] = 6,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(118), 1,
      sym_annotation,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1414] = 6,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(82), 1,
      sym_annotation,
    STATE(54), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1436] = 3,
    ACTIONS(95), 1,
      anon_sym_and,
    STATE(65), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1451] = 3,
    ACTIONS(95), 1,
      anon_sym_and,
    STATE(49), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1466] = 6,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym__pn_local,
    ACTIONS(73), 1,
      sym__pname_ln,
    STATE(127), 1,
      sym_iri,
    STATE(128), 1,
      sym_annotation_target,
    STATE(121), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1487] = 1,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1498] = 3,
    ACTIONS(95), 1,
      anon_sym_and,
    STATE(63), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1513] = 6,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(103), 1,
      sym__pn_local,
    ACTIONS(105), 1,
      sym__pname_ln,
    STATE(100), 1,
      sym_annotation_target,
    STATE(102), 1,
      sym_iri,
    STATE(92), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1534] = 1,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1545] = 3,
    ACTIONS(111), 1,
      anon_sym_and,
    STATE(56), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1560] = 1,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1571] = 1,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1582] = 1,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1593] = 1,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1604] = 3,
    ACTIONS(122), 1,
      anon_sym_and,
    STATE(70), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1619] = 1,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1630] = 3,
    ACTIONS(95), 1,
      anon_sym_and,
    STATE(65), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1645] = 1,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1656] = 3,
    ACTIONS(130), 1,
      anon_sym_and,
    STATE(65), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1671] = 1,
    ACTIONS(7), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1682] = 2,
    ACTIONS(133), 1,
      anon_sym_that,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1695] = 1,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1706] = 5,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(111), 2,
      sym_iri,
      sym__class_iri,
    STATE(37), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1725] = 3,
    ACTIONS(122), 1,
      anon_sym_and,
    STATE(56), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1740] = 1,
    ACTIONS(139), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1751] = 1,
    ACTIONS(141), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1762] = 1,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1773] = 3,
    ACTIONS(147), 1,
      anon_sym_or,
    STATE(74), 1,
      aux_sym_description_repeat1,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1787] = 5,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(154), 1,
      anon_sym_Class_COLON,
    STATE(87), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(144), 2,
      sym_datatype_frame,
      sym_class_frame,
  [1805] = 5,
    ACTIONS(152), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(154), 1,
      anon_sym_Class_COLON,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(75), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(144), 2,
      sym_datatype_frame,
      sym_class_frame,
  [1823] = 4,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(160), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [1839] = 3,
    ACTIONS(166), 1,
      anon_sym_or,
    STATE(74), 1,
      aux_sym_description_repeat1,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1853] = 5,
    ACTIONS(152), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(154), 1,
      anon_sym_Class_COLON,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(87), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(144), 2,
      sym_datatype_frame,
      sym_class_frame,
  [1871] = 3,
    STATE(84), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(170), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(168), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1885] = 3,
    STATE(84), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(174), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(172), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1899] = 3,
    STATE(80), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(174), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(172), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1913] = 3,
    STATE(81), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(160), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1927] = 4,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(178), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(176), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [1943] = 4,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(170), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [1959] = 4,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(174), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(172), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [1975] = 5,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(188), 1,
      anon_sym_Class_COLON,
    STATE(87), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(144), 2,
      sym_datatype_frame,
      sym_class_frame,
  [1993] = 4,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(174), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(172), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
  [2009] = 3,
    ACTIONS(166), 1,
      anon_sym_or,
    STATE(78), 1,
      aux_sym_description_repeat1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [2023] = 1,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [2033] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2046] = 2,
    ACTIONS(198), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(85), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [2057] = 2,
    ACTIONS(200), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(79), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [2068] = 2,
    ACTIONS(202), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(77), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [2079] = 2,
    ACTIONS(206), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(204), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [2090] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(208), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2103] = 2,
    ACTIONS(212), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(65), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [2114] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2127] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2140] = 2,
    ACTIONS(220), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(218), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [2151] = 2,
    ACTIONS(178), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(176), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [2162] = 2,
    ACTIONS(224), 2,
      anon_sym_not,
      sym__pn_local,
    ACTIONS(222), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [2173] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2186] = 4,
    ACTIONS(174), 1,
      sym__pn_local,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(172), 2,
      anon_sym_LT,
      sym__pname_ln,
  [2200] = 3,
    ACTIONS(160), 1,
      sym__pn_local,
    STATE(108), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2212] = 3,
    ACTIONS(174), 1,
      sym__pn_local,
    STATE(109), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(172), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2224] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [2232] = 3,
    ACTIONS(174), 1,
      sym__pn_local,
    STATE(114), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(172), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2244] = 3,
    ACTIONS(170), 1,
      sym__pn_local,
    STATE(114), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2256] = 3,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      aux_sym__ipath_abempty,
    ACTIONS(228), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [2268] = 3,
    ACTIONS(235), 1,
      anon_sym_SubClassOf_COLON,
    STATE(116), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2280] = 3,
    ACTIONS(239), 1,
      anon_sym_SubClassOf_COLON,
    STATE(112), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2292] = 1,
    ACTIONS(242), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [2300] = 4,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(176), 2,
      anon_sym_LT,
      sym__pname_ln,
  [2314] = 4,
    ACTIONS(170), 1,
      sym__pn_local,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(168), 2,
      anon_sym_LT,
      sym__pname_ln,
  [2328] = 3,
    ACTIONS(235), 1,
      anon_sym_SubClassOf_COLON,
    STATE(112), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2340] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(172), 1,
      sym_ontology,
    STATE(122), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [2354] = 4,
    ACTIONS(174), 1,
      sym__pn_local,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(172), 2,
      anon_sym_LT,
      sym__pname_ln,
  [2368] = 3,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    STATE(110), 1,
      aux_sym__ipath_abempty,
    ACTIONS(249), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [2380] = 4,
    ACTIONS(160), 1,
      sym__pn_local,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(158), 2,
      anon_sym_LT,
      sym__pname_ln,
  [2394] = 2,
    ACTIONS(198), 1,
      sym__pn_local,
    ACTIONS(85), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2403] = 3,
    ACTIONS(253), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(255), 1,
      anon_sym_Prefix_COLON,
    STATE(122), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [2414] = 2,
    ACTIONS(200), 1,
      sym__pn_local,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2423] = 2,
    ACTIONS(212), 1,
      sym__pn_local,
    ACTIONS(65), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2432] = 3,
    ACTIONS(258), 1,
      anon_sym_and,
    STATE(138), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(93), 2,
      anon_sym_or,
      anon_sym_RPAREN,
  [2443] = 2,
    ACTIONS(206), 1,
      sym__pn_local,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2452] = 2,
    ACTIONS(224), 1,
      sym__pn_local,
    ACTIONS(222), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2461] = 2,
    ACTIONS(220), 1,
      sym__pn_local,
    ACTIONS(218), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2470] = 4,
    ACTIONS(260), 1,
      sym__iunreserved,
    STATE(151), 1,
      sym__iauthority,
    STATE(154), 1,
      sym__ihost,
    STATE(182), 1,
      sym__iuserinfo,
  [2483] = 4,
    ACTIONS(262), 1,
      sym__non_zero,
    ACTIONS(264), 1,
      sym__zero,
    STATE(2), 1,
      sym_non_negative_integer,
    STATE(22), 1,
      sym__positive_integer,
  [2496] = 3,
    ACTIONS(266), 1,
      anon_sym_and,
    STATE(134), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(137), 2,
      anon_sym_or,
      anon_sym_RPAREN,
  [2507] = 2,
    ACTIONS(202), 1,
      sym__pn_local,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2516] = 4,
    ACTIONS(268), 1,
      sym__non_zero,
    ACTIONS(270), 1,
      sym__zero,
    STATE(5), 1,
      sym_non_negative_integer,
    STATE(33), 1,
      sym__positive_integer,
  [2529] = 3,
    ACTIONS(272), 1,
      anon_sym_and,
    STATE(134), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(109), 2,
      anon_sym_or,
      anon_sym_RPAREN,
  [2540] = 2,
    ACTIONS(178), 1,
      sym__pn_local,
    ACTIONS(176), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [2549] = 1,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [2556] = 3,
    ACTIONS(258), 1,
      anon_sym_and,
    STATE(140), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(93), 2,
      anon_sym_or,
      anon_sym_RPAREN,
  [2567] = 3,
    ACTIONS(258), 1,
      anon_sym_and,
    STATE(140), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(126), 2,
      anon_sym_or,
      anon_sym_RPAREN,
  [2578] = 1,
    ACTIONS(228), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [2585] = 3,
    ACTIONS(275), 1,
      anon_sym_and,
    STATE(140), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(128), 2,
      anon_sym_or,
      anon_sym_RPAREN,
  [2596] = 2,
    ACTIONS(278), 1,
      anon_sym_that,
    ACTIONS(114), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
  [2605] = 3,
    ACTIONS(266), 1,
      anon_sym_and,
    STATE(131), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(120), 2,
      anon_sym_or,
      anon_sym_RPAREN,
  [2616] = 3,
    ACTIONS(258), 1,
      anon_sym_and,
    STATE(137), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(97), 2,
      anon_sym_or,
      anon_sym_RPAREN,
  [2627] = 1,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2633] = 3,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      anon_sym_or,
    STATE(145), 1,
      aux_sym_description_repeat1,
  [2643] = 3,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      anon_sym_or,
    STATE(145), 1,
      aux_sym_description_repeat1,
  [2653] = 3,
    ACTIONS(287), 1,
      anon_sym_GT,
    ACTIONS(289), 1,
      sym__iquery,
    ACTIONS(291), 1,
      sym__ifragment,
  [2663] = 2,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(293), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [2671] = 1,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [2677] = 3,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      anon_sym_or,
    STATE(146), 1,
      aux_sym_description_repeat1,
  [2687] = 2,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    STATE(119), 1,
      aux_sym__ipath_abempty,
  [2694] = 2,
    ACTIONS(299), 1,
      sym__scheme,
    STATE(177), 1,
      sym__iri_rfc3987,
  [2701] = 2,
    ACTIONS(301), 1,
      anon_sym_Annotations_COLON,
    STATE(101), 1,
      sym_annotations,
  [2708] = 2,
    ACTIONS(303), 1,
      anon_sym_COLON,
    ACTIONS(305), 1,
      anon_sym_SLASH,
  [2715] = 2,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(309), 1,
      anon_sym_SLASH,
  [2722] = 2,
    ACTIONS(311), 1,
      anon_sym_Annotations_COLON,
    STATE(135), 1,
      sym_annotations,
  [2729] = 2,
    ACTIONS(313), 1,
      anon_sym_only,
    ACTIONS(315), 1,
      anon_sym_exactly,
  [2736] = 1,
    ACTIONS(317), 2,
      anon_sym_only,
      anon_sym_exactly,
  [2741] = 1,
    ACTIONS(319), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [2746] = 2,
    ACTIONS(299), 1,
      sym__scheme,
    STATE(178), 1,
      sym__iri_rfc3987,
  [2753] = 2,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(159), 1,
      sym_full_iri,
  [2760] = 2,
    ACTIONS(299), 1,
      sym__scheme,
    STATE(181), 1,
      sym__iri_rfc3987,
  [2767] = 2,
    ACTIONS(321), 1,
      anon_sym_only,
    ACTIONS(323), 1,
      anon_sym_exactly,
  [2774] = 2,
    ACTIONS(325), 1,
      anon_sym_SLASH_SLASH,
    STATE(147), 1,
      sym__ihier_part,
  [2781] = 2,
    ACTIONS(327), 1,
      anon_sym_GT,
    ACTIONS(329), 1,
      sym__ifragment,
  [2788] = 2,
    ACTIONS(331), 1,
      sym__iunreserved,
    STATE(139), 1,
      sym__isegment,
  [2795] = 2,
    ACTIONS(333), 1,
      sym__iunreserved,
    STATE(155), 1,
      sym__ihost,
  [2802] = 1,
    ACTIONS(309), 1,
      anon_sym_SLASH,
  [2806] = 1,
    ACTIONS(335), 1,
      anon_sym_SLASH,
  [2810] = 1,
    ACTIONS(327), 1,
      anon_sym_GT,
  [2814] = 1,
    ACTIONS(337), 1,
      sym__port,
  [2818] = 1,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
  [2822] = 1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
  [2826] = 1,
    ACTIONS(343), 1,
      anon_sym_COLON,
  [2830] = 1,
    ACTIONS(345), 1,
      sym__port,
  [2834] = 1,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
  [2838] = 1,
    ACTIONS(349), 1,
      anon_sym_GT,
  [2842] = 1,
    ACTIONS(351), 1,
      anon_sym_GT,
  [2846] = 1,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
  [2850] = 1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2854] = 1,
    ACTIONS(357), 1,
      anon_sym_GT,
  [2858] = 1,
    ACTIONS(359), 1,
      anon_sym_AT,
  [2862] = 1,
    ACTIONS(361), 1,
      sym_prefix_name,
  [2866] = 1,
    ACTIONS(363), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 375,
  [SMALL_STATE(12)] = 421,
  [SMALL_STATE(13)] = 464,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 547,
  [SMALL_STATE(16)] = 587,
  [SMALL_STATE(17)] = 623,
  [SMALL_STATE(18)] = 663,
  [SMALL_STATE(19)] = 687,
  [SMALL_STATE(20)] = 727,
  [SMALL_STATE(21)] = 751,
  [SMALL_STATE(22)] = 775,
  [SMALL_STATE(23)] = 795,
  [SMALL_STATE(24)] = 826,
  [SMALL_STATE(25)] = 854,
  [SMALL_STATE(26)] = 870,
  [SMALL_STATE(27)] = 904,
  [SMALL_STATE(28)] = 938,
  [SMALL_STATE(29)] = 969,
  [SMALL_STATE(30)] = 1000,
  [SMALL_STATE(31)] = 1031,
  [SMALL_STATE(32)] = 1062,
  [SMALL_STATE(33)] = 1090,
  [SMALL_STATE(34)] = 1106,
  [SMALL_STATE(35)] = 1120,
  [SMALL_STATE(36)] = 1134,
  [SMALL_STATE(37)] = 1150,
  [SMALL_STATE(38)] = 1164,
  [SMALL_STATE(39)] = 1192,
  [SMALL_STATE(40)] = 1220,
  [SMALL_STATE(41)] = 1248,
  [SMALL_STATE(42)] = 1273,
  [SMALL_STATE(43)] = 1298,
  [SMALL_STATE(44)] = 1323,
  [SMALL_STATE(45)] = 1348,
  [SMALL_STATE(46)] = 1370,
  [SMALL_STATE(47)] = 1392,
  [SMALL_STATE(48)] = 1414,
  [SMALL_STATE(49)] = 1436,
  [SMALL_STATE(50)] = 1451,
  [SMALL_STATE(51)] = 1466,
  [SMALL_STATE(52)] = 1487,
  [SMALL_STATE(53)] = 1498,
  [SMALL_STATE(54)] = 1513,
  [SMALL_STATE(55)] = 1534,
  [SMALL_STATE(56)] = 1545,
  [SMALL_STATE(57)] = 1560,
  [SMALL_STATE(58)] = 1571,
  [SMALL_STATE(59)] = 1582,
  [SMALL_STATE(60)] = 1593,
  [SMALL_STATE(61)] = 1604,
  [SMALL_STATE(62)] = 1619,
  [SMALL_STATE(63)] = 1630,
  [SMALL_STATE(64)] = 1645,
  [SMALL_STATE(65)] = 1656,
  [SMALL_STATE(66)] = 1671,
  [SMALL_STATE(67)] = 1682,
  [SMALL_STATE(68)] = 1695,
  [SMALL_STATE(69)] = 1706,
  [SMALL_STATE(70)] = 1725,
  [SMALL_STATE(71)] = 1740,
  [SMALL_STATE(72)] = 1751,
  [SMALL_STATE(73)] = 1762,
  [SMALL_STATE(74)] = 1773,
  [SMALL_STATE(75)] = 1787,
  [SMALL_STATE(76)] = 1805,
  [SMALL_STATE(77)] = 1823,
  [SMALL_STATE(78)] = 1839,
  [SMALL_STATE(79)] = 1853,
  [SMALL_STATE(80)] = 1871,
  [SMALL_STATE(81)] = 1885,
  [SMALL_STATE(82)] = 1899,
  [SMALL_STATE(83)] = 1913,
  [SMALL_STATE(84)] = 1927,
  [SMALL_STATE(85)] = 1943,
  [SMALL_STATE(86)] = 1959,
  [SMALL_STATE(87)] = 1975,
  [SMALL_STATE(88)] = 1993,
  [SMALL_STATE(89)] = 2009,
  [SMALL_STATE(90)] = 2023,
  [SMALL_STATE(91)] = 2033,
  [SMALL_STATE(92)] = 2046,
  [SMALL_STATE(93)] = 2057,
  [SMALL_STATE(94)] = 2068,
  [SMALL_STATE(95)] = 2079,
  [SMALL_STATE(96)] = 2090,
  [SMALL_STATE(97)] = 2103,
  [SMALL_STATE(98)] = 2114,
  [SMALL_STATE(99)] = 2127,
  [SMALL_STATE(100)] = 2140,
  [SMALL_STATE(101)] = 2151,
  [SMALL_STATE(102)] = 2162,
  [SMALL_STATE(103)] = 2173,
  [SMALL_STATE(104)] = 2186,
  [SMALL_STATE(105)] = 2200,
  [SMALL_STATE(106)] = 2212,
  [SMALL_STATE(107)] = 2224,
  [SMALL_STATE(108)] = 2232,
  [SMALL_STATE(109)] = 2244,
  [SMALL_STATE(110)] = 2256,
  [SMALL_STATE(111)] = 2268,
  [SMALL_STATE(112)] = 2280,
  [SMALL_STATE(113)] = 2292,
  [SMALL_STATE(114)] = 2300,
  [SMALL_STATE(115)] = 2314,
  [SMALL_STATE(116)] = 2328,
  [SMALL_STATE(117)] = 2340,
  [SMALL_STATE(118)] = 2354,
  [SMALL_STATE(119)] = 2368,
  [SMALL_STATE(120)] = 2380,
  [SMALL_STATE(121)] = 2394,
  [SMALL_STATE(122)] = 2403,
  [SMALL_STATE(123)] = 2414,
  [SMALL_STATE(124)] = 2423,
  [SMALL_STATE(125)] = 2432,
  [SMALL_STATE(126)] = 2443,
  [SMALL_STATE(127)] = 2452,
  [SMALL_STATE(128)] = 2461,
  [SMALL_STATE(129)] = 2470,
  [SMALL_STATE(130)] = 2483,
  [SMALL_STATE(131)] = 2496,
  [SMALL_STATE(132)] = 2507,
  [SMALL_STATE(133)] = 2516,
  [SMALL_STATE(134)] = 2529,
  [SMALL_STATE(135)] = 2540,
  [SMALL_STATE(136)] = 2549,
  [SMALL_STATE(137)] = 2556,
  [SMALL_STATE(138)] = 2567,
  [SMALL_STATE(139)] = 2578,
  [SMALL_STATE(140)] = 2585,
  [SMALL_STATE(141)] = 2596,
  [SMALL_STATE(142)] = 2605,
  [SMALL_STATE(143)] = 2616,
  [SMALL_STATE(144)] = 2627,
  [SMALL_STATE(145)] = 2633,
  [SMALL_STATE(146)] = 2643,
  [SMALL_STATE(147)] = 2653,
  [SMALL_STATE(148)] = 2663,
  [SMALL_STATE(149)] = 2671,
  [SMALL_STATE(150)] = 2677,
  [SMALL_STATE(151)] = 2687,
  [SMALL_STATE(152)] = 2694,
  [SMALL_STATE(153)] = 2701,
  [SMALL_STATE(154)] = 2708,
  [SMALL_STATE(155)] = 2715,
  [SMALL_STATE(156)] = 2722,
  [SMALL_STATE(157)] = 2729,
  [SMALL_STATE(158)] = 2736,
  [SMALL_STATE(159)] = 2741,
  [SMALL_STATE(160)] = 2746,
  [SMALL_STATE(161)] = 2753,
  [SMALL_STATE(162)] = 2760,
  [SMALL_STATE(163)] = 2767,
  [SMALL_STATE(164)] = 2774,
  [SMALL_STATE(165)] = 2781,
  [SMALL_STATE(166)] = 2788,
  [SMALL_STATE(167)] = 2795,
  [SMALL_STATE(168)] = 2802,
  [SMALL_STATE(169)] = 2806,
  [SMALL_STATE(170)] = 2810,
  [SMALL_STATE(171)] = 2814,
  [SMALL_STATE(172)] = 2818,
  [SMALL_STATE(173)] = 2822,
  [SMALL_STATE(174)] = 2826,
  [SMALL_STATE(175)] = 2830,
  [SMALL_STATE(176)] = 2834,
  [SMALL_STATE(177)] = 2838,
  [SMALL_STATE(178)] = 2842,
  [SMALL_STATE(179)] = 2846,
  [SMALL_STATE(180)] = 2850,
  [SMALL_STATE(181)] = 2854,
  [SMALL_STATE(182)] = 2858,
  [SMALL_STATE(183)] = 2862,
  [SMALL_STATE(184)] = 2866,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_restriction, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__positive_integer, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__positive_integer, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__positive_integer_repeat1, 2), SHIFT_REPEAT(20),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_negative_integer, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_negative_integer, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_iri, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_property_iri, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_restriction, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(19),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_atomic, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(40),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_primary, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(13),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(153),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(24),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(69),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(8),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_target, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_target, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(166),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 3),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(156),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(183),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(14),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(32),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(12),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_expression, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
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

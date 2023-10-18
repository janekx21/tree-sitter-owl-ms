#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_Ontology_COLON = 8,
  anon_sym_Prefix_COLON = 9,
  anon_sym_Annotations_COLON = 10,
  anon_sym_or = 11,
  anon_sym_that = 12,
  anon_sym_not = 13,
  anon_sym_and = 14,
  sym_restriction = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_Datatype_COLON = 18,
  anon_sym_Class_COLON = 19,
  anon_sym_SubClassOf_COLON = 20,
  anon_sym_COMMA = 21,
  anon_sym_COLON = 22,
  sym__scheme = 23,
  anon_sym_SLASH_SLASH = 24,
  anon_sym_AT = 25,
  sym__iunreserved = 26,
  sym__port = 27,
  anon_sym_SLASH = 28,
  sym__iquery = 29,
  sym__ifragment = 30,
  sym__pn_local = 31,
  sym__pname_ln = 32,
  sym_source_file = 33,
  sym_iri = 34,
  sym_full_iri = 35,
  sym_abbreviated_iri = 36,
  sym_simple_iri = 37,
  sym_datatype = 38,
  sym__datatype_iri = 39,
  sym__class_iri = 40,
  sym__annotation_property_iri = 41,
  sym__ontology_iri = 42,
  sym_ontology_document = 43,
  sym_ontology = 44,
  sym_frame = 45,
  sym_prefix_declaration = 46,
  sym_annotations = 47,
  sym_annotation = 48,
  sym_annotation_target = 49,
  sym_description = 50,
  sym_conjunction = 51,
  sym_primary = 52,
  sym_atomic = 53,
  sym_datatype_frame = 54,
  sym_class_frame = 55,
  sym_description_annotated_list = 56,
  sym_annotation_annotated_list = 57,
  sym__iri_rfc3987 = 58,
  sym__ihier_part = 59,
  sym__iauthority = 60,
  sym__iuserinfo = 61,
  sym__ihost = 62,
  aux_sym__ipath_abempty = 63,
  sym__isegment = 64,
  aux_sym_ontology_document_repeat1 = 65,
  aux_sym_ontology_repeat1 = 66,
  aux_sym_description_repeat1 = 67,
  aux_sym_conjunction_repeat1 = 68,
  aux_sym_conjunction_repeat2 = 69,
  aux_sym_class_frame_repeat1 = 70,
  aux_sym_description_annotated_list_repeat1 = 71,
  aux_sym_annotation_annotated_list_repeat1 = 72,
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
  [anon_sym_Ontology_COLON] = "Ontology:",
  [anon_sym_Prefix_COLON] = "Prefix:",
  [anon_sym_Annotations_COLON] = "Annotations:",
  [anon_sym_or] = "or",
  [anon_sym_that] = "that",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [sym_restriction] = "restriction",
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
  [sym_ontology_document] = "ontology_document",
  [sym_ontology] = "ontology",
  [sym_frame] = "frame",
  [sym_prefix_declaration] = "prefix_declaration",
  [sym_annotations] = "annotations",
  [sym_annotation] = "annotation",
  [sym_annotation_target] = "annotation_target",
  [sym_description] = "description",
  [sym_conjunction] = "conjunction",
  [sym_primary] = "primary",
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
  [anon_sym_Ontology_COLON] = anon_sym_Ontology_COLON,
  [anon_sym_Prefix_COLON] = anon_sym_Prefix_COLON,
  [anon_sym_Annotations_COLON] = anon_sym_Annotations_COLON,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_that] = anon_sym_that,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [sym_restriction] = sym_restriction,
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
  [sym_ontology_document] = sym_ontology_document,
  [sym_ontology] = sym_ontology,
  [sym_frame] = sym_frame,
  [sym_prefix_declaration] = sym_prefix_declaration,
  [sym_annotations] = sym_annotations,
  [sym_annotation] = sym_annotation,
  [sym_annotation_target] = sym_annotation_target,
  [sym_description] = sym_description,
  [sym_conjunction] = sym_conjunction,
  [sym_primary] = sym_primary,
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
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [sym_restriction] = {
    .visible = true,
    .named = true,
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 11,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 17,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 33,
  [47] = 35,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 44,
  [52] = 39,
  [53] = 36,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 15,
  [58] = 58,
  [59] = 59,
  [60] = 24,
  [61] = 61,
  [62] = 62,
  [63] = 26,
  [64] = 64,
  [65] = 27,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 33,
  [75] = 39,
  [76] = 38,
  [77] = 77,
  [78] = 33,
  [79] = 79,
  [80] = 36,
  [81] = 35,
  [82] = 82,
  [83] = 36,
  [84] = 84,
  [85] = 85,
  [86] = 35,
  [87] = 87,
  [88] = 88,
  [89] = 39,
  [90] = 27,
  [91] = 24,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 61,
  [97] = 15,
  [98] = 56,
  [99] = 58,
  [100] = 67,
  [101] = 26,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 109,
  [113] = 109,
  [114] = 114,
  [115] = 115,
  [116] = 114,
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
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 127,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '?') ADVANCE(132);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == 'A') ADVANCE(57);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '?') ADVANCE(132);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(106);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 87:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 90:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(152);
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Annotations_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_restriction);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_restriction);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Class_COLON);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SubClassOf_COLON);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__iunreserved);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__pname_ln);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 90},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 90},
  [113] = {.lex_state = 90},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 92},
  [123] = {.lex_state = 129},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 129},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
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
    [anon_sym_Ontology_COLON] = ACTIONS(1),
    [anon_sym_Prefix_COLON] = ACTIONS(1),
    [anon_sym_Annotations_COLON] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [sym_restriction] = ACTIONS(1),
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
    [sym_source_file] = STATE(139),
    [sym_ontology_document] = STATE(138),
    [sym_ontology] = STATE(137),
    [sym_prefix_declaration] = STATE(77),
    [aux_sym_ontology_document_repeat1] = STATE(77),
    [anon_sym_Ontology_COLON] = ACTIONS(3),
    [anon_sym_Prefix_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      sym_restriction,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(6), 1,
      sym_annotations,
    STATE(28), 1,
      sym_primary,
    STATE(40), 1,
      sym_atomic,
    STATE(42), 1,
      sym_conjunction,
    STATE(72), 1,
      sym_description,
    STATE(95), 1,
      sym_description_annotated_list,
    STATE(32), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [49] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      sym_restriction,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(7), 1,
      sym_annotations,
    STATE(28), 1,
      sym_primary,
    STATE(40), 1,
      sym_atomic,
    STATE(42), 1,
      sym_conjunction,
    STATE(73), 1,
      sym_description,
    STATE(32), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [95] = 10,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(25), 1,
      anon_sym_Class_COLON,
    STATE(55), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(62), 2,
      sym_iri,
      sym__ontology_iri,
    STATE(102), 2,
      sym_datatype_frame,
      sym_class_frame,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [131] = 12,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      sym_restriction,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(28), 1,
      sym_primary,
    STATE(40), 1,
      sym_atomic,
    STATE(42), 1,
      sym_conjunction,
    STATE(140), 1,
      sym_description,
    STATE(32), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [171] = 12,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      sym_restriction,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(28), 1,
      sym_primary,
    STATE(40), 1,
      sym_atomic,
    STATE(42), 1,
      sym_conjunction,
    STATE(70), 1,
      sym_description,
    STATE(32), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [211] = 12,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      sym_restriction,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(28), 1,
      sym_primary,
    STATE(40), 1,
      sym_atomic,
    STATE(42), 1,
      sym_conjunction,
    STATE(87), 1,
      sym_description,
    STATE(32), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [251] = 11,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      sym_restriction,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(28), 1,
      sym_primary,
    STATE(40), 1,
      sym_atomic,
    STATE(64), 1,
      sym_conjunction,
    STATE(32), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [288] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(104), 1,
      sym_datatype,
    STATE(103), 2,
      sym_iri,
      sym__datatype_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
    ACTIONS(27), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [316] = 10,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      sym_restriction,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(40), 1,
      sym_atomic,
    STATE(41), 1,
      sym_primary,
    STATE(50), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [350] = 9,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(17), 1,
      sym_annotations,
    STATE(80), 1,
      sym_annotation,
    STATE(99), 1,
      sym_annotation_annotated_list,
    STATE(44), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [381] = 9,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(20), 1,
      sym_annotations,
    STATE(83), 1,
      sym_annotation,
    STATE(99), 1,
      sym_annotation_annotated_list,
    STATE(44), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [412] = 9,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(31), 1,
      sym_annotations,
    STATE(36), 1,
      sym_annotation,
    STATE(58), 1,
      sym_annotation_annotated_list,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [443] = 9,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_Annotations_COLON,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(25), 1,
      sym_annotations,
    STATE(53), 1,
      sym_annotation,
    STATE(58), 1,
      sym_annotation_annotated_list,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [474] = 1,
    ACTIONS(37), 11,
      ts_builtin_sym_end,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [488] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    ACTIONS(39), 1,
      sym_restriction,
    STATE(34), 1,
      sym_atomic,
    STATE(50), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [516] = 6,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(86), 1,
      sym_annotation,
    STATE(44), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [538] = 3,
    ACTIONS(43), 1,
      anon_sym_and,
    STATE(18), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [554] = 3,
    ACTIONS(48), 1,
      anon_sym_and,
    STATE(29), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [570] = 6,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(81), 1,
      sym_annotation,
    STATE(44), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [592] = 3,
    ACTIONS(52), 1,
      anon_sym_and,
    STATE(18), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [608] = 3,
    ACTIONS(52), 1,
      anon_sym_and,
    STATE(23), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [624] = 3,
    ACTIONS(52), 1,
      anon_sym_and,
    STATE(18), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [640] = 1,
    ACTIONS(58), 9,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [652] = 6,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(47), 1,
      sym_annotation,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [674] = 1,
    ACTIONS(60), 9,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [686] = 1,
    ACTIONS(62), 9,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_that,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [698] = 3,
    ACTIONS(48), 1,
      anon_sym_and,
    STATE(19), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [714] = 3,
    ACTIONS(68), 1,
      anon_sym_and,
    STATE(29), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [730] = 3,
    ACTIONS(52), 1,
      anon_sym_and,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [746] = 6,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(35), 1,
      sym_annotation,
    STATE(51), 2,
      sym_iri,
      sym__annotation_property_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [768] = 2,
    ACTIONS(73), 1,
      anon_sym_that,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [782] = 3,
    STATE(38), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(77), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(75), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [797] = 1,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [808] = 3,
    STATE(52), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(77), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(75), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [823] = 3,
    STATE(33), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(83), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [838] = 5,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym__pn_local,
    ACTIONS(19), 1,
      sym__pname_ln,
    STATE(88), 2,
      sym_iri,
      sym__class_iri,
    STATE(24), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [857] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(85), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(87), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
  [874] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(92), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(94), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
  [891] = 1,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [902] = 1,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [913] = 3,
    ACTIONS(102), 1,
      anon_sym_or,
    STATE(49), 1,
      aux_sym_description_repeat1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [928] = 3,
    ACTIONS(106), 1,
      anon_sym_or,
    STATE(43), 1,
      aux_sym_description_repeat1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [943] = 6,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym__pn_local,
    ACTIONS(35), 1,
      sym__pname_ln,
    STATE(98), 1,
      sym_annotation_target,
    STATE(100), 1,
      sym_iri,
    STATE(91), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [964] = 1,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [975] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(77), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
  [992] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(77), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
  [1009] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1020] = 3,
    ACTIONS(102), 1,
      anon_sym_or,
    STATE(43), 1,
      aux_sym_description_repeat1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1035] = 1,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1046] = 6,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      sym__pn_local,
    ACTIONS(117), 1,
      sym__pname_ln,
    STATE(56), 1,
      sym_annotation_target,
    STATE(67), 1,
      sym_iri,
    STATE(60), 3,
      sym_full_iri,
      sym_abbreviated_iri,
      sym_simple_iri,
  [1067] = 3,
    STATE(38), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(94), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(92), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1082] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym__pname_ln,
    ACTIONS(83), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
  [1099] = 1,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_and,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1110] = 5,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(125), 1,
      anon_sym_Class_COLON,
    STATE(66), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(102), 2,
      sym_datatype_frame,
      sym_class_frame,
  [1128] = 2,
    ACTIONS(129), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(127), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1140] = 2,
    ACTIONS(131), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1152] = 2,
    ACTIONS(135), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(133), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1164] = 5,
    ACTIONS(123), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(125), 1,
      anon_sym_Class_COLON,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(66), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(102), 2,
      sym_datatype_frame,
      sym_class_frame,
  [1182] = 2,
    ACTIONS(139), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(58), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1194] = 2,
    ACTIONS(87), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(85), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1206] = 5,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(125), 1,
      anon_sym_Class_COLON,
    STATE(59), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(102), 2,
      sym_datatype_frame,
      sym_class_frame,
  [1224] = 2,
    ACTIONS(141), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(60), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1236] = 1,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_or,
      anon_sym_RPAREN,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1246] = 2,
    ACTIONS(143), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(62), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1258] = 5,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(150), 1,
      anon_sym_Class_COLON,
    STATE(66), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
    STATE(102), 2,
      sym_datatype_frame,
      sym_class_frame,
  [1276] = 2,
    ACTIONS(155), 3,
      anon_sym_not,
      sym_restriction,
      sym__pn_local,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__pname_ln,
  [1288] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [1301] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [1314] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [1327] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [1340] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_description_annotated_list_repeat1,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [1353] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1361] = 4,
    ACTIONS(77), 1,
      sym__pn_local,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 2,
      anon_sym_LT,
      sym__pname_ln,
  [1375] = 4,
    ACTIONS(94), 1,
      sym__pn_local,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(92), 2,
      anon_sym_LT,
      sym__pname_ln,
  [1389] = 4,
    ACTIONS(87), 1,
      sym__pn_local,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(85), 2,
      anon_sym_LT,
      sym__pname_ln,
  [1403] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(131), 1,
      sym_ontology,
    STATE(93), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [1417] = 3,
    ACTIONS(77), 1,
      sym__pn_local,
    STATE(76), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1429] = 3,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    STATE(85), 1,
      aux_sym__ipath_abempty,
    ACTIONS(175), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [1441] = 4,
    ACTIONS(83), 1,
      sym__pn_local,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(81), 2,
      anon_sym_LT,
      sym__pname_ln,
  [1455] = 3,
    ACTIONS(77), 1,
      sym__pn_local,
    STATE(89), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1467] = 3,
    ACTIONS(181), 1,
      anon_sym_SubClassOf_COLON,
    STATE(82), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [1479] = 3,
    ACTIONS(83), 1,
      sym__pn_local,
    STATE(78), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1491] = 3,
    ACTIONS(186), 1,
      anon_sym_SubClassOf_COLON,
    STATE(82), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [1503] = 3,
    ACTIONS(190), 1,
      anon_sym_SLASH,
    STATE(85), 1,
      aux_sym__ipath_abempty,
    ACTIONS(188), 3,
      anon_sym_GT,
      sym__iquery,
      sym__ifragment,
  [1515] = 4,
    ACTIONS(77), 1,
      sym__pn_local,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(75), 2,
      anon_sym_LT,
      sym__pname_ln,
  [1529] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
      anon_sym_COMMA,
  [1537] = 3,
    ACTIONS(186), 1,
      anon_sym_SubClassOf_COLON,
    STATE(84), 1,
      aux_sym_class_frame_repeat1,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [1549] = 3,
    ACTIONS(94), 1,
      sym__pn_local,
    STATE(76), 1,
      aux_sym_annotation_annotated_list_repeat1,
    ACTIONS(92), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1561] = 2,
    ACTIONS(143), 1,
      sym__pn_local,
    ACTIONS(62), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1570] = 2,
    ACTIONS(139), 1,
      sym__pn_local,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1579] = 1,
    ACTIONS(188), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym__iquery,
      sym__ifragment,
  [1586] = 3,
    ACTIONS(197), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(199), 1,
      anon_sym_Prefix_COLON,
    STATE(93), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [1597] = 4,
    ACTIONS(202), 1,
      sym__iunreserved,
    STATE(115), 1,
      sym__ihost,
    STATE(118), 1,
      sym__iauthority,
    STATE(133), 1,
      sym__iuserinfo,
  [1610] = 1,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
      anon_sym_SubClassOf_COLON,
  [1617] = 2,
    ACTIONS(87), 1,
      sym__pn_local,
    ACTIONS(85), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1626] = 2,
    ACTIONS(131), 1,
      sym__pn_local,
    ACTIONS(37), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1635] = 2,
    ACTIONS(129), 1,
      sym__pn_local,
    ACTIONS(127), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1644] = 2,
    ACTIONS(135), 1,
      sym__pn_local,
    ACTIONS(133), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1653] = 2,
    ACTIONS(155), 1,
      sym__pn_local,
    ACTIONS(153), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1662] = 2,
    ACTIONS(141), 1,
      sym__pn_local,
    ACTIONS(60), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      sym__pname_ln,
  [1671] = 1,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [1677] = 1,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [1683] = 1,
    ACTIONS(208), 3,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
      anon_sym_Class_COLON,
  [1689] = 3,
    ACTIONS(210), 1,
      anon_sym_GT,
    ACTIONS(212), 1,
      sym__iquery,
    ACTIONS(214), 1,
      sym__ifragment,
  [1699] = 2,
    ACTIONS(218), 1,
      anon_sym_AT,
    ACTIONS(216), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [1707] = 2,
    ACTIONS(220), 1,
      anon_sym_GT,
    ACTIONS(222), 1,
      sym__ifragment,
  [1714] = 2,
    ACTIONS(7), 1,
      anon_sym_LT,
    STATE(121), 1,
      sym_full_iri,
  [1721] = 2,
    ACTIONS(224), 1,
      sym__scheme,
    STATE(135), 1,
      sym__iri_rfc3987,
  [1728] = 2,
    ACTIONS(226), 1,
      sym__iunreserved,
    STATE(92), 1,
      sym__isegment,
  [1735] = 2,
    ACTIONS(228), 1,
      anon_sym_not,
    ACTIONS(230), 1,
      sym_restriction,
  [1742] = 2,
    ACTIONS(224), 1,
      sym__scheme,
    STATE(130), 1,
      sym__iri_rfc3987,
  [1749] = 2,
    ACTIONS(224), 1,
      sym__scheme,
    STATE(127), 1,
      sym__iri_rfc3987,
  [1756] = 2,
    ACTIONS(232), 1,
      anon_sym_Annotations_COLON,
    STATE(61), 1,
      sym_annotations,
  [1763] = 2,
    ACTIONS(234), 1,
      anon_sym_COLON,
    ACTIONS(236), 1,
      anon_sym_SLASH,
  [1770] = 2,
    ACTIONS(238), 1,
      anon_sym_Annotations_COLON,
    STATE(96), 1,
      sym_annotations,
  [1777] = 2,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      anon_sym_SLASH,
  [1784] = 2,
    ACTIONS(177), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      aux_sym__ipath_abempty,
  [1791] = 2,
    ACTIONS(244), 1,
      sym__iunreserved,
    STATE(117), 1,
      sym__ihost,
  [1798] = 2,
    ACTIONS(246), 1,
      anon_sym_not,
    ACTIONS(248), 1,
      sym_restriction,
  [1805] = 1,
    ACTIONS(250), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [1810] = 2,
    ACTIONS(252), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym__ihier_part,
  [1817] = 1,
    ACTIONS(254), 1,
      sym__port,
  [1821] = 1,
    ACTIONS(256), 1,
      anon_sym_GT,
  [1825] = 1,
    ACTIONS(258), 1,
      sym_prefix_name,
  [1829] = 1,
    ACTIONS(242), 1,
      anon_sym_SLASH,
  [1833] = 1,
    ACTIONS(260), 1,
      anon_sym_GT,
  [1837] = 1,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [1841] = 1,
    ACTIONS(264), 1,
      sym_restriction,
  [1845] = 1,
    ACTIONS(266), 1,
      anon_sym_GT,
  [1849] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1853] = 1,
    ACTIONS(270), 1,
      sym__port,
  [1857] = 1,
    ACTIONS(272), 1,
      anon_sym_AT,
  [1861] = 1,
    ACTIONS(274), 1,
      sym_restriction,
  [1865] = 1,
    ACTIONS(276), 1,
      anon_sym_GT,
  [1869] = 1,
    ACTIONS(220), 1,
      anon_sym_GT,
  [1873] = 1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
  [1877] = 1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [1881] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1885] = 1,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
  [1889] = 1,
    ACTIONS(286), 1,
      anon_sym_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 171,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 251,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 350,
  [SMALL_STATE(12)] = 381,
  [SMALL_STATE(13)] = 412,
  [SMALL_STATE(14)] = 443,
  [SMALL_STATE(15)] = 474,
  [SMALL_STATE(16)] = 488,
  [SMALL_STATE(17)] = 516,
  [SMALL_STATE(18)] = 538,
  [SMALL_STATE(19)] = 554,
  [SMALL_STATE(20)] = 570,
  [SMALL_STATE(21)] = 592,
  [SMALL_STATE(22)] = 608,
  [SMALL_STATE(23)] = 624,
  [SMALL_STATE(24)] = 640,
  [SMALL_STATE(25)] = 652,
  [SMALL_STATE(26)] = 674,
  [SMALL_STATE(27)] = 686,
  [SMALL_STATE(28)] = 698,
  [SMALL_STATE(29)] = 714,
  [SMALL_STATE(30)] = 730,
  [SMALL_STATE(31)] = 746,
  [SMALL_STATE(32)] = 768,
  [SMALL_STATE(33)] = 782,
  [SMALL_STATE(34)] = 797,
  [SMALL_STATE(35)] = 808,
  [SMALL_STATE(36)] = 823,
  [SMALL_STATE(37)] = 838,
  [SMALL_STATE(38)] = 857,
  [SMALL_STATE(39)] = 874,
  [SMALL_STATE(40)] = 891,
  [SMALL_STATE(41)] = 902,
  [SMALL_STATE(42)] = 913,
  [SMALL_STATE(43)] = 928,
  [SMALL_STATE(44)] = 943,
  [SMALL_STATE(45)] = 964,
  [SMALL_STATE(46)] = 975,
  [SMALL_STATE(47)] = 992,
  [SMALL_STATE(48)] = 1009,
  [SMALL_STATE(49)] = 1020,
  [SMALL_STATE(50)] = 1035,
  [SMALL_STATE(51)] = 1046,
  [SMALL_STATE(52)] = 1067,
  [SMALL_STATE(53)] = 1082,
  [SMALL_STATE(54)] = 1099,
  [SMALL_STATE(55)] = 1110,
  [SMALL_STATE(56)] = 1128,
  [SMALL_STATE(57)] = 1140,
  [SMALL_STATE(58)] = 1152,
  [SMALL_STATE(59)] = 1164,
  [SMALL_STATE(60)] = 1182,
  [SMALL_STATE(61)] = 1194,
  [SMALL_STATE(62)] = 1206,
  [SMALL_STATE(63)] = 1224,
  [SMALL_STATE(64)] = 1236,
  [SMALL_STATE(65)] = 1246,
  [SMALL_STATE(66)] = 1258,
  [SMALL_STATE(67)] = 1276,
  [SMALL_STATE(68)] = 1288,
  [SMALL_STATE(69)] = 1301,
  [SMALL_STATE(70)] = 1314,
  [SMALL_STATE(71)] = 1327,
  [SMALL_STATE(72)] = 1340,
  [SMALL_STATE(73)] = 1353,
  [SMALL_STATE(74)] = 1361,
  [SMALL_STATE(75)] = 1375,
  [SMALL_STATE(76)] = 1389,
  [SMALL_STATE(77)] = 1403,
  [SMALL_STATE(78)] = 1417,
  [SMALL_STATE(79)] = 1429,
  [SMALL_STATE(80)] = 1441,
  [SMALL_STATE(81)] = 1455,
  [SMALL_STATE(82)] = 1467,
  [SMALL_STATE(83)] = 1479,
  [SMALL_STATE(84)] = 1491,
  [SMALL_STATE(85)] = 1503,
  [SMALL_STATE(86)] = 1515,
  [SMALL_STATE(87)] = 1529,
  [SMALL_STATE(88)] = 1537,
  [SMALL_STATE(89)] = 1549,
  [SMALL_STATE(90)] = 1561,
  [SMALL_STATE(91)] = 1570,
  [SMALL_STATE(92)] = 1579,
  [SMALL_STATE(93)] = 1586,
  [SMALL_STATE(94)] = 1597,
  [SMALL_STATE(95)] = 1610,
  [SMALL_STATE(96)] = 1617,
  [SMALL_STATE(97)] = 1626,
  [SMALL_STATE(98)] = 1635,
  [SMALL_STATE(99)] = 1644,
  [SMALL_STATE(100)] = 1653,
  [SMALL_STATE(101)] = 1662,
  [SMALL_STATE(102)] = 1671,
  [SMALL_STATE(103)] = 1677,
  [SMALL_STATE(104)] = 1683,
  [SMALL_STATE(105)] = 1689,
  [SMALL_STATE(106)] = 1699,
  [SMALL_STATE(107)] = 1707,
  [SMALL_STATE(108)] = 1714,
  [SMALL_STATE(109)] = 1721,
  [SMALL_STATE(110)] = 1728,
  [SMALL_STATE(111)] = 1735,
  [SMALL_STATE(112)] = 1742,
  [SMALL_STATE(113)] = 1749,
  [SMALL_STATE(114)] = 1756,
  [SMALL_STATE(115)] = 1763,
  [SMALL_STATE(116)] = 1770,
  [SMALL_STATE(117)] = 1777,
  [SMALL_STATE(118)] = 1784,
  [SMALL_STATE(119)] = 1791,
  [SMALL_STATE(120)] = 1798,
  [SMALL_STATE(121)] = 1805,
  [SMALL_STATE(122)] = 1810,
  [SMALL_STATE(123)] = 1817,
  [SMALL_STATE(124)] = 1821,
  [SMALL_STATE(125)] = 1825,
  [SMALL_STATE(126)] = 1829,
  [SMALL_STATE(127)] = 1833,
  [SMALL_STATE(128)] = 1837,
  [SMALL_STATE(129)] = 1841,
  [SMALL_STATE(130)] = 1845,
  [SMALL_STATE(131)] = 1849,
  [SMALL_STATE(132)] = 1853,
  [SMALL_STATE(133)] = 1857,
  [SMALL_STATE(134)] = 1861,
  [SMALL_STATE(135)] = 1865,
  [SMALL_STATE(136)] = 1869,
  [SMALL_STATE(137)] = 1873,
  [SMALL_STATE(138)] = 1877,
  [SMALL_STATE(139)] = 1881,
  [SMALL_STATE(140)] = 1885,
  [SMALL_STATE(141)] = 1889,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(120),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abbreviated_iri, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(114),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_annotated_list, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_annotated_list, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_iri, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotations, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abbreviated_iri, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_iri, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(9),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_target, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_target, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 2), SHIFT_REPEAT(3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_annotated_list, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_annotated_list_repeat1, 2), SHIFT_REPEAT(116),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihier_part, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_frame_repeat1, 2), SHIFT_REPEAT(2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ipath_abempty, 2), SHIFT_REPEAT(110),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_annotated_list_repeat1, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_frame, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(125),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ihost, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iuserinfo, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iri_rfc3987, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iauthority, 5),
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

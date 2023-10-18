#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  anon_sym_Datatype_COLON = 10,
  anon_sym_COLON = 11,
  sym_scheme = 12,
  anon_sym_SLASH_SLASH = 13,
  anon_sym_AT = 14,
  sym_iunreserved = 15,
  sym_port = 16,
  anon_sym_SLASH = 17,
  sym_iquery = 18,
  sym_ifragment = 19,
  sym__pn_local = 20,
  sym_source_file = 21,
  sym_iri = 22,
  sym_full_iri = 23,
  sym_simple_iri = 24,
  sym_datatype = 25,
  sym__datatype_iri = 26,
  sym_ontology_document = 27,
  sym_ontology = 28,
  sym_frame = 29,
  sym_prefix_declaration = 30,
  sym_datatype_frame = 31,
  sym_iri_rfc3987 = 32,
  sym_ihier_part = 33,
  sym_iauthority = 34,
  sym_iuserinfo = 35,
  sym_ihost = 36,
  sym_ipath_abempty = 37,
  sym_isegment = 38,
  aux_sym_ontology_document_repeat1 = 39,
  aux_sym_ontology_repeat1 = 40,
  aux_sym_ipath_abempty_repeat1 = 41,
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
  [anon_sym_Datatype_COLON] = "Datatype:",
  [anon_sym_COLON] = ":",
  [sym_scheme] = "scheme",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_AT] = "@",
  [sym_iunreserved] = "iunreserved",
  [sym_port] = "port",
  [anon_sym_SLASH] = "/",
  [sym_iquery] = "iquery",
  [sym_ifragment] = "ifragment",
  [sym__pn_local] = "_pn_local",
  [sym_source_file] = "source_file",
  [sym_iri] = "iri",
  [sym_full_iri] = "full_iri",
  [sym_simple_iri] = "simple_iri",
  [sym_datatype] = "datatype",
  [sym__datatype_iri] = "_datatype_iri",
  [sym_ontology_document] = "ontology_document",
  [sym_ontology] = "ontology",
  [sym_frame] = "frame",
  [sym_prefix_declaration] = "prefix_declaration",
  [sym_datatype_frame] = "datatype_frame",
  [sym_iri_rfc3987] = "iri_rfc3987",
  [sym_ihier_part] = "ihier_part",
  [sym_iauthority] = "iauthority",
  [sym_iuserinfo] = "iuserinfo",
  [sym_ihost] = "ihost",
  [sym_ipath_abempty] = "ipath_abempty",
  [sym_isegment] = "isegment",
  [aux_sym_ontology_document_repeat1] = "ontology_document_repeat1",
  [aux_sym_ontology_repeat1] = "ontology_repeat1",
  [aux_sym_ipath_abempty_repeat1] = "ipath_abempty_repeat1",
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
  [anon_sym_Datatype_COLON] = anon_sym_Datatype_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_scheme] = sym_scheme,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_AT] = anon_sym_AT,
  [sym_iunreserved] = sym_iunreserved,
  [sym_port] = sym_port,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_iquery] = sym_iquery,
  [sym_ifragment] = sym_ifragment,
  [sym__pn_local] = sym__pn_local,
  [sym_source_file] = sym_source_file,
  [sym_iri] = sym_iri,
  [sym_full_iri] = sym_full_iri,
  [sym_simple_iri] = sym_simple_iri,
  [sym_datatype] = sym_datatype,
  [sym__datatype_iri] = sym__datatype_iri,
  [sym_ontology_document] = sym_ontology_document,
  [sym_ontology] = sym_ontology,
  [sym_frame] = sym_frame,
  [sym_prefix_declaration] = sym_prefix_declaration,
  [sym_datatype_frame] = sym_datatype_frame,
  [sym_iri_rfc3987] = sym_iri_rfc3987,
  [sym_ihier_part] = sym_ihier_part,
  [sym_iauthority] = sym_iauthority,
  [sym_iuserinfo] = sym_iuserinfo,
  [sym_ihost] = sym_ihost,
  [sym_ipath_abempty] = sym_ipath_abempty,
  [sym_isegment] = sym_isegment,
  [aux_sym_ontology_document_repeat1] = aux_sym_ontology_document_repeat1,
  [aux_sym_ontology_repeat1] = aux_sym_ontology_repeat1,
  [aux_sym_ipath_abempty_repeat1] = aux_sym_ipath_abempty_repeat1,
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
  [anon_sym_Datatype_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme] = {
    .visible = true,
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
  [sym_iunreserved] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_iquery] = {
    .visible = true,
    .named = true,
  },
  [sym_ifragment] = {
    .visible = true,
    .named = true,
  },
  [sym__pn_local] = {
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
  [sym_datatype_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_iri_rfc3987] = {
    .visible = true,
    .named = true,
  },
  [sym_ihier_part] = {
    .visible = true,
    .named = true,
  },
  [sym_iauthority] = {
    .visible = true,
    .named = true,
  },
  [sym_iuserinfo] = {
    .visible = true,
    .named = true,
  },
  [sym_ihost] = {
    .visible = true,
    .named = true,
  },
  [sym_ipath_abempty] = {
    .visible = true,
    .named = true,
  },
  [sym_isegment] = {
    .visible = true,
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
  [aux_sym_ipath_abempty_repeat1] = {
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
  [31] = 31,
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
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'P') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(16);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_prefix_name);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_Ontology_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_Prefix_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_Datatype_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_iunreserved);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_iquery);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ifragment);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'x') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'y') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == 'y') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__pn_local);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 46},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 29},
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
    [anon_sym_Datatype_COLON] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_iquery] = ACTIONS(1),
    [sym_ifragment] = ACTIONS(1),
    [sym__pn_local] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_ontology_document] = STATE(40),
    [sym_ontology] = STATE(39),
    [sym_prefix_declaration] = STATE(7),
    [aux_sym_ontology_document_repeat1] = STATE(7),
    [anon_sym_Ontology_COLON] = ACTIONS(3),
    [anon_sym_Prefix_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym__pn_local,
    STATE(32), 1,
      sym_datatype,
    STATE(25), 2,
      sym_full_iri,
      sym_simple_iri,
    STATE(27), 2,
      sym_iri,
      sym__datatype_iri,
    ACTIONS(9), 4,
      anon_sym_integer,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_string,
  [24] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_Datatype_COLON,
    STATE(29), 1,
      sym_datatype_frame,
    STATE(3), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
  [38] = 4,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      anon_sym_Datatype_COLON,
    STATE(29), 1,
      sym_datatype_frame,
    STATE(8), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
  [52] = 3,
    ACTIONS(24), 1,
      anon_sym_SLASH,
    STATE(5), 1,
      aux_sym_ipath_abempty_repeat1,
    ACTIONS(22), 3,
      anon_sym_GT,
      sym_iquery,
      sym_ifragment,
  [64] = 3,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(5), 1,
      aux_sym_ipath_abempty_repeat1,
    ACTIONS(27), 3,
      anon_sym_GT,
      sym_iquery,
      sym_ifragment,
  [76] = 4,
    ACTIONS(3), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(5), 1,
      anon_sym_Prefix_COLON,
    STATE(33), 1,
      sym_ontology,
    STATE(11), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [90] = 4,
    ACTIONS(20), 1,
      anon_sym_Datatype_COLON,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_datatype_frame,
    STATE(3), 2,
      sym_frame,
      aux_sym_ontology_repeat1,
  [104] = 1,
    ACTIONS(22), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_iquery,
      sym_ifragment,
  [111] = 1,
    ACTIONS(33), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_iquery,
      sym_ifragment,
  [118] = 3,
    ACTIONS(35), 1,
      anon_sym_Ontology_COLON,
    ACTIONS(37), 1,
      anon_sym_Prefix_COLON,
    STATE(11), 2,
      sym_prefix_declaration,
      aux_sym_ontology_document_repeat1,
  [129] = 4,
    ACTIONS(40), 1,
      sym_iunreserved,
    STATE(15), 1,
      sym_iauthority,
    STATE(30), 1,
      sym_ihost,
    STATE(36), 1,
      sym_iuserinfo,
  [142] = 1,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
      anon_sym_Datatype_COLON,
  [149] = 1,
    ACTIONS(44), 3,
      anon_sym_GT,
      sym_iquery,
      sym_ifragment,
  [155] = 3,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(6), 1,
      aux_sym_ipath_abempty_repeat1,
    STATE(14), 1,
      sym_ipath_abempty,
  [165] = 2,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(46), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [173] = 3,
    ACTIONS(50), 1,
      anon_sym_GT,
    ACTIONS(52), 1,
      sym_iquery,
    ACTIONS(54), 1,
      sym_ifragment,
  [183] = 2,
    ACTIONS(56), 1,
      sym_iunreserved,
    STATE(9), 1,
      sym_isegment,
  [190] = 2,
    ACTIONS(7), 1,
      anon_sym_LT,
    STATE(20), 1,
      sym_full_iri,
  [197] = 1,
    ACTIONS(58), 2,
      anon_sym_Ontology_COLON,
      anon_sym_Prefix_COLON,
  [202] = 2,
    ACTIONS(60), 1,
      anon_sym_COLON,
    ACTIONS(62), 1,
      anon_sym_SLASH,
  [209] = 1,
    ACTIONS(46), 2,
      anon_sym_COLON,
      anon_sym_SLASH,
  [214] = 2,
    ACTIONS(64), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_ihier_part,
  [221] = 2,
    ACTIONS(66), 1,
      sym_iunreserved,
    STATE(21), 1,
      sym_ihost,
  [228] = 1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
  [233] = 1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
  [238] = 1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
  [243] = 2,
    ACTIONS(74), 1,
      sym_scheme,
    STATE(43), 1,
      sym_iri_rfc3987,
  [250] = 1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
  [255] = 2,
    ACTIONS(78), 1,
      anon_sym_COLON,
    ACTIONS(80), 1,
      anon_sym_SLASH,
  [262] = 2,
    ACTIONS(82), 1,
      anon_sym_GT,
    ACTIONS(84), 1,
      sym_ifragment,
  [269] = 1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_Datatype_COLON,
  [274] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [278] = 1,
    ACTIONS(82), 1,
      anon_sym_GT,
  [282] = 1,
    ACTIONS(90), 1,
      anon_sym_COLON,
  [286] = 1,
    ACTIONS(92), 1,
      anon_sym_AT,
  [290] = 1,
    ACTIONS(94), 1,
      sym_port,
  [294] = 1,
    ACTIONS(96), 1,
      anon_sym_GT,
  [298] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [302] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [306] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [310] = 1,
    ACTIONS(104), 1,
      sym_prefix_name,
  [314] = 1,
    ACTIONS(106), 1,
      anon_sym_GT,
  [318] = 1,
    ACTIONS(62), 1,
      anon_sym_SLASH,
  [322] = 1,
    ACTIONS(108), 1,
      sym_port,
  [326] = 1,
    ACTIONS(110), 1,
      anon_sym_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 155,
  [SMALL_STATE(16)] = 165,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 183,
  [SMALL_STATE(19)] = 190,
  [SMALL_STATE(20)] = 197,
  [SMALL_STATE(21)] = 202,
  [SMALL_STATE(22)] = 209,
  [SMALL_STATE(23)] = 214,
  [SMALL_STATE(24)] = 221,
  [SMALL_STATE(25)] = 228,
  [SMALL_STATE(26)] = 233,
  [SMALL_STATE(27)] = 238,
  [SMALL_STATE(28)] = 243,
  [SMALL_STATE(29)] = 250,
  [SMALL_STATE(30)] = 255,
  [SMALL_STATE(31)] = 262,
  [SMALL_STATE(32)] = 269,
  [SMALL_STATE(33)] = 274,
  [SMALL_STATE(34)] = 278,
  [SMALL_STATE(35)] = 282,
  [SMALL_STATE(36)] = 286,
  [SMALL_STATE(37)] = 290,
  [SMALL_STATE(38)] = 294,
  [SMALL_STATE(39)] = 298,
  [SMALL_STATE(40)] = 302,
  [SMALL_STATE(41)] = 306,
  [SMALL_STATE(42)] = 310,
  [SMALL_STATE(43)] = 314,
  [SMALL_STATE(44)] = 318,
  [SMALL_STATE(45)] = 322,
  [SMALL_STATE(46)] = 326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ipath_abempty_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ipath_abempty_repeat1, 2), SHIFT_REPEAT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipath_abempty, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isegment, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ontology_document_repeat1, 2), SHIFT_REPEAT(42),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_iri, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ihier_part, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ihost, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iuserinfo, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_rfc3987, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_declaration, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iauthority, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_iri, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iauthority, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_rfc3987, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_frame, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_rfc3987, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ontology_document, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iauthority, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_YOUR_LANGUAGE_NAME(void) {
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

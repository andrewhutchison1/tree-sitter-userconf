#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COMMA = 1,
  aux_sym__separator_token1 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_unquoted_string = 7,
  sym_quoted_string = 8,
  sym_comment = 9,
  sym_document = 10,
  sym__separator = 11,
  sym__value = 12,
  sym_record = 13,
  sym__record_body = 14,
  sym_record_entry = 15,
  sym_list = 16,
  sym__list_body = 17,
  aux_sym__record_body_repeat1 = 18,
  aux_sym__list_body_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [aux_sym__separator_token1] = "_separator_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_unquoted_string] = "unquoted_string",
  [sym_quoted_string] = "quoted_string",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__separator] = "_separator",
  [sym__value] = "_value",
  [sym_record] = "record",
  [sym__record_body] = "_record_body",
  [sym_record_entry] = "record_entry",
  [sym_list] = "list",
  [sym__list_body] = "_list_body",
  [aux_sym__record_body_repeat1] = "_record_body_repeat1",
  [aux_sym__list_body_repeat1] = "_list_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__separator_token1] = aux_sym__separator_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__separator] = sym__separator,
  [sym__value] = sym__value,
  [sym_record] = sym_record,
  [sym__record_body] = sym__record_body,
  [sym_record_entry] = sym_record_entry,
  [sym_list] = sym_list,
  [sym__list_body] = sym__list_body,
  [aux_sym__record_body_repeat1] = aux_sym__record_body_repeat1,
  [aux_sym__list_body_repeat1] = aux_sym__list_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__separator_token1] = {
    .visible = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym__record_body] = {
    .visible = false,
    .named = true,
  },
  [sym_record_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__list_body] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__record_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_unquoted_string_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < ','
        ? c == '"'
        : c <= ',')))
    : (c <= ';' || (c < ']'
      ? (c < '['
        ? c == '>'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 't') ||
          lookahead == 'v' ||
          lookahead == 'w' ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__separator_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_unquoted_string] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(26),
    [sym__record_body] = STATE(27),
    [sym_record_entry] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_unquoted_string] = ACTIONS(7),
    [sym_quoted_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__list_body,
    ACTIONS(15), 2,
      sym_unquoted_string,
      sym_quoted_string,
    STATE(10), 3,
      sym__value,
      sym_record,
      sym_list,
  [25] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 2,
      sym_unquoted_string,
      sym_quoted_string,
    STATE(23), 3,
      sym__value,
      sym_record,
      sym_list,
  [47] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 2,
      sym_unquoted_string,
      sym_quoted_string,
    STATE(23), 3,
      sym__value,
      sym_record,
      sym_list,
  [69] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 2,
      sym_unquoted_string,
      sym_quoted_string,
    STATE(21), 3,
      sym__value,
      sym_record,
      sym_list,
  [88] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 2,
      sym_unquoted_string,
      sym_quoted_string,
    STATE(23), 3,
      sym__value,
      sym_record,
      sym_list,
  [107] = 6,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym__separator_token1,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym__record_body_repeat1,
    STATE(14), 1,
      sym__separator,
    ACTIONS(27), 2,
      anon_sym_COMMA,
      sym_comment,
  [127] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym__separator_token1,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__record_body_repeat1,
    STATE(11), 1,
      sym__separator,
    ACTIONS(35), 2,
      anon_sym_COMMA,
      sym_comment,
  [147] = 6,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      aux_sym__separator_token1,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym__record_body_repeat1,
    STATE(22), 1,
      sym__separator,
    ACTIONS(43), 2,
      anon_sym_COMMA,
      sym_comment,
  [167] = 5,
    ACTIONS(53), 1,
      aux_sym__separator_token1,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__separator,
    STATE(16), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      sym_comment,
  [184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_record_entry,
    ACTIONS(7), 2,
      sym_unquoted_string,
      sym_quoted_string,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [199] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(59), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [210] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(63), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_record_entry,
    ACTIONS(7), 2,
      sym_unquoted_string,
      sym_quoted_string,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [236] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(69), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [247] = 5,
    ACTIONS(73), 1,
      aux_sym__separator_token1,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__separator,
    STATE(19), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      sym_comment,
  [264] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(79), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_record_entry,
    STATE(24), 1,
      sym__record_body,
    ACTIONS(7), 2,
      sym_unquoted_string,
      sym_quoted_string,
  [292] = 5,
    ACTIONS(86), 1,
      aux_sym__separator_token1,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym__separator,
    STATE(19), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      sym_comment,
  [309] = 2,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(49), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_comment,
  [319] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_comment,
  [329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_record_entry,
    ACTIONS(7), 2,
      sym_unquoted_string,
      sym_quoted_string,
  [340] = 2,
    ACTIONS(95), 1,
      aux_sym__separator_token1,
    ACTIONS(89), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
  [356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
  [363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 221,
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 247,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 292,
  [SMALL_STATE(20)] = 309,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 356,
  [SMALL_STATE(26)] = 363,
  [SMALL_STATE(27)] = 370,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_body, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_body, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_body, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_body, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__record_body_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__record_body_repeat1, 2), SHIFT_REPEAT(22),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__record_body_repeat1, 2), SHIFT_REPEAT(22),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__record_body_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_body, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_body, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_body_repeat1, 2), SHIFT_REPEAT(6),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_body_repeat1, 2), SHIFT_REPEAT(6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_body_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_entry, 2, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_entry, 2, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_body_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_userconf(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

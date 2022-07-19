#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  sym__multiline_line = 9,
  sym_comment = 10,
  sym_document = 11,
  sym__separator = 12,
  sym__value = 13,
  sym_record = 14,
  sym__record_body = 15,
  sym_record_entry = 16,
  sym_list = 17,
  sym__list_body = 18,
  sym_multiline_string = 19,
  aux_sym__record_body_repeat1 = 20,
  aux_sym__list_body_repeat1 = 21,
  aux_sym_multiline_string_repeat1 = 22,
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
  [sym__multiline_line] = "_multiline_line",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__separator] = "_separator",
  [sym__value] = "_value",
  [sym_record] = "record",
  [sym__record_body] = "_record_body",
  [sym_record_entry] = "record_entry",
  [sym_list] = "list",
  [sym__list_body] = "_list_body",
  [sym_multiline_string] = "multiline_string",
  [aux_sym__record_body_repeat1] = "_record_body_repeat1",
  [aux_sym__list_body_repeat1] = "_list_body_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
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
  [sym__multiline_line] = sym__multiline_line,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__separator] = sym__separator,
  [sym__value] = sym__value,
  [sym_record] = sym_record,
  [sym__record_body] = sym__record_body,
  [sym_record_entry] = sym_record_entry,
  [sym_list] = sym_list,
  [sym__list_body] = sym__list_body,
  [sym_multiline_string] = sym_multiline_string,
  [aux_sym__record_body_repeat1] = aux_sym__record_body_repeat1,
  [aux_sym__list_body_repeat1] = aux_sym__list_body_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
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
  [sym__multiline_line] = {
    .visible = false,
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
  [sym_multiline_string] = {
    .visible = true,
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
  [aux_sym_multiline_string_repeat1] = {
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
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 't') ||
          lookahead == 'v' ||
          lookahead == 'w' ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 't') ||
          lookahead == 'v' ||
          lookahead == 'w' ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__separator_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__multiline_line);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__multiline_line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__multiline_line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__multiline_line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__multiline_line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__multiline_line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__multiline_line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
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
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
    [sym__multiline_line] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(28),
    [sym__record_body] = STATE(29),
    [sym_record_entry] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_unquoted_string] = ACTIONS(7),
    [sym_quoted_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(14),
    [sym_record] = STATE(14),
    [sym_list] = STATE(14),
    [sym__list_body] = STATE(27),
    [sym_multiline_string] = STATE(14),
    [aux_sym_multiline_string_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_unquoted_string] = ACTIONS(15),
    [sym_quoted_string] = ACTIONS(15),
    [sym__multiline_line] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(25),
    [sym_record] = STATE(25),
    [sym_list] = STATE(25),
    [sym_multiline_string] = STATE(25),
    [aux_sym_multiline_string_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(19),
    [sym_unquoted_string] = ACTIONS(21),
    [sym_quoted_string] = ACTIONS(21),
    [sym__multiline_line] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(25),
    [sym_record] = STATE(25),
    [sym_list] = STATE(25),
    [sym_multiline_string] = STATE(25),
    [aux_sym_multiline_string_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_unquoted_string] = ACTIONS(21),
    [sym_quoted_string] = ACTIONS(21),
    [sym__multiline_line] = ACTIONS(17),
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
    ACTIONS(17), 1,
      sym__multiline_line,
    STATE(7), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(25), 2,
      sym_unquoted_string,
      sym_quoted_string,
    STATE(23), 4,
      sym__value,
      sym_record,
      sym_list,
      sym_multiline_string,
  [26] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym__multiline_line,
    STATE(7), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(21), 2,
      sym_unquoted_string,
      sym_quoted_string,
    STATE(25), 4,
      sym__value,
      sym_record,
      sym_list,
      sym_multiline_string,
  [52] = 4,
    ACTIONS(31), 1,
      sym__multiline_line,
    STATE(8), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(29), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [69] = 4,
    ACTIONS(37), 1,
      sym__multiline_line,
    STATE(8), 1,
      aux_sym_multiline_string_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(35), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [86] = 6,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym__separator_token1,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym__record_body_repeat1,
    STATE(16), 1,
      sym__separator,
    ACTIONS(42), 2,
      anon_sym_COMMA,
      sym_comment,
  [106] = 6,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym__separator_token1,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym__record_body_repeat1,
    STATE(24), 1,
      sym__separator,
    ACTIONS(50), 2,
      anon_sym_COMMA,
      sym_comment,
  [126] = 6,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym__separator_token1,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym__record_body_repeat1,
    STATE(15), 1,
      sym__separator,
    ACTIONS(60), 2,
      anon_sym_COMMA,
      sym_comment,
  [146] = 2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(68), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [157] = 2,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(72), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [168] = 5,
    ACTIONS(76), 1,
      aux_sym__separator_token1,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__separator,
    STATE(18), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      sym_comment,
  [185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_record_entry,
    ACTIONS(7), 2,
      sym_unquoted_string,
      sym_quoted_string,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_record_entry,
    ACTIONS(7), 2,
      sym_unquoted_string,
      sym_quoted_string,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [215] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(84), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [226] = 5,
    ACTIONS(88), 1,
      aux_sym__separator_token1,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__separator,
    STATE(21), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      sym_comment,
  [243] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(94), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_record_entry,
    STATE(26), 1,
      sym__record_body,
    ACTIONS(7), 2,
      sym_unquoted_string,
      sym_quoted_string,
  [271] = 5,
    ACTIONS(101), 1,
      aux_sym__separator_token1,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym__separator,
    STATE(21), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      sym_comment,
  [288] = 2,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(56), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_comment,
  [298] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(108), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_comment,
  [308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_record_entry,
    ACTIONS(7), 2,
      sym_unquoted_string,
      sym_quoted_string,
  [319] = 2,
    ACTIONS(110), 1,
      aux_sym__separator_token1,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 146,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 215,
  [SMALL_STATE(18)] = 226,
  [SMALL_STATE(19)] = 243,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 271,
  [SMALL_STATE(22)] = 288,
  [SMALL_STATE(23)] = 298,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 319,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 342,
  [SMALL_STATE(29)] = 349,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_body, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_body, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_body, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__record_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__record_body_repeat1, 2), SHIFT_REPEAT(24),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__record_body_repeat1, 2), SHIFT_REPEAT(24),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__record_body_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_body, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_body, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_body, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_body_repeat1, 2), SHIFT_REPEAT(6),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_body_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_body_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_entry, 2, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_entry, 2, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_body_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
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

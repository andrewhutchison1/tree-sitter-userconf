#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_unquoted_string = 9,
  anon_sym_DQUOTE = 10,
  sym__quoted_string_char = 11,
  anon_sym_GT_GT = 12,
  sym__eol_string_char = 13,
  sym_escape_sequence = 14,
  sym_comment = 15,
  sym_document = 16,
  sym__separator = 17,
  sym_record = 18,
  sym__record_body = 19,
  sym_record_entry = 20,
  sym__record_key = 21,
  sym_list = 22,
  sym__list_body = 23,
  sym_join_expression = 24,
  sym__join_expression_body = 25,
  sym__value = 26,
  sym__any_string = 27,
  sym_quoted_string = 28,
  sym_eol_string = 29,
  aux_sym__record_body_repeat1 = 30,
  aux_sym__list_body_repeat1 = 31,
  aux_sym__join_expression_body_repeat1 = 32,
  aux_sym_quoted_string_repeat1 = 33,
  aux_sym_eol_string_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [aux_sym__separator_token1] = "_separator_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_unquoted_string] = "unquoted_string",
  [anon_sym_DQUOTE] = "\"",
  [sym__quoted_string_char] = "_quoted_string_char",
  [anon_sym_GT_GT] = ">>",
  [sym__eol_string_char] = "_eol_string_char",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__separator] = "_separator",
  [sym_record] = "record",
  [sym__record_body] = "_record_body",
  [sym_record_entry] = "record_entry",
  [sym__record_key] = "_record_key",
  [sym_list] = "list",
  [sym__list_body] = "_list_body",
  [sym_join_expression] = "join_expression",
  [sym__join_expression_body] = "_join_expression_body",
  [sym__value] = "_value",
  [sym__any_string] = "_any_string",
  [sym_quoted_string] = "quoted_string",
  [sym_eol_string] = "eol_string",
  [aux_sym__record_body_repeat1] = "_record_body_repeat1",
  [aux_sym__list_body_repeat1] = "_list_body_repeat1",
  [aux_sym__join_expression_body_repeat1] = "_join_expression_body_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_eol_string_repeat1] = "eol_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__separator_token1] = aux_sym__separator_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_unquoted_string] = sym_unquoted_string,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__quoted_string_char] = sym__quoted_string_char,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym__eol_string_char] = sym__eol_string_char,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__separator] = sym__separator,
  [sym_record] = sym_record,
  [sym__record_body] = sym__record_body,
  [sym_record_entry] = sym_record_entry,
  [sym__record_key] = sym__record_key,
  [sym_list] = sym_list,
  [sym__list_body] = sym__list_body,
  [sym_join_expression] = sym_join_expression,
  [sym__join_expression_body] = sym__join_expression_body,
  [sym__value] = sym__value,
  [sym__any_string] = sym__any_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_eol_string] = sym_eol_string,
  [aux_sym__record_body_repeat1] = aux_sym__record_body_repeat1,
  [aux_sym__list_body_repeat1] = aux_sym__list_body_repeat1,
  [aux_sym__join_expression_body_repeat1] = aux_sym__join_expression_body_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_eol_string_repeat1] = aux_sym_eol_string_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__quoted_string_char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__eol_string_char] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [sym__record_key] = {
    .visible = false,
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
  [sym_join_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__join_expression_body] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__any_string] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_eol_string] = {
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
  [aux_sym__join_expression_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eol_string_repeat1] = {
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
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == ' '
        : c <= ')')))
    : (c <= ',' || (c < '['
      ? (c < '>'
        ? c == ';'
        : c <= '>')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_unquoted_string_character_set_2(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < '['
      ? (c < '>'
        ? c == ';'
        : c <= '>')
      : (c <= '[' || (c < '}'
        ? c == ']'
        : c <= '}')))));
}

static inline bool sym_unquoted_string_character_set_3(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '>'
        ? c == ';'
        : (c <= '>' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '>') ADVANCE(4);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 16:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 17:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '>') ADVANCE(4);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '>') ADVANCE(4);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(33);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__separator_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(32);
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '{') ADVANCE(14);
      if (!sym_unquoted_string_character_set_2(lookahead)) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__quoted_string_char);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__quoted_string_char);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__eol_string_char);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__eol_string_char);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (!sym_unquoted_string_character_set_3(lookahead)) ADVANCE(33);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_unquoted_string] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(47),
    [sym__record_body] = STATE(46),
    [sym_record_entry] = STATE(22),
    [sym__record_key] = STATE(6),
    [sym_quoted_string] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_unquoted_string] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_unquoted_string,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    STATE(49), 1,
      sym__list_body,
    STATE(32), 7,
      sym_record,
      sym_list,
      sym_join_expression,
      sym__value,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [37] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 1,
      sym_unquoted_string,
    STATE(44), 7,
      sym_record,
      sym_list,
      sym_join_expression,
      sym__value,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [71] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    ACTIONS(27), 1,
      sym_unquoted_string,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(44), 7,
      sym_record,
      sym_list,
      sym_join_expression,
      sym__value,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [105] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    ACTIONS(27), 1,
      sym_unquoted_string,
    STATE(44), 7,
      sym_record,
      sym_list,
      sym_join_expression,
      sym__value,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [136] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    ACTIONS(31), 1,
      sym_unquoted_string,
    STATE(41), 7,
      sym_record,
      sym_list,
      sym_join_expression,
      sym__value,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [167] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      sym_unquoted_string,
    STATE(50), 1,
      sym__join_expression_body,
    STATE(27), 4,
      sym_join_expression,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [195] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      sym_unquoted_string,
    STATE(45), 4,
      sym_join_expression,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [220] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_eol_string_repeat1,
    ACTIONS(45), 2,
      sym__eol_string_char,
      sym_escape_sequence,
    ACTIONS(43), 6,
      anon_sym_COMMA,
      aux_sym__separator_token1,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_comment,
  [239] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    ACTIONS(39), 1,
      sym_unquoted_string,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(45), 4,
      sym_join_expression,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [264] = 4,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_eol_string_repeat1,
    ACTIONS(54), 2,
      sym__eol_string_char,
      sym_escape_sequence,
    ACTIONS(52), 6,
      anon_sym_COMMA,
      aux_sym__separator_token1,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_comment,
  [283] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_eol_string_repeat1,
    ACTIONS(60), 2,
      sym__eol_string_char,
      sym_escape_sequence,
    ACTIONS(58), 6,
      anon_sym_COMMA,
      aux_sym__separator_token1,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_comment,
  [302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_GT_GT,
    ACTIONS(39), 1,
      sym_unquoted_string,
    STATE(45), 4,
      sym_join_expression,
      sym__any_string,
      sym_quoted_string,
      sym_eol_string,
  [324] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_unquoted_string,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_record_entry,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym__record_key,
      sym_quoted_string,
  [345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_unquoted_string,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_record_entry,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym__record_key,
      sym_quoted_string,
  [366] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_unquoted_string,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_record_entry,
    STATE(48), 1,
      sym__record_body,
    STATE(6), 2,
      sym__record_key,
      sym_quoted_string,
  [389] = 2,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(70), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_comment,
  [401] = 2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(74), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_comment,
  [413] = 2,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(78), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_comment,
  [425] = 6,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym__separator_token1,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym__record_body_repeat1,
    STATE(28), 1,
      sym__separator,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      sym_comment,
  [445] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(92), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_comment,
  [457] = 6,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      aux_sym__separator_token1,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym__separator,
    STATE(24), 1,
      aux_sym__record_body_repeat1,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      sym_comment,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_unquoted_string,
      anon_sym_DQUOTE,
      anon_sym_GT_GT,
  [489] = 6,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      aux_sym__separator_token1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym__separator,
    STATE(20), 1,
      aux_sym__record_body_repeat1,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      sym_comment,
  [509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_unquoted_string,
      anon_sym_DQUOTE,
      anon_sym_GT_GT,
  [521] = 5,
    ACTIONS(110), 1,
      aux_sym__separator_token1,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__separator,
    STATE(33), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      sym_comment,
  [538] = 5,
    ACTIONS(116), 1,
      aux_sym__separator_token1,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym__separator,
    STATE(31), 1,
      aux_sym__join_expression_body_repeat1,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      sym_comment,
  [555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_unquoted_string,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_record_entry,
    STATE(6), 2,
      sym__record_key,
      sym_quoted_string,
  [572] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(122), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [583] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(126), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [594] = 5,
    ACTIONS(130), 1,
      aux_sym__separator_token1,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym__separator,
    STATE(35), 1,
      aux_sym__join_expression_body_repeat1,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      sym_comment,
  [611] = 5,
    ACTIONS(136), 1,
      aux_sym__separator_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__separator,
    STATE(26), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      sym_comment,
  [628] = 5,
    ACTIONS(143), 1,
      aux_sym__separator_token1,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym__separator,
    STATE(33), 1,
      aux_sym__list_body_repeat1,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      sym_comment,
  [645] = 2,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(150), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [656] = 5,
    ACTIONS(155), 1,
      aux_sym__separator_token1,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym__separator,
    STATE(35), 1,
      aux_sym__join_expression_body_repeat1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      sym_comment,
  [673] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(162), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [684] = 4,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(166), 2,
      sym__quoted_string_char,
      sym_escape_sequence,
  [698] = 4,
    ACTIONS(168), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(172), 2,
      sym__quoted_string_char,
      sym_escape_sequence,
  [712] = 4,
    ACTIONS(168), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(176), 2,
      sym__quoted_string_char,
      sym_escape_sequence,
  [726] = 4,
    ACTIONS(168), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(180), 2,
      sym__quoted_string_char,
      sym_escape_sequence,
  [740] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_comment,
  [750] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      aux_sym__separator_token1,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_comment,
  [760] = 4,
    ACTIONS(168), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_quoted_string_repeat1,
    ACTIONS(172), 2,
      sym__quoted_string_char,
      sym_escape_sequence,
  [774] = 2,
    ACTIONS(189), 1,
      aux_sym__separator_token1,
    ACTIONS(146), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [783] = 2,
    ACTIONS(191), 1,
      aux_sym__separator_token1,
    ACTIONS(158), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_comment,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
  [813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
  [820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 167,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 239,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 283,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 389,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 413,
  [SMALL_STATE(20)] = 425,
  [SMALL_STATE(21)] = 445,
  [SMALL_STATE(22)] = 457,
  [SMALL_STATE(23)] = 477,
  [SMALL_STATE(24)] = 489,
  [SMALL_STATE(25)] = 509,
  [SMALL_STATE(26)] = 521,
  [SMALL_STATE(27)] = 538,
  [SMALL_STATE(28)] = 555,
  [SMALL_STATE(29)] = 572,
  [SMALL_STATE(30)] = 583,
  [SMALL_STATE(31)] = 594,
  [SMALL_STATE(32)] = 611,
  [SMALL_STATE(33)] = 628,
  [SMALL_STATE(34)] = 645,
  [SMALL_STATE(35)] = 656,
  [SMALL_STATE(36)] = 673,
  [SMALL_STATE(37)] = 684,
  [SMALL_STATE(38)] = 698,
  [SMALL_STATE(39)] = 712,
  [SMALL_STATE(40)] = 726,
  [SMALL_STATE(41)] = 740,
  [SMALL_STATE(42)] = 750,
  [SMALL_STATE(43)] = 760,
  [SMALL_STATE(44)] = 774,
  [SMALL_STATE(45)] = 783,
  [SMALL_STATE(46)] = 792,
  [SMALL_STATE(47)] = 799,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 813,
  [SMALL_STATE(50)] = 820,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_body, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_body, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_expression_body, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eol_string_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_eol_string_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eol_string_repeat1, 2), SHIFT_REPEAT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_expression_body, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol_string, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol_string, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol_string, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol_string, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_expression, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_join_expression, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_expression, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_join_expression, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__record_body_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__record_body_repeat1, 2), SHIFT_REPEAT(28),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__record_body_repeat1, 2), SHIFT_REPEAT(28),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__record_body_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_body, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_body, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_body, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_body, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_expression_body, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_expression_body, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_body, 1),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_body_repeat1, 2), SHIFT_REPEAT(5),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_body_repeat1, 2), SHIFT_REPEAT(5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_body_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__join_expression_body_repeat1, 2), SHIFT_REPEAT(13),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__join_expression_body_repeat1, 2), SHIFT_REPEAT(13),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__join_expression_body_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_entry, 2, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_entry, 2, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_body_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__join_expression_body_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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

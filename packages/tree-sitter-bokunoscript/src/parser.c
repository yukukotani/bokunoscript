#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LF = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_PLUS = 4,
  anon_sym_DASH = 5,
  anon_sym_STAR = 6,
  anon_sym_SLASH = 7,
  sym_number = 8,
  anon_sym_DQUOTE = 9,
  sym_unescaped_string_fragment = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_fun = 15,
  anon_sym_val = 16,
  anon_sym_EQ = 17,
  sym_identifier = 18,
  sym_source_file = 19,
  sym__statement = 20,
  sym_expression_statement = 21,
  sym__expression = 22,
  sym_parenthesized_expression = 23,
  sym_unary_expression = 24,
  sym_binary_expression = 25,
  sym_string = 26,
  sym_object_expression = 27,
  sym_object_property = 28,
  sym__property_key = 29,
  sym_function_declaration = 30,
  sym_variable_declaration = 31,
  sym_block = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_string_repeat1 = 34,
  aux_sym_object_expression_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym_unescaped_string_fragment] = "unescaped_string_fragment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_fun] = "fun",
  [anon_sym_val] = "val",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [sym_object_expression] = "object_expression",
  [sym_object_property] = "object_property",
  [sym__property_key] = "_property_key",
  [sym_function_declaration] = "function_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_object_expression_repeat1] = "object_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unescaped_string_fragment] = sym_unescaped_string_fragment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_val] = anon_sym_val,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string] = sym_string,
  [sym_object_expression] = sym_object_expression,
  [sym_object_property] = sym_object_property,
  [sym__property_key] = sym__property_key,
  [sym_function_declaration] = sym_function_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_object_expression_repeat1] = aux_sym_object_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_object_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property] = {
    .visible = true,
    .named = true,
  },
  [sym__property_key] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_expr = 1,
  field_key = 2,
  field_lhs = 3,
  field_op = 4,
  field_rhs = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expr] = "expr",
  [field_key] = "key",
  [field_lhs] = "lhs",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expr, 1},
    {field_op, 0},
  [2] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [5] =
    {field_key, 0},
    {field_value, 2},
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
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 7,
  [15] = 8,
  [16] = 12,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 26,
  [34] = 20,
  [35] = 27,
  [36] = 25,
  [37] = 37,
  [38] = 24,
  [39] = 30,
  [40] = 29,
  [41] = 37,
  [42] = 42,
  [43] = 19,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 49,
  [53] = 45,
  [54] = 47,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(4);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(8);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(34);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym__statement] = STATE(2),
    [sym_expression_statement] = STATE(65),
    [sym__expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_string] = STATE(42),
    [sym_object_expression] = STATE(42),
    [sym_function_declaration] = STATE(65),
    [sym_variable_declaration] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_val] = ACTIONS(17),
  },
  [2] = {
    [sym__statement] = STATE(6),
    [sym_expression_statement] = STATE(65),
    [sym__expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_string] = STATE(42),
    [sym_object_expression] = STATE(42),
    [sym_function_declaration] = STATE(65),
    [sym_variable_declaration] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_val] = ACTIONS(17),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_expression_statement] = STATE(63),
    [sym__expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_string] = STATE(42),
    [sym_object_expression] = STATE(42),
    [sym_function_declaration] = STATE(63),
    [sym_variable_declaration] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_DASH] = ACTIONS(24),
    [sym_number] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_fun] = ACTIONS(38),
    [anon_sym_val] = ACTIONS(41),
  },
  [4] = {
    [sym__statement] = STATE(3),
    [sym_expression_statement] = STATE(63),
    [sym__expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_string] = STATE(42),
    [sym_object_expression] = STATE(42),
    [sym_function_declaration] = STATE(63),
    [sym_variable_declaration] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_val] = ACTIONS(17),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym_expression_statement] = STATE(63),
    [sym__expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_string] = STATE(42),
    [sym_object_expression] = STATE(42),
    [sym_function_declaration] = STATE(63),
    [sym_variable_declaration] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_val] = ACTIONS(17),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym_expression_statement] = STATE(65),
    [sym__expression] = STATE(42),
    [sym_parenthesized_expression] = STATE(42),
    [sym_unary_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_string] = STATE(42),
    [sym_object_expression] = STATE(42),
    [sym_function_declaration] = STATE(65),
    [sym_variable_declaration] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_DASH] = ACTIONS(24),
    [sym_number] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_fun] = ACTIONS(38),
    [anon_sym_val] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      sym_number,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(26), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [25] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(32), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [50] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym_number,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(41), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [75] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(44), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [100] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym_number,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(31), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [125] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(30), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [150] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_number,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(37), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [175] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(33), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [200] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      sym_number,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(28), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [225] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(39), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [250] = 1,
    ACTIONS(76), 9,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_fun,
      anon_sym_val,
  [262] = 1,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_fun,
      anon_sym_val,
  [274] = 1,
    ACTIONS(78), 8,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [285] = 1,
    ACTIONS(80), 8,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [296] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_expression_repeat1,
    STATE(53), 1,
      sym_object_property,
    STATE(59), 2,
      sym_string,
      sym__property_key,
  [319] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_object_property,
    STATE(49), 1,
      aux_sym_object_expression_repeat1,
    STATE(59), 2,
      sym_string,
      sym__property_key,
  [342] = 5,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      sym_number,
    STATE(58), 1,
      sym_object_property,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string,
      sym__property_key,
  [360] = 1,
    ACTIONS(92), 7,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [370] = 1,
    ACTIONS(94), 7,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [380] = 2,
    ACTIONS(98), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(96), 5,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [392] = 1,
    ACTIONS(100), 7,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [402] = 1,
    ACTIONS(96), 7,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [412] = 1,
    ACTIONS(102), 7,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [422] = 1,
    ACTIONS(104), 7,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [432] = 3,
    ACTIONS(98), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [445] = 2,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(110), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [455] = 3,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(112), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [467] = 2,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(114), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [477] = 2,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(116), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [487] = 2,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(118), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [497] = 3,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [509] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(122), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [519] = 2,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(124), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [529] = 2,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(126), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [539] = 3,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [551] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(112), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(132), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [563] = 2,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(134), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [573] = 3,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(112), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(132), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [585] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_object_expression_repeat1,
  [595] = 3,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      sym_unescaped_string_fragment,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [605] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_object_expression_repeat1,
  [615] = 3,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      sym_unescaped_string_fragment,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [625] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_object_expression_repeat1,
  [635] = 3,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_unescaped_string_fragment,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [645] = 3,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_unescaped_string_fragment,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [655] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_object_expression_repeat1,
  [665] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_object_expression_repeat1,
  [675] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_object_expression_repeat1,
  [685] = 3,
    ACTIONS(157), 1,
      sym_unescaped_string_fragment,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [695] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_object_expression_repeat1,
  [705] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
  [712] = 1,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [717] = 1,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [721] = 1,
    ACTIONS(174), 1,
      anon_sym_LF,
  [725] = 1,
    ACTIONS(176), 1,
      anon_sym_EQ,
  [729] = 1,
    ACTIONS(178), 1,
      anon_sym_LF,
  [733] = 1,
    ACTIONS(180), 1,
      anon_sym_LF,
  [737] = 1,
    ACTIONS(182), 1,
      anon_sym_LF,
  [741] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [745] = 1,
    ACTIONS(186), 1,
      sym_identifier,
  [749] = 1,
    ACTIONS(188), 1,
      sym_identifier,
  [753] = 1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 25,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 75,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 225,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 262,
  [SMALL_STATE(19)] = 274,
  [SMALL_STATE(20)] = 285,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 319,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 392,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 422,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 445,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 467,
  [SMALL_STATE(35)] = 477,
  [SMALL_STATE(36)] = 487,
  [SMALL_STATE(37)] = 497,
  [SMALL_STATE(38)] = 509,
  [SMALL_STATE(39)] = 519,
  [SMALL_STATE(40)] = 529,
  [SMALL_STATE(41)] = 539,
  [SMALL_STATE(42)] = 551,
  [SMALL_STATE(43)] = 563,
  [SMALL_STATE(44)] = 573,
  [SMALL_STATE(45)] = 585,
  [SMALL_STATE(46)] = 595,
  [SMALL_STATE(47)] = 605,
  [SMALL_STATE(48)] = 615,
  [SMALL_STATE(49)] = 625,
  [SMALL_STATE(50)] = 635,
  [SMALL_STATE(51)] = 645,
  [SMALL_STATE(52)] = 655,
  [SMALL_STATE(53)] = 665,
  [SMALL_STATE(54)] = 675,
  [SMALL_STATE(55)] = 685,
  [SMALL_STATE(56)] = 695,
  [SMALL_STATE(57)] = 705,
  [SMALL_STATE(58)] = 712,
  [SMALL_STATE(59)] = 717,
  [SMALL_STATE(60)] = 721,
  [SMALL_STATE(61)] = 725,
  [SMALL_STATE(62)] = 729,
  [SMALL_STATE(63)] = 733,
  [SMALL_STATE(64)] = 737,
  [SMALL_STATE(65)] = 741,
  [SMALL_STATE(66)] = 745,
  [SMALL_STATE(67)] = 749,
  [SMALL_STATE(68)] = 753,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property, 3, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2), SHIFT_REPEAT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bokunoscript(void) {
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

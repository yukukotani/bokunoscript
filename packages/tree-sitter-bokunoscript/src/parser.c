#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_DOT = 15,
  anon_sym_fun = 16,
  anon_sym_val = 17,
  anon_sym_EQ = 18,
  sym_identifier = 19,
  sym_source_file = 20,
  sym__statement = 21,
  sym_expression_statement = 22,
  sym__expression = 23,
  sym_parenthesized_expression = 24,
  sym_unary_expression = 25,
  sym_binary_expression = 26,
  sym_string = 27,
  sym_object_expression = 28,
  sym_object_property = 29,
  sym__property_key = 30,
  sym_member_expression = 31,
  sym_function_declaration = 32,
  sym_variable_declaration = 33,
  sym_block = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_string_repeat1 = 36,
  aux_sym_object_expression_repeat1 = 37,
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
  [anon_sym_DOT] = ".",
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
  [sym_member_expression] = "member_expression",
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_member_expression] = sym_member_expression,
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
  [anon_sym_DOT] = {
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
  [sym_member_expression] = {
    .visible = true,
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
  field_object = 4,
  field_op = 5,
  field_property = 6,
  field_rhs = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expr] = "expr",
  [field_key] = "key",
  [field_lhs] = "lhs",
  [field_object] = "object",
  [field_op] = "op",
  [field_property] = "property",
  [field_rhs] = "rhs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 2},
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
    {field_object, 0},
    {field_property, 2},
  [7] =
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 8,
  [15] = 12,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 18,
  [34] = 30,
  [35] = 26,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 24,
  [40] = 23,
  [41] = 22,
  [42] = 28,
  [43] = 25,
  [44] = 19,
  [45] = 45,
  [46] = 21,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 49,
  [54] = 54,
  [55] = 47,
  [56] = 56,
  [57] = 51,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
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
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '=') ADVANCE(34);
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
      if (lookahead == '.') ADVANCE(31);
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
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(32);
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
      if (lookahead == '}') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(8);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(35);
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
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 3},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym__statement] = STATE(2),
    [sym_expression_statement] = STATE(62),
    [sym__expression] = STATE(38),
    [sym_parenthesized_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym_binary_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_object_expression] = STATE(38),
    [sym_member_expression] = STATE(38),
    [sym_function_declaration] = STATE(62),
    [sym_variable_declaration] = STATE(62),
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
    [sym_expression_statement] = STATE(62),
    [sym__expression] = STATE(38),
    [sym_parenthesized_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym_binary_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_object_expression] = STATE(38),
    [sym_member_expression] = STATE(38),
    [sym_function_declaration] = STATE(62),
    [sym_variable_declaration] = STATE(62),
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
    [sym__statement] = STATE(5),
    [sym_expression_statement] = STATE(65),
    [sym__expression] = STATE(38),
    [sym_parenthesized_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym_binary_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_object_expression] = STATE(38),
    [sym_member_expression] = STATE(38),
    [sym_function_declaration] = STATE(65),
    [sym_variable_declaration] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_val] = ACTIONS(17),
  },
  [4] = {
    [sym__statement] = STATE(3),
    [sym_expression_statement] = STATE(65),
    [sym__expression] = STATE(38),
    [sym_parenthesized_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym_binary_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_object_expression] = STATE(38),
    [sym_member_expression] = STATE(38),
    [sym_function_declaration] = STATE(65),
    [sym_variable_declaration] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_fun] = ACTIONS(15),
    [anon_sym_val] = ACTIONS(17),
  },
  [5] = {
    [sym__statement] = STATE(5),
    [sym_expression_statement] = STATE(65),
    [sym__expression] = STATE(38),
    [sym_parenthesized_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym_binary_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_object_expression] = STATE(38),
    [sym_member_expression] = STATE(38),
    [sym_function_declaration] = STATE(65),
    [sym_variable_declaration] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(28),
    [anon_sym_DASH] = ACTIONS(28),
    [sym_number] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_fun] = ACTIONS(42),
    [anon_sym_val] = ACTIONS(45),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym_expression_statement] = STATE(62),
    [sym__expression] = STATE(38),
    [sym_parenthesized_expression] = STATE(38),
    [sym_unary_expression] = STATE(38),
    [sym_binary_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_object_expression] = STATE(38),
    [sym_member_expression] = STATE(38),
    [sym_function_declaration] = STATE(62),
    [sym_variable_declaration] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(28),
    [anon_sym_DASH] = ACTIONS(28),
    [sym_number] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_fun] = ACTIONS(42),
    [anon_sym_val] = ACTIONS(45),
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
    STATE(24), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [26] = 6,
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
    STATE(40), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [52] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(35), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [78] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(26), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [104] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(45), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [130] = 6,
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
    STATE(37), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [156] = 6,
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
    STATE(31), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [182] = 6,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(23), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [208] = 6,
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
    STATE(36), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [234] = 6,
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
    STATE(39), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
      sym_member_expression,
  [260] = 1,
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
  [272] = 1,
    ACTIONS(78), 9,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT,
  [284] = 1,
    ACTIONS(80), 9,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DOT,
  [296] = 1,
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
  [308] = 1,
    ACTIONS(82), 8,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [319] = 1,
    ACTIONS(84), 8,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [330] = 2,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(86), 7,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [343] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(86), 5,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [358] = 1,
    ACTIONS(92), 8,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [369] = 2,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(94), 7,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [382] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_number,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_object_expression_repeat1,
    STATE(55), 1,
      sym_object_property,
    STATE(61), 2,
      sym_string,
      sym__property_key,
  [405] = 1,
    ACTIONS(102), 8,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [416] = 7,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_number,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_object_property,
    STATE(57), 1,
      aux_sym_object_expression_repeat1,
    STATE(61), 2,
      sym_string,
      sym__property_key,
  [439] = 1,
    ACTIONS(106), 8,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [450] = 4,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [466] = 5,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_number,
    STATE(59), 1,
      sym_object_property,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(61), 2,
      sym_string,
      sym__property_key,
  [484] = 2,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(114), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
  [495] = 2,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(116), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
  [506] = 3,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(118), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [519] = 4,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [534] = 4,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(108), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [549] = 4,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [564] = 4,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(132), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [579] = 3,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(132), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [592] = 2,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(134), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
  [603] = 2,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(136), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
  [614] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(138), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
  [625] = 2,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(140), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
  [636] = 4,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [651] = 2,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(144), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_DOT,
  [662] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_object_expression_repeat1,
  [672] = 3,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_unescaped_string_fragment,
    STATE(56), 1,
      aux_sym_string_repeat1,
  [682] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_expression_repeat1,
  [692] = 3,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_unescaped_string_fragment,
    STATE(58), 1,
      aux_sym_string_repeat1,
  [702] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_expression_repeat1,
  [712] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_expression_repeat1,
  [722] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_expression_repeat1,
  [732] = 3,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym_unescaped_string_fragment,
    STATE(54), 1,
      aux_sym_string_repeat1,
  [742] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_object_expression_repeat1,
  [752] = 3,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      sym_unescaped_string_fragment,
    STATE(54), 1,
      aux_sym_string_repeat1,
  [762] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_expression_repeat1,
  [772] = 3,
    ACTIONS(174), 1,
      sym_unescaped_string_fragment,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat1,
  [782] = 1,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [787] = 2,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
  [794] = 1,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [798] = 1,
    ACTIONS(182), 1,
      anon_sym_LF,
  [802] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [806] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [810] = 1,
    ACTIONS(188), 1,
      anon_sym_LF,
  [814] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [818] = 1,
    ACTIONS(192), 1,
      anon_sym_LF,
  [822] = 1,
    ACTIONS(194), 1,
      anon_sym_EQ,
  [826] = 1,
    ACTIONS(196), 1,
      sym_identifier,
  [830] = 1,
    ACTIONS(198), 1,
      sym_identifier,
  [834] = 1,
    ACTIONS(200), 1,
      anon_sym_LF,
  [838] = 1,
    ACTIONS(202), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 26,
  [SMALL_STATE(9)] = 52,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 182,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 234,
  [SMALL_STATE(17)] = 260,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 284,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 319,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 358,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 382,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 439,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 484,
  [SMALL_STATE(34)] = 495,
  [SMALL_STATE(35)] = 506,
  [SMALL_STATE(36)] = 519,
  [SMALL_STATE(37)] = 534,
  [SMALL_STATE(38)] = 549,
  [SMALL_STATE(39)] = 564,
  [SMALL_STATE(40)] = 579,
  [SMALL_STATE(41)] = 592,
  [SMALL_STATE(42)] = 603,
  [SMALL_STATE(43)] = 614,
  [SMALL_STATE(44)] = 625,
  [SMALL_STATE(45)] = 636,
  [SMALL_STATE(46)] = 651,
  [SMALL_STATE(47)] = 662,
  [SMALL_STATE(48)] = 672,
  [SMALL_STATE(49)] = 682,
  [SMALL_STATE(50)] = 692,
  [SMALL_STATE(51)] = 702,
  [SMALL_STATE(52)] = 712,
  [SMALL_STATE(53)] = 722,
  [SMALL_STATE(54)] = 732,
  [SMALL_STATE(55)] = 742,
  [SMALL_STATE(56)] = 752,
  [SMALL_STATE(57)] = 762,
  [SMALL_STATE(58)] = 772,
  [SMALL_STATE(59)] = 782,
  [SMALL_STATE(60)] = 787,
  [SMALL_STATE(61)] = 794,
  [SMALL_STATE(62)] = 798,
  [SMALL_STATE(63)] = 802,
  [SMALL_STATE(64)] = 806,
  [SMALL_STATE(65)] = 810,
  [SMALL_STATE(66)] = 814,
  [SMALL_STATE(67)] = 818,
  [SMALL_STATE(68)] = 822,
  [SMALL_STATE(69)] = 826,
  [SMALL_STATE(70)] = 830,
  [SMALL_STATE(71)] = 834,
  [SMALL_STATE(72)] = 838,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property, 3, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2), SHIFT_REPEAT(32),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(54),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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

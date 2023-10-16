#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_SLASH = 6,
  anon_sym_STAR_STAR = 7,
  sym_number = 8,
  anon_sym_DQUOTE = 9,
  sym_unescaped_string_fragment = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  sym_source_file = 15,
  sym__statement = 16,
  sym__expression = 17,
  sym_parenthesized_expression = 18,
  sym_unary_expression = 19,
  sym_binary_expression = 20,
  sym_string = 21,
  sym_object_expression = 22,
  sym_object_property = 23,
  sym__property_name = 24,
  aux_sym_string_repeat1 = 25,
  aux_sym_object_expression_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym_unescaped_string_fragment] = "unescaped_string_fragment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [sym_object_expression] = "object_expression",
  [sym_object_property] = "object_property",
  [sym__property_name] = "_property_name",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_object_expression_repeat1] = "object_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unescaped_string_fragment] = sym_unescaped_string_fragment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string] = sym_string,
  [sym_object_expression] = sym_object_expression,
  [sym_object_property] = sym_object_property,
  [sym__property_name] = sym__property_name,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_object_expression_repeat1] = aux_sym_object_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_STAR_STAR] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
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
  [sym__property_name] = {
    .visible = false,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(4);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
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
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__statement] = STATE(33),
    [sym__expression] = STATE(19),
    [sym_parenthesized_expression] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym_string] = STATE(19),
    [sym_object_expression] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(12), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [25] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(20), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [50] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(10), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [75] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(18), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [100] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [125] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(14), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [150] = 2,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [164] = 2,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [178] = 2,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [192] = 2,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [206] = 4,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_STAR_STAR,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [224] = 2,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [238] = 3,
    ACTIONS(47), 1,
      anon_sym_STAR_STAR,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [254] = 2,
    ACTIONS(57), 1,
      anon_sym_STAR,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [268] = 2,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [282] = 2,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [296] = 5,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_STAR_STAR,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(65), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [314] = 5,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_STAR_STAR,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [331] = 5,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_STAR_STAR,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [348] = 6,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_object_expression_repeat1,
    STATE(27), 1,
      sym_object_property,
    STATE(32), 1,
      sym__property_name,
  [367] = 4,
    ACTIONS(71), 1,
      sym_number,
    STATE(30), 1,
      sym_object_property,
    STATE(32), 1,
      sym__property_name,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [381] = 3,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_unescaped_string_fragment,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [391] = 3,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_unescaped_string_fragment,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [401] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_expression_repeat1,
  [411] = 3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_unescaped_string_fragment,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [421] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_object_expression_repeat1,
  [431] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_expression_repeat1,
  [441] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_expression_repeat1,
  [451] = 1,
    ACTIONS(99), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [456] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [460] = 1,
    ACTIONS(103), 1,
      anon_sym_COLON,
  [464] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 206,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 238,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 268,
  [SMALL_STATE(17)] = 282,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 348,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 381,
  [SMALL_STATE(24)] = 391,
  [SMALL_STATE(25)] = 401,
  [SMALL_STATE(26)] = 411,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 431,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 451,
  [SMALL_STATE(31)] = 456,
  [SMALL_STATE(32)] = 460,
  [SMALL_STATE(33)] = 464,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property, 3, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2), SHIFT_REPEAT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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

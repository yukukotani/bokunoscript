#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
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
  anon_sym_LBRACE = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACE = 11,
  anon_sym_COLON = 12,
  sym_source_file = 13,
  sym__statement = 14,
  sym__expression = 15,
  sym_parenthesized_expression = 16,
  sym_unary_expression = 17,
  sym_binary_expression = 18,
  sym_object_expression = 19,
  sym_object_property = 20,
  sym__property_name = 21,
  aux_sym_object_expression_repeat1 = 22,
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
  [sym_object_expression] = "object_expression",
  [sym_object_property] = "object_property",
  [sym__property_name] = "_property_name",
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
  [sym_object_expression] = sym_object_expression,
  [sym_object_property] = sym_object_property,
  [sym__property_name] = sym__property_name,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__statement] = STATE(28),
    [sym__expression] = STATE(19),
    [sym_parenthesized_expression] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym_object_expression] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(15), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_object_expression,
  [21] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(18), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_object_expression,
  [42] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(12), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_object_expression,
  [63] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_object_expression,
  [84] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(14), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_object_expression,
  [105] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(5), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 5,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_object_expression,
  [126] = 4,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [144] = 2,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(31), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [158] = 2,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [172] = 2,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [186] = 2,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [200] = 2,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [214] = 2,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [228] = 3,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [244] = 5,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [262] = 6,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_object_expression_repeat1,
    STATE(24), 1,
      sym_object_property,
    STATE(27), 1,
      sym__property_name,
  [281] = 5,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [298] = 5,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    ACTIONS(29), 1,
      anon_sym_STAR_STAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [315] = 4,
    ACTIONS(57), 1,
      sym_number,
    STATE(25), 1,
      sym_object_property,
    STATE(27), 1,
      sym__property_name,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [329] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_object_expression_repeat1,
  [339] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_object_expression_repeat1,
  [349] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_object_expression_repeat1,
  [359] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_object_expression_repeat1,
  [369] = 1,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [374] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [378] = 1,
    ACTIONS(80), 1,
      anon_sym_COLON,
  [382] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 329,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 359,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 374,
  [SMALL_STATE(27)] = 378,
  [SMALL_STATE(28)] = 382,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2), SHIFT_REPEAT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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

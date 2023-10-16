#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  anon_sym_fun = 15,
  sym_identifier = 16,
  sym_source_file = 17,
  sym__statement = 18,
  sym__expression = 19,
  sym_parenthesized_expression = 20,
  sym_unary_expression = 21,
  sym_binary_expression = 22,
  sym_string = 23,
  sym_object_expression = 24,
  sym_object_property = 25,
  sym__property_name = 26,
  sym_function_declaration = 27,
  sym_block = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_string_repeat1 = 30,
  aux_sym_object_expression_repeat1 = 31,
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
  [anon_sym_fun] = "fun",
  [sym_identifier] = "identifier",
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
  [sym_function_declaration] = "function_declaration",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_fun] = anon_sym_fun,
  [sym_identifier] = sym_identifier,
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
  [sym_function_declaration] = sym_function_declaration,
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
  [anon_sym_fun] = {
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
  [sym_function_declaration] = {
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
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(5);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(29);
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
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
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
    [anon_sym_fun] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__statement] = STATE(5),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_string] = STATE(22),
    [sym_object_expression] = STATE(22),
    [sym_function_declaration] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_string] = STATE(22),
    [sym_object_expression] = STATE(22),
    [sym_function_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(22),
    [anon_sym_DASH] = ACTIONS(22),
    [sym_number] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_fun] = ACTIONS(34),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_string] = STATE(22),
    [sym_object_expression] = STATE(22),
    [sym_function_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_fun] = ACTIONS(15),
  },
  [4] = {
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_string] = STATE(22),
    [sym_object_expression] = STATE(22),
    [sym_function_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_fun] = ACTIONS(15),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(22),
    [sym_unary_expression] = STATE(22),
    [sym_binary_expression] = STATE(22),
    [sym_string] = STATE(22),
    [sym_object_expression] = STATE(22),
    [sym_function_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_fun] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(43), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [19] = 2,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(47), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [38] = 3,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_STAR_STAR,
    ACTIONS(47), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [59] = 4,
    ACTIONS(51), 1,
      anon_sym_STAR_STAR,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [82] = 2,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(57), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [101] = 2,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(61), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [120] = 2,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(65), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [139] = 2,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(69), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [158] = 2,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(73), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [177] = 2,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_fun,
  [196] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(26), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [221] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(11), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [246] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(9), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [271] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(8), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [296] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(7), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [321] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(27), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_object_expression,
  [346] = 5,
    ACTIONS(51), 1,
      anon_sym_STAR_STAR,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_fun,
  [369] = 1,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_fun,
  [381] = 1,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_fun,
  [393] = 1,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_fun,
  [405] = 5,
    ACTIONS(51), 1,
      anon_sym_STAR_STAR,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [423] = 5,
    ACTIONS(51), 1,
      anon_sym_STAR_STAR,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [440] = 6,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_object_expression_repeat1,
    STATE(36), 1,
      sym_object_property,
    STATE(39), 1,
      sym__property_name,
  [459] = 4,
    ACTIONS(107), 1,
      sym_number,
    STATE(37), 1,
      sym_object_property,
    STATE(39), 1,
      sym__property_name,
    ACTIONS(113), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [473] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_object_expression_repeat1,
  [483] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_object_expression_repeat1,
  [493] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_object_expression_repeat1,
  [503] = 3,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      sym_unescaped_string_fragment,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [513] = 3,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_unescaped_string_fragment,
    STATE(33), 1,
      aux_sym_string_repeat1,
  [523] = 3,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym_unescaped_string_fragment,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [533] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_object_expression_repeat1,
  [543] = 1,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [548] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [555] = 1,
    ACTIONS(139), 1,
      anon_sym_COLON,
  [559] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [563] = 1,
    ACTIONS(143), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 19,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 59,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 177,
  [SMALL_STATE(16)] = 196,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 246,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 346,
  [SMALL_STATE(23)] = 369,
  [SMALL_STATE(24)] = 381,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 459,
  [SMALL_STATE(30)] = 473,
  [SMALL_STATE(31)] = 483,
  [SMALL_STATE(32)] = 493,
  [SMALL_STATE(33)] = 503,
  [SMALL_STATE(34)] = 513,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 533,
  [SMALL_STATE(37)] = 543,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 555,
  [SMALL_STATE(40)] = 559,
  [SMALL_STATE(41)] = 563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_expression, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_expression, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property, 3, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2), SHIFT_REPEAT(29),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_expression_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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

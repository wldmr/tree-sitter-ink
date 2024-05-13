#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 273
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 3
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  aux_sym_text_token1 = 1,
  aux_sym_text_token2 = 2,
  aux_sym_text_token3 = 3,
  aux_sym_text_token4 = 4,
  aux_sym_text_token5 = 5,
  aux_sym_text_token6 = 6,
  sym_glue = 7,
  anon_sym_LBRACE = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_AMP = 10,
  anon_sym_TILDE = 11,
  anon_sym_BANG = 12,
  aux_sym_logic_token1 = 13,
  anon_sym_PIPE = 14,
  anon_sym_RBRACE = 15,
  sym_tag = 16,
  anon_sym_BSLASH = 17,
  aux_sym_condition_token1 = 18,
  anon_sym_LBRACE2 = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  aux_sym__knot_mark_token1 = 22,
  sym__divert_mark = 23,
  anon_sym_EQ = 24,
  anon_sym_function = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_return = 28,
  anon_sym_COMMA = 29,
  aux_sym_include_token1 = 30,
  aux_sym_include_token2 = 31,
  aux_sym_expr_token1 = 32,
  anon_sym_false = 33,
  anon_sym_true = 34,
  anon_sym_not = 35,
  anon_sym_DASH = 36,
  anon_sym_STAR = 37,
  anon_sym_SLASH = 38,
  anon_sym_PLUS = 39,
  anon_sym_EQ_EQ = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_LT = 43,
  anon_sym_GT = 44,
  anon_sym_and = 45,
  anon_sym_AMP_AMP = 46,
  anon_sym_or = 47,
  anon_sym_PIPE_PIPE = 48,
  sym_identifier = 49,
  anon_sym_DOT = 50,
  sym_comment = 51,
  anon_sym_TODO = 52,
  anon_sym_COLON = 53,
  aux_sym_todo_comment_token1 = 54,
  sym__eol = 55,
  sym__block_start = 56,
  sym__block_end = 57,
  sym__error_sentinel = 58,
  sym_ink = 59,
  sym_content_block = 60,
  sym_knot_block = 61,
  sym_stitch_block = 62,
  sym__content_item = 63,
  sym_text = 64,
  sym_paragraph = 65,
  sym_flow = 66,
  sym_logic = 67,
  sym_choice = 68,
  sym_condition = 69,
  sym__choice_content = 70,
  sym__compound_choice_content = 71,
  sym_knot = 72,
  sym__knot_mark = 73,
  sym_stitch = 74,
  sym_function_declaration = 75,
  sym_code = 76,
  sym__code_stmt = 77,
  sym_return = 78,
  sym__param = 79,
  sym_params = 80,
  sym_divert = 81,
  sym_include = 82,
  sym_call = 83,
  sym__arg = 84,
  sym_args = 85,
  sym_paren = 86,
  sym_unary = 87,
  sym_binary = 88,
  sym_qualified_name = 89,
  sym_symbol = 90,
  sym_todo_comment = 91,
  aux_sym_ink_repeat1 = 92,
  aux_sym_ink_repeat2 = 93,
  aux_sym_content_block_repeat1 = 94,
  aux_sym__content_item_repeat1 = 95,
  aux_sym_text_repeat1 = 96,
  aux_sym_flow_repeat1 = 97,
  aux_sym_logic_repeat1 = 98,
  aux_sym_choice_repeat1 = 99,
  aux_sym_params_repeat1 = 100,
  aux_sym_args_repeat1 = 101,
  anon_alias_sym__flow = 102,
  alias_sym_once_only_mark = 103,
  alias_sym_shuffle_mark = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_text_token1] = "text",
  [aux_sym_text_token2] = "char",
  [aux_sym_text_token3] = "[$!&~|]",
  [aux_sym_text_token4] = "/[^/*]",
  [aux_sym_text_token5] = "-[^>]",
  [aux_sym_text_token6] = "<[^->]",
  [sym_glue] = "glue",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOLLAR] = "sequence_mark",
  [anon_sym_AMP] = "repeat_mark",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [aux_sym_logic_token1] = "logic_condition",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [sym_tag] = "tag",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_condition_token1] = "condition_token1",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__knot_mark_token1] = "knot_mark",
  [sym__divert_mark] = "_divert_mark",
  [anon_sym_EQ] = "=",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_return] = "return",
  [anon_sym_COMMA] = ",",
  [aux_sym_include_token1] = "include_token1",
  [aux_sym_include_token2] = "path",
  [aux_sym_expr_token1] = "number",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [anon_sym_not] = "not",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_and] = "and",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [anon_sym_TODO] = "TODO",
  [anon_sym_COLON] = ":",
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
  [sym__eol] = "_eol",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_ink] = "ink",
  [sym_content_block] = "content_block",
  [sym_knot_block] = "knot_block",
  [sym_stitch_block] = "stitch_block",
  [sym__content_item] = "_content_item",
  [sym_text] = "text",
  [sym_paragraph] = "paragraph",
  [sym_flow] = "flow",
  [sym_logic] = "logic",
  [sym_choice] = "choice",
  [sym_condition] = "condition",
  [sym__choice_content] = "_choice_content",
  [sym__compound_choice_content] = "_compound_choice_content",
  [sym_knot] = "knot",
  [sym__knot_mark] = "_knot_mark",
  [sym_stitch] = "stitch",
  [sym_function_declaration] = "function_declaration",
  [sym_code] = "code",
  [sym__code_stmt] = "_code_stmt",
  [sym_return] = "return",
  [sym__param] = "_param",
  [sym_params] = "params",
  [sym_divert] = "divert",
  [sym_include] = "include",
  [sym_call] = "call",
  [sym__arg] = "_arg",
  [sym_args] = "args",
  [sym_paren] = "paren",
  [sym_unary] = "unary",
  [sym_binary] = "binary",
  [sym_qualified_name] = "qualified_name",
  [sym_symbol] = "symbol",
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym_ink_repeat2] = "ink_repeat2",
  [aux_sym_content_block_repeat1] = "content_block_repeat1",
  [aux_sym__content_item_repeat1] = "_content_item_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_logic_repeat1] = "logic_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [anon_alias_sym__flow] = "_flow",
  [alias_sym_once_only_mark] = "once_only_mark",
  [alias_sym_shuffle_mark] = "shuffle_mark",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [aux_sym_text_token3] = aux_sym_text_token3,
  [aux_sym_text_token4] = aux_sym_text_token4,
  [aux_sym_text_token5] = aux_sym_text_token5,
  [aux_sym_text_token6] = aux_sym_text_token6,
  [sym_glue] = sym_glue,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_logic_token1] = aux_sym_logic_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag] = sym_tag,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__knot_mark_token1] = aux_sym__knot_mark_token1,
  [sym__divert_mark] = sym__divert_mark,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [aux_sym_include_token2] = aux_sym_include_token2,
  [aux_sym_expr_token1] = aux_sym_expr_token1,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
  [sym__eol] = sym__eol,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_ink] = sym_ink,
  [sym_content_block] = sym_content_block,
  [sym_knot_block] = sym_knot_block,
  [sym_stitch_block] = sym_stitch_block,
  [sym__content_item] = sym__content_item,
  [sym_text] = sym_text,
  [sym_paragraph] = sym_paragraph,
  [sym_flow] = sym_flow,
  [sym_logic] = sym_logic,
  [sym_choice] = sym_choice,
  [sym_condition] = sym_condition,
  [sym__choice_content] = sym__choice_content,
  [sym__compound_choice_content] = sym__compound_choice_content,
  [sym_knot] = sym_knot,
  [sym__knot_mark] = sym__knot_mark,
  [sym_stitch] = sym_stitch,
  [sym_function_declaration] = sym_function_declaration,
  [sym_code] = sym_code,
  [sym__code_stmt] = sym__code_stmt,
  [sym_return] = sym_return,
  [sym__param] = sym__param,
  [sym_params] = sym_params,
  [sym_divert] = sym_divert,
  [sym_include] = sym_include,
  [sym_call] = sym_call,
  [sym__arg] = sym__arg,
  [sym_args] = sym_args,
  [sym_paren] = sym_paren,
  [sym_unary] = sym_unary,
  [sym_binary] = sym_binary,
  [sym_qualified_name] = sym_qualified_name,
  [sym_symbol] = sym_symbol,
  [sym_todo_comment] = sym_todo_comment,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym_ink_repeat2] = aux_sym_ink_repeat2,
  [aux_sym_content_block_repeat1] = aux_sym_content_block_repeat1,
  [aux_sym__content_item_repeat1] = aux_sym__content_item_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [aux_sym_logic_repeat1] = aux_sym_logic_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [anon_alias_sym__flow] = anon_alias_sym__flow,
  [alias_sym_once_only_mark] = alias_sym_once_only_mark,
  [alias_sym_shuffle_mark] = alias_sym_shuffle_mark,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token6] = {
    .visible = true,
    .named = false,
  },
  [sym_glue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_logic_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE2] = {
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
  [aux_sym__knot_mark_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__divert_mark] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_todo_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_ink] = {
    .visible = true,
    .named = true,
  },
  [sym_content_block] = {
    .visible = true,
    .named = true,
  },
  [sym_knot_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stitch_block] = {
    .visible = true,
    .named = true,
  },
  [sym__content_item] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_logic] = {
    .visible = true,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__choice_content] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_choice_content] = {
    .visible = false,
    .named = true,
  },
  [sym_knot] = {
    .visible = true,
    .named = true,
  },
  [sym__knot_mark] = {
    .visible = false,
    .named = true,
  },
  [sym_stitch] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym__code_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym__param] = {
    .visible = false,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_divert] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [sym_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ink_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ink_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_logic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym__flow] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_once_only_mark] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_shuffle_mark] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_final = 2,
  field_main = 3,
  field_mark = 4,
  field_name = 5,
  field_op = 6,
  field_params = 7,
  field_prefix = 8,
  field_target = 9,
  field_temporary = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_final] = "final",
  [field_main] = "main",
  [field_mark] = "mark",
  [field_name] = "name",
  [field_op] = "op",
  [field_params] = "params",
  [field_prefix] = "prefix",
  [field_target] = "target",
  [field_temporary] = "temporary",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 4},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 4},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 1},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 2},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_main, 0},
  [2] =
    {field_final, 1, .inherited = true},
    {field_main, 1, .inherited = true},
    {field_mark, 0},
    {field_temporary, 1, .inherited = true},
  [6] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [9] =
    {field_name, 1},
  [10] =
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_mark, 0},
    {field_temporary, 2, .inherited = true},
  [14] =
    {field_prefix, 1},
  [15] =
    {field_op, 0},
  [16] =
    {field_final, 2},
  [17] =
    {field_temporary, 1},
  [18] =
    {field_final, 3, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_mark, 0},
    {field_temporary, 3, .inherited = true},
  [22] =
    {field_op, 1},
  [23] =
    {field_name, 0},
  [24] =
    {field_name, 2},
  [25] =
    {field_final, 3},
    {field_temporary, 1},
  [27] =
    {field_final, 3},
    {field_main, 0},
  [29] =
    {field_main, 0},
    {field_temporary, 2},
  [31] =
    {field_args, 2},
    {field_name, 0},
  [33] =
    {field_name, 2},
    {field_params, 4},
  [35] =
    {field_final, 4},
    {field_main, 0},
    {field_temporary, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym__flow,
  },
  [9] = {
    [1] = alias_sym_shuffle_mark,
  },
  [10] = {
    [1] = alias_sym_once_only_mark,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_flow, 2,
    sym_flow,
    anon_alias_sym__flow,
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
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 11,
  [14] = 11,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 18,
  [35] = 35,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 27,
  [40] = 30,
  [41] = 28,
  [42] = 32,
  [43] = 27,
  [44] = 30,
  [45] = 45,
  [46] = 28,
  [47] = 32,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 33,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 16,
  [60] = 27,
  [61] = 30,
  [62] = 62,
  [63] = 22,
  [64] = 19,
  [65] = 32,
  [66] = 23,
  [67] = 67,
  [68] = 30,
  [69] = 20,
  [70] = 28,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 71,
  [76] = 76,
  [77] = 74,
  [78] = 78,
  [79] = 71,
  [80] = 73,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 71,
  [85] = 74,
  [86] = 86,
  [87] = 83,
  [88] = 82,
  [89] = 89,
  [90] = 82,
  [91] = 83,
  [92] = 74,
  [93] = 71,
  [94] = 73,
  [95] = 73,
  [96] = 74,
  [97] = 73,
  [98] = 67,
  [99] = 82,
  [100] = 100,
  [101] = 36,
  [102] = 102,
  [103] = 103,
  [104] = 35,
  [105] = 54,
  [106] = 49,
  [107] = 103,
  [108] = 108,
  [109] = 83,
  [110] = 52,
  [111] = 58,
  [112] = 53,
  [113] = 50,
  [114] = 56,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 82,
  [123] = 83,
  [124] = 124,
  [125] = 125,
  [126] = 119,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 130,
  [134] = 124,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 136,
  [139] = 117,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 142,
  [144] = 142,
  [145] = 141,
  [146] = 146,
  [147] = 141,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 150,
  [152] = 152,
  [153] = 153,
  [154] = 142,
  [155] = 148,
  [156] = 148,
  [157] = 149,
  [158] = 150,
  [159] = 152,
  [160] = 149,
  [161] = 141,
  [162] = 152,
  [163] = 67,
  [164] = 148,
  [165] = 165,
  [166] = 166,
  [167] = 141,
  [168] = 149,
  [169] = 142,
  [170] = 152,
  [171] = 150,
  [172] = 152,
  [173] = 150,
  [174] = 149,
  [175] = 148,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 187,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 153,
  [204] = 204,
  [205] = 153,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 199,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 223,
  [227] = 227,
  [228] = 228,
  [229] = 216,
  [230] = 227,
  [231] = 219,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 217,
  [237] = 237,
  [238] = 166,
  [239] = 166,
  [240] = 240,
  [241] = 223,
  [242] = 242,
  [243] = 243,
  [244] = 219,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 247,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 260,
  [263] = 257,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 247,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
};

static inline bool aux_sym_text_token1_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '&'
      ? (c < '!'
        ? c == 0
        : (c <= '!' || (c >= '#' && c <= '$')))
      : (c <= '&' || (c < '-'
        ? (c >= '*' && c <= '+')
        : c <= '-')))
    : (c <= '/' || (c < '['
      ? (c < '>'
        ? c == '<'
        : c <= '>')
      : (c <= '[' || (c < '{'
        ? c == ']'
        : c <= '~')))));
}

static inline bool aux_sym_text_token1_character_set_2(int32_t c) {
  return (c < '*'
    ? (c < '#'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '$' || c == '&'))
    : (c <= '+' || (c < '['
      ? (c < '>'
        ? c == '-'
        : c <= '>')
      : (c <= ']' || c == '~'))));
}

static inline bool aux_sym_text_token1_character_set_3(int32_t c) {
  return (c < '*'
    ? (c < '#'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '$' || c == '&'))
    : (c <= '+' || (c < '['
      ? (c < '>'
        ? c == '-'
        : c <= '>')
      : (c <= ']' || (c >= '}' && c <= '~')))));
}

static inline bool aux_sym_text_token1_character_set_4(int32_t c) {
  return (c < '*'
    ? (c < '#'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '$' || c == '&'))
    : (c <= '+' || (c < '['
      ? (c < '>'
        ? c == '-'
        : c <= '>')
      : (c <= '[' || (c >= '|' && c <= '~')))));
}

static inline bool aux_sym_text_token1_character_set_5(int32_t c) {
  return (c < '-'
    ? (c < '#'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || c == '!'))
      : (c <= '$' || (c < '*'
        ? c == '&'
        : c <= '+')))
    : (c <= '-' || (c < '['
      ? (c < '<'
        ? c == '/'
        : (c <= '<' || c == '>'))
      : (c <= '[' || (c < '{'
        ? c == ']'
        : c <= '~')))));
}

static inline bool aux_sym_logic_token1_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '&'
      ? (c < '!'
        ? c == '\n'
        : (c <= '!' || (c >= '#' && c <= '$')))
      : (c <= '&' || (c < '-'
        ? (c >= '*' && c <= '+')
        : c <= '-')))
    : (c <= '/' || (c < '['
      ? (c < '>'
        ? c == '<'
        : c <= '>')
      : (c <= '[' || (c < '{'
        ? c == ']'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(120);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '&') ADVANCE(116);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '~') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '~') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == '{') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(120);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '&') ADVANCE(116);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(127);
      if (lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(27);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(121);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(123);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(127);
      if (lookahead == '~') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(27);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(100);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '/') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '~') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(120);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 't') ADVANCE(186);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '&') ADVANCE(173);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(136);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(199);
      END_STATE();
    case 40:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == '|') ADVANCE(175);
      END_STATE();
    case 65:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != ':') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(197);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(129);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == '*') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(106);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(120);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '&') ADVANCE(116);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(146);
      if (!aux_sym_text_token1_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(130);
      if (lookahead == '{') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(121);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '&') ADVANCE(117);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(123);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '|') ADVANCE(127);
      if (lookahead == '~') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(27);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (!aux_sym_text_token1_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (!aux_sym_text_token1_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (!aux_sym_text_token1_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '~') ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(102);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(122);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(27);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(94);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(93);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(96);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(75);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L') ADVANCE(98);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(90);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(199);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(92);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'U') ADVANCE(91);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token3);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token4);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token4);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_text_token5);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_text_token5);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_text_token6);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_text_token6);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_glue);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead == ':') ADVANCE(122);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(27);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == '*') ADVANCE(68);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '{') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__divert_mark);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(166);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_include_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(110);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(168);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == '*') ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == '*') ADVANCE(68);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == '*') ADVANCE(201);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == '*') ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 2, .external_lex_state = 3},
  [5] = {.lex_state = 2, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17, .external_lex_state = 4},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 2, .external_lex_state = 3},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17, .external_lex_state = 4},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17, .external_lex_state = 4},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 17, .external_lex_state = 4},
  [64] = {.lex_state = 17, .external_lex_state = 4},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 17, .external_lex_state = 4},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 17, .external_lex_state = 4},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 10, .external_lex_state = 4},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 10, .external_lex_state = 4},
  [82] = {.lex_state = 11, .external_lex_state = 4},
  [83] = {.lex_state = 11, .external_lex_state = 4},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 10, .external_lex_state = 4},
  [87] = {.lex_state = 6, .external_lex_state = 4},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 10, .external_lex_state = 4},
  [90] = {.lex_state = 6, .external_lex_state = 4},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 17, .external_lex_state = 4},
  [99] = {.lex_state = 10, .external_lex_state = 4},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 17, .external_lex_state = 4},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 17, .external_lex_state = 4},
  [105] = {.lex_state = 17, .external_lex_state = 4},
  [106] = {.lex_state = 17, .external_lex_state = 4},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 10, .external_lex_state = 4},
  [110] = {.lex_state = 17, .external_lex_state = 4},
  [111] = {.lex_state = 17, .external_lex_state = 4},
  [112] = {.lex_state = 17, .external_lex_state = 4},
  [113] = {.lex_state = 17, .external_lex_state = 4},
  [114] = {.lex_state = 17, .external_lex_state = 4},
  [115] = {.lex_state = 17, .external_lex_state = 4},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 16},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 16},
  [139] = {.lex_state = 16},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 6, .external_lex_state = 4},
  [143] = {.lex_state = 11, .external_lex_state = 4},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 6, .external_lex_state = 4},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 11, .external_lex_state = 4},
  [148] = {.lex_state = 6, .external_lex_state = 4},
  [149] = {.lex_state = 11, .external_lex_state = 4},
  [150] = {.lex_state = 11, .external_lex_state = 4},
  [151] = {.lex_state = 6, .external_lex_state = 4},
  [152] = {.lex_state = 11, .external_lex_state = 4},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 10, .external_lex_state = 4},
  [155] = {.lex_state = 11, .external_lex_state = 4},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 15},
  [160] = {.lex_state = 6, .external_lex_state = 4},
  [161] = {.lex_state = 10, .external_lex_state = 4},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 10, .external_lex_state = 4},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 10, .external_lex_state = 4},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 10, .external_lex_state = 4},
  [171] = {.lex_state = 10, .external_lex_state = 4},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 5},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 5},
  [185] = {.lex_state = 0, .external_lex_state = 5},
  [186] = {.lex_state = 0, .external_lex_state = 4},
  [187] = {.lex_state = 0, .external_lex_state = 5},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 20},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 5},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 0, .external_lex_state = 4},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0, .external_lex_state = 5},
  [200] = {.lex_state = 0, .external_lex_state = 4},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0, .external_lex_state = 4},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0, .external_lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 16, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 4},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0, .external_lex_state = 5},
  [212] = {.lex_state = 0, .external_lex_state = 4},
  [213] = {.lex_state = 20, .external_lex_state = 4},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 5},
  [218] = {.lex_state = 0, .external_lex_state = 5},
  [219] = {.lex_state = 0, .external_lex_state = 5},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 5},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 0, .external_lex_state = 4},
  [225] = {.lex_state = 0, .external_lex_state = 5},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 0, .external_lex_state = 5},
  [229] = {.lex_state = 0, .external_lex_state = 5},
  [230] = {.lex_state = 16},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 25},
  [233] = {.lex_state = 0, .external_lex_state = 5},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 4},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0, .external_lex_state = 4},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0, .external_lex_state = 4},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 0, .external_lex_state = 4},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 204},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 0, .external_lex_state = 4},
  [250] = {.lex_state = 20},
  [251] = {.lex_state = 0, .external_lex_state = 4},
  [252] = {.lex_state = 0, .external_lex_state = 4},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0, .external_lex_state = 4},
  [256] = {.lex_state = 0, .external_lex_state = 4},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 20},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 4},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0, .external_lex_state = 4},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 20},
  [268] = {.lex_state = 20},
  [269] = {.lex_state = 0, .external_lex_state = 4},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0, .external_lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [aux_sym_text_token3] = ACTIONS(1),
    [aux_sym_text_token4] = ACTIONS(1),
    [aux_sym_text_token5] = ACTIONS(1),
    [aux_sym_text_token6] = ACTIONS(1),
    [sym_glue] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__knot_mark_token1] = ACTIONS(1),
    [sym__divert_mark] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_include_token1] = ACTIONS(1),
    [aux_sym_expr_token1] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__block_start] = ACTIONS(1),
    [sym__block_end] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(254),
    [sym_content_block] = STATE(176),
    [sym_knot_block] = STATE(193),
    [sym_stitch_block] = STATE(177),
    [aux_sym_ink_repeat1] = STATE(177),
    [aux_sym_ink_repeat2] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__block_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(19), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(21), 1,
      sym__divert_mark,
    ACTIONS(23), 1,
      anon_sym_EQ,
    ACTIONS(25), 1,
      aux_sym_include_token1,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_TODO,
    STATE(9), 1,
      sym_symbol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    STATE(181), 1,
      sym_flow,
    STATE(199), 1,
      sym_stitch,
    STATE(200), 1,
      aux_sym__content_item_repeat1,
    STATE(232), 1,
      sym__knot_mark,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(182), 2,
      sym_knot,
      sym_function_declaration,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(264), 6,
      sym_paragraph,
      sym_choice,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [82] = 19,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      sym__divert_mark,
    ACTIONS(23), 1,
      anon_sym_EQ,
    ACTIONS(25), 1,
      aux_sym_include_token1,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_TODO,
    STATE(9), 1,
      sym_symbol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    STATE(181), 1,
      sym_flow,
    STATE(200), 1,
      aux_sym__content_item_repeat1,
    STATE(211), 1,
      sym_stitch,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(264), 6,
      sym_paragraph,
      sym_choice,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [154] = 18,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_glue,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      anon_sym_TILDE,
    ACTIONS(45), 1,
      sym_tag,
    ACTIONS(48), 1,
      sym__divert_mark,
    ACTIONS(51), 1,
      aux_sym_include_token1,
    ACTIONS(57), 1,
      anon_sym_TODO,
    ACTIONS(60), 1,
      sym__block_end,
    STATE(9), 1,
      sym_symbol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    STATE(181), 1,
      sym_flow,
    STATE(200), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(54), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(33), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(264), 6,
      sym_paragraph,
      sym_choice,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [223] = 18,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      sym__divert_mark,
    ACTIONS(25), 1,
      aux_sym_include_token1,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_TODO,
    ACTIONS(62), 1,
      sym__block_end,
    STATE(9), 1,
      sym_symbol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    STATE(181), 1,
      sym_flow,
    STATE(200), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(264), 6,
      sym_paragraph,
      sym_choice,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [292] = 18,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      sym__divert_mark,
    ACTIONS(25), 1,
      aux_sym_include_token1,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_TODO,
    ACTIONS(64), 1,
      sym__block_end,
    STATE(9), 1,
      sym_symbol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    STATE(181), 1,
      sym_flow,
    STATE(200), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(264), 6,
      sym_paragraph,
      sym_choice,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [361] = 18,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      sym__divert_mark,
    ACTIONS(25), 1,
      aux_sym_include_token1,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_TODO,
    ACTIONS(66), 1,
      sym__block_end,
    STATE(9), 1,
      sym_symbol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    STATE(181), 1,
      sym_flow,
    STATE(200), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(264), 6,
      sym_paragraph,
      sym_choice,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [430] = 17,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      sym__divert_mark,
    ACTIONS(25), 1,
      aux_sym_include_token1,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_TODO,
    STATE(9), 1,
      sym_symbol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    STATE(181), 1,
      sym_flow,
    STATE(200), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(264), 6,
      sym_paragraph,
      sym_choice,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [496] = 15,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_glue,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      aux_sym_condition_token1,
    ACTIONS(78), 1,
      anon_sym_LBRACE2,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      sym__divert_mark,
    STATE(145), 1,
      aux_sym_text_repeat1,
    STATE(186), 1,
      sym_flow,
    STATE(196), 1,
      sym__compound_choice_content,
    STATE(10), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(261), 2,
      sym__choice_content,
      sym_divert,
    STATE(90), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(68), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [551] = 15,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_glue,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      aux_sym_condition_token1,
    ACTIONS(78), 1,
      anon_sym_LBRACE2,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      sym__divert_mark,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    STATE(145), 1,
      aux_sym_text_repeat1,
    STATE(186), 1,
      sym_flow,
    STATE(196), 1,
      sym__compound_choice_content,
    STATE(72), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(255), 2,
      sym__choice_content,
      sym_divert,
    STATE(90), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(68), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [606] = 12,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_TILDE,
    ACTIONS(96), 1,
      anon_sym_BANG,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    STATE(32), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    ACTIONS(92), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [652] = 12,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_TILDE,
    ACTIONS(104), 1,
      anon_sym_BANG,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    STATE(42), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    ACTIONS(100), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [698] = 12,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_TILDE,
    ACTIONS(112), 1,
      anon_sym_BANG,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    ACTIONS(108), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [744] = 12,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_TILDE,
    ACTIONS(120), 1,
      anon_sym_BANG,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    ACTIONS(116), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [790] = 12,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_TILDE,
    ACTIONS(128), 1,
      anon_sym_BANG,
    ACTIONS(130), 1,
      anon_sym_PIPE,
    STATE(65), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    ACTIONS(124), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [836] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(132), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [876] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_BANG,
    ACTIONS(152), 1,
      sym__divert_mark,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      aux_sym_expr_token1,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(263), 1,
      sym_args,
    ACTIONS(160), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(162), 2,
      anon_sym_not,
      anon_sym_DASH,
    STATE(207), 2,
      sym_divert,
      sym__arg,
    STATE(76), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [920] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(168), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(166), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(170), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [980] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 10,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1016] = 11,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_glue,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      sym__divert_mark,
    STATE(145), 1,
      aux_sym_text_repeat1,
    STATE(186), 1,
      sym_flow,
    STATE(196), 1,
      sym__compound_choice_content,
    STATE(256), 2,
      sym__choice_content,
      sym_divert,
    STATE(90), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(68), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1058] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1092] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(132), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1130] = 11,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_glue,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      sym__divert_mark,
    STATE(145), 1,
      aux_sym_text_repeat1,
    STATE(186), 1,
      sym_flow,
    STATE(196), 1,
      sym__compound_choice_content,
    STATE(242), 2,
      sym__choice_content,
      sym_divert,
    STATE(90), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(68), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1172] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_BANG,
    ACTIONS(152), 1,
      sym__divert_mark,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      aux_sym_expr_token1,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      sym_args,
    ACTIONS(160), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(162), 2,
      anon_sym_not,
      anon_sym_DASH,
    STATE(207), 2,
      sym_divert,
      sym__arg,
    STATE(76), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1216] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(174), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1257] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1295] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1333] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1371] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1409] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1447] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1485] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(168), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(166), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1601] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1639] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1679] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1717] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1755] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1793] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1831] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1869] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1907] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__block_end,
    ACTIONS(222), 15,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_tag,
      sym__divert_mark,
      aux_sym_include_token1,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_TODO,
  [1931] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1969] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2007] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_BANG,
    ACTIONS(152), 1,
      sym__divert_mark,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      aux_sym_expr_token1,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(162), 2,
      anon_sym_not,
      anon_sym_DASH,
    STATE(237), 2,
      sym_divert,
      sym__arg,
    STATE(76), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [2045] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(132), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2107] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(132), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(166), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2227] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2291] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(238), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(250), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(244), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2331] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 10,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2361] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(238), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(132), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(244), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2399] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2437] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2475] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_glue,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(258), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2513] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 10,
      sym__eol,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(170), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2573] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2611] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(238), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(132), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2671] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2709] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(132), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2743] = 10,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2781] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2816] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_condition_token1,
    ACTIONS(289), 1,
      anon_sym_LBRACE2,
    STATE(72), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(284), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      sym__divert_mark,
  [2843] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2878] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_PIPE,
    STATE(28), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2913] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    STATE(43), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2948] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(174), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2983] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3018] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_glue,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      sym__divert_mark,
    ACTIONS(308), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(224), 1,
      sym_flow,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(300), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3053] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3088] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3123] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_glue,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      sym__divert_mark,
    ACTIONS(316), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(240), 1,
      sym_flow,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(300), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3158] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_glue,
    ACTIONS(322), 1,
      sym__eol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    ACTIONS(320), 2,
      sym_tag,
      sym__divert_mark,
    STATE(83), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3191] = 8,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_glue,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
    ACTIONS(335), 1,
      sym__eol,
    STATE(147), 1,
      aux_sym_text_repeat1,
    ACTIONS(333), 2,
      sym_tag,
      sym__divert_mark,
    STATE(83), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(324), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3224] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3259] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    STATE(46), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3294] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_glue,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      sym__divert_mark,
    ACTIONS(343), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(300), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3329] = 8,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__eol,
    ACTIONS(348), 1,
      sym_glue,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      aux_sym_text_repeat1,
    ACTIONS(333), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(87), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(345), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3362] = 7,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      sym_glue,
    STATE(141), 1,
      aux_sym_text_repeat1,
    ACTIONS(320), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3393] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_glue,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 1,
      sym__divert_mark,
    ACTIONS(358), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(221), 1,
      sym_flow,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(300), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3428] = 8,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      sym__eol,
    ACTIONS(360), 1,
      sym_glue,
    STATE(145), 1,
      aux_sym_text_repeat1,
    ACTIONS(320), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(87), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(68), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3461] = 7,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_glue,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      aux_sym_text_repeat1,
    ACTIONS(333), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(362), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3492] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3527] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3562] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3597] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    STATE(68), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3632] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3667] = 9,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_glue,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      anon_sym_PIPE,
    STATE(30), 1,
      aux_sym_logic_repeat1,
    STATE(141), 1,
      aux_sym_text_repeat1,
    STATE(146), 1,
      sym_flow,
    STATE(88), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(86), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 12,
      sym__eol,
      sym_tag,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3725] = 8,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      sym__divert_mark,
    ACTIONS(322), 1,
      sym__eol,
    ACTIONS(383), 1,
      sym_glue,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(300), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3757] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3813] = 8,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_glue,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(245), 1,
      sym_flow,
    STATE(122), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(385), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3845] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(198), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(166), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3923] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(238), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(132), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(244), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3955] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3989] = 8,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_glue,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(270), 1,
      sym_flow,
    STATE(122), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(385), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4021] = 8,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__divert_mark,
    ACTIONS(335), 1,
      sym__eol,
    ACTIONS(398), 1,
      sym_glue,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(395), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4053] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(238), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(132), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(132), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 10,
      sym__eol,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4181] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(252), 1,
      sym__eol,
    ACTIONS(238), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(248), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(250), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(244), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4215] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(144), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(146), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4249] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      aux_sym_expr_token1,
    ACTIONS(412), 1,
      anon_sym_not,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(404), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(410), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(105), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4280] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_not,
    ACTIONS(416), 1,
      aux_sym_expr_token1,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(404), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(418), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(110), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4311] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(422), 1,
      aux_sym_expr_token1,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(424), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(103), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4342] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(428), 1,
      aux_sym_expr_token1,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(430), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(52), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4373] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_condition_token1,
    ACTIONS(434), 12,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4394] = 7,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(438), 1,
      sym_glue,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(123), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(385), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4423] = 7,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(443), 1,
      sym_glue,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(123), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(440), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4452] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(449), 1,
      aux_sym_expr_token1,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(451), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(58), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4483] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_not,
    ACTIONS(455), 1,
      aux_sym_expr_token1,
    ACTIONS(459), 1,
      sym_identifier,
    ACTIONS(404), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(457), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(115), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4514] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(461), 1,
      aux_sym_expr_token1,
    ACTIONS(465), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(463), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(107), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4545] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(467), 1,
      aux_sym_expr_token1,
    ACTIONS(471), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(469), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(100), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4576] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(473), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_condition_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4595] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(475), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_condition_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4614] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_not,
    ACTIONS(477), 1,
      aux_sym_expr_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(404), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(479), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(106), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4645] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym_condition_token1,
    ACTIONS(473), 12,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4666] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(485), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_condition_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4685] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      aux_sym_expr_token1,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(489), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(49), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4716] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_not,
    ACTIONS(493), 1,
      aux_sym_expr_token1,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(404), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(495), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(111), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4747] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_not,
    ACTIONS(499), 1,
      aux_sym_expr_token1,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(404), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(501), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(112), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4778] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_not,
    ACTIONS(505), 1,
      aux_sym_expr_token1,
    ACTIONS(509), 1,
      sym_identifier,
    ACTIONS(404), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(507), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(113), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4809] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(511), 1,
      aux_sym_expr_token1,
    ACTIONS(515), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(513), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(53), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4840] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(517), 1,
      aux_sym_expr_token1,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(519), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(50), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4871] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(523), 1,
      aux_sym_expr_token1,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(525), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(54), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4902] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(529), 1,
      aux_sym_expr_token1,
    ACTIONS(533), 1,
      sym_identifier,
    ACTIONS(150), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(531), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(116), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4933] = 4,
    ACTIONS(29), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_text_repeat1,
    ACTIONS(537), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(535), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4955] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym__eol,
    STATE(142), 1,
      aux_sym_text_repeat1,
    ACTIONS(542), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(539), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4979] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym__eol,
    STATE(143), 1,
      aux_sym_text_repeat1,
    ACTIONS(542), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(546), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5003] = 4,
    ACTIONS(29), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_text_repeat1,
    ACTIONS(542), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(549), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5025] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__eol,
    STATE(142), 1,
      aux_sym_text_repeat1,
    ACTIONS(537), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(552), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5049] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__divert_mark,
    STATE(165), 1,
      sym_divert,
    ACTIONS(556), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5071] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__eol,
    STATE(143), 1,
      aux_sym_text_repeat1,
    ACTIONS(537), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(560), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5095] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__eol,
    ACTIONS(562), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5114] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__eol,
    ACTIONS(566), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
  [5133] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__eol,
    ACTIONS(570), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
  [5152] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__eol,
    ACTIONS(570), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5171] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__eol,
    ACTIONS(574), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
  [5190] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_DOT,
    ACTIONS(578), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5209] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym__eol,
    STATE(154), 1,
      aux_sym_text_repeat1,
    ACTIONS(542), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(582), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5232] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__eol,
    ACTIONS(562), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
  [5251] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(562), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
  [5268] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(566), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
  [5285] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(570), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
  [5302] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(574), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
  [5319] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__eol,
    ACTIONS(566), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5338] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__eol,
    STATE(154), 1,
      aux_sym_text_repeat1,
    ACTIONS(537), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(585), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5361] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__eol,
    ACTIONS(574), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5380] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(276), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5396] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__eol,
    ACTIONS(562), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5414] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(270), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5430] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(578), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5446] = 4,
    ACTIONS(29), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(537), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(587), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5466] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__eol,
    ACTIONS(566), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5484] = 4,
    ACTIONS(29), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(542), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(589), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5504] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__eol,
    ACTIONS(574), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5522] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__eol,
    ACTIONS(570), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5540] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(574), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [5555] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(570), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [5570] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(566), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [5585] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(562), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [5600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
    ACTIONS(594), 1,
      sym__block_start,
    STATE(180), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(191), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [5618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
    ACTIONS(594), 1,
      sym__block_start,
    STATE(190), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(191), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [5636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym__divert_mark,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(243), 1,
      sym_params,
    STATE(210), 2,
      sym__param,
      sym_divert,
  [5656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_EQ,
    ACTIONS(600), 1,
      aux_sym__knot_mark_token1,
    STATE(199), 1,
      sym_stitch,
    STATE(232), 1,
      sym__knot_mark,
    STATE(182), 2,
      sym_knot,
      sym_function_declaration,
  [5676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__block_start,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    STATE(183), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
    STATE(190), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [5694] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_tag,
    ACTIONS(606), 1,
      sym__divert_mark,
    ACTIONS(608), 1,
      sym__eol,
    STATE(195), 1,
      sym_divert,
    STATE(206), 1,
      aux_sym__content_item_repeat1,
  [5713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym__block_start,
    ACTIONS(612), 1,
      sym__block_end,
    STATE(184), 1,
      sym_content_block,
    STATE(185), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [5730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 1,
      sym__block_start,
    STATE(188), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [5744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__block_start,
    ACTIONS(620), 1,
      sym__block_end,
    STATE(194), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [5758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__block_start,
    ACTIONS(620), 1,
      sym__block_end,
    STATE(187), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [5772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__divert_mark,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      sym__eol,
    STATE(251), 1,
      sym_divert,
  [5788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__block_start,
    ACTIONS(629), 1,
      sym__block_end,
    STATE(187), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [5802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
    ACTIONS(633), 1,
      sym__block_start,
    STATE(188), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [5816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      aux_sym__knot_mark_token1,
    STATE(232), 1,
      sym__knot_mark,
    STATE(182), 2,
      sym_knot,
      sym_function_declaration,
  [5830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 1,
      sym__block_start,
    STATE(190), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [5844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 1,
      sym__block_start,
    STATE(188), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [5858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym__divert_mark,
    ACTIONS(639), 1,
      sym_identifier,
    STATE(214), 2,
      sym__param,
      sym_divert,
  [5872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 1,
      sym__block_start,
    STATE(188), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [5886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__block_start,
    ACTIONS(641), 1,
      sym__block_end,
    STATE(187), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [5900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_tag,
    ACTIONS(645), 1,
      sym__eol,
    STATE(209), 1,
      aux_sym__content_item_repeat1,
  [5913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__divert_mark,
    ACTIONS(647), 1,
      sym__eol,
    STATE(253), 1,
      sym_divert,
  [5926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_params_repeat1,
  [5939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_return,
    STATE(252), 2,
      sym__code_stmt,
      sym_return,
  [5950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__block_start,
    ACTIONS(657), 1,
      sym__block_end,
    STATE(260), 1,
      sym_content_block,
  [5963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_tag,
    ACTIONS(661), 1,
      sym__eol,
    STATE(212), 1,
      aux_sym__content_item_repeat1,
  [5976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_args_repeat1,
  [5989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_params_repeat1,
  [6002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(673), 2,
      sym__eol,
      sym_tag,
  [6013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_args_repeat1,
  [6026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(673), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym__eol,
    ACTIONS(659), 1,
      sym_tag,
    STATE(212), 1,
      aux_sym__content_item_repeat1,
  [6050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_args_repeat1,
  [6063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(683), 1,
      sym__eol,
    STATE(272), 1,
      sym__knot_mark,
  [6076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_tag,
    ACTIONS(685), 1,
      sym__eol,
    STATE(212), 1,
      aux_sym__content_item_repeat1,
  [6089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_params_repeat1,
  [6102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__block_start,
    ACTIONS(689), 1,
      sym__block_end,
    STATE(262), 1,
      sym_content_block,
  [6115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym_tag,
    ACTIONS(694), 1,
      sym__eol,
    STATE(212), 1,
      aux_sym__content_item_repeat1,
  [6128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_identifier,
    ACTIONS(698), 1,
      sym__eol,
    STATE(238), 1,
      sym_qualified_name,
  [6141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      sym__block_start,
      sym__block_end,
  [6173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym__block_start,
      sym__block_end,
  [6181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      sym__block_start,
      sym__block_end,
  [6189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      sym__eol,
      sym__divert_mark,
  [6205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      sym__block_start,
      sym__block_end,
  [6213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_identifier,
    STATE(238), 1,
      sym_qualified_name,
  [6223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      sym__eol,
      sym__divert_mark,
  [6231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      sym__block_start,
      sym__block_end,
  [6239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_identifier,
    STATE(166), 1,
      sym_qualified_name,
  [6249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym_stitch,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      sym__block_start,
      sym__block_end,
  [6267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym__block_start,
      sym__block_end,
  [6275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_EQ,
    STATE(211), 1,
      sym_stitch,
  [6285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_function,
    ACTIONS(728), 1,
      sym_identifier,
  [6303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      sym__block_start,
      sym__block_end,
  [6311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      sym__eol,
      sym__divert_mark,
  [6327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      sym__eol,
      sym_tag,
  [6351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 2,
      sym__eol,
      sym__divert_mark,
  [6367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_identifier,
    STATE(239), 1,
      sym_qualified_name,
  [6377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym__eol,
  [6384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [6391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__block_end,
  [6398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACK,
  [6405] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym_todo_comment_token1,
  [6412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_identifier,
  [6419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym__eol,
  [6426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym__eol,
  [6433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_identifier,
  [6440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym__eol,
  [6447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym__eol,
  [6454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym__eol,
  [6461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
  [6468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__eol,
  [6475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__eol,
  [6482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
  [6489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_identifier,
  [6496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LBRACE2,
  [6503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym__block_end,
  [6510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym__eol,
  [6517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym__block_end,
  [6524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
  [6531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
  [6538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_COLON,
  [6545] = 2,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(782), 1,
      aux_sym_include_token2,
  [6552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
  [6559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_identifier,
  [6566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym__eol,
  [6573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
  [6580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
  [6587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 223,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 361,
  [SMALL_STATE(8)] = 430,
  [SMALL_STATE(9)] = 496,
  [SMALL_STATE(10)] = 551,
  [SMALL_STATE(11)] = 606,
  [SMALL_STATE(12)] = 652,
  [SMALL_STATE(13)] = 698,
  [SMALL_STATE(14)] = 744,
  [SMALL_STATE(15)] = 790,
  [SMALL_STATE(16)] = 836,
  [SMALL_STATE(17)] = 876,
  [SMALL_STATE(18)] = 920,
  [SMALL_STATE(19)] = 950,
  [SMALL_STATE(20)] = 980,
  [SMALL_STATE(21)] = 1016,
  [SMALL_STATE(22)] = 1058,
  [SMALL_STATE(23)] = 1092,
  [SMALL_STATE(24)] = 1130,
  [SMALL_STATE(25)] = 1172,
  [SMALL_STATE(26)] = 1216,
  [SMALL_STATE(27)] = 1257,
  [SMALL_STATE(28)] = 1295,
  [SMALL_STATE(29)] = 1333,
  [SMALL_STATE(30)] = 1371,
  [SMALL_STATE(31)] = 1409,
  [SMALL_STATE(32)] = 1447,
  [SMALL_STATE(33)] = 1485,
  [SMALL_STATE(34)] = 1525,
  [SMALL_STATE(35)] = 1553,
  [SMALL_STATE(36)] = 1577,
  [SMALL_STATE(37)] = 1601,
  [SMALL_STATE(38)] = 1639,
  [SMALL_STATE(39)] = 1679,
  [SMALL_STATE(40)] = 1717,
  [SMALL_STATE(41)] = 1755,
  [SMALL_STATE(42)] = 1793,
  [SMALL_STATE(43)] = 1831,
  [SMALL_STATE(44)] = 1869,
  [SMALL_STATE(45)] = 1907,
  [SMALL_STATE(46)] = 1931,
  [SMALL_STATE(47)] = 1969,
  [SMALL_STATE(48)] = 2007,
  [SMALL_STATE(49)] = 2045,
  [SMALL_STATE(50)] = 2079,
  [SMALL_STATE(51)] = 2107,
  [SMALL_STATE(52)] = 2147,
  [SMALL_STATE(53)] = 2179,
  [SMALL_STATE(54)] = 2203,
  [SMALL_STATE(55)] = 2227,
  [SMALL_STATE(56)] = 2267,
  [SMALL_STATE(57)] = 2291,
  [SMALL_STATE(58)] = 2331,
  [SMALL_STATE(59)] = 2361,
  [SMALL_STATE(60)] = 2399,
  [SMALL_STATE(61)] = 2437,
  [SMALL_STATE(62)] = 2475,
  [SMALL_STATE(63)] = 2513,
  [SMALL_STATE(64)] = 2545,
  [SMALL_STATE(65)] = 2573,
  [SMALL_STATE(66)] = 2611,
  [SMALL_STATE(67)] = 2647,
  [SMALL_STATE(68)] = 2671,
  [SMALL_STATE(69)] = 2709,
  [SMALL_STATE(70)] = 2743,
  [SMALL_STATE(71)] = 2781,
  [SMALL_STATE(72)] = 2816,
  [SMALL_STATE(73)] = 2843,
  [SMALL_STATE(74)] = 2878,
  [SMALL_STATE(75)] = 2913,
  [SMALL_STATE(76)] = 2948,
  [SMALL_STATE(77)] = 2983,
  [SMALL_STATE(78)] = 3018,
  [SMALL_STATE(79)] = 3053,
  [SMALL_STATE(80)] = 3088,
  [SMALL_STATE(81)] = 3123,
  [SMALL_STATE(82)] = 3158,
  [SMALL_STATE(83)] = 3191,
  [SMALL_STATE(84)] = 3224,
  [SMALL_STATE(85)] = 3259,
  [SMALL_STATE(86)] = 3294,
  [SMALL_STATE(87)] = 3329,
  [SMALL_STATE(88)] = 3362,
  [SMALL_STATE(89)] = 3393,
  [SMALL_STATE(90)] = 3428,
  [SMALL_STATE(91)] = 3461,
  [SMALL_STATE(92)] = 3492,
  [SMALL_STATE(93)] = 3527,
  [SMALL_STATE(94)] = 3562,
  [SMALL_STATE(95)] = 3597,
  [SMALL_STATE(96)] = 3632,
  [SMALL_STATE(97)] = 3667,
  [SMALL_STATE(98)] = 3702,
  [SMALL_STATE(99)] = 3725,
  [SMALL_STATE(100)] = 3757,
  [SMALL_STATE(101)] = 3791,
  [SMALL_STATE(102)] = 3813,
  [SMALL_STATE(103)] = 3845,
  [SMALL_STATE(104)] = 3879,
  [SMALL_STATE(105)] = 3901,
  [SMALL_STATE(106)] = 3923,
  [SMALL_STATE(107)] = 3955,
  [SMALL_STATE(108)] = 3989,
  [SMALL_STATE(109)] = 4021,
  [SMALL_STATE(110)] = 4053,
  [SMALL_STATE(111)] = 4083,
  [SMALL_STATE(112)] = 4111,
  [SMALL_STATE(113)] = 4133,
  [SMALL_STATE(114)] = 4159,
  [SMALL_STATE(115)] = 4181,
  [SMALL_STATE(116)] = 4215,
  [SMALL_STATE(117)] = 4249,
  [SMALL_STATE(118)] = 4280,
  [SMALL_STATE(119)] = 4311,
  [SMALL_STATE(120)] = 4342,
  [SMALL_STATE(121)] = 4373,
  [SMALL_STATE(122)] = 4394,
  [SMALL_STATE(123)] = 4423,
  [SMALL_STATE(124)] = 4452,
  [SMALL_STATE(125)] = 4483,
  [SMALL_STATE(126)] = 4514,
  [SMALL_STATE(127)] = 4545,
  [SMALL_STATE(128)] = 4576,
  [SMALL_STATE(129)] = 4595,
  [SMALL_STATE(130)] = 4614,
  [SMALL_STATE(131)] = 4645,
  [SMALL_STATE(132)] = 4666,
  [SMALL_STATE(133)] = 4685,
  [SMALL_STATE(134)] = 4716,
  [SMALL_STATE(135)] = 4747,
  [SMALL_STATE(136)] = 4778,
  [SMALL_STATE(137)] = 4809,
  [SMALL_STATE(138)] = 4840,
  [SMALL_STATE(139)] = 4871,
  [SMALL_STATE(140)] = 4902,
  [SMALL_STATE(141)] = 4933,
  [SMALL_STATE(142)] = 4955,
  [SMALL_STATE(143)] = 4979,
  [SMALL_STATE(144)] = 5003,
  [SMALL_STATE(145)] = 5025,
  [SMALL_STATE(146)] = 5049,
  [SMALL_STATE(147)] = 5071,
  [SMALL_STATE(148)] = 5095,
  [SMALL_STATE(149)] = 5114,
  [SMALL_STATE(150)] = 5133,
  [SMALL_STATE(151)] = 5152,
  [SMALL_STATE(152)] = 5171,
  [SMALL_STATE(153)] = 5190,
  [SMALL_STATE(154)] = 5209,
  [SMALL_STATE(155)] = 5232,
  [SMALL_STATE(156)] = 5251,
  [SMALL_STATE(157)] = 5268,
  [SMALL_STATE(158)] = 5285,
  [SMALL_STATE(159)] = 5302,
  [SMALL_STATE(160)] = 5319,
  [SMALL_STATE(161)] = 5338,
  [SMALL_STATE(162)] = 5361,
  [SMALL_STATE(163)] = 5380,
  [SMALL_STATE(164)] = 5396,
  [SMALL_STATE(165)] = 5414,
  [SMALL_STATE(166)] = 5430,
  [SMALL_STATE(167)] = 5446,
  [SMALL_STATE(168)] = 5466,
  [SMALL_STATE(169)] = 5484,
  [SMALL_STATE(170)] = 5504,
  [SMALL_STATE(171)] = 5522,
  [SMALL_STATE(172)] = 5540,
  [SMALL_STATE(173)] = 5555,
  [SMALL_STATE(174)] = 5570,
  [SMALL_STATE(175)] = 5585,
  [SMALL_STATE(176)] = 5600,
  [SMALL_STATE(177)] = 5618,
  [SMALL_STATE(178)] = 5636,
  [SMALL_STATE(179)] = 5656,
  [SMALL_STATE(180)] = 5676,
  [SMALL_STATE(181)] = 5694,
  [SMALL_STATE(182)] = 5713,
  [SMALL_STATE(183)] = 5730,
  [SMALL_STATE(184)] = 5744,
  [SMALL_STATE(185)] = 5758,
  [SMALL_STATE(186)] = 5772,
  [SMALL_STATE(187)] = 5788,
  [SMALL_STATE(188)] = 5802,
  [SMALL_STATE(189)] = 5816,
  [SMALL_STATE(190)] = 5830,
  [SMALL_STATE(191)] = 5844,
  [SMALL_STATE(192)] = 5858,
  [SMALL_STATE(193)] = 5872,
  [SMALL_STATE(194)] = 5886,
  [SMALL_STATE(195)] = 5900,
  [SMALL_STATE(196)] = 5913,
  [SMALL_STATE(197)] = 5926,
  [SMALL_STATE(198)] = 5939,
  [SMALL_STATE(199)] = 5950,
  [SMALL_STATE(200)] = 5963,
  [SMALL_STATE(201)] = 5976,
  [SMALL_STATE(202)] = 5989,
  [SMALL_STATE(203)] = 6002,
  [SMALL_STATE(204)] = 6013,
  [SMALL_STATE(205)] = 6026,
  [SMALL_STATE(206)] = 6037,
  [SMALL_STATE(207)] = 6050,
  [SMALL_STATE(208)] = 6063,
  [SMALL_STATE(209)] = 6076,
  [SMALL_STATE(210)] = 6089,
  [SMALL_STATE(211)] = 6102,
  [SMALL_STATE(212)] = 6115,
  [SMALL_STATE(213)] = 6128,
  [SMALL_STATE(214)] = 6141,
  [SMALL_STATE(215)] = 6149,
  [SMALL_STATE(216)] = 6157,
  [SMALL_STATE(217)] = 6165,
  [SMALL_STATE(218)] = 6173,
  [SMALL_STATE(219)] = 6181,
  [SMALL_STATE(220)] = 6189,
  [SMALL_STATE(221)] = 6197,
  [SMALL_STATE(222)] = 6205,
  [SMALL_STATE(223)] = 6213,
  [SMALL_STATE(224)] = 6223,
  [SMALL_STATE(225)] = 6231,
  [SMALL_STATE(226)] = 6239,
  [SMALL_STATE(227)] = 6249,
  [SMALL_STATE(228)] = 6259,
  [SMALL_STATE(229)] = 6267,
  [SMALL_STATE(230)] = 6275,
  [SMALL_STATE(231)] = 6285,
  [SMALL_STATE(232)] = 6293,
  [SMALL_STATE(233)] = 6303,
  [SMALL_STATE(234)] = 6311,
  [SMALL_STATE(235)] = 6319,
  [SMALL_STATE(236)] = 6327,
  [SMALL_STATE(237)] = 6335,
  [SMALL_STATE(238)] = 6343,
  [SMALL_STATE(239)] = 6351,
  [SMALL_STATE(240)] = 6359,
  [SMALL_STATE(241)] = 6367,
  [SMALL_STATE(242)] = 6377,
  [SMALL_STATE(243)] = 6384,
  [SMALL_STATE(244)] = 6391,
  [SMALL_STATE(245)] = 6398,
  [SMALL_STATE(246)] = 6405,
  [SMALL_STATE(247)] = 6412,
  [SMALL_STATE(248)] = 6419,
  [SMALL_STATE(249)] = 6426,
  [SMALL_STATE(250)] = 6433,
  [SMALL_STATE(251)] = 6440,
  [SMALL_STATE(252)] = 6447,
  [SMALL_STATE(253)] = 6454,
  [SMALL_STATE(254)] = 6461,
  [SMALL_STATE(255)] = 6468,
  [SMALL_STATE(256)] = 6475,
  [SMALL_STATE(257)] = 6482,
  [SMALL_STATE(258)] = 6489,
  [SMALL_STATE(259)] = 6496,
  [SMALL_STATE(260)] = 6503,
  [SMALL_STATE(261)] = 6510,
  [SMALL_STATE(262)] = 6517,
  [SMALL_STATE(263)] = 6524,
  [SMALL_STATE(264)] = 6531,
  [SMALL_STATE(265)] = 6538,
  [SMALL_STATE(266)] = 6545,
  [SMALL_STATE(267)] = 6552,
  [SMALL_STATE(268)] = 6559,
  [SMALL_STATE(269)] = 6566,
  [SMALL_STATE(270)] = 6573,
  [SMALL_STATE(271)] = 6580,
  [SMALL_STATE(272)] = 6587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(147),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(82),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(198),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(200),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(223),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(266),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(129),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(265),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 15),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 11),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 11),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 15),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 16),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 16),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 21),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 21),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_item, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_item, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(141),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(88),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(15),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(62),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(259),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(140),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 13),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 13),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(147),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(83),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(14),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 4, .production_id = 20),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 20),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(145),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(87),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(13),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(141),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(91),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(15),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(161),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(109),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(11),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(167),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(123),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(12),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(142),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(143),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(144),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 8),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 8),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 9),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 9),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 10),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 10),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert, 2, .production_id = 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(154),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(169),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 3),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(230),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2), SHIFT_REPEAT(189),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(227),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 5),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(48),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(192),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2), SHIFT_REPEAT(212),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 6),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 12),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 6),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 19),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 22),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 6),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 5),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 23),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 18),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 14),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 5),
  [762] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 4),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eol = 0,
  ts_external_token__block_start = 1,
  ts_external_token__block_end = 2,
  ts_external_token__error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eol] = sym__eol,
  [ts_external_token__block_start] = sym__block_start,
  [ts_external_token__block_end] = sym__block_end,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eol] = true,
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__block_start] = true,
  },
  [3] = {
    [ts_external_token__block_end] = true,
  },
  [4] = {
    [ts_external_token__eol] = true,
  },
  [5] = {
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ink_external_scanner_create(void);
void tree_sitter_ink_external_scanner_destroy(void *);
bool tree_sitter_ink_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ink_external_scanner_serialize(void *, char *);
void tree_sitter_ink_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ink() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ink_external_scanner_create,
      tree_sitter_ink_external_scanner_destroy,
      tree_sitter_ink_external_scanner_scan,
      tree_sitter_ink_external_scanner_serialize,
      tree_sitter_ink_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

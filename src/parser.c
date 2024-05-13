#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 3
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 9
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
  anon_sym_STAR = 17,
  anon_sym_PLUS = 18,
  anon_sym_BSLASH = 19,
  anon_sym_DASH = 20,
  aux_sym_condition_token1 = 21,
  anon_sym_LBRACE2 = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  aux_sym__knot_mark_token1 = 25,
  sym__divert_mark = 26,
  anon_sym_EQ = 27,
  anon_sym_LF = 28,
  anon_sym_function = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_return = 32,
  anon_sym_COMMA = 33,
  aux_sym_include_token1 = 34,
  aux_sym_include_token2 = 35,
  aux_sym_expr_token1 = 36,
  anon_sym_false = 37,
  anon_sym_true = 38,
  anon_sym_not = 39,
  anon_sym_SLASH = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_LT = 44,
  anon_sym_GT = 45,
  anon_sym_and = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_or = 48,
  anon_sym_PIPE_PIPE = 49,
  sym_identifier = 50,
  anon_sym_DOT = 51,
  sym_comment = 52,
  anon_sym_TODO = 53,
  anon_sym_COLON = 54,
  aux_sym_todo_comment_token1 = 55,
  sym__eol = 56,
  sym__block_start = 57,
  sym__block_end = 58,
  sym__error_sentinel = 59,
  sym_ink = 60,
  sym_content_block = 61,
  sym_knot_block = 62,
  sym_stitch_block = 63,
  sym__content_item = 64,
  sym_text = 65,
  sym_paragraph = 66,
  sym_flow = 67,
  sym_logic = 68,
  sym_choice = 69,
  sym_gather = 70,
  sym_condition = 71,
  sym__choice_content = 72,
  sym__compound_choice_content = 73,
  sym_knot = 74,
  sym__knot_mark = 75,
  sym_stitch = 76,
  sym_function_declaration = 77,
  sym_code = 78,
  sym__code_stmt = 79,
  sym_return = 80,
  sym__param = 81,
  sym_params = 82,
  sym_divert = 83,
  sym_include = 84,
  sym_call = 85,
  sym__arg = 86,
  sym_args = 87,
  sym_paren = 88,
  sym_unary = 89,
  sym_binary = 90,
  sym_qualified_name = 91,
  sym_todo_comment = 92,
  aux_sym_ink_repeat1 = 93,
  aux_sym_ink_repeat2 = 94,
  aux_sym_content_block_repeat1 = 95,
  aux_sym__content_item_repeat1 = 96,
  aux_sym_text_repeat1 = 97,
  aux_sym_flow_repeat1 = 98,
  aux_sym_logic_repeat1 = 99,
  aux_sym_choice_repeat1 = 100,
  aux_sym_choice_repeat2 = 101,
  aux_sym_gather_repeat1 = 102,
  aux_sym_params_repeat1 = 103,
  aux_sym_args_repeat1 = 104,
  anon_alias_sym__flow = 105,
  alias_sym_once_only_mark = 106,
  alias_sym_shuffle_mark = 107,
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
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_DASH] = "-",
  [aux_sym_condition_token1] = "condition_token1",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__knot_mark_token1] = "knot_mark",
  [sym__divert_mark] = "_divert_mark",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
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
  [anon_sym_SLASH] = "/",
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
  [sym_gather] = "gather",
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
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym_ink_repeat2] = "ink_repeat2",
  [aux_sym_content_block_repeat1] = "content_block_repeat1",
  [aux_sym__content_item_repeat1] = "_content_item_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_logic_repeat1] = "logic_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_choice_repeat2] = "choice_repeat2",
  [aux_sym_gather_repeat1] = "gather_repeat1",
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
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__knot_mark_token1] = aux_sym__knot_mark_token1,
  [sym__divert_mark] = sym__divert_mark,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
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
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_gather] = sym_gather,
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
  [sym_todo_comment] = sym_todo_comment,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym_ink_repeat2] = aux_sym_ink_repeat2,
  [aux_sym_content_block_repeat1] = aux_sym_content_block_repeat1,
  [aux_sym__content_item_repeat1] = aux_sym__content_item_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [aux_sym_logic_repeat1] = aux_sym_logic_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_choice_repeat2] = aux_sym_choice_repeat2,
  [aux_sym_gather_repeat1] = aux_sym_gather_repeat1,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_LF] = {
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
  [anon_sym_SLASH] = {
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
  [sym_gather] = {
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
  [aux_sym_choice_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gather_repeat1] = {
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
  field_name = 4,
  field_op = 5,
  field_params = 6,
  field_prefix = 7,
  field_target = 8,
  field_temporary = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_final] = "final",
  [field_main] = "main",
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
  [4] = {.index = 2, .length = 3},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 3},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 1},
  [17] = {.index = 21, .length = 1},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 2},
  [20] = {.index = 26, .length = 2},
  [21] = {.index = 28, .length = 2},
  [22] = {.index = 30, .length = 2},
  [23] = {.index = 32, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_main, 0},
  [2] =
    {field_final, 1, .inherited = true},
    {field_main, 1, .inherited = true},
    {field_temporary, 1, .inherited = true},
  [5] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [8] =
    {field_name, 1},
  [9] =
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [12] =
    {field_prefix, 1},
  [13] =
    {field_op, 0},
  [14] =
    {field_final, 2},
  [15] =
    {field_temporary, 1},
  [16] =
    {field_final, 3, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [19] =
    {field_op, 1},
  [20] =
    {field_name, 0},
  [21] =
    {field_name, 2},
  [22] =
    {field_final, 3},
    {field_temporary, 1},
  [24] =
    {field_final, 3},
    {field_main, 0},
  [26] =
    {field_main, 0},
    {field_temporary, 2},
  [28] =
    {field_args, 2},
    {field_name, 0},
  [30] =
    {field_name, 2},
    {field_params, 4},
  [32] =
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
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 34,
  [40] = 36,
  [41] = 37,
  [42] = 42,
  [43] = 29,
  [44] = 34,
  [45] = 36,
  [46] = 36,
  [47] = 37,
  [48] = 29,
  [49] = 34,
  [50] = 50,
  [51] = 51,
  [52] = 37,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 36,
  [57] = 37,
  [58] = 58,
  [59] = 26,
  [60] = 29,
  [61] = 34,
  [62] = 25,
  [63] = 53,
  [64] = 20,
  [65] = 65,
  [66] = 17,
  [67] = 67,
  [68] = 68,
  [69] = 29,
  [70] = 37,
  [71] = 36,
  [72] = 21,
  [73] = 73,
  [74] = 74,
  [75] = 24,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 77,
  [81] = 78,
  [82] = 82,
  [83] = 83,
  [84] = 83,
  [85] = 82,
  [86] = 51,
  [87] = 83,
  [88] = 88,
  [89] = 78,
  [90] = 78,
  [91] = 77,
  [92] = 83,
  [93] = 82,
  [94] = 94,
  [95] = 77,
  [96] = 96,
  [97] = 97,
  [98] = 78,
  [99] = 83,
  [100] = 94,
  [101] = 101,
  [102] = 94,
  [103] = 77,
  [104] = 104,
  [105] = 105,
  [106] = 77,
  [107] = 83,
  [108] = 78,
  [109] = 30,
  [110] = 110,
  [111] = 68,
  [112] = 73,
  [113] = 113,
  [114] = 76,
  [115] = 67,
  [116] = 58,
  [117] = 117,
  [118] = 110,
  [119] = 119,
  [120] = 32,
  [121] = 121,
  [122] = 31,
  [123] = 123,
  [124] = 82,
  [125] = 50,
  [126] = 94,
  [127] = 82,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 130,
  [134] = 82,
  [135] = 135,
  [136] = 94,
  [137] = 128,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 135,
  [142] = 142,
  [143] = 140,
  [144] = 139,
  [145] = 131,
  [146] = 94,
  [147] = 138,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 153,
  [156] = 154,
  [157] = 154,
  [158] = 153,
  [159] = 153,
  [160] = 160,
  [161] = 160,
  [162] = 162,
  [163] = 163,
  [164] = 154,
  [165] = 165,
  [166] = 163,
  [167] = 162,
  [168] = 165,
  [169] = 160,
  [170] = 170,
  [171] = 163,
  [172] = 162,
  [173] = 165,
  [174] = 162,
  [175] = 175,
  [176] = 153,
  [177] = 160,
  [178] = 153,
  [179] = 154,
  [180] = 154,
  [181] = 51,
  [182] = 182,
  [183] = 163,
  [184] = 184,
  [185] = 165,
  [186] = 163,
  [187] = 165,
  [188] = 162,
  [189] = 160,
  [190] = 162,
  [191] = 165,
  [192] = 163,
  [193] = 160,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 201,
  [212] = 212,
  [213] = 170,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 170,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 235,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 243,
  [246] = 175,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 235,
  [254] = 247,
  [255] = 255,
  [256] = 256,
  [257] = 232,
  [258] = 175,
  [259] = 256,
  [260] = 260,
  [261] = 232,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 275,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 277,
  [281] = 281,
  [282] = 282,
  [283] = 278,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 277,
  [290] = 290,
  [291] = 291,
  [292] = 292,
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
      : (c <= ']' || (c >= '|' && c <= '~')))));
}

static inline bool aux_sym_text_token1_character_set_6(int32_t c) {
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
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '~') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '/') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 't') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '<') ADVANCE(175);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '<') ADVANCE(175);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(179);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(145);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(205);
      END_STATE();
    case 43:
      if (lookahead == 'U') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == '|') ADVANCE(181);
      END_STATE();
    case 68:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != ':') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(203);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '*') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(111);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(156);
      if (!aux_sym_text_token1_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '~') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
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
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (!aux_sym_text_token1_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (!aux_sym_text_token1_character_set_3(lookahead)) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (!aux_sym_text_token1_character_set_4(lookahead)) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '~') ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(107);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(127);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(99);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(98);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(101);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(78);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L') ADVANCE(103);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(95);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(205);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(97);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'U') ADVANCE(96);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_text_token3);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_text_token4);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_text_token4);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_text_token5);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_text_token5);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_text_token6);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_text_token6);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_glue);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead == ':') ADVANCE(127);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '*') ADVANCE(71);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '{') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__divert_mark);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_include_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '*') ADVANCE(71);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 15},
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
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 20, .external_lex_state = 4},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20, .external_lex_state = 4},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 20, .external_lex_state = 4},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20, .external_lex_state = 4},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 20, .external_lex_state = 4},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 20, .external_lex_state = 4},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 20, .external_lex_state = 4},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 10, .external_lex_state = 4},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 6, .external_lex_state = 4},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 11, .external_lex_state = 4},
  [86] = {.lex_state = 20, .external_lex_state = 4},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 10, .external_lex_state = 4},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 10, .external_lex_state = 4},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 11, .external_lex_state = 4},
  [101] = {.lex_state = 10, .external_lex_state = 4},
  [102] = {.lex_state = 6, .external_lex_state = 4},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 20, .external_lex_state = 4},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 20, .external_lex_state = 4},
  [112] = {.lex_state = 20, .external_lex_state = 4},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 20, .external_lex_state = 4},
  [115] = {.lex_state = 20, .external_lex_state = 4},
  [116] = {.lex_state = 20, .external_lex_state = 4},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 20, .external_lex_state = 4},
  [121] = {.lex_state = 20, .external_lex_state = 4},
  [122] = {.lex_state = 20, .external_lex_state = 4},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 10, .external_lex_state = 4},
  [125] = {.lex_state = 20, .external_lex_state = 4},
  [126] = {.lex_state = 10, .external_lex_state = 4},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 18, .external_lex_state = 4},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 18, .external_lex_state = 4},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 16},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 11, .external_lex_state = 4},
  [156] = {.lex_state = 6, .external_lex_state = 4},
  [157] = {.lex_state = 11, .external_lex_state = 4},
  [158] = {.lex_state = 6, .external_lex_state = 4},
  [159] = {.lex_state = 10, .external_lex_state = 4},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 6, .external_lex_state = 4},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 11, .external_lex_state = 4},
  [164] = {.lex_state = 10, .external_lex_state = 4},
  [165] = {.lex_state = 6, .external_lex_state = 4},
  [166] = {.lex_state = 6, .external_lex_state = 4},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 11, .external_lex_state = 4},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 11, .external_lex_state = 4},
  [173] = {.lex_state = 11, .external_lex_state = 4},
  [174] = {.lex_state = 10, .external_lex_state = 4},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 18, .external_lex_state = 4},
  [177] = {.lex_state = 10, .external_lex_state = 4},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 18, .external_lex_state = 4},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 10, .external_lex_state = 4},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 10, .external_lex_state = 4},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 18, .external_lex_state = 4},
  [190] = {.lex_state = 18, .external_lex_state = 4},
  [191] = {.lex_state = 18, .external_lex_state = 4},
  [192] = {.lex_state = 18, .external_lex_state = 4},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 23},
  [199] = {.lex_state = 0, .external_lex_state = 5},
  [200] = {.lex_state = 0, .external_lex_state = 4},
  [201] = {.lex_state = 0, .external_lex_state = 5},
  [202] = {.lex_state = 0, .external_lex_state = 5},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 4},
  [205] = {.lex_state = 23},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 5},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 0, .external_lex_state = 4},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0, .external_lex_state = 4},
  [217] = {.lex_state = 0, .external_lex_state = 4},
  [218] = {.lex_state = 0, .external_lex_state = 4},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 19, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 0, .external_lex_state = 5},
  [224] = {.lex_state = 0, .external_lex_state = 5},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 23, .external_lex_state = 4},
  [228] = {.lex_state = 0, .external_lex_state = 4},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0, .external_lex_state = 5},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0, .external_lex_state = 4},
  [240] = {.lex_state = 0, .external_lex_state = 5},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 28},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0, .external_lex_state = 5},
  [248] = {.lex_state = 0, .external_lex_state = 5},
  [249] = {.lex_state = 0, .external_lex_state = 4},
  [250] = {.lex_state = 0, .external_lex_state = 4},
  [251] = {.lex_state = 0, .external_lex_state = 5},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 5},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 5},
  [258] = {.lex_state = 0, .external_lex_state = 4},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 0, .external_lex_state = 4},
  [261] = {.lex_state = 0, .external_lex_state = 3},
  [262] = {.lex_state = 0, .external_lex_state = 4},
  [263] = {.lex_state = 210},
  [264] = {.lex_state = 0, .external_lex_state = 4},
  [265] = {.lex_state = 0, .external_lex_state = 4},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0, .external_lex_state = 4},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 23},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0, .external_lex_state = 4},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 23},
  [278] = {.lex_state = 0, .external_lex_state = 3},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 23},
  [281] = {.lex_state = 0, .external_lex_state = 4},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0, .external_lex_state = 3},
  [284] = {.lex_state = 0, .external_lex_state = 4},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 23},
  [288] = {.lex_state = 0, .external_lex_state = 4},
  [289] = {.lex_state = 23},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0, .external_lex_state = 4},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_ink] = STATE(266),
    [sym_content_block] = STATE(196),
    [sym_knot_block] = STATE(203),
    [sym_stitch_block] = STATE(195),
    [aux_sym_ink_repeat1] = STATE(195),
    [aux_sym_ink_repeat2] = STATE(203),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__block_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    STATE(9), 1,
      aux_sym_choice_repeat1,
    STATE(96), 1,
      aux_sym_gather_repeat1,
    STATE(155), 1,
      aux_sym_text_repeat1,
    STATE(200), 1,
      sym_flow,
    STATE(222), 1,
      aux_sym__content_item_repeat1,
    STATE(224), 1,
      sym_stitch,
    STATE(244), 1,
      sym__knot_mark,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(199), 2,
      sym_knot,
      sym_function_declaration,
    STATE(100), 3,
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
    STATE(284), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [89] = 21,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    STATE(9), 1,
      aux_sym_choice_repeat1,
    STATE(96), 1,
      aux_sym_gather_repeat1,
    STATE(155), 1,
      aux_sym_text_repeat1,
    STATE(200), 1,
      sym_flow,
    STATE(222), 1,
      aux_sym__content_item_repeat1,
    STATE(223), 1,
      sym_stitch,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(100), 3,
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
    STATE(284), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [168] = 20,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(38), 1,
      sym_glue,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_TILDE,
    ACTIONS(47), 1,
      sym_tag,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      sym__divert_mark,
    ACTIONS(59), 1,
      aux_sym_include_token1,
    ACTIONS(62), 1,
      anon_sym_TODO,
    ACTIONS(65), 1,
      sym__block_end,
    STATE(9), 1,
      aux_sym_choice_repeat1,
    STATE(96), 1,
      aux_sym_gather_repeat1,
    STATE(155), 1,
      aux_sym_text_repeat1,
    STATE(200), 1,
      sym_flow,
    STATE(222), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(50), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(100), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(35), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(284), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [244] = 20,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(67), 1,
      sym__block_end,
    STATE(9), 1,
      aux_sym_choice_repeat1,
    STATE(96), 1,
      aux_sym_gather_repeat1,
    STATE(155), 1,
      aux_sym_text_repeat1,
    STATE(200), 1,
      sym_flow,
    STATE(222), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(100), 3,
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
    STATE(284), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [320] = 20,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(69), 1,
      sym__block_end,
    STATE(9), 1,
      aux_sym_choice_repeat1,
    STATE(96), 1,
      aux_sym_gather_repeat1,
    STATE(155), 1,
      aux_sym_text_repeat1,
    STATE(200), 1,
      sym_flow,
    STATE(222), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(100), 3,
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
    STATE(284), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [396] = 20,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(71), 1,
      sym__block_end,
    STATE(9), 1,
      aux_sym_choice_repeat1,
    STATE(96), 1,
      aux_sym_gather_repeat1,
    STATE(155), 1,
      aux_sym_text_repeat1,
    STATE(200), 1,
      sym_flow,
    STATE(222), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(100), 3,
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
    STATE(284), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [472] = 19,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    STATE(9), 1,
      aux_sym_choice_repeat1,
    STATE(96), 1,
      aux_sym_gather_repeat1,
    STATE(155), 1,
      aux_sym_text_repeat1,
    STATE(200), 1,
      sym_flow,
    STATE(222), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(100), 3,
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
    STATE(284), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [545] = 17,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_glue,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      aux_sym_condition_token1,
    ACTIONS(85), 1,
      anon_sym_LBRACE2,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym__divert_mark,
    STATE(65), 1,
      aux_sym_choice_repeat1,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(204), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(10), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    STATE(288), 2,
      sym__choice_content,
      sym_divert,
    STATE(102), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [607] = 15,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_glue,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      aux_sym_condition_token1,
    ACTIONS(85), 1,
      anon_sym_LBRACE2,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym__divert_mark,
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(204), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(104), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    STATE(279), 2,
      sym__choice_content,
      sym_divert,
    STATE(102), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [662] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_TILDE,
    ACTIONS(103), 1,
      anon_sym_BANG,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(99), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [708] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_TILDE,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(107), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [754] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_TILDE,
    ACTIONS(119), 1,
      anon_sym_BANG,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(115), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [800] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_TILDE,
    ACTIONS(127), 1,
      anon_sym_BANG,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(123), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [846] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_TILDE,
    ACTIONS(135), 1,
      anon_sym_BANG,
    ACTIONS(137), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(131), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [892] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_TILDE,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(139), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [938] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 10,
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
  [974] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_glue,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym__divert_mark,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(204), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(262), 2,
      sym__choice_content,
      sym_divert,
    STATE(102), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1016] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_glue,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym__divert_mark,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(204), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(292), 2,
      sym__choice_content,
      sym_divert,
    STATE(102), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1058] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(147), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 12,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1130] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym__divert_mark,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      aux_sym_expr_token1,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(275), 1,
      sym_args,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(177), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(219), 2,
      sym_divert,
      sym__arg,
    STATE(105), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1174] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym__divert_mark,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_expr_token1,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym_args,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(177), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(219), 2,
      sym_divert,
      sym__arg,
    STATE(105), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(157), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(185), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1278] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(147), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1318] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1359] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__block_end,
    ACTIONS(193), 16,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__divert_mark,
      aux_sym_include_token1,
      anon_sym_TODO,
  [1384] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1470] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 12,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1498] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1536] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1574] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1612] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1650] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1688] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(229), 1,
      sym__eol,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(225), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(219), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1728] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1766] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1804] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1842] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1882] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1920] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1958] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1996] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2034] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2072] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2110] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2196] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2234] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2274] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2314] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym__divert_mark,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_expr_token1,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(177), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(238), 2,
      sym_divert,
      sym__arg,
    STATE(105), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [2352] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2390] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 10,
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
  [2458] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(147), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(219), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2496] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2534] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(185), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2600] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2640] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(147), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2676] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_choice_repeat1,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(277), 13,
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
  [2702] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(147), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2784] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2822] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2860] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2898] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 10,
      sym__eol,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2930] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(147), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2964] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_glue,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(296), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(157), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3030] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(147), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3062] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3097] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    STATE(48), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3132] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_glue,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      sym__divert_mark,
    ACTIONS(322), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(249), 1,
      sym_flow,
    STATE(126), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(314), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3167] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3202] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_PIPE,
    STATE(33), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3237] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_glue,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      sym__eol,
    STATE(158), 1,
      aux_sym_text_repeat1,
    ACTIONS(337), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(328), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3270] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3305] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3340] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(348), 1,
      sym_glue,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      aux_sym_text_repeat1,
    ACTIONS(337), 2,
      sym_tag,
      sym__divert_mark,
    STATE(85), 3,
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
  [3373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 12,
      sym__eol,
      sym_tag,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3396] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3431] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_glue,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(356), 1,
      sym__divert_mark,
    ACTIONS(358), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(250), 1,
      sym_flow,
    STATE(126), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(314), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3466] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3501] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3536] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3571] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3606] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_glue,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(337), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(368), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3637] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      sym_glue,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(379), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3668] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3703] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_glue,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    ACTIONS(389), 1,
      anon_sym_DASH,
    STATE(176), 1,
      aux_sym_text_repeat1,
    STATE(182), 1,
      aux_sym_gather_repeat1,
    STATE(267), 1,
      sym_flow,
    STATE(146), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(383), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3738] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_glue,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      sym__divert_mark,
    ACTIONS(393), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(234), 1,
      sym_flow,
    STATE(126), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(314), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3773] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(395), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3808] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3843] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_glue,
    ACTIONS(401), 1,
      sym__eol,
    STATE(155), 1,
      aux_sym_text_repeat1,
    ACTIONS(379), 2,
      sym_tag,
      sym__divert_mark,
    STATE(85), 3,
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
  [3876] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_glue,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      sym__divert_mark,
    ACTIONS(405), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(239), 1,
      sym_flow,
    STATE(126), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(314), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3911] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 1,
      sym__eol,
    ACTIONS(407), 1,
      sym_glue,
    STATE(158), 1,
      aux_sym_text_repeat1,
    ACTIONS(379), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3944] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3979] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(413), 1,
      aux_sym_condition_token1,
    ACTIONS(416), 1,
      anon_sym_LBRACE2,
    STATE(104), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    ACTIONS(411), 11,
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
  [4006] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4041] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4076] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    STATE(46), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4111] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_glue,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(423), 1,
      anon_sym_PIPE,
    STATE(43), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      sym_flow,
    STATE(153), 1,
      aux_sym_text_repeat1,
    STATE(94), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(93), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4168] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4224] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(147), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(219), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4256] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_glue,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(274), 1,
      sym_flow,
    STATE(136), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(425), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4288] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(147), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(147), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4368] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4402] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4436] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_glue,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(291), 1,
      sym_flow,
    STATE(136), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(425), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 10,
      sym__eol,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4494] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(229), 1,
      sym__eol,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(225), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(219), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4550] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      anon_sym_SLASH,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(191), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(161), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4584] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__divert_mark,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(438), 1,
      sym_glue,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(124), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(435), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4638] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      sym__divert_mark,
    ACTIONS(401), 1,
      sym__eol,
    ACTIONS(444), 1,
      sym_glue,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(124), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(314), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4670] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(449), 1,
      sym_glue,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(127), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(446), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4699] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      aux_sym_expr_token1,
    ACTIONS(459), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(457), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(73), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4730] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      aux_sym_expr_token1,
    ACTIONS(465), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(463), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(117), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4761] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(471), 1,
      aux_sym_expr_token1,
    ACTIONS(475), 1,
      anon_sym_not,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(467), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(109), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4792] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      aux_sym_expr_token1,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(481), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(110), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4823] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym_condition_token1,
    ACTIONS(485), 12,
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
  [4844] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      aux_sym_expr_token1,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(491), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(30), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4875] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__eol,
    ACTIONS(498), 1,
      sym_glue,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      aux_sym_text_repeat1,
    STATE(134), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(495), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4904] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(504), 1,
      aux_sym_expr_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(31), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4935] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    ACTIONS(510), 1,
      sym_glue,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(127), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(425), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4964] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_not,
    ACTIONS(512), 1,
      aux_sym_expr_token1,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(467), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(514), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(112), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4995] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_not,
    ACTIONS(518), 1,
      aux_sym_expr_token1,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(467), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(520), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(114), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5026] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_not,
    ACTIONS(524), 1,
      aux_sym_expr_token1,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(467), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(526), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(116), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5057] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_not,
    ACTIONS(530), 1,
      aux_sym_expr_token1,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(467), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(120), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5088] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_not,
    ACTIONS(536), 1,
      aux_sym_expr_token1,
    ACTIONS(540), 1,
      sym_identifier,
    ACTIONS(467), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(538), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(122), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5119] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      aux_sym_expr_token1,
    ACTIONS(546), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(544), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(123), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5150] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      aux_sym_expr_token1,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(550), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(32), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5181] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      aux_sym_expr_token1,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(556), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(58), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5212] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      aux_sym_expr_token1,
    ACTIONS(564), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(562), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(118), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5243] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    ACTIONS(401), 1,
      sym__eol,
    ACTIONS(566), 1,
      sym_glue,
    STATE(176), 1,
      aux_sym_text_repeat1,
    STATE(134), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(383), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5272] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_not,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      aux_sym_expr_token1,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(570), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(76), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5303] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(475), 1,
      anon_sym_not,
    ACTIONS(574), 1,
      aux_sym_expr_token1,
    ACTIONS(578), 1,
      sym_identifier,
    ACTIONS(467), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(576), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(121), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5334] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(580), 13,
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
  [5353] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_condition_token1,
    ACTIONS(582), 12,
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
  [5374] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(582), 13,
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
  [5393] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__divert_mark,
    STATE(184), 1,
      sym_divert,
    ACTIONS(586), 10,
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
  [5415] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_text_repeat1,
    ACTIONS(592), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(590), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5437] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_text_repeat1,
    ACTIONS(597), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(594), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5459] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__eol,
    STATE(157), 1,
      aux_sym_text_repeat1,
    ACTIONS(592), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(599), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5483] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__eol,
    STATE(156), 1,
      aux_sym_text_repeat1,
    ACTIONS(597), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(603), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5507] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__eol,
    STATE(157), 1,
      aux_sym_text_repeat1,
    ACTIONS(597), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(608), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5531] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__eol,
    STATE(156), 1,
      aux_sym_text_repeat1,
    ACTIONS(592), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(611), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5555] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__eol,
    STATE(164), 1,
      aux_sym_text_repeat1,
    ACTIONS(592), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(613), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5578] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(615), 11,
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
  [5595] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__eol,
    ACTIONS(615), 10,
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
  [5614] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__eol,
    ACTIONS(619), 10,
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
  [5633] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__eol,
    ACTIONS(623), 10,
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
  [5652] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__eol,
    STATE(164), 1,
      aux_sym_text_repeat1,
    ACTIONS(597), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(627), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5675] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__eol,
    ACTIONS(630), 10,
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
  [5694] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__eol,
    ACTIONS(623), 10,
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
  [5713] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(619), 11,
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
  [5730] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(630), 11,
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
  [5747] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__eol,
    ACTIONS(615), 10,
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
  [5766] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_DOT,
    ACTIONS(634), 10,
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
  [5785] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(623), 11,
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
  [5802] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__eol,
    ACTIONS(619), 10,
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
  [5821] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__eol,
    ACTIONS(630), 10,
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
  [5840] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__eol,
    ACTIONS(619), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5858] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(634), 10,
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
  [5874] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__eol,
    STATE(180), 1,
      aux_sym_text_repeat1,
    ACTIONS(592), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(638), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5896] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__eol,
    ACTIONS(615), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5914] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_text_repeat1,
    ACTIONS(592), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(640), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5934] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_text_repeat1,
    ACTIONS(597), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(642), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5954] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__eol,
    STATE(180), 1,
      aux_sym_text_repeat1,
    ACTIONS(597), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(645), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5976] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(259), 10,
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
  [5992] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_DASH,
    STATE(182), 1,
      aux_sym_gather_repeat1,
    ACTIONS(648), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6012] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__eol,
    ACTIONS(623), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6030] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(308), 10,
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
  [6046] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__eol,
    ACTIONS(630), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6064] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(623), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6079] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(630), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6094] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(619), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6109] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__eol,
    ACTIONS(615), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6126] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__eol,
    ACTIONS(619), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6143] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__eol,
    ACTIONS(630), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6160] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__eol,
    ACTIONS(623), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6177] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(615), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6192] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(653), 1,
      aux_sym__knot_mark_token1,
    STATE(224), 1,
      sym_stitch,
    STATE(244), 1,
      sym__knot_mark,
    STATE(199), 2,
      sym_knot,
      sym_function_declaration,
  [6212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(657), 1,
      sym__block_start,
    STATE(210), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
    STATE(211), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6230] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(657), 1,
      sym__block_start,
    STATE(197), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(210), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__block_start,
    ACTIONS(659), 1,
      ts_builtin_sym_end,
    STATE(207), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
    STATE(211), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym__divert_mark,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(663), 1,
      sym_identifier,
    STATE(269), 1,
      sym_params,
    STATE(215), 2,
      sym__param,
      sym_divert,
  [6286] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__block_start,
    ACTIONS(667), 1,
      sym__block_end,
    STATE(208), 1,
      sym_content_block,
    STATE(206), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6303] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_tag,
    ACTIONS(671), 1,
      sym__divert_mark,
    ACTIONS(673), 1,
      sym__eol,
    STATE(217), 1,
      sym_divert,
    STATE(218), 1,
      aux_sym__content_item_repeat1,
  [6322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__block_start,
    ACTIONS(678), 1,
      sym__block_end,
    STATE(201), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym__block_start,
    ACTIONS(682), 1,
      sym__block_end,
    STATE(201), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      sym__block_start,
    STATE(209), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym__divert_mark,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
    ACTIONS(688), 1,
      sym__eol,
    STATE(281), 1,
      sym_divert,
  [6380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym__divert_mark,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(236), 2,
      sym__param,
      sym_divert,
  [6394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym__block_start,
    ACTIONS(692), 1,
      sym__block_end,
    STATE(201), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__block_start,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    STATE(209), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym__block_start,
    ACTIONS(692), 1,
      sym__block_end,
    STATE(202), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 1,
      sym__block_start,
    STATE(209), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      sym__block_start,
    STATE(209), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(701), 1,
      sym__block_start,
    STATE(211), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym__knot_mark_token1,
    STATE(244), 1,
      sym__knot_mark,
    STATE(199), 2,
      sym_knot,
      sym_function_declaration,
  [6492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(704), 2,
      sym__eol,
      sym_tag,
  [6503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_return,
    STATE(268), 2,
      sym__code_stmt,
      sym_return,
  [6514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_params_repeat1,
  [6527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym_tag,
    ACTIONS(715), 1,
      sym__eol,
    STATE(216), 1,
      aux_sym__content_item_repeat1,
  [6540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_tag,
    ACTIONS(719), 1,
      sym__eol,
    STATE(228), 1,
      aux_sym__content_item_repeat1,
  [6553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym__eol,
    ACTIONS(721), 1,
      sym_tag,
    STATE(216), 1,
      aux_sym__content_item_repeat1,
  [6566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_args_repeat1,
  [6579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(729), 1,
      sym__eol,
    STATE(270), 1,
      sym__knot_mark,
  [6603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_tag,
    ACTIONS(731), 1,
      sym__eol,
    STATE(216), 1,
      aux_sym__content_item_repeat1,
  [6616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__block_start,
    ACTIONS(735), 1,
      sym__block_end,
    STATE(283), 1,
      sym_content_block,
  [6629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__block_start,
    ACTIONS(737), 1,
      sym__block_end,
    STATE(278), 1,
      sym_content_block,
  [6642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_params_repeat1,
  [6655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym__divert_mark,
    ACTIONS(744), 1,
      sym__eol,
    STATE(260), 1,
      sym_divert,
  [6668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_identifier,
    ACTIONS(748), 1,
      sym__eol,
    STATE(258), 1,
      sym_qualified_name,
  [6681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_tag,
    ACTIONS(750), 1,
      sym__eol,
    STATE(216), 1,
      aux_sym__content_item_repeat1,
  [6694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_args_repeat1,
  [6707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_args_repeat1,
  [6720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_params_repeat1,
  [6733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 2,
      sym__eol,
      sym__divert_mark,
  [6757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_identifier,
    STATE(258), 1,
      sym_qualified_name,
  [6767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      sym__block_start,
      sym__block_end,
  [6783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 2,
      sym__eol,
      sym__divert_mark,
  [6799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      sym__block_start,
      sym__block_end,
  [6807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_identifier,
    STATE(175), 1,
      sym_qualified_name,
  [6817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_EQ,
    STATE(223), 1,
      sym_stitch,
  [6835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_function,
    ACTIONS(781), 1,
      sym_identifier,
  [6845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_EQ,
    STATE(224), 1,
      sym_stitch,
  [6855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 2,
      sym__block_start,
      sym__block_end,
  [6871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 2,
      sym__block_start,
      sym__block_end,
  [6879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      sym__eol,
      sym__divert_mark,
  [6887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 2,
      sym__eol,
      sym__divert_mark,
  [6895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 2,
      sym__block_start,
      sym__block_end,
  [6903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(246), 1,
      sym_qualified_name,
  [6921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 2,
      sym__block_start,
      sym__block_end,
  [6937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 2,
      sym__block_start,
      sym__block_end,
  [6953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      sym__eol,
      sym_tag,
  [6961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 2,
      sym__block_start,
      sym__block_end,
  [6969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym__eol,
  [6976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym__block_end,
  [6983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym__eol,
  [6990] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(805), 1,
      aux_sym_todo_comment_token1,
  [6997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym__eol,
  [7004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym__eol,
  [7011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      ts_builtin_sym_end,
  [7018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym__eol,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym__eol,
  [7032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
  [7039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym__eol,
  [7046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_identifier,
  [7053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
  [7060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym__eol,
  [7067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
  [7074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
  [7081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [7088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      sym_identifier,
  [7095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym__block_end,
  [7102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym__eol,
  [7109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_identifier,
  [7116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym__eol,
  [7123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_LBRACE2,
  [7130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym__block_end,
  [7137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym__eol,
  [7144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COLON,
  [7151] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(847), 1,
      aux_sym_include_token2,
  [7158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_identifier,
  [7165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym__eol,
  [7172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_identifier,
  [7179] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LF,
  [7186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACK,
  [7193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 244,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 396,
  [SMALL_STATE(8)] = 472,
  [SMALL_STATE(9)] = 545,
  [SMALL_STATE(10)] = 607,
  [SMALL_STATE(11)] = 662,
  [SMALL_STATE(12)] = 708,
  [SMALL_STATE(13)] = 754,
  [SMALL_STATE(14)] = 800,
  [SMALL_STATE(15)] = 846,
  [SMALL_STATE(16)] = 892,
  [SMALL_STATE(17)] = 938,
  [SMALL_STATE(18)] = 974,
  [SMALL_STATE(19)] = 1016,
  [SMALL_STATE(20)] = 1058,
  [SMALL_STATE(21)] = 1096,
  [SMALL_STATE(22)] = 1130,
  [SMALL_STATE(23)] = 1174,
  [SMALL_STATE(24)] = 1218,
  [SMALL_STATE(25)] = 1248,
  [SMALL_STATE(26)] = 1278,
  [SMALL_STATE(27)] = 1318,
  [SMALL_STATE(28)] = 1359,
  [SMALL_STATE(29)] = 1384,
  [SMALL_STATE(30)] = 1422,
  [SMALL_STATE(31)] = 1446,
  [SMALL_STATE(32)] = 1470,
  [SMALL_STATE(33)] = 1498,
  [SMALL_STATE(34)] = 1536,
  [SMALL_STATE(35)] = 1574,
  [SMALL_STATE(36)] = 1612,
  [SMALL_STATE(37)] = 1650,
  [SMALL_STATE(38)] = 1688,
  [SMALL_STATE(39)] = 1728,
  [SMALL_STATE(40)] = 1766,
  [SMALL_STATE(41)] = 1804,
  [SMALL_STATE(42)] = 1842,
  [SMALL_STATE(43)] = 1882,
  [SMALL_STATE(44)] = 1920,
  [SMALL_STATE(45)] = 1958,
  [SMALL_STATE(46)] = 1996,
  [SMALL_STATE(47)] = 2034,
  [SMALL_STATE(48)] = 2072,
  [SMALL_STATE(49)] = 2110,
  [SMALL_STATE(50)] = 2148,
  [SMALL_STATE(51)] = 2172,
  [SMALL_STATE(52)] = 2196,
  [SMALL_STATE(53)] = 2234,
  [SMALL_STATE(54)] = 2274,
  [SMALL_STATE(55)] = 2314,
  [SMALL_STATE(56)] = 2352,
  [SMALL_STATE(57)] = 2390,
  [SMALL_STATE(58)] = 2428,
  [SMALL_STATE(59)] = 2458,
  [SMALL_STATE(60)] = 2496,
  [SMALL_STATE(61)] = 2534,
  [SMALL_STATE(62)] = 2572,
  [SMALL_STATE(63)] = 2600,
  [SMALL_STATE(64)] = 2640,
  [SMALL_STATE(65)] = 2676,
  [SMALL_STATE(66)] = 2702,
  [SMALL_STATE(67)] = 2736,
  [SMALL_STATE(68)] = 2760,
  [SMALL_STATE(69)] = 2784,
  [SMALL_STATE(70)] = 2822,
  [SMALL_STATE(71)] = 2860,
  [SMALL_STATE(72)] = 2898,
  [SMALL_STATE(73)] = 2930,
  [SMALL_STATE(74)] = 2964,
  [SMALL_STATE(75)] = 3002,
  [SMALL_STATE(76)] = 3030,
  [SMALL_STATE(77)] = 3062,
  [SMALL_STATE(78)] = 3097,
  [SMALL_STATE(79)] = 3132,
  [SMALL_STATE(80)] = 3167,
  [SMALL_STATE(81)] = 3202,
  [SMALL_STATE(82)] = 3237,
  [SMALL_STATE(83)] = 3270,
  [SMALL_STATE(84)] = 3305,
  [SMALL_STATE(85)] = 3340,
  [SMALL_STATE(86)] = 3373,
  [SMALL_STATE(87)] = 3396,
  [SMALL_STATE(88)] = 3431,
  [SMALL_STATE(89)] = 3466,
  [SMALL_STATE(90)] = 3501,
  [SMALL_STATE(91)] = 3536,
  [SMALL_STATE(92)] = 3571,
  [SMALL_STATE(93)] = 3606,
  [SMALL_STATE(94)] = 3637,
  [SMALL_STATE(95)] = 3668,
  [SMALL_STATE(96)] = 3703,
  [SMALL_STATE(97)] = 3738,
  [SMALL_STATE(98)] = 3773,
  [SMALL_STATE(99)] = 3808,
  [SMALL_STATE(100)] = 3843,
  [SMALL_STATE(101)] = 3876,
  [SMALL_STATE(102)] = 3911,
  [SMALL_STATE(103)] = 3944,
  [SMALL_STATE(104)] = 3979,
  [SMALL_STATE(105)] = 4006,
  [SMALL_STATE(106)] = 4041,
  [SMALL_STATE(107)] = 4076,
  [SMALL_STATE(108)] = 4111,
  [SMALL_STATE(109)] = 4146,
  [SMALL_STATE(110)] = 4168,
  [SMALL_STATE(111)] = 4202,
  [SMALL_STATE(112)] = 4224,
  [SMALL_STATE(113)] = 4256,
  [SMALL_STATE(114)] = 4288,
  [SMALL_STATE(115)] = 4318,
  [SMALL_STATE(116)] = 4340,
  [SMALL_STATE(117)] = 4368,
  [SMALL_STATE(118)] = 4402,
  [SMALL_STATE(119)] = 4436,
  [SMALL_STATE(120)] = 4468,
  [SMALL_STATE(121)] = 4494,
  [SMALL_STATE(122)] = 4528,
  [SMALL_STATE(123)] = 4550,
  [SMALL_STATE(124)] = 4584,
  [SMALL_STATE(125)] = 4616,
  [SMALL_STATE(126)] = 4638,
  [SMALL_STATE(127)] = 4670,
  [SMALL_STATE(128)] = 4699,
  [SMALL_STATE(129)] = 4730,
  [SMALL_STATE(130)] = 4761,
  [SMALL_STATE(131)] = 4792,
  [SMALL_STATE(132)] = 4823,
  [SMALL_STATE(133)] = 4844,
  [SMALL_STATE(134)] = 4875,
  [SMALL_STATE(135)] = 4904,
  [SMALL_STATE(136)] = 4935,
  [SMALL_STATE(137)] = 4964,
  [SMALL_STATE(138)] = 4995,
  [SMALL_STATE(139)] = 5026,
  [SMALL_STATE(140)] = 5057,
  [SMALL_STATE(141)] = 5088,
  [SMALL_STATE(142)] = 5119,
  [SMALL_STATE(143)] = 5150,
  [SMALL_STATE(144)] = 5181,
  [SMALL_STATE(145)] = 5212,
  [SMALL_STATE(146)] = 5243,
  [SMALL_STATE(147)] = 5272,
  [SMALL_STATE(148)] = 5303,
  [SMALL_STATE(149)] = 5334,
  [SMALL_STATE(150)] = 5353,
  [SMALL_STATE(151)] = 5374,
  [SMALL_STATE(152)] = 5393,
  [SMALL_STATE(153)] = 5415,
  [SMALL_STATE(154)] = 5437,
  [SMALL_STATE(155)] = 5459,
  [SMALL_STATE(156)] = 5483,
  [SMALL_STATE(157)] = 5507,
  [SMALL_STATE(158)] = 5531,
  [SMALL_STATE(159)] = 5555,
  [SMALL_STATE(160)] = 5578,
  [SMALL_STATE(161)] = 5595,
  [SMALL_STATE(162)] = 5614,
  [SMALL_STATE(163)] = 5633,
  [SMALL_STATE(164)] = 5652,
  [SMALL_STATE(165)] = 5675,
  [SMALL_STATE(166)] = 5694,
  [SMALL_STATE(167)] = 5713,
  [SMALL_STATE(168)] = 5730,
  [SMALL_STATE(169)] = 5747,
  [SMALL_STATE(170)] = 5766,
  [SMALL_STATE(171)] = 5785,
  [SMALL_STATE(172)] = 5802,
  [SMALL_STATE(173)] = 5821,
  [SMALL_STATE(174)] = 5840,
  [SMALL_STATE(175)] = 5858,
  [SMALL_STATE(176)] = 5874,
  [SMALL_STATE(177)] = 5896,
  [SMALL_STATE(178)] = 5914,
  [SMALL_STATE(179)] = 5934,
  [SMALL_STATE(180)] = 5954,
  [SMALL_STATE(181)] = 5976,
  [SMALL_STATE(182)] = 5992,
  [SMALL_STATE(183)] = 6012,
  [SMALL_STATE(184)] = 6030,
  [SMALL_STATE(185)] = 6046,
  [SMALL_STATE(186)] = 6064,
  [SMALL_STATE(187)] = 6079,
  [SMALL_STATE(188)] = 6094,
  [SMALL_STATE(189)] = 6109,
  [SMALL_STATE(190)] = 6126,
  [SMALL_STATE(191)] = 6143,
  [SMALL_STATE(192)] = 6160,
  [SMALL_STATE(193)] = 6177,
  [SMALL_STATE(194)] = 6192,
  [SMALL_STATE(195)] = 6212,
  [SMALL_STATE(196)] = 6230,
  [SMALL_STATE(197)] = 6248,
  [SMALL_STATE(198)] = 6266,
  [SMALL_STATE(199)] = 6286,
  [SMALL_STATE(200)] = 6303,
  [SMALL_STATE(201)] = 6322,
  [SMALL_STATE(202)] = 6336,
  [SMALL_STATE(203)] = 6350,
  [SMALL_STATE(204)] = 6364,
  [SMALL_STATE(205)] = 6380,
  [SMALL_STATE(206)] = 6394,
  [SMALL_STATE(207)] = 6408,
  [SMALL_STATE(208)] = 6422,
  [SMALL_STATE(209)] = 6436,
  [SMALL_STATE(210)] = 6450,
  [SMALL_STATE(211)] = 6464,
  [SMALL_STATE(212)] = 6478,
  [SMALL_STATE(213)] = 6492,
  [SMALL_STATE(214)] = 6503,
  [SMALL_STATE(215)] = 6514,
  [SMALL_STATE(216)] = 6527,
  [SMALL_STATE(217)] = 6540,
  [SMALL_STATE(218)] = 6553,
  [SMALL_STATE(219)] = 6566,
  [SMALL_STATE(220)] = 6579,
  [SMALL_STATE(221)] = 6590,
  [SMALL_STATE(222)] = 6603,
  [SMALL_STATE(223)] = 6616,
  [SMALL_STATE(224)] = 6629,
  [SMALL_STATE(225)] = 6642,
  [SMALL_STATE(226)] = 6655,
  [SMALL_STATE(227)] = 6668,
  [SMALL_STATE(228)] = 6681,
  [SMALL_STATE(229)] = 6694,
  [SMALL_STATE(230)] = 6707,
  [SMALL_STATE(231)] = 6720,
  [SMALL_STATE(232)] = 6733,
  [SMALL_STATE(233)] = 6741,
  [SMALL_STATE(234)] = 6749,
  [SMALL_STATE(235)] = 6757,
  [SMALL_STATE(236)] = 6767,
  [SMALL_STATE(237)] = 6775,
  [SMALL_STATE(238)] = 6783,
  [SMALL_STATE(239)] = 6791,
  [SMALL_STATE(240)] = 6799,
  [SMALL_STATE(241)] = 6807,
  [SMALL_STATE(242)] = 6817,
  [SMALL_STATE(243)] = 6825,
  [SMALL_STATE(244)] = 6835,
  [SMALL_STATE(245)] = 6845,
  [SMALL_STATE(246)] = 6855,
  [SMALL_STATE(247)] = 6863,
  [SMALL_STATE(248)] = 6871,
  [SMALL_STATE(249)] = 6879,
  [SMALL_STATE(250)] = 6887,
  [SMALL_STATE(251)] = 6895,
  [SMALL_STATE(252)] = 6903,
  [SMALL_STATE(253)] = 6911,
  [SMALL_STATE(254)] = 6921,
  [SMALL_STATE(255)] = 6929,
  [SMALL_STATE(256)] = 6937,
  [SMALL_STATE(257)] = 6945,
  [SMALL_STATE(258)] = 6953,
  [SMALL_STATE(259)] = 6961,
  [SMALL_STATE(260)] = 6969,
  [SMALL_STATE(261)] = 6976,
  [SMALL_STATE(262)] = 6983,
  [SMALL_STATE(263)] = 6990,
  [SMALL_STATE(264)] = 6997,
  [SMALL_STATE(265)] = 7004,
  [SMALL_STATE(266)] = 7011,
  [SMALL_STATE(267)] = 7018,
  [SMALL_STATE(268)] = 7025,
  [SMALL_STATE(269)] = 7032,
  [SMALL_STATE(270)] = 7039,
  [SMALL_STATE(271)] = 7046,
  [SMALL_STATE(272)] = 7053,
  [SMALL_STATE(273)] = 7060,
  [SMALL_STATE(274)] = 7067,
  [SMALL_STATE(275)] = 7074,
  [SMALL_STATE(276)] = 7081,
  [SMALL_STATE(277)] = 7088,
  [SMALL_STATE(278)] = 7095,
  [SMALL_STATE(279)] = 7102,
  [SMALL_STATE(280)] = 7109,
  [SMALL_STATE(281)] = 7116,
  [SMALL_STATE(282)] = 7123,
  [SMALL_STATE(283)] = 7130,
  [SMALL_STATE(284)] = 7137,
  [SMALL_STATE(285)] = 7144,
  [SMALL_STATE(286)] = 7151,
  [SMALL_STATE(287)] = 7158,
  [SMALL_STATE(288)] = 7165,
  [SMALL_STATE(289)] = 7172,
  [SMALL_STATE(290)] = 7179,
  [SMALL_STATE(291)] = 7186,
  [SMALL_STATE(292)] = 7193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(155),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(100),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(214),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(222),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(96),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(235),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(286),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(285),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 15),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 15),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 11),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_item, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_item, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(65),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 21),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 21),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 16),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 16),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(153),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(94),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(16),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(74),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(158),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(82),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(14),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(155),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(85),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(11),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 13),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 13),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(153),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(93),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(16),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 4, .production_id = 20),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 20),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2), SHIFT_REPEAT(282),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2), SHIFT_REPEAT(129),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(159),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(124),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(15),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(178),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(127),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(12),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(176),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(134),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(13),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(154),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(156),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(157),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 10),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 10),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 9),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 9),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 3),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(164),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 8),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 8),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert, 2, .production_id = 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(179),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(180),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2), SHIFT_REPEAT(182),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(243),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2), SHIFT_REPEAT(212),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(245),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2), SHIFT_REPEAT(216),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(205),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(55),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 12),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 6),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 23),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 22),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 5),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 4, .production_id = 6),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 19),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 18),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 4),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 6),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 5),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [811] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 4),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 14),
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

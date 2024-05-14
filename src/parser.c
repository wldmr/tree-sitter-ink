#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 312
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 3
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 29

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
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  aux_sym_condition_token1 = 23,
  anon_sym_LBRACE2 = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  aux_sym__knot_mark_token1 = 27,
  sym__divert_mark = 28,
  anon_sym_EQ = 29,
  anon_sym_LF = 30,
  anon_sym_function = 31,
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
  sym__label_field = 71,
  sym_condition = 72,
  sym__choice_content = 73,
  sym__compound_choice_content = 74,
  sym_knot = 75,
  sym__knot_mark = 76,
  sym_stitch = 77,
  sym_function_declaration = 78,
  sym_code = 79,
  sym__code_stmt = 80,
  sym_return = 81,
  sym__param = 82,
  sym_params = 83,
  sym_divert = 84,
  sym_include = 85,
  sym_call = 86,
  sym__arg = 87,
  sym_args = 88,
  sym_paren = 89,
  sym_unary = 90,
  sym_binary = 91,
  sym_qualified_name = 92,
  sym_todo_comment = 93,
  aux_sym_ink_repeat1 = 94,
  aux_sym_ink_repeat2 = 95,
  aux_sym_content_block_repeat1 = 96,
  aux_sym__content_item_repeat1 = 97,
  aux_sym_text_repeat1 = 98,
  aux_sym_flow_repeat1 = 99,
  aux_sym_logic_repeat1 = 100,
  aux_sym_choice_repeat1 = 101,
  aux_sym_choice_repeat2 = 102,
  aux_sym_gather_repeat1 = 103,
  aux_sym_params_repeat1 = 104,
  aux_sym_args_repeat1 = 105,
  anon_alias_sym__flow = 106,
  alias_sym_once_only_mark = 107,
  alias_sym_shuffle_mark = 108,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_condition_token1] = "condition_token1",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__knot_mark_token1] = "knot_mark",
  [sym__divert_mark] = "_divert_mark",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_function] = "function",
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
  [sym__label_field] = "_label_field",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__knot_mark_token1] = aux_sym__knot_mark_token1,
  [sym__divert_mark] = sym__divert_mark,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_function] = anon_sym_function,
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
  [sym__label_field] = sym__label_field,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym__label_field] = {
    .visible = false,
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
  field_label = 3,
  field_main = 4,
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
  [field_label] = "label",
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
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 4},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 1},
  [15] = {.index = 20, .length = 1},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 4},
  [18] = {.index = 26, .length = 3},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 1},
  [21] = {.index = 31, .length = 1},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 2},
  [24] = {.index = 36, .length = 2},
  [25] = {.index = 38, .length = 4},
  [26] = {.index = 42, .length = 2},
  [27] = {.index = 44, .length = 2},
  [28] = {.index = 46, .length = 3},
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
    {field_label, 1, .inherited = true},
  [9] =
    {field_name, 1},
  [10] =
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [13] =
    {field_final, 2, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [17] =
    {field_prefix, 1},
  [18] =
    {field_op, 0},
  [19] =
    {field_label, 1},
  [20] =
    {field_final, 2},
  [21] =
    {field_temporary, 1},
  [22] =
    {field_final, 3, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [26] =
    {field_final, 3, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [29] =
    {field_op, 1},
  [30] =
    {field_name, 0},
  [31] =
    {field_name, 2},
  [32] =
    {field_final, 3},
    {field_temporary, 1},
  [34] =
    {field_final, 3},
    {field_main, 0},
  [36] =
    {field_main, 0},
    {field_temporary, 2},
  [38] =
    {field_final, 4, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 4, .inherited = true},
    {field_temporary, 4, .inherited = true},
  [42] =
    {field_args, 2},
    {field_name, 0},
  [44] =
    {field_name, 2},
    {field_params, 4},
  [46] =
    {field_final, 4},
    {field_main, 0},
    {field_temporary, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym__flow,
  },
  [11] = {
    [1] = alias_sym_shuffle_mark,
  },
  [12] = {
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
  [5] = 4,
  [6] = 4,
  [7] = 7,
  [8] = 4,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 15,
  [18] = 15,
  [19] = 15,
  [20] = 15,
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
  [34] = 22,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 39,
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 40,
  [51] = 51,
  [52] = 41,
  [53] = 53,
  [54] = 54,
  [55] = 48,
  [56] = 56,
  [57] = 40,
  [58] = 58,
  [59] = 39,
  [60] = 48,
  [61] = 41,
  [62] = 62,
  [63] = 48,
  [64] = 33,
  [65] = 29,
  [66] = 40,
  [67] = 32,
  [68] = 31,
  [69] = 69,
  [70] = 39,
  [71] = 30,
  [72] = 41,
  [73] = 73,
  [74] = 74,
  [75] = 48,
  [76] = 39,
  [77] = 41,
  [78] = 48,
  [79] = 40,
  [80] = 39,
  [81] = 81,
  [82] = 62,
  [83] = 41,
  [84] = 26,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 86,
  [93] = 89,
  [94] = 88,
  [95] = 90,
  [96] = 56,
  [97] = 86,
  [98] = 90,
  [99] = 89,
  [100] = 88,
  [101] = 91,
  [102] = 86,
  [103] = 89,
  [104] = 88,
  [105] = 86,
  [106] = 91,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 88,
  [111] = 89,
  [112] = 88,
  [113] = 89,
  [114] = 114,
  [115] = 115,
  [116] = 46,
  [117] = 117,
  [118] = 44,
  [119] = 58,
  [120] = 120,
  [121] = 49,
  [122] = 122,
  [123] = 47,
  [124] = 45,
  [125] = 125,
  [126] = 120,
  [127] = 127,
  [128] = 91,
  [129] = 54,
  [130] = 90,
  [131] = 53,
  [132] = 132,
  [133] = 133,
  [134] = 51,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 90,
  [146] = 146,
  [147] = 91,
  [148] = 90,
  [149] = 91,
  [150] = 150,
  [151] = 136,
  [152] = 140,
  [153] = 138,
  [154] = 141,
  [155] = 142,
  [156] = 143,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 139,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 161,
  [166] = 162,
  [167] = 161,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 173,
  [175] = 169,
  [176] = 172,
  [177] = 171,
  [178] = 162,
  [179] = 161,
  [180] = 171,
  [181] = 173,
  [182] = 172,
  [183] = 169,
  [184] = 162,
  [185] = 161,
  [186] = 186,
  [187] = 187,
  [188] = 169,
  [189] = 162,
  [190] = 161,
  [191] = 56,
  [192] = 171,
  [193] = 172,
  [194] = 173,
  [195] = 169,
  [196] = 173,
  [197] = 171,
  [198] = 172,
  [199] = 173,
  [200] = 172,
  [201] = 171,
  [202] = 169,
  [203] = 144,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 212,
  [222] = 222,
  [223] = 223,
  [224] = 170,
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
  [238] = 223,
  [239] = 239,
  [240] = 170,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 24,
  [245] = 245,
  [246] = 24,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 186,
  [252] = 252,
  [253] = 253,
  [254] = 248,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 186,
  [260] = 242,
  [261] = 261,
  [262] = 249,
  [263] = 263,
  [264] = 256,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 248,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 273,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 24,
  [284] = 284,
  [285] = 276,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 291,
  [295] = 292,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 270,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 276,
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
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(123);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '<') ADVANCE(179);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(123);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '$') ADVANCE(122);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(107);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '/') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '/') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 't') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '&') ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(150);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(208);
      END_STATE();
    case 44:
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == '|') ADVANCE(184);
      END_STATE();
    case 69:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != ':') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(206);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(136);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(113);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(123);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '<') ADVANCE(179);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      if (!aux_sym_text_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '$') ADVANCE(122);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (!aux_sym_text_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (!aux_sym_text_token1_character_set_3(lookahead)) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (!aux_sym_text_token1_character_set_4(lookahead)) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '~') ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(129);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(101);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(100);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(103);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(79);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L') ADVANCE(105);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(97);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(208);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(99);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'U') ADVANCE(98);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_text_token3);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_text_token4);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_text_token4);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_text_token5);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_text_token5);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_text_token6);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_text_token6);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_glue);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead == ':') ADVANCE(129);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__divert_mark);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_include_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 16, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 3},
  [5] = {.lex_state = 2, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 2, .external_lex_state = 3},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7, .external_lex_state = 4},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 21, .external_lex_state = 4},
  [65] = {.lex_state = 21, .external_lex_state = 4},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 21, .external_lex_state = 4},
  [68] = {.lex_state = 21, .external_lex_state = 4},
  [69] = {.lex_state = 21, .external_lex_state = 4},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 21, .external_lex_state = 4},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 21, .external_lex_state = 4},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 6, .external_lex_state = 4},
  [91] = {.lex_state = 6, .external_lex_state = 4},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 11, .external_lex_state = 4},
  [96] = {.lex_state = 21, .external_lex_state = 4},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 11, .external_lex_state = 4},
  [107] = {.lex_state = 12, .external_lex_state = 4},
  [108] = {.lex_state = 12, .external_lex_state = 4},
  [109] = {.lex_state = 12, .external_lex_state = 4},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 12, .external_lex_state = 4},
  [116] = {.lex_state = 21, .external_lex_state = 4},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 21, .external_lex_state = 4},
  [119] = {.lex_state = 21, .external_lex_state = 4},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 21, .external_lex_state = 4},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 21, .external_lex_state = 4},
  [124] = {.lex_state = 21, .external_lex_state = 4},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 21, .external_lex_state = 4},
  [128] = {.lex_state = 12, .external_lex_state = 4},
  [129] = {.lex_state = 21, .external_lex_state = 4},
  [130] = {.lex_state = 12, .external_lex_state = 4},
  [131] = {.lex_state = 21, .external_lex_state = 4},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 19, .external_lex_state = 4},
  [134] = {.lex_state = 21, .external_lex_state = 4},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 20},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 20},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 20},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 17},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 19, .external_lex_state = 4},
  [149] = {.lex_state = 19, .external_lex_state = 4},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 20},
  [157] = {.lex_state = 17},
  [158] = {.lex_state = 17},
  [159] = {.lex_state = 20},
  [160] = {.lex_state = 20},
  [161] = {.lex_state = 18},
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 11, .external_lex_state = 4},
  [165] = {.lex_state = 6, .external_lex_state = 4},
  [166] = {.lex_state = 6, .external_lex_state = 4},
  [167] = {.lex_state = 11, .external_lex_state = 4},
  [168] = {.lex_state = 7, .external_lex_state = 4},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 6, .external_lex_state = 4},
  [172] = {.lex_state = 6, .external_lex_state = 4},
  [173] = {.lex_state = 6, .external_lex_state = 4},
  [174] = {.lex_state = 18},
  [175] = {.lex_state = 11, .external_lex_state = 4},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 11, .external_lex_state = 4},
  [178] = {.lex_state = 12, .external_lex_state = 4},
  [179] = {.lex_state = 12, .external_lex_state = 4},
  [180] = {.lex_state = 18},
  [181] = {.lex_state = 11, .external_lex_state = 4},
  [182] = {.lex_state = 11, .external_lex_state = 4},
  [183] = {.lex_state = 6, .external_lex_state = 4},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 12, .external_lex_state = 4},
  [189] = {.lex_state = 19, .external_lex_state = 4},
  [190] = {.lex_state = 19, .external_lex_state = 4},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 12, .external_lex_state = 4},
  [193] = {.lex_state = 12, .external_lex_state = 4},
  [194] = {.lex_state = 12, .external_lex_state = 4},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 19, .external_lex_state = 4},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 19, .external_lex_state = 4},
  [201] = {.lex_state = 19, .external_lex_state = 4},
  [202] = {.lex_state = 19, .external_lex_state = 4},
  [203] = {.lex_state = 19, .external_lex_state = 4},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 24},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 4},
  [210] = {.lex_state = 0, .external_lex_state = 3},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 4},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 3},
  [218] = {.lex_state = 0, .external_lex_state = 3},
  [219] = {.lex_state = 24},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 3},
  [222] = {.lex_state = 0, .external_lex_state = 3},
  [223] = {.lex_state = 0, .external_lex_state = 3},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0, .external_lex_state = 4},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 24, .external_lex_state = 4},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0, .external_lex_state = 4},
  [231] = {.lex_state = 0, .external_lex_state = 4},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 20, .external_lex_state = 4},
  [235] = {.lex_state = 0, .external_lex_state = 4},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0, .external_lex_state = 4},
  [238] = {.lex_state = 0, .external_lex_state = 3},
  [239] = {.lex_state = 0, .external_lex_state = 4},
  [240] = {.lex_state = 0, .external_lex_state = 4},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 20},
  [243] = {.lex_state = 0, .external_lex_state = 3},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 3},
  [248] = {.lex_state = 24},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 3},
  [251] = {.lex_state = 0, .external_lex_state = 4},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 24},
  [255] = {.lex_state = 0, .external_lex_state = 4},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 29},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 0, .external_lex_state = 3},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 4},
  [264] = {.lex_state = 0, .external_lex_state = 3},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0, .external_lex_state = 4},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 24},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 24},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0, .external_lex_state = 4},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 0, .external_lex_state = 4},
  [281] = {.lex_state = 0, .external_lex_state = 4},
  [282] = {.lex_state = 0, .external_lex_state = 4},
  [283] = {.lex_state = 0, .external_lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 24},
  [286] = {.lex_state = 0, .external_lex_state = 4},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 14},
  [289] = {.lex_state = 24},
  [290] = {.lex_state = 0, .external_lex_state = 4},
  [291] = {.lex_state = 24},
  [292] = {.lex_state = 0, .external_lex_state = 5},
  [293] = {.lex_state = 0, .external_lex_state = 4},
  [294] = {.lex_state = 24},
  [295] = {.lex_state = 0, .external_lex_state = 5},
  [296] = {.lex_state = 0, .external_lex_state = 4},
  [297] = {.lex_state = 0, .external_lex_state = 4},
  [298] = {.lex_state = 0, .external_lex_state = 4},
  [299] = {.lex_state = 0, .external_lex_state = 4},
  [300] = {.lex_state = 0, .external_lex_state = 4},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0, .external_lex_state = 4},
  [304] = {.lex_state = 0, .external_lex_state = 4},
  [305] = {.lex_state = 0, .external_lex_state = 4},
  [306] = {.lex_state = 213},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 24},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 15},
  [311] = {.lex_state = 24},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__knot_mark_token1] = ACTIONS(1),
    [sym__divert_mark] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
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
    [sym_ink] = STATE(272),
    [sym_content_block] = STATE(205),
    [sym_knot_block] = STATE(220),
    [sym_stitch_block] = STATE(208),
    [aux_sym_ink_repeat1] = STATE(208),
    [aux_sym_ink_repeat2] = STATE(220),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__block_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
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
    ACTIONS(35), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(223), 1,
      sym_stitch,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    STATE(258), 1,
      sym__knot_mark,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(210), 2,
      sym_knot,
      sym_function_declaration,
    STATE(8), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [93] = 22,
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
    ACTIONS(35), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    STATE(238), 1,
      sym_stitch,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [176] = 21,
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
    ACTIONS(35), 1,
      sym__block_start,
    ACTIONS(37), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [256] = 21,
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
    ACTIONS(35), 1,
      sym__block_start,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [336] = 21,
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
    ACTIONS(35), 1,
      sym__block_start,
    ACTIONS(41), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [416] = 21,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_glue,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_TILDE,
    ACTIONS(55), 1,
      sym_tag,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(64), 1,
      sym__divert_mark,
    ACTIONS(67), 1,
      aux_sym_include_token1,
    ACTIONS(70), 1,
      anon_sym_TODO,
    ACTIONS(73), 1,
      sym__block_start,
    ACTIONS(76), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(58), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(43), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [496] = 21,
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
    ACTIONS(35), 1,
      sym__block_start,
    ACTIONS(78), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [576] = 20,
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
    ACTIONS(35), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [653] = 20,
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
    ACTIONS(35), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(167), 1,
      aux_sym_text_repeat1,
    STATE(209), 1,
      sym_flow,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(286), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [730] = 19,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_BSLASH,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      aux_sym_condition_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(13), 1,
      sym__label_field,
    STATE(37), 1,
      aux_sym_choice_repeat1,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(12), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    STATE(278), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [798] = 15,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      aux_sym_condition_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(114), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    STATE(297), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [853] = 15,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      aux_sym_condition_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    ACTIONS(102), 1,
      anon_sym_BSLASH,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(14), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    STATE(299), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [908] = 15,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      aux_sym_condition_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(114), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    STATE(281), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [963] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_BANG,
    ACTIONS(118), 1,
      anon_sym_PIPE,
    STATE(43), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1009] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_TILDE,
    ACTIONS(124), 1,
      anon_sym_BANG,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    STATE(79), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    ACTIONS(120), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1055] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_TILDE,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    ACTIONS(128), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1101] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_TILDE,
    ACTIONS(140), 1,
      anon_sym_BANG,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    ACTIONS(136), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1147] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_BANG,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    ACTIONS(144), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1193] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_TILDE,
    ACTIONS(156), 1,
      anon_sym_BANG,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    ACTIONS(152), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1239] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(280), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1281] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_BANG,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(170), 1,
      aux_sym_expr_token1,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(277), 1,
      sym_args,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(172), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(241), 2,
      sym_divert,
      sym__arg,
    STATE(85), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1325] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(274), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1367] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__block_start,
      sym__block_end,
    ACTIONS(176), 16,
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
  [1393] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(303), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 13,
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
  [1465] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(213), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(282), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1507] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_glue,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_DASH,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym__eol,
    STATE(133), 1,
      sym__label_field,
    STATE(168), 1,
      aux_sym_gather_repeat1,
    STATE(190), 1,
      aux_sym_text_repeat1,
    STATE(279), 1,
      sym_flow,
    STATE(149), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(188), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1551] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 13,
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
  [1619] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 12,
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
  [1653] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 10,
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
  [1689] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1729] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_BANG,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(170), 1,
      aux_sym_expr_token1,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_args,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(172), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(241), 2,
      sym_divert,
      sym__arg,
    STATE(85), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1773] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__block_start,
      sym__block_end,
    ACTIONS(218), 16,
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
  [1799] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1840] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_choice_repeat1,
    ACTIONS(228), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(226), 14,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      aux_sym_condition_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [1867] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_BANG,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(170), 1,
      aux_sym_expr_token1,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(172), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(266), 2,
      sym_divert,
      sym__arg,
    STATE(85), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1905] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1943] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1981] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2019] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2057] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 13,
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
  [2119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 13,
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
  [2143] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2177] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2209] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2247] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 10,
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
  [2277] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 12,
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
  [2343] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 13,
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
  [2405] = 3,
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
  [2429] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 13,
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
  [2491] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 13,
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
  [2553] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2591] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2629] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2667] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2707] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2745] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(200), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2783] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2819] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2857] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2891] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 10,
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
  [2923] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      sym__eol,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(297), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2963] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 11,
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
  [3029] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3067] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3107] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3147] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3185] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3223] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3261] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3299] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3337] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3375] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_glue,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(321), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3413] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3453] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 11,
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
  [3519] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3554] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3589] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    STATE(48), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3624] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    STATE(42), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3659] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3694] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_glue,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      sym__eol,
    STATE(165), 1,
      aux_sym_text_repeat1,
    ACTIONS(356), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(90), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(347), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3727] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      sym_glue,
    ACTIONS(364), 1,
      sym__eol,
    STATE(165), 1,
      aux_sym_text_repeat1,
    ACTIONS(362), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(90), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3760] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3795] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3830] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    STATE(80), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3865] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__eol,
    ACTIONS(375), 1,
      sym_glue,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      aux_sym_text_repeat1,
    ACTIONS(356), 2,
      sym_tag,
      sym__divert_mark,
    STATE(95), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(372), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 12,
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
  [3921] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3956] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_glue,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(356), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(98), 3,
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
  [3987] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4022] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4057] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym_glue,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(362), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(98), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4088] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4123] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4158] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(402), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4193] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4228] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__eol,
    ACTIONS(406), 1,
      sym_glue,
    STATE(167), 1,
      aux_sym_text_repeat1,
    ACTIONS(362), 2,
      sym_tag,
      sym__divert_mark,
    STATE(95), 3,
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
  [4261] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_glue,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 1,
      sym__divert_mark,
    ACTIONS(416), 1,
      sym__eol,
    STATE(179), 1,
      aux_sym_text_repeat1,
    STATE(255), 1,
      sym_flow,
    STATE(128), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(408), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4296] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_glue,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      sym__divert_mark,
    ACTIONS(420), 1,
      sym__eol,
    STATE(179), 1,
      aux_sym_text_repeat1,
    STATE(263), 1,
      sym_flow,
    STATE(128), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(408), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4331] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_glue,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 1,
      sym__divert_mark,
    ACTIONS(424), 1,
      sym__eol,
    STATE(179), 1,
      aux_sym_text_repeat1,
    STATE(268), 1,
      sym_flow,
    STATE(128), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(408), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4366] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4401] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(428), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4436] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4471] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_logic_repeat1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(163), 1,
      sym_flow,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4506] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_condition_token1,
    ACTIONS(439), 1,
      anon_sym_LBRACE2,
    STATE(114), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    ACTIONS(434), 11,
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
  [4533] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_glue,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      sym__divert_mark,
    ACTIONS(444), 1,
      sym__eol,
    STATE(179), 1,
      aux_sym_text_repeat1,
    STATE(267), 1,
      sym_flow,
    STATE(128), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(408), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4568] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(200), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4600] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_glue,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_text_repeat1,
    STATE(284), 1,
      sym_flow,
    STATE(147), 3,
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
  [4632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 11,
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
  [4654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 11,
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
  [4676] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4710] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4738] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_glue,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_text_repeat1,
    STATE(301), 1,
      sym_flow,
    STATE(147), 3,
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
  [4770] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 11,
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
  [4822] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4856] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4890] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(299), 1,
      sym__eol,
    ACTIONS(281), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(297), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4924] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__divert_mark,
    ACTIONS(364), 1,
      sym__eol,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    ACTIONS(456), 1,
      sym_glue,
    STATE(179), 1,
      aux_sym_text_repeat1,
    STATE(130), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(408), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 11,
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
  [4978] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym__divert_mark,
    ACTIONS(358), 1,
      sym__eol,
    ACTIONS(461), 1,
      sym_glue,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      aux_sym_text_repeat1,
    STATE(130), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(458), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 11,
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
  [5032] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5066] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_glue,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      sym__eol,
    STATE(190), 1,
      aux_sym_text_repeat1,
    STATE(296), 1,
      sym_flow,
    STATE(149), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(188), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 10,
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
  [5124] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(469), 13,
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
  [5143] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(471), 1,
      aux_sym_expr_token1,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(473), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(120), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5174] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      aux_sym_expr_token1,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(477), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(483), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(127), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5205] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(489), 1,
      aux_sym_expr_token1,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(477), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(491), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(131), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5236] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(495), 1,
      aux_sym_expr_token1,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(477), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(497), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(134), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(501), 1,
      aux_sym_expr_token1,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(477), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(503), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(121), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5298] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(507), 1,
      aux_sym_expr_token1,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(477), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(509), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(123), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5329] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(513), 1,
      aux_sym_expr_token1,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(477), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(515), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(116), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5360] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(485), 1,
      anon_sym_not,
    ACTIONS(519), 1,
      aux_sym_expr_token1,
    ACTIONS(523), 1,
      sym_identifier,
    ACTIONS(477), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(521), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(119), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5391] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(525), 13,
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
  [5410] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    ACTIONS(530), 1,
      sym_glue,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      aux_sym_text_repeat1,
    STATE(145), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(527), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5439] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_condition_token1,
    ACTIONS(536), 12,
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
  [5460] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(540), 1,
      sym_glue,
    STATE(185), 1,
      aux_sym_text_repeat1,
    STATE(145), 3,
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
  [5489] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__eol,
    ACTIONS(545), 1,
      sym_glue,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      aux_sym_text_repeat1,
    STATE(148), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(542), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5518] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      sym__eol,
    ACTIONS(551), 1,
      sym_glue,
    STATE(190), 1,
      aux_sym_text_repeat1,
    STATE(148), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(188), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5547] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      aux_sym_expr_token1,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(555), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(125), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5578] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      aux_sym_expr_token1,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(561), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(126), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5609] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      aux_sym_expr_token1,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(567), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(49), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5640] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      aux_sym_expr_token1,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(573), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(53), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5671] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      aux_sym_expr_token1,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(579), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(47), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5702] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      aux_sym_expr_token1,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(585), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(46), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5733] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      aux_sym_expr_token1,
    ACTIONS(593), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(591), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(58), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5764] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(595), 1,
      aux_sym_condition_token1,
    ACTIONS(469), 12,
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
  [5785] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(597), 13,
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
  [5804] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(599), 1,
      aux_sym_expr_token1,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(601), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(132), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5835] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(605), 1,
      aux_sym_expr_token1,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(607), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(51), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5866] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_text_repeat1,
    ACTIONS(613), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(611), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5888] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_text_repeat1,
    ACTIONS(618), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(615), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5910] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__divert_mark,
    STATE(187), 1,
      sym_divert,
    ACTIONS(620), 10,
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
  [5932] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__eol,
    STATE(164), 1,
      aux_sym_text_repeat1,
    ACTIONS(618), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(624), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5956] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
    STATE(166), 1,
      aux_sym_text_repeat1,
    ACTIONS(613), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(629), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5980] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__eol,
    STATE(166), 1,
      aux_sym_text_repeat1,
    ACTIONS(618), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(633), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6004] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
    STATE(164), 1,
      aux_sym_text_repeat1,
    ACTIONS(613), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(636), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6028] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DASH,
    ACTIONS(643), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_gather_repeat1,
    ACTIONS(638), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [6052] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(645), 11,
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
  [6069] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_DOT,
    ACTIONS(647), 10,
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
  [6088] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__eol,
    ACTIONS(651), 10,
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
  [6107] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__eol,
    ACTIONS(655), 10,
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
  [6126] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
    ACTIONS(659), 10,
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
  [6145] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(659), 11,
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
  [6162] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__eol,
    ACTIONS(645), 10,
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
  [6181] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(655), 11,
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
  [6198] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__eol,
    ACTIONS(651), 10,
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
  [6217] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__eol,
    STATE(178), 1,
      aux_sym_text_repeat1,
    ACTIONS(618), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(665), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6240] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
    STATE(178), 1,
      aux_sym_text_repeat1,
    ACTIONS(613), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(668), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6263] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(651), 11,
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
  [6280] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
    ACTIONS(659), 10,
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
  [6299] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__eol,
    ACTIONS(655), 10,
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
  [6318] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__eol,
    ACTIONS(645), 10,
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
  [6337] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_text_repeat1,
    ACTIONS(618), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(670), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6357] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_text_repeat1,
    ACTIONS(613), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(673), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6377] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(647), 10,
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
  [6393] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(333), 10,
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
  [6409] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__eol,
    ACTIONS(645), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6427] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__eol,
    STATE(189), 1,
      aux_sym_text_repeat1,
    ACTIONS(618), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(675), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6449] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
    STATE(189), 1,
      aux_sym_text_repeat1,
    ACTIONS(613), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(678), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6471] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(265), 10,
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
  [6487] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__eol,
    ACTIONS(651), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6505] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__eol,
    ACTIONS(655), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6523] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
    ACTIONS(659), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6541] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(645), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6556] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
    ACTIONS(659), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6573] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(651), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6588] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(655), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6603] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(659), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6618] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__eol,
    ACTIONS(655), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6635] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__eol,
    ACTIONS(651), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6652] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__eol,
    ACTIONS(645), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6669] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym__eol,
    ACTIONS(525), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6686] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(684), 1,
      sym__block_start,
    STATE(211), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
    STATE(212), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__block_start,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    STATE(204), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(214), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6722] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(275), 1,
      sym_params,
    STATE(236), 2,
      sym__param,
      sym_divert,
  [6742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(692), 1,
      aux_sym__knot_mark_token1,
    STATE(223), 1,
      sym_stitch,
    STATE(258), 1,
      sym__knot_mark,
    STATE(210), 2,
      sym_knot,
      sym_function_declaration,
  [6762] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__block_start,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    STATE(212), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(214), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6780] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_tag,
    ACTIONS(696), 1,
      sym__divert_mark,
    ACTIONS(698), 1,
      sym__eol,
    STATE(235), 1,
      aux_sym__content_item_repeat1,
    STATE(237), 1,
      sym_divert,
  [6799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__block_start,
    ACTIONS(702), 1,
      sym__block_end,
    STATE(217), 1,
      sym_content_block,
    STATE(218), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
    ACTIONS(706), 1,
      sym__block_start,
    STATE(216), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    ACTIONS(710), 1,
      sym__block_start,
    STATE(212), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__divert_mark,
    ACTIONS(713), 1,
      anon_sym_LBRACK,
    ACTIONS(715), 1,
      sym__eol,
    STATE(300), 1,
      sym_divert,
  [6860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(706), 1,
      sym__block_start,
    STATE(216), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      aux_sym__knot_mark_token1,
    STATE(258), 1,
      sym__knot_mark,
    STATE(210), 2,
      sym_knot,
      sym_function_declaration,
  [6888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      ts_builtin_sym_end,
    ACTIONS(719), 1,
      sym__block_start,
    STATE(216), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym__block_start,
    ACTIONS(724), 1,
      sym__block_end,
    STATE(222), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym__block_start,
    ACTIONS(724), 1,
      sym__block_end,
    STATE(221), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(265), 2,
      sym__param,
      sym_divert,
  [6944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    ACTIONS(706), 1,
      sym__block_start,
    STATE(216), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__block_end,
    ACTIONS(728), 1,
      sym__block_start,
    STATE(221), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym__block_start,
    ACTIONS(731), 1,
      sym__block_end,
    STATE(221), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__block_start,
    ACTIONS(735), 1,
      sym__block_end,
    STATE(292), 1,
      sym_content_block,
  [6999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(737), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_tag,
    ACTIONS(741), 1,
      sym__eol,
    STATE(230), 1,
      aux_sym__content_item_repeat1,
  [7023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_params_repeat1,
  [7036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_args_repeat1,
  [7049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym_identifier,
    ACTIONS(755), 1,
      sym__eol,
    STATE(251), 1,
      sym_qualified_name,
  [7062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_params_repeat1,
  [7075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_tag,
    ACTIONS(764), 1,
      sym__eol,
    STATE(230), 1,
      aux_sym__content_item_repeat1,
  [7088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_tag,
    ACTIONS(766), 1,
      sym__eol,
    STATE(230), 1,
      aux_sym__content_item_repeat1,
  [7101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_return,
    STATE(290), 2,
      sym__code_stmt,
      sym_return,
  [7112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_args_repeat1,
  [7125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(776), 1,
      sym__eol,
    STATE(305), 1,
      sym__knot_mark,
  [7138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_tag,
    ACTIONS(778), 1,
      sym__eol,
    STATE(230), 1,
      aux_sym__content_item_repeat1,
  [7151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_params_repeat1,
  [7164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym__eol,
    ACTIONS(782), 1,
      sym_tag,
    STATE(225), 1,
      aux_sym__content_item_repeat1,
  [7177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__block_start,
    ACTIONS(784), 1,
      sym__block_end,
    STATE(295), 1,
      sym_content_block,
  [7190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__divert_mark,
    ACTIONS(786), 1,
      sym__eol,
    STATE(298), 1,
      sym_divert,
  [7203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(737), 2,
      sym__eol,
      sym_tag,
  [7214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_args_repeat1,
  [7227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_stitch,
  [7237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 2,
      sym__block_start,
      sym__block_end,
  [7245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__block_start,
      sym__block_end,
  [7253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      sym__block_start,
      sym__block_end,
  [7277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_identifier,
    STATE(186), 1,
      sym_qualified_name,
  [7287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 2,
      sym__block_start,
      sym__block_end,
  [7303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 2,
      sym__eol,
      sym_tag,
  [7311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 2,
      sym__block_start,
      sym__block_end,
  [7327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(251), 1,
      sym_qualified_name,
  [7337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 2,
      sym__eol,
      sym__divert_mark,
  [7345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_function,
    ACTIONS(816), 1,
      sym_identifier,
  [7371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_EQ,
    STATE(223), 1,
      sym_stitch,
  [7389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 2,
      sym__block_start,
      sym__block_end,
  [7397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 2,
      sym__block_start,
      sym__block_end,
  [7405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 2,
      sym__eol,
      sym__divert_mark,
  [7413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 2,
      sym__block_start,
      sym__block_end,
  [7421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 2,
      sym__eol,
      sym__divert_mark,
  [7445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 2,
      sym__eol,
      sym__divert_mark,
  [7453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_identifier,
    STATE(259), 1,
      sym_qualified_name,
  [7463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
  [7470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_LBRACE2,
  [7477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
  [7484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [7491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__eol,
  [7498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
  [7505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_identifier,
  [7512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
  [7519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym__eol,
  [7526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__eol,
  [7533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym__eol,
  [7540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__eol,
  [7547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__eol,
  [7554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__block_end,
  [7561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
  [7568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_identifier,
  [7575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__eol,
  [7582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_COLON,
  [7589] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_include_token2,
  [7596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym_identifier,
  [7603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__eol,
  [7610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym_identifier,
  [7617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__block_end,
  [7624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__eol,
  [7631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym_identifier,
  [7638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym__block_end,
  [7645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym__eol,
  [7652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__eol,
  [7659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym__eol,
  [7666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__eol,
  [7673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym__eol,
  [7680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
  [7687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [7694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__eol,
  [7701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__eol,
  [7708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym__eol,
  [7715] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym_todo_comment_token1,
  [7722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
  [7729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_identifier,
  [7736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__eol,
  [7743] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LF,
  [7750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 256,
  [SMALL_STATE(6)] = 336,
  [SMALL_STATE(7)] = 416,
  [SMALL_STATE(8)] = 496,
  [SMALL_STATE(9)] = 576,
  [SMALL_STATE(10)] = 653,
  [SMALL_STATE(11)] = 730,
  [SMALL_STATE(12)] = 798,
  [SMALL_STATE(13)] = 853,
  [SMALL_STATE(14)] = 908,
  [SMALL_STATE(15)] = 963,
  [SMALL_STATE(16)] = 1009,
  [SMALL_STATE(17)] = 1055,
  [SMALL_STATE(18)] = 1101,
  [SMALL_STATE(19)] = 1147,
  [SMALL_STATE(20)] = 1193,
  [SMALL_STATE(21)] = 1239,
  [SMALL_STATE(22)] = 1281,
  [SMALL_STATE(23)] = 1325,
  [SMALL_STATE(24)] = 1367,
  [SMALL_STATE(25)] = 1393,
  [SMALL_STATE(26)] = 1435,
  [SMALL_STATE(27)] = 1465,
  [SMALL_STATE(28)] = 1507,
  [SMALL_STATE(29)] = 1551,
  [SMALL_STATE(30)] = 1589,
  [SMALL_STATE(31)] = 1619,
  [SMALL_STATE(32)] = 1653,
  [SMALL_STATE(33)] = 1689,
  [SMALL_STATE(34)] = 1729,
  [SMALL_STATE(35)] = 1773,
  [SMALL_STATE(36)] = 1799,
  [SMALL_STATE(37)] = 1840,
  [SMALL_STATE(38)] = 1867,
  [SMALL_STATE(39)] = 1905,
  [SMALL_STATE(40)] = 1943,
  [SMALL_STATE(41)] = 1981,
  [SMALL_STATE(42)] = 2019,
  [SMALL_STATE(43)] = 2057,
  [SMALL_STATE(44)] = 2095,
  [SMALL_STATE(45)] = 2119,
  [SMALL_STATE(46)] = 2143,
  [SMALL_STATE(47)] = 2177,
  [SMALL_STATE(48)] = 2209,
  [SMALL_STATE(49)] = 2247,
  [SMALL_STATE(50)] = 2277,
  [SMALL_STATE(51)] = 2315,
  [SMALL_STATE(52)] = 2343,
  [SMALL_STATE(53)] = 2381,
  [SMALL_STATE(54)] = 2405,
  [SMALL_STATE(55)] = 2429,
  [SMALL_STATE(56)] = 2467,
  [SMALL_STATE(57)] = 2491,
  [SMALL_STATE(58)] = 2529,
  [SMALL_STATE(59)] = 2553,
  [SMALL_STATE(60)] = 2591,
  [SMALL_STATE(61)] = 2629,
  [SMALL_STATE(62)] = 2667,
  [SMALL_STATE(63)] = 2707,
  [SMALL_STATE(64)] = 2745,
  [SMALL_STATE(65)] = 2783,
  [SMALL_STATE(66)] = 2819,
  [SMALL_STATE(67)] = 2857,
  [SMALL_STATE(68)] = 2891,
  [SMALL_STATE(69)] = 2923,
  [SMALL_STATE(70)] = 2963,
  [SMALL_STATE(71)] = 3001,
  [SMALL_STATE(72)] = 3029,
  [SMALL_STATE(73)] = 3067,
  [SMALL_STATE(74)] = 3107,
  [SMALL_STATE(75)] = 3147,
  [SMALL_STATE(76)] = 3185,
  [SMALL_STATE(77)] = 3223,
  [SMALL_STATE(78)] = 3261,
  [SMALL_STATE(79)] = 3299,
  [SMALL_STATE(80)] = 3337,
  [SMALL_STATE(81)] = 3375,
  [SMALL_STATE(82)] = 3413,
  [SMALL_STATE(83)] = 3453,
  [SMALL_STATE(84)] = 3491,
  [SMALL_STATE(85)] = 3519,
  [SMALL_STATE(86)] = 3554,
  [SMALL_STATE(87)] = 3589,
  [SMALL_STATE(88)] = 3624,
  [SMALL_STATE(89)] = 3659,
  [SMALL_STATE(90)] = 3694,
  [SMALL_STATE(91)] = 3727,
  [SMALL_STATE(92)] = 3760,
  [SMALL_STATE(93)] = 3795,
  [SMALL_STATE(94)] = 3830,
  [SMALL_STATE(95)] = 3865,
  [SMALL_STATE(96)] = 3898,
  [SMALL_STATE(97)] = 3921,
  [SMALL_STATE(98)] = 3956,
  [SMALL_STATE(99)] = 3987,
  [SMALL_STATE(100)] = 4022,
  [SMALL_STATE(101)] = 4057,
  [SMALL_STATE(102)] = 4088,
  [SMALL_STATE(103)] = 4123,
  [SMALL_STATE(104)] = 4158,
  [SMALL_STATE(105)] = 4193,
  [SMALL_STATE(106)] = 4228,
  [SMALL_STATE(107)] = 4261,
  [SMALL_STATE(108)] = 4296,
  [SMALL_STATE(109)] = 4331,
  [SMALL_STATE(110)] = 4366,
  [SMALL_STATE(111)] = 4401,
  [SMALL_STATE(112)] = 4436,
  [SMALL_STATE(113)] = 4471,
  [SMALL_STATE(114)] = 4506,
  [SMALL_STATE(115)] = 4533,
  [SMALL_STATE(116)] = 4568,
  [SMALL_STATE(117)] = 4600,
  [SMALL_STATE(118)] = 4632,
  [SMALL_STATE(119)] = 4654,
  [SMALL_STATE(120)] = 4676,
  [SMALL_STATE(121)] = 4710,
  [SMALL_STATE(122)] = 4738,
  [SMALL_STATE(123)] = 4770,
  [SMALL_STATE(124)] = 4800,
  [SMALL_STATE(125)] = 4822,
  [SMALL_STATE(126)] = 4856,
  [SMALL_STATE(127)] = 4890,
  [SMALL_STATE(128)] = 4924,
  [SMALL_STATE(129)] = 4956,
  [SMALL_STATE(130)] = 4978,
  [SMALL_STATE(131)] = 5010,
  [SMALL_STATE(132)] = 5032,
  [SMALL_STATE(133)] = 5066,
  [SMALL_STATE(134)] = 5098,
  [SMALL_STATE(135)] = 5124,
  [SMALL_STATE(136)] = 5143,
  [SMALL_STATE(137)] = 5174,
  [SMALL_STATE(138)] = 5205,
  [SMALL_STATE(139)] = 5236,
  [SMALL_STATE(140)] = 5267,
  [SMALL_STATE(141)] = 5298,
  [SMALL_STATE(142)] = 5329,
  [SMALL_STATE(143)] = 5360,
  [SMALL_STATE(144)] = 5391,
  [SMALL_STATE(145)] = 5410,
  [SMALL_STATE(146)] = 5439,
  [SMALL_STATE(147)] = 5460,
  [SMALL_STATE(148)] = 5489,
  [SMALL_STATE(149)] = 5518,
  [SMALL_STATE(150)] = 5547,
  [SMALL_STATE(151)] = 5578,
  [SMALL_STATE(152)] = 5609,
  [SMALL_STATE(153)] = 5640,
  [SMALL_STATE(154)] = 5671,
  [SMALL_STATE(155)] = 5702,
  [SMALL_STATE(156)] = 5733,
  [SMALL_STATE(157)] = 5764,
  [SMALL_STATE(158)] = 5785,
  [SMALL_STATE(159)] = 5804,
  [SMALL_STATE(160)] = 5835,
  [SMALL_STATE(161)] = 5866,
  [SMALL_STATE(162)] = 5888,
  [SMALL_STATE(163)] = 5910,
  [SMALL_STATE(164)] = 5932,
  [SMALL_STATE(165)] = 5956,
  [SMALL_STATE(166)] = 5980,
  [SMALL_STATE(167)] = 6004,
  [SMALL_STATE(168)] = 6028,
  [SMALL_STATE(169)] = 6052,
  [SMALL_STATE(170)] = 6069,
  [SMALL_STATE(171)] = 6088,
  [SMALL_STATE(172)] = 6107,
  [SMALL_STATE(173)] = 6126,
  [SMALL_STATE(174)] = 6145,
  [SMALL_STATE(175)] = 6162,
  [SMALL_STATE(176)] = 6181,
  [SMALL_STATE(177)] = 6198,
  [SMALL_STATE(178)] = 6217,
  [SMALL_STATE(179)] = 6240,
  [SMALL_STATE(180)] = 6263,
  [SMALL_STATE(181)] = 6280,
  [SMALL_STATE(182)] = 6299,
  [SMALL_STATE(183)] = 6318,
  [SMALL_STATE(184)] = 6337,
  [SMALL_STATE(185)] = 6357,
  [SMALL_STATE(186)] = 6377,
  [SMALL_STATE(187)] = 6393,
  [SMALL_STATE(188)] = 6409,
  [SMALL_STATE(189)] = 6427,
  [SMALL_STATE(190)] = 6449,
  [SMALL_STATE(191)] = 6471,
  [SMALL_STATE(192)] = 6487,
  [SMALL_STATE(193)] = 6505,
  [SMALL_STATE(194)] = 6523,
  [SMALL_STATE(195)] = 6541,
  [SMALL_STATE(196)] = 6556,
  [SMALL_STATE(197)] = 6573,
  [SMALL_STATE(198)] = 6588,
  [SMALL_STATE(199)] = 6603,
  [SMALL_STATE(200)] = 6618,
  [SMALL_STATE(201)] = 6635,
  [SMALL_STATE(202)] = 6652,
  [SMALL_STATE(203)] = 6669,
  [SMALL_STATE(204)] = 6686,
  [SMALL_STATE(205)] = 6704,
  [SMALL_STATE(206)] = 6722,
  [SMALL_STATE(207)] = 6742,
  [SMALL_STATE(208)] = 6762,
  [SMALL_STATE(209)] = 6780,
  [SMALL_STATE(210)] = 6799,
  [SMALL_STATE(211)] = 6816,
  [SMALL_STATE(212)] = 6830,
  [SMALL_STATE(213)] = 6844,
  [SMALL_STATE(214)] = 6860,
  [SMALL_STATE(215)] = 6874,
  [SMALL_STATE(216)] = 6888,
  [SMALL_STATE(217)] = 6902,
  [SMALL_STATE(218)] = 6916,
  [SMALL_STATE(219)] = 6930,
  [SMALL_STATE(220)] = 6944,
  [SMALL_STATE(221)] = 6958,
  [SMALL_STATE(222)] = 6972,
  [SMALL_STATE(223)] = 6986,
  [SMALL_STATE(224)] = 6999,
  [SMALL_STATE(225)] = 7010,
  [SMALL_STATE(226)] = 7023,
  [SMALL_STATE(227)] = 7036,
  [SMALL_STATE(228)] = 7049,
  [SMALL_STATE(229)] = 7062,
  [SMALL_STATE(230)] = 7075,
  [SMALL_STATE(231)] = 7088,
  [SMALL_STATE(232)] = 7101,
  [SMALL_STATE(233)] = 7112,
  [SMALL_STATE(234)] = 7125,
  [SMALL_STATE(235)] = 7138,
  [SMALL_STATE(236)] = 7151,
  [SMALL_STATE(237)] = 7164,
  [SMALL_STATE(238)] = 7177,
  [SMALL_STATE(239)] = 7190,
  [SMALL_STATE(240)] = 7203,
  [SMALL_STATE(241)] = 7214,
  [SMALL_STATE(242)] = 7227,
  [SMALL_STATE(243)] = 7237,
  [SMALL_STATE(244)] = 7245,
  [SMALL_STATE(245)] = 7253,
  [SMALL_STATE(246)] = 7261,
  [SMALL_STATE(247)] = 7269,
  [SMALL_STATE(248)] = 7277,
  [SMALL_STATE(249)] = 7287,
  [SMALL_STATE(250)] = 7295,
  [SMALL_STATE(251)] = 7303,
  [SMALL_STATE(252)] = 7311,
  [SMALL_STATE(253)] = 7319,
  [SMALL_STATE(254)] = 7327,
  [SMALL_STATE(255)] = 7337,
  [SMALL_STATE(256)] = 7345,
  [SMALL_STATE(257)] = 7353,
  [SMALL_STATE(258)] = 7361,
  [SMALL_STATE(259)] = 7371,
  [SMALL_STATE(260)] = 7379,
  [SMALL_STATE(261)] = 7389,
  [SMALL_STATE(262)] = 7397,
  [SMALL_STATE(263)] = 7405,
  [SMALL_STATE(264)] = 7413,
  [SMALL_STATE(265)] = 7421,
  [SMALL_STATE(266)] = 7429,
  [SMALL_STATE(267)] = 7437,
  [SMALL_STATE(268)] = 7445,
  [SMALL_STATE(269)] = 7453,
  [SMALL_STATE(270)] = 7463,
  [SMALL_STATE(271)] = 7470,
  [SMALL_STATE(272)] = 7477,
  [SMALL_STATE(273)] = 7484,
  [SMALL_STATE(274)] = 7491,
  [SMALL_STATE(275)] = 7498,
  [SMALL_STATE(276)] = 7505,
  [SMALL_STATE(277)] = 7512,
  [SMALL_STATE(278)] = 7519,
  [SMALL_STATE(279)] = 7526,
  [SMALL_STATE(280)] = 7533,
  [SMALL_STATE(281)] = 7540,
  [SMALL_STATE(282)] = 7547,
  [SMALL_STATE(283)] = 7554,
  [SMALL_STATE(284)] = 7561,
  [SMALL_STATE(285)] = 7568,
  [SMALL_STATE(286)] = 7575,
  [SMALL_STATE(287)] = 7582,
  [SMALL_STATE(288)] = 7589,
  [SMALL_STATE(289)] = 7596,
  [SMALL_STATE(290)] = 7603,
  [SMALL_STATE(291)] = 7610,
  [SMALL_STATE(292)] = 7617,
  [SMALL_STATE(293)] = 7624,
  [SMALL_STATE(294)] = 7631,
  [SMALL_STATE(295)] = 7638,
  [SMALL_STATE(296)] = 7645,
  [SMALL_STATE(297)] = 7652,
  [SMALL_STATE(298)] = 7659,
  [SMALL_STATE(299)] = 7666,
  [SMALL_STATE(300)] = 7673,
  [SMALL_STATE(301)] = 7680,
  [SMALL_STATE(302)] = 7687,
  [SMALL_STATE(303)] = 7694,
  [SMALL_STATE(304)] = 7701,
  [SMALL_STATE(305)] = 7708,
  [SMALL_STATE(306)] = 7715,
  [SMALL_STATE(307)] = 7722,
  [SMALL_STATE(308)] = 7729,
  [SMALL_STATE(309)] = 7736,
  [SMALL_STATE(310)] = 7743,
  [SMALL_STATE(311)] = 7750,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(167),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(106),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(17),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(232),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(231),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(28),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(254),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(288),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(287),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 13),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 13),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 19),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 19),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_item, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_item, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(37),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 26),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 26),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 20),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 20),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(161),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(101),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(15),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(81),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(165),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(90),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(167),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(95),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(17),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(161),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(98),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(15),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 16),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 16),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2), SHIFT_REPEAT(271),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2), SHIFT_REPEAT(150),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 4, .production_id = 24),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 24),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(179),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(130),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(16),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2, .production_id = 6),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_field, 3, .production_id = 14),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(185),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(145),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(20),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(190),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(148),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(19),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(162),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(164),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(166),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2), SHIFT_REPEAT(168),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gather_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert, 2, .production_id = 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 10),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 10),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 11),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 11),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 12),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 12),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 3),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(178),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(184),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(189),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_field, 3, .production_id = 14),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(260),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2), SHIFT_REPEAT(215),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(242),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(219),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(38),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2), SHIFT_REPEAT(230),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 5),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 27),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 4),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 7),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 4),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 4, .production_id = 7),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 5),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 7),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 15),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 3),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 21),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 23),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 28),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 22),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [832] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 5, .production_id = 25),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 4),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 18),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 17),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 3, .production_id = 6),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 8),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 5),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 9),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
  },
  [4] = {
    [ts_external_token__eol] = true,
  },
  [5] = {
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

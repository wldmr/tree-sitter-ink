#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 322
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 3
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 37

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
  aux_sym__condition_field_token1 = 23,
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
  anon_sym_VAR = 36,
  aux_sym_expr_token1 = 37,
  anon_sym_false = 38,
  anon_sym_true = 39,
  anon_sym_not = 40,
  anon_sym_SLASH = 41,
  anon_sym_EQ_EQ = 42,
  anon_sym_BANG_EQ = 43,
  anon_sym_QMARK = 44,
  anon_sym_LT_EQ = 45,
  anon_sym_GT_EQ = 46,
  anon_sym_LT = 47,
  anon_sym_GT = 48,
  anon_sym_and = 49,
  anon_sym_AMP_AMP = 50,
  anon_sym_or = 51,
  anon_sym_PIPE_PIPE = 52,
  sym_identifier = 53,
  anon_sym_DOT = 54,
  sym_string = 55,
  sym_comment = 56,
  anon_sym_TODO = 57,
  anon_sym_COLON = 58,
  aux_sym_todo_comment_token1 = 59,
  sym__eol = 60,
  sym__block_start = 61,
  sym__block_end = 62,
  sym__error_sentinel = 63,
  sym_ink = 64,
  sym_content_block = 65,
  sym_knot_block = 66,
  sym_stitch_block = 67,
  sym__content_item = 68,
  sym_text = 69,
  sym_paragraph = 70,
  sym_flow = 71,
  sym_logic = 72,
  sym_choice = 73,
  sym_gather = 74,
  sym__label_field = 75,
  sym__condition_field = 76,
  sym__choice_content = 77,
  sym__compound_choice_content = 78,
  sym_knot = 79,
  sym__knot_mark = 80,
  sym_stitch = 81,
  sym_function_declaration = 82,
  sym_code = 83,
  sym__code_stmt = 84,
  sym_assignment = 85,
  sym_return = 86,
  sym__param = 87,
  sym_params = 88,
  sym_divert = 89,
  sym_include = 90,
  sym_var = 91,
  sym_call = 92,
  sym_args = 93,
  sym_paren = 94,
  sym_unary = 95,
  sym_binary = 96,
  sym_qualified_name = 97,
  sym_todo_comment = 98,
  aux_sym_ink_repeat1 = 99,
  aux_sym_ink_repeat2 = 100,
  aux_sym_content_block_repeat1 = 101,
  aux_sym__content_item_repeat1 = 102,
  aux_sym_text_repeat1 = 103,
  aux_sym_flow_repeat1 = 104,
  aux_sym_logic_repeat1 = 105,
  aux_sym_choice_repeat1 = 106,
  aux_sym_choice_repeat2 = 107,
  aux_sym_gather_repeat1 = 108,
  aux_sym_params_repeat1 = 109,
  aux_sym_args_repeat1 = 110,
  anon_alias_sym__flow = 111,
  alias_sym_once_only_mark = 112,
  alias_sym_shuffle_mark = 113,
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
  [aux_sym__condition_field_token1] = "_condition_field_token1",
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
  [anon_sym_VAR] = "VAR",
  [aux_sym_expr_token1] = "number",
  [anon_sym_false] = "boolean",
  [anon_sym_true] = "boolean",
  [anon_sym_not] = "not",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_QMARK] = "\?",
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
  [sym_string] = "string",
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
  [sym__condition_field] = "_condition_field",
  [sym__choice_content] = "_choice_content",
  [sym__compound_choice_content] = "_compound_choice_content",
  [sym_knot] = "knot",
  [sym__knot_mark] = "_knot_mark",
  [sym_stitch] = "stitch",
  [sym_function_declaration] = "function_declaration",
  [sym_code] = "code",
  [sym__code_stmt] = "_code_stmt",
  [sym_assignment] = "assignment",
  [sym_return] = "return",
  [sym__param] = "_param",
  [sym_params] = "params",
  [sym_divert] = "divert",
  [sym_include] = "include",
  [sym_var] = "var",
  [sym_call] = "call",
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
  [aux_sym__condition_field_token1] = aux_sym__condition_field_token1,
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
  [anon_sym_VAR] = anon_sym_VAR,
  [aux_sym_expr_token1] = aux_sym_expr_token1,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_false,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [sym_string] = sym_string,
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
  [sym__condition_field] = sym__condition_field,
  [sym__choice_content] = sym__choice_content,
  [sym__compound_choice_content] = sym__compound_choice_content,
  [sym_knot] = sym_knot,
  [sym__knot_mark] = sym__knot_mark,
  [sym_stitch] = sym_stitch,
  [sym_function_declaration] = sym_function_declaration,
  [sym_code] = sym_code,
  [sym__code_stmt] = sym__code_stmt,
  [sym_assignment] = sym_assignment,
  [sym_return] = sym_return,
  [sym__param] = sym__param,
  [sym_params] = sym_params,
  [sym_divert] = sym_divert,
  [sym_include] = sym_include,
  [sym_var] = sym_var,
  [sym_call] = sym_call,
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
  [aux_sym__condition_field_token1] = {
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
  [anon_sym_VAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = true,
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
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [sym__condition_field] = {
    .visible = false,
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
  [sym_assignment] = {
    .visible = true,
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
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
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
  field_condition = 2,
  field_final = 3,
  field_label = 4,
  field_main = 5,
  field_name = 6,
  field_op = 7,
  field_params = 8,
  field_prefix = 9,
  field_target = 10,
  field_temporary = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_condition] = "condition",
  [field_final] = "final",
  [field_label] = "label",
  [field_main] = "main",
  [field_name] = "name",
  [field_op] = "op",
  [field_params] = "params",
  [field_prefix] = "prefix",
  [field_target] = "target",
  [field_temporary] = "temporary",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 3},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 4},
  [11] = {.index = 18, .length = 4},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 1},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 1},
  [20] = {.index = 31, .length = 1},
  [21] = {.index = 32, .length = 1},
  [22] = {.index = 33, .length = 1},
  [23] = {.index = 34, .length = 4},
  [24] = {.index = 38, .length = 5},
  [25] = {.index = 43, .length = 4},
  [26] = {.index = 47, .length = 1},
  [27] = {.index = 48, .length = 1},
  [28] = {.index = 49, .length = 1},
  [29] = {.index = 50, .length = 1},
  [30] = {.index = 51, .length = 2},
  [31] = {.index = 53, .length = 2},
  [32] = {.index = 55, .length = 2},
  [33] = {.index = 57, .length = 5},
  [34] = {.index = 62, .length = 2},
  [35] = {.index = 64, .length = 2},
  [36] = {.index = 66, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_main, 0},
  [2] =
    {field_condition, 0, .inherited = true},
  [3] =
    {field_final, 1, .inherited = true},
    {field_main, 1, .inherited = true},
    {field_temporary, 1, .inherited = true},
  [6] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [9] =
    {field_label, 1, .inherited = true},
  [10] =
    {field_name, 1},
  [11] =
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [14] =
    {field_final, 2, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [18] =
    {field_condition, 1, .inherited = true},
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [22] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
  [24] =
    {field_prefix, 1},
  [25] =
    {field_op, 0},
  [26] =
    {field_name, 0},
    {field_value, 2},
  [28] =
    {field_name, 1},
    {field_value, 3},
  [30] =
    {field_label, 1},
  [31] =
    {field_condition, 1},
  [32] =
    {field_final, 2},
  [33] =
    {field_temporary, 1},
  [34] =
    {field_final, 3, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [38] =
    {field_condition, 2, .inherited = true},
    {field_final, 3, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [43] =
    {field_condition, 1, .inherited = true},
    {field_final, 3, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [47] =
    {field_op, 1},
  [48] =
    {field_name, 0},
  [49] =
    {field_name, 2},
  [50] =
    {field_condition, 2},
  [51] =
    {field_final, 3},
    {field_temporary, 1},
  [53] =
    {field_final, 3},
    {field_main, 0},
  [55] =
    {field_main, 0},
    {field_temporary, 2},
  [57] =
    {field_condition, 2, .inherited = true},
    {field_final, 4, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 4, .inherited = true},
    {field_temporary, 4, .inherited = true},
  [62] =
    {field_args, 2},
    {field_name, 0},
  [64] =
    {field_name, 2},
    {field_params, 4},
  [66] =
    {field_final, 4},
    {field_main, 0},
    {field_temporary, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym__flow,
  },
  [14] = {
    [1] = alias_sym_shuffle_mark,
  },
  [15] = {
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
  [6] = 6,
  [7] = 4,
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 28,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 21,
  [45] = 22,
  [46] = 46,
  [47] = 24,
  [48] = 25,
  [49] = 49,
  [50] = 27,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 42,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 26,
  [62] = 62,
  [63] = 63,
  [64] = 57,
  [65] = 65,
  [66] = 37,
  [67] = 63,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 58,
  [80] = 70,
  [81] = 49,
  [82] = 51,
  [83] = 83,
  [84] = 34,
  [85] = 69,
  [86] = 35,
  [87] = 59,
  [88] = 70,
  [89] = 89,
  [90] = 36,
  [91] = 32,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 89,
  [98] = 78,
  [99] = 99,
  [100] = 89,
  [101] = 70,
  [102] = 69,
  [103] = 78,
  [104] = 89,
  [105] = 78,
  [106] = 106,
  [107] = 107,
  [108] = 70,
  [109] = 69,
  [110] = 110,
  [111] = 111,
  [112] = 69,
  [113] = 113,
  [114] = 89,
  [115] = 94,
  [116] = 78,
  [117] = 70,
  [118] = 118,
  [119] = 69,
  [120] = 89,
  [121] = 77,
  [122] = 78,
  [123] = 93,
  [124] = 38,
  [125] = 71,
  [126] = 72,
  [127] = 73,
  [128] = 74,
  [129] = 75,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 137,
  [138] = 132,
  [139] = 139,
  [140] = 134,
  [141] = 141,
  [142] = 134,
  [143] = 132,
  [144] = 134,
  [145] = 133,
  [146] = 146,
  [147] = 133,
  [148] = 133,
  [149] = 134,
  [150] = 133,
  [151] = 132,
  [152] = 133,
  [153] = 132,
  [154] = 141,
  [155] = 134,
  [156] = 141,
  [157] = 135,
  [158] = 132,
  [159] = 159,
  [160] = 160,
  [161] = 141,
  [162] = 135,
  [163] = 163,
  [164] = 164,
  [165] = 135,
  [166] = 141,
  [167] = 167,
  [168] = 141,
  [169] = 169,
  [170] = 170,
  [171] = 135,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 176,
  [178] = 175,
  [179] = 179,
  [180] = 175,
  [181] = 176,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 185,
  [187] = 175,
  [188] = 183,
  [189] = 182,
  [190] = 176,
  [191] = 184,
  [192] = 183,
  [193] = 28,
  [194] = 182,
  [195] = 184,
  [196] = 185,
  [197] = 176,
  [198] = 175,
  [199] = 182,
  [200] = 63,
  [201] = 183,
  [202] = 185,
  [203] = 37,
  [204] = 175,
  [205] = 184,
  [206] = 206,
  [207] = 176,
  [208] = 183,
  [209] = 184,
  [210] = 182,
  [211] = 185,
  [212] = 184,
  [213] = 182,
  [214] = 183,
  [215] = 164,
  [216] = 185,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
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
  [236] = 229,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 243,
  [252] = 252,
  [253] = 253,
  [254] = 31,
  [255] = 255,
  [256] = 256,
  [257] = 252,
  [258] = 258,
  [259] = 259,
  [260] = 259,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 256,
  [265] = 31,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 263,
  [275] = 275,
  [276] = 256,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 279,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 31,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 286,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 295,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 297,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 286,
  [318] = 304,
  [319] = 319,
  [320] = 320,
  [321] = 321,
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
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(135);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(135);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '|') ADVANCE(142);
      if (lookahead == '~') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '|') ADVANCE(142);
      if (lookahead == '~') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(115);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '/') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(115);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(135);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 't') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '&') ADVANCE(194);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(226);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(184);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(158);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(123);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(227);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(174);
      END_STATE();
    case 50:
      if (lookahead == 'U') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == '|') ADVANCE(196);
      END_STATE();
    case 75:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != ':') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 78:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(225);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 80:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(144);
      END_STATE();
    case 81:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '*') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(121);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(135);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(228);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'V') ADVANCE(40);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(168);
      if (!aux_sym_text_token1_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '|') ADVANCE(142);
      if (lookahead == '~') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
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
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(115);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
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
          (lookahead < '|' || '~' < lookahead)) ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (!aux_sym_text_token1_character_set_2(lookahead)) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
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
          (lookahead < '|' || '~' < lookahead)) ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (!aux_sym_text_token1_character_set_3(lookahead)) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (!aux_sym_text_token1_character_set_4(lookahead)) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(146);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == 'V') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '}') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '~') ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '{') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(137);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(34);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A') ADVANCE(112);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(108);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(107);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(110);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(85);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L') ADVANCE(113);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(104);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(227);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(106);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R') ADVANCE(174);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'U') ADVANCE(105);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_text_token3);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_text_token4);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_text_token4);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_text_token5);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_text_token5);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_text_token6);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_text_token6);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_glue);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead == ':') ADVANCE(137);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(34);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '*') ADVANCE(78);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__condition_field_token1);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '{') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__condition_field_token1);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '{') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__divert_mark);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_include_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_VAR);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(226);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '>') ADVANCE(125);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '*') ADVANCE(78);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(230);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
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
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 2, .external_lex_state = 3},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21, .external_lex_state = 4},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 21, .external_lex_state = 4},
  [45] = {.lex_state = 21, .external_lex_state = 4},
  [46] = {.lex_state = 7, .external_lex_state = 4},
  [47] = {.lex_state = 21, .external_lex_state = 4},
  [48] = {.lex_state = 21, .external_lex_state = 4},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 21, .external_lex_state = 4},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21, .external_lex_state = 4},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 21, .external_lex_state = 4},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 21, .external_lex_state = 4},
  [61] = {.lex_state = 21, .external_lex_state = 4},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 21, .external_lex_state = 4},
  [67] = {.lex_state = 21, .external_lex_state = 4},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 21, .external_lex_state = 4},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 21, .external_lex_state = 4},
  [82] = {.lex_state = 21, .external_lex_state = 4},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 21, .external_lex_state = 4},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 21, .external_lex_state = 4},
  [87] = {.lex_state = 21, .external_lex_state = 4},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 21, .external_lex_state = 4},
  [91] = {.lex_state = 21, .external_lex_state = 4},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 21, .external_lex_state = 4},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 21, .external_lex_state = 4},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 21, .external_lex_state = 4},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 21, .external_lex_state = 4},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 10, .external_lex_state = 4},
  [131] = {.lex_state = 10, .external_lex_state = 4},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 12, .external_lex_state = 4},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 10, .external_lex_state = 4},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 10, .external_lex_state = 4},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 12, .external_lex_state = 4},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 6, .external_lex_state = 4},
  [157] = {.lex_state = 6, .external_lex_state = 4},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 19, .external_lex_state = 4},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 10, .external_lex_state = 4},
  [162] = {.lex_state = 10, .external_lex_state = 4},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 19, .external_lex_state = 4},
  [166] = {.lex_state = 19, .external_lex_state = 4},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 17},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 17},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 18},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 12, .external_lex_state = 4},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 12, .external_lex_state = 4},
  [179] = {.lex_state = 7, .external_lex_state = 4},
  [180] = {.lex_state = 6, .external_lex_state = 4},
  [181] = {.lex_state = 6, .external_lex_state = 4},
  [182] = {.lex_state = 6, .external_lex_state = 4},
  [183] = {.lex_state = 6, .external_lex_state = 4},
  [184] = {.lex_state = 6, .external_lex_state = 4},
  [185] = {.lex_state = 6, .external_lex_state = 4},
  [186] = {.lex_state = 12, .external_lex_state = 4},
  [187] = {.lex_state = 10, .external_lex_state = 4},
  [188] = {.lex_state = 12, .external_lex_state = 4},
  [189] = {.lex_state = 12, .external_lex_state = 4},
  [190] = {.lex_state = 10, .external_lex_state = 4},
  [191] = {.lex_state = 12, .external_lex_state = 4},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 19, .external_lex_state = 4},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 10, .external_lex_state = 4},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 10, .external_lex_state = 4},
  [202] = {.lex_state = 10, .external_lex_state = 4},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 19, .external_lex_state = 4},
  [205] = {.lex_state = 10, .external_lex_state = 4},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 19, .external_lex_state = 4},
  [212] = {.lex_state = 19, .external_lex_state = 4},
  [213] = {.lex_state = 19, .external_lex_state = 4},
  [214] = {.lex_state = 19, .external_lex_state = 4},
  [215] = {.lex_state = 19, .external_lex_state = 4},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 26},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 32},
  [224] = {.lex_state = 0, .external_lex_state = 3},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 26},
  [232] = {.lex_state = 0, .external_lex_state = 3},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 4},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0, .external_lex_state = 4},
  [239] = {.lex_state = 0, .external_lex_state = 4},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0, .external_lex_state = 3},
  [244] = {.lex_state = 0, .external_lex_state = 4},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0, .external_lex_state = 4},
  [247] = {.lex_state = 26, .external_lex_state = 4},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0, .external_lex_state = 4},
  [250] = {.lex_state = 20, .external_lex_state = 4},
  [251] = {.lex_state = 0, .external_lex_state = 3},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 31},
  [256] = {.lex_state = 26},
  [257] = {.lex_state = 0, .external_lex_state = 3},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 26},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 3},
  [268] = {.lex_state = 0, .external_lex_state = 3},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 3},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 0, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 3},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 26},
  [277] = {.lex_state = 0, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 4},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 26},
  [283] = {.lex_state = 0, .external_lex_state = 4},
  [284] = {.lex_state = 20},
  [285] = {.lex_state = 232},
  [286] = {.lex_state = 26},
  [287] = {.lex_state = 14},
  [288] = {.lex_state = 0, .external_lex_state = 4},
  [289] = {.lex_state = 0, .external_lex_state = 4},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0, .external_lex_state = 5},
  [292] = {.lex_state = 26},
  [293] = {.lex_state = 0, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 26},
  [297] = {.lex_state = 0, .external_lex_state = 5},
  [298] = {.lex_state = 20},
  [299] = {.lex_state = 26},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 4},
  [303] = {.lex_state = 0, .external_lex_state = 4},
  [304] = {.lex_state = 26},
  [305] = {.lex_state = 0, .external_lex_state = 4},
  [306] = {.lex_state = 0, .external_lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 0, .external_lex_state = 4},
  [311] = {.lex_state = 0, .external_lex_state = 4},
  [312] = {.lex_state = 0, .external_lex_state = 5},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0, .external_lex_state = 4},
  [316] = {.lex_state = 15},
  [317] = {.lex_state = 26},
  [318] = {.lex_state = 26},
  [319] = {.lex_state = 0, .external_lex_state = 4},
  [320] = {.lex_state = 0, .external_lex_state = 4},
  [321] = {.lex_state = 0},
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
    [anon_sym_VAR] = ACTIONS(1),
    [aux_sym_expr_token1] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__block_start] = ACTIONS(1),
    [sym__block_end] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(314),
    [sym_content_block] = STATE(221),
    [sym_knot_block] = STATE(228),
    [sym_stitch_block] = STATE(217),
    [aux_sym_ink_repeat1] = STATE(217),
    [aux_sym_ink_repeat2] = STATE(228),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__block_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
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
      anon_sym_VAR,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    STATE(243), 1,
      sym_stitch,
    STATE(255), 1,
      sym__knot_mark,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(224), 2,
      sym_knot,
      sym_function_declaration,
    STATE(5), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [97] = 23,
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
      anon_sym_VAR,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    STATE(251), 1,
      sym_stitch,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(8), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [184] = 22,
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
      anon_sym_VAR,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_start,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [268] = 22,
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
      anon_sym_VAR,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_start,
    ACTIONS(41), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [352] = 22,
    ACTIONS(33), 1,
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
      anon_sym_VAR,
    ACTIONS(73), 1,
      anon_sym_TODO,
    ACTIONS(76), 1,
      sym__block_start,
    ACTIONS(79), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(58), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [436] = 22,
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
      anon_sym_VAR,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_start,
    ACTIONS(81), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [520] = 22,
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
      anon_sym_VAR,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_start,
    ACTIONS(83), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [604] = 21,
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
      anon_sym_VAR,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [685] = 21,
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
      anon_sym_VAR,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(46), 1,
      aux_sym_gather_repeat1,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(222), 1,
      sym_flow,
    STATE(241), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(154), 3,
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
    STATE(293), 8,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_var,
      sym_todo_comment,
  [766] = 20,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_glue,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym__condition_field_token1,
    ACTIONS(99), 1,
      anon_sym_LBRACE2,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__divert_mark,
    STATE(13), 1,
      aux_sym_choice_repeat2,
    STATE(14), 1,
      sym__label_field,
    STATE(65), 1,
      aux_sym_choice_repeat1,
    STATE(167), 1,
      sym__condition_field,
    STATE(180), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(320), 2,
      sym__choice_content,
      sym_divert,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [836] = 16,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_glue,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      aux_sym__condition_field_token1,
    ACTIONS(99), 1,
      anon_sym_LBRACE2,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__divert_mark,
    ACTIONS(105), 1,
      anon_sym_BSLASH,
    STATE(146), 1,
      aux_sym_choice_repeat2,
    STATE(167), 1,
      sym__condition_field,
    STATE(180), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(288), 2,
      sym__choice_content,
      sym_divert,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [893] = 16,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_glue,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      aux_sym__condition_field_token1,
    ACTIONS(99), 1,
      anon_sym_LBRACE2,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__divert_mark,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    STATE(146), 1,
      aux_sym_choice_repeat2,
    STATE(167), 1,
      sym__condition_field,
    STATE(180), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(302), 2,
      sym__choice_content,
      sym_divert,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [950] = 16,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_glue,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      aux_sym__condition_field_token1,
    ACTIONS(99), 1,
      anon_sym_LBRACE2,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__divert_mark,
    ACTIONS(109), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      aux_sym_choice_repeat2,
    STATE(167), 1,
      sym__condition_field,
    STATE(180), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(305), 2,
      sym__choice_content,
      sym_divert,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1007] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_TILDE,
    ACTIONS(121), 1,
      anon_sym_BANG,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    STATE(116), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    ACTIONS(117), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1053] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_TILDE,
    ACTIONS(129), 1,
      anon_sym_BANG,
    ACTIONS(131), 1,
      anon_sym_PIPE,
    STATE(122), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    ACTIONS(125), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1099] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_TILDE,
    ACTIONS(137), 1,
      anon_sym_BANG,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    ACTIONS(133), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1145] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_TILDE,
    ACTIONS(145), 1,
      anon_sym_BANG,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    ACTIONS(141), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1191] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_TILDE,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    ACTIONS(149), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1237] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_TILDE,
    ACTIONS(161), 1,
      anon_sym_BANG,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    ACTIONS(157), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1283] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(165), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1325] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1365] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_args_repeat1,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1413] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1451] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 14,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(193), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(189), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(197), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1580] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(201), 2,
      sym__block_start,
      sym__block_end,
    ACTIONS(199), 17,
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
      anon_sym_VAR,
      anon_sym_TODO,
  [1607] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1650] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym__block_start,
      sym__block_end,
    ACTIONS(205), 17,
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
      anon_sym_VAR,
      anon_sym_TODO,
  [1677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1703] = 11,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_glue,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__divert_mark,
    STATE(180), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(294), 2,
      sym__choice_content,
      sym_divert,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1745] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 14,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1885] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(197), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 14,
      sym__eol,
      sym_tag,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1955] = 11,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_glue,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__divert_mark,
    STATE(180), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(289), 2,
      sym__choice_content,
      sym_divert,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1997] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(281), 1,
      sym_args,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(231), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(233), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(43), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [2039] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_args_repeat1,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2081] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(165), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2121] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2159] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_glue,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym__eol,
    STATE(159), 1,
      sym__label_field,
    STATE(179), 1,
      aux_sym_gather_repeat1,
    STATE(204), 1,
      aux_sym_text_repeat1,
    STATE(319), 1,
      sym_flow,
    STATE(166), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(251), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2203] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 10,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2239] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 12,
      sym__eol,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2273] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(165), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 13,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2339] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2373] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2415] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      sym__eol,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(265), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2457] = 11,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_glue,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__divert_mark,
    STATE(180), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(277), 2,
      sym__choice_content,
      sym_divert,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2499] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(269), 1,
      sym__eol,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(265), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2541] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym_args,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(231), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(233), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(43), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [2583] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2677] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      sym__eol,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(265), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 13,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2749] = 11,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_glue,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__divert_mark,
    STATE(180), 1,
      aux_sym_text_repeat1,
    STATE(235), 1,
      sym_flow,
    STATE(239), 1,
      sym__compound_choice_content,
    STATE(309), 2,
      sym__choice_content,
      sym_divert,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 15,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2817] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2859] = 4,
    ACTIONS(33), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_choice_repeat1,
    ACTIONS(289), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(287), 14,
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
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [2886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 14,
      sym__eol,
      sym_tag,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 14,
      sym__eol,
      sym_tag,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2936] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2973] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3011] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3049] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3085] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(298), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(300), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(36), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3121] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(304), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(306), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(35), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3157] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(310), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(312), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(34), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3193] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(316), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(318), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(51), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3229] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(322), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(324), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(111), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3265] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(328), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(330), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(49), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3301] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 13,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3363] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3401] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(165), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3435] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3467] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(338), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(340), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(68), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(165), 10,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3533] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 12,
      sym__eol,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 13,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3623] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3661] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 13,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 13,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3747] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_glue,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(350), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3785] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(372), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(374), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3821] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(382), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(378), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(380), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(125), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3857] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      sym__eol,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(265), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3893] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(388), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(384), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(386), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(118), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [3929] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3967] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4005] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(394), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(396), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(113), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4041] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4079] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4117] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4155] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4193] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4231] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4269] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(412), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(414), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(95), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4305] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4341] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4379] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4417] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(422), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(424), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(107), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4453] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4489] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4527] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      sym__eol,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(265), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4563] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4601] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(432), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(434), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(71), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4637] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4675] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4713] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      anon_sym_SLASH,
    ACTIONS(269), 1,
      sym__eol,
    ACTIONS(239), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(265), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4749] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4787] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4825] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(446), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(448), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(81), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4861] = 10,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4899] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(223), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(454), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(456), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(38), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 13,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4959] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(175), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_QMARK,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4995] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(460), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(462), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(90), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5031] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(466), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(468), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(86), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5067] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(472), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(474), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(84), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5103] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_BANG,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(478), 2,
      aux_sym_expr_token1,
      sym_string,
    ACTIONS(480), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(82), 6,
      sym_divert,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5139] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_glue,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(490), 1,
      sym__divert_mark,
    ACTIONS(492), 1,
      sym__eol,
    STATE(187), 1,
      aux_sym_text_repeat1,
    STATE(273), 1,
      sym_flow,
    STATE(161), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(484), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5174] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_glue,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      sym__divert_mark,
    ACTIONS(496), 1,
      sym__eol,
    STATE(187), 1,
      aux_sym_text_repeat1,
    STATE(272), 1,
      sym_flow,
    STATE(161), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(484), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5209] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5244] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(500), 1,
      anon_sym_PIPE,
    STATE(112), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5279] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5314] = 8,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_glue,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      sym__eol,
    STATE(178), 1,
      aux_sym_text_repeat1,
    ACTIONS(513), 2,
      sym_tag,
      sym__divert_mark,
    STATE(135), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(504), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5347] = 7,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_glue,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      aux_sym_text_repeat1,
    ACTIONS(513), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(136), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(517), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5378] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_glue,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      sym__divert_mark,
    ACTIONS(528), 1,
      sym__eol,
    STATE(187), 1,
      aux_sym_text_repeat1,
    STATE(271), 1,
      sym_flow,
    STATE(161), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(484), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5413] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    STATE(80), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5448] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_glue,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      sym__divert_mark,
    ACTIONS(534), 1,
      sym__eol,
    STATE(187), 1,
      aux_sym_text_repeat1,
    STATE(266), 1,
      sym_flow,
    STATE(161), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(484), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5483] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(536), 1,
      anon_sym_PIPE,
    STATE(104), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5518] = 7,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 1,
      sym_glue,
    STATE(175), 1,
      aux_sym_text_repeat1,
    ACTIONS(540), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(136), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5549] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5584] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(544), 1,
      anon_sym_PIPE,
    STATE(101), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5619] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(546), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5654] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    STATE(102), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5689] = 6,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym__condition_field_token1,
    ACTIONS(555), 1,
      anon_sym_LBRACE2,
    STATE(146), 1,
      aux_sym_choice_repeat2,
    STATE(167), 1,
      sym__condition_field,
    ACTIONS(550), 11,
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
  [5718] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5753] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      anon_sym_PIPE,
    STATE(85), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5788] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      anon_sym_PIPE,
    STATE(89), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5823] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(564), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5858] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_PIPE,
    STATE(108), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5893] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    STATE(109), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5928] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      anon_sym_PIPE,
    STATE(88), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5963] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_glue,
    ACTIONS(574), 1,
      sym__eol,
    STATE(178), 1,
      aux_sym_text_repeat1,
    ACTIONS(540), 2,
      sym_tag,
      sym__divert_mark,
    STATE(135), 3,
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
  [5996] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    STATE(114), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6031] = 8,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(574), 1,
      sym__eol,
    ACTIONS(578), 1,
      sym_glue,
    STATE(180), 1,
      aux_sym_text_repeat1,
    ACTIONS(540), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(157), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(85), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6064] = 8,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__eol,
    ACTIONS(583), 1,
      sym_glue,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      aux_sym_text_repeat1,
    ACTIONS(513), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(157), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(580), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6097] = 9,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_glue,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    STATE(117), 1,
      aux_sym_logic_repeat1,
    STATE(174), 1,
      sym_flow,
    STATE(175), 1,
      aux_sym_text_repeat1,
    STATE(141), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(111), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6132] = 8,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_glue,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      sym__eol,
    STATE(204), 1,
      aux_sym_text_repeat1,
    STATE(301), 1,
      sym_flow,
    STATE(166), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(251), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6164] = 8,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_glue,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      aux_sym_text_repeat1,
    STATE(307), 1,
      sym_flow,
    STATE(168), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(593), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6196] = 8,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(540), 1,
      sym__divert_mark,
    ACTIONS(574), 1,
      sym__eol,
    ACTIONS(601), 1,
      sym_glue,
    STATE(187), 1,
      aux_sym_text_repeat1,
    STATE(162), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(484), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6228] = 8,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__divert_mark,
    ACTIONS(515), 1,
      sym__eol,
    ACTIONS(606), 1,
      sym_glue,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      aux_sym_text_repeat1,
    STATE(162), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(603), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6260] = 8,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_glue,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      aux_sym_text_repeat1,
    STATE(290), 1,
      sym_flow,
    STATE(168), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(593), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6292] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(614), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [6311] = 7,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__eol,
    ACTIONS(619), 1,
      sym_glue,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      aux_sym_text_repeat1,
    STATE(165), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(616), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6340] = 7,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(574), 1,
      sym__eol,
    ACTIONS(625), 1,
      sym_glue,
    STATE(204), 1,
      aux_sym_text_repeat1,
    STATE(165), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(251), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6369] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(627), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [6388] = 7,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(629), 1,
      sym_glue,
    STATE(198), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(593), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6417] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(633), 1,
      aux_sym__condition_field_token1,
    ACTIONS(631), 12,
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
  [6438] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(635), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [6457] = 7,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    ACTIONS(640), 1,
      sym_glue,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(637), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6486] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(646), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [6505] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(650), 1,
      aux_sym__condition_field_token1,
    ACTIONS(648), 12,
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
  [6526] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__divert_mark,
    STATE(206), 1,
      sym_divert,
    ACTIONS(652), 10,
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
  [6548] = 4,
    ACTIONS(33), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_text_repeat1,
    ACTIONS(658), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(656), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6570] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__eol,
    STATE(176), 1,
      aux_sym_text_repeat1,
    ACTIONS(663), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(660), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6594] = 4,
    ACTIONS(33), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_text_repeat1,
    ACTIONS(663), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(667), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6616] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__eol,
    STATE(176), 1,
      aux_sym_text_repeat1,
    ACTIONS(658), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(670), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6640] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DASH,
    ACTIONS(679), 1,
      sym__eol,
    STATE(179), 1,
      aux_sym_gather_repeat1,
    ACTIONS(674), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [6664] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__eol,
    STATE(181), 1,
      aux_sym_text_repeat1,
    ACTIONS(658), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(681), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6688] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__eol,
    STATE(181), 1,
      aux_sym_text_repeat1,
    ACTIONS(663), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(683), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6712] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__eol,
    ACTIONS(686), 10,
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
  [6731] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__eol,
    ACTIONS(690), 10,
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
  [6750] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__eol,
    ACTIONS(694), 10,
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
  [6769] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__eol,
    ACTIONS(698), 10,
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
  [6788] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__eol,
    ACTIONS(698), 10,
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
  [6807] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__eol,
    STATE(190), 1,
      aux_sym_text_repeat1,
    ACTIONS(658), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(702), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6830] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__eol,
    ACTIONS(690), 10,
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
  [6849] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__eol,
    ACTIONS(686), 10,
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
  [6868] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__eol,
    STATE(190), 1,
      aux_sym_text_repeat1,
    ACTIONS(663), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(704), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6891] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__eol,
    ACTIONS(694), 10,
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
  [6910] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(690), 11,
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
  [6927] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_DOT,
    ACTIONS(197), 10,
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
  [6946] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(686), 11,
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
  [6963] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(694), 11,
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
  [6980] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(698), 11,
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
  [6997] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__eol,
    STATE(197), 1,
      aux_sym_text_repeat1,
    ACTIONS(663), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(709), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [7019] = 4,
    ACTIONS(33), 1,
      sym_comment,
    STATE(207), 1,
      aux_sym_text_repeat1,
    ACTIONS(658), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(712), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [7039] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__eol,
    ACTIONS(686), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [7057] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(197), 10,
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
  [7073] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__eol,
    ACTIONS(690), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [7091] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__eol,
    ACTIONS(698), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [7109] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(215), 10,
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
  [7125] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__eol,
    STATE(197), 1,
      aux_sym_text_repeat1,
    ACTIONS(658), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(714), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [7147] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__eol,
    ACTIONS(694), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [7165] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(362), 10,
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
  [7181] = 4,
    ACTIONS(33), 1,
      sym_comment,
    STATE(207), 1,
      aux_sym_text_repeat1,
    ACTIONS(663), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(716), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [7201] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(690), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7216] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(694), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7231] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(686), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7246] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__eol,
    ACTIONS(698), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [7263] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__eol,
    ACTIONS(694), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [7280] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__eol,
    ACTIONS(686), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [7297] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__eol,
    ACTIONS(690), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [7314] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym__eol,
    ACTIONS(614), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [7331] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(698), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [7346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
    ACTIONS(723), 1,
      sym__block_start,
    STATE(226), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
    STATE(236), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7364] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(727), 1,
      sym_identifier,
    STATE(300), 1,
      sym_params,
    STATE(237), 2,
      sym__param,
      sym_divert,
  [7384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym__block_start,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
    STATE(230), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
    STATE(236), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(731), 1,
      aux_sym__knot_mark_token1,
    STATE(243), 1,
      sym_stitch,
    STATE(255), 1,
      sym__knot_mark,
    STATE(224), 2,
      sym_knot,
      sym_function_declaration,
  [7422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
    ACTIONS(723), 1,
      sym__block_start,
    STATE(219), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(226), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [7440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(733), 1,
      sym_tag,
    ACTIONS(735), 1,
      sym__eol,
    STATE(238), 1,
      sym_divert,
    STATE(246), 1,
      aux_sym__content_item_repeat1,
  [7459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_return,
    ACTIONS(739), 1,
      sym_identifier,
    STATE(310), 3,
      sym__code_stmt,
      sym_assignment,
      sym_return,
  [7474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__block_start,
    ACTIONS(743), 1,
      sym__block_end,
    STATE(227), 1,
      sym_content_block,
    STATE(232), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      aux_sym__knot_mark_token1,
    STATE(255), 1,
      sym__knot_mark,
    STATE(224), 2,
      sym_knot,
      sym_function_declaration,
  [7505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
    ACTIONS(745), 1,
      sym__block_start,
    STATE(234), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [7519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__block_start,
    ACTIONS(749), 1,
      sym__block_end,
    STATE(233), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
    ACTIONS(745), 1,
      sym__block_start,
    STATE(234), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [7547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym__block_start,
    ACTIONS(754), 1,
      sym__block_end,
    STATE(229), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym__block_start,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    STATE(234), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [7575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__divert_mark,
    ACTIONS(758), 1,
      sym_identifier,
    STATE(258), 2,
      sym__param,
      sym_divert,
  [7589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__block_start,
    ACTIONS(749), 1,
      sym__block_end,
    STATE(229), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__block_start,
    ACTIONS(760), 1,
      sym__block_end,
    STATE(229), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
    ACTIONS(764), 1,
      sym__block_start,
    STATE(234), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [7631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(767), 1,
      anon_sym_LBRACK,
    ACTIONS(769), 1,
      sym__eol,
    STATE(306), 1,
      sym_divert,
  [7647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
    ACTIONS(771), 1,
      sym__block_start,
    STATE(236), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_params_repeat1,
  [7674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_tag,
    ACTIONS(780), 1,
      sym__eol,
    STATE(244), 1,
      aux_sym__content_item_repeat1,
  [7687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__divert_mark,
    ACTIONS(782), 1,
      sym__eol,
    STATE(303), 1,
      sym_divert,
  [7700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_params_repeat1,
  [7713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_tag,
    ACTIONS(788), 1,
      sym__eol,
    STATE(249), 1,
      aux_sym__content_item_repeat1,
  [7726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_params_repeat1,
  [7739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym__block_start,
    ACTIONS(797), 1,
      sym__block_end,
    STATE(297), 1,
      sym_content_block,
  [7752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_tag,
    ACTIONS(799), 1,
      sym__eol,
    STATE(249), 1,
      aux_sym__content_item_repeat1,
  [7765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_args_repeat1,
  [7778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__eol,
    ACTIONS(786), 1,
      sym_tag,
    STATE(249), 1,
      aux_sym__content_item_repeat1,
  [7791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_identifier,
    ACTIONS(806), 1,
      sym__eol,
    STATE(67), 1,
      sym_qualified_name,
  [7804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym_args_repeat1,
  [7817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_tag,
    ACTIONS(813), 1,
      sym__eol,
    STATE(249), 1,
      aux_sym__content_item_repeat1,
  [7830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(817), 1,
      sym__eol,
    STATE(311), 1,
      sym__knot_mark,
  [7843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym__block_start,
    ACTIONS(819), 1,
      sym__block_end,
    STATE(312), 1,
      sym_content_block,
  [7856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym__block_start,
      sym__block_end,
  [7880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_function,
    ACTIONS(827), 1,
      sym_identifier,
  [7890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym_identifier,
    STATE(200), 1,
      sym_qualified_name,
  [7900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 2,
      sym__block_start,
      sym__block_end,
  [7908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_EQ,
    STATE(251), 1,
      sym_stitch,
  [7926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_EQ,
    STATE(243), 1,
      sym_stitch,
  [7936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 2,
      sym__block_start,
      sym__block_end,
  [7952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_identifier,
    STATE(67), 1,
      sym_qualified_name,
  [7970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 2,
      sym__eol,
      sym__divert_mark,
  [7986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 2,
      sym__block_start,
      sym__block_end,
  [7994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 2,
      sym__block_start,
      sym__block_end,
  [8002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [8010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 2,
      sym__block_start,
      sym__block_end,
  [8018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 2,
      sym__eol,
      sym__divert_mark,
  [8026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 2,
      sym__eol,
      sym__divert_mark,
  [8034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 2,
      sym__eol,
      sym__divert_mark,
  [8042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 2,
      sym__block_start,
      sym__block_end,
  [8050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 2,
      sym__block_start,
      sym__block_end,
  [8058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_identifier,
    STATE(63), 1,
      sym_qualified_name,
  [8068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__eol,
  [8075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym__eol,
  [8082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
  [8089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COLON,
  [8096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
  [8103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_identifier,
  [8110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__eol,
  [8117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_EQ,
  [8124] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym_todo_comment_token1,
  [8131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_identifier,
  [8138] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(879), 1,
      aux_sym_include_token2,
  [8145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__eol,
  [8152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__eol,
  [8159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
  [8166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__block_end,
  [8173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_identifier,
  [8180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym__eol,
  [8187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym__eol,
  [8194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [8201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_identifier,
  [8208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym__block_end,
  [8215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_EQ,
  [8222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym_identifier,
  [8229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
  [8236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__eol,
  [8243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym__eol,
  [8250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym__eol,
  [8257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_identifier,
  [8264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__eol,
  [8271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__eol,
  [8278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_RBRACK,
  [8285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [8292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym__eol,
  [8299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__eol,
  [8306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym__eol,
  [8313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__block_end,
  [8320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_LPAREN,
  [8327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      ts_builtin_sym_end,
  [8334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym__eol,
  [8341] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LF,
  [8348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_identifier,
  [8355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym_identifier,
  [8362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym__eol,
  [8369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__eol,
  [8376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_LBRACE2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 268,
  [SMALL_STATE(6)] = 352,
  [SMALL_STATE(7)] = 436,
  [SMALL_STATE(8)] = 520,
  [SMALL_STATE(9)] = 604,
  [SMALL_STATE(10)] = 685,
  [SMALL_STATE(11)] = 766,
  [SMALL_STATE(12)] = 836,
  [SMALL_STATE(13)] = 893,
  [SMALL_STATE(14)] = 950,
  [SMALL_STATE(15)] = 1007,
  [SMALL_STATE(16)] = 1053,
  [SMALL_STATE(17)] = 1099,
  [SMALL_STATE(18)] = 1145,
  [SMALL_STATE(19)] = 1191,
  [SMALL_STATE(20)] = 1237,
  [SMALL_STATE(21)] = 1283,
  [SMALL_STATE(22)] = 1325,
  [SMALL_STATE(23)] = 1365,
  [SMALL_STATE(24)] = 1413,
  [SMALL_STATE(25)] = 1451,
  [SMALL_STATE(26)] = 1487,
  [SMALL_STATE(27)] = 1519,
  [SMALL_STATE(28)] = 1551,
  [SMALL_STATE(29)] = 1580,
  [SMALL_STATE(30)] = 1607,
  [SMALL_STATE(31)] = 1650,
  [SMALL_STATE(32)] = 1677,
  [SMALL_STATE(33)] = 1703,
  [SMALL_STATE(34)] = 1745,
  [SMALL_STATE(35)] = 1777,
  [SMALL_STATE(36)] = 1807,
  [SMALL_STATE(37)] = 1833,
  [SMALL_STATE(38)] = 1859,
  [SMALL_STATE(39)] = 1885,
  [SMALL_STATE(40)] = 1927,
  [SMALL_STATE(41)] = 1955,
  [SMALL_STATE(42)] = 1997,
  [SMALL_STATE(43)] = 2039,
  [SMALL_STATE(44)] = 2081,
  [SMALL_STATE(45)] = 2121,
  [SMALL_STATE(46)] = 2159,
  [SMALL_STATE(47)] = 2203,
  [SMALL_STATE(48)] = 2239,
  [SMALL_STATE(49)] = 2273,
  [SMALL_STATE(50)] = 2309,
  [SMALL_STATE(51)] = 2339,
  [SMALL_STATE(52)] = 2373,
  [SMALL_STATE(53)] = 2415,
  [SMALL_STATE(54)] = 2457,
  [SMALL_STATE(55)] = 2499,
  [SMALL_STATE(56)] = 2541,
  [SMALL_STATE(57)] = 2583,
  [SMALL_STATE(58)] = 2625,
  [SMALL_STATE(59)] = 2651,
  [SMALL_STATE(60)] = 2677,
  [SMALL_STATE(61)] = 2719,
  [SMALL_STATE(62)] = 2749,
  [SMALL_STATE(63)] = 2791,
  [SMALL_STATE(64)] = 2817,
  [SMALL_STATE(65)] = 2859,
  [SMALL_STATE(66)] = 2886,
  [SMALL_STATE(67)] = 2911,
  [SMALL_STATE(68)] = 2936,
  [SMALL_STATE(69)] = 2973,
  [SMALL_STATE(70)] = 3011,
  [SMALL_STATE(71)] = 3049,
  [SMALL_STATE(72)] = 3085,
  [SMALL_STATE(73)] = 3121,
  [SMALL_STATE(74)] = 3157,
  [SMALL_STATE(75)] = 3193,
  [SMALL_STATE(76)] = 3229,
  [SMALL_STATE(77)] = 3265,
  [SMALL_STATE(78)] = 3301,
  [SMALL_STATE(79)] = 3339,
  [SMALL_STATE(80)] = 3363,
  [SMALL_STATE(81)] = 3401,
  [SMALL_STATE(82)] = 3435,
  [SMALL_STATE(83)] = 3467,
  [SMALL_STATE(84)] = 3503,
  [SMALL_STATE(85)] = 3533,
  [SMALL_STATE(86)] = 3571,
  [SMALL_STATE(87)] = 3599,
  [SMALL_STATE(88)] = 3623,
  [SMALL_STATE(89)] = 3661,
  [SMALL_STATE(90)] = 3699,
  [SMALL_STATE(91)] = 3723,
  [SMALL_STATE(92)] = 3747,
  [SMALL_STATE(93)] = 3785,
  [SMALL_STATE(94)] = 3821,
  [SMALL_STATE(95)] = 3857,
  [SMALL_STATE(96)] = 3893,
  [SMALL_STATE(97)] = 3929,
  [SMALL_STATE(98)] = 3967,
  [SMALL_STATE(99)] = 4005,
  [SMALL_STATE(100)] = 4041,
  [SMALL_STATE(101)] = 4079,
  [SMALL_STATE(102)] = 4117,
  [SMALL_STATE(103)] = 4155,
  [SMALL_STATE(104)] = 4193,
  [SMALL_STATE(105)] = 4231,
  [SMALL_STATE(106)] = 4269,
  [SMALL_STATE(107)] = 4305,
  [SMALL_STATE(108)] = 4341,
  [SMALL_STATE(109)] = 4379,
  [SMALL_STATE(110)] = 4417,
  [SMALL_STATE(111)] = 4453,
  [SMALL_STATE(112)] = 4489,
  [SMALL_STATE(113)] = 4527,
  [SMALL_STATE(114)] = 4563,
  [SMALL_STATE(115)] = 4601,
  [SMALL_STATE(116)] = 4637,
  [SMALL_STATE(117)] = 4675,
  [SMALL_STATE(118)] = 4713,
  [SMALL_STATE(119)] = 4749,
  [SMALL_STATE(120)] = 4787,
  [SMALL_STATE(121)] = 4825,
  [SMALL_STATE(122)] = 4861,
  [SMALL_STATE(123)] = 4899,
  [SMALL_STATE(124)] = 4935,
  [SMALL_STATE(125)] = 4959,
  [SMALL_STATE(126)] = 4995,
  [SMALL_STATE(127)] = 5031,
  [SMALL_STATE(128)] = 5067,
  [SMALL_STATE(129)] = 5103,
  [SMALL_STATE(130)] = 5139,
  [SMALL_STATE(131)] = 5174,
  [SMALL_STATE(132)] = 5209,
  [SMALL_STATE(133)] = 5244,
  [SMALL_STATE(134)] = 5279,
  [SMALL_STATE(135)] = 5314,
  [SMALL_STATE(136)] = 5347,
  [SMALL_STATE(137)] = 5378,
  [SMALL_STATE(138)] = 5413,
  [SMALL_STATE(139)] = 5448,
  [SMALL_STATE(140)] = 5483,
  [SMALL_STATE(141)] = 5518,
  [SMALL_STATE(142)] = 5549,
  [SMALL_STATE(143)] = 5584,
  [SMALL_STATE(144)] = 5619,
  [SMALL_STATE(145)] = 5654,
  [SMALL_STATE(146)] = 5689,
  [SMALL_STATE(147)] = 5718,
  [SMALL_STATE(148)] = 5753,
  [SMALL_STATE(149)] = 5788,
  [SMALL_STATE(150)] = 5823,
  [SMALL_STATE(151)] = 5858,
  [SMALL_STATE(152)] = 5893,
  [SMALL_STATE(153)] = 5928,
  [SMALL_STATE(154)] = 5963,
  [SMALL_STATE(155)] = 5996,
  [SMALL_STATE(156)] = 6031,
  [SMALL_STATE(157)] = 6064,
  [SMALL_STATE(158)] = 6097,
  [SMALL_STATE(159)] = 6132,
  [SMALL_STATE(160)] = 6164,
  [SMALL_STATE(161)] = 6196,
  [SMALL_STATE(162)] = 6228,
  [SMALL_STATE(163)] = 6260,
  [SMALL_STATE(164)] = 6292,
  [SMALL_STATE(165)] = 6311,
  [SMALL_STATE(166)] = 6340,
  [SMALL_STATE(167)] = 6369,
  [SMALL_STATE(168)] = 6388,
  [SMALL_STATE(169)] = 6417,
  [SMALL_STATE(170)] = 6438,
  [SMALL_STATE(171)] = 6457,
  [SMALL_STATE(172)] = 6486,
  [SMALL_STATE(173)] = 6505,
  [SMALL_STATE(174)] = 6526,
  [SMALL_STATE(175)] = 6548,
  [SMALL_STATE(176)] = 6570,
  [SMALL_STATE(177)] = 6594,
  [SMALL_STATE(178)] = 6616,
  [SMALL_STATE(179)] = 6640,
  [SMALL_STATE(180)] = 6664,
  [SMALL_STATE(181)] = 6688,
  [SMALL_STATE(182)] = 6712,
  [SMALL_STATE(183)] = 6731,
  [SMALL_STATE(184)] = 6750,
  [SMALL_STATE(185)] = 6769,
  [SMALL_STATE(186)] = 6788,
  [SMALL_STATE(187)] = 6807,
  [SMALL_STATE(188)] = 6830,
  [SMALL_STATE(189)] = 6849,
  [SMALL_STATE(190)] = 6868,
  [SMALL_STATE(191)] = 6891,
  [SMALL_STATE(192)] = 6910,
  [SMALL_STATE(193)] = 6927,
  [SMALL_STATE(194)] = 6946,
  [SMALL_STATE(195)] = 6963,
  [SMALL_STATE(196)] = 6980,
  [SMALL_STATE(197)] = 6997,
  [SMALL_STATE(198)] = 7019,
  [SMALL_STATE(199)] = 7039,
  [SMALL_STATE(200)] = 7057,
  [SMALL_STATE(201)] = 7073,
  [SMALL_STATE(202)] = 7091,
  [SMALL_STATE(203)] = 7109,
  [SMALL_STATE(204)] = 7125,
  [SMALL_STATE(205)] = 7147,
  [SMALL_STATE(206)] = 7165,
  [SMALL_STATE(207)] = 7181,
  [SMALL_STATE(208)] = 7201,
  [SMALL_STATE(209)] = 7216,
  [SMALL_STATE(210)] = 7231,
  [SMALL_STATE(211)] = 7246,
  [SMALL_STATE(212)] = 7263,
  [SMALL_STATE(213)] = 7280,
  [SMALL_STATE(214)] = 7297,
  [SMALL_STATE(215)] = 7314,
  [SMALL_STATE(216)] = 7331,
  [SMALL_STATE(217)] = 7346,
  [SMALL_STATE(218)] = 7364,
  [SMALL_STATE(219)] = 7384,
  [SMALL_STATE(220)] = 7402,
  [SMALL_STATE(221)] = 7422,
  [SMALL_STATE(222)] = 7440,
  [SMALL_STATE(223)] = 7459,
  [SMALL_STATE(224)] = 7474,
  [SMALL_STATE(225)] = 7491,
  [SMALL_STATE(226)] = 7505,
  [SMALL_STATE(227)] = 7519,
  [SMALL_STATE(228)] = 7533,
  [SMALL_STATE(229)] = 7547,
  [SMALL_STATE(230)] = 7561,
  [SMALL_STATE(231)] = 7575,
  [SMALL_STATE(232)] = 7589,
  [SMALL_STATE(233)] = 7603,
  [SMALL_STATE(234)] = 7617,
  [SMALL_STATE(235)] = 7631,
  [SMALL_STATE(236)] = 7647,
  [SMALL_STATE(237)] = 7661,
  [SMALL_STATE(238)] = 7674,
  [SMALL_STATE(239)] = 7687,
  [SMALL_STATE(240)] = 7700,
  [SMALL_STATE(241)] = 7713,
  [SMALL_STATE(242)] = 7726,
  [SMALL_STATE(243)] = 7739,
  [SMALL_STATE(244)] = 7752,
  [SMALL_STATE(245)] = 7765,
  [SMALL_STATE(246)] = 7778,
  [SMALL_STATE(247)] = 7791,
  [SMALL_STATE(248)] = 7804,
  [SMALL_STATE(249)] = 7817,
  [SMALL_STATE(250)] = 7830,
  [SMALL_STATE(251)] = 7843,
  [SMALL_STATE(252)] = 7856,
  [SMALL_STATE(253)] = 7864,
  [SMALL_STATE(254)] = 7872,
  [SMALL_STATE(255)] = 7880,
  [SMALL_STATE(256)] = 7890,
  [SMALL_STATE(257)] = 7900,
  [SMALL_STATE(258)] = 7908,
  [SMALL_STATE(259)] = 7916,
  [SMALL_STATE(260)] = 7926,
  [SMALL_STATE(261)] = 7936,
  [SMALL_STATE(262)] = 7944,
  [SMALL_STATE(263)] = 7952,
  [SMALL_STATE(264)] = 7960,
  [SMALL_STATE(265)] = 7970,
  [SMALL_STATE(266)] = 7978,
  [SMALL_STATE(267)] = 7986,
  [SMALL_STATE(268)] = 7994,
  [SMALL_STATE(269)] = 8002,
  [SMALL_STATE(270)] = 8010,
  [SMALL_STATE(271)] = 8018,
  [SMALL_STATE(272)] = 8026,
  [SMALL_STATE(273)] = 8034,
  [SMALL_STATE(274)] = 8042,
  [SMALL_STATE(275)] = 8050,
  [SMALL_STATE(276)] = 8058,
  [SMALL_STATE(277)] = 8068,
  [SMALL_STATE(278)] = 8075,
  [SMALL_STATE(279)] = 8082,
  [SMALL_STATE(280)] = 8089,
  [SMALL_STATE(281)] = 8096,
  [SMALL_STATE(282)] = 8103,
  [SMALL_STATE(283)] = 8110,
  [SMALL_STATE(284)] = 8117,
  [SMALL_STATE(285)] = 8124,
  [SMALL_STATE(286)] = 8131,
  [SMALL_STATE(287)] = 8138,
  [SMALL_STATE(288)] = 8145,
  [SMALL_STATE(289)] = 8152,
  [SMALL_STATE(290)] = 8159,
  [SMALL_STATE(291)] = 8166,
  [SMALL_STATE(292)] = 8173,
  [SMALL_STATE(293)] = 8180,
  [SMALL_STATE(294)] = 8187,
  [SMALL_STATE(295)] = 8194,
  [SMALL_STATE(296)] = 8201,
  [SMALL_STATE(297)] = 8208,
  [SMALL_STATE(298)] = 8215,
  [SMALL_STATE(299)] = 8222,
  [SMALL_STATE(300)] = 8229,
  [SMALL_STATE(301)] = 8236,
  [SMALL_STATE(302)] = 8243,
  [SMALL_STATE(303)] = 8250,
  [SMALL_STATE(304)] = 8257,
  [SMALL_STATE(305)] = 8264,
  [SMALL_STATE(306)] = 8271,
  [SMALL_STATE(307)] = 8278,
  [SMALL_STATE(308)] = 8285,
  [SMALL_STATE(309)] = 8292,
  [SMALL_STATE(310)] = 8299,
  [SMALL_STATE(311)] = 8306,
  [SMALL_STATE(312)] = 8313,
  [SMALL_STATE(313)] = 8320,
  [SMALL_STATE(314)] = 8327,
  [SMALL_STATE(315)] = 8334,
  [SMALL_STATE(316)] = 8341,
  [SMALL_STATE(317)] = 8348,
  [SMALL_STATE(318)] = 8355,
  [SMALL_STATE(319)] = 8362,
  [SMALL_STATE(320)] = 8369,
  [SMALL_STATE(321)] = 8376,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(178),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(154),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(17),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(223),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(241),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(46),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(264),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(287),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(282),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(280),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 26),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 26),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 16),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert, 2, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_item, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_item, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 4, .production_id = 18),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 17),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 27),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 27),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 34),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 34),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(65),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(175),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(141),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(16),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(92),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 22),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 22),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(178),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(135),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(17),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(175),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(136),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(16),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 4, .production_id = 32),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 32),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2, .production_id = 12),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2, .production_id = 12), SHIFT_REPEAT(321),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2, .production_id = 12), SHIFT_REPEAT(76),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(180),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(157),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2, .production_id = 7),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(187),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(162),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(15),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_field, 3, .production_id = 19),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(204),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(165),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(19),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 1, .production_id = 4),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_field, 4, .production_id = 29),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_field, 4, .production_id = 20),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(198),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(171),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(20),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_field, 5, .production_id = 29),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_field, 3, .production_id = 20),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(176),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(177),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2), SHIFT_REPEAT(179),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gather_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(181),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 13),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 13),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 3),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 14),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 14),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 15),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 15),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(190),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(197),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(207),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_field, 3, .production_id = 19),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(259),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2), SHIFT_REPEAT(225),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 3),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(260),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(231),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(83),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2), SHIFT_REPEAT(249),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 4),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 8),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 36),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 35),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 4, .production_id = 8),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 5),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 8),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 21),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 31),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 30),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 28),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 25),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 24),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 23),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 5, .production_id = 33),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 3, .production_id = 7),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 11),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 10),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 9),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [929] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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

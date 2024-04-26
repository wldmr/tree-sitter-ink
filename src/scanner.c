
#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

typedef enum Token {
  TEXT,
} Token_t;

void *tree_sitter_ink_external_scanner_create(void) {
  return NULL;
}

void tree_sitter_ink_external_scanner_destroy(void *payload) {
  // no-op
}

unsigned tree_sitter_ink_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  return 0;
}

void tree_sitter_ink_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  // no-op
}

bool tree_sitter_ink_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  
  if (valid_symbols[TEXT]) {
    lexer->mark_end(lexer);
    bool found_text = false;
    for (;;) {
      // printf("Current symbol is '%c' (%d).\n", lexer->lookahead, lexer->lookahead);

      switch (lexer->lookahead) {
        case '\n':
        case '{':
        case '}':
        case '[':
        case ']':
        case '|':
        case '#':
          goto end_of_text_scan;

        // FIXME: The cases checking for 'have we found text yet' are dodgy; this isn't usually a sufficient condition.
        // Example: * and + are only not part of the text if we're actually the _first_ text of a choice.
        // In all other cases it would be allowed (such as after a glue).
        // Maybe we need different kinds of TEXT for each instance?
        case '*':
        case '+':
          // If encountered before we've found any text: these are actually choices
          // For gathers see the '-' branch, natch.
          if (!found_text) {
            // printf("found choice mark in lookahead.\n");
            goto end_of_text_scan;
          }
          lexer->advance(lexer, false);
          break;

        case '=':
          if (!found_text) {
            // printf("found knot or stitch mark in lookahead.\n");
            goto end_of_text_scan;
          }
          break;

        case '\0':
          if (lexer->eof(lexer)) {
            // printf("EOF'd\n");
            goto end_of_text_scan;
          }
          break;

        case '-': // divert or gather
          lexer->advance(lexer, false);
          if (lexer->lookahead == '>') {
            // printf("found divert mark in lookahead.\n");
            goto end_of_text_scan;
          } else if (!found_text){
            // printf("found a gather in lookahead.\n");
            goto end_of_text_scan;
          }
          break;

        case '<':
          lexer->advance(lexer, false);
          if (lexer->lookahead == '>') {
            // printf("found glue mark in lookahead.\n");
            goto end_of_text_scan;
          }
          break;

        case '/':
          lexer->advance(lexer, false);
          if (lexer->lookahead == '/') {
            // printf("found line comment mark in lookahead.\n");
            goto end_of_text_scan;
          } else if (lexer->lookahead == '*') {
            // printf("found block comment start mark in lookahead.\n");
            goto end_of_text_scan;
          }
          break;

        case ' ':
        case '\t':
          // Bit of a special case: We skip whitespace until we found text.
          // This prevents "found_text" to be true if we're still consuming leading whitespace.
          lexer->advance(lexer, !found_text);
          lexer->mark_end(lexer);
          continue; // break would lead to setting found_text = true, which we don't want if this was a leading space.

        case 'T':
          // This one's a doozy: TODO<spaces>:
          lexer->advance(lexer, false);
          if (found_text) break;  // but only at the start of the line
          if (lexer->lookahead != 'O') break;
          lexer->advance(lexer, false);
          if (lexer->lookahead != 'D') break;
          lexer->advance(lexer, false);
          if (lexer->lookahead != 'O') break;
          lexer->advance(lexer, false);
          while (lexer->lookahead == ' ' || lexer->lookahead == '\t')
            lexer->advance(lexer, false);
          if (lexer->lookahead != ':') break;
          goto end_of_text_scan;

        case 'I':
          lexer->advance(lexer, false);
          // INCLUDE may only start at the beginning of the line
          if (found_text) break;
          if (lexer->lookahead != 'N') break;
          lexer->advance(lexer, false);
          if (lexer->lookahead != 'C') break;
          lexer->advance(lexer, false);
          if (lexer->lookahead != 'L') break;
          lexer->advance(lexer, false);
          if (lexer->lookahead != 'U') break;
          lexer->advance(lexer, false);
          if (lexer->lookahead != 'D') break;
          lexer->advance(lexer, false);
          if (lexer->lookahead != 'E') break;
          lexer->advance(lexer, false);
          if (lexer->lookahead != ' ' && lexer->lookahead != '\t') break;
          lexer->advance(lexer, false);
          while (lexer->lookahead == ' ' || lexer->lookahead == '\t')
            lexer->advance(lexer, false);
          goto end_of_text_scan;

        default:
          lexer->advance(lexer, false);
      }
      // if we land here, we've found characters we'd like to keep:
      lexer->mark_end(lexer);
      found_text = true;
    }

    end_of_text_scan:
    if (found_text) {
      lexer->result_symbol = TEXT;
      return true;
    } else {
      return false;
    }

  }

  // printf("Didn't expect to land here. Bug?");
  return false;
}

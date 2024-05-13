#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

typedef enum {
  END_OF_LINE,
  BLOCK_START,
  BLOCK_END,
  ERROR,
} Token;

#define DEBUG 0
// From this badass: https://stackoverflow.com/a/1644898
// and this https://www.reddit.com/r/C_Programming/comments/jq8zsq/gblfq5y/ for the ## __VA_ARGS bit
#define DBG(fmt, ...) \
        do { if (DEBUG) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
                                __LINE__, __func__, ## __VA_ARGS__); } while (0)

// Less noisy than DBG, but provides no context.
#define MSG(fmt, ...) \
        do { if (DEBUG) fprintf(stderr, fmt, ## __VA_ARGS__); } while (0)

inline void print_valid_symbols(const bool *valid_symbols) {
  if (valid_symbols[ERROR])
    MSG("======================================== ERROR =========================================\n");
  else
    MSG("========================================================================================\n");
  MSG(" %s END_OF_LINE  \t", valid_symbols[END_OF_LINE]   ? "*" : "-");
  MSG(" %s BLOCK_START  \t", valid_symbols[BLOCK_START]    ? "*" : "-");
  MSG(" %s BLOCK_END    \n", valid_symbols[BLOCK_END]      ? "*" : "-");
  MSG("------------------\n");
}

typedef uint8_t BlockLevel;
const BlockLevel BL_NONE = 0;
/// Special value meaning 'same as previous block'
const BlockLevel BL_UNSPECIFIED = 1;
const BlockLevel BL_KNOT = 2;
const BlockLevel BL_STITCH = 3;
/// CONTENT can nest arbitrarily, so this is just the lowest number for content.
const BlockLevel BL_CONTENT = 4;
const BlockLevel BL_MAX = UINT8_MAX;

typedef struct {
  Array(BlockLevel) blocks;
} Scanner;


////////////////////
// Lexing Helpers //
////////////////////

static inline void mark_end(TSLexer *lexer) {
  lexer->mark_end(lexer);
}

static inline void consume(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static inline void skip(TSLexer *lexer) {
  lexer->advance(lexer, true);
}

static inline bool is_eof(TSLexer *lexer) {
  return lexer->eof(lexer);
}

static inline int32_t lookahead(TSLexer *lexer) {
  return lexer->lookahead;
}

static inline bool is_at_line_start(TSLexer *lexer) {
  return lexer->get_column(lexer) == 0;
}


///////////////////////
// Scanner Callbacks //
///////////////////////
unsigned tree_sitter_ink_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  uint32_t size = 0;

  for (uint32_t i = 0; i < scanner->blocks.size && size <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE; i++) {
    buffer[size] = (char) *array_get(&scanner->blocks, i);
    size++;
  }

  if (size >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    // MSG("WARN: Bumped up against tree sitter serialization limit (%d)! We may have lost data!\n",
           // TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  }
  // MSG("Serializing %d bytes of state\n", size);
  return size;
}

void tree_sitter_ink_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;

  // reset all members as per suggestion in the docs
  array_delete(&scanner->blocks);

  // init from buffer, if present and required
  // MSG("Deserializing %d bytes of state.\n", length);
  if (buffer != NULL && length > 0) {
    uint32_t size = 0;
    while (size < length)
      array_push(&scanner->blocks, buffer[size++]);
    // MSG("Deserialized %d bytes of state.\n", size);
  }

  // Make sure the thing is never empty so we never have to check.
  if (scanner->blocks.size == 0)
    array_push(&scanner->blocks, BL_NONE);
}


void *tree_sitter_ink_external_scanner_create(void) {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  tree_sitter_ink_external_scanner_deserialize(scanner, NULL, 0);
  return scanner;
}

void tree_sitter_ink_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  array_delete(&scanner->blocks);
  ts_free(scanner);
}

inline char pretty(char c) {
  switch (c) {
    case '\n':
    case '\t':
    case '\f':
    case '\r':
      return '\0';
    default:
      return c;
  }
}

inline void skip_ws(TSLexer *lexer) {
  while (lookahead(lexer) <= ' ' && !is_eof(lexer))
    skip(lexer);
}

/// Looks ahead to see if a new block could be started here.
///
/// Callers must call scanner->mark_end themselves if necessary; this function does not call it.
///
/// At EOF, return BL_NONE.
/// If next non-whitespaces gives no indication, return BL_UNSPECIFIED.
///
/// Mutates lexer, does not mutate scanner.
BlockLevel lookahead_block_start(TSLexer *lexer, Scanner *scanner) {
  MSG("Looking ahead for block start marker\n");

  skip_ws(lexer);

  if (lookahead(lexer) == '\0' && is_eof(lexer)) {
    MSG("Next block: %d, because EOF.\n", BL_NONE);
    return BL_NONE;
  }

  if (lookahead(lexer) != '=') {
    MSG("Next block is content. Level indicators");
    static const BlockLevel max_markers = BL_MAX - BL_CONTENT;
    uint8_t markers = 0;
    uint32_t c = lookahead(lexer);
    while ((c == '*' || c == '+' || c == '-') && (markers < max_markers)) {
      MSG(" %c", c);
      markers += 1;
      consume(lexer);
      skip_ws(lexer);
      c = lookahead(lexer);
    }

    if (markers) {
      MSG(" -> Content at level %d.\n", BL_CONTENT + markers);
      return BL_CONTENT + markers;
    } else {
      MSG(" none -> Level unspecified.\n");
      return BL_UNSPECIFIED;
    }
  }

  // We've seen one '='; now determine whether we'll start a stitch or a knot.
  consume(lexer);
  if (lookahead(lexer) == '=') {
    MSG("Next block: %d.\n", BL_KNOT);
    return BL_KNOT;
  } else {
    MSG("Next block: %d.\n", BL_STITCH);
    return BL_STITCH;
  }
}


bool tree_sitter_ink_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  Scanner *scanner = (Scanner *)payload;

  int32_t lookahead_ = lookahead(lexer);
  MSG("\nat '%c' (%d).\n", pretty(lookahead_), lookahead_);
  print_valid_symbols(valid_symbols);

  // Start of zero length tokens, so we'll mark this spot.
  mark_end(lexer);

  if (valid_symbols[ERROR]) {
    MSG("In error recovery.\n");
    // MSG("Abort like babies!\n"); assert(false);
    // return false;
  }

  // first, try to end lines (that's always the innermost 'block')
  if (valid_symbols[END_OF_LINE]) {
    MSG("Checking for EO[L|F]\n");
    if (lookahead_ == '\n') {
      MSG("  at EOL\n");
      skip(lexer);
      lexer->result_symbol = END_OF_LINE;
      return true;
    } else if (is_eof(lexer)) {
      MSG("  at EOF\n");
      lexer->result_symbol = END_OF_LINE;
      return true;
    }
  }

  if (valid_symbols[BLOCK_START] || valid_symbols[BLOCK_END]) {
    MSG("Checking for Block delimiters.\n");

    mark_end(lexer);  // Block tokens are zero width.

    BlockLevel current_block = *array_back(&scanner->blocks);
    BlockLevel next_block = lookahead_block_start(lexer, scanner);

    // We mustn't add BL_UNSPECIFIED to the blocks array.
    if (next_block == BL_UNSPECIFIED) {
      next_block = (current_block >= BL_CONTENT) ? current_block : BL_CONTENT;
      MSG("Next block is BL_UNSPECFIED: Corrected to %d.\n", next_block);
    }

    MSG("Current %d -> Next %d: ", current_block, next_block);
    if (next_block > current_block) {
      MSG("Start block.\n");
      lexer->result_symbol = BLOCK_START;
      array_push(&scanner->blocks, next_block);
      return valid_symbols[BLOCK_START];
    } else if (current_block >= BL_CONTENT && next_block == current_block) {
      MSG("Content blocks of same level. Nothing to do.\n");
    } else if (next_block <= current_block) {
      MSG("End block.\n");
      lexer->result_symbol = BLOCK_END;
      array_pop(&scanner->blocks);
      return valid_symbols[BLOCK_END];
    } else {
      MSG("Staying at same level.\n");
    }

  }

  MSG("*** FALLTHROUGH! ***\n");
  return false;
}


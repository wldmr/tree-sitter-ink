package tree_sitter_ink_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-ink"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ink.Language())
	if language == nil {
		t.Errorf("Error loading Ink grammar")
	}
}

package tree_sitter_awk_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-awk"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_awk.Language())
	if language == nil {
		t.Errorf("Error loading Awk grammar")
	}
}

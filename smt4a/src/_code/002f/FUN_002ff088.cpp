/* NON_MATCHING: iterator spills occupy28 instead of20 bytes and the left-child branch is not outlined after the iterator comparison. -O2 differs; -Ospace restores total spill size but not registers/branch layout. */
#include "common.h"

struct WordKeyTreeNode {
    u32 color; // 0x00
    WordKeyTreeNode *parent; // 0x04; the sentinel stores the root here.
    WordKeyTreeNode *left; // 0x08
    WordKeyTreeNode *right; // 0x0c
    u32 key; // 0x10
};
struct WordKeyTree {
    u8 unk00[0x10];
    WordKeyTreeNode *sentinel; // 0x10
    u8 unk14[5];
    u8 comparator; // 0x19
};
struct WordKeyTreeIterator { WordKeyTreeNode *node; };

extern "C" {
u32 lessU32(const u8 *comparator, const u32 *left, const u32 *right);
u32 wordRefsEqual_002ff370(const WordKeyTreeIterator *left, const WordKeyTreeIterator *right);

void FUN_002ff088(WordKeyTreeIterator *out, WordKeyTree *tree, const u32 *key)
{
    WordKeyTreeNode *candidate = tree->sentinel;
    WordKeyTreeNode *node = candidate->parent;
    while (node != NULL) {
        if (lessU32(&tree->comparator, &node->key, key)) {
            node = node->right;
        }
        else {
            candidate = node;
            node = node->left;
        }
    }
    WordKeyTreeIterator result = {candidate};
    WordKeyTreeIterator end = {tree->sentinel};
    if (wordRefsEqual_002ff370(&result, &end) ||
        lessU32(&tree->comparator, key, &result.node->key)) {
        out->node = tree->sentinel;
    }
    else {
        out->node = result.node;
    }
}
}

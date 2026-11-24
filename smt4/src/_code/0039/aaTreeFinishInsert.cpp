/* NON_MATCHING: built --multifile with treeSkew/treeSplit (config: retail pushes {r4-r7, lr} with no alignment pad); retail forms the sentinel at `tree + 8` before copying the tree pointer; the build forms it from the copy. */
#include "shard/W6_W6Match3_AATreeNode.h"

extern "C" {

/* An AA tree with a sentinel node whose parent link mirrors the root. */
typedef struct AATree {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AATreeNode *root;
    /* 0x08 */ AATreeNode nil;
    /* 0x18 */ AATreeNode *leftmost;
    /* 0x1C */ AATreeNode *rightmost;
    /* 0x20 */ s32 count;
} AATree;

void treeSkew(AATreeNode **root);
void treeSplit(AATreeNode **root);

/* Finishes inserting a linked leaf: updates the extremes and count, then rebalances up to the root. */
void aaTreeFinishInsert(AATree *tree, AATreeNode *node)
{
    AATreeNode *nil = &tree->nil;
    AATreeNode *parent;

    node->left = nil;
    node->right = nil;
    node->level = 1;
    if (tree->leftmost == nil || tree->leftmost->left == node) {
        tree->leftmost = node;
    }
    if (tree->rightmost == nil || tree->rightmost->right == node) {
        tree->rightmost = node;
    }
    tree->count++;
    while ((parent = node->parent) != nil) {
        AATreeNode **link = parent->left == node ? &parent->left : &parent->right;

        treeSkew(link);
        treeSplit(link);
        node = parent;
    }
    treeSkew(&tree->root);
    treeSplit(&tree->root);
    tree->nil.parent = tree->root;
}

} /* extern "C" */

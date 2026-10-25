/* NON_MATCHING: tree/parent saved registers and initial sentinel setup differ; build preserves one additional register. */
#include "shard/W6_W6Match3_AATreeNode.h"

/* An AA tree: its root, the nil sentinel every leaf links to, and the extreme nodes. */
struct AATree {
    /* 0x00 */ AATreeNode *root;
    /* 0x04 */ AATreeNode nil;   /* nil.parent mirrors the root */
    /* 0x14 */ AATreeNode *first;
    /* 0x18 */ AATreeNode *last;
    /* 0x1C */ u32 count;
};

extern "C" {
void treeSkew(AATreeNode **root);
void treeSplit(AATreeNode **root);

/* Finishes inserting `node` (already linked under its parent) as a level-1 leaf: updates the extremes and count, then rebalances up to the root. */
void FUN_004d8f4c(AATree *tree, AATreeNode *node)
{
    AATreeNode *nil = &tree->nil;
    AATreeNode *parent;

    node->left = nil;
    node->right = nil;
    node->level = 1;
    if (tree->first == nil || tree->first->left == node) {
        tree->first = node;
    }
    if (tree->last == nil || tree->last->right == node) {
        tree->last = node;
    }
    tree->count++;
    for (parent = node->parent; parent != nil; parent = parent->parent) {
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

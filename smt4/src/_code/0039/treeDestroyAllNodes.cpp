#include "common.h"

extern "C" {

int treeDestroySubtree(void *tree, void *node);

/* A tree with a sentinel node at +8; emptying it destroys all nodes and resets the links to the sentinel. */
typedef struct Tree {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *root;
    /* 0x08 */ u8 sentinel[8];
    /* 0x10 */ void *first;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ void *last;
    /* 0x1C */ void *unk1C;
    /* 0x20 */ u32 count;
} Tree;

void treeDestroyAllNodes(Tree *tree)
{
    void *sentinel;

    treeDestroySubtree(tree, tree->root);
    sentinel = tree->sentinel;
    tree->first = sentinel;
    tree->root = sentinel;
    tree->unk1C = sentinel;
    tree->count = 0;
    tree->last = sentinel;
}

} /* extern "C" */

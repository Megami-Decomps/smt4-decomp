/* NON_MATCHING: Recursive callable-tree recycling is complete; the saved sibling pointer spills to VFP instead of retail r7 and wrapper traversal uses a different pointer layout. */
#include "sys/SharedCallable.h"

struct RecycledCallableNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ RecycledCallableNode *next;
    /* 0x0C */ RecycledCallableNode *children;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ SharedCallableSlot callable;
};
struct RecycledCallableTree {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ RecycledCallableNode *freeNodes;
};

/* Clear descendants and callable ownership, then return each sibling to the free list. */
extern "C" void FUN_00520ce0(RecycledCallableTree *tree, RecycledCallableNode *node)
{
    if (node == NULL) {
        return;
    }
    do {
        FUN_00520ce0(tree, node->children);
        RecycledCallableNode *next = node->next;
        node->children = tree->freeNodes;
        node->callable.clear(true);
        tree->freeNodes = node;
        node = next;
    } while (node != NULL);
}

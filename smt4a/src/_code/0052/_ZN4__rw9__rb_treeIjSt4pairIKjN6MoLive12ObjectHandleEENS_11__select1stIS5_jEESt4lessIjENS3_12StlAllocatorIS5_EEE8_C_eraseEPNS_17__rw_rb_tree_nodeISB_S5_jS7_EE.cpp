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
extern "C" void _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE8_C_eraseEPNS_17__rw_rb_tree_nodeISB_S5_jS7_EE(RecycledCallableTree *tree, RecycledCallableNode *node)
{
    if (node == NULL) {
        return;
    }
    do {
        _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE8_C_eraseEPNS_17__rw_rb_tree_nodeISB_S5_jS7_EE(tree, node->children);
        RecycledCallableNode *next = node->next;
        node->children = tree->freeNodes;
        node->callable.clear(true);
        tree->freeNodes = node;
        node = next;
    } while (node != NULL);
}

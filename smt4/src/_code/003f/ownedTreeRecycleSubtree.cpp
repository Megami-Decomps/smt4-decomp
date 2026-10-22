/* NON_MATCHING: compiler spills the saved left-child pointer into d8 instead of retail's GPR-only frame. */
#include "common.h"

class TreeOwnedValue {
public:
    virtual void release() = 0;
};
class TreeValueAllocator {
public:
    virtual void unused() = 0;
    virtual void free(TreeOwnedValue *value) = 0;
};
struct TreeValue {
    /* 0x00 */ TreeValueAllocator *allocator;
    /* 0x04 */ TreeOwnedValue *object;
    /* 0x08 */ TreeValue *next;
    /* 0x0C */ TreeValue *previous;
};
struct OwnedTreeNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ OwnedTreeNode *left;
    /* 0x0C */ OwnedTreeNode *right;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ TreeValue value;
};
struct OwnedTree {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ OwnedTreeNode *freeNodes;
};

/* Release owned values, unlink borrowed values and recycle every subtree node. */
extern "C" void ownedTreeRecycleSubtree(OwnedTree *tree, OwnedTreeNode *node)
{
    while (node != NULL) {
        ownedTreeRecycleSubtree(tree, node->right);
        OwnedTreeNode *left = node->left;
        node->right = tree->freeNodes;
        TreeValue *value = &node->value;
        if (value->next == NULL || value->next == value) {
            if (value->object != NULL) {
                value->object->release();
                value->allocator->free(value->object);
            }
        } else {
            value->next->previous = value->previous;
            value->previous->next = value->next;
            value->next = NULL;
            value->previous = NULL;
        }
        value->object = NULL;
        tree->freeNodes = node;
        node = left;
    }
}

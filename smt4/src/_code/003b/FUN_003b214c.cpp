/* NON_MATCHING: only the peeled first parent-right compare uses r2 in retail (the loop's own compare uses r1); the build uses r1 for both. */
#include "common.h"

struct ResourceTreeValue {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *resource;
};
struct ResourceTreeNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ResourceTreeNode *parent;
    /* 0x08 */ ResourceTreeNode *left;
    /* 0x0c */ ResourceTreeNode *right;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ ResourceTreeValue *value;
};
struct ResourceReadinessTree {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ ResourceTreeNode *sentinel;
};
struct ResourceTreeOwner {
    /* 0x0000 */ u8 unk0000[0x1414];
    /* 0x1414 */ ResourceReadinessTree tree;
};

extern "C" {
s32 FUN_003afac0(void *resource);

bool FUN_003b214c(ResourceTreeOwner *owner)
{
    ResourceReadinessTree *tree = &owner->tree;
    bool ready = true;
    ResourceTreeNode *node = tree->sentinel->left;
    for (ResourceTreeNode *end = tree->sentinel; node != end; end = tree->sentinel) {
        if (!FUN_003afac0(node->value->resource)) {
            ready = false;
        }
        ResourceTreeNode *successor = node->right;
        if (successor) {
            do {
                node = successor;
                successor = node->left;
            } while (successor);
        } else {
            ResourceTreeNode *parent = node->parent;
            ResourceTreeNode *right = parent->right;
            while (node == right) {
                node = parent;
                parent = parent->parent;
                right = parent->right;
            }
            if (node->right != parent) {
                node = parent;
            }
        }
    }
    return ready;
}
}

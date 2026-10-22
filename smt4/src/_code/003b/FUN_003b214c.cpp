/* NON_MATCHING: sentinel comparison and tree-successor loads use different registers and branches. */
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
    while (node != tree->sentinel) {
        if (!FUN_003afac0(node->value->resource)) {
            ready = false;
        }
        if (node->right) {
            node = node->right;
            while (node->left) {
                node = node->left;
            }
        } else {
            ResourceTreeNode *parent = node->parent;
            while (node == parent->right) {
                node = parent;
                parent = parent->parent;
            }
            if (node->right != parent) {
                node = parent;
            }
        }
    }
    return ready;
}
}

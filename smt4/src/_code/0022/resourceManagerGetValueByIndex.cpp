#include "common.h"

namespace {

struct TreeNodeLocalView {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TreeNodeLocalView *parent;
    /* 0x08 */ TreeNodeLocalView *left;
    /* 0x0C */ TreeNodeLocalView *right;
    /* 0x10 */ u8 unk10[0x08];
    /* 0x18 */ void *value;
};

struct TreeLocalView {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ TreeNodeLocalView *sentinel;
};

struct ObjectLocalView {
    /* 0x0000 */ u8 unk00[0x1414];
    /* 0x1414 */ TreeLocalView tree;
};

/* In-order iterator over the red-black tree's nodes (same view as smt4 FUN_003b214c). */
struct TreeIterator {
    TreeNodeLocalView *node;

    TreeIterator(TreeNodeLocalView *start) : node(start) {}
    bool operator!=(TreeNodeLocalView *other) const { return node != other; }
    TreeIterator &operator++()
    {
        TreeNodeLocalView *next = node->right;
        if (next != 0) {
            do {
                node = next;
                next = node->left;
            } while (next != 0);
        } else {
            next = node->parent;
            while (node == next->right) {
                node = next;
                next = node->parent;
            }
            if (node->right != next) {
                node = next;
            }
        }
        return *this;
    }
};

} /* namespace */

/* Returns the value at in-order position `index` of the resource tree, or NULL if out of range. */
extern "C" void *resourceManagerGetValueByIndex(ObjectLocalView *object, s32 index)
{
    s32 current = 0;
    TreeLocalView *tree = &object->tree;

    for (TreeIterator it(tree->sentinel->left); it != tree->sentinel; ++it, ++current) {
        if (index == current) {
            return it.node->value;
        }
    }
    return NULL;
}

/* NON_MATCHING: loop layout only: retail enters the left-descent loop with an unconditional branch to its bottom test (no duplicated test) and tests the parent walk at the top; the build duplicates the loop test before the body. */
#include "common.h"

extern "C" {

typedef struct TreeNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ struct TreeNode *parent;
    /* 0x08 */ struct TreeNode *left;
    /* 0x0C */ struct TreeNode *right;
} TreeNode;

typedef struct TreeIterator {
    /* 0x00 */ TreeNode *node;
} TreeIterator;

/* Advances an in-order iterator of the red-black tree to the next node. */
void FUN_0030c506(TreeIterator *it)
{
    TreeNode *node = it->node;
    TreeNode *next = node->right;

    if (next != NULL) {
        it->node = next;
        while ((next = next->left) != NULL) {
            it->node = next;
        }
    } else {
        for (;;) {
            node = node->parent;
            if (it->node != node->right) {
                break;
            }
            it->node = node;
        }
        if (it->node->right != node) {
            it->node = node;
        }
    }
}

} /* extern "C" */

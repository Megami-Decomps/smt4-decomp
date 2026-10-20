/* NON_MATCHING: retail jumps into the middle of the leftmost-descent loop (no peeled first iteration); built peels the first iteration */
#include "common.h"

extern "C" {

typedef struct TreeNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ struct TreeNode *parent;
    /* 0x08 */ struct TreeNode *left;
    /* 0x0C */ struct TreeNode *right;
} TreeNode;

typedef struct TreeIterator {
    /* 0x0 */ TreeNode *node;
} TreeIterator;

/* Advances a red-black tree iterator to the in-order successor. */
void mapIteratorNext6(TreeIterator *it)
{
    TreeNode *node = it->node;
    TreeNode *next = node->right;

    if (next != NULL) {
        it->node = next;
        node = next;
        while ((node = node->left) != NULL) {
            it->node = node;
        }
    } else {
        while (1) {
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

/* NON_MATCHING: loop shape: retail rotates the left-descent loop without peeling its first test (`b.n` into the test); built duplicates the test before the loop. */
#include "common.h"

extern "C" {

typedef struct TreeNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ struct TreeNode *parent;
    /* 0x08 */ struct TreeNode *left;
    /* 0x0C */ struct TreeNode *right;
} TreeNode;

/* Advances the in-order iterator of a red-black tree to the next node. */
void FUN_002f3f42(TreeNode **iterator)
{
    TreeNode *node = *iterator;
    TreeNode *right = node->right;

    if (right != NULL) {
        node = right;
        *iterator = node;
        while ((node = node->left) != NULL) {
            *iterator = node;
        }
    } else {
        for (;;) {
            node = node->parent;
            if (*iterator != node->right) {
                break;
            }
            *iterator = node;
        }
        if ((*iterator)->right != node) {
            *iterator = node;
        }
    }
}

} /* extern "C" */

/* NON_MATCHING: armcc keeps the left/right pointer copies in VFP registers (vldr/vstr); retail uses ARM registers for them and VFP only for the parent copy. */
#include "common.h"

extern "C" {

/* A node of the tree: an AA-tree style node with a parent link. */
typedef struct TreeNode {
    /* 0x00 */ struct TreeNode *left;
    /* 0x04 */ struct TreeNode *right;
    /* 0x08 */ struct TreeNode *parent;
    /* 0x0C */ u8 level;
} TreeNode;

/* Split step of the tree: when the right-right grandchild has the same level, rotates the right child up and raises its level. */
void treeSplit(TreeNode **link)
{
    TreeNode *node = *link;
    TreeNode *right = node->right;

    if (right->right->level == node->level) {
        TreeNode *parent = node->parent;

        node->right = right->left;
        right->left = *link;
        *link = right;
        node = right->left;
        right->parent = parent;
        node->parent = *link;
        node->right->parent = node;
        (*link)->level++;
    }
}

} /* extern "C" */

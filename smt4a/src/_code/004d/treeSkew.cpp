/* NON_MATCHING: compiler uses s1/VFP for two child-link copies where retail uses scalar r3/r2. */
#include "shard/W6_W6Match3_AATreeNode.h"

// Remove an AA-tree left horizontal link by rotating the left child upward.
extern "C" void treeSkew(AATreeNode** root)
{
    AATreeNode* node = *root;
    AATreeNode* left = node->left;
    if (left->level == node->level) {
        AATreeNode* parent = node->parent;
        node->left = left->right;
        left->right = *root;
        *root = left;
        node = left->right;
        left->parent = parent;
        node->parent = *root;
        node->left->parent = node;
    }
}

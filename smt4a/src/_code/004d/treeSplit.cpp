#include "shard/W6_W6Match3_AATreeNode.h"

extern "C" {

/* Split step of the tree: when the right-right grandchild has the same level, rotates the right child up and raises its level. */
void treeSplit(AATreeNode **link)
{
    AATreeNode *node = *link;
    if (node->right->right->level == node->level) {
        AATreeNode *right = node->right;
        AATreeNode *parent = node->parent;
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

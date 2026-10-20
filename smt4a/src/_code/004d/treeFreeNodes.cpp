#include "shard/Shard004D.h"

extern "C" {

/* Post-order walk that frees every node except the sentinel. */
void treeFreeNodes(Tree *tree, TreeNode *node)
{
    if (node != &tree->sentinel) {
        treeFreeNodes(tree, node->left);
        treeFreeNodes(tree, node->right);
        tree->freeNode(tree, node);
    }
}

} /* extern "C" */

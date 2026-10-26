/* NON_MATCHING: branch layout and the parent/child walks match retail; retail keeps the result in r0 (copying the node to r1) and reloads previous->right in the left-subtree loop, the build reuses one register for both. */
#include "shard/W6_W6Match3_AATreeNode.h"

// Find the preceding node, including traversal from the tree's sentinel.
extern "C" AATreeNode *FUN_0039717c(AATreeNode *node)
{
    AATreeNode *previous = node->left;
    AATreeNode *right = previous->right;
    if (previous != right) {
        if (right != right->right) {
            do {
                previous = previous->right;
            } while (previous->right != previous->right->right);
        }
        return previous;
    }
    if (previous == node) {
        previous = node->parent;
        AATreeNode *next = previous->right;
        if (next != node) {
            do {
                previous = next;
                next = previous->right;
            } while (next != node);
        }
        return previous;
    }
    AATreeNode *child;
    do {
        child = node;
        node = node->parent;
    } while (node->right != node && node->right != child);
    return node;
}

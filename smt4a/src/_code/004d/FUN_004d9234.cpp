/* NON_MATCHING: only the left subtree's first rightmost test compares its operands the other way round (retail cmp r2, r3: right against right->right). */
#include "shard/W6_W6Match3_AATreeNode.h"

/* Whether a node is the tree's sentinel, the only node linked to itself. */
static __inline bool aaTreeIsNil(const AATreeNode *node)
{
    return node->right == node;
}

/* Moves `node` back to its in-order predecessor; from the sentinel, to the last node. */
static __inline void aaTreeDecrement(AATreeNode *&node)
{
    AATreeNode *previous = node->left;
    AATreeNode *right = previous->right;
    if (previous != right) {
        node = previous;
        if (right != right->right) {
            do {
                node = node->right;
            } while (node->right != node->right->right);
        }
    } else if (node->left == node) {
        AATreeNode *sentinel = node;
        node = node->parent;
        while (node->right != sentinel) {
            node = node->right;
        }
    } else {
        AATreeNode *child;
        do {
            child = node;
            node = node->parent;
        } while (!aaTreeIsNil(node) && node->right != child);
    }
}

// Find the preceding node, including traversal from the tree's sentinel.
extern "C" AATreeNode *FUN_004d9234(AATreeNode *node)
{
    aaTreeDecrement(node);
    return node;
}

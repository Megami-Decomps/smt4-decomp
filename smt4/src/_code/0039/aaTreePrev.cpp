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
        /* The left subtree's rightmost node. */
        AATreeNode *last = previous;
        while (last->right != last->right->right) {
            last = last->right;
        }
        node = last;
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
extern "C" AATreeNode *aaTreePrev(AATreeNode *node)
{
    aaTreeDecrement(node);
    return node;
}

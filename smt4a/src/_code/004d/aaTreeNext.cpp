#include "shard/W6_W6Match3_AATreeNode.h"

/* Whether a node is the tree's sentinel, the only node linked to itself. */
static __inline bool aaTreeIsNil(const AATreeNode *node)
{
    return node->left == node;
}

/* Advances `node` to its in-order successor. */
static __inline void aaTreeIncrement(AATreeNode *&node)
{
    AATreeNode *next = node->right;
    AATreeNode *left = next->left;
    if (next != left) {
        /* The right subtree's leftmost node. */
        AATreeNode *first = next;
        while (first->left != first->left->left) {
            first = first->left;
        }
        node = first;
    } else if (node->right == node) {
        AATreeNode *sentinel = node;
        node = node->parent;
        while (node->left != sentinel) {
            node = node->left;
        }
    } else {
        AATreeNode *child;
        do {
            child = node;
            node = node->parent;
        } while (!aaTreeIsNil(node) && node->left != child);
    }
}

/* Finds the next node in an AA tree whose sentinel links to itself. */
extern "C" AATreeNode *aaTreeNext(AATreeNode *node)
{
    aaTreeIncrement(node);
    return node;
}

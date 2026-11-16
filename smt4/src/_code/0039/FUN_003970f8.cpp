/* NON_MATCHING: only the right subtree's first leftmost test compares its operands the other way round (retail cmp r2, r3: left against left->left). */
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
        node = next;
        if (left != left->left) {
            do {
                node = node->left;
            } while (node->left != node->left->left);
        }
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
extern "C" AATreeNode *FUN_003970f8(AATreeNode *node)
{
    aaTreeIncrement(node);
    return node;
}

/* NON_MATCHING: Right-subtree and sentinel walks keep their cursor in r1/r2 rather than retail's r0, moving the return copies. */
#include "shard/W6_W6Match3_AATreeNode.h"

/* Finds the next node in an AA tree whose sentinel links to itself. */
extern "C" AATreeNode *FUN_004d91b0(AATreeNode *node)
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
        return node;
    }
    if (next == node) {
        AATreeNode *sentinel = node;
        node = node->parent;
        left = node->left;
        if (left != sentinel) {
            do {
                node = left;
                left = node->left;
            } while (left != sentinel);
        }
        return node;
    }
    AATreeNode *child;
    do {
        child = node;
        node = node->parent;
    } while (node->left != node && node->left != child);
    return node;
}

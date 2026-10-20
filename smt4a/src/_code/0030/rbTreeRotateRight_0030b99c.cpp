#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ struct Node *parent;
    /* 0x08 */ struct Node *left;
    /* 0x0C */ struct Node *right;
} Node;

typedef struct Tree {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Node *header;      /* header->parent is the root */
} Tree;

/* Red-black tree rotation: `node`'s left child takes its place and `node` becomes that child's right child. */
void rbTreeRotateRight_0030b99c(Tree *tree, Node *node)
{
    Node *pivot;
    Node *parent;

    pivot = node->left;
    node->left = pivot->right;
    if (pivot->right != NULL) {
        pivot->right->parent = node;
    }
    pivot->parent = node->parent;
    if (tree->header->parent == node) {
        tree->header->parent = pivot;
    } else {
        parent = node->parent;
        if (parent->right == node) {
            parent->right = pivot;
        } else {
            parent->left = pivot;
        }
    }
    pivot->right = node;
    node->parent = pivot;
}

} /* extern "C" */

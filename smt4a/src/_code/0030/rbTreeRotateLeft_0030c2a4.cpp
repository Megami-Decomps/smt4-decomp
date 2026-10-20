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

/* Red-black tree rotation: `node`'s right child takes its place and `node` becomes that child's left child. */
void rbTreeRotateLeft_0030c2a4(Tree *tree, Node *node)
{
    Node *pivot;
    Node *parent;

    pivot = node->right;
    node->right = pivot->left;
    if (pivot->left != NULL) {
        pivot->left->parent = node;
    }
    pivot->parent = node->parent;
    if (tree->header->parent == node) {
        tree->header->parent = pivot;
    } else {
        parent = node->parent;
        if (parent->left == node) {
            parent->left = pivot;
        } else {
            parent->right = pivot;
        }
    }
    pivot->left = node;
    node->parent = pivot;
}

} /* extern "C" */

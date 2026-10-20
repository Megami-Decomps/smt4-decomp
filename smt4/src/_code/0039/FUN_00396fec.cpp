#include "common.h"

extern "C" {

int FUN_002328c0(...);
int FUN_00232920(...);

typedef struct Node {
    /* 0x00 */ struct Node *left;
    /* 0x04 */ struct Node *right;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 depth;
} Node;

typedef struct Tree {
    /* 0x0 */ Node *root;
} Tree;

void FUN_00396fec(Tree *tree)
{
    Node *node = tree->root;
    Node *left = node->left;
    int depth = node->depth - 1;
    u8 newDepth;

    if (((int)left->depth >= depth) && ((int)node->right->depth >= depth)) {
        return;
    }
    newDepth = (u8)depth;
    node->depth = newDepth;
    if (tree->root->right->depth > newDepth) {
        tree->root->right->depth = newDepth;
    }
    FUN_00232920(tree);
    FUN_00232920((u8 *)tree->root + 4);
    FUN_00232920((u8 *)tree->root->right + 4);
    FUN_002328c0(tree);
    FUN_002328c0((u8 *)tree->root + 4);
}

} /* extern "C" */

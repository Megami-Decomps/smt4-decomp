#include "common.h"

extern "C" {

int treeSplit(...);
int treeSkew(...);

typedef struct Node {
    /* 0x00 */ struct Node *left;
    /* 0x04 */ struct Node *right;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 depth;
} Node;

typedef struct Tree {
    /* 0x0 */ Node *root;
} Tree;

void treeRebalanceAfterErase(Tree *tree)
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
    treeSkew(tree);
    treeSkew((u8 *)tree->root + 4);
    treeSkew((u8 *)tree->root->right + 4);
    treeSplit(tree);
    treeSplit((u8 *)tree->root + 4);
}

} /* extern "C" */

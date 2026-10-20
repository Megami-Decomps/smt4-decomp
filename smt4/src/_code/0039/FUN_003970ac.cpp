#include "common.h"

extern "C" {

struct Tree;
typedef struct TreeVtbl {
    /* 0x0 */ void (*destroyNode)(struct Tree *tree, struct Node *node);
} TreeVtbl;

typedef struct Node {
    /* 0x0 */ struct Node *left;
    /* 0x4 */ struct Node *right;
} Node;

typedef struct Tree {
    /* 0x0 */ TreeVtbl *vtbl;
    /* 0x4 */ Node *root;
    /* 0x8 */ Node sentinel;
} Tree;

/* Destroys the subtree below `node` (children first). */
void FUN_003970ac(Tree *tree, Node *node)
{
    if (node != &tree->sentinel) {
        FUN_003970ac(tree, node->left);
        FUN_003970ac(tree, node->right);
        tree->vtbl->destroyNode(tree, node);
        return;
    }
}

} /* extern "C" */

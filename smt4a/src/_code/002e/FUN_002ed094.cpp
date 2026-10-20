/* NON_MATCHING: the stack frame pads with r6 (push {r4-r6, lr}) where retail pads with r3 (push {r3-r5, lr}); the code is otherwise identical. */
#include "common.h"

extern "C" {

typedef struct TreeNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ struct TreeNode *parent;
    /* 0x08 */ struct TreeNode *left;
    /* 0x0C */ struct TreeNode *right;
} TreeNode;

typedef struct Tree {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ TreeNode *header;   /* sentinel node */
    /* 0x14 */ u32 count;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 flag;
} Tree;

TreeNode *FUN_00310314(void);

/* Constructs an empty tree: allocates the sentinel header node, linked to itself on both sides. */
Tree *FUN_002ed094(Tree *tree, u8 flag)
{
    tree->unk00 = 0;
    tree->header = NULL;
    tree->count = 0;
    tree->unk18 = 0;
    tree->flag = flag;
    tree->unk0C = 0;
    tree->unk08 = 0;
    tree->unk04 = 0;
    tree->header = FUN_00310314();
    tree->header->parent = NULL;
    tree->header->left = tree->header;
    tree->header->right = tree->header;
    return tree;
}

} /* extern "C" */

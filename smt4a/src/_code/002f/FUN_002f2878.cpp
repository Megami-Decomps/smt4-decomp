/* NON_MATCHING: iterator stack slots and deferred-node loop register allocation differ from retail. */
#include "common.h"

struct TreeStorageNode {
    TreeStorageNode *next; // 0x00
    TreeStorageNode *parent; // 0x04
    TreeStorageNode *left; // 0x08
    TreeStorageNode *right; // 0x0c
};

struct TreeStorage {
    TreeStorageNode *pending; // 0x00
    TreeStorageNode *freeNodes; // 0x04
    u32 unk08[2]; // 0x08
    TreeStorageNode *sentinel; // 0x10
};

extern "C" {
void asdOperatorDeleteArray(void *memory);
void FUN_002f3f72(TreeStorageNode **result, TreeStorage *tree,
                  TreeStorageNode **first, TreeStorageNode **last);

// Erase the tree and release the deferred node allocations.
TreeStorage *FUN_002f2878(TreeStorage *tree)
{
    if (tree->sentinel != NULL) {
        TreeStorageNode *last = tree->sentinel;
        TreeStorageNode *first = last->left;
        TreeStorageNode *result;
        FUN_002f3f72(&result, tree, &first, &last);
        TreeStorageNode *sentinel = tree->sentinel;
        sentinel->right = tree->freeNodes;
        tree->freeNodes = sentinel;
        TreeStorageNode *node;
        while ((node = tree->pending) != NULL) {
            tree->pending = node->next;
            asdOperatorDeleteArray(node->left);
            asdOperatorDeleteArray(node);
        }
    }
    return tree;
}
}

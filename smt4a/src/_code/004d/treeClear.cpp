#include "shard/Shard004D.h"
#include "code/Code004d_Smt4a.h"

extern "C" {

extern void treeFreeNodes(Tree *tree, TreeNode *node);

/* Frees all nodes and resets the tree to empty. */
void treeClear(Tree *tree)
{
    TreeNode *sentinel;

    treeFreeNodes(tree, tree->root);
    sentinel = &tree->sentinel;
    tree->first = sentinel;
    tree->root = sentinel;
    tree->last = sentinel;
    tree->count = 0;
    tree->unk14 = sentinel;
}

} /* extern "C" */

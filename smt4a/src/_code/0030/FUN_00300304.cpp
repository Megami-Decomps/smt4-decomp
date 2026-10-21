/* NON_MATCHING: typed lookup uses a 48-byte frame with saved argument homes versus retail's 40-byte frame, and outlines the left-descent block differently. */
#include "shard/W6_W6Match5_SequenceTree.h"

extern "C" {
u32 wordRefsEqual_0030060c(void *left, void *right);

// Find the first not-less key, then reject it unless its sequence is equivalent.
void FUN_00300304(SequenceTreeIterator *output, SequenceTree *tree,
                  const SequenceTreeKey *key)
{
    SequenceTreeNode *candidate = tree->sentinel;
    SequenceTreeNode *node = candidate->parent;
    while (node != NULL) {
        if (FUN_0030bf3a(tree->compareState, &node->key, key)) {
            node = node->right;
        } else {
            candidate = node;
            node = node->left;
        }
    }

    SequenceTreeIterator found = {candidate};
    SequenceTreeIterator end = {tree->sentinel};
    output->node = (wordRefsEqual_0030060c(&found, &end) ||
                    FUN_0030bf3a(tree->compareState, key, &found.node->key))
                       ? tree->sentinel
                       : found.node;
}
}

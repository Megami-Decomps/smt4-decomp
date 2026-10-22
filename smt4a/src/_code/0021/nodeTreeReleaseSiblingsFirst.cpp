#include "shard/W4_Match1b_Node.h"

extern "C" void nodeTreeRelease(ReleaseTreeNode *node);

/* Release following siblings before releasing this node's subtree. */
extern "C" void nodeTreeReleaseSiblingsFirst(ReleaseTreeNode *node)
{
    if (node->next != NULL) {
        nodeTreeReleaseSiblingsFirst(node->next);
    }
    nodeTreeRelease(node);
}

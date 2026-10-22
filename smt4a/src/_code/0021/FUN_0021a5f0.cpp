#include "shard/W4_Match1b_Node.h"

extern "C" void nodeTreeRelease(ReleaseTreeNode *node);

/* Release following siblings before releasing this node's subtree. */
extern "C" void FUN_0021a5f0(ReleaseTreeNode *node)
{
    if (node->next != NULL) {
        FUN_0021a5f0(node->next);
    }
    nodeTreeRelease(node);
}

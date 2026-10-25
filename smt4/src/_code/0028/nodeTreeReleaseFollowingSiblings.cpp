#include "shard/W4_Match1b_Node.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" void nodeTreeRelease(ReleaseTreeNode *node);

/* Release following siblings before releasing this node's subtree. */
extern "C" void nodeTreeReleaseFollowingSiblings(ReleaseTreeNode *node)
{
    if (node->next != NULL) {
        nodeTreeReleaseFollowingSiblings(node->next);
    }
    nodeTreeRelease(node);
}

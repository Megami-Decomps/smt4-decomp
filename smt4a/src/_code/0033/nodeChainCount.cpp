#include "shard/Shard0033.h"

extern "C" {

/* Number of nodes in the chain starting at +0x8C. */
s32 nodeChainCount(NodeAC_Owner *owner)
{
    s32 count = 0;
    NodeAC *node;

    for (node = owner->head; node != NULL; node = node->next) {
        count++;
    }
    return count;
}

} /* extern "C" */

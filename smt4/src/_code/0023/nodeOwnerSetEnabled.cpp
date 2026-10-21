/* NON_MATCHING: default hoists the flags load above the enable branch and materializes output constants later; --cpu=5TE still differs in early-return shape and disabled-path registers. */
#include "shard/W6_W6Match3_NodeEnable.h"

extern "C" {
void nodeOwnerSetEnabled(NodeEnableOwner* owner, s32 enabled)
{
    if (owner->ready != 0) {
        NodeEnableNode* node = owner->node;
        if (enabled == 0) {
            node->flags |= 2;
            node->resource->target->enabled = 0;
            return;
        }
        node->flags &= ~2u;
        node->resource->target->enabled = 1;
    }
}

} /* extern "C" */

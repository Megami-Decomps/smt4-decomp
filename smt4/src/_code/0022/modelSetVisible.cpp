/* NON_MATCHING: common flags load is hoisted and byte constants move later; O2 also differs. CPU5TE candidate may restore branch-local loads, as seen in the related node-toggle helper. */
#include "shard/W6_W6Match3_NodeEnable.h"

struct ModelVisibilityOwner {
    u8 unk00[0x15];
    u8 ready; // 0x15
    u8 unk16[0x0e];
    NodeEnableNode *object; // 0x24
};

extern "C" {
// Toggle both the loaded model's hidden flag and its bound visibility byte.
void modelSetVisible(ModelVisibilityOwner *owner, s32 visible)
{
    if (owner->ready != 0) {
        NodeEnableNode *object = owner->object;
        if (visible != 0) {
            object->flags &= ~2u;
            object->resource->target->enabled = 1;
        } else {
            object->flags |= 2u;
            object->resource->target->enabled = 0;
        }
    }
}
}

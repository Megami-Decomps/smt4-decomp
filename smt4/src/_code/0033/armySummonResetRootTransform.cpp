#include "shard/W6_W6Match5_ArmySummon.h"
#include "shard/W4_Match1b_Node.h"

extern "C" {
void nodeSetTranslation3f(NodeOwner *owner, u32 selector, f32 x, f32 y, f32 z);
void FUN_0028c618(NodeOwner *owner, u32 selector, f32 x, f32 y, f32 z);

// Restore the summoned model's root translation and rotation to zero.
void armySummonResetRootTransform(ArmySummonState *state)
{
    if (state->model) {
        nodeSetTranslation3f(reinterpret_cast<NodeOwner *>(state->model->node),
                             0, 0.0f, 0.0f, 0.0f);
        FUN_0028c618(reinterpret_cast<NodeOwner *>(state->model->node),
                     0, 0.0f, 0.0f, 0.0f);
    }
}
}

#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"

extern "C" {

/* Behavior type 4's scale callback: sets the block's current parameters to its initial ones, the
 * scalable lengths multiplied by `scale`. */
void effBehaviorScaleType4(EffectBehaviorBlock *block, f32 scale)
{
    EffectBehaviorParameters4 *target = (EffectBehaviorParameters4 *)block->parameters;
    EffectBehaviorParameters4 *source = (EffectBehaviorParameters4 *)block->initialParameters;

    target->common.unk64 = source->common.unk64 * scale;
    target->common.unk68 = source->common.unk68 * scale;
    target->common.unk74 = source->common.unk74 * scale;
    target->common.unk7C = source->common.unk7C * scale;
    target->common.unk84 = source->common.unk84 * scale;
    target->unkC8 = source->unkC8 * scale;
    target->unkD0 = source->unkD0 * scale;
    target->unkE4 = source->unkE4 * scale;
}

} /* extern "C" */

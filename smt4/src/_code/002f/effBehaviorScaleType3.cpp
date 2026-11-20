#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"

extern "C" {

/* Behavior type 3's scale callback: sets the block's current parameters to its initial ones, the
 * scalable lengths multiplied by `scale`. */
void effBehaviorScaleType3(EffectBehaviorBlock *block, f32 scale)
{
    EffectBehaviorParameters3 *target = (EffectBehaviorParameters3 *)block->parameters;
    EffectBehaviorParameters3 *source = (EffectBehaviorParameters3 *)block->initialParameters;
    target->common.unk64 = source->common.unk64 * scale;
    target->common.unk68 = source->common.unk68 * scale;
    target->common.unk74 = source->common.unk74 * scale;
    target->common.unk7C = source->common.unk7C * scale;
    target->common.unk84 = source->common.unk84 * scale;
    target->unkC8 = source->unkC8 * scale;
    target->unkCC = source->unkCC * scale;
    target->unkD4 = source->unkD4 * scale;
    target->unkE4 = source->unkE4 * scale;
    target->unkF0 = source->unkF0 * scale;
}

} /* extern "C" */

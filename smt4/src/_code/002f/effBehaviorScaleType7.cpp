#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"

extern "C" {

/* Behavior type 7's scale callback: sets the block's current parameters to its initial ones, the
 * scalable lengths multiplied by `scale`. */
void effBehaviorScaleType7(EffectBehaviorBlock *block, f32 scale)
{
    EffectBehaviorParameters *target = block->parameters;
    EffectBehaviorParameters *source = block->initialParameters;
    target->unk64 = source->unk64 * scale;
    target->unk68 = source->unk68 * scale;
    target->unk74 = source->unk74 * scale;
    target->unk7C = source->unk7C * scale;
    target->unk84 = source->unk84 * scale;
}

} /* extern "C" */

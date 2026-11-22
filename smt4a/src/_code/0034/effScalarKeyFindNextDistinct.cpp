/* NON_MATCHING: the step division's VFP registers match retail with the key pointers; remaining: retail folds the keys' 0x44 offset into each load (the build adds it to the two key pointers first) and gives the pointers other registers. */
/* Finds the next distinct integer-key frame and computes its scaled value. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" void effScalarKeyFindNextDistinct(const EffectIntegerKeySource *source, s32 *index,
                             s32 *duration, f32 *step, f32 *value)
{
    s32 distance = 1;
    if (*index < 3) {
        for (; *index + distance < 4; ++distance) {
            *duration = source->keys[*index + distance].frame - source->keys[*index].frame;
            if (*duration > 0) {
                const EffectIntegerKey *from = &source->keys[*index];
                const EffectIntegerKey *to = &source->keys[*index + distance];
                *step = (f32)from->value / (f32)(to->frame - from->frame);
                *value = (f32)source->keys[*index].value;
                *index += distance;
                return;
            }
        }
    }
}

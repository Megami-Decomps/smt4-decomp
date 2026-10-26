/* NON_MATCHING: integer-key lookup pointer allocation and signed-value conversion registers differ. */
/* Finds the next distinct integer-key frame and computes its scaled value. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" void FUN_00291340(const EffectIntegerKeySource *source, s32 *index,
                             s32 *duration, f32 *step, f32 *value)
{
    s32 distance = 1;
    if (*index < 3) {
        for (; *index + distance < 4; ++distance) {
            *duration = source->keys[*index + distance].frame - source->keys[*index].frame;
            if (*duration > 0) {
                s32 frames = source->keys[*index + distance].frame - source->keys[*index].frame;
                *step = (f32)source->keys[*index].value / (f32)frames;
                *value = (f32)source->keys[*index].value;
                *index += distance;
                return;
            }
        }
    }
}

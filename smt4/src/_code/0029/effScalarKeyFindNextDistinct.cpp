/* NON_MATCHING (b1454): only the VFP numerator/denominator registers (retail s0/s1, built s1/s0) and the key pointer registers of the final step differ. */
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
                *step = (f32)source->keys[*index].value /
                        (f32)(source->keys[*index + distance].frame - source->keys[*index].frame);
                *value = (f32)source->keys[*index].value;
                *index += distance;
                return;
            }
        }
    }
}

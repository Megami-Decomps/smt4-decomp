/* NON_MATCHING: integer-key lookup pointer allocation and signed-value conversion registers differ. */
/* Finds the next distinct integer-key frame and computes its scaled value. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" void FUN_0034a16c(const EffectIntegerKeySource *source, s32 *index,
                             s32 *duration, f32 *step, f32 *value)
{
    if (*index >= 3) {
        return;
    }
    for (s32 distance = 1; *index + distance < 4; ++distance) {
        *duration = source->keys[*index + distance].frame - source->keys[*index].frame;
        if (*duration > 0) {
            const EffectIntegerKey *current = &source->keys[*index];
            s32 frames = source->keys[*index + distance].frame - current->frame;
            *step = (f32)current->value / (f32)frames;
            *value = (f32)source->keys[*index].value;
            *index += distance;
            return;
        }
    }
}

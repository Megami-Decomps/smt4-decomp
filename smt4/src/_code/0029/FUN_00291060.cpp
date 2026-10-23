/* NON_MATCHING: compiler emits leaf saves, places the step tail call early and omits retail's redundant key-limit check. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
void FUN_00291008(f32 *value, f32 step, f32 target);

/* Advance a scalar channel, skipping keyframes with nonpositive frame intervals. */
void FUN_00291060(const EffectIntegerKeySource *source, s32 *frame, s32 *key,
                  s32 *duration, f32 *value, f32 *step, f32 *target, u32 *flags)
{
    if (*key >= 4)
        return;
    ++*frame;
    if (*frame <= *duration) {
        FUN_00291008(value, *step, *target);
        return;
    }
    *frame = 0;
    *step = 0.0f;
    *value = 0.0f;
    *flags = 0;
    for (s32 skip = 1; *key + skip < 4; ++skip) {
        *duration = source->keys[*key + skip].frame - source->keys[*key].frame;
        if (*duration > 0) {
            *step = (f32)source->keys[*key].value /
                    (f32)(source->keys[*key + skip].frame - source->keys[*key].frame);
            *target = (f32)source->keys[*key].value;
            *key += skip;
            return;
        }
    }
}
}

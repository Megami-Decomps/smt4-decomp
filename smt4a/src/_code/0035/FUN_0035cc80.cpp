/* NON_MATCHING: the step tail call is now placed out of line like retail; remaining: leaf register saves (retail saves lr and spills differently) and retail's redundant key-limit check (cmp #3 / addlt / cmplt #4) before the skip loop. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
void FUN_00229264(f32 *value, f32 step, f32 target);

/* Advance a scalar channel, skipping keyframes with nonpositive frame intervals. */
void FUN_0035cc80(const EffectIntegerKeySource *source, s32 *frame, s32 *key,
                  s32 *duration, f32 *value, f32 *step, f32 *target, u32 *flags)
{
    if (*key >= 4)
        return;
    ++*frame;
    if (*frame > *duration) {
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
        return;
    }
    FUN_00229264(value, *step, *target);
}
}


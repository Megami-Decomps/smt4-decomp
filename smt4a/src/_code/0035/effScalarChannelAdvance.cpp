/* NON_MATCHING: the frame test is an if/else with the step tail call out of line and the skip loop guarded by `*key < 3` like retail; remaining: retail saves lr and uses it as a work register (the build saves r9 and returns with bx lr), which renumbers every register, and it predicates the key guard (cmp #3 / addlt / cmplt #4). */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
void mathStepTowards(f32 *value, f32 step, f32 target);

/* Advance a scalar channel, skipping keyframes with nonpositive frame intervals. */
void effScalarChannelAdvance(const EffectIntegerKeySource *source, s32 *frame, s32 *key,
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
        if (*key < 3) {
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
    } else {
        mathStepTowards(value, *step, *target);
    }
}
}

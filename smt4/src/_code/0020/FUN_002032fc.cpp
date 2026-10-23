/* NON_MATCHING: key address arithmetic and floating-point interpolation registers differ. */
#include "gfx/ScalarEffectKeys.h"
extern "C" f32 FUN_00291620(s32 mode, s32 range, s32 positive);

/* Advance to the next later key, randomize its value, and prepare the linear slope. */
extern "C" void FUN_002032fc(ScalarEffectKeys *work, const ScalarEffectKeys *source)
{
    if (work->nextKey >= 3)
        work->nextKey = 4;
    s32 current = work->nextKey;
    for (s32 distance = 1; current + distance < 4; ++distance) {
        work->duration = source->keys[current + distance].frame - source->keys[current].frame;
        if (work->duration <= 0)
            continue;
        ScalarEffectKey *next = &work->keys[current + distance];
        if (next->value != 0 && next->randomRange > 0) {
            s32 adjustment = static_cast<s32>(FUN_00291620(2, next->randomRange, 1));
            work->keys[work->nextKey + distance].value -= adjustment;
        }
        s32 nextIndex = work->nextKey + distance;
        const ScalarEffectKey *previous = &work->keys[work->nextKey];
        next = &work->keys[nextIndex];
        work->step = static_cast<f32>(next->value - previous->value) /
                     static_cast<f32>(next->frame - previous->frame);
        work->target = static_cast<f32>(next->value);
        work->nextKey = nextIndex;
        return;
    }
}

/* NON_MATCHING: only the final segment's four key loads differ: retail loads start.frame, start.value, end.frame, end.value and converts the frame count first; the build loads both frames first and converts the value change first. */
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
        if (work->keys[current + distance].value != 0 && work->keys[current + distance].randomRange > 0) {
            f32 adjustment = FUN_00291620(2, work->keys[current + distance].randomRange, 1);
            work->keys[work->nextKey + distance].value -= static_cast<s32>(adjustment);
        }
        s32 currentIndex = work->nextKey;
        s32 nextIndex = currentIndex + distance;
        s32 frameCount = work->keys[nextIndex].frame - work->keys[currentIndex].frame;
        s32 valueChange = work->keys[nextIndex].value - work->keys[currentIndex].value;
        work->step = static_cast<f32>(valueChange) / static_cast<f32>(frameCount);
        work->target = static_cast<f32>(work->keys[nextIndex].value);
        work->nextKey = nextIndex;
        return;
    }
}

/* NON_MATCHING (b1454): only the key-field load order (retail: start.frame, start.value, end.frame, end.value) and the index registers of the final segment differ. */
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
        s32 nextIndex = work->nextKey + distance;
        const ScalarEffectKey *previous = &work->keys[work->nextKey];
        const ScalarEffectKey *next = &work->keys[nextIndex];
        s32 frameCount = next->frame - previous->frame;
        s32 valueChange = next->value - previous->value;
        work->step = static_cast<f32>(valueChange) / static_cast<f32>(frameCount);
        work->target = static_cast<f32>(next->value);
        work->nextKey = nextIndex;
        return;
    }
}

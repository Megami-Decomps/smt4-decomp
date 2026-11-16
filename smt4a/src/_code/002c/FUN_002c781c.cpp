/* NON_MATCHING: `s32 step = 1` before the guard and a `span` local (stored to duration, then tested) bring the loop head close; remaining: retail keeps &source[current] in r2 (in place) and loads the two keys' frame/value pairs interleaved */
#include "gfx/ScalarCurveTransition.h"
extern "C" {
f32 FUN_002039d0(s32 mode, s32 maximum, u32 divisor);

// Skip duplicate-frame keys and prepare the next randomized scalar segment.
void FUN_002c781c(ScalarCurveTransition *curve, const ScalarCurveTransition *timeline)
{
    s32 step = 1;
    if (curve->currentKey >= 3)
        curve->currentKey = 4;
    s32 current = curve->currentKey;
    for (; current + step < 4; ++step) {
        s32 span = timeline->keys[current + step].frame - timeline->keys[current].frame;
        curve->duration = span;
        if (span <= 0)
            continue;
        if (curve->keys[current + step].value != 0 &&
            curve->keys[current + step].randomAmplitude > 0) {
            f32 adjustment = FUN_002039d0(2, curve->keys[current + step].randomAmplitude, 1);
            curve->keys[curve->currentKey + step].value -= static_cast<s32>(adjustment);
        }
        s32 nextIndex = curve->currentKey + step;
        const ScalarCurveKey *start = &curve->keys[curve->currentKey];
        const ScalarCurveKey *end = &curve->keys[nextIndex];
        f32 frames = static_cast<f32>(end->frame - start->frame);
        f32 difference = static_cast<f32>(end->value - start->value);
        curve->slope = difference / frames;
        curve->target = static_cast<f32>(end->value);
        curve->currentKey = static_cast<s8>(nextIndex);
        return;
    }
}
}

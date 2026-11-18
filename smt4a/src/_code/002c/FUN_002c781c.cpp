/* NON_MATCHING: only the final segment's four key loads differ: retail loads start.frame, start.value, end.frame, end.value and converts the frame count first; the build loads both frames first and converts the value change first. */
#include "gfx/ScalarCurveTransition.h"
extern "C" {
f32 FUN_002039d0(s32 mode, s32 maximum, u32 divisor);

// Skip duplicate-frame keys and prepare the next randomized scalar segment.
void FUN_002c781c(ScalarCurveTransition *curve, const ScalarCurveTransition *timeline)
{
    if (curve->currentKey >= 3)
        curve->currentKey = 4;
    s32 current = curve->currentKey;
    for (s32 step = 1; current + step < 4; ++step) {
        curve->duration = timeline->keys[current + step].frame - timeline->keys[current].frame;
        if (curve->duration <= 0)
            continue;
        if (curve->keys[current + step].value != 0 &&
            curve->keys[current + step].randomAmplitude > 0) {
            f32 adjustment = FUN_002039d0(2, curve->keys[current + step].randomAmplitude, 1);
            curve->keys[curve->currentKey + step].value -= static_cast<s32>(adjustment);
        }
        s32 currentIndex = curve->currentKey;
        s32 nextIndex = currentIndex + step;
        s32 frameCount = curve->keys[nextIndex].frame - curve->keys[currentIndex].frame;
        s32 valueChange = curve->keys[nextIndex].value - curve->keys[currentIndex].value;
        curve->slope = static_cast<f32>(valueChange) / static_cast<f32>(frameCount);
        curve->target = static_cast<f32>(curve->keys[nextIndex].value);
        curve->currentKey = static_cast<s8>(nextIndex);
        return;
    }
}
}

/* NON_MATCHING: final segment-delta loads and VFP register allocation differ; all 72 instructions and control flow otherwise agree. */
#include "gfx/ScalarCurveTransition.h"
extern "C" {
f32 FUN_00291620(s32 mode, s32 maximum, u32 divisor);

// Skip duplicate-frame keys and prepare the next randomized scalar segment.
void FUN_002031dc(ScalarCurveTransition *curve, const ScalarCurveTransition *timeline)
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
            f32 adjustment = FUN_00291620(2, curve->keys[current + step].randomAmplitude, 1);
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

/* NON_MATCHING: only the final segment's four key loads differ: retail loads start.frame, start.value, end.frame, end.value and converts the frame count first; the build loads both frames first and converts the value change first. */
#include "gfx/KeyframeSegment.h"
extern "C" {
f32 effRandomSignedValue(s32 mode, s32 range, s32 inclusive);

// Skip duplicate key times and prepare the next linear interpolation segment.
void FUN_002030bc(KeyframeSegmentState *state, const KeyframeSegmentState *definition)
{
    if (state->keyIndex >= 3)
        state->keyIndex = 4;
    s32 current = state->keyIndex;
    for (s32 step = 1; current + step < 4; ++step) {
        state->duration = definition->keys[current + step].time - definition->keys[current].time;
        if (state->duration <= 0)
            continue;
        if (state->keys[current + step].value != 0 &&
            state->keys[current + step].randomRange > 0) {
            f32 variation = effRandomSignedValue(2, state->keys[current + step].randomRange, 1);
            state->keys[state->keyIndex + step].value -= (s32)variation;
        }
        s32 currentIndex = state->keyIndex;
        s32 nextIndex = currentIndex + step;
        s32 duration = state->keys[nextIndex].time - state->keys[currentIndex].time;
        s32 distance = state->keys[nextIndex].value - state->keys[currentIndex].value;
        state->slope = (f32)distance / (f32)duration;
        state->target = (f32)state->keys[nextIndex].value;
        state->keyIndex = (s8)nextIndex;
        return;
    }
}
}

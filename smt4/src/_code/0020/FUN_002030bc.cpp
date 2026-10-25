/* NON_MATCHING: final interpolation operand loads, index registers, and VFP division registers differ. */
#include "gfx/KeyframeSegment.h"
extern "C" {
f32 FUN_00291620(s32 mode, s32 range, s32 inclusive);

// Skip duplicate key times and prepare the next linear interpolation segment.
void FUN_002030bc(KeyframeSegmentState *state, const KeyframeSegmentState *definition)
{
    if (state->keyIndex >= 3)
        state->keyIndex = 4;
    s32 current = state->keyIndex;
    s32 step = 1;
    for (; current + step < 4; ++step) {
        state->duration = definition->keys[current + step].time - definition->keys[current].time;
        if (state->duration > 0) {
            if (state->keys[current + step].value != 0 &&
                state->keys[current + step].randomRange > 0) {
                f32 variation = FUN_00291620(2, state->keys[current + step].randomRange, 1);
                state->keys[state->keyIndex + step].value -= (s16)(s32)variation;
            }
            s32 nextIndex = state->keyIndex + step;
            const KeyframeSegmentEntry *start = &state->keys[state->keyIndex];
            const KeyframeSegmentEntry *next = &state->keys[nextIndex];
            s32 duration = next->time - start->time;
            s32 distance = (s32)next->value - (s32)start->value;
            state->slope = (f32)distance / (f32)duration;
            state->target = (f32)next->value;
            state->keyIndex = (s8)nextIndex;
            return;
        }
    }
}
}

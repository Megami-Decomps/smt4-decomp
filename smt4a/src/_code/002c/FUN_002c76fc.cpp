/* NON_MATCHING: key-entry base addressing and VFP interpolation register allocation differ. */
#include "gfx/KeyframeSegment.h"
extern "C" {
f32 FUN_002039d0(s32 mode, s32 range, s32 inclusive);

// Skip duplicate key times and prepare the next linear interpolation segment.
void FUN_002c76fc(KeyframeSegmentState *state, const KeyframeSegmentState *definition)
{
    if (state->keyIndex >= 3)
        state->keyIndex = 4;
    s32 current = state->keyIndex;
    s32 step = 1;
    for (; current + step < 4; ++step) {
        state->duration = definition->keys[current + step].time - definition->keys[current].time;
        if (state->duration > 0) {
            KeyframeSegmentEntry *next = &state->keys[current + step];
            if (next->value != 0 && next->randomRange > 0) {
                f32 variation = FUN_002039d0(2, next->randomRange, 1);
                state->keys[state->keyIndex + step].value -= (s16)(s32)variation;
            }
            s32 nextIndex = state->keyIndex + step;
            const KeyframeSegmentEntry *start = &state->keys[state->keyIndex];
            next = &state->keys[nextIndex];
            state->slope = (f32)((s32)next->value - (s32)start->value) /
                (f32)(next->time - start->time);
            state->target = (f32)next->value;
            state->keyIndex = (s8)nextIndex;
            return;
        }
    }
}
}

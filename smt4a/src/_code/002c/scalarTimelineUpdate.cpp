/* NON_MATCHING: loop head now matches (`s32 offset = 1` before the `*nextKey < 3` guard folds the cc chain); remaining: argument loads (retail `ldm` of the stack args into r5/lr/r4, lr as a general register) and per-key loads are not coalesced into ldrd/ldm in retail */
#include "shard/W6_W6Match8_ColorKeys.h"

extern "C" void mathStepTowards(f32 *value, f32 step, f32 target);

/* Advance the scalar key track, skipping keys that do not advance its frame count. */
extern "C" void scalarTimelineUpdate(const ScalarTimeline *timeline, s32 *elapsed, s8 *nextKey,
                            s32 *duration, f32 *value, f32 *step, f32 *target)
{
    if (*nextKey >= 4) {
        return;
    }
    ++*elapsed;
    if (*duration < *elapsed) {
        *elapsed = 0;
        *step = 0.0f;
        s32 offset = 1;
        if (*nextKey < 3) {
            for (; *nextKey + offset < 4; ++offset) {
                *duration = timeline->keys[*nextKey + offset].frame - timeline->keys[*nextKey].frame;
                if (*duration > 0) {
                    *step = (f32)(timeline->keys[*nextKey + offset].value - timeline->keys[*nextKey].value)
                        / (f32)(timeline->keys[*nextKey + offset].frame - timeline->keys[*nextKey].frame);
                    *target = (f32)timeline->keys[*nextKey + offset].value;
                    *nextKey += offset;
                    break;
                }
            }
        }
        return;
    }
    mathStepTowards(value, *step, *target);
}

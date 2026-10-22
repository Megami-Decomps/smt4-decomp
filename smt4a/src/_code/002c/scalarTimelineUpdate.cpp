/* NON_MATCHING: saved-register allocation and keyframe-loop guard lowering differ from retail. */
#include "shard/W6_W6Match8_ColorKeys.h"

extern "C" void FUN_00229264(f32 *value, f32 step, f32 target);

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
        if (*nextKey < 3) {
            for (s32 offset = 1; *nextKey + offset < 4; ++offset) {
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
    FUN_00229264(value, *step, *target);
}

/* NON_MATCHING: only r5/r6 are swapped (retail keeps the output pointer in r6 and the last-frame flag in r5). */
#include "common.h"

extern "C" {

s32 lerpIntSplitClamped(s32 from, s32 to, s32 frame, s32 frames);

/* Interpolates `from` towards `to` for the current frame; returns 1 (and snaps to `to`) once it is reached. */
u32 FUN_00318e08(s32 *value, s32 frames, s32 from, s32 to, s32 frame)
{
    bool lastFrame = false;
    *value = lerpIntSplitClamped(from, to, frames, frame);
    if (frame == frames) {
        lastFrame = true;
    }
    if (to - from > 0) {
        if (*value >= to) {
            *value = to;
            return 1;
        }
    } else if (*value <= to) {
        *value = to;
        return 1;
    }
    if (!lastFrame) {
        return 0;
    }
    *value = to;
    return 1;
}

} /* extern "C" */

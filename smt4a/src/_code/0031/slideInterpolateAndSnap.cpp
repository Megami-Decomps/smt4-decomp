#include "common.h"

extern "C" {

s32 lerpIntSplitClamped(s32 from, s32 to, s32 duration, s32 frame);

/* Interpolates `from` towards `to` for the current frame; returns 1 (and snaps to `to`) once it is reached. */
u32 slideInterpolateAndSnap(s32 *value, s32 frames, s32 from, s32 to, s32 frame)
{
    s32 current = lerpIntSplitClamped(from, to, frames, frame);
    bool finished = false;
    if (frame == frames) {
        finished = true;
    }
    *value = current;
    if (to - from > 0) {
        if (current >= to) {
            finished = true;
        }
    } else if (current <= to) {
        finished = true;
    }
    if (!finished) {
        return 0;
    }
    *value = to;
    return 1;
}

} /* extern "C" */

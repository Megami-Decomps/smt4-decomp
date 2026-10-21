#include "common.h"

// Interpolate with separately truncated start/end contributions and clamped time.
extern "C" s32 lerpIntSplitClamped(s32 start, s32 end, s32 duration, s32 frame)
{
    if (duration <= 0) {
        return end;
    }
    if (frame <= 0) {
        return start;
    }
    if (frame >= duration) {
        return end;
    }
    s32 remainingStart = start - start * frame / duration;
    s32 advancedEnd = end * frame / duration;
    return remainingStart + advancedEnd;
}

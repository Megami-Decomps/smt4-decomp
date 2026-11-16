#include "common.h"

// Interpolate over the duration, retaining the start value before time zero.
extern "C" f32 floatInterpolateOverDuration(f32 start, f32 end, f32 duration, f32 time)
{
    if (duration == 0.0f) {
        return end;
    }
    if (time <= 0.0f) {
        return start;
    }
    if (time >= duration) {
        return end;
    }
    end -= start;
    end = end * time / duration;
    return end + start;
}

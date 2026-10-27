/* NON_MATCHING: only the interpolation product's destination register differs (retail writes it over `time` in s3, the build into s1). */
#include "common.h"

// Interpolate over the duration, retaining the start value before time zero.
extern "C" f32 FUN_001f3eec(f32 start, f32 end, f32 duration, f32 time)
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
    return start + (end - start) * time / duration;
}

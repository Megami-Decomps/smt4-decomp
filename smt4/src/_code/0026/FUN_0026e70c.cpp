/* NON_MATCHING: retail merges the end-value return and uses s3 for the interpolation product. */
#include "common.h"

// Interpolate over the duration, retaining the start value before time zero.
extern "C" f32 FUN_0026e70c(f32 start, f32 end, f32 duration, f32 time)
{
    if (duration == 0.0f) {
        start = end;
    } else if (time > 0.0f) {
        if (time < duration) {
            start += time * (end - start) / duration;
        } else {
            start = end;
        }
    }
    return start;
}

/* NON_MATCHING: retail branches beq/bls/blt (duration==0 and the return-start path share the end block; the product lands in s3); armcc emits bne/ble/bls in every control-flow form tried. */
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

/* NON_MATCHING (b1454): only VFP register allocation differs (retail keeps the 1.5707964 constant in s1 and the divisor in s2; the build swaps them). */
#include "common.h"
#include <math.h>
#include "util/TrigF32.h"

extern "C" {
f32 libm_sinf(f32 angle);

// Ease an integer between endpoints, reporting when the destination is reached.
u32 FUN_0039a2d8(s32 *output, s32 start, s32 end, s32 duration, s32 elapsed, s32 easeOut)
{
    s32 distance = (s32)fabsf((f32)(end - start));
    if (elapsed >= duration) {
        *output = end;
        return 1;
    }
    f32 ratio = (f32)elapsed / (f32)duration;
    f32 angle = ratio * 1.5707964f;
    f32 progress;
    if (easeOut != 0) {
        progress = libm_sinf(angle);
    } else {
        progress = 1.0f - libm_cosf(angle);
    }
    if (start < end) {
        *output = (s32)((f32)start + (f32)distance * progress);
        if (*output >= end) {
            *output = end;
            return 1;
        }
    } else {
        *output = (s32)((f32)start - (f32)distance * progress);
        if (*output <= end) {
            *output = end;
            return 1;
        }
    }
    return 0;
}
}

/* NON_MATCHING: return-0 block is emitted inline instead of shared at the function end; float-operand and saved argument registers differ. */
#include "common.h"
#include <math.h>

extern "C" {
f32 FUN_001bbf0c(f32 angle);
f32 FUN_001bc124(f32 angle);

// Ease an integer between endpoints, reporting when the destination is reached.
u32 FUN_0039a2d8(s32 *output, s32 start, s32 end, s32 duration, s32 elapsed, s32 easeOut)
{
    s32 distance = (s32)fabsf((f32)(end - start));
    if (elapsed < duration) {
        f32 angle = ((f32)elapsed / (f32)duration) * 1.5707964f;
        f32 progress;
        if (easeOut != 0) {
            progress = FUN_001bc124(angle);
        } else {
            progress = 1.0f - FUN_001bbf0c(angle);
        }
        if (start < end) {
            *output = (s32)((f32)start + (f32)distance * progress);
            if (*output >= end) {
                *output = end;
                return 1;
            }
            return 0;
        } else {
            *output = (s32)((f32)start - (f32)distance * progress);
            if (*output <= end) {
                *output = end;
                return 1;
            }
            return 0;
        }
    }
    *output = end;
    return 1;
}
}

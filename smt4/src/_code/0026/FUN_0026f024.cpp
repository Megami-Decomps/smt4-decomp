/* NON_MATCHING: saved argument registers and VFP return-path scheduling differ. */
#include "common.h"
#include <math.h>
#include "util/TrigF32.h"

extern "C" {

// Ease an integer between endpoints, reporting when the destination is reached.
u32 FUN_0026f024(s32 *output, s32 start, s32 end, s32 duration, s32 elapsed, s32 easeOut)
{
    s32 distance = (s32)fabsf((f32)(end - start));
    if (elapsed < duration) {
        f32 angle = ((f32)elapsed / (f32)duration) * 1.5707964f;
        f32 progress;
        if (easeOut != 0) {
            progress = FUN_0028250c(angle);
        } else {
            progress = 1.0f - FUN_00282390(angle);
        }
        if (start < end) {
            *output = (s32)((f32)start + (f32)distance * progress);
            if (*output < end) return 0;
        } else {
            *output = (s32)((f32)start - (f32)distance * progress);
            if (*output > end) return 0;
        }
    }
    *output = end;
    return 1;
}
}

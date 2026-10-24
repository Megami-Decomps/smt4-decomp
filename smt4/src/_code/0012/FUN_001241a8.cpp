/* NON_MATCHING: float register allocation: retail keeps the result in s0 (from in s16, delta in s17), built keeps both from and to live in s16/s17; compare operand order also differs */
#include "common.h"

extern "C" {

f32 mathInterpolatePackedTable(u32 angle);

/* Interpolates from `from` to `to` by progress/duration through an angle table (0 to `from` at progress <= 0, `to` at the end or without a duration). */
f32 FUN_001241a8(f32 from, f32 to, f32 duration, f32 progress)
{
    f32 result = to;

    if (duration != 0.0f) {
        if (progress <= 0.0f) {
            result = from;
        } else if (progress < duration) {
            result = (to - from) * (mathInterpolatePackedTable((u32)(progress * 16384.0f / duration + 49152.0f) & 0xFFFF) + 1.0f) + from;
        }
    }
    return result;
}

} /* extern "C" */

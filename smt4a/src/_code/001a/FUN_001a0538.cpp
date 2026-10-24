/* NON_MATCHING: retail reuses the zero test result as the exponent for +-0 (no mov r1, #0) and subtracts the bias in a separate sub; armcc folds it into mvn+add */
/* Converts a float to IEEE half-precision bits; values too small for a half become a signed zero. */
#include "common.h"

extern "C" u16 FUN_001a0538(f32 value)
{
    union {
        f32 f;
        u32 u;
    } bits;
    s32 exponent = 0;

    bits.f = value;
    if ((bits.u & 0x7FFFFFFF) != 0) {
        exponent = (s32)((bits.u << 1) >> 24) - 112;
        if (exponent < 0) {
            return (u16)((bits.u >> 31) << 15);
        }
    }
    return (u16)(((bits.u & ~0x1F800000u) >> 13) | (exponent << 10) | ((bits.u >> 31) << 15));
}

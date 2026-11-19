/* NON_MATCHING: written as fdlibm's s_ceilf.c; only the two early `return x` differ: retail returns with bxge/bxeq lr, armcc b1454 branches to the shared bx lr. This is armlib's hardfp ceilf (the same code as the third-party __hardfp_floorf), built by another armcc. */
#include "common.h"

/* Rounds toward positive infinity (fdlibm ceilf), raising inexact for fractional inputs. */
extern "C" f32 mathlib_ceilf(f32 x)
{
    s32 bits = *(s32 *)&x;
    s32 exponent = ((bits >> 23) & 0xff) - 0x7f;
    u32 fractionMask;
    if (exponent >= 23)
        return x;
    if (exponent < 0) {
        if (1.0e30f + x > 0.0f) {
            if (bits < 0)
                bits = 0x80000000;
            else if (bits != 0)
                bits = 0x3f800000;
        }
    } else {
        fractionMask = 0x007fffff >> exponent;
        if ((bits & fractionMask) == 0)
            return x;
        if (1.0e30f + x > 0.0f) {
            if (bits > 0)
                bits += 0x00800000 >> exponent;
            bits &= ~fractionMask;
        }
    }
    *(s32 *)&x = bits;
    return x;
}

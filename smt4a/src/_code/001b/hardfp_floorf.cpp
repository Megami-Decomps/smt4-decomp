/* NON_MATCHING: only the two early `return value` exits differ: retail returns with `bxge lr` / `bxeq lr`, armcc branches to the shared final bx lr. */
#include "common.h"

extern "C" f32 hardfp_floorf(f32 value)
{
    union { f32 value; s32 bits; } number;
    number.value = value;
    s32 bits = number.bits;
    s32 exponent = ((bits >> 23) & 0xFF) - 127;
    if (exponent < 23) {
        if (exponent < 0) {
            // Adding a large finite value raises inexact for a fractional input.
            if (1.0e30f + value > 0.0f) {
                if (bits >= 0) {
                    bits = 0;
                } else if (bits != (s32)0x80000000) {
                    bits = (s32)0xBF800000;
                }
            }
        } else {
            u32 fractionalMask = 0x007FFFFF >> exponent;
            if ((bits & fractionalMask) == 0) {
                return value;
            }
            if (1.0e30f + value > 0.0f) {
                if (bits < 0) {
                    bits += 0x00800000 >> exponent;
                }
                bits &= ~fractionalMask;
            }
        }
        number.bits = bits;
        value = number.value;
    }
    return value;
}

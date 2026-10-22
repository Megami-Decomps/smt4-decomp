/* NON_MATCHING: Early returns share a branch instead of conditional bx; rounding-add instruction folding and sign-case order differ. */
#include "common.h"

/* Rounds toward positive infinity and raises inexact for fractional inputs. */
extern "C" f32 mathlib_ceilf(f32 value)
{
    union {
        f32 value;
        s32 bits;
    } number;
    number.value = value;
    s32 exponent = ((u32)number.bits & 0x7fffffff) >> 23;
    exponent -= 127;
    if (exponent >= 23) {
        return value;
    }
    if (exponent < 0) {
        if (value + 1.0e30f > 0.0f) {
            if (number.bits > 0) {
                number.bits = 0x3f800000;
            } else if (number.bits < 0) {
                number.bits = 0x80000000;
            }
        }
    } else {
        u32 fractionMask = 0x7fffffU >> exponent;
        if ((number.bits & fractionMask) == 0) {
            return value;
        }
        if (value + 1.0e30f > 0.0f) {
            if (number.bits > 0) {
                number.bits += 0x800000U >> exponent;
            }
            number.bits &= ~fractionMask;
        }
    }
    return number.value;
}

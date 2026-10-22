/* NON_MATCHING: The compiler merges integral-return exits and fuses the variable-shift rounding add. */
#include "common.h"

extern "C" f32 hardfp_floorf(f32 value)
{
    union { f32 value; s32 bits; } number;
    number.value = value;
    s32 exponent = ((number.bits >> 23) & 0xFF) - 127;
    if (exponent >= 23) {
        return value;
    }
    if (exponent < 0) {
        // Adding a large finite value raises inexact for a fractional input.
        if (1.0e30f + value > 0.0f) {
            if (number.bits >= 0) {
                number.bits = 0;
            } else if (number.bits != (s32)0x80000000) {
                number.bits = (s32)0xBF800000;
            }
        }
    } else {
        u32 fractionalMask = 0x007FFFFF >> exponent;
        if ((number.bits & fractionalMask) == 0) {
            return value;
        }
        if (1.0e30f + value > 0.0f) {
            if (number.bits < 0) {
                number.bits += 0x00800000 >> exponent;
            }
            number.bits &= ~fractionalMask;
        }
    }
    return number.value;
}

/* NON_MATCHING: VFP saves, range-check outlining and polynomial scheduling differ; zero division is constant-folded. */
#include "common.h"
#include <math.h>

extern "C" int __set_errno(int error);
extern "C" __softfp f32 FUN_003f6d64(f32 value);

extern "C" f32 FUN_0028836c(f32 value)
{
    union { f32 value; u32 bits; } input;
    input.value = value;
    u32 magnitude = input.bits << 1;
    f32 offset = 0.0f;
    f32 tail = 0.0f;
    if (magnitude - 0x66000000u <= 0x19000000u) {
        f32 square;
        if (magnitude > 0x7E000000u) {
            square = (1.0f - fabsf(value)) * 0.5f;
            value = FUN_003f6d64(square);
            if (input.bits & 0x80000000u) {
                value = -value;
                offset = 3.140625f;
                tail = 0.0009676535846665502f;
            }
            value *= -2.0f;
        } else {
            square = value * value;
            offset = 1.5703125f;
            tail = 0.0004838267923332751f;
        }
        f32 polynomial = 0.16666673123836517f + square *
            (0.07498761266469955f + square *
            (0.0450202152132988f + square *
            (0.026433361694216728f + square * 0.03832830488681793f)));
        return (tail - value) - (value * square) * polynomial + offset;
    }
    if (magnitude < 0x66000000u) {
        return 1.5707963705062866f;
    }
    if (magnitude > 0xFF000000u) {
        return value + value;
    }
    __set_errno(1);
    return tail / tail;
}

/* NON_MATCHING: Three-register floating-point mantissa normalization is reconstructed, but shift-flag tests and register allocation differ from the runtime helper. */
#include "common.h"

struct NormalizedMantissa {
    s32 exponent;
    u32 high;
    u32 low;
};

/* Normalize a nonzero mantissa for the floating-point conversion helper. */
extern "C" __value_in_regs NormalizedMantissa FUN_001cd33c(s32 exponent, u32, u32 mantissa)
{
    u32 shift;
    if ((mantissa >> 16) == 0) { mantissa <<= 16; shift = 16; }
    else { shift = 0; }
    exponent -= 31;
    if ((mantissa >> 24) == 0) { mantissa <<= 8; shift += 8; }
    if ((mantissa >> 28) == 0) { mantissa <<= 4; shift += 4; }
    if ((mantissa >> 30) == 0) { mantissa <<= 2; shift += 2; }
    if ((mantissa >> 31) == 0) { mantissa <<= 1; shift += 1; }
    NormalizedMantissa result = { exponent - shift, mantissa, 0 };
    return result;
}

/* NON_MATCHING: the three-register aggregate return shares its early-return epilogue, and the normalization shift count uses r3 rather than ip. */
#include "runtime/Float.h"

extern "C" __value_in_regs RuntimeNormalizedDouble FUN_001590c8(s32 exponent, u32 high, u32 low);

/* Normalize a signed high mantissa word and propagate bits from its low word. */
extern "C" __value_in_regs RuntimeNormalizedDouble FUN_00155a94(s32 exponent, u32 high, u32 low)
{
    RuntimeNormalizedDouble result = {exponent, high, low};
    if ((high & 0x80000000) == 0) {
        return result;
    }
    high &= 0x7FFFFFFF;
    if (high == 0) {
        return FUN_001590c8(exponent, high, low);
    }
    u32 shift = 0;
    if ((high >> 16) == 0) {
        high <<= 16;
        shift += 16;
    }
    if ((high >> 24) == 0) {
        high <<= 8;
        shift += 8;
    }
    if ((high >> 28) == 0) {
        high <<= 4;
        shift += 4;
    }
    if ((high >> 30) == 0) {
        high <<= 2;
        shift += 2;
    }
    if ((high >> 31) == 0) {
        high <<= 1;
        ++shift;
    }
    result.exponent = exponent - shift + 1;
    result.high = high | (low >> (32 - shift));
    result.low = low << shift;
    return result;
}

/* NON_MATCHING: this is the ARM runtime's 64-bit unsigned divide (hand-written assembly using a reciprocal table at 0x2aa528, third-party code). The C below is the same operation as a plain shift-subtract division; it cannot reproduce the table-driven instruction sequence. */
#include "common.h"

extern "C" {

// Division-by-zero trap of the runtime; reached with the dividend in both operand pairs.
u64 FUN_001525e4(u32 a, u32 b, u32 dividendLow, u32 dividendHigh, u32 c, u32 d);

// Returns the 64-bit quotient of (dividendHigh:dividendLow) / (divisorHigh:divisorLow).
u64 FUN_002aa278(u32 dividendLow, u32 dividendHigh, u32 divisorLow, u32 divisorHigh)
{
    u64 dividend = ((u64)dividendHigh << 32) | dividendLow;
    u64 divisor = ((u64)divisorHigh << 32) | divisorLow;
    if (divisor == 0) return FUN_001525e4(0, 0, dividendLow, dividendHigh, dividendLow, dividendHigh);

    u64 quotient = 0;
    u64 remainder = 0;
    for (s32 bit = 63; bit >= 0; bit--) {
        remainder = (remainder << 1) | ((dividend >> bit) & 1);
        if (remainder >= divisor) {
            remainder -= divisor;
            quotient |= (u64)1 << bit;
        }
    }
    return quotient;
}

} /* extern "C" */

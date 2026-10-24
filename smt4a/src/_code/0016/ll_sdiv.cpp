/* NON_MATCHING: retail packs quotient/remainder signs into one shifted word and returns directly in four registers. */
#include "shard/W6_W6Match2_LongDivision.h"

extern "C" __value_in_regs LongDivisionResult __aeabi_uldivmod(u64 dividend, u64 divisor);

// Divide signed magnitudes, restoring the quotient and remainder signs.
extern "C" __value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor)
{
    bool dividendNegative = dividend < 0;
    bool quotientNegative = dividendNegative != (divisor < 0);
    u64 dividendMagnitude = dividendNegative ? 0u - (u64)dividend : (u64)dividend;
    u64 divisorMagnitude = divisor < 0 ? 0u - (u64)divisor : (u64)divisor;
    LongDivisionResult result = __aeabi_uldivmod(dividendMagnitude, divisorMagnitude);
    if (quotientNegative) {
        result.quotient = 0u - result.quotient;
    }
    if (dividendNegative) {
        result.remainder = 0u - result.remainder;
    }
    return result;
}

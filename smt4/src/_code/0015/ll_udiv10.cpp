/* NON_MATCHING: Register allocation and 64-bit carry-chain lowering differ from the hand-optimized runtime helper. */
#include "shard/W6_W6Match2_LongDivision.h"

/* Computes quotient and remainder with the runtime's shift/add reciprocal approximation. */
extern "C" __value_in_regs LongDivisionResult ll_udiv10(u64 dividend)
{
    u64 remainder = dividend - 10;
    u64 quotient = dividend - (dividend >> 2);
    quotient += quotient >> 4;
    quotient += quotient >> 8;
    quotient += quotient >> 16;
    quotient += quotient >> 32;
    quotient >>= 3;
    remainder -= (quotient + (quotient << 2)) << 1;
    LongDivisionResult result;
    result.quotient = quotient;
    result.remainder = static_cast<u32>(remainder);
    if (static_cast<s64>(remainder) < 0) {
        result.remainder = static_cast<u32>(remainder) + 10;
    } else {
        ++result.quotient;
    }
    return result;
}

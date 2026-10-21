/* NON_MATCHING: the C implementation guards the zero shift to avoid undefined behavior; retail uses native ARM register-shift semantics. */
#include "common.h"

extern "C" {

/* Arithmetic right shift of a signed doubleword, using its two machine words. */
s64 FUN_001383c8(s64 value, u32 shift)
{
    union { s64 value; struct { u32 low; s32 high; } words; } result;
    result.value = value;
    if (shift == 0) {
        return value;
    }
    if (shift >= 64) {
        return value < 0 ? -1 : 0;
    }
    if (shift < 32) {
        result.words.low = (result.words.low >> shift) | ((u32)result.words.high << (32 - shift));
        result.words.high >>= shift;
    } else {
        result.words.low = result.words.high >> (shift - 32);
        result.words.high >>= 31;
    }
    return result.value;
}

} /* extern "C" */
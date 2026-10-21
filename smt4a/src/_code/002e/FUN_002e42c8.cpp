/* NON_MATCHING: retail emits 'push {r0, r1}'; compiler emits 'vmov r3, s1' at the first differing instruction. */
#include "common.h"
extern "C" {
u32 FUN_002e42c8(double value) {
    union { double value; struct { u32 low, high; } bits; } number;
    number.value = value;
    u32 mantissa = number.bits.low | (number.bits.high << 12);
    u32 exponent = (number.bits.high >> 20) & 0x7FF;
    u32 result = mantissa != 0 ? 4 : 0;
    if (exponent != 0) result |= 1;
    if (exponent == 0x7FF) result |= 2;
    return result == 1 ? 5 : result;
}
}

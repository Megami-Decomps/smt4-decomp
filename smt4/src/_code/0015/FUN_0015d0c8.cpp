/* NON_MATCHING: instruction selection/order differs: retail vcvt.u32.f32 s2, s0; compiler vcvt.u32.f32 s0, s0. */
#include "common.h"

extern "C" {

/* Converts a float passed through the base PCS into an unsigned word. */
u32 FUN_0015d0c8(u32 valueBits)
{
    union { u32 bits; f32 value; } value;
    value.bits = valueBits;
    return (u32)value.value;
}

} /* extern "C" */

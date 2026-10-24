/* NON_MATCHING: retail converts into s2 (vcvt.u32.f32 s2, s0; vmov r0, s2); the build converts in place in s0 */
/* Converts a float to an unsigned integer (truncating). */
#include "common.h"

extern "C" __softfp u32 FUN_001cd32c(f32 value)
{
    return (u32)value;
}

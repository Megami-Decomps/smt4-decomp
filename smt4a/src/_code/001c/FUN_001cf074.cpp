/* NON_MATCHING: the IEEE field view (exponent/mantissa extracted up front) now matches retail's field extraction; retail keeps the mantissa shift as a separate lsr, branches instead of predicating the in-range arm, and loads the shared constant earlier. */
#include "common.h"

extern "C" u32 *g_commandBufferCursor;

// An IEEE single split into its fields.
union SingleBits {
    u32 bits;
    struct { u32 mantissa : 23; u32 exponent : 8; u32 sign : 1; } field;
};

// The GPU conversion flushes subnormals to signed zero and clamps overflow to infinity.
static __inline u16 floatBitsToGpuHalf(u32 bits)
{
    SingleBits single;
    single.bits = bits;
    u32 biased = single.field.exponent;
    u32 mantissa = single.field.mantissa;
    u32 half = 0;
    if (bits & 0x80000000)
        half = 0x8000;
    u32 exponent;
    if ((bits & 0x7fffffff) == 0) {
        exponent = 0;
        half = (mantissa >> 13) | half | ((exponent & 31) << 10);
    } else {
        exponent = biased - 112;
        if (static_cast<s32>(exponent) >= 0) {
            if (static_cast<s32>(exponent) > 31)
                half = 0x7c00;
            else
                half = (mantissa >> 13) | half | ((exponent & 31) << 10);
        }
    }
    return half;
}

// Write a three-component half-float lighting vector to the selected GPU register.
extern "C" void FUN_001cf074(s32 index, const u32 *vectorBits)
{
    u16 x = floatBitsToGpuHalf(vectorBits[0]);
    u16 y = floatBitsToGpuHalf(vectorBits[1]);
    u16 z = floatBitsToGpuHalf(vectorBits[2]);
    g_commandBufferCursor[2] = z;
    g_commandBufferCursor[3] = 0;
    g_commandBufferCursor[0] = x | (y << 16);
    g_commandBufferCursor[1] = index * 16 + 0x801f0144;
    g_commandBufferCursor += 4;
}

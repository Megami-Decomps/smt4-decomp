#ifndef GFX_VIEWPORTENCODING_H
#define GFX_VIEWPORTENCODING_H
#include "shard/W6_W6Match8_GpuDepth.h"

// Viewport half-extents use 16 fraction bits; inverse extents use 23.
// Both formats use a seven-bit exponent biased by 63 and flush underflow.
template <u32 FractionBits>
static __inline u32 gpuViewportEncode(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    s32 exponent = encoding.bits & 0x7FFFFFFF;
    if (exponent != 0) {
        exponent = ((encoding.bits >> 23) & 0xFF) - 64;
        if (exponent < 0) {
            return encoding.ieee.sign << (FractionBits + 7);
        }
    }
    return (encoding.ieee.fraction >> (23 - FractionBits)) |
        (static_cast<u32>(exponent) << FractionBits) |
        (encoding.ieee.sign << (FractionBits + 7));
}
// Inverse extents use 23 fraction bits. The fraction is read in both arms, as retail's code does.
static __inline u32 gpuViewportEncodeInverse(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    s32 exponent = encoding.bits & 0x7FFFFFFF;
    u32 fraction;
    if (exponent != 0) {
        fraction = encoding.ieee.fraction;
        exponent = ((encoding.bits >> 23) & 0xFF) - 64;
        if (exponent < 0) {
            return encoding.ieee.sign << 30;
        }
    } else {
        fraction = encoding.ieee.fraction;
    }
    return fraction | (static_cast<u32>(exponent) << 23) | (encoding.ieee.sign << 30);
}
#endif

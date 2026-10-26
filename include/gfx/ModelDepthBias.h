#ifndef GFX_MODELDEPTHBIAS_H
#define GFX_MODELDEPTHBIAS_H

#include "shard/W6_W6Match8_GpuDepth.h"

/* Encodes a model's depth bias as the GPU's float24: sign (bit 23), 7-bit exponent, 16-bit fraction.
 * Values below the exponent range flush to zero, above it saturate. */
static u32 gpuEncodeDepthBias(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    u32 sign = encoding.bits & 0x80000000;
    if (sign != 0) {
        sign = 0x800000;
    }
    u32 biasedExponent = encoding.ieee.exponent;
    u32 fraction = encoding.ieee.fraction;
    s32 exponent = encoding.bits & 0x7fffffff;
    if (exponent != 0) {
        exponent = biasedExponent - 64;
        if (exponent < 0) {
            return sign;
        }
        if (exponent > 127) {
            return 0x7f0000;
        }
    }
    return (fraction >> 7) | sign | ((exponent & 127) << 16);
}

#endif

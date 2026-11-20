#ifndef GFX_MODELDEPTHBIAS_H
#define GFX_MODELDEPTHBIAS_H

#include "shard/W6_W6Match8_GpuDepth.h"

/* Encodes a model's depth bias as the GPU's float24 (NintendoWare's float-to-24-bit conversion): sign (bit 23),
 * 7-bit exponent rebiased from 127 to 63, 16-bit fraction. Values below the exponent range keep only the sign,
 * values above it saturate to the largest exponent. */
static __inline u32 gpuEncodeDepthBias(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    u32 bits32 = encoding.bits;
    u32 sign = bits32 & 0x80000000;
    s32 exponent = (s32)((bits32 >> 23) & 0xff);
    u32 fraction = bits32 & 0x7fffff;
    u32 bits24 = 0;
    bits24 |= (sign != 0) ? 0x800000 : 0;
    if ((bits32 & ~0x80000000) == 0) {
        exponent = 0;
    } else {
        exponent = exponent - 127 + 63;
    }
    fraction = fraction >> 7;
    if (exponent < 0) {
        /* underflow: a signed zero */
    } else if (exponent > 0x7f) {
        bits24 = 0x7f << 16;
    } else {
        bits24 |= fraction & 0xffff;
        bits24 |= (exponent & 0x7f) << 16;
    }
    return bits24;
}

#endif

#ifndef SHARD_W6_W6MATCH8_GPU_DEPTH_H
#define SHARD_W6_W6MATCH8_GPU_DEPTH_H

#include "common.h"

struct GpuDepthOwner {
    u8 unk00[0x7c];
    u32 colorState; /* 0x7c */
};
struct GpuDepthState {
    u8 enabled;
    u8 inverted;
    u8 unk02[2];
    f32 depth;             /* 0x04 */
    u32 unk08;
    f32 offset;            /* 0x0c */
    f32 range;             /* 0x10 */
    GpuDepthOwner *owner;   /* 0x14 */
};
union GpuFloatEncoding {
    f32 value;
    u32 bits;
    s32 signedBits;
    struct {
        u32 fraction : 23;
        u32 exponent : 8;
        u32 sign : 1;
    } ieee;
};

/* Encodes the GPU's signed half-float fields, flushing values below its exponent range (nn::gr's
 * Float32ToFloat16: the exponent is rebiased only for a nonzero magnitude). */
static __inline u16 gpuDepthEncodeHalf(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    u32 bits = encoding.bits;
    s32 exponent = (bits & 0x7fffffff) ? (s32)(((bits >> 23) & 0xff) - 112) : 0;
    if (exponent >= 0) {
        return (u16)(((bits & 0x7fffff) >> 13) | (exponent << 10) | ((bits >> 31) << 15));
    }
    return (u16)((bits >> 31) << 15);
}

static __inline u32 gpuDepthEncodeUnorm24(f32 depth)
{
    GpuFloatEncoding encoding;
    encoding.value = depth;
    if (depth <= 0.0f || encoding.ieee.exponent == 255) {
        return 0;
    }
    encoding.value = depth * 16777216.0f;
    if (encoding.signedBits < 0x4b800000) {
        return static_cast<u32>(encoding.value);
    }
    return 0xffffff;
}

/* Filled by the startup float24 lookup-table initializer. */
extern "C" u32 g_gpuFloat24ExponentTable[256];

/* Float24 has a sign bit, seven exponent bits, and sixteen fraction bits. */
static __forceinline u32 gpuEncodeFloat24(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    if ((encoding.bits & 0x7FFFFFFF) == 0) {
        return encoding.ieee.sign << 23;
    }
    return g_gpuFloat24ExponentTable[encoding.ieee.exponent] | (encoding.ieee.fraction >> 7)
        | (encoding.ieee.sign << 23);
}

struct GpuFloat24Vectors {
    u32 first[3];
    u32 second[3];
    u32 coordinates[2];
};

#endif

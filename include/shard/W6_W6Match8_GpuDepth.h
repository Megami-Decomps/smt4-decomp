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
};

// Encode the GPU's signed half-float fields, flushing values below its exponent range.
static __inline u32 gpuDepthEncodeHalf(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    u32 magnitude = encoding.bits & 0x7fffffff;
    s32 exponent = 0;
    if (magnitude != 0) {
        exponent = ((encoding.bits >> 23) & 0xff) - 112;
        if (exponent < 0) {
            return (encoding.bits >> 31) << 15;
        }
    }
    return static_cast<u16>(((encoding.bits & 0xe07fffff) >> 13) |
                            (exponent << 10) | ((encoding.bits >> 31) << 15));
}

static __inline u32 gpuDepthEncodeUnorm24(f32 depth)
{
    GpuFloatEncoding encoding;
    encoding.value = depth;
    if (depth > 0.0f && ((encoding.bits >> 23) & 0xff) != 255) {
        encoding.value = depth * 16777216.0f;
        if (encoding.signedBits < 0x4b800000) {
            return static_cast<u32>(encoding.value);
        }
        return 0xffffff;
    }
    return 0;
}

#endif

/* NON_MATCHING: packed-color float24 behavior restored; exponent extraction, argument spills and word-store scheduling differ. */
#include "shard/W6_W6Match8_GpuDepth.h"
#include "shard/Shard0036.h"

extern "C" {
extern u32 DAT_004e31a0[256];
extern u32 DAT_004e35a0[256];
void gpuSubmitVectorCommand(const u32 *position, const u32 *color, const u32 *coordinates);
}

static __forceinline u32 encodeGpuFloat24(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    if ((encoding.bits & 0x7FFFFFFF) == 0)
        return encoding.ieee.sign << 23;
    return DAT_004e31a0[encoding.ieee.exponent] | (encoding.ieee.fraction >> 7) |
           (encoding.ieee.sign << 23);
}

// Submit position, normalized packed-color bytes and texture coordinates as GPU float24 words.
extern "C" void FUN_002aff74(RgbaWord color, f32 x, f32 y, f32 z, f32 u, f32 v)
{
    GpuFloat24Vectors packed;
    u32 positionX = encodeGpuFloat24(x);
    u32 positionY = encodeGpuFloat24(y);
    u32 positionZ = encodeGpuFloat24(z);
    packed.first[0] = positionX | (positionY << 24);
    packed.first[1] = (positionY >> 8) | (positionZ << 16);
    packed.first[2] = (positionZ >> 16) | (DAT_004e31a0[127] << 8);
    u32 coordinateU = encodeGpuFloat24(u);
    u32 coordinateV = encodeGpuFloat24(v);
    packed.coordinates[0] = coordinateU | (coordinateV << 24);
    packed.coordinates[1] = coordinateV >> 8;
    u32 color0 = DAT_004e35a0[color.rgba.a];
    u32 color1 = DAT_004e35a0[color.rgba.b];
    packed.second[0] = color0 | (color1 << 24);
    u32 color2 = DAT_004e35a0[color.rgba.g];
    packed.second[1] = (color1 >> 8) | (color2 << 16);
    u32 color3 = DAT_004e35a0[color.rgba.r];
    packed.second[2] = (color2 >> 16) | (color3 << 8);
    gpuSubmitVectorCommand(packed.first, packed.second, packed.coordinates);
}

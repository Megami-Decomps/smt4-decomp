/* NON_MATCHING: packed-color float24 behavior restored; exponent extraction, argument spills and word-store scheduling differ (same family as FUN_002aff74). */
#include "shard/W6_W6Match8_GpuDepth.h"
#include "shard/Shard0036.h"

extern "C" {
extern u32 g_gpuFloat24ExponentTable[256];
extern u32 DAT_0063f948[256];
void FUN_001acf18(const u32 *position, const u32 *color, const u32 *coordinates);
}

static __forceinline u32 encodeGpuFloat24(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    u32 magnitude = encoding.bits & 0x7fffffff;
    if (magnitude == 0)
        return (encoding.bits >> 31) << 23;
    return g_gpuFloat24ExponentTable[magnitude >> 23] | ((encoding.bits & 0x7fffff) >> 7) | ((encoding.bits >> 31) << 23);
}

// Submit one vertex: position (with w = 1), the packed color and texture coordinates as float24 words.
static __forceinline void submitVertex(u32 x, u32 y, u32 z, u32 u, u32 v, RgbaWord color)
{
    GpuFloat24Vectors packed;
    packed.first[0] = x | (y << 24);
    packed.first[1] = (y >> 8) | (z << 16);
    packed.first[2] = (z >> 16) | (g_gpuFloat24ExponentTable[127] << 8);
    packed.coordinates[0] = u | (v << 24);
    packed.coordinates[1] = v >> 8;
    u32 color0 = DAT_0063f948[color.rgba.a];
    u32 color1 = DAT_0063f948[color.rgba.b];
    packed.second[0] = color0 | (color1 << 24);
    u32 color2 = DAT_0063f948[color.rgba.g];
    packed.second[1] = (color1 >> 8) | (color2 << 16);
    u32 color3 = DAT_0063f948[color.rgba.r];
    packed.second[2] = (color2 >> 16) | (color3 << 8);
    FUN_001acf18(packed.first, packed.second, packed.coordinates);
}

// Submit a textured, per-corner colored quad at (x, y) of size (width, height) with texture
// rectangle (u, v) of size (uWidth, vHeight) at depth z.
extern "C" void FUN_0019e5e0(RgbaWord topLeft, RgbaWord bottomLeft, RgbaWord topRight, RgbaWord bottomRight,
                             f32 x, f32 y, f32 width, f32 height, f32 u, f32 v, f32 uWidth, f32 vHeight, f32 z)
{
    f32 right = x + width;
    f32 bottom = y + height;
    f32 uRight = u + uWidth;
    f32 vBottom = v + vHeight;
    u32 left24 = encodeGpuFloat24(x);
    u32 top24 = encodeGpuFloat24(y);
    u32 right24 = encodeGpuFloat24(right);
    u32 bottom24 = encodeGpuFloat24(bottom);
    u32 depth24 = encodeGpuFloat24(z);
    u32 u24 = encodeGpuFloat24(u);
    u32 v24 = encodeGpuFloat24(v);
    u32 uRight24 = encodeGpuFloat24(uRight);
    u32 vBottom24 = encodeGpuFloat24(vBottom);
    submitVertex(left24, top24, depth24, u24, v24, topLeft);
    submitVertex(left24, bottom24, depth24, u24, vBottom24, bottomLeft);
    submitVertex(right24, top24, depth24, uRight24, v24, topRight);
    submitVertex(right24, bottom24, depth24, uRight24, vBottom24, bottomRight);
}

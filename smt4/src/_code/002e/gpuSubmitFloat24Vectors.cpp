/* NON_MATCHING: inlined float24 encoders and packed-word stores are scheduled differently from retail. */
#include "shard/W6_W6Match8_GpuDepth.h"

struct GpuFloatVector4 { f32 x, y, z, w; };

extern "C" const u32 DAT_004e31a0[256];
extern "C" void FUN_002a9170(const u32 *first, const u32 *second, const u32 *coordinates);

static __forceinline u32 encodeGpuFloat24(f32 value)
{
    GpuFloatEncoding encoding;
    encoding.value = value;
    u32 magnitude = encoding.bits & 0x7fffffff;
    if (magnitude == 0)
        return (encoding.bits >> 31) << 23;
    return DAT_004e31a0[magnitude >> 23] | ((encoding.bits & 0x7fffff) >> 7) |
           ((encoding.bits >> 31) << 23);
}

/* Pack two four-component GPU vectors and a coordinate pair into float24 command words. */
extern "C" void gpuSubmitFloat24Vectors(const GpuFloatVector4 *second, f32 x, f32 y, f32 z, f32 u, f32 v)
{
    GpuFloat24Vectors vectors;
    u32 firstX = encodeGpuFloat24(x);
    u32 firstY = encodeGpuFloat24(y);
    u32 firstZ = encodeGpuFloat24(z);
    vectors.first[0] = firstX | (firstY << 24);
    vectors.first[1] = (firstY >> 8) | (firstZ << 16);
    vectors.first[2] = (firstZ >> 16) | (encodeGpuFloat24(1.0f) << 8);
    u32 coordinateU = encodeGpuFloat24(u);
    u32 coordinateV = encodeGpuFloat24(v);
    vectors.coordinates[0] = coordinateU | (coordinateV << 24);
    vectors.coordinates[1] = coordinateV >> 8;
    u32 secondX = encodeGpuFloat24(second->x);
    u32 secondY = encodeGpuFloat24(second->y);
    u32 secondZ = encodeGpuFloat24(second->z);
    u32 secondW = encodeGpuFloat24(second->w);
    vectors.second[0] = secondX | (secondY << 24);
    vectors.second[1] = (secondY >> 8) | (secondZ << 16);
    vectors.second[2] = (secondZ >> 16) | (secondW << 8);
    FUN_002a9170(vectors.first, vectors.second, vectors.coordinates);
}

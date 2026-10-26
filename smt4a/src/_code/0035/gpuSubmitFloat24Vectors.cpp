/* NON_MATCHING: float24 exponent extraction/table lookup and packing register scheduling differ from retail. */
#include "shard/W6_W6Match8_GpuDepth.h"

extern "C" void gpuSubmitVectorCommand(const u32 *first, const u32 *second, const u32 *coordinates);

/* Pack the two vectors and coordinate pair into the GPU's three-word float24 format. */
extern "C" void gpuSubmitFloat24Vectors(const f32 *secondVector, f32 x, f32 y, f32 z, f32 u, f32 v)
{
    GpuFloat24Vectors packed;
    u32 firstX = gpuEncodeFloat24(x);
    u32 firstY = gpuEncodeFloat24(y);
    u32 firstZ = gpuEncodeFloat24(z);
    packed.first[0] = firstX | (firstY << 24);
    packed.first[1] = (firstY >> 8) | (firstZ << 16);
    packed.first[2] = (firstZ >> 16) | (gpuEncodeFloat24(1.0f) << 8);

    u32 coordinateU = gpuEncodeFloat24(u);
    u32 coordinateV = gpuEncodeFloat24(v);
    packed.coordinates[0] = coordinateU | (coordinateV << 24);
    packed.coordinates[1] = coordinateV >> 8;

    u32 secondX = gpuEncodeFloat24(secondVector[0]);
    u32 secondY = gpuEncodeFloat24(secondVector[1]);
    u32 secondZ = gpuEncodeFloat24(secondVector[2]);
    u32 secondW = gpuEncodeFloat24(secondVector[3]);
    packed.second[0] = secondX | (secondY << 24);
    packed.second[1] = (secondY >> 8) | (secondZ << 16);
    packed.second[2] = (secondZ >> 16) | (secondW << 8);
    gpuSubmitVectorCommand(packed.first, packed.second, packed.coordinates);
}

/* NON_MATCHING: VFP expression scheduling/registers differ and the epsilon test reuses one bit-copy; 80 versus retail 81 instructions. */
#include "common.h"
#include <math.h>

// Intersect both triangle edges at x, then interpolate their heights at z.
extern "C" f32 FUN_001e27f8(const f32 *vertexX, const f32 *vertexY, const f32 *vertexZ, f32 x, f32 z)
{
    s32 origin, first, second;
    if (vertexX[0] == vertexX[1]) {
        origin = 2;
        first = 0;
        second = 1;
    } else if (vertexX[0] == vertexX[2]) {
        origin = 1;
        first = 0;
        second = 2;
    } else {
        origin = 0;
        first = 1;
        second = 2;
    }
    f32 originX = vertexX[origin];
    f32 firstX = vertexX[first] - originX;
    f32 secondX = vertexX[second] - originX;
    f32 originZ = vertexZ[origin];
    f32 firstZ = vertexZ[first] - originZ;
    f32 secondZ = vertexZ[second] - originZ;
    f32 originY = vertexY[origin];
    f32 firstY = vertexY[first] - originY;
    f32 secondY = vertexY[second] - originY;
    f32 firstLength = sqrtf(firstX * firstX + firstZ * firstZ);
    f32 secondLength = sqrtf(secondX * secondX + secondZ * secondZ);
    f32 firstDistance = (x - originX) * firstLength / firstX;
    f32 secondDistance = (x - originX) * secondLength / secondX;
    f32 firstIntersectionZ = firstZ * firstDistance / firstLength + originZ;
    f32 secondIntersectionZ = secondZ * secondDistance / secondLength + originZ;
    f32 firstIntersectionY = firstY * firstDistance / firstLength + originY;
    f32 secondIntersectionY = secondY * secondDistance / secondLength + originY;
    union FloatBits { f32 value; s32 signedBits; u32 bits; } span;
    span.value = secondIntersectionZ - firstIntersectionZ;
    // Match the engine's IEEE-754 near-zero test, including its signed-bit ordering.
    if (span.signedBits >= 0x3a83126f || span.bits >= 0xba83126fu)
        return firstIntersectionY + (secondIntersectionY - firstIntersectionY) * (z - firstIntersectionZ) / span.value;
    return firstIntersectionY;
}

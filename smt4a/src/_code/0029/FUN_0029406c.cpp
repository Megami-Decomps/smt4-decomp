/* NON_MATCHING: the VFP loads, products and divides are scheduled into other registers; retail also computes z - firstIntersectionZ before the epsilon test. */
#include "common.h"
#include <math.h>

// Intersect both triangle edges at x, then interpolate their heights at z.
extern "C" f32 FUN_0029406c(const f32 *vertexX, const f32 *vertexY, const f32 *vertexZ, f32 x, f32 z)
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
    f32 span = secondIntersectionZ - firstIntersectionZ;
    if (span >= 0.001f || span <= -0.001f)
        return firstIntersectionY + (secondIntersectionY - firstIntersectionY) * (z - firstIntersectionZ) / span;
    return firstIntersectionY;
}

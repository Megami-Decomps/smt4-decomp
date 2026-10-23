/* NON_MATCHING: projected-axis values and plane-distance loads use different VFP registers; 71 versus retail 74 instructions. */
#include "shard/W6_W6Match7_CollisionPlanes.h"

// Return the projected sphere's penetration distance, or -1 outside the collision bounds.
extern "C" f32 FUN_0024bb4c(s32 axis, s32 planeCount, const CollisionPlanes *planes,
                            f32 x, f32 y, f32 z, f32 radius)
{
    CollisionDistance result;
    result.value = radius;
    f32 u, v;
    if (axis == 0) {
        u = y;
        v = z;
        x = 0.0f;
    } else {
        u = x;
        if (axis == 1) {
            v = z;
            y = 0.0f;
        } else {
            v = y;
            z = 0.0f;
        }
    }
    for (s32 index = 0; index < planeCount; ++index) {
        f32 distance = x * planes->normals[index].x + y * planes->normals[index].y +
                       z * planes->normals[index].z - planes->distances[index];
        if (distance + radius < 0.0f ||
            (planeCount == 3 &&
             (u < planes->minimumU - radius || v < planes->minimumV - radius ||
              planes->maximumU + radius < u || planes->maximumV + radius < v)))
            return -1.0f;
        if (distance < 0.0f)
            result.value = radius + distance;
    }
    // Compare IEEE-754 encodings to reject negative and sub-epsilon results as retail does.
    if (result.bits < 0x3a83126f)
        result.value = -1.0f;
    return result.value;
}

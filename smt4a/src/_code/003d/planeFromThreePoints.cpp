/* NON_MATCHING: the six edge differences and the cross products get other VFP registers (retail subtracts in the
 * order cz-bz, by-ay, cx-bx, bz-az, cy-by, bx-ax), and retail negates the distance with one vnmla where this
 * build folds the negation into the first product (twin of smt4 FUN_0024f3d8). */
#include "common.h"
#include <math.h>

extern "C" {

/* Computes the normalized plane through three points (normal = (b - a) x (c - b)), snapping tiny normal
 * components to zero, and its distance term. */
void planeFromThreePoints(f32 *normalX, f32 *normalY, f32 *normalZ, f32 *distance,
                  f32 ax, f32 ay, f32 az, f32 bx, f32 by, f32 bz,
                  f32 cx, f32 cy, f32 cz)
{
    f32 abx = bx - ax;
    f32 aby = by - ay;
    f32 abz = bz - az;
    f32 bcx = cx - bx;
    f32 bcy = cy - by;
    f32 bcz = cz - bz;
    *normalX = aby * bcz - abz * bcy;
    *normalY = abz * bcx - abx * bcz;
    *normalZ = abx * bcy - aby * bcx;
    f32 inverseLength = 1.0f / sqrtf(*normalX * *normalX + *normalY * *normalY + *normalZ * *normalZ);
    *normalX *= inverseLength;
    *normalY *= inverseLength;
    *normalZ *= inverseLength;
    if (*normalX > -0.0001f && *normalX < 0.0001f) {
        *normalX = 0.0f;
    }
    if (*normalY > -0.0001f && *normalY < 0.0001f) {
        *normalY = 0.0f;
    }
    if (*normalZ > -0.0001f && *normalZ < 0.0001f) {
        *normalZ = 0.0f;
    }
    *distance = -(*normalX * cx + *normalY * cy + *normalZ * cz);
}

} /* extern "C" */

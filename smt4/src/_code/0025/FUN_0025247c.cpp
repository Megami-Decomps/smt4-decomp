/* NON_MATCHING: float register allocation only: the constant 1.0 and the square root land in s6/s2 where retail uses s4/s5. */
#include "common.h"
#include <math.h>

extern "C" {

/* Writes the unit vector pointing from (fromX, fromY, fromZ) to (toX, toY, toZ) to out[0..2]. */
void FUN_0025247c(f32 *out, f32 fromX, f32 fromY, f32 fromZ, f32 toX, f32 toY, f32 toZ)
{
    f32 dx = toX - fromX;
    f32 dy = toY - fromY;
    f32 dz = toZ - fromZ;
    f32 scale = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);

    out[0] = dx * scale;
    out[1] = dy * scale;
    out[2] = dz * scale;
}

} /* extern "C" */

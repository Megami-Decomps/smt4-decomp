/* NON_MATCHING: identical except the destination of vabs (retail abs into s8 keeping the difference in s6; built overwrites s6) */
#include "common.h"
#include <math.h>

extern "C" {

struct GameStateMode {
    s32 value;
};

extern GameStateMode g_gameState;

f32 FUN_002941b0(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);
f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

/* True when the two points are within `radius` (horizontally in mode >= 100, otherwise in 3D when also within `heightTolerance` vertically). */
u32 FUN_0029d6f0(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ, f32 radius, f32 heightTolerance)
{
    if (g_gameState.value >= 100) {
        if (FUN_002941b0(x, y, z, otherX, otherY, otherZ) < radius) {
            return 1;
        }
    } else if (fabsf(y - otherY) < heightTolerance && distSpatial(x, y, z, otherX, otherY, otherZ) < radius) {
        return 1;
    }
    return 0;
}

} /* extern "C" */

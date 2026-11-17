/* NON_MATCHING: identical except the destination of vabs (retail abs into s8 keeping the difference in s6; built overwrites s6) */
#include "common.h"
#include <math.h>
#include "game/GameState.h"
#include "util/MathFunctions.h"

extern "C" {



f32 FUN_002878e4(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

/* True when the two points are within `radius` (horizontally in mode >= 100, otherwise in 3D when also within `heightTolerance` vertically). */
u32 FUN_0025b408(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ, f32 radius, f32 heightTolerance)
{
    if (g_gameState.mapId >= 100) {
        if (FUN_002878e4(x, y, z, otherX, otherY, otherZ) < radius) {
            return 1;
        }
    } else if (fabsf(y - otherY) < heightTolerance && mathDistanceBetweenPoints(x, y, z, otherX, otherY, otherZ) < radius) {
        return 1;
    }
    return 0;
}

} /* extern "C" */

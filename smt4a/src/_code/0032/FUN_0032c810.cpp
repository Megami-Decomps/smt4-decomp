/* NON_MATCHING: perpendicular normalization and effect calls agree, but VFP temporaries use different registers. */
#include "common.h"
#include <math.h>

extern "C" {
void FUN_0032c808();
void effectSpawnPositionDefault(u32 effect, f32 x, f32 y, f32 z);
void FUN_002371b0();

// Emit paired effects at each endpoint and at a one-unit perpendicular offset.
void FUN_0032c810(u32 firstEffect, u32 secondEffect, f32 startX, f32 startY, f32 endX, f32 endY, f32 height)
{
    f32 dx = endX - startX;
    f32 dy = endY - startY;
    f32 normalX = dy;
    f32 normalY = -dx;
    f32 length = sqrtf(normalX * normalX + normalY * normalY);
    if (length != 0.0f) {
        normalX /= length;
        normalY /= length;
        FUN_0032c808();
        effectSpawnPositionDefault(firstEffect, startX, startY, height);
        effectSpawnPositionDefault(secondEffect, endX, endY, height);
        effectSpawnPositionDefault(firstEffect, normalX + startX, normalY + startY, height);
        effectSpawnPositionDefault(secondEffect, normalX + endX, normalY + endY, height);
        FUN_002371b0();
    }
}
}

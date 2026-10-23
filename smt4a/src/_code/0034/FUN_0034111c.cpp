/* NON_MATCHING: VFP endpoint allocation differs and the compiler folds the perpendicular negation into subtraction. */
#include "common.h"
#include <math.h>

extern "C" {
void FUN_0032c808();
void effectSpawnPositionDefault(u32 effect, f32 x, f32 y, f32 z);
void FUN_002371b0();

// Sort the endpoints, then emit a strip offset along the segment's normal.
void FUN_0034111c(u32 firstEffect, u32 secondEffect, f32 startX, f32 startY,
                  f32 endX, f32 endY, f32 height, f32 width)
{
    if (startX < endX || startY > endY) {
        f32 x = startX;
        startX = endX;
        endX = x;
        f32 y = startY;
        startY = endY;
        endY = y;
    }
    f32 normalX = endY - startY;
    f32 normalY = -(endX - startX);
    f32 length = sqrtf(normalX * normalX + normalY * normalY);
    if (length != 0.0f) {
        normalX = normalX / length * width;
        normalY = normalY / length * width;
        f32 offsetStartX = normalX + startX;
        f32 offsetStartY = normalY + startY;
        f32 offsetEndX = normalX + endX;
        f32 offsetEndY = normalY + endY;
        FUN_0032c808();
        effectSpawnPositionDefault(firstEffect, startX, startY, height);
        effectSpawnPositionDefault(secondEffect, endX, endY, height);
        effectSpawnPositionDefault(firstEffect, offsetStartX, offsetStartY, height);
        effectSpawnPositionDefault(secondEffect, offsetEndX, offsetEndY, height);
        FUN_002371b0();
    }
}
}

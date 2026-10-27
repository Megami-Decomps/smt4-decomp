/* NON_MATCHING: VFP endpoint allocation differs (the build copies endX/endY as one double, retail moves them separately; the segment delta lands in another register). */
#include "common.h"
#include <math.h>

extern "C" {
void FUN_002b011c();
void effectSpawnPositionDefault(u32 effect, f32 x, f32 y, f32 z);
void forwardRecoveredCallback();

// Sort the endpoints, then emit a strip offset along the segment's normal.
void FUN_002d5900(u32 firstEffect, u32 secondEffect, f32 startX, f32 startY,
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
    f32 deltaX = endX - startX;
    f32 normalX = endY - startY;
    f32 normalY = -deltaX;
    f32 length = sqrtf(normalX * normalX + normalY * normalY);
    if (length != 0.0f) {
        normalX = normalX / length * width;
        normalY = normalY / length * width;
        f32 offsetStartX = normalX + startX;
        f32 offsetStartY = normalY + startY;
        f32 offsetEndX = normalX + endX;
        f32 offsetEndY = normalY + endY;
        FUN_002b011c();
        effectSpawnPositionDefault(firstEffect, startX, startY, height);
        effectSpawnPositionDefault(secondEffect, endX, endY, height);
        effectSpawnPositionDefault(firstEffect, offsetStartX, offsetStartY, height);
        effectSpawnPositionDefault(secondEffect, offsetEndX, offsetEndY, height);
        forwardRecoveredCallback();
    }
}
}

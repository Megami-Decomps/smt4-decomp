/* NON_MATCHING: grouped perpendicular offset recovers normalization scratch registers; height and normal.x still swap s20/s21. */
#include "common.h"
#include <math.h>

extern "C" {
void FUN_002b011c();
void effectSpawnPositionDefault(u32 effect, f32 x, f32 y, f32 z);
void forwardRecoveredCallback();

// Emit paired effects at each endpoint and at a one-unit perpendicular offset.
void FUN_00263028(u32 firstEffect, u32 secondEffect, f32 startX, f32 startY, f32 endX, f32 endY, f32 height)
{
    f32 dx = endX - startX;
    f32 dy = endY - startY;
    struct PerpendicularOffset {
        f32 x, y;
    } normal;
    normal.x = dy;
    normal.y = -dx;
    f32 length = sqrtf(normal.x * normal.x + normal.y * normal.y);
    if (length != 0.0f) {
        normal.x /= length;
        normal.y /= length;
        FUN_002b011c();
        effectSpawnPositionDefault(firstEffect, startX, startY, height);
        effectSpawnPositionDefault(secondEffect, endX, endY, height);
        effectSpawnPositionDefault(firstEffect, normal.x + startX, normal.y + startY, height);
        effectSpawnPositionDefault(secondEffect, normal.x + endX, normal.y + endY, height);
        forwardRecoveredCallback();
    }
}
}

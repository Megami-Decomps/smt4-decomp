/* NON_MATCHING: retail uses mov r3, r0 where the compiled block uses vmov.f32 s8, s2. */
#include "common.h"

extern "C" void FUN_00280a08(
    u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0,
    f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2,
    f32 x3, f32 y3, f32 z3);

extern "C" void FUN_002039a0(
    u32 color,
    f32 startX, f32 startY, f32 startZ,
    f32 endX, f32 endY, f32 endZ)
{
    FUN_00280a08(
        color, color, color, color,
        startX, startY, startZ,
        endX, endY, endZ,
        startX + 10.0f, startY + 10.0f, startZ,
        endX + 10.0f, endY + 10.0f, endZ);
}

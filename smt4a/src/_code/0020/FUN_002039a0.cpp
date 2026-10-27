#include "common.h"

extern "C" void FUN_00280a08(u32 color0, u32 color1, u32 color2, u32 color3, f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                             f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3);

/* Draws the quad from `start` to `end` with its far edge shifted ten units along x and y. */
extern "C" void FUN_002039a0(u32 color, f32 startX, f32 startY, f32 startZ, f32 endX, f32 endY, f32 endZ)
{
    f32 shiftedEndY = endY + 10.0f;
    f32 shiftedEndX = endX + 10.0f;
    f32 shiftedStartY = startY + 10.0f;
    f32 shiftedStartX = startX + 10.0f;
    u32 color1, color2, color3;
    color1 = color2 = color3 = color;
    FUN_00280a08(color, color1, color2, color3, startX, startY, startZ, endX, endY, endZ, shiftedStartX, shiftedStartY, startZ,
                 shiftedEndX, shiftedEndY, endZ);
}

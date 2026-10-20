/* NON_MATCHING: the same float operations, but armcc allocates the VFP registers differently (retail converts dx/dy into s0/s1 first and loads the position into s2-s5). */
#include "common.h"

extern "C" {

typedef struct ScreenPos {
    f32 x;       /* 0x0 */
    f32 y;       /* 0x4 */
    f32 offsetX; /* 0x8 */
    f32 offsetY; /* 0xc */
} ScreenPos;

extern void FUN_002124d4(s32 x, s32 y, s32 z, const s8 *digits);

/* Draws a digit string at the position plus its offset, shifted by (dx, dy). */
void FUN_00212490(const ScreenPos *pos, s32 dx, s32 dy, s32 z, const s8 *digits)
{
    ScreenPos p = *pos;

    FUN_002124d4((s32)(p.x + p.offsetX + (f32)dx), (s32)(p.y + p.offsetY + (f32)dy), z, digits);
}

} /* extern "C" */

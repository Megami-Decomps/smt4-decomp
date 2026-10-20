#include "common.h"

extern "C" {

/* A rectangle as position and extent (x, y, width, height). */
struct DigitArea {
    f32 x;
    f32 y;
    f32 width;
    f32 height;
};

void FUN_002e72c8(s32 x, s32 y, u32 color, const s8 *digits);

/* Draw a digit string at an offset from the area's far corner. */
void FUN_002e7284(const DigitArea *area, s32 offsetX, s32 offsetY, u32 color, const s8 *digits)
{
    s32 x = (s32)(area->x + area->width + offsetX);
    s32 y = (s32)(area->y + area->height + offsetY);

    FUN_002e72c8(x, y, color, digits);
}

} /* extern "C" */

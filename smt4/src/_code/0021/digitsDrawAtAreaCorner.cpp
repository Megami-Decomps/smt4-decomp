#include "common.h"

extern "C" {

struct DigitArea {
    f32 x;
    f32 y;
    f32 width;
    f32 height;
};

void digitsDrawString(s32 x, s32 y, u32 color, const s8 *digits);

/* Draw digits relative to the area's far corner. */
void digitsDrawAtAreaCorner(const DigitArea *area, s32 offsetX, s32 offsetY, u32 color, const s8 *digits)
{
    s32 x = (s32)(area->x + area->width + offsetX);
    s32 y = (s32)(area->y + area->height + offsetY);
    digitsDrawString(x, y, color, digits);
}

}

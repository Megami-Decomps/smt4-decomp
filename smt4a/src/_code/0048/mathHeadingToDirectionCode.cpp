#include "common.h"

extern "C" {
f32 mathSnapHeading8(f32 angle);

/* Converts a snapped heading to an eight-way direction code. */
u8 mathHeadingToDirectionCode(s32 unused, f32 angle)
{
    u8 direction = 0;
    switch ((s32)mathSnapHeading8(angle)) {
    case 0:
    case 360:
        direction = 4;
        break;
    case 45:
        direction = 3;
        break;
    case 90:
        direction = 2;
        break;
    case 135:
        direction = 1;
        break;
    case 180:
        break;
    case 225:
        direction = 7;
        break;
    case 270:
        direction = 6;
        break;
    case 315:
        direction = 5;
        break;
    }
    return direction;
}
}

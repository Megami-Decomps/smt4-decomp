#include "common.h"

extern "C" {

/* RGBA colour of a category (default white). */
u32 categoryGetColor(u32 category)
{
    u32 color = 0xffffffff;

    switch (category) {
    case 1:
        color = 0x5a5a5aff;
        break;
    case 5:
        color = 0xb252ceff;
        break;
    case 6:
        color = 0xf721f9ff;
        break;
    case 7:
        color = 0x52dee7ff;
        break;
    case 8:
        color = 0xefd629ff;
        break;
    case 9:
        color = 0x7e620cff;
        break;
    case 10:
        color = 0xffffff80;
        break;
    case 3:
        color = 0xff5400ff;
        break;
    }
    return color;
}

} /* extern "C" */

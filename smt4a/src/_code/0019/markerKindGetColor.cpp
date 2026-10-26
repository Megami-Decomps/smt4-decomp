#include "common.h"
#include "ui/UiControl.h"

extern "C" {

/* Returns the RGBA color for a marker kind, 0xFFFFFFFF (white) for kinds without one. */
u32 markerKindGetColor(u32 kind)
{
    u32 color = 0xffffffff;

    switch (kind) {
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
    case 11:
        color = 0xff0055ff;
        break;
    case 12:
        color = 0x124fd8ff;
        break;
    case 13:
        color = 0x6b7296ff;
        break;
    }
    return color;
}

} /* extern "C" */

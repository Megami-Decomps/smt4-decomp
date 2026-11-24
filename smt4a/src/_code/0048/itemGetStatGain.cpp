#include "code/Code0048.h"

/* Returns the points a stat item adds to its stat; the unit's slot (-1 for the protagonist) is not used. */
extern "C" u32 itemGetStatGain(s32 id, s32 slot)
{
    u32 result = 0;
    switch (id) {
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
        result = 3;
        break;
    case 0x7a0:
    case 0x7a1:
    case 0x7a2:
    case 0x7a3:
    case 0x7a4:
        result = 1;
        break;
    case 0x7a5:
    case 0x7a6:
        result = 20;
        break;
    default:
        break;
    }
    return result;
}

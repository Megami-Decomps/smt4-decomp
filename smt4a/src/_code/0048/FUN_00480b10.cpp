#include "common.h"

extern "C" u32 FUN_00480b10(s32 id)
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

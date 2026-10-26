#include "common.h"

extern "C" {
// Categories seven through eleven use the special -3 result.
s32 FUN_004c53fc(u32 category)
{
    s32 result = 0;
    switch (category) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6:
        break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        result = -3;
        break;
    }
    return result;
}
}

#include "common.h"

extern "C" {
s32 flagValueIsPositive(u32 flag);

// Gate categories one through nine on story flag 0x364.
s32 flagCategoryIsAvailable(u32 category)
{
    switch (category) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        return flagValueIsPositive(0x364);
    default:
        return 0;
    }
}
}

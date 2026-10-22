#include "common.h"

extern "C" {

/* Maps an index (0-15) to its code in a fixed table; 7 and anything out of range map to 0. */
u32 FUN_0023e60c(u32 index)
{
    switch (index) {
    case 8:
        return 1;
    case 0:
        return 2;
    case 1:
        return 3;
    case 2:
        return 4;
    case 3:
        return 5;
    case 5:
        return 6;
    case 6:
        return 7;
    case 4:
        return 8;
    case 9:
        return 9;
    case 11:
        return 10;
    case 12:
        return 11;
    case 10:
        return 12;
    case 13:
        return 13;
    case 14:
        return 14;
    case 15:
        return 15;
    default:
        return 0;
    }
}

} /* extern "C" */

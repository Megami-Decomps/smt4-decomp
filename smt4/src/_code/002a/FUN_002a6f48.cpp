#include "common.h"

extern "C" {

// Map a kind id to its counterpart id, -1 when it has none.
s32 FUN_002a6f48(s32 kind)
{
    switch (kind) {
    case 2:
        return 9;
    case 3:
        return 14;
    case 4:
        return 13;
    case 12:
        return 17;
    case 23:
        return 22;
    case 24:
        return 20;
    case 31:
        return 10;
    case 32:
        return 15;
    default:
        return -1;
    }
}

} /* extern "C" */

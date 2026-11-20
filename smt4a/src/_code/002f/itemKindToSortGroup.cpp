#include "common.h"

extern "C" {

/* Maps an item kind enum to its display/sort group order. */
u32 itemKindToSortGroup(u32 kind)
{
    switch (kind) {
    case 6:
        return 1;
    case 0:
        return 2;
    case 4:
        return 3;
    case 5:
        return 4;
    case 2:
        return 5;
    case 3:
        return 6;
    case 7:
        return 7;
    case 10:
        return 8;
    case 8:
        return 9;
    case 9:
        return 10;
    case 11:
        return 11;
    case 1:
        return 0;
    default:
        return 0;
    }
}

} /* extern "C" */

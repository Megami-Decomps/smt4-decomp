#include "common.h"
#include "shard/FUN_003a6f84.h"

extern "C" {

/* Maps a kind (0-17) to its display index; unknown kinds and kind 4 map to 0. */
u32 FUN_003a6f84(u32 kind)
{
    u32 index = 0;

    switch (kind) {
    case 0:
        index = 14;
        break;
    case 1:
    case 2:
        index = 7;
        break;
    case 3:
        index = 8;
        break;
    case 5:
        index = 1;
        break;
    case 6:
        index = 2;
        break;
    case 7:
        index = 3;
        break;
    case 8:
        index = 5;
        break;
    case 9:
        index = 6;
        break;
    case 10:
    case 11:
        index = 4;
        break;
    case 12:
    case 13:
        index = 9;
        break;
    case 14:
    case 15:
        index = 10;
        break;
    case 16:
    case 17:
        index = 11;
        break;
    }
    return index;
}

} /* extern "C" */

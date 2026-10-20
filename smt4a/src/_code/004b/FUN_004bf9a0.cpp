#include "common.h"

extern "C" {

/* Maps a category id (3, 5-13) to its slot id; 0 for any other id. */
u32 FUN_004bf9a0(u32 id)
{
    u32 slot = 0;

    switch (id) {
    case 5:
        slot = 0xB;
        break;
    case 6:
        slot = 0xC;
        break;
    case 7:
        slot = 0xD;
        break;
    case 8:
        slot = 0xE;
        break;
    case 9:
        slot = 0xF;
        break;
    case 10:
        slot = 0x10;
        break;
    case 3:
        slot = 9;
        break;
    case 11:
        slot = 0x11;
        break;
    case 12:
        slot = 0x12;
        break;
    case 13:
        slot = 0x13;
        break;
    }
    return slot;
}

} /* extern "C" */

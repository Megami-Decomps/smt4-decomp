#include "common.h"
#include "code/Code0040_Smt4a.h"

extern "C" {

/* Maps a level (0 counts as 1) to its message id, two levels per id from 0x3e9. */
s32 FUN_004038e0(u32 unused, s32 level)
{
    s32 id = 0x3e9;

    if (level == 0) {
        level = 1;
    }
    switch (level) {
    case 1:
    case 2:
        id = 0x3e9;
        break;
    case 3:
        id = 0x3ea;
        break;
    case 5:
    case 6:
        id = 0x3eb;
        break;
    case 7:
    case 8:
        id = 0x3ec;
        break;
    case 9:
    case 10:
        id = 0x3ed;
        break;
    case 11:
    case 12:
        id = 0x3ee;
        break;
    case 13:
    case 14:
        id = 0x3ef;
        break;
    case 15:
    case 16:
        id = 0x3f0;
        break;
    case 17:
    case 18:
        id = 0x3f2;
        break;
    }
    if (id >= 0x3f3) {
        id = 0x3e9;
    }
    return id;
}

} /* extern "C" */

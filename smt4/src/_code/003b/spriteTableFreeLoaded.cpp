#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int asdTMTexTableReleaseNode(int table, int index);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0xC78];
    /* 0xC78 */ u8 loaded[0x40];
} Obj;

/* Frees the loaded sprites of table 0x2A; returns 1 when no pair of flag bytes (from +0xC78) is set. */
u32 spriteTableFreeLoaded(Obj *obj)
{
    int i = 0;
    u8 *pair;
    u32 second;
    u8 firstClear;

    do {
        if ((obj->loaded[i] != 0) && (asdTMTexTableNodeIsLoaded(0x2a, i) != 0)) {
            asdTMTexTableReleaseNode(0x2a, i);
            obj->loaded[i] = 0;
        }
        i = i + 1;
    } while (i < 0x40);
    i = 0;
    while (1) {
        pair = (u8 *)obj + i + 0xc00;
        second = (u32)pair;
        firstClear = pair[0x78] == 0;
        if (firstClear) {
            second = pair[0x79];
        }
        if (!firstClear || second != 0) {
            break;
        }
        i = i + 2;
        if (i >= 0x40) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */

#ifndef SMT4A_MAP_MAPDEPARTITEMS_H
#define SMT4A_MAP_MAPDEPARTITEMS_H

#include "common.h"
#include <stddef.h>

/* The departure's two item lists (mapDepart.cpp's data: 0x5f1cbc and 0x5f1d74, 0xB8 bytes each). Both start with
 * the ids, attributes and count FUN_002b5e08 and relicSearchDraw fill (mapDepartUpdate passes their addresses). */

/* The first list: the ids and attributes the search found. */
struct DepartureFoundItems {
    /* 0x00 */ u32 sourceIds[16];
    /* 0x40 */ u8 sourceAttributes[16];
    /* 0x50 */ s32 sourceCount;
    /* 0x54 */ u8 unk54[0x60];
    /* 0xB4 */ s16 unkB4;
    /* 0xB6 */ s16 unkB6;
};

/* The second list: the relics found, then (FUN_003ca244) the same ids collapsed into a list with quantities. */
struct DepartureCollectedItems {
    /* 0x00 */ u32 sourceIds[16];
    /* 0x40 */ u8 sourceAttributes[16];
    /* 0x50 */ s32 sourceCount;
    /* 0x54 */ s16 ids[16];
    /* 0x74 */ u8 attributes[16];
    /* 0x84 */ s16 quantities[16];
    /* 0xA4 */ s16 count;
    /* 0xA6 */ s16 unkA6;
    /* 0xA8 */ u8 unkA8[0x10];
};

typedef char DepartureItemsLayoutCheck[sizeof(DepartureFoundItems) == 0xB8 && sizeof(DepartureCollectedItems) == 0xB8 &&
    offsetof(DepartureFoundItems, sourceCount) == 0x50 && offsetof(DepartureFoundItems, unkB4) == 0xB4 &&
    offsetof(DepartureCollectedItems, ids) == 0x54 && offsetof(DepartureCollectedItems, quantities) == 0x84 &&
    offsetof(DepartureCollectedItems, count) == 0xA4 ? 1 : -1];

extern "C" {
extern DepartureFoundItems DAT_005f1cbc;
extern DepartureCollectedItems DAT_005f1d74;
} /* extern "C" */

#endif

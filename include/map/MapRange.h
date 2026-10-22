/* Map-range model handles and their overlapping entry storage. */
#ifndef MAP_MAPRANGE_H
#define MAP_MAPRANGE_H
#include "common.h"
typedef struct MapRangeEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x27];
    /* 0x28 */ u8 valid;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ u32 handle;
    /* 0x30 */ u8 enabled;
    /* 0x31 */ u8 unk31[0xB];
} MapRangeEntry;
typedef struct MapRangeHandleSlot {
    /* 0x0 */ u32 handle;
    /* 0x4 */ u32 unk4;
} MapRangeHandleSlot;
typedef struct MapRangeEntryStorage {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ MapRangeEntry entries[16];
} MapRangeEntryStorage;
typedef struct MapRangeWork {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ union {
        MapRangeHandleSlot slots[2];
        MapRangeEntryStorage records;
    };
} MapRangeWork;

/* Retail 32-bit layout invariants. */
typedef char MapRangeEntrySizeCheck[sizeof(MapRangeEntry) == 0x3C ? 1 : -1];
typedef char MapRangeHandleSlotSizeCheck[sizeof(MapRangeHandleSlot) == 0x8 ? 1 : -1];
typedef char MapRangeWorkSizeCheck[sizeof(MapRangeWork) == 0x3E4 ? 1 : -1];

#endif

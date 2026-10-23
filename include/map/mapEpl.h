/* map/mapEpl.c: the map's EPL entry table. */
#ifndef MAP_MAPEPL_H
#define MAP_MAPEPL_H

#include "common.h"
#include <stddef.h>

#define MAP_EPL_ENTRIES 16

typedef struct MapEplEntry {
    union {
        /* 0x00 */ u8 unk00[0x10];
        /* 0x00 */ f32 position[4];
    };
    /* 0x10 */ void *data;        /* heap block */
    /* 0x14 */ void *object;      /* released with the entry-object destroyer */
} MapEplEntry;

typedef struct MapEpl {
    union {
        /* 0x00 */ u8 unk00[8];
        /* 0x00 */ u32 state[2];
    };
    /* 0x08 */ MapEplEntry entries[MAP_EPL_ENTRIES];
} MapEpl;

typedef char MapEplPositionOffsetCheck[sizeof(MapEplEntry) == 0x18 &&
    offsetof(MapEplEntry, position) == 0 && offsetof(MapEplEntry, data) == 0x10 &&
    offsetof(MapEplEntry, object) == 0x14 && offsetof(MapEpl, entries) == 8 &&
    sizeof(MapEpl) == 0x188 ? 1 : -1];

#endif

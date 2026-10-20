/* map/mapEpl.c: the map's EPL entry table. */
#ifndef MAP_MAPEPL_H
#define MAP_MAPEPL_H

#include "common.h"

#define MAP_EPL_ENTRIES 16

typedef struct MapEplEntry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *data;        /* heap block */
    /* 0x14 */ void *object;      /* released with the entry-object destroyer */
} MapEplEntry;

typedef struct MapEpl {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MapEplEntry entries[MAP_EPL_ENTRIES];
} MapEpl;

#endif

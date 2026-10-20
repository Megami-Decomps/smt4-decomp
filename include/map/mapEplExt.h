/* map/mapEplExt.c: the map's EPL extension table (Apocalypse layout). */
#ifndef MAP_MAPEPLEXT_H
#define MAP_MAPEPLEXT_H

#include "common.h"

#define MAP_EPL_EXT_ENTRIES 16

typedef struct MapEplExtEntry {
    /* 0x00 */ void *object;
    /* 0x04 */ u8 unk04[0x60];
} MapEplExtEntry;

typedef struct MapEplExt {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ MapEplExtEntry entries[MAP_EPL_EXT_ENTRIES];
} MapEplExt;

#endif

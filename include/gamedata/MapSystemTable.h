/* The maps: data table 0x2E section 2, map/all/MapSystemTable.tbb table 2, in both games (the table
 * ids follow the game's data-file list, NKMBaseTable.tbb = 0). One row per map, in id order, ended
 * by a row whose id is -1: its display name, the game flag that opens it, its event cooldown timer
 * and its navigation background. */
#ifndef GAMEDATA_MAPSYSTEMTABLE_H
#define GAMEDATA_MAPSYSTEMTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 0x2C-byte row of MapSystemTable.tbb table 2 (data table 0x2E, section 2). */
struct MapSystemMapRecord {
    /* 0x00 */ char name[0x20];
    /* 0x20 */ s16 mapId;                 /* -1 ends the table */
    /* 0x22 */ s16 gameFlag;              /* set when the map opens; 0 = none */
    /* 0x24 */ u8 unk24[2];
    /* 0x26 */ s16 cooldown;              /* event cooldown, in 0x708-frame units */
    /* 0x28 */ s16 timerSlot;             /* the map block's timer it uses */
    /* 0x2A */ s16 textureIndex;          /* navigation background texture, minus 1 */
};

typedef char MapSystemMapRecordLayoutCheck[
    sizeof(MapSystemMapRecord) == 0x2C &&
    offsetof(MapSystemMapRecord, mapId) == 0x20 &&
    offsetof(MapSystemMapRecord, cooldown) == 0x26 &&
    offsetof(MapSystemMapRecord, textureIndex) == 0x2A ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

/* IV: the number of rows, row `index` (NULL past the end), and the row of map `id` (NULL when the
 * table ends first). */
s32 dataTable2eSub2GetCount(void);
MapSystemMapRecord *dataTable2eSub2GetRecord(u32 index);
MapSystemMapRecord *dataTableFindRecordById(s32 id);

/* Apocalypse: the number of rows, row `index` (NULL past the end), and the name of map `id`. */
s32 dataTable2ECount(void);
MapSystemMapRecord *dataTable2EGetEntry(u32 index);
const char *dataTableEntryNameById(s32 id, s32 kind);

#ifdef __cplusplus
}

/* The rows of section 2 of `table` (dataTableGet(0x2E, 2)). */
static inline MapSystemMapRecord *mapSystemMapRecords(void *table)
{
    return static_cast<MapSystemMapRecord *>(dataTableGetEntries(table));
}
#endif

#endif

/* The map search marks: data table 0x30, map/all/ms_search_Table.tbb, in both games (the table ids
 * follow the game's data-file list, NKMBaseTable.tbb = 0). Add-on content appends records of the
 * same layout (kind 0x27), reached by index after the base table's (msSearchGetRecordAt / msSearchGetRecordAt). */
#ifndef GAMEDATA_MSSEARCHTABLE_H
#define GAMEDATA_MSSEARCHTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* The search table's data table id and the add-on record kind that extends it. */
enum { MS_SEARCH_TABLE = 0x30, MS_SEARCH_ADDON_KIND = 0x27 };

/* One 0x28-byte row of ms_search_Table.tbb table 0 (data table 0x30, section 0). */
struct MsSearchRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 id;                    /* -1 = unused */
    /* 0x24 */ s16 markBit;               /* bit of the map block's marks it sets */
    /* 0x26 */ s8 areaId;
    /* 0x27 */ u8 unk27;
};

typedef char MsSearchRecordLayoutCheck[
    sizeof(MsSearchRecord) == 0x28 &&
    offsetof(MsSearchRecord, id) == 0x20 &&
    offsetof(MsSearchRecord, markBit) == 0x24 &&
    offsetof(MsSearchRecord, areaId) == 0x26 ? 1 : -1];

#ifdef __cplusplus
/* The rows of section 0 of `table` (dataTableGet(0x30, 0)). */
static inline MsSearchRecord *msSearchRecords(void *table)
{
    return static_cast<MsSearchRecord *>(dataTableGetEntries(table));
}
#endif

#endif

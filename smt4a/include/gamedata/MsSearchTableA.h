/* The map search table's lookups over this game's add-on system (the record and table ids: gamedata/MsSearchTable.h). */
#ifndef SMT4A_GAMEDATA_MS_SEARCH_TABLE_A_H
#define SMT4A_GAMEDATA_MS_SEARCH_TABLE_A_H

#include "addon/AocSystemA.h"
#include "gamedata/MsSearchTable.h"
#include "shard/W4_W4Match5_DataTable.h"

extern "C" MsSearchRecord *msSearchGetAddonRecordAt(AocSystemA *system, s32 index);

/* Counts the searchable records after the base table size has been fetched. */
static s32 msSearchCombinedCount(u32 baseCount, AocSystemA *system)
{
    return baseCount + groupedFileTablesCountRecordsOfKind(system, MS_SEARCH_ADDON_KIND, 0);
}

/* Counts the base table's records and the add-on records after them (dataTableGetRecordFortyEight's body). */
static s32 msSearchCount(void)
{
    u32 baseCount = dataTableGetCount(dataTableGetSection(MS_SEARCH_TABLE, 0));
    return msSearchCombinedCount(baseCount, g_aocSystem);
}

/* Searches the base record range before indexing the appended add-on range.
 * msSearchGetRecordAt is the out-of-line copy of this lookup. */
static MsSearchRecord *msSearchGetRecord(u32 index)
{
    void *table = dataTableGet(MS_SEARCH_TABLE, 0);
    MsSearchRecord *entries = msSearchRecords(table);
    u32 count = dataTableGetCount(table);
    if (index < count)
        return &entries[index];
    u32 addonCount = groupedFileTablesCountRecordsOfKind(g_aocSystem, MS_SEARCH_ADDON_KIND, 0);
    if (index >= count + addonCount)
        return NULL;
    return msSearchGetAddonRecordAt(g_aocSystem, index - count);
}

#endif

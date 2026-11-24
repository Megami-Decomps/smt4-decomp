#include "gamedata/MsSearchTableA.h"

extern "C" {

/* Finds the index of a nonempty map search mark by ID. */
s32 msSearchFindIndexById(s32 id)
{
    for (s32 index = 0;
         index < msSearchCombinedCount(dataTableGetCount(dataTableGetSection(MS_SEARCH_TABLE, 0)), g_aocSystem);
         ++index) {
        MsSearchRecord *entry = msSearchGetRecord(index);
        if (entry->id != -1 && entry->id == id) {
            return index;
        }
    }
    return -1;
}
} /* extern "C" */

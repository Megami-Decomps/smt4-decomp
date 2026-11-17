#include "common.h"
#include "gamedata/EncountData.h"
#include "addon/AocSystem_Smt4.h"

extern "C" {

extern s32 g_aocSystem;

extern EncountRecord *dataTableFindRecordForSources(s32 system, u32 map, u32 area);
extern s32 gameFlagIsSet(u32 flag);

/* Finds the encounter record for (map, area): the add-on system's own, else the first table record
 * whose flag conditions hold; the table's first record if none does. */
EncountRecord *aocEntryFind(u32 map, u32 area)
{
    EncountRecord *found = dataTableFindRecordForSources(g_aocSystem, map, area);
    void *section;
    EncountRecord *entries;
    s32 count;
    s32 i;

    if (found != NULL) {
        return found;
    }
    section = dataTableGet(2, 0);
    entries = encountRecords(section);
    count = dataTableGetCount(section);
    for (i = 0; i < count; i++) {
        if (entries[i].map == map && entries[i].area == area
            && (entries[i].requiredFlag == 0 || gameFlagIsSet(entries[i].requiredFlag) != 0)
            && (entries[i].excludedFlag == 0 || gameFlagIsSet(entries[i].excludedFlag) == 0)) {
            return &entries[i];
        }
    }
    return entries;
}

} /* extern "C" */

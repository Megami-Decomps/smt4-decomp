#include "gamedata/EncountData.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
extern void *g_aocSystem;
EncountRecordA *aocPackageFindConditionalMapRecord(void *, u32, u32);
s32 gameFlagIsSet(u32);

/* Finds the record for (map, area): the add-on system's own, else the first table record whose flag
 * and level conditions hold; the table's first record if none does. */
EncountRecordA *dataTable02FindConditionalMapRecord(u32 map, u32 area)
{
    EncountRecordA *found = aocPackageFindConditionalMapRecord(g_aocSystem, map, area);
    void *section;
    EncountRecordA *records;
    s32 count;
    s32 i;

    if (found != NULL) {
        return found;
    }
    section = dataTableGet(2, 0);
    records = encountRecordsA(section);
    count = dataTableGetCount(section);
    for (i = 0; i < count; i++) {
        if (records[i].map == map && records[i].area == area
            && (records[i].requiredFlag == 0 || gameFlagIsSet(records[i].requiredFlag) != 0)
            && (records[i].excludedFlag == 0 || gameFlagIsSet(records[i].excludedFlag) == 0)) {
            u16 level = gameGetPlayerData()->level;
            if (records[i].minimumLevel == 0 || records[i].minimumLevel <= level) {
                return &records[i];
            }
        }
    }
    return records;
}
}

#include "common.h"
#include "gamedata/NpcRoomTable.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);

/* Collects up to eight entries of NpcRoomTable.tbb table 1 for `id` whose required flags are met (two "set" flags and two "clear" flags, each only if given) and returns the first one, or NULL. */
NpcRoomEventRecord *dataTableFindMatching35(u32 id)
{
    void *table;
    NpcRoomEventRecord *entry;
    u32 count;
    s32 flag;
    u32 i;
    s32 found;
    NpcRoomEventRecord *matches[9];

    matches[0] = NULL;
    matches[1] = NULL;
    matches[2] = NULL;
    matches[3] = NULL;
    matches[4] = NULL;
    matches[5] = NULL;
    matches[6] = NULL;
    matches[7] = NULL;
    table = dataTableGet(0x35, 1);
    entry = npcRoomEventRecords(table);
    count = dataTableGetCount(table);
    found = 0;
    for (i = 0; i < count; i = i + 1) {
        if ((((entry->id == id) && ((entry->requiredFlagA == 0 || (flag = gameFlagIsSet(entry->requiredFlagA), flag != 0)))) &&
             ((entry->requiredFlagB == 0 || (flag = gameFlagIsSet(entry->requiredFlagB), flag != 0)))) &&
            (((entry->excludedFlagA == 0 || (flag = gameFlagIsSet(entry->excludedFlagA), flag == 0)) &&
              ((entry->excludedFlagB == 0 || (flag = gameFlagIsSet(entry->excludedFlagB), flag == 0)))))) {
            matches[found] = entry;
            found = found + 1;
            if (found >= 8) {
                return matches[0];
            }
        }
        entry = entry + 1;
    }
    return matches[0];
}

} /* extern "C" */

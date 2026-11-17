#include "common.h"
#include "gamedata/NpcRoomTable.h"
#include "shard/W5_W5Match7_SelectedRecord.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);

/* Returns 1 when NpcRoomTable.tbb table 1 has an entry for `id` whose required flags are met: each of the two "set" flags (if given) is set and each of the two "clear" flags (if given) is clear. */
u32 dataTableHasMatchingEntry35(u32 id)
{
    void *table;
    NpcRoomEventRecord *entry;
    u32 count;
    s32 flag;
    u32 i;

    table = dataTableGet(0x35, 1);
    entry = npcRoomEventRecords(table);
    count = dataTableGetCount(table);
    for (i = 0; i < count; i++) {
        if ((((entry->id == id) && ((entry->requiredFlagA == 0 || (flag = gameFlagIsSet(entry->requiredFlagA), flag != 0)))) &&
             ((entry->requiredFlagB == 0 || (flag = gameFlagIsSet(entry->requiredFlagB), flag != 0)))) &&
            (((entry->excludedFlagA == 0 || (flag = gameFlagIsSet(entry->excludedFlagA), flag == 0)) &&
              ((entry->excludedFlagB == 0 || (flag = gameFlagIsSet(entry->excludedFlagB), flag == 0)))))) {
            return 1;
        }
        entry = entry + 1;
    }
    return 0;
}

} /* extern "C" */

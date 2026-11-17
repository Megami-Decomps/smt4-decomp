/* Walks the NPC room events (NpcRoomTable.tbb table 1) and fires gameSaveWorkOrFlagMask for each one that requires flag `matchId` and whose two excluded flags are not both set. */
#include "common.h"
#include "gamedata/NpcRoomTable.h"

extern "C" {

void gameSaveWorkOrFlagMask(s32 id, s32 param);
s32 gameFlagIsSet(u16 flag);

void tableFireMatchingEntries(u32 matchId)
{
    if ((s32)matchId < 0) {
        return;
    }
    void *group = dataTableGet(0x35, 1);
    NpcRoomEventRecord *entry = npcRoomEventRecords(group);
    u32 count = dataTableGetCount(group);
    u32 i;

    for (i = 0; i < count; i++, entry++) {
        if (entry->requiredFlagA == matchId || entry->requiredFlagB == matchId) {
            if (gameFlagIsSet(entry->excludedFlagA) == 0 || gameFlagIsSet(entry->excludedFlagB) == 0) {
                gameSaveWorkOrFlagMask(entry->id, entry->param);
            }
        }
    }
}

} /* extern "C" */

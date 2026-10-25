/* NON_MATCHING: retail hoists the constant 1 into sl before the entry loop (extra push of sl, loop counter in r4/entry in r5) and converts the two float arguments into s1/s0 rather than s0/s2 */
#include "gamedata/Table49NaviEntry.h"
#include "gamedata/GameFlags.h"
#include "gamedata/Table49Trigger.h"
#include "map/mapDepart.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

s32 dataTable49Type1Count(void);
const Table49Trigger *dataTable49GetEntry(s32 index);
Table49NaviEntry *dataTableGetEntry49(s32 index);
s32 gameFlagIsSet(s32 flag);

void naviMainSetFlagsAndActivate(u8 first, u8 second, s32 third, s32 fourth, s32 fifth, s32 sixth);
void navigationSetOrQueueRequest(s32 mapId, s32 areaId, s32 x, f32 y, f32 z);
extern GameStateA g_gameState;

/* Rebuilds the list of active navigation guide entries from the table-0x49 flags and queues the first one's destination. */
void FUN_003a249c(void)
{
    s32 entryCount = FUN_003bf87c();
    s32 firstId = 0;
    FlagWorkBanks *flags = gameFlagsGetBlock();
    s32 triggerCount = dataTable49Type1Count();
    s32 i;

    for (i = 0; i < triggerCount; i++) {
        const Table49Trigger *trigger = dataTable49GetEntry(i);
        if (gameFlagIsSet(trigger->excludedFlag) && !gameFlagIsSet(trigger->triggeredFlag)) {
            gameFlagSetValue(trigger->triggeredFlag, 1, 1);
        }
    }

    FlagWorkBanks *banks = gameFlagsGetBlock();
    for (i = 0; i < 8; i++) {
        banks->navi.slots[i].id = 0;
    }
    banks->navi.slotCount = 0;

    for (i = 0; i < entryCount; i++) {
        Table49NaviEntry *entry = dataTableGetEntry49(i);
        if (entry->id != 0 && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag)) &&
            (entry->excludedFlag == 0 || !gameFlagIsSet(entry->excludedFlag))) {
            if (firstId == 0) {
                firstId = entry->id;
            }
            FlagWorkBanks *active = gameFlagsGetBlock();
            if (active != NULL && active->navi.slotCount < 8) {
                active->navi.slots[active->navi.slotCount].id = i;
                active->navi.slotCount++;
            }
            entry = dataTableGetEntry49(i);
            naviMainSetFlagsAndActivate(entry->naviFlags[0], entry->naviFlags[1], entry->naviFlags[2],
                                        entry->naviFlags[3], entry->naviFlags[4], entry->naviFlags[5]);
            naviMainSetFlagsAndActivate(entry->extraFlags[0], entry->extraFlags[1], 0, 0, 0, 0);
            navigationSetOrQueueRequest(entry->mapId, entry->areaId, entry->x, entry->y, entry->z);
        }
    }

    FlagWorkBanks *current = gameFlagsGetBlock();
    s32 currentId = 0;
    if (current != NULL) {
        currentId = current->navi.currentId;
    }
    if (currentId != firstId) {
        flags->navi.refresh = 1;
        g_gameState.navigation.naviRefresh = 1;
        flags->navi.refreshSecond = 1;
    }
    if (firstId != 0) {
        FlagWorkBanks *target = gameFlagsGetBlock();
        if (target != NULL) {
            target->navi.currentId = firstId;
        }
    }
}

} /* extern "C" */

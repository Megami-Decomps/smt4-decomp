/* NON_MATCHING: retail hoists the constant 1 into sl before the entry loop (extra push of sl, loop counter in r4/entry in r5) and converts the two float arguments into s1/s0 rather than s0/s2 */
#include "gamedata/Table49NaviEntry.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "gamedata/Table49Trigger.h"
#include "map/mapDepart.h"
#include "gamedata/MapSaveBlockA.h"

extern "C" {

s32 dataTable49Type1Count(void);
const Table49Trigger *dataTable49GetEntry(s32 index);
Table49NaviEntry *dataTableGetEntry49(s32 index);
s32 gameFlagIsSet(s32 flag);

void naviMainSetFlagsAndActivate(u8 first, u8 second, s32 third, s32 fourth, s32 fifth, s32 sixth);
void navigationSetOrQueueRequest(s32 mapId, s32 areaId, s32 x, f32 y, f32 z);

/* Rebuilds the list of active navigation guide entries from the table-0x49 flags and queues the first one's destination. */
void FUN_003a249c(void)
{
    s32 entryCount = FUN_003bf87c();
    s32 firstId = 0;
    MapSaveBlockA *flags = gameFlagsGetBlock();
    s32 triggerCount = dataTable49Type1Count();
    s32 i;

    for (i = 0; i < triggerCount; i++) {
        const Table49Trigger *trigger = dataTable49GetEntry(i);
        if (gameFlagIsSet(trigger->excludedFlag) && !gameFlagIsSet(trigger->triggeredFlag)) {
            gameFlagSetValue(trigger->triggeredFlag, 1, 1);
        }
    }

    MapSaveBlockA *banks = gameFlagsGetBlock();
    for (i = 0; i < 8; i++) {
        banks->naviSlots[i].id = 0;
    }
    banks->naviSlotCount = 0;

    for (i = 0; i < entryCount; i++) {
        Table49NaviEntry *entry = dataTableGetEntry49(i);
        if (entry->id != 0 && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag)) &&
            (entry->excludedFlag == 0 || !gameFlagIsSet(entry->excludedFlag))) {
            if (firstId == 0) {
                firstId = entry->id;
            }
            MapSaveBlockA *active = gameFlagsGetBlock();
            if (active != NULL && active->naviSlotCount < 8) {
                active->naviSlots[active->naviSlotCount].id = i;
                active->naviSlotCount++;
            }
            entry = dataTableGetEntry49(i);
            naviMainSetFlagsAndActivate(entry->naviFlags[0], entry->naviFlags[1], entry->naviFlags[2],
                                        entry->naviFlags[3], entry->naviFlags[4], entry->naviFlags[5]);
            naviMainSetFlagsAndActivate(entry->extraFlags[0], entry->extraFlags[1], 0, 0, 0, 0);
            navigationSetOrQueueRequest(entry->mapId, entry->areaId, entry->x, entry->y, entry->z);
        }
    }

    MapSaveBlockA *current = gameFlagsGetBlock();
    s32 currentId = 0;
    if (current != NULL) {
        currentId = current->currentNavi;
    }
    if (currentId != firstId) {
        flags->naviRefresh = 1;
        g_gameState.naviRefresh = 1;
        flags->naviRefreshSecond = 1;
    }
    if (firstId != 0) {
        MapSaveBlockA *target = gameFlagsGetBlock();
        if (target != NULL) {
            target->currentNavi = firstId;
        }
    }
}

} /* extern "C" */

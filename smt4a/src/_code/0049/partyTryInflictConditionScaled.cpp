#include "gamedata/SaveSlotRecord.h"
#include "util/Random.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/StatusAffinity.h"

extern "C" {
s32 gameSlotTableFindFree(void);

/* Rolls a status ailment for each eligible member of the selected party groups. */
void partyTryInflictConditionScaled(u32 group, u32 statusBit, f32 chance)
{
    if (chance <= 0.0f) {
        return;
    }
    u32 mask = 1u << statusBit;
    if ((group == 0 || group == 2 || group == 3) &&
        !(gameGetPlayerData()->ailments & 2) && !(gameGetPlayerData()->ailments & 0x400) &&
        !(gameGetPlayerData()->ailments & mask) && (f32)(s32)randRange(99) < chance) {
        s32 canApply = 1;
        if (statusBit == 5) {
            /* Block-scoped as in partyTryInflictCondition: retail gives this array and the later units'
             * one-affinity result the same stack slot. */
            u16 affinities[21];
            demonBuildAffinitySlots(affinities, gameGetPlayerData());
            canApply = statusAffinityAllows(affinities[11]);
        }
        if (canApply) {
            PlayerDataA* player = gameGetPlayerData();
            player->ailments |= mask;
        }
    }
    s32 count;
    s8* slots;
    switch (group) {
    case 0:
    case 1:
        count = gameSlotTableFindFree();
        slots = gameGetSlotTable()->party;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->reserve;
        break;
    default:
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        if (slots[index] < 0) {
            continue;
        }
        SlotRecordA* unit = gameGetSlotRecord(slots[index]);
        if (unit->ailments & 2) {
            continue;
        }
        if (unit->ailments & 0x400) {
            continue;
        }
        if (unit->ailments & mask) {
            continue;
        }
        if ((f32)(s32)randRange(99) < chance) {
            if (statusBit == 5 && !unitAffinityAllows(unit))
                continue;
            unit->ailments |= mask;
        }
    }
}
} /* extern "C" */

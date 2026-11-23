#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/Shard0034.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/StatusAffinity.h"

extern "C" {
s32 gameSlotTableFindFree(void);
s32 randRange(s32 maximum);

/* Apply a probabilistic status to the selected player and party groups. */
void partyTryInflictCondition(u32 group, u32 condition, s32 chance)
{
    if (chance <= 0) {
        return;
    }
    u32 mask = 1u << condition;
    if ((group == 0 || group == 2 || group == 3) &&
        (gameGetPlayerData()->ailments & 2) == 0 &&
        (gameGetPlayerData()->ailments & 0x400) == 0 &&
        (gameGetPlayerData()->ailments & mask) == 0 &&
        randRange(99) < chance) {
        s32 canApply = 1;
        if (condition == 5) {
            u16 affinities[21];
            demonBuildAffinitySlots(affinities, gameGetPlayerData());
            canApply = statusAffinityAllows(affinities[11]);
        }
        if (canApply) {
            gameGetPlayerData()->ailments |= mask;
        }
    }
    s32 count;
    const s8 *slots;
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
        SlotRecordA *unit = gameGetSlotRecord(slots[index]);
        if (unit->ailments & 2) {
            continue;
        }
        if (unit->ailments & 0x400) {
            continue;
        }
        if (unit->ailments & mask) {
            continue;
        }
        if (randRange(99) < chance) {
            if (condition == 5 && !unitAffinityAllows(unit))
                continue;
            unit->ailments |= mask;
        }
    }
}
}

/* NON_MATCHING: only the unit-loop affinity call's argument setup differs: retail loads unit (r1), 11 (r2), then the output address (r0). */
#include "shard/Shard0031.h"
#include "shard/Shard0034.h"
#include "shard/Shard004B.h"

extern "C" {
PlayerData *gameGetPlayerData(void);
PartyStatusSlots *gameGetSlotTable(void);
BitsAt60 *gameGetSlotRecord(s32 slot);
s32 gameSlotTableFindFree(void);
s32 randRange(s32 maximum);
void FUN_003dfad4(u16 *affinities, const PlayerData *player);
void affinityResolveUnitSlot(u16 *affinity, const BitsAt60 *unit, u32 element);

static inline s32 statusAffinityAllows(u16 affinity)
{
    u32 state = affinity >> 10;
    if (state == 1 || state == 3 || state == 4)
        return 0;
    return 1;
}

static inline s32 unitAffinityAllows(BitsAt60 *unit, u16 *affinities)
{
    affinityResolveUnitSlot(affinities, unit, 11);
    return statusAffinityAllows(affinities[0]);
}

/* Apply a probabilistic status to the selected player and party groups. */
void partyTryInflictCondition(u32 group, u32 condition, s32 chance)
{
    if (chance <= 0) {
        return;
    }
    u32 mask = 1u << condition;
    u16 affinities[21];
    if ((group == 0 || group == 2 || group == 3) &&
        (gameGetPlayerData()->unk5E & 2) == 0 &&
        (gameGetPlayerData()->unk5E & 0x400) == 0 &&
        (gameGetPlayerData()->unk5E & mask) == 0 &&
        randRange(99) < chance) {
        s32 canApply = 1;
        if (condition == 5) {
            FUN_003dfad4(affinities, gameGetPlayerData());
            canApply = statusAffinityAllows(affinities[11]);
        }
        if (canApply) {
            gameGetPlayerData()->unk5E |= mask;
        }
    }
    s32 count;
    const s8 *slots;
    switch (group) {
    case 0:
    case 1:
        count = gameSlotTableFindFree();
        slots = gameGetSlotTable()->active.slots;
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
        BitsAt60 *unit = gameGetSlotRecord(slots[index]);
        if (unit->bits & 2) {
            continue;
        }
        if (unit->bits & 0x400) {
            continue;
        }
        if (unit->bits & mask) {
            continue;
        }
        if (randRange(99) < chance) {
            if (condition == 5 && !unitAffinityAllows(unit, affinities))
                continue;
            unit->bits |= mask;
        }
    }
}
}

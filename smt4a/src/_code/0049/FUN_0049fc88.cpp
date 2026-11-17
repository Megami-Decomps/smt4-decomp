/* NON_MATCHING: only the unit-loop affinity call's argument setup differs: retail loads unit (r1), 11 (r2), then the output address (r0). */
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 gameSlotTableFindFree(void);
s32 randRange(u32 maximum);
void demonBuildAffinitySlots(u16* affinities, const PlayerDataA* player);
void affinityResolveUnitSlot(u16* output, SlotRecordA* unit, s32 affinity);

static inline s32 statusAffinityAllows(u16 affinity)
{
    u32 state = affinity >> 10;
    if (state == 1 || state == 3 || state == 4)
        return 0;
    return 1;
}

static inline s32 unitAffinityAllows(SlotRecordA* unit, u16* affinities)
{
    affinityResolveUnitSlot(affinities, unit, 11);
    return statusAffinityAllows(affinities[0]);
}

void FUN_0049fc88(u32 group, u32 statusBit, f32 chance)
{
    if (chance <= 0.0f) {
        return;
    }
    u32 mask = 1u << statusBit;
    u16 affinities[21];
    if ((group == 0 || group == 2 || group == 3) &&
        !(gameGetPlayerData()->ailments & 2) && !(gameGetPlayerData()->ailments & 0x400) &&
        !(gameGetPlayerData()->ailments & mask) && static_cast<f32>(randRange(99)) < chance) {
        s32 canApply = 1;
        if (statusBit == 5) {
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
        if (static_cast<f32>(randRange(99)) < chance) {
            if (statusBit == 5 && !unitAffinityAllows(unit, affinities))
                continue;
            unit->ailments |= mask;
        }
    }
}
}

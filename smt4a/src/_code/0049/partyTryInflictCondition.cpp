/* NON_MATCHING: group-selection branches and condition-mask saved registers differ; retail shares the condition-store tail. */
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

/* Apply a probabilistic status to the selected player and party groups. */
void partyTryInflictCondition(u32 group, u32 condition, s32 chance)
{
    if (chance < 1) {
        return;
    }
    u32 mask = 1u << condition;
    u16 affinities[21];
    if ((group == 0 || group == 2 || group == 3) &&
        (gameGetPlayerData()->unk5E & 2) == 0 &&
        (gameGetPlayerData()->unk5E & 0x400) == 0 &&
        (gameGetPlayerData()->unk5E & mask) == 0 &&
        randRange(99) < chance) {
        if (condition != 5) {
            gameGetPlayerData()->unk5E |= mask;
        } else {
            FUN_003dfad4(affinities, gameGetPlayerData());
            u16 response = affinities[11] >> 10;
            if (response != 1 && response != 3 && response != 4) {
                gameGetPlayerData()->unk5E |= mask;
            }
        }
    }
    s32 count;
    const s8 *slots;
    if (group == 0 || group == 1) {
        count = gameSlotTableFindFree();
        slots = gameGetSlotTable()->active.slots;
    } else if (group == 2 || group == 3) {
        count = 3;
        slots = gameGetSlotTable()->reserve;
    } else {
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        if (slots[index] < 0) {
            continue;
        }
        BitsAt60 *unit = gameGetSlotRecord(slots[index]);
        if ((unit->bits & 2) == 0 && (unit->bits & 0x400) == 0 &&
            (unit->bits & mask) == 0 && randRange(99) < chance) {
            if (condition != 5) {
                unit->bits |= mask;
            } else {
                affinityResolveUnitSlot(affinities, unit, 11);
                u16 response = affinities[0] >> 10;
                if (response != 1 && response != 3 && response != 4) {
                    unit->bits |= mask;
                }
            }
        }
    }
}
}

#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include <stddef.h>

typedef char CombatantSortBaseOffsetCheck[
    offsetof(BtlCombatantEntryA, data.agility) == 0x26E ? 1 : -1];
typedef char CombatantSortBonusOffsetCheck[
    offsetof(BtlCombatantEntryA, data.speedBonus) == 0x390 ? 1 : -1];
typedef char CombatantSortSizeCheck[sizeof(BtlCombatantEntryA) == 0x408 ? 1 : -1];
typedef char TurnOrderOffsetCheck[
    offsetof(BtlMainStateA, turnOrder.indices) == 0x3006 ? 1 : -1];

/* Sorts occupied turn-order slots by descending speed, breaking ties by unit index. */
extern "C" void battleSortTurnOrder(BtlMainStateA* battle, s32 firstSlot)
{
    for (s32 slot = firstSlot; slot < 11; ++slot) {
        if (battle->turnOrder.indices[slot] >= 0) {
            for (s32 candidate = slot + 1; candidate < 12; ++candidate) {
                if (battle->turnOrder.indices[candidate] < 0)
                    continue;
                s16 currentSpeed = btlUnitTurnSpeedA(&battle->entries[battle->turnOrder.indices[slot]].data);
                s16 otherSpeed = btlUnitTurnSpeedA(&battle->entries[battle->turnOrder.indices[candidate]].data);
                if (currentSpeed < otherSpeed) {
                    s16 swap = battle->turnOrder.indices[slot];
                    battle->turnOrder.indices[slot] = battle->turnOrder.indices[candidate];
                    battle->turnOrder.indices[candidate] = swap;
                } else {
                    if (currentSpeed != otherSpeed)
                        continue;
                    if (battle->entries[battle->turnOrder.indices[slot]].ids[0] <= battle->entries[battle->turnOrder.indices[candidate]].ids[0])
                        continue;
                    s16 swap = battle->turnOrder.indices[slot];
                    battle->turnOrder.indices[slot] = battle->turnOrder.indices[candidate];
                    battle->turnOrder.indices[candidate] = swap;
                }
            }
        }
    }
}

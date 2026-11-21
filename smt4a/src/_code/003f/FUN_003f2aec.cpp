/* NON_MATCHING: as smt4 battleSortTurnOrder: retail lays the faster-speed swap out right after the speed compare (the equal-speed id test branches back into it); the build places the shared swap after the id test, and the registers differ. */
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
extern "C" void FUN_003f2aec(BtlMainStateA* battle, s32 firstSlot)
{
    for (s32 slot = firstSlot; slot < 11; ++slot) {
        if (battle->turnOrder.indices[slot] >= 0) {
            for (s32 candidate = slot + 1; candidate < 12; ++candidate) {
                s16 candidateIndex = battle->turnOrder.indices[candidate];
                if (candidateIndex < 0)
                    continue;
                s16 currentIndex = battle->turnOrder.indices[slot];
                s16 currentSpeed = btlUnitTurnSpeedA(&battle->entries[currentIndex].data);
                s16 otherSpeed = btlUnitTurnSpeedA(&battle->entries[candidateIndex].data);
                if (currentSpeed < otherSpeed) {
                    battle->turnOrder.indices[slot] = candidateIndex;
                    battle->turnOrder.indices[candidate] = currentIndex;
                } else if (currentSpeed == otherSpeed && battle->entries[currentIndex].ids[0] > battle->entries[candidateIndex].ids[0]) {
                    battle->turnOrder.indices[slot] = candidateIndex;
                    battle->turnOrder.indices[candidate] = currentIndex;
                }
            }
        }
    }
}

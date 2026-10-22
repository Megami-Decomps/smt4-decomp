/* NON_MATCHING: retail addresses sort values through an embedded +0x164 record and spills the entries-pointer address; direct shared-record fields produce different addressing/register allocation. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include <stddef.h>

typedef char CombatantSortBaseOffsetCheck[
    offsetof(BtlCombatantEntryA, sortBase.value) == 0x26E ? 1 : -1];
typedef char CombatantSortBonusOffsetCheck[
    offsetof(BtlCombatantEntryA, sortBonus.value) == 0x390 ? 1 : -1];
typedef char CombatantSortSizeCheck[sizeof(BtlCombatantEntryA) == 0x408 ? 1 : -1];
typedef char TurnOrderOffsetCheck[
    offsetof(BtlMainStateA, turnOrder.indices) == 0x3006 ? 1 : -1];

// Sort occupied turn-order slots by descending speed, breaking ties by unit index.
extern "C" void FUN_003f2aec(BtlMainStateA* battle, s32 firstSlot)
{
    for (s32 slot = firstSlot; slot < 11; ++slot) {
        if (battle->turnOrder.indices[slot] >= 0) {
            for (s32 candidate = slot + 1; candidate < 12; ++candidate) {
                s16 candidateIndex = battle->turnOrder.indices[candidate];
                if (candidateIndex >= 0) {
                    s16 currentIndex = battle->turnOrder.indices[slot];
                    const BtlCombatantEntryA* current = &battle->entries[currentIndex];
                    const BtlCombatantEntryA* other = &battle->entries[candidateIndex];
                    s16 currentSpeed = current->sortBase.value + current->sortBonus.value;
                    s16 otherSpeed = other->sortBase.value + other->sortBonus.value;
                    if (currentSpeed < otherSpeed ||
                        (currentSpeed == otherSpeed && other->unitIndex < current->unitIndex)) {
                        battle->turnOrder.indices[slot] = candidateIndex;
                        battle->turnOrder.indices[candidate] = currentIndex;
                    }
                }
            }
        }
    }
}

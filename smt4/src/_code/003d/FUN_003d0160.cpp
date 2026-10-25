/* NON_MATCHING: final selected-unit flag addressing and one-byte constant lifetime differ; candidate collection and sorting agree. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BattleHpRank.h"

extern "C" {
void FUN_002b7bca(void *elements, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 btlUnitGet(s32 *contextHandle);

// Select the requested HP rank among entries carrying flag 0x400 (rank is one-based).
void FUN_003d0160(BtlState **contextHandle, s32 rank)
{
    BattleHpRank candidates[109];
    BtlUnitEntry *entry = (*contextHandle)->units;
    s32 count = 0;
    for (s32 remaining = 109; remaining != 0; --remaining, ++entry) {
        if (entry->flags & 0x400) {
            candidates[count].selectionIndex = entry->selectionIndex;
            candidates[count].hp = entry->hp;
            ++count;
        }
    }
    u8 *selectedUnits;
    s32 index;
    if (count >= rank) {
        FUN_002b7bca(candidates, count, sizeof(BattleHpRank), reinterpret_cast<s32 (*)(const void *, const void *)>(FUN_0032ad24));
        selectedUnits = reinterpret_cast<BattleActionUnit *>(btlUnitGet(reinterpret_cast<s32 *>(contextHandle)))->selectedUnits;
        index = candidates[rank - 1].selectionIndex;
    } else {
        selectedUnits = reinterpret_cast<BattleActionUnit *>(btlUnitGet(reinterpret_cast<s32 *>(contextHandle)))->selectedUnits;
        index = candidates[0].selectionIndex;
    }
    selectedUnits[index] = 1;
}
}

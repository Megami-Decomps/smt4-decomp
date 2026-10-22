/* NON_MATCHING: The selected-candidate count stays live across the unit getter in retail. */
#include "shard/W4_W4Match2_BtlUnits.h"
extern "C" BattleActionUnit* btlUnitGet(BtlState**);

// Marks the last eligible unit at the lowest HP encountered in the roster.
extern "C" void FUN_00229998(BtlState** owner)
{
    s32 candidates[109];
    s32 candidateCount = 0;
    s32 minimumHp = 100000;
    BtlUnitEntry* units = (*owner)->units;
    for (s32 index = 0; index < 109; ++index) {
        if ((units[index].flags & 0x400) != 0 && units[index].hp <= minimumHp) {
            candidates[candidateCount++] = units[index].selectionIndex;
            minimumHp = units[index].hp;
        }
    }
    btlUnitGet(owner)->selectedUnits[candidates[candidateCount - 1]] = 1;
}

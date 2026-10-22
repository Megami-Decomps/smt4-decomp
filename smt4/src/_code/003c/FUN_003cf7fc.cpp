/* NON_MATCHING: live candidate count is preserved in a callee-saved register, adding stack-alignment padding. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" BattleActionUnit *btlUnitGet(BtlState **owner);

// Mark the last eligible unit at the highest HP encountered in the roster.
extern "C" void FUN_003cf7fc(BtlState **owner)
{
    s32 candidates[109];
    s32 candidateCount = 0;
    s32 maximumHp = 0;
    BtlUnitEntry *units = (*owner)->units;
    for (s32 index = 0; index < 109; ++index) {
        if ((units[index].flags & 0x400) && units[index].hp >= maximumHp) {
            candidates[candidateCount++] = units[index].selectionIndex;
            maximumHp = units[index].hp;
        }
    }
    btlUnitGet(owner)->selectedUnits[candidates[candidateCount - 1]] = 1;
}

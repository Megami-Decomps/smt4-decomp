/* NON_MATCHING: multifile btlUnitGet restores the 436-byte frame and caller-saved count; candidate base and flags/HP scratch still exchange r6/r7. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BattleUnitSlot.h"


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

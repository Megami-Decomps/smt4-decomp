#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BattleUnitSlot.h"


// Mark the last eligible unit at the highest HP encountered in the roster.
extern "C" void btlMarkHighestHpUnit(BtlState **owner)
{
    s32 candidates[109];
    s32 candidateCount = 0;
    s32 maximumHp = 0;
    BtlState *battle = *owner;
    for (s32 index = 0; index < 109; ++index) {
        if ((battle->units[index].flags & 0x400) && battle->units[index].hp >= maximumHp) {
            candidates[candidateCount++] = battle->units[index].selectionIndex;
            maximumHp = battle->units[index].hp;
        }
    }
    btlUnitGet(owner)->selectedUnits[candidates[candidateCount - 1]] = 1;
}

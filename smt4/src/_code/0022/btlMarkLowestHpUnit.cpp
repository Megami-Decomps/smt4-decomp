#include "battle/BattleUnitSlot.h"
#include "shard/W4_W4Match2_BtlUnits.h"

// Marks the last eligible unit at the lowest HP encountered in the roster.
extern "C" void btlMarkLowestHpUnit(BtlState** owner)
{
    s32 candidates[109];
    s32 candidateCount = 0;
    s32 minimumHp = 100000;
    BtlState* battle = *owner;
    for (s32 index = 0; index < 109; ++index) {
        if ((battle->units[index].flags & 0x400) != 0 && battle->units[index].hp <= minimumHp) {
            candidates[candidateCount++] = battle->units[index].selectionIndex;
            minimumHp = battle->units[index].hp;
        }
    }
    btlUnitGet(owner)->selectedUnits[candidates[candidateCount - 1]] = 1;
}

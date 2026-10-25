#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BattleUnitSlot.h"
#include "battle/btlMain.h"


// Mark the last eligible unit at the highest HP encountered in the roster.
extern "C" void btlMarkHighestHpUnit(BtlMainState **owner)
{
    s32 candidates[109];
    s32 candidateCount = 0;
    s32 maximumHp = 0;
    BtlMainState *battle = *owner;
    for (s32 index = 0; index < 109; ++index) {
        if ((battle->entries[index].flags & 0x400) && battle->entries[index].hp >= maximumHp) {
            candidates[candidateCount++] = battle->entries[index].selectionIndex;
            maximumHp = battle->entries[index].hp;
        }
    }
    btlUnitGet(owner)->selectedUnits[candidates[candidateCount - 1]] = 1;
}

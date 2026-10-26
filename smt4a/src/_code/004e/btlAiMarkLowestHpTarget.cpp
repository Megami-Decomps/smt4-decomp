#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnitSlot.h"

namespace {

struct BattleAiContext {
    /* 0x00 */ BtlMainStateA *state;
};

}

extern "C" {

extern BtlActionGlobals g_btlAction;
s32 FUN_004e9ae8(BtlMainStateA **owner, s32 *candidates, s32 count, s32 force);

/* Mark as targeted one of the targetable entries with the lowest HP seen so far in entry order. */
void btlAiMarkLowestHpTarget(BattleAiContext *context)
{
    s32 candidates[110];
    s32 count = 0;
    s32 lowestHp = 100000000;
    BtlMainStateA *battle = context->state;

    for (s32 i = 0; i < 109; ++i) {
        if ((battle->entries[i].flags & g_btlAction.clearedFlags.mask) != 0 && battle->entries[i].hp <= lowestHp) {
            candidates[count++] = battle->entries[i].indexView.selectionIndex;
            lowestHp = battle->entries[i].hp;
        }
    }
    s32 pick = FUN_004e9ae8(&context->state, candidates, count, 1);
    btlUnitGet(&context->state)->selection.targeted[candidates[pick - 1]] = 1;
}

} /* extern "C" */

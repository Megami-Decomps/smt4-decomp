/* NON_MATCHING: matched getter/multifile and target-mask snapshot restore frame/registers; initial mask load writeback and literal pool order differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnitSlot.h"

namespace {

struct BattleAiContext {
    /* 0x00 */ BtlMainStateA *state;
};

}

extern "C" {

extern BattleActionState g_btlAction;
s32 FUN_004e9ae8(BtlMainStateA **owner, s32 *candidates, s32 count, s32 force);

/* Mark as targeted one of the targetable entries with the lowest HP seen so far in entry order. */
void FUN_004e6fb0(BattleAiContext *context)
{
    s32 candidates[110];
    s32 count = 0;
    s32 lowestHp = 100000000;
    BtlCombatantEntryA *entry = context->state->entries;
    u64 targetable = g_btlAction.targetable;

    for (s32 i = 0; i < 109; ++i, ++entry) {
        if ((entry->flags & targetable) != 0 && entry->hp <= lowestHp) {
            candidates[count++] = entry->indexView.selectionIndex;
            lowestHp = entry->hp;
        }
    }
    s32 pick = FUN_004e9ae8(&context->state, candidates, count, 1);
    btlUnitGet(&context->state)->selection.targeted[candidates[pick - 1]] = 1;
}

} /* extern "C" */

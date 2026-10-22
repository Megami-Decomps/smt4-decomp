/* NON_MATCHING: one register: retail keeps the picked index in r3 across the btlUnitGet call (as if the callee were known to preserve r3); armcc here uses r5. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

namespace {
struct BattleActionMasks {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u64 targetable;
};

struct BattleAiContext {
    /* 0x00 */ BtlMainStateA *state;
};

struct BattleAiUnit {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 targeted[1]; /* by selection index */
};
}

extern "C" {

extern BattleActionMasks g_btlAction;
s32 FUN_004e9ae8(BattleAiContext *context, s32 *candidates, s32 count, u32 mode);
BattleAiUnit *btlUnitGet(BattleAiContext *context);

/* Mark as targeted one of the targetable entries with the lowest HP seen so far in entry order. */
void FUN_004e6fb0(BattleAiContext *context)
{
    s32 candidates[110];
    s32 count = 0;
    s32 lowestHp = 100000000;
    BtlCombatantEntryA *entry = context->state->entries;

    for (s32 i = 0; i < 109; ++i, ++entry) {
        if ((entry->flags & g_btlAction.targetable) && entry->hp <= lowestHp) {
            candidates[count++] = entry->indexView.selectionIndex;
            lowestHp = entry->hp;
        }
    }
    s32 pick = FUN_004e9ae8(context, candidates, count, 1);
    btlUnitGet(context)->targeted[candidates[pick - 1]] = 1;
}

} /* extern "C" */

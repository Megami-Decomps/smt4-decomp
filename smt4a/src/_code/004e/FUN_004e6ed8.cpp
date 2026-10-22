/* NON_MATCHING: retail loads the 64-bit mask as two ldr from g_btlAction's base (pool word +0);
 * armcc here pools g_btlAction+0x58 and loads it with one ldm */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W4_W4Match2_BtlUnits.h"

#define BTL_ENTRY_COUNT_A 109

/* The battle action globals: the mask of entries the strongest-target pick considers at 0x58. */
struct BtlActionGlobals {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u64 strongestMask;
};

/* The AI context the pick runs for: the battle state first. */
struct BtlPickContext {
    /* 0x00 */ BtlMainStateA *state;
};

extern "C" {

extern BtlActionGlobals g_btlAction;

s32 FUN_004e9ae8(BtlPickContext *context, s32 *candidates, s32 count, s32 mode);
BattleActionUnit *btlUnitGet(BtlPickContext *context);

/* Marks the entry with the highest HP among those in the mask as selected; with `shuffle` the
 * running-maximum candidates are passed through FUN_004e9ae8 first. */
void FUN_004e6ed8(BtlPickContext *context, s32 shuffle)
{
    s32 candidates[BTL_ENTRY_COUNT_A];
    s32 count = 0;
    s32 bestHp = 0;
    BtlCombatantEntryA *entry = context->state->entries;
    s32 i;

    for (i = 0; i < BTL_ENTRY_COUNT_A; i++, entry++) {
        if ((entry->flags & g_btlAction.strongestMask) && bestHp <= entry->hp) {
            candidates[count++] = entry->indexView.selectionIndex;
            bestHp = entry->hp;
        }
    }
    if (shuffle) {
        count = FUN_004e9ae8(context, candidates, count, 1);
    }
    btlUnitGet(context)->selectedUnits[candidates[count - 1]] = 1;
}

} /* extern "C" */

#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlGlobals.h"

#define BTL_ENTRY_COUNT_A 109

/* The AI context the pick runs for: the battle state first. */
struct BtlPickContext {
    /* 0x00 */ BtlMainStateA *state;
};

extern "C" {


s32 btlAiFilterCandidatesByExclusionChance(BtlPickContext *context, s32 *candidates, s32 count, s32 mode);

/* Marks the entry with the highest HP among those in the mask as selected; with `shuffle` the
 * running-maximum candidates are passed through btlAiFilterCandidatesByExclusionChance first. */
void FUN_004e6ed8(BtlPickContext *context, s32 shuffle)
{
    s32 candidates[BTL_ENTRY_COUNT_A];
    s32 count = 0;
    s32 bestHp = 0;
    BtlCombatantEntryA *entry = context->state->entries;

    for (s32 i = 0; i < BTL_ENTRY_COUNT_A; i++, entry++) {
        if ((entry->flags & g_btlAction.clearedFlags.mask) && bestHp <= entry->hp) {
            candidates[count++] = entry->indexView.selectionIndex;
            bestHp = entry->hp;
        }
    }
    if (shuffle) {
        count = btlAiFilterCandidatesByExclusionChance(context, candidates, count, 1);
    }
    btlUnitGet(&context->state)->targets[candidates[count - 1]] = 1;
}

} /* extern "C" */

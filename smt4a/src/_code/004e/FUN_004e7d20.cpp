/* NON_MATCHING: instruction count and control flow match (58 rows); retail loads the mask pair through a pre-indexed ldr! base, materializes the marking constant 1 before the final branch and addresses the byte as [index, base]. */
/* Marks the requested descending-HP rank among eligible combatants as a target. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/RankedSelection.h"
#include "battle/BattleUnit.h"

extern "C" {
extern BtlActionGlobals g_btlAction;
s32 callbackCompareDescendingState(const void *left, const void *right);
void qsort(void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));

void FUN_004e7d20(BtlMainStateA **owner, s32 rank)
{
    /* The eligibility mask and target flags extend beyond their shared prefixes. */
    struct TargetView { u8 unk00[0x38]; u8 targets[109]; };
    RankedSelection entries[109];
    s32 count = 0;
    BtlCombatantEntryA *combatants = (*owner)->entries;
    for (s32 i = 0; i < 109; ++i) {
        if ((combatants[i].flags & g_btlAction.clearedFlags.mask) != 0) {
            entries[count].index = combatants[i].indexView.selectionIndex;
            entries[count].score = combatants[i].hp;
            ++count;
        }
    }
    u8 *targets;
    s32 index;
    if (count >= rank) {
        qsort(entries, count, sizeof(*entries), callbackCompareDescendingState);
        targets = ((TargetView *)btlUnitGet(owner))->targets;
        index = entries[rank - 1].index;
    } else {
        targets = ((TargetView *)btlUnitGet(owner))->targets;
        index = entries[0].index;
    }
    targets[index] = 1;
}
}

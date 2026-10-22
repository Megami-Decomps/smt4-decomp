/* NON_MATCHING: ranked target collection uses different saved registers and stack-array addressing. */
/* Marks the requested descending-HP rank among eligible combatants as a target. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/RankedSelection.h"

extern "C" {
extern BtlActionGlobals g_btlAction;
s32 callbackCompareDescendingState(const void *left, const void *right);
void qsort(void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));
BtlUnitA *btlUnitGet(BtlMainStateA **owner);

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
    if (count >= rank) {
        qsort(entries, count, sizeof(*entries), callbackCompareDescendingState);
        TargetView *target = (TargetView *)btlUnitGet(owner);
        target->targets[entries[rank - 1].index] = 1;
    } else {
        TargetView *target = (TargetView *)btlUnitGet(owner);
        target->targets[entries[0].index] = 1;
    }
}
}

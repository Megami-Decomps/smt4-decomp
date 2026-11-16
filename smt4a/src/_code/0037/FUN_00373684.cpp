#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 btlResolveEntryChoice(u32 choice);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);
void scrSetResult(s32 value);

/* Compare the eligible candidates' average threshold value to the script argument. */
u32 FUN_00373684(void)
{
    s32 threshold = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 sum = 0;
    s32 candidates = 0;
    s32 first, count;
    btlGetEntryChoiceRange(choice, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0) {
            candidates++;
            sum += entry->thresholdView.unk27A;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL) {
            candidates++;
            sum += entry->thresholdView.unk27A;
        }
    }
    scrSetResult(threshold <= sum / candidates);
    return 1;
}
}

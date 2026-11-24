#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);

/* Tests whether any eligible combatant has a negative value for the selected stat. */
u32 btlScriptAnyCandidateHasNegativeCounter(void)
{
    s32 selector = scrGetArg(0);
    s32 valueIndex = 0;
    if (selector == 0)
        valueIndex = 7;
    else if (selector == 1)
        valueIndex = 8;
    else if (selector == 2)
        valueIndex = 10;
    else if (selector == 3)
        valueIndex = 11;
    u32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    btlGetEntryChoiceRange(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->properties[valueIndex] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry && entry->properties[valueIndex] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
} /* extern "C" */

#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 btlResolveEntryChoice(s32 choice);
void scrSetResult(s32 result);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);

// Count eligible combatants missing at least the requested amount of HP.
u32 FUN_003bc468(void)
{
    s32 missingHp = scrGetArg(0);
    s32 first;
    s32 count;
    s32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 matches = 0;
    btlGetEntryChoiceRange(choice, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            missingHp <= entry->data.maxHp - entry->data.hp)
            ++matches;
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && missingHp <= entry->data.maxHp - entry->data.hp)
            ++matches;
    }
    scrSetResult(matches);
    return 1;
}
}

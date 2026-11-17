#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
u32 scrGetArg(s32 argument);
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);
u32 FUN_003248e4(const BtlCombatantEntryA *entry);
void scrSetResult(s32 result);

// Test for a matching unit with an applicable skill/action in the selected battle group.
u32 FUN_003c1c00()
{
    u32 unitId = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    btlGetEntryChoiceRange(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            entry->data.id == unitId && FUN_003248e4(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry && entry->data.id == unitId && FUN_003248e4(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

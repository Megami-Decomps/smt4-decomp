#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"


extern "C" {
s32 scrGetArg(s32);
void scrSetResult(s32);
s32 btlResolveEntryChoice(s32);
BtlCombatantEntryA* btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA*);

/* Test eligible combatants, then the optional special combatant, for an accepted affinity. */
u32 scrAnyEligibleAffinityClass0Or2(void)
{
    s32 stat = scrGetArg(0);
    s32 first;
    s32 count;

    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];

        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 || (entry->flags & g_btlCandidateMasks.required) == 0 ||
            (entry->flags & g_btlCandidateMasks.excluded) != 0)
            continue;
        if ((entry->data.values[stat] & 0xFC00) == 0 || entry->data.values[stat] >> 10 == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());

        if (entry != NULL && ((entry->data.values[stat] & 0xFC00) == 0 || entry->data.values[stat] >> 10 == 2)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
} // extern "C"

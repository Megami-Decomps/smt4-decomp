#include "battle/BtlEntryA.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "script/ScriptArgs.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {

BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);

/* Tests selected eligible copies of a unit, including the active override, for a pending effect in columns 14 or 16. */
u32 FUN_003c46c0(void)
{
    u32 id = scrGetArg(0);
    s32 first, count;
    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) && entry->data.id == id &&
            (entry->properties[14] > 0 || entry->properties[16] > 0)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        const BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && entry->data.id == id && (entry->properties[14] > 0 || entry->properties[16] > 0)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */

/* NON_MATCHING: register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr) (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"
extern "C" {
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);

/* Tests whether the named combatant has a negative value for the selected property. */
u32 FUN_003bbf60(void)
{
    u32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 property = 0;
    if (kind == 0)
        property = 7;
    else if (kind == 1)
        property = 8;
    else if (kind == 2)
        property = 10;
    else if (kind == 3)
        property = 11;
    s32 first, count;
    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(2)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) &&
            !(flags & g_btlCandidateMasks.excluded) && entry->data.id == id &&
            entry->properties[property] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry && entry->data.id == id && entry->properties[property] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

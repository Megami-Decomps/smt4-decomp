/* NON_MATCHING: only required-mask AND scratch registers differ; active-entry addressing now matches. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "util/SlotRangeSelect.h"
#include "battle/BattleHelpers.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);

// Test for a selected combatant with the requested id and encoded affinity state two.
u32 FUN_0038cc20(void)
{
    u32 id = scrGetArg(0);
    u32 affinity = scrGetArg(1);
    s32 choice = btlResolveEntryChoice(scrGetArg(2));
    s32 first, count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            entry->id == id && (entry->encodedStats.values[affinity] >> 10) == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && (entry->encodedStats.values[affinity] >> 10) == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

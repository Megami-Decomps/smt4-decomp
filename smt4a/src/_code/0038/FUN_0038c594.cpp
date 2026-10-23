/* NON_MATCHING: initial range stack loads and special-combatant flag byte addressing differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
u32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(u32 selection, s32 *first, s32 *count);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 FUN_0038c594()
{
    struct Selection { s32 first; s32 count; } selection;
    s32 property = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    FUN_00301a08(choice, &selection.first, &selection.count);
    for (s32 index = selection.first; index < selection.first + selection.count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            (entry->encodedStats.values[property] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && (entry->encodedStats.values[property] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

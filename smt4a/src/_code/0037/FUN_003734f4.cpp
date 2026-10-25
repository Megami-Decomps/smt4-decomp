/* NON_MATCHING: scalar selection range recovered; required/excluded mask load grouping and AND scratch registers differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
u32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(u32 choice, s32 *range, s32 *count);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

// Test whether a selected demon or the special combatant is at or below an MP percentage.
u32 FUN_003734f4()
{
    u32 id = scrGetArg(0);
    s32 threshold = scrGetArg(1);
    u32 choice = btlResolveEntryChoice(scrGetArg(2));
    s32 first;
    s32 count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < count + first; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0 && entry->id == id &&
            entry->mp * 100 / entry->maxMp <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && entry->mp * 100 / entry->maxMp <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

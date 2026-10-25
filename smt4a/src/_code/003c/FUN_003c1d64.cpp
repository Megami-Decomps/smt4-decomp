/* NON_MATCHING: range locals and direct combatant flag reads recovered; excluded-mask load pair and AND scratch registers differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 choice, s32 *first, s32 *count);
s32 FUN_003020fc(BtlCombatantEntryA *entry, u32 category);
void scrSetResult(s32 value);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

// Test requested eligible combatants, including the auxiliary unit, for an action category.
u32 FUN_003c1d64(void)
{
    u32 category = scrGetArg(0);
    s32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 first;
    s32 count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < count + first; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0 && FUN_003020fc(entry, category)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && FUN_003020fc(entry, category)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

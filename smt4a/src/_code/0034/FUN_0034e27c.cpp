/* NON_MATCHING: selection output stack placement, final exclusion-mask registers and active-entry byte addressing differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 btlResolveEntryChoice(u32 choice);
void FUN_00301a08(u32 choice, s32 *entries, s32 *count);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Check eligible selected combatants and the active override for a unit ID.
u32 FUN_0034e27c(void)
{
    u32 id = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 entries[7], count;
    FUN_00301a08(choice, entries, &count);
    for (s32 index = entries[0]; index < count + entries[0]; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

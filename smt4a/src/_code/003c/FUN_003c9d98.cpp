/* NON_MATCHING: selection output stack layout, mask-load registers and active-entry byte addressing differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 btlResolveEntryChoice(u32 choice);
void FUN_00301a08(u32 choice, s32 *entries, s32 *count);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
s32 btlFindEntryValue(s32 unitIndex, u32 kind);
void scrSetResult(s32 result);

// Check whether any eligible combatant has a positive value in entry category 19.
u32 FUN_003c9d98(void)
{
    u32 choice = btlResolveEntryChoice(scrGetArg(0));
    s32 entries[6], count;
    FUN_00301a08(choice, entries, &count);
    for (s32 index = entries[0]; index < count + entries[0]; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            btlFindEntryValue(entry->unitIndex, 19) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && btlFindEntryValue(entry->unitIndex, 19) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

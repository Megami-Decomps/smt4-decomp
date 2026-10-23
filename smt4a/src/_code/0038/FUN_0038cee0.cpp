/* NON_MATCHING: range outputs occupy different stack positions, required-mask registers differ, and the special-entry flag uses a separate address add; 84 versus retail 81 instructions. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 argument);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 group, s32 *indices, s32 *count);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Test whether any eligible member of a script-selected group lacks a status bit.
u32 FUN_0038cee0()
{
    s32 status = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 indices[8];
    s32 count;
    FUN_00301a08(group, indices, &count);
    for (s32 index = indices[0]; index < indices[0] + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            !(entry->statusFlags & (1u << status))) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && !(entry->statusFlags & (1u << status))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

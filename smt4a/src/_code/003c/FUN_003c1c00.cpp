/* NON_MATCHING: range scratch layout and required-mask registers differ; the special-entry flag load also adds an extra address instruction, 91 versus retail 89 instructions. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(s32 argument);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 group, s32 *first, s32 *count);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
u32 FUN_003248e4(const BtlCombatantEntryA *entry);
void scrSetResult(s32 result);

// Test for a matching unit with an applicable skill/action in the selected battle group.
u32 FUN_003c1c00()
{
    u32 unitId = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(g_btlCandidateMasks.unavailable & flags) &&
            (flags & g_btlCandidateMasks.required) &&
            !(flags & g_btlCandidateMasks.excluded) &&
            entry->id == unitId && FUN_003248e4(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && entry->id == unitId && FUN_003248e4(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

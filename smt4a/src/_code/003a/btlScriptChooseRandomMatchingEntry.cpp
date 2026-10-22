/* NON_MATCHING: combatant base/mask registers differ, and the special-entry byte load retains a separate low-offset address addition. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
u32 btlResolveEntryChoice(s32 side);
void FUN_00301a08(u32 side, s32 *start, s32 *count);
BtlMainStateA *btlGetMainState(void);
s32 FUN_002b54a0(BtlCombatantEntryA *, u32 condition);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);
u32 randRange(u16 maximum);
void scrSetResult(u32 result);

// Pick a random battle entry satisfying the current masks and script-supplied condition.
u32 btlScriptChooseRandomMatchingEntry(void)
{
    u32 condition = scrGetArg(0);
    u32 side = btlResolveEntryChoice(scrGetArg(1));
    u32 candidates[109];
    s32 candidateCount = 0;
    s32 start, count;
    FUN_00301a08(side, &start, &count);
    for (s32 index = start; index < start + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            FUN_002b54a0(entry, condition)) {
            candidates[candidateCount++] = entry->id;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && FUN_002b54a0(entry, condition)) {
            candidates[candidateCount++] = entry->id;
        }
    }
    if (candidateCount != 0) {
        scrSetResult(candidates[randRange(static_cast<u16>(candidateCount - 1))]);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}

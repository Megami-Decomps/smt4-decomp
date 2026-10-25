/* NON_MATCHING: registers of the entries base and index*0x408 are swapped in the entry address computation (retail base in r1, product in r0); everything else matches. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
u32 btlResolveEntryChoice(s32 side);
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
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 &&
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

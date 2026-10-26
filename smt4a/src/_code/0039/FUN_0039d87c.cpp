/* NON_MATCHING: entry-table and scaled-index address registers r0/r1 are exchanged; special-member handling now agrees. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 choice);
s32 FUN_003020fc(BtlCombatantEntryA *entry, u32 category);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
s32 randRange(u32 maximum);

/* Chooses a random eligible group member whose available action matches the requested category. */
u32 FUN_0039d87c(void)
{
    u32 category = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    u32 candidates[109];
    s32 candidateCount = 0;
    s32 first, count;
    FUN_00301a08(group, &first, &count);
    for (s32 index = first; index < count + first; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && FUN_003020fc(entry, category) != 0) {
            candidates[candidateCount++] = entry->id;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && FUN_003020fc(entry, category) != 0) {
            candidates[candidateCount++] = entry->id;
        }
    }
    if (candidateCount != 0) {
        s32 choice = randRange((candidateCount - 1U) & 0xFFFF);
        scrSetResult(candidates[choice]);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}

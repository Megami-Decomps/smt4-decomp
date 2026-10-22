/* NON_MATCHING: -O2 candidate; range first output uses sp16 instead of sp8, entry-address scratch registers swap, and the later byte flag offset does not fold. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 kind);
void FUN_00301a08(s32 kind, u32 *first, u32 *count);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 scrCommBattleGroupStatusCountAtLeast()
{
    s32 bit = scrGetArg(0);
    s32 minimum = scrGetArg(1);
    s32 kind = btlResolveEntryChoice(scrGetArg(2));
    s32 matches = 0;
    s32 first, count;
    FUN_00301a08(kind, (u32 *)&first, (u32 *)&count);
    for (s32 index = first; index < first + count; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(g_btlCandidateMasks.unavailable & flags) &&
            (g_btlCandidateMasks.required & flags) && !(g_btlCandidateMasks.excluded & flags)) {
            if (entry->statusFlags & (1u << bit)) {
                ++matches;
            }
        }
    }
    if (btlGetMainState()->unk4cd1) {
        const BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && (entry->statusFlags & (1u << bit))) {
            ++matches;
        }
    }
    scrSetResult(minimum <= matches);
    return 1;
}
}

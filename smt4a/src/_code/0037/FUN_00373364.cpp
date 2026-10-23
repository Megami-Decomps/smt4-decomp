/* NON_MATCHING: range-output stack slots, candidate-mask loads and HP division operand scheduling differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState();
u32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(u32 choice, s32 indices[8], s32 *count);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 FUN_00373364()
{
    u32 unitId = scrGetArg(0);
    s32 percentage = scrGetArg(1);
    u32 choice = btlResolveEntryChoice(scrGetArg(2));
    s32 indices[8];
    s32 count;
    FUN_00301a08(choice, indices, &count);
    for (s32 index = indices[0]; index < indices[0] + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(g_btlCandidateMasks.unavailable & flags) &&
            (g_btlCandidateMasks.required & flags) &&
            !(flags & g_btlCandidateMasks.excluded) && entry->id == unitId &&
            entry->hp * 100 / entry->maxHp <= percentage) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && entry->id == unitId && entry->hp * 100 / entry->maxHp <= percentage) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr) (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 argument);
void scrSetResult(s32 value);
BtlMainStateA* btlGetMainState(void);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 choice, s32* range, s32* count);
BtlCombatantEntryA* FUN_003eaf20(BtlMainStateA* battle);

s32 FUN_0037fc54(void)
{
    u32 demonId = scrGetArg(0);
    s32 statusBit = scrGetArg(1);
    s32 choice = btlResolveEntryChoice(scrGetArg(2));
    s32 range[8];
    s32 count;
    FUN_00301a08(choice, range, &count);
    for (s32 index = range[0]; index < range[0] + count; ++index) {
        BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) &&
            !(flags & g_btlCandidateMasks.excluded) &&
            entry->id == demonId && (entry->statusFlags & (1u << statusBit))) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA* entry = FUN_003eaf20(btlGetMainState());
        if (entry && (entry->statusFlags & (1u << statusBit))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

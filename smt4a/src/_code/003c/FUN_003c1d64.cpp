/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); the frame/saved-register set differs (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 choice, s32 *first, s32 *count);
s32 FUN_003020fc(BtlCombatantEntryA *entry, u32 category);
void scrSetResult(s32 value);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

// Test requested eligible combatants, including the auxiliary unit, for an action category.
u32 FUN_003c1d64(void)
{
    u32 category = scrGetArg(0);
    s32 choice = btlResolveEntryChoice(scrGetArg(1));
    struct EntryRange { s32 first; s32 count; } range;
    FUN_00301a08(choice, &range.first, &range.count);
    for (s32 index = range.first; index < range.first + range.count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 && FUN_003020fc(entry, category)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && FUN_003020fc(entry, category)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); the frame/saved-register set differs (the active-entry byte already folds with the s8 flag). */
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_003248e4(BtlCombatantEntryA *entry);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Check the requested group and the special combatant against candidate masks and a predicate.
u32 FUN_003b81ac(void)
{
    u32 choice = btlResolveEntryChoice(scrGetArg(0));
    s32 first;
    s32 count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && FUN_003248e4(entry) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && FUN_003248e4(entry) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

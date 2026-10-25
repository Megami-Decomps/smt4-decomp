/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr) (the active-entry byte already folds with the s8 flag). */
#include "battle/BtlMainAccess.h"
#include "util/CalleeContracts.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
u32 scrGetArg(u32 index);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Check eligible selected combatants and the active override for a unit ID.
u32 FUN_0034e27c(void)
{
    u32 id = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 entries[7], count;
    FUN_00301a08(choice, entries, &count);
    for (s32 index = entries[0]; index < count + entries[0]; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

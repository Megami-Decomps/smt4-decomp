/* NON_MATCHING: only the u64 mask loads of the `required` and `excluded` tests differ (retail loads the first as two ldr into ip/r3 and the third with ldm; the build the other way round); the range struct, loop and the other tests match. */
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Check eligible selected combatants and the active override for a unit ID.
u32 FUN_0034e27c(void)
{
    u32 id = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    struct {
        s32 count;
        s32 entries[7];
    } range;
    FUN_00301a08(choice, range.entries, &range.count);
    s32 first = range.entries[0];
    for (s32 index = first; index < range.count + range.entries[0]; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) && entry->id == id) {
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

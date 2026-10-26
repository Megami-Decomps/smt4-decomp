/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr) (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"
#include "battle/BattleHelpers.h"

extern "C" {
u32 scrGetArg(u32 index);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Check whether any eligible combatant has a positive value in entry category 19.
u32 FUN_003c9d98(void)
{
    u32 choice = btlResolveEntryChoice(scrGetArg(0));
    u32 entries[6], count;
    FUN_00301a08(choice, reinterpret_cast<s32 *>(entries), reinterpret_cast<s32 *>(&count));
    for (s32 index = entries[0]; index < (s32)(count + entries[0]); ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            btlFindEntryValue(entry->unitIndex, 19) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && btlFindEntryValue(entry->unitIndex, 19) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

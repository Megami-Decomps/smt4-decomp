#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "util/SlotRangeSelect.h"

extern "C" {
u32 scrGetArg(u32 index);
s32 btlResolveEntryChoice(u32 choice);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BattleMaskState *battle);

// Test whether any eligible selected combatant has a zero encoded stat level.
u32 FUN_0037fb04(void)
{
    u32 stat = scrGetArg(0);
    s32 choice = btlResolveEntryChoice(scrGetArg(1));
    if (stat < 21) {
        s32 first, count;
        FUN_00301a08(choice, &first, &count);
        for (s32 index = first; index < first + count; ++index) {
            BtlCombatantEntryA *entry = &reinterpret_cast<BtlCombatantEntryA *>(btlGetMainState()->entryView.entries)[index];
            if ((g_btlCandidateMasks.unavailable & entry->flags) == 0 &&
                (g_btlCandidateMasks.required & entry->flags) != 0 &&
                (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
                (entry->encodedStats.values[stat] & 0xfc00) == 0) {
                scrSetResult(1);
                return 1;
            }
        }
        if (btlGetMainState()->activeEntry.present) {
            BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
            if (entry != NULL && (entry->encodedStats.values[stat] & 0xfc00) == 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}

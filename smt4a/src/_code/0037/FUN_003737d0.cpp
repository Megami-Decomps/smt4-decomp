#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 btlResolveEntryChoice(u32 choice);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Check an encoded statistic's state on eligible combatants or the active override.
u32 FUN_003737d0(void)
{
    s32 statistic = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 &&
            (entry->encodedStats.values[statistic] >> 10) == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && (entry->encodedStats.values[statistic] >> 10) == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

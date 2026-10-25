#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 argument);
u32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(u32 group, s32 *first, s32 *count);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);

/* Test the selected encoded affinity on eligible group entries and the active special entry. */
u32 FUN_0038cd98(void)
{
    s32 affinity = scrGetArg(0);
    u32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->encodedStats.values[affinity] >> 10 == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && entry->encodedStats.values[affinity] >> 10 == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
s32 scrGetArg(s32);
u32 btlResolveEntryChoice(s32);
void FUN_00301a08(u32, s32 *, s32 *);
void scrSetResult(s32);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);

// Check a resolved combatant range and the partner for an encoded status level of one.
u32 FUN_0037fdf8(void)
{
    s32 status = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    FUN_00301a08(choice, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            (entry->encodedStats.values[status] >> 10) == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *partner = FUN_003eaf20(btlGetMainState());
        if (partner != NULL && (partner->encodedStats.values[status] >> 10) == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(u32);
u32 btlResolveEntryChoice(s32);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);
void scrSetResult(s32);

/* Test selected eligible combatants, including the special entry, for enough missing HP. */
u32 FUN_0039d4c8(void)
{
    s32 amount = scrGetArg(0);
    s32 first;
    s32 count;
    FUN_00301a08(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            amount <= entry->maxHp - entry->hp) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && amount <= entry->maxHp - entry->hp) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

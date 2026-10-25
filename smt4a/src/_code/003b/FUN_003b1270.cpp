#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 btlResolveEntryChoice(u32 choice);
void FUN_00301a08(u32 choice, s32 *first, s32 *count);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 value);

/* Test a per-index flag among eligible group candidates and the special combatant. */
u32 FUN_003b1270(void)
{
    u32 flag = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    if (flag < 21) {
        s32 first, count;
        FUN_00301a08(choice, &first, &count);
        for (s32 index = first; index < count + first; ++index) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
            if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
                (entry->flags & g_btlCandidateMasks.required) != 0 &&
                (g_btlCandidateMasks.excluded & entry->flags) == 0 &&
                entry->indexedFlags.values[flag] != 0) {
                scrSetResult(1);
                return 1;
            }
        }
        if (btlGetMainState()->unk4cd1 != 0) {
            BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
            if (entry != NULL && entry->indexedFlags.values[flag] != 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}

/* NON_MATCHING: range outputs use different stack slots; required-mask loads combine and special-combatant flag addressing differs. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(u32 choice, s32 *first, s32 *count);
BtlMainStateA *btlGetMainState(void);
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
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
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

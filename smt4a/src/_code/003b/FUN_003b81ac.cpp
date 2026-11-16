#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_003248e4(BtlCombatantEntryA *entry);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 result);

// Check the requested group and the special combatant against candidate masks and a predicate.
u32 FUN_003b81ac(void)
{
    s32 first, count;
    FUN_00301a08(btlResolveEntryChoice(scrGetArg(0)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) && !(g_btlCandidateMasks.excluded & entry->flags) &&
            FUN_003248e4(entry) != 0) {
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

#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
s32 FUN_002b54a0(BtlCombatantEntryA *entry, s32 kind);
void scrSetResult(s32 value);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

// Report whether a candidate in the current battle group, or the auxiliary unit, satisfies the script query.
u32 btlScriptAnyCandidateMatches(void)
{
    s32 kind = scrGetArg(0);
    s32 first, count;
    FUN_00301a08(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            FUN_002b54a0(entry, kind)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && FUN_002b54a0(entry, kind)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

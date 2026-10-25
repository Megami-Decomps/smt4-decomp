#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
s32 btlFindEntryValue(s32 unitIndex, u32 kind);
void scrSetResult(s32 value);

// Test matching eligible combatants for a positive parameter of the queried kind.
u32 FUN_003cc2f0()
{
    u32 id = scrGetArg(0);
    s32 first, count;
    FUN_00301a08(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (entry->flags & g_btlCandidateMasks.required) && !(g_btlCandidateMasks.excluded & entry->flags) &&
            entry->id == id && btlFindEntryValue(entry->unitIndex, 0x13) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && btlFindEntryValue(entry->unitIndex, 0x13) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

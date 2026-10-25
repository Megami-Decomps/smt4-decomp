/* NON_MATCHING: signed selection range now matches; wide-mask scratch registers and saved-register set differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
void scrSetResult(s32 value);

// Find a matching eligible combatant whose indexed encoded stat has kind four.
u32 FUN_003a8c10()
{
    u32 id = scrGetArg(0);
    s32 stat = scrGetArg(1);
    s32 first, count;
    FUN_00301a08(btlResolveEntryChoice(scrGetArg(2)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && (entry->encodedStats.values[stat] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && (entry->encodedStats.values[stat] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

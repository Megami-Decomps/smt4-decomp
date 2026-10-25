/* NON_MATCHING: the selection range's stack slots and loads differ; entries base/product registers are swapped in the entry address (the active-entry byte already folds with the s8 flag). */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "shard/btlResolveEntryChoice.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 FUN_0038c594()
{
    struct Selection { s32 first; s32 count; } selection;
    s32 property = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    FUN_00301a08(choice, &selection.first, &selection.count);
    for (s32 index = selection.first; index < selection.first + selection.count; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            (entry->encodedStats.values[property] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && (entry->encodedStats.values[property] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); entries base/product registers are swapped in the entry address (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
u32 FUN_002b54a0(const BtlCombatantEntryA *entry, s32 skill);
void scrSetResult(s32 value);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

// Test whether an eligible requested unit with this id has the requested skill in its action list.
u32 FUN_003c6644(void)
{
    u32 id = scrGetArg(0);
    s32 skill = scrGetArg(1);
    s32 choice = btlResolveEntryChoice(scrGetArg(2));
    u32 first, count;
    FUN_00301a08(choice, reinterpret_cast<s32 *>(&first), reinterpret_cast<s32 *>(&count));
    for (s32 index = first; index < (s32)(first + count); ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 && entry->id == id && FUN_002b54a0(entry, skill)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && FUN_002b54a0(entry, skill)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

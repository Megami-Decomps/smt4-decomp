/* NON_MATCHING: range loads become LDRD and required/excluded-mask operand grouping differs; auxiliary flag address is materialized. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 choice, s32 *first, s32 *count);
u32 FUN_002b54a0(const BtlCombatantEntryA *entry, s32 skill);
void scrSetResult(s32 value);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

// Test whether an eligible requested unit with this id has the requested skill in its action list.
u32 FUN_003c6644(void)
{
    u32 id = scrGetArg(0);
    s32 skill = scrGetArg(1);
    s32 choice = btlResolveEntryChoice(scrGetArg(2));
    struct EntryRange { s32 first; s32 count; } range;
    FUN_00301a08(choice, &range.first, &range.count);
    for (s32 index = range.first; index < range.first + range.count; ++index) {
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

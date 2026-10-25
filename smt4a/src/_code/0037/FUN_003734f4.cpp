#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
u32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

static __inline s32 entryMpPercentage(const BtlCombatantEntryA *entry)
{
    s32 mp = entry->mp;
    s32 maximum = entry->maxMp;
    return mp * 100 / maximum;
}

// Test whether a selected demon or the special combatant is at or below an MP percentage.
u32 FUN_003734f4()
{
    u32 id = scrGetArg(0);
    s32 threshold = scrGetArg(1);
    u32 choice = btlResolveEntryChoice(scrGetArg(2));
    s32 first, count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) && entry->id == id &&
            entryMpPercentage(entry) <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && entryMpPercentage(entry) <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

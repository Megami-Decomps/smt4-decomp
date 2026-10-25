/* NON_MATCHING: recovered scalar range outputs occupy nonadjacent stack slots; candidate mask load grouping/registers differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 argument);
void scrSetResult(s32 value);
BtlMainStateA* btlGetMainState(void);
s32 btlResolveEntryChoice(s32 choice);
BtlCombatantEntryA* FUN_003eaf20(BtlMainStateA* battle);

s32 FUN_0037fc54(void)
{
    u32 demonId = scrGetArg(0);
    s32 statusBit = scrGetArg(1);
    s32 choice = btlResolveEntryChoice(scrGetArg(2));
    s32 first;
    s32 count;
    FUN_00301a08(choice, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (g_btlCandidateMasks.required & flags) &&
            !(flags & g_btlCandidateMasks.excluded) &&
            entry->id == demonId && (entry->statusFlags & (1u << statusBit))) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA* entry = FUN_003eaf20(btlGetMainState());
        if (entry && (entry->statusFlags & (1u << statusBit))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

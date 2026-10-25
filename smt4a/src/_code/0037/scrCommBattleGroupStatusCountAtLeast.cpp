#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 kind);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 scrCommBattleGroupStatusCountAtLeast()
{
    s32 bit = scrGetArg(0);
    s32 minimum = scrGetArg(1);
    s32 kind = btlResolveEntryChoice(scrGetArg(2));
    s32 matches = 0;
    s32 first, count;
    FUN_00301a08(kind, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlMainStateA *battle = btlGetMainState();
        const BtlCombatantEntryA *entry = &battle->entries[index];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded)) {
            if (entry->statusFlags & (1u << bit)) {
                ++matches;
            }
        }
    }
    if (btlGetMainState()->unk4cd1) {
        const BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && (entry->statusFlags & (1u << bit))) {
            ++matches;
        }
    }
    scrSetResult(minimum <= matches);
    return 1;
}
}

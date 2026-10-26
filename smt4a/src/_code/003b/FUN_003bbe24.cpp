#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

/* The shared entry's padding union starts at 0x0a and cannot gain s32 alignment. */
struct BattleCandidateCounterView {
    u64 flags;
    u8 unk08[0xa4];
    s32 primary;                     /* 0xac */
    u32 unkB0;
    s32 secondary;                   /* 0xb4 */
};

extern "C" {
u32 scrGetArg(s32 argument);
u32 btlResolveEntryChoice(u32 choice);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);

/* Test eligible group entries and the special active entry for a positive counter. */
u32 FUN_003bbe24(void)
{
    u32 group = btlResolveEntryChoice(scrGetArg(0));
    s32 first, count;
    FUN_00301a08(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags)) {
            const BattleCandidateCounterView *counters = (const BattleCandidateCounterView *)entry;
            if (counters->primary > 0 || counters->secondary > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        const BattleCandidateCounterView *counters = (const BattleCandidateCounterView *)entry;
        if (entry && (counters->primary > 0 || counters->secondary > 0)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

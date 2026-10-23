/* NON_MATCHING: mask-load grouping and register pressure differ, changing saved registers and stack padding. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

/* The shared entry's padding union starts at 0x0a and cannot gain s32 alignment. */
struct BattleCandidateCounterView {
    u64 flags;
    u8 unk08[0xa8];
    s32 primary;                     /* 0xb0 */
    u32 unkB4;
    s32 secondary;                   /* 0xb8 */
};

extern "C" {
u32 scrGetArg(s32 argument);
u32 btlResolveEntryChoice(u32 choice);
void FUN_00301a08(u32 group, s32 *first, s32 *count);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);

/* Test eligible group entries and the special active entry for a positive counter. */
u32 FUN_003cab30(void)
{
    u32 group = btlResolveEntryChoice(scrGetArg(0));
    s32 first, count;
    FUN_00301a08(group, &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded)) {
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

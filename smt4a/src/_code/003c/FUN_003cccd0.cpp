/* NON_MATCHING: retail reserves a larger range frame; flag-word operand registers and auxiliary-byte addressing differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 choice, s32 *first, s32 *count);
void scrSetResult(s32 value);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
}

static inline bool candidateHasPendingCounter(BtlCombatantEntryA *entry)
{
    // These words cannot be inserted into the canonical byte-aligned +0xA padding union.
    struct CounterView {
        u8 unk000[0xB0];
        s32 primary;
        u32 unk0B4;
        s32 secondary;
    };
    typedef char CounterOffsetCheck[offsetof(CounterView, primary) == 0xB0 &&
        offsetof(CounterView, secondary) == 0xB8 ? 1 : -1];
    CounterView *counters = (CounterView *)entry;
    return counters->primary > 0 || counters->secondary > 0;
}

// Test whether a requested candidate with the specified unit id still has a pending counter.
extern "C" u32 FUN_003cccd0(void)
{
    u32 id = scrGetArg(0);
    s32 choice = btlResolveEntryChoice(scrGetArg(1));
    struct EntryRange { s32 count; s32 first; } range;
    FUN_00301a08(choice, &range.first, &range.count);
    for (s32 index = range.first; index < range.first + range.count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 && entry->id == id && candidateHasPendingCounter(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && candidateHasPendingCounter(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

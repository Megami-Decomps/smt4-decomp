/* NON_MATCHING: range storage uses separate word loads; saved registers and the candidate-mask operand allocation differ. */
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

static inline s32 candidateTimer(const BtlCombatantEntryA *entry)
{
    // Adding an s32 to the canonical +0xA union would change that union's alignment.
    struct TimerView {
        u8 unk000[0xC4];
        s32 timer;
    };
    typedef char TimerOffsetCheck[offsetof(TimerView, timer) == 0xC4 ? 1 : -1];
    return ((const TimerView *)entry)->timer;
}

// Test whether an eligible requested combatant has a positive pending timer.
extern "C" u32 FUN_003c63ac(void)
{
    s32 choice = btlResolveEntryChoice(scrGetArg(0));
    struct EntryRange { s32 count; s32 first; } range;
    FUN_00301a08(choice, &range.first, &range.count);
    for (s32 index = range.first; index < range.first + range.count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 && candidateTimer(entry) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && candidateTimer(entry) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

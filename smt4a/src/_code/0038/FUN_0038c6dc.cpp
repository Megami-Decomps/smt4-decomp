/* NON_MATCHING: range LDRD, exclusion-mask grouping and auxiliary-unit byte addressing differ from retail. */
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

static inline u32 candidateEqualityStat(BtlCombatantEntryA *entry, s32 index)
{
    // A word array in the canonical +0xA byte-padding union would shift the published layout.
    struct StatView { u8 unk000[0x74]; u32 values[12]; };
    typedef char StatOffsetCheck[offsetof(StatView, values) == 0x74 ? 1 : -1];
    return ((StatView *)entry)->values[index];
}

// Test a requested unit id's selected battle stat for equality with a script value.
extern "C" u32 FUN_0038c6dc(void)
{
    u32 id = scrGetArg(0);
    s32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 kind = scrGetArg(2);
    s32 stat = 0;
    if (kind == 0) {
        stat = 7;
    } else if (kind == 1) {
        stat = 8;
    } else if (kind == 2) {
        stat = 10;
    } else if (kind == 3) {
        stat = 11;
    }
    u32 value = scrGetArg(3);
    struct EntryRange { s32 first; s32 count; } range;
    FUN_00301a08(choice, &range.first, &range.count);
    for (s32 index = range.first; index < range.first + range.count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 && entry->id == id && candidateEqualityStat(entry, stat) == value) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && candidateEqualityStat(entry, stat) == value) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

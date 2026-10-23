/* NON_MATCHING: Required-mask LDM versus word loads, initial range loads and special-member flag addressing differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

/* The shared combatant's byte/halfword-aligned union cannot gain the property words in place. */
struct BattleThresholdEntryView {
    u64 flags;
    u8 unk008[0x6C];
    s32 values[12];
    u8 unk0A4[0x364];
};
typedef char BattleThresholdEntrySizeCheck[sizeof(BattleThresholdEntryView) == 0x408 ? 1 : -1];
extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 group, u32 *first, u32 *count);
BtlMainStateA *btlGetMainState(void);
BattleThresholdEntryView *FUN_003eaf20(BtlMainStateA *state);

/* Tests whether an eligible member of the selected group, or the enabled special member, exceeds a threshold. */
u32 FUN_003c1964(void)
{
    s32 category = scrGetArg(0);
    s32 property = 0;
    if (category == 0) {
        property = 7;
    } else if (category == 1) {
        property = 8;
    } else if (category == 2) {
        property = 10;
    } else if (category == 3) {
        property = 11;
    }
    s32 threshold = scrGetArg(1);
    s32 group = btlResolveEntryChoice(scrGetArg(2));
    struct EntryRange { u32 first, count; } range;
    FUN_00301a08(group, &range.first, &range.count);
    for (s32 index = range.first; index < (s32)(range.first + range.count); ++index) {
        BattleThresholdEntryView *entry = &((BattleThresholdEntryView *)btlGetMainState()->entries)[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && entry->values[property] > threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BattleThresholdEntryView *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->values[property] > threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

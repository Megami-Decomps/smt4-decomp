/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr) (the active-entry byte already folds with the s8 flag). */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);

/* Tests whether the requested group or the special combatant has a positive property value. */
s32 FUN_003c9edc(void)
{
    /* This word lies inside the shared combatant's halfword-aligned union. */
    struct EntryQueryView {
        /* 0x000 */ u64 flags;
        /* 0x008 */ u8 unk008[0xC0];
        /* 0x0C8 */ s32 value;
        /* 0x0CC */ u8 unk0CC[0x33C];
    };
    typedef char EntryQueryOffsetsCheck[offsetof(EntryQueryView, value) == 0xC8 &&
        sizeof(EntryQueryView) == 0x408 ? 1 : -1];
    s32 first[6];
    s32 count;
    s32 group = btlResolveEntryChoice(scrGetArg(0));
    FUN_00301a08(group, first, &count);
    for (s32 index = first[0]; index < count + first[0]; ++index) {
        EntryQueryView *entry = &((EntryQueryView *)btlGetMainState()->entries)[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 && entry->value > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        EntryQueryView *entry = (EntryQueryView *)FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->value > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

/* NON_MATCHING: The required mask uses LDM instead of retail's two word loads. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Tests whether an eligible combatant has a positive value for the requested category. */
s32 FUN_003b8044(void)
{
    /* The existing entry's halfword-aligned union cannot gain these words without moving it. */
    struct EntryQueryView {
        /* 0x000 */ u64 flags;
        /* 0x008 */ u8 unk008[0x6C];
        /* 0x074 */ s32 categoryValues[12];
        /* 0x0A4 */ u8 unk0A4[0xC2];
        /* 0x166 */ u16 id;
        /* 0x168 */ u8 unk168[0x2A0];
    };
    typedef char EntryQuerySizeCheck[sizeof(EntryQueryView) == 0x408 ? 1 : -1];
    typedef char EntryQueryOffsetsCheck[
        offsetof(EntryQueryView, categoryValues) == 0x74 &&
        offsetof(EntryQueryView, id) == 0x166 ? 1 : -1];

    u32 id = scrGetArg(0);
    s32 category = scrGetArg(1);
    s32 valueIndex = 0;
    if (category == 0) {
        valueIndex = 7;
    } else if (category == 1) {
        valueIndex = 8;
    } else if (category == 2) {
        valueIndex = 10;
    } else if (category == 3) {
        valueIndex = 11;
    }
    for (s32 index = 0; index < 109; ++index) {
        EntryQueryView *entry = &((EntryQueryView *)btlGetMainState()->entries)[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) != 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0 &&
            entry->id == id && entry->categoryValues[valueIndex] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

namespace {
struct BattleMarkMasks {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u64 markOne;
    /* 0x40 */ u64 markTwo;
};
}

extern "C" {

extern BattleMarkMasks g_btlMessageFlagMasks;
s32 scrGetArg(s32 index);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);
void btlSlotSetStoreValue(u32 id, s32 slot, s32 value);

/* Script command: give an entry mark 1 or 2 and record it in its slot store. */
u32 scrBtlSetEntryMark(void)
{
    u32 id = scrGetArg(0);
    s32 mark = scrGetArg(1);
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), id);

    if (entry != NULL) {
        switch (mark) {
        case 1:
            entry->flags |= g_btlMessageFlagMasks.markOne;
            btlSlotSetStoreValue(id, 0x1a, 1);
            break;
        case 2:
            entry->flags |= g_btlMessageFlagMasks.markTwo;
            btlSlotSetStoreValue(id, 0x1a, 2);
            break;
        }
    }
    return 1;
}

} /* extern "C" */

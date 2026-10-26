/* NON_MATCHING: retail keeps the unrolled reserve-mask tests as generic sign-extended 64-bit ANDs (constants 2/4/8 in registers, mask loaded by ldrd through an add-immediate address, one extra callee-saved register); built folds them to constants. */
#include "battle/btlUI.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"

/* Keep 64-bit mask alignment out of BtlUiA's four-byte-aligned shared layout. */
struct BattlePartySelectionView {
    u8 unk0000[0x7490];
    u64 reserveMask;
    u64 activeMask;
};

extern "C" {
extern BtlUiGlobalsA g_btlUi;
s32 FUN_002cc9e0(BtlUiObjCA *widget, u32 mode);
u64 runtimeShiftLeftWide(u64 value, u32 count);

/* The slot chosen from the reserve mask and from the active-party mask (-1 when none). */
struct PartySelection {
    s32 reserve;
    s32 active;
};

/* Compare the identities selected by reserve and active-party bit masks. */
u32 FUN_004ab594(void)
{
    BtlUiA *ui = g_btlUi.ui;
    if (FUN_002cc9e0(&ui->objC, 1) != 10)
        return ~0u;
    SaveSlotTable *party = gameGetSlotTable();
    const BattlePartySelectionView *selection = (const BattlePartySelectionView *)ui;
    PartySelection chosen = {-1, -1};
    for (s32 i = -1; i < 3; ++i) {
        if (selection->reserveMask & (1 << (i + 1))) {
            chosen.reserve = i;
            break;
        }
    }
    u64 activeMask = selection->activeMask;
    for (s32 i = 0; i < 24; ++i) {
        if (activeMask & runtimeShiftLeftWide(1, i + 1))
            chosen.active = i;
    }
    s8 reserveId = -1;
    s8 activeId = -1;
    if (chosen.reserve >= 0)
        reserveId = party->reserve[chosen.reserve];
    if (chosen.active >= 0)
        activeId = party->party[chosen.active];
    return reserveId == activeId;
}
}

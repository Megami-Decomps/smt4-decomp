/* NON_MATCHING: retail uses generic signed-mask tests, different wide-shift relocation and indexed byte addressing. */
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

/* Compare the identities selected by reserve and active-party bit masks. */
u32 FUN_004ab594(void)
{
    BtlUiA *ui = g_btlUi.ui;
    if (FUN_002cc9e0(&ui->objC, 1) != 10)
        return ~0u;
    SaveSlotTable *party = gameGetSlotTable();
    const BattlePartySelectionView *selection = (const BattlePartySelectionView *)ui;
    s32 reserve = -1;
    s32 active = -1;
    if (!(selection->reserveMask & 1)) {
        if (selection->reserveMask & 2)
            reserve = 0;
        else if (selection->reserveMask & 4)
            reserve = 1;
        else if (selection->reserveMask & 8)
            reserve = 2;
    }
    u64 activeMask = selection->activeMask;
    for (s32 i = 0; i < 24; ++i) {
        if (activeMask & (1ULL << (i + 1)))
            active = i;
    }
    s8 reserveId = -1;
    s8 activeId = -1;
    if (reserve >= 0)
        reserveId = party->reserve[reserve];
    if (active >= 0)
        activeId = party->party[active];
    return reserveId == activeId;
}
}

#include "battle/BtlUiGlobal.h"

extern "C" {
void fillTwoWordsWithByte(void *destination, u32 value);
u16 btlTurnOrderRankOf(u32 source, u32 ordinal); // declcheck: local (the shared declaration does not compile here or changes this unit)
void btlUiCopyIdList(BtlUiObjCA *menu, const u16 *ids);
void menu32Advance(BtlUiObjCA *menu);
void uiMenuActivateAndCountEntries(BtlUiObjCA *menu);

/* btlUiIdsRefresh's body, inlined here: loads the four turn-order ranks and applies them to the menu. */
static __inline void refreshIds(void)
{
    BtlUiA *ui = g_btlUi.ui;

    fillTwoWordsWithByte(ui->ids, 0xffffffff);
    ui->ids[0] = btlTurnOrderRankOf(ui->owner, 0);
    ui->ids[1] = btlTurnOrderRankOf(ui->owner, 1);
    ui->ids[2] = btlTurnOrderRankOf(ui->owner, 2);
    ui->ids[3] = btlTurnOrderRankOf(ui->owner, 3);
    btlUiCopyIdList(&ui->objC, ui->ids);
}

void FUN_004aa2e0(void *context, s32 advance)
{
    BtlUiA *ui = g_btlUi.ui;

    refreshIds();
    if (advance) {
        menu32Advance(&ui->objC);
    } else {
        uiMenuActivateAndCountEntries(&ui->objC);
    }
}
}

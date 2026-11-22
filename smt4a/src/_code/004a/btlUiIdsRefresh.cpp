#include "battle/BtlUiGlobal.h"

extern "C" {

void btlUiCopyIdList(BtlUiObjCA *obj, u16 *ids);
void fillTwoWordsWithByte(u16 *ids, s32 value);
u16 btlTurnOrderRankOf(u32 owner, s32 index); // declcheck: local (the shared declaration does not compile here or changes this unit)


void btlUiIdsRefresh(void)
{
    BtlUiA *ui = g_btlUi.ui;

    fillTwoWordsWithByte(ui->ids, -1);
    ui->ids[0] = btlTurnOrderRankOf(ui->owner, 0);
    ui->ids[1] = btlTurnOrderRankOf(ui->owner, 1);
    ui->ids[2] = btlTurnOrderRankOf(ui->owner, 2);
    ui->ids[3] = btlTurnOrderRankOf(ui->owner, 3);
    btlUiCopyIdList(&ui->objC, ui->ids);
}

} /* extern "C" */

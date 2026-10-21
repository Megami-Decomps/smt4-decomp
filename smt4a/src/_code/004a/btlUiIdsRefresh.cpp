#include "battle/btlUI.h"

extern "C" {

void FUN_001a9104(BtlUiObjCA *obj, u16 *ids);
void fillTwoWordsWithByte(u16 *ids, s32 value);
u16 uiFindValidIdOrdinal(u32 owner, s32 index);

extern BtlUiGlobalsA g_btlUi;

void btlUiIdsRefresh(void)
{
    BtlUiA *ui = g_btlUi.ui;

    fillTwoWordsWithByte(ui->ids, -1);
    ui->ids[0] = uiFindValidIdOrdinal(ui->owner, 0);
    ui->ids[1] = uiFindValidIdOrdinal(ui->owner, 1);
    ui->ids[2] = uiFindValidIdOrdinal(ui->owner, 2);
    ui->ids[3] = uiFindValidIdOrdinal(ui->owner, 3);
    FUN_001a9104(&ui->objC, ui->ids);
}

} /* extern "C" */

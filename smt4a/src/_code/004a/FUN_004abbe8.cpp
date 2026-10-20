#include "battle/btlUI.h"

extern "C" {

void FUN_001a9104(BtlUiObjCA *obj, u16 *ids);
void fillTwoWordsWithByte(u16 *ids, s32 value);
u16 FUN_003ea1cc(u32 owner, s32 index);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004abbe8(void)
{
    BtlUiA *ui = DAT_0057a9b8.ui;

    fillTwoWordsWithByte(ui->ids, -1);
    ui->ids[0] = FUN_003ea1cc(ui->owner, 0);
    ui->ids[1] = FUN_003ea1cc(ui->owner, 1);
    ui->ids[2] = FUN_003ea1cc(ui->owner, 2);
    ui->ids[3] = FUN_003ea1cc(ui->owner, 3);
    FUN_001a9104(&ui->objC, ui->ids);
}

} /* extern "C" */

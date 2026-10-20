#include "battle/btlUI.h"

extern "C" {

void FUN_0039eaa8(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aa854(u32 unused, u32 value)
{
    BtlUiA *ui = DAT_0057a9b8.ui;

    ui->unk12FCC = value;
    FUN_0039eaa8(&ui->objC);
}

} /* extern "C" */

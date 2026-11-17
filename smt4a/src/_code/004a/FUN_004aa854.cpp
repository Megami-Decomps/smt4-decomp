#include "battle/BtlUiGlobal.h"

extern "C" {

void statusSynchronizePortraits(BtlUiObjCA *obj);


void FUN_004aa854(u32 unused, u32 value)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->unk12FCC = value;
    statusSynchronizePortraits(&ui->objC);
}

} /* extern "C" */

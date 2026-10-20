#include "battle/btlUI.h"

extern "C" {

void FUN_00336b54(BtlUiObjCA *obj, s32 arg);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004a9c84(void)
{
    FUN_00336b54(&DAT_0057a9b8.ui->objC, 1);
}

} /* extern "C" */

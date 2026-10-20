#include "battle/btlUI.h"

extern "C" {

void FUN_00381178(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aa7b0(void)
{
    FUN_00381178(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */

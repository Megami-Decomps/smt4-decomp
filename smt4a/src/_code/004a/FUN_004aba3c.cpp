#include "battle/btlUI.h"

extern "C" {

void FUN_003bcf20(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aba3c(void)
{
    FUN_003bcf20(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */

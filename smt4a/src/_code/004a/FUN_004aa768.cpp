#include "battle/btlUI.h"

extern "C" {

void FUN_002fa73c(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aa768(void)
{
    FUN_002fa73c(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */

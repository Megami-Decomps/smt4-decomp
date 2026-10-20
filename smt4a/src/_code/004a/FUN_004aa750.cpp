#include "battle/btlUI.h"

extern "C" {

void FUN_002f934c(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aa750(void)
{
    FUN_002f934c(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */

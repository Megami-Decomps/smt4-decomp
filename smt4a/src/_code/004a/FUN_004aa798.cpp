#include "battle/btlUI.h"

extern "C" {

void FUN_002fb3c8(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aa798(void)
{
    FUN_002fb3c8(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */

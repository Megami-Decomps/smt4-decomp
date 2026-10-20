#include "battle/btlUI.h"

extern "C" {

void FUN_003756b8(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004ab7f4(void)
{
    FUN_003756b8(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */

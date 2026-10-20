#include "battle/btlUI.h"

extern "C" {

void FUN_003b2160(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004abe14(void)
{
    FUN_003b2160(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */

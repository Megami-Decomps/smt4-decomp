#include "battle/btlUI.h"

extern "C" {

void FUN_002ccd58(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aa098(void)
{
    FUN_002ccd58(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */

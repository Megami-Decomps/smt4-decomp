#include "battle/btlUI.h"

extern "C" {

void FUN_00336d68(BtlUiObjAA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aaf80(void)
{
    FUN_00336d68(&DAT_0057a9b8.ui->objA);
}

} /* extern "C" */

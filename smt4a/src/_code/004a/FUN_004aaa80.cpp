#include "battle/btlUI.h"

extern "C" {

void FUN_00321378(BtlUiObjAA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aaa80(void)
{
    FUN_00321378(&DAT_0057a9b8.ui->objA);
}

} /* extern "C" */

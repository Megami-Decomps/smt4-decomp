#include "battle/btlUI.h"

extern "C" {

s32 FUN_0038e6bc(BtlUiObjAA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

bool FUN_004abb30(void)
{
    return FUN_0038e6bc(&DAT_0057a9b8.ui->objA) != 0;
}

} /* extern "C" */

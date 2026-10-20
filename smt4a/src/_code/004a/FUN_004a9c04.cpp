#include "battle/btlUI.h"

extern "C" {

void FUN_00184c00(BtlUiObjDA *obj, s32 a, s32 b);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004a9c04(void)
{
    FUN_00184c00(&DAT_0057a9b8.ui->objD, 0xE, 0);
}

} /* extern "C" */

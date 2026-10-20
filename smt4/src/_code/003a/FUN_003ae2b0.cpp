#include "battle/btlUI.h"

extern "C" {

void FUN_002af5c0(BtlUiObjD *obj, s32 a, s32 b);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae2b0(void)
{
    FUN_002af5c0(&DAT_00439c88.ui->objD, 0xE, 0);
}

} /* extern "C" */

#include "battle/btlUI.h"

extern "C" {

void FUN_002d0098(BtlUiObjC *obj, s32 arg);

extern BtlUiGlobals DAT_00439c88;

void FUN_003adc20(void)
{
    FUN_002d0098(&DAT_00439c88.ui->objC, 0);
}

} /* extern "C" */

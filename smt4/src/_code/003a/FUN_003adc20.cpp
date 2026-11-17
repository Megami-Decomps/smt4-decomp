#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_002d0098(BtlUiObjC *obj, s32 arg);


void FUN_003adc20(void)
{
    FUN_002d0098(&g_btlUi.ui->objC, 0);
}

} /* extern "C" */

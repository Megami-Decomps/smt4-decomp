#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_00336b54(BtlUiObjCA *obj, s32 arg);


void FUN_004a9c84(void)
{
    FUN_00336b54(&g_btlUi.ui->objC, 1);
}

} /* extern "C" */

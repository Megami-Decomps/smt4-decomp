#include "battle/BtlUiGlobal.h"
#include "code/Code004a.h"

extern "C" {

void FUN_003756b8(BtlUiObjCA *obj);


void FUN_004ab7f4(void*arg0, s32 arg1)
{
    FUN_003756b8(&g_btlUi.ui->objC);
}

} /* extern "C" */

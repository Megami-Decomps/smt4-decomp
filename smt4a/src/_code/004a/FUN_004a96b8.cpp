#include "battle/btlUI.h"

extern "C" {

void FUN_00336b54(BtlUiObjCA *obj, s32 arg);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a96b8(void)
{
    FUN_00336b54(&g_btlUi.ui->objC, 0);
}

} /* extern "C" */

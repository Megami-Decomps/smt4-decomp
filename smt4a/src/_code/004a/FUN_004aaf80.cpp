#include "battle/BtlUiGlobal.h"

extern "C" {

void menu32ModeIsNot3(BtlUiObjAA *obj);


void FUN_004aaf80(void)
{
    menu32ModeIsNot3(&g_btlUi.ui->objA);
}

} /* extern "C" */

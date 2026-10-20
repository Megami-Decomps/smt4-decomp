#include "battle/btlUI.h"

extern "C" {

void menu32ModeIsNot3(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aaf80(void)
{
    menu32ModeIsNot3(&g_btlUi.ui->objA);
}

} /* extern "C" */

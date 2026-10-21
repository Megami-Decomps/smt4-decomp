#include "battle/btlUI.h"

extern "C" {

s32 menu32ModeIsNot5(BtlUiObjAA *obj);
s32 uiSceneIsActive(BtlUiObjBA *obj);

extern BtlUiGlobalsA g_btlUi;

bool FUN_004abfec(void)
{
    BtlUiA *ui = g_btlUi.ui;

    return menu32ModeIsNot5(&ui->objA) != 0 && uiSceneIsActive(&ui->objB) != 0;
}

} /* extern "C" */

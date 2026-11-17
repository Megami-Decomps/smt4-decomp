#include "battle/BtlUiGlobal.h"

extern "C" {

s32 menu32ModeIsNot5(BtlUiObjAA *obj);
s32 uiSceneIsActive(BtlUiObjBA *obj);


bool btlUiIsMenuSceneActive(void)
{
    BtlUiA *ui = g_btlUi.ui;

    return menu32ModeIsNot5(&ui->objA) != 0 && uiSceneIsActive(&ui->objB) != 0;
}

} /* extern "C" */

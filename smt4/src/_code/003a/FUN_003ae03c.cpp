#include "battle/btlUI.h"

extern "C" {

void uiSpriteSetImageKeyframe(BtlUiObjD *obj, s32 a, s32 b);

extern BtlUiGlobals g_btlUi;

void FUN_003ae03c(void)
{
    BtlUi *ui = g_btlUi.ui;

    ui->panelState.spriteActive = 1;
    uiSpriteSetImageKeyframe(&ui->objD, 0xD, 0);
}

} /* extern "C" */

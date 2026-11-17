#include "ui/UiSpriteApi.h"
#include "battle/BtlUiGlobal.h"

extern "C" {



void FUN_003ae03c(void)
{
    BtlUi *ui = g_btlUi.ui;

    ui->panelState.spriteActive = 1;
    uiSpriteSetImageKeyframe(&ui->objD.sprite, 0xD, 0);
}

} /* extern "C" */

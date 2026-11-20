#include "ui/UiSpriteApi.h"
#include "battle/BtlUiGlobal.h"

extern "C" {



void btlUiPanelShow(void)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->spriteActive = 1;
    uiSpriteSetImageKeyframe(&ui->objD.sprite, 0xD, 0);
}

} /* extern "C" */

#include "ui/UiSpriteApi.h"
#include "battle/BtlUiGlobal.h"

extern "C" {



void btlUiPanelHide(void)
{
    uiSpriteSetImageKeyframe(&g_btlUi.ui->objD.sprite, 0xE, 0);
}

} /* extern "C" */

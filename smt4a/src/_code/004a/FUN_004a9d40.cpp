#include "ui/UiSpriteApi.h"
#include "battle/BtlUiGlobal.h"

extern "C" {


/* True once the battle UI's sprite has finished. */
u8 FUN_004a9d40(void)
{
    return uiSpriteGetCompletionState(&g_btlUi.ui->objD.sprite) != 0;
}

} /* extern "C" */

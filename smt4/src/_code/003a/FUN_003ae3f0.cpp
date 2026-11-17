#include "battle/BtlUiGlobal.h"

extern "C" {

/* True once the battle UI's sprite has finished. */
u8 FUN_003ae3f0(void)
{
    UiSpriteState *sprite = &g_btlUi.ui->objD.sprite;

    return uiSpriteGetCompletionState(sprite) != 0;
}

} /* extern "C" */

#include "battle/btlUI.h"

extern "C" {

void uiSpriteSetImageKeyframe(BtlUiObjD *obj, s32 a, s32 b);

extern BtlUiGlobals g_btlUi;

void FUN_003ae2b0(void)
{
    uiSpriteSetImageKeyframe(&g_btlUi.ui->objD, 0xE, 0);
}

} /* extern "C" */

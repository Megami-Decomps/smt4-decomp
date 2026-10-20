#include "battle/btlUI.h"

extern "C" {

void uiSpriteSetImageKeyframe(BtlUiObjDA *obj, s32 a, s32 b);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a9c04(void)
{
    uiSpriteSetImageKeyframe(&g_btlUi.ui->objD, 0xE, 0);
}

} /* extern "C" */

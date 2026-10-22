#include "battle/btlUI.h"

extern "C" {

void uiSpriteSetImageKeyframe(BtlUiObjDA *obj, s32 a, s32 b);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a998c(void)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->spriteActive = 1;
    uiSpriteSetImageKeyframe(&ui->objD, 0xD, 0);
}

} /* extern "C" */

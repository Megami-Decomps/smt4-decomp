#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi; /* 0x57a9b8 */
s32 uiSpriteGetCompletionState(BtlUiObjDA *state);

/* Whether the battle UI's completion byte (objD + 0x8A) is set. */
u8 FUN_004a9d40(void)
{
    return uiSpriteGetCompletionState(&g_btlUi.ui->objD) != 0;
}

} /* extern "C" */

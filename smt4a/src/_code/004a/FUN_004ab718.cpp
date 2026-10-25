#include "battle/btlUI.h"
#include "camp/RenderCtx.h"

extern "C" {

void state40CIsNot4(u32 arg);

extern BtlUiGlobalsA g_btlUi;

s32 FUN_004ab718(void)
{
    state40CIsNot4(g_btlUi.ui->unk7488);
}

} /* extern "C" */

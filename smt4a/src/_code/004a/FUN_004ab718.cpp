#include "battle/btlUI.h"

extern "C" {

void state40CIsNot4(u32 arg);

extern BtlUiGlobalsA g_btlUi;

void FUN_004ab718(void)
{
    state40CIsNot4(g_btlUi.ui->unk7488);
}

} /* extern "C" */

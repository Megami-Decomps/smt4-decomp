#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

bool FUN_004aba9c(void)
{
    return g_btlUi.ui->state != 0x10 && g_btlUi.ui->state != 0xC;
}

} /* extern "C" */

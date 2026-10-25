#include "battle/btlUI.h"
#include "gamedata/Table04Record.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

bool FUN_004aba9c(u32 arg0)
{
    return g_btlUi.ui->state != 0x10 && g_btlUi.ui->state != 0xC;
}

} /* extern "C" */

#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

bool FUN_004ab8bc(void)
{
    if (g_btlUi.ui->state == 0x13) {
        return false;
    }
    return true;
}

} /* extern "C" */

#include "battle/BtlUiGlobal.h"

extern "C" {


bool FUN_004ab8bc(void)
{
    if (g_btlUi.ui->state == 0x13) {
        return false;
    }
    return true;
}

} /* extern "C" */

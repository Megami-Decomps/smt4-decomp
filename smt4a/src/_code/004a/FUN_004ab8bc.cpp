#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA DAT_0057a9b8;

bool FUN_004ab8bc(void)
{
    if (DAT_0057a9b8.ui->state == 0x13) {
        return false;
    }
    return true;
}

} /* extern "C" */

#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals DAT_00439c88;

bool FUN_003af084(void)
{
    return DAT_00439c88.ui->state != 0xC && DAT_00439c88.ui->state != 8;
}

} /* extern "C" */

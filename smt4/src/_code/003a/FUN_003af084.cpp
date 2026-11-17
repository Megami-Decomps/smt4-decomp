#include "battle/BtlUiGlobal.h"

extern "C" {


bool FUN_003af084(void)
{
    return g_btlUi.ui->panelState.state != 0xC && g_btlUi.ui->panelState.state != 8;
}

} /* extern "C" */

#include "battle/BtlUiGlobal.h"

extern "C" {


bool btlUiIsIdle(void)
{
    return g_btlUi.ui->state == 0;
}

} /* extern "C" */

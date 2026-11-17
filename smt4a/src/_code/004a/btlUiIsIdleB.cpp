#include "battle/BtlUiGlobal.h"

extern "C" {


bool btlUiIsIdleB(void)
{
    return g_btlUi.ui->state == 0;
}

} /* extern "C" */

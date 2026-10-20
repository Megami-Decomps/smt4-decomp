#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

bool btlUiIsIdle(void)
{
    return g_btlUi.ui->state == 0;
}

} /* extern "C" */

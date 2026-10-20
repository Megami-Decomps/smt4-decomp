#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

bool FUN_004abb08(void)
{
    return g_btlUi.ui->state == 4;
}

} /* extern "C" */

#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;

/* Reports whether the battle UI is in its idle state. */
bool btlUiIsIdle()
{
    return g_btlUi.ui->state == 0;
}

}

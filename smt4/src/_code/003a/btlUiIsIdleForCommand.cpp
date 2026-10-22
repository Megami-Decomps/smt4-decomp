#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;

/* Reports whether the battle UI is in its idle state. */
bool btlUiIsIdleForCommand()
{
    return g_btlUi.ui->panelState.state == 0;
}

}

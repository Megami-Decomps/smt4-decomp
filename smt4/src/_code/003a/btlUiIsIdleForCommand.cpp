#include "battle/BtlUiGlobal.h"

extern "C" {


/* Reports whether the battle UI is in its idle state. */
bool btlUiIsIdleForCommand()
{
    return g_btlUi.ui->panelState.state == 0;
}

}

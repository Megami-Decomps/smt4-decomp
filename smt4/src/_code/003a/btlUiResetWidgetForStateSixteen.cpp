#include "battle/BtlUiGlobal.h"

extern "C" {

void btlUiObjCResetToState27(BtlUiObjC *widget);

/* Switches the battle UI state and resets its third widget. */
void btlUiResetWidgetForStateSixteen()
{
    g_btlUi.ui->panelState.state = 16;
    btlUiObjCResetToState27(&g_btlUi.ui->objC);
}

}

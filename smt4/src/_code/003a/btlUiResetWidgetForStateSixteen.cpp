#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;
void FUN_0028bfe4(BtlUiObjC *widget);

/* Switches the battle UI state and resets its third widget. */
void btlUiResetWidgetForStateSixteen()
{
    g_btlUi.ui->panelState.state = 16;
    FUN_0028bfe4(&g_btlUi.ui->objC);
}

}

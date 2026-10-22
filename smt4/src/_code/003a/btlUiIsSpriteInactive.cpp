#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;

/* Returns whether the panel's active flag is clear. */
u8 btlUiIsSpriteInactive(void)
{
    BtlUiPanelState *panel = &g_btlUi.ui->panelState;

    return panel->spriteActive == 0;
}

} /* extern "C" */

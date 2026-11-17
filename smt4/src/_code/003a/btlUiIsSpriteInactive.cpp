#include "battle/BtlUiGlobal.h"

extern "C" {


/* Returns whether the panel's active flag is clear. */
u8 btlUiIsSpriteInactive(void)
{
    BtlUiPanelState *panel = &g_btlUi.ui->panelState;

    return panel->spriteActive == 0;
}

} /* extern "C" */

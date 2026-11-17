#include "battle/BtlUiGlobal.h"

extern "C" {

int FUN_002d0298(void *scene);

/* Clears the panel state when FUN_002d0298 accepts the battle UI's scene; returns its result. */
int poolFieldClearIfAccepted(void)
{
    BtlUi *ui = g_btlUi.ui;
    int result = FUN_002d0298(&ui->objA);

    if (result != 0) {
        ui->panelState.state = 0;
    }
    return result;
}

} /* extern "C" */

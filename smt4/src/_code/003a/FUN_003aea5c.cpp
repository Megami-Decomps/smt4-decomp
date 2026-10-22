#include "battle/btlUI.h"

extern "C" {

extern int FUN_00225220(int block);

extern BtlUiGlobals g_btlUi;

int FUN_003aea5c(void)
{
    BtlUi *target = g_btlUi.ui;
    int result = FUN_00225220(reinterpret_cast<u32>(target) + 8);

    if (result != 0) {
        target->panelState.state = 0;
    }
    return result;
}

} /* extern "C" */

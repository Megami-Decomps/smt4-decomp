#include "battle/btlUI.h"

extern "C" {

s32 gameFlagIsSet(u32 id);
s32 playSceneStateIsActive(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

bool FUN_003adab8(void)
{
    BtlUi *ui = g_btlUi.ui;

    if (ui != NULL && gameFlagIsSet(0x525) == 0 && playSceneStateIsActive(&ui->objC) == 0) {
        if (ui->panelState.state == 0 || ui->panelState.state == 1 || ui->panelState.state == 2 || ui->panelState.state == 7 || ui->panelState.state == 9) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

#include "battle/btlUI.h"

extern "C" {

s32 gameFlagIsSet(u32 id);
s32 playSceneStateIsActive(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

bool FUN_003adab8(void)
{
    BtlUi *ui = g_btlUi.ui;

    if (ui != NULL && gameFlagIsSet(0x525) == 0 && playSceneStateIsActive(&ui->objC) == 0) {
        if (ui->state == 0 || ui->state == 1 || ui->state == 2 || ui->state == 7 || ui->state == 9) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

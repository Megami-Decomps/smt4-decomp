/* Passes the battle UI's state block (objC) on (a tail call), or returns 1 when there is no object. */
#include "battle/BtlUiGlobal.h"

extern "C" {

u32 FUN_0028c600(BtlUiObjC *state);

u32 stateBlockCall(void)
{
    BtlUi *ui = g_btlUi.ui;

    if (ui == NULL) {
        return 1;
    }
    return FUN_0028c600(&ui->objC);
}

}

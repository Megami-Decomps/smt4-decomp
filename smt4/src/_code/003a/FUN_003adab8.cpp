#include "battle/btlUI.h"

extern "C" {

s32 FUN_002c09d0(u32 id);
s32 FUN_002d0058(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

bool FUN_003adab8(void)
{
    BtlUi *ui = DAT_00439c88.ui;

    if (ui != NULL && FUN_002c09d0(0x525) == 0 && FUN_002d0058(&ui->objC) == 0) {
        if (ui->state == 0 || ui->state == 1 || ui->state == 2 || ui->state == 7 || ui->state == 9) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

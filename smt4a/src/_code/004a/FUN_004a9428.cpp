#include "battle/btlUI.h"

extern "C" {

s32 FUN_0018719c(u32 id);
s32 FUN_00336aa4(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

bool FUN_004a9428(void)
{
    BtlUiA *ui = DAT_0057a9b8.ui;

    if (ui != NULL && FUN_0018719c(0x525) == 0 && FUN_00336aa4(&ui->objC) == 0) {
        if (ui->state == 0 || ui->state == 1 || ui->state == 3 || ui->state == 2 || ui->state == 0xB ||
            ui->state == 0xD) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

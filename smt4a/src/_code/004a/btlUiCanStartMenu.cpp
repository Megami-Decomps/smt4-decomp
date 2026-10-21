#include "battle/btlUI.h"

extern "C" {

s32 gameFlagIsSet(u32 id);
s32 menu32State387CIs345(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

bool btlUiCanStartMenu(void)
{
    BtlUiA *ui = g_btlUi.ui;

    if (ui != NULL && gameFlagIsSet(0x525) == 0 && menu32State387CIs345(&ui->objC) == 0) {
        if (ui->state == 0 || ui->state == 1 || ui->state == 3 || ui->state == 2 || ui->state == 0xB ||
            ui->state == 0xD) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

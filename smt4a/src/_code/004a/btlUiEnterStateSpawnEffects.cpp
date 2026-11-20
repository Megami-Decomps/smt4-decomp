#include "battle/BtlUiGlobal.h"

extern "C" {

void menu32InitBlock368(BtlUiObjBA *obj);


void btlUiEnterStateSpawnEffects(void)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->state = 5;
    menu32InitBlock368(&ui->objB);
}

} /* extern "C" */

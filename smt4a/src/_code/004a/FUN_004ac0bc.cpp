#include "battle/BtlUiGlobal.h"

extern "C" {

void slotCountdownTick(BtlUiObjCA *obj);


void FUN_004ac0bc(void)
{
    slotCountdownTick(&g_btlUi.ui->objC);
}

} /* extern "C" */

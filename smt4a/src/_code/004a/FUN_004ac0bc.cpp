#include "battle/btlUI.h"

extern "C" {

void slotCountdownTick(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004ac0bc(void)
{
    slotCountdownTick(&g_btlUi.ui->objC);
}

} /* extern "C" */

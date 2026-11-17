#include "battle/BtlUiGlobal.h"

extern "C" {

void uiSceneGetActiveState(BtlUiObjCA *obj);


void btlUiGetActiveState(void)
{
    uiSceneGetActiveState(&g_btlUi.ui->objC);
}

} /* extern "C" */

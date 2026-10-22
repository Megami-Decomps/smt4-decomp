#include "battle/btlUI.h"

extern "C" {

void uiSceneGetActiveState(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void btlUiGetActiveState(void)
{
    uiSceneGetActiveState(&g_btlUi.ui->objC);
}

} /* extern "C" */

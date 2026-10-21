#include "battle/btlUI.h"

extern "C" {

void uiSceneGetActiveState(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abe14(void)
{
    uiSceneGetActiveState(&g_btlUi.ui->objC);
}

} /* extern "C" */

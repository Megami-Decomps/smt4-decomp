#include "battle/btlUI.h"

extern "C" {

void uiSceneHasSelection(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa7b0(void)
{
    uiSceneHasSelection(&g_btlUi.ui->objC);
}

} /* extern "C" */

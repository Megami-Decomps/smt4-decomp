#include "battle/btlUI.h"

extern "C" {

void uiSceneHasSelection(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void btlUiHasSelection(void)
{
    uiSceneHasSelection(&g_btlUi.ui->objC);
}

} /* extern "C" */

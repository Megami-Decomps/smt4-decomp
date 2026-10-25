#include "battle/btlUI.h"
#include "battle/btlUnit.h"

extern "C" {

void uiSceneHasSelection(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

s32 btlUiHasSelection(void *arg0)
{
    uiSceneHasSelection(&g_btlUi.ui->objC);
}

} /* extern "C" */

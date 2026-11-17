#include "battle/BtlUiGlobal.h"
#include "battle/btlUnit.h"

extern "C" {

void uiSceneHasSelection(BtlUiObjCA *obj);


s32 btlUiHasSelection(void *arg0)
{
    uiSceneHasSelection(&g_btlUi.ui->objC);
}

} /* extern "C" */

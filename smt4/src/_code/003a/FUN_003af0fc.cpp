#include "battle/btlUI.h"

extern "C" {

s32 playSceneIsFadeInDone(BtlUiObjA *obj);
s32 FUN_0031f524(BtlUiObjB *obj);

extern BtlUiGlobals g_btlUi;

bool FUN_003af0fc(void)
{
    BtlUi *ui = g_btlUi.ui;

    return playSceneIsFadeInDone(&ui->objA) != 0 && FUN_0031f524(&ui->objB) != 0;
}

} /* extern "C" */

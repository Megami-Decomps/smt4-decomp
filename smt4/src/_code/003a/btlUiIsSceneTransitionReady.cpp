#include "battle/BtlUiGlobal.h"

extern "C" {

s32 playSceneIsFadeInDone(BtlUiObjA *obj);
s32 btlUiTargetIsSpriteComplete(BtlUiObjB *obj);


bool btlUiIsSceneTransitionReady(void)
{
    BtlUi *ui = g_btlUi.ui;

    return playSceneIsFadeInDone(&ui->objA) != 0 && btlUiTargetIsSpriteComplete(&ui->objB) != 0;
}

} /* extern "C" */

#include "battle/BtlUiGlobal.h"
extern "C" {
s32 playSceneIsFadeInDone(void *scene);
s32 btlSceneIsReady(void)
{
    BtlUi *ui = g_btlUi.ui;
    if (playSceneIsFadeInDone(&ui->objA) != 0 && recordQueryStateThree(&ui->objB) != 0) { return 1; }
    return 0;
}
}

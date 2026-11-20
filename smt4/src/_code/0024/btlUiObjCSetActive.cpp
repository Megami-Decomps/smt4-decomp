#include "battle/BtlUiGlobal.h"
#include "code/Code0024.h"

extern "C" {

void playSceneSetUiActive(BtlUiObjC *obj, u8 value);


void btlUiObjCSetActive(void *block, u8 value)
{
    playSceneSetUiActive(&g_btlUi.ui->objC, value);
}

} /* extern "C" */

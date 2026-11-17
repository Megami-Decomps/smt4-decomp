#include "battle/BtlUiGlobal.h"

extern "C" {

void actorCardAnimationReset(BtlUiObjCA *obj);


void FUN_004aa008(void)
{
    actorCardAnimationReset(&g_btlUi.ui->objC);
}

} /* extern "C" */

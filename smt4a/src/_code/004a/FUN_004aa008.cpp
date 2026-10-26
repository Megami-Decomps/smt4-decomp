#include "battle/btlUI.h"

extern "C" {

void actorCardAnimationReset(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa008(void)
{
    actorCardAnimationReset(&g_btlUi.ui->objC);
}

} /* extern "C" */

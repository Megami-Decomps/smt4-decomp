#include "battle/BtlUiGlobal.h"
extern "C" {
void FUN_0028fce8(BtlUiObjAA *obj,s32 firstDelta,s32 secondDelta);
/* Selects the battle turn-icon panel and forwards both requested changes. */
void FUN_004a9a50(void *unused,s32 firstDelta,s32 secondDelta)
{
    FUN_0028fce8(&g_btlUi.ui->objA,firstDelta,secondDelta);
}
}

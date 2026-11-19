#include "battle/BtlUiGlobal.h"
#include "battle/BtlUiObjCQuery.h"

/* Tests the card in the globally active battle UI. */
extern "C" bool FUN_004aa768(BtlUiA *, s32 index)
{
    return btlActorCardIsIdle(reinterpret_cast<const ActorCardAnimationsA *>(&g_btlUi.ui->objC), index);
}

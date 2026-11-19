#include "battle/BtlUiGlobal.h"
#include "battle/ActorCardAnimationApi.h"

/* The UI argument is ignored; the module global owns these five animation states. */
extern "C" s32 FUN_003ae838(BtlUi *, s32 slot)
{
    return btlActorCardIsIdle(reinterpret_cast<ActorCardAnimations *>(&g_btlUi.ui->objC), slot);
}

#include "battle/BtlUiGlobal.h"
#include "battle/ActorCardAnimationApi.h"

/* The UI argument is ignored; the module global owns these five animation states. */
extern "C" void FUN_003ae574(BtlUi *, s32 slot)
{
    return FUN_001f4e54(reinterpret_cast<ActorCardAnimations *>(&g_btlUi.ui->objC), slot);
}

#include "status/StatusMenuMode.h"
#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {
u32 FUN_00334044();

// Clamp the selection to the last entry, update the display, and clear refresh.
void FUN_00372048(s32 index)
{
    ObjB* session = g_gameGlobals.instance;
    if (index < (s32)FUN_00334044())
        session->unk1374 = index;
    else
        session->unk1374 = FUN_00334044() - 1;
    gameTransitionStartStep();
    session->mode = 0;
}
}

#include "shard/Shard0033.h"

extern "C" {
extern ObjBRef g_gameGlobals;
u32 FUN_00334044();
void FUN_0021af2c(void);

// Clamp the selection to the last entry, update the display, and clear refresh.
void FUN_00372048(s32 index)
{
    ObjB* session = g_gameGlobals.instance;
    if (index < (s32)FUN_00334044())
        session->unk1374 = index;
    else
        session->unk1374 = FUN_00334044() - 1;
    FUN_0021af2c();
    session->unk2014 = 0;
}
}

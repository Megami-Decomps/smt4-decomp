#include "shard/Obj43da28.h"

extern "C" {

extern int scrScriptProcessStartEntry(u32 a, u32 b);

u8 FUN_00210ce0(u32 value)
{
    return scrScriptProcessStartEntry(g_buttonHelp.obj->unk560, value) != 0;
}

} /* extern "C" */

#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

u8 FUN_0035dbb0(void)
{
    return g_gameGlobals.instance->unk20AD == 0;
}

} /* extern "C" */

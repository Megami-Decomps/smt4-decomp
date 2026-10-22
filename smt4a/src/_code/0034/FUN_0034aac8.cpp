#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_0034aac8(u8 value)
{
    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk20B1 = value;
    }
}

} /* extern "C" */

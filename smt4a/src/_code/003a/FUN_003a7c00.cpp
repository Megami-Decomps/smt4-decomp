#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_003a7c00(u8 value)
{
    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk20F0 = value;
    }
}

} /* extern "C" */

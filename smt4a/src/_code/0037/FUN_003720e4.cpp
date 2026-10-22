#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_003720e4(u8 value)
{
    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk2016 = value;
    }
}

} /* extern "C" */

#include "shard/Shard003B.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_003b076c(u32 value)
{
    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk1930 = value;
    }
}

} /* extern "C" */

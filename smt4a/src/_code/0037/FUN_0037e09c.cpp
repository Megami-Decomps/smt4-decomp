#include "shard/Shard0033.h"
#include "util/FUN_002c7e24.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_0037e09c(u8 value)
{
    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk2025 = value;
    }
}

} /* extern "C" */

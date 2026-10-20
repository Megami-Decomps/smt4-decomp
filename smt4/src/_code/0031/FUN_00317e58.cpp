#include "shard/GameGlobals.h"

extern "C" {

void FUN_00317e58(u32 value)
{
    if (g_gameGlobals.data != NULL) {
        g_gameGlobals.data->unk1898 = value;
    }
}

} /* extern "C" */

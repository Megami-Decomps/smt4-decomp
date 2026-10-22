#include "shard/GameGlobals.h"

extern "C" {


void FUN_0026b5a8(u8 value)
{
    if (g_gameGlobals.data != NULL) {
        g_gameGlobals.data->unk1EB9 = value;
    }
}

} /* extern "C" */

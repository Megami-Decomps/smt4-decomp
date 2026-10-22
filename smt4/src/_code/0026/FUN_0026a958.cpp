#include "shard/GameGlobals.h"

extern "C" {


void FUN_0026a958(u8 value)
{
    if (g_gameGlobals.data != NULL) {
        g_gameGlobals.data->unk1E71 = value;
    }
}

} /* extern "C" */

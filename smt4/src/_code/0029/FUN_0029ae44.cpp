#include "shard/GameGlobals.h"


extern "C" {
/* Reads or forwards the current state. */

s32 FUN_0029ae44(void)
{
    return g_gameGlobals.data != NULL ? g_gameGlobals.data->unk12EC : 0;
}
}

#include "shard/GameGlobals.h"

extern "C" {

/* Reads the current signed status byte. */
s32 FUN_0029dfa8(void)
{
    return g_gameGlobals.data->unk1E60;
}
}

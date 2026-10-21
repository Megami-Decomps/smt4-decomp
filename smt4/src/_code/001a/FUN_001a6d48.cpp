#include "shard/GameGlobals.h"

extern "C" {

/* Reports whether the game's active-state word is clear. */
bool FUN_001a6d48(void)
{
    return g_gameGlobals.data->unk12DC == 0;
}

} /* extern "C" */

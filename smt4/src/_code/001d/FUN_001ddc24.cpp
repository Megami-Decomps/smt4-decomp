#include "shard/GameGlobals.h"

extern "C" {

/* Reports whether the game's active-state word is eight. */
bool FUN_001ddc24(void)
{
    return g_gameGlobals.data->unk12DC == 8;
}

} /* extern "C" */

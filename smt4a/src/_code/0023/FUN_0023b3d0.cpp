#include "shard/Shard0033.h"
#include "util/CalleeContracts.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Returns whether the game state is neither 2 nor 1. */
u8 FUN_0023b3d0(void)
{
    return g_gameGlobals.instance->activeState != 2 && g_gameGlobals.instance->activeState != 1;
}

} /* extern "C" */

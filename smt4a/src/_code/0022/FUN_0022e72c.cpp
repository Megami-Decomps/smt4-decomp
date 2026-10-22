#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Returns whether the game state is 0. */
u8 FUN_0022e72c(void)
{
    return g_gameGlobals.instance->activeState == 0;
}

} /* extern "C" */

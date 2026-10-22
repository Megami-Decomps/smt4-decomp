#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Returns whether the game state is 9. */
u8 FUN_002857dc(void)
{
    return g_gameGlobals.instance->activeState == 9;
}

} /* extern "C" */

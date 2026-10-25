#include "shard/Shard0033.h"
#include "event/2dEvent/SmokeFade.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Returns whether the game state is 4. */
u8 FUN_0026c3a0(void)
{
    return g_gameGlobals.instance->activeState == 4;
}

} /* extern "C" */

#include "shard/Shard0033.h"
#include "code/Code0022_Smt4a.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Returns whether the game state is 9. */
u8 FUN_0022e750(void)
{
    return g_gameGlobals.instance->activeState == 9;
}

} /* extern "C" */

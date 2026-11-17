#include "shard/Shard0033.h"
#include "code/Code0028.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns whether the game state is 9. */
u8 FUN_002857dc(void)
{
    return g_gameGlobals.instance->activeState == 9;
}

} /* extern "C" */

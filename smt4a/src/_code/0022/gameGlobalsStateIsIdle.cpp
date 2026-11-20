#include "shard/Shard0033.h"
#include "network/DataStore/DataStoreMain.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns whether the game state is 0. */
u8 gameGlobalsStateIsIdle(void)
{
    return g_gameGlobals.instance->activeState == 0;
}

} /* extern "C" */

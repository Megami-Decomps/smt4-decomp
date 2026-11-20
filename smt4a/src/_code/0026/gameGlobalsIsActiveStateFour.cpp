#include "shard/Shard0033.h"
#include "event/2dEvent/SmokeFade.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns whether the game state is 4. */
u8 gameGlobalsIsActiveStateFour(void)
{
    return g_gameGlobals.instance->activeState == 4;
}

} /* extern "C" */

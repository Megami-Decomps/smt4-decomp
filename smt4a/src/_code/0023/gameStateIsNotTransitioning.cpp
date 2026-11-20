#include "shard/Shard0033.h"
#include "event/2dEvent/SmokeFade.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns whether the game state is neither 2 nor 1. */
u8 gameStateIsNotTransitioning(void)
{
    return g_gameGlobals.instance->activeState != 2 && g_gameGlobals.instance->activeState != 1;
}

} /* extern "C" */

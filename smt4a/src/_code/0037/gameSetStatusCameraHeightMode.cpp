#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void gameSetStatusCameraHeightMode(u8 value)
{
    g_gameGlobals.instance->statusCameraHeightMode = value;
}

} /* extern "C" */

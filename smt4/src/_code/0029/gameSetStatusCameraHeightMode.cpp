#include "shard/GameGlobals.h"

extern "C" {

void gameSetStatusCameraHeightMode(u8 value)
{
    g_gameGlobals.data->statusCameraHeightMode = value;
}

} /* extern "C" */

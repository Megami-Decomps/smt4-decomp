#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void gameSetStatusCameraHeightMode(u8 value)
{
    g_gameGlobals.instance->statusCameraHeightMode = value;
}

} /* extern "C" */

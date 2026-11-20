#include "shard/GameGlobals.h"
#include "status/StatusCamera.h"

extern "C" {

void gameGlobalsSetSubScreenActive(u8 value)
{
    if (g_gameGlobals.data != NULL) {
        g_gameGlobals.data->unk1E64 = value;
    }
}

} /* extern "C" */

#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void FUN_00371f18(void)
{
    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk20D1 = 0;
    }
}

} /* extern "C" */

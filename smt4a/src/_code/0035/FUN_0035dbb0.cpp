#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

u8 FUN_0035dbb0(void)
{
    return g_gameGlobals.instance->unk20AD == 0;
}

} /* extern "C" */

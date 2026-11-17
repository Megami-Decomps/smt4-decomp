#include "shard/Shard0033.h"
#include "event/2dEvent/SmokeFade.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the byte at 0x2017 of the game record. */
u8 FUN_002c7e3c(void)
{
    return g_gameGlobals.instance->unk2017;
}

} /* extern "C" */

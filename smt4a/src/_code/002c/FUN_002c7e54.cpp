#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the byte at 0x2018 of the game record. */
u8 FUN_002c7e54(void)
{
    return g_gameGlobals.instance->unk2018;
}

} /* extern "C" */

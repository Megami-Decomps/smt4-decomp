#include "shard/Shard0033.h"
#include "code/Code0023.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the word at 0x1374 of the game record. */
u32 FUN_0023b3b8(void)
{
    return g_gameGlobals.instance->unk1374;
}

} /* extern "C" */

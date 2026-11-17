#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the low byte, sign-extended, of the word at offset 0x1378 of the global state block. */
int FUN_0035db94(void)
{
    return (s8)g_gameGlobals.instance->unk1378;
}

} /* extern "C" */

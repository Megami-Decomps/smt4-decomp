#include "shard/Shard0033.h"
#include "shard/FUN_0023b3b8.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Returns the word at 0x1374 of the game record. */
u32 FUN_0023b3b8(void)
{
    return g_gameGlobals.instance->unk1374;
}

} /* extern "C" */

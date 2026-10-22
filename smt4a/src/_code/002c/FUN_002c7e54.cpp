#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Returns the byte at 0x2018 of the game record. */
u8 FUN_002c7e54(void)
{
    return g_gameGlobals.instance->unk2018;
}

} /* extern "C" */

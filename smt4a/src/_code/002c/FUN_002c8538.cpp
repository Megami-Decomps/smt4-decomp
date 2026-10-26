#include "shard/Shard0033.h"
#include "code/Code002c.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Stores `value` in the byte at 0x2012 of the game record. */
void FUN_002c8538(u8 value)
{
    g_gameGlobals.instance->unk2012 = value;
}

} /* extern "C" */

#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

/* Returns the low byte, sign-extended, of the word at offset 0x1378 of the global state block. */
int FUN_0035db94(void)
{
    return (s8)g_gameGlobals.instance->unk1378;
}

} /* extern "C" */

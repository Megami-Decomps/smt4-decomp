#include "shard/Shard0033.h"
#include "code/Code002c.h"
#include "code/Code0037.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Returns the address of the member at 0x1390 of the game record. */
u8 *FUN_002c7e24(void)
{
    return g_gameGlobals.instance->block1390;
}

} /* extern "C" */

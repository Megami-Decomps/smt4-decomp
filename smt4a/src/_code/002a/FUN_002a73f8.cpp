/* Returns the signed byte at +0x2012 of the object the global points to. */
#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

s32 FUN_002a73f8(void)
{
    return g_gameGlobals.instance->unk2012;
}

}

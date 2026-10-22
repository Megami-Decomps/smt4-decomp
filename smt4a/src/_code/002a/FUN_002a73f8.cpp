/* Returns the signed byte at +0x2012 of the object the global points to. */
#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

s32 FUN_002a73f8(void)
{
    return g_gameGlobals.instance->unk2012;
}

}

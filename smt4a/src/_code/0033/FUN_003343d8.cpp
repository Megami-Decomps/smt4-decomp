#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_003343d8(u8 value)
{
    g_gameGlobals.instance->unk137E = value;
}

} /* extern "C" */

#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_003343c0(u8 value)
{
    g_gameGlobals.instance->unk20B0 = value;
}

} /* extern "C" */

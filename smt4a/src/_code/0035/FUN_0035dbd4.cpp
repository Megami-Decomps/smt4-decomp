#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;
extern void FUN_0038b548(u32 value);

void FUN_0035dbd4(u32 value)
{
    g_gameGlobals.instance->unk1381 = value;
    FUN_0038b548(value ^ 1);
}

} /* extern "C" */

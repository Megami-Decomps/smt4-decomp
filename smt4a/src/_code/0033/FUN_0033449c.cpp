#include "shard/Shard0033.h"
#include "util/FUN_0033449c.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_0033449c(u8 value)
{
    g_gameGlobals.instance->unk2013 = value;
}

} /* extern "C" */

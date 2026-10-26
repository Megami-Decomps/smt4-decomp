#include "shard/Shard0033.h"
#include "code/Code0033.h"
#include "shard/Shard004A.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_003343f0(u8 value)
{
    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk2015 = value;
    }
}

} /* extern "C" */

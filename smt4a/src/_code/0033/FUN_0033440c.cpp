#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void FUN_0033440c(u32 value)
{
    ObjB *obj = g_gameGlobals.instance;

    if (obj != NULL) {
        obj->unk20A8 = value;
        obj->unk20AC = 0;
    }
}

} /* extern "C" */

#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void FUN_003344b4(u32 a, u32 b)
{
    ObjB *obj = g_gameGlobals.instance;

    obj->unk201C = a;
    obj->unk2020 = b;
}

} /* extern "C" */

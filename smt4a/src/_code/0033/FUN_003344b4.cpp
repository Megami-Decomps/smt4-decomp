#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

void FUN_003344b4(u32 a, u32 b)
{
    ObjB *obj = DAT_00588fd0.instance;

    obj->unk201C = a;
    obj->unk2020 = b;
}

} /* extern "C" */

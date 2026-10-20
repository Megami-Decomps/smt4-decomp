#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

void FUN_0033440c(u32 value)
{
    ObjB *obj = DAT_00588fd0.instance;

    if (obj != NULL) {
        obj->unk20A8 = value;
        obj->unk20AC = 0;
    }
}

} /* extern "C" */

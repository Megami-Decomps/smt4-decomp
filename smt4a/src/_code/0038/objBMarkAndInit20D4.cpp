#include "shard/Shard0038.h"

extern "C" {

extern ObjBRef DAT_00588fd0;
extern void FUN_003e4140(u8 *dest);

void objBMarkAndInit20D4(void)
{
    ObjB *obj = DAT_00588fd0.instance;

    if (DAT_00588fd0.instance != NULL) {
        DAT_00588fd0.instance->unk20D1 = 1;
        FUN_003e4140(obj->block20D4);
    }
}

} /* extern "C" */

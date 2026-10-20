#include "shard/Shard0035.h"

extern "C" {

extern ObjBRef DAT_00588fd0;
extern void FUN_001846d0(u8 *block, s32 value);

void objBInitBlocks274300(void)
{
    ObjB *obj = DAT_00588fd0.instance;

    obj->unk20AD = 1;
    FUN_001846d0(obj->block274, 7);
    FUN_001846d0(obj->block300, 8);
}

} /* extern "C" */

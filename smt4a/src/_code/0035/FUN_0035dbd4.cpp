#include "shard/Shard0035.h"

extern "C" {

extern ObjBRef DAT_00588fd0;
extern void FUN_0038b548(u32 value);

void FUN_0035dbd4(u32 value)
{
    DAT_00588fd0.instance->unk1381 = value;
    FUN_0038b548(value ^ 1);
}

} /* extern "C" */

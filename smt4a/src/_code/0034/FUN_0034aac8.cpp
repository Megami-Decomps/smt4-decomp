#include "shard/Shard0034.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

void FUN_0034aac8(u8 value)
{
    if (DAT_00588fd0.instance != NULL) {
        DAT_00588fd0.instance->unk20B1 = value;
    }
}

} /* extern "C" */

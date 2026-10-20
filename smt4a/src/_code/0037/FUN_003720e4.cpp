#include "shard/Shard0037.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

void FUN_003720e4(u8 value)
{
    if (DAT_00588fd0.instance != NULL) {
        DAT_00588fd0.instance->unk2016 = value;
    }
}

} /* extern "C" */

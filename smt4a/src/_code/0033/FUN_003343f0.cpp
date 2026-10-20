#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

void FUN_003343f0(u8 value)
{
    if (DAT_00588fd0.instance != NULL) {
        DAT_00588fd0.instance->unk2015 = value;
    }
}

} /* extern "C" */

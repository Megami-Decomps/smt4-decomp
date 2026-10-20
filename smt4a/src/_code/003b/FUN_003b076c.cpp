#include "shard/Shard003B.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

void FUN_003b076c(u32 value)
{
    if (DAT_00588fd0.instance != NULL) {
        DAT_00588fd0.instance->unk1930 = value;
    }
}

} /* extern "C" */

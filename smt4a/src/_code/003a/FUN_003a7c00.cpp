#include "shard/Shard003A.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

void FUN_003a7c00(u8 value)
{
    if (DAT_00588fd0.instance != NULL) {
        DAT_00588fd0.instance->unk20F0 = value;
    }
}

} /* extern "C" */

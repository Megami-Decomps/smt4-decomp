#include "shard/Shard0035.h"

extern "C" {

extern ObjBRef DAT_00588fd0;
extern void FUN_00184758(u8 *block, s32 a, s32 b);

void objBInitBlock12DC5(void)
{
    FUN_00184758(DAT_00588fd0.instance->block12DC, 5, 0);
}

} /* extern "C" */

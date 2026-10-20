#include "shard/Shard0034.h"

extern "C" {

extern ObjBRef DAT_00588fd0;
extern void FUN_00184758(u8 *block, s32 a, s32 b);

void objBInitBlock12DC(void)
{
    FUN_00184758(DAT_00588fd0.instance->block12DC, 0xF, 0);
}

} /* extern "C" */

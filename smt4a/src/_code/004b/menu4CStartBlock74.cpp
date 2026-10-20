#include "shard/Shard004B.h"

extern "C" {

extern void FUN_004d05c4(u8 *block, u32 a, s32 b, s32 c);

void menu4CStartBlock74(Menu4C *obj)
{
    FUN_004d05c4(obj->block74, 0x1F, 5, 10);
    obj->flag84 = 1;
}

} /* extern "C" */

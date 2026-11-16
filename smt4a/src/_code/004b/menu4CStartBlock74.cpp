#include "shard/Shard004B.h"

extern "C" {

extern void messageIdListSetRange(u8 *block, u32 a, s32 b, s32 c);

void menu4CStartBlock74(Menu4C *obj)
{
    messageIdListSetRange(obj->block74, 0x1F, 5, 10);
    obj->flag84 = 1;
}

} /* extern "C" */

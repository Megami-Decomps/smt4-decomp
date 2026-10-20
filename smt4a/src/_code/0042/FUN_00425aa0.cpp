#include "shard/Shard0042.h"

extern "C" {

extern void svcSleepThread(u32 value, s32 flag);

void FUN_00425aa0(void)
{
    svcSleepThread(500000, 0);
}

} /* extern "C" */

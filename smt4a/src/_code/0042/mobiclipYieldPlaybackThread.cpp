#include "shard/Shard0042.h"

extern "C" {

extern void svcSleepThread(u32 value, s32 flag);

void mobiclipYieldPlaybackThread(void)
{
    svcSleepThread(500000, 0);
}

} /* extern "C" */

#include "shard/Shard0040.h"

extern "C" {

extern Counters *gameGetCounters(void);

u32 countersGetA(s32 index)
{
    return gameGetCounters()->a[index];
}

} /* extern "C" */

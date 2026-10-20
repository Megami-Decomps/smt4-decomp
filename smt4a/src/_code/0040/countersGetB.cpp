#include "shard/Shard0040.h"

extern "C" {

extern Counters *gameGetCounters(void);

u32 countersGetB(s32 index)
{
    return gameGetCounters()->b[index];
}

} /* extern "C" */

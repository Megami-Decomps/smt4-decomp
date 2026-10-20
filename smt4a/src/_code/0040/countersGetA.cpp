#include "shard/Shard0040.h"

extern "C" {

extern Counters *FUN_001bcea0(void);

u32 countersGetA(s32 index)
{
    return FUN_001bcea0()->a[index];
}

} /* extern "C" */

#pragma once
#include "sys/PlatformFault.h"

/* Reports `result` with the caller's program counter when its failure bit is set. */
static __inline void checkPlatformResult(s32 result, u32 location)
{
    u32 failed = static_cast<u32>(result) >> 31;
    if (failed)
        sysReportCheckFailure(result, location, failed);
}

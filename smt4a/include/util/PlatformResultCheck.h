#pragma once
#include "common.h"

/* The platform layer's failure report: called with the failed result, the caller's program counter
   and the failure bit (the result's top bit). */
extern "C" void FUN_0016e800(s32 result, u32 location, u32 failed);

/* Reports `result` with the caller's program counter when its failure bit is set. */
static __inline void checkPlatformResult(s32 result, u32 location)
{
    u32 failed = static_cast<u32>(result) >> 31;
    if (failed)
        FUN_0016e800(result, location, failed);
}

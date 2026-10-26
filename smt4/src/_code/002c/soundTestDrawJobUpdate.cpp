#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

/* Job callback that only reaches a debug hook the release build removed. */
u32 soundTestDrawJobUpdate(u32 job)
{
    asdDebugHookVoid();
    return 0;
}

} /* extern "C" */

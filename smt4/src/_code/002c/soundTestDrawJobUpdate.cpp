#include "sound/SoundTestWork.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

/* Job callback that only reaches a debug hook the release build removed. */
s32 soundTestDrawJobUpdate(u32)
{
    asdDebugHookVoid();
    return 0;
}

} /* extern "C" */

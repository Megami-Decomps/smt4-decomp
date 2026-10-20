#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

/* Release-build stub: a tail call to a debug hook that was never linked. */
void FUN_0030cb88(void)
{
    asdDebugHookVoid();
}

} /* extern "C" */

#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

/* Release-build stub: a tail call to a debug hook that was never linked. */
void _ZN9Obj55ae00D1Ev(void)
{
    asdDebugHookVoid();
}

} /* extern "C" */

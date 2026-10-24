#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
u32 scrGetArgString(u32 index);
int sequenceRequestDeferEx(u32 a, u32 b);

/* Script command: requests a deferred sequence from its two arguments. */
u32 scrComm_Sequence_RequestDeferred(void)
{
    u32 name = scrGetArgString(1);

    sequenceRequestDeferEx(scrGetArg(0), name);
    return 1;
}

} /* extern "C" */

#include "common.h"

extern "C" {

void sequenceRequestFlushDeferred(void);
void sequenceRequestDeferEx(u32 a, u32 b);
u32 scrGetArg(s32 index);
u32 scrGetArgString(void);

/* Script command: passes scrGetArgString's result and script argument 0 to sequenceRequestDeferEx, runs sequenceRequestFlushDeferred and returns 3. */
u32 FUN_002c2070(void)
{
    u32 value;
    u32 arg;

    value = scrGetArgString();
    arg = scrGetArg(0);
    sequenceRequestDeferEx(arg, value);
    sequenceRequestFlushDeferred();
    return 3;
}

} /* extern "C" */

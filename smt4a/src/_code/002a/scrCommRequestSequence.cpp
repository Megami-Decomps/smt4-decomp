#include "common.h"

extern "C" {

void sequenceRequestFlushDeferred(void);
void sequenceRequestDefer(u32 a, u32 b);
u32 scrGetArg(...);

/* Script command: passes script argument 0 and the (unindexed) first script argument to sequenceRequestDefer, runs sequenceRequestFlushDeferred and returns 3. */
u32 scrCommRequestSequence(void)
{
    u32 first;
    u32 second;

    first = scrGetArg();
    second = scrGetArg(0);
    sequenceRequestDefer(second, first);
    sequenceRequestFlushDeferred();
    return 3;
}

} /* extern "C" */

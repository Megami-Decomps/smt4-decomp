#include "common.h"

extern "C" {

void sequenceRequestFlushDeferred(void);
void sequenceRequestDefer(u32 a, u32 b);
u32 scrGetArg(u32 index);

/* Script command: passes script arguments 0 and 1 (argument 1 first, then 0 as the second value) to sequenceRequestDefer, runs sequenceRequestFlushDeferred and returns 3. */
u32 scrCommRequestSequence(void)
{
    u32 first;
    u32 second;

    first = scrGetArg(1);
    second = scrGetArg(0);
    sequenceRequestDefer(second, first);
    sequenceRequestFlushDeferred();
    return 3;
}

} /* extern "C" */

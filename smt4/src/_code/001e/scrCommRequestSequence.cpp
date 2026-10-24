#include "common.h"

extern "C" {

int sequenceRequestDefer(u32 a, u32 b);
int sequenceRequestFlushDeferred(void);
int scrGetArg(...);

u32 scrCommRequestSequence(void)
{
    u32 a = scrGetArg(1);
    u32 b = scrGetArg(0);

    sequenceRequestDefer(b, a);
    sequenceRequestFlushDeferred();
    return 2;
}

} /* extern "C" */

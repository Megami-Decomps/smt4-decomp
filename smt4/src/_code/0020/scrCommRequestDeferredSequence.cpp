#include "common.h"

extern "C" {

int sequenceRequestDeferEx(u32 a, u32 b);
int sequenceRequestFlushDeferred(void);
extern u32 scrGetArgString(u32 index);
extern u32 scrGetArg(u32 index);

u32 scrCommRequestDeferredSequence(void)
{
    u32 a = scrGetArgString(1);
    u32 b = scrGetArg(0);

    sequenceRequestDeferEx(b, a);
    sequenceRequestFlushDeferred();
    return 2;
}

} /* extern "C" */

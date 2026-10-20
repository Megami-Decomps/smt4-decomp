#include "common.h"

extern "C" {

int sequenceRequestDeferEx(u32 a, u32 b);
int sequenceRequestFlushDeferred(void);
extern u32 scrGetArgString(void);
extern u32 scrGetArg(u32 index);

u32 FUN_00201454(void)
{
    u32 a = scrGetArgString();
    u32 b = scrGetArg(0);

    sequenceRequestDeferEx(b, a);
    sequenceRequestFlushDeferred();
    return 2;
}

} /* extern "C" */

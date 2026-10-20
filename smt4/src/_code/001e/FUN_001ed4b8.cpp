#include "common.h"

extern "C" {

int sequenceRequestDefer(u32 a, u32 b);
int sequenceRequestFlushDeferred(void);
int scrGetArg(...);

u32 FUN_001ed4b8(void)
{
    u32 a = scrGetArg();
    u32 b = scrGetArg(0);

    sequenceRequestDefer(b, a);
    sequenceRequestFlushDeferred();
    return 2;
}

} /* extern "C" */

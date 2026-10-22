#include "shard/Shard003B.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void aocQueueRequest(u32 a, u32 b);

/* Script command: aocQueueRequest(argN, arg1). */
u32 scrCommAocQueueRequest(s32 argIndex)
{
    u32 a = scrGetArg(argIndex);
    u32 b = scrGetArg(1);

    aocQueueRequest(a, b);
    return 1;
}

} /* extern "C" */

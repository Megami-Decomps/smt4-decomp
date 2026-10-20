#include "shard/Shard003A.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 *jobGetWork(u32 job);
extern void FUN_00153630(u32 a, u32 b, s32 c, s32 d, s32 e);

/* Script command: FUN_00153630 on the first word of job `argument 0`'s work with argument 1. */
u32 FUN_003a6efc(void)
{
    u32 job = scrGetArg(0);
    u32 *work = jobGetWork(job);
    u32 first = *work;
    u32 value = scrGetArg(1);

    FUN_00153630(first, value, 1, 1, 1);
    return 1;
}

} /* extern "C" */

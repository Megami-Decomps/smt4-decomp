#include "shard/Shard0035.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_003024d8(s32 id, u32 arg);

/* Script command: FUN_003024d8 on arguments 0 and 1. */
u32 FUN_0035d010(void)
{
    u32 id = scrGetArg(0);
    u32 arg = scrGetArg(1);

    FUN_003024d8(id, arg);
    return 1;
}

} /* extern "C" */

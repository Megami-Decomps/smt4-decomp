#include "shard/PadState.h"

extern "C" {

int scrSetResult(int result);
extern PadState *FUN_002b63ac(void);

u32 FUN_002dc06c(void)
{
    PadState *pad = FUN_002b63ac();

    scrSetResult((int)pad->unk2A);
    return 1;
}

} /* extern "C" */

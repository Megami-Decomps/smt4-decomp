#include "shard/PadState.h"

extern "C" {

int scrSetResult(int result);
extern PadState *FUN_002b63ac(void);

u32 FUN_002dc084(void)
{
    PadState *pad = FUN_002b63ac();

    scrSetResult(pad->unk76);
    return 1;
}

} /* extern "C" */

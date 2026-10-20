#include "shard/PadState.h"

extern "C" {

int scrSetResult(int result);
extern PadState *FUN_002b63ac(void);

u32 FUN_002f7bf0(void)
{
    PadState *pad = FUN_002b63ac();

    scrSetResult((int)pad->unk1E);
    return 1;
}

} /* extern "C" */

#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);

int FUN_00333fb0(void)
{
    PadState *pad = FUN_002b63ac();

    return pad->unk2C;
}

} /* extern "C" */

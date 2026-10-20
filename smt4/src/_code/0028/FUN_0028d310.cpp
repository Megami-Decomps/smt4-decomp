#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);

int FUN_0028d310(void)
{
    PadState *pad = FUN_002b63ac();

    return pad->unk2A;
}

} /* extern "C" */

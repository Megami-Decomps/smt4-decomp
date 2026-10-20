#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);

int FUN_00334048(void)
{
    PadState *pad = FUN_002b63ac();

    return pad->unk1E;
}

} /* extern "C" */

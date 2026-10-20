#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);

int FUN_00334038(void)
{
    PadState *pad = FUN_002b63ac();

    return pad->unk1C;
}

} /* extern "C" */

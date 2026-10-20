#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);

/* Clears the given bits of the pad's halfword at +0x72. */
void FUN_00262410(u16 mask)
{
    PadState *pad = FUN_002b63ac();

    pad->unk72 = pad->unk72 & ~mask;
}

} /* extern "C" */

#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);

/* Whether bit `bit` of the pad's halfword at +0x72 is set. */
u8 FUN_00295d08(u32 bit)
{
    PadState *pad = FUN_002b63ac();

    return ((u32)pad->unk72 & (1 << (bit & 0xff))) != 0;
}

} /* extern "C" */

#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);

/* Sets bit `bit` of the pad's halfword at +0x72. */
void FUN_00334018(u32 bit)
{
    PadState *pad = FUN_002b63ac();
    u16 value = pad->unk72;

    pad->unk72 = value | (u16)(1 << (bit & 0xff));
}

} /* extern "C" */

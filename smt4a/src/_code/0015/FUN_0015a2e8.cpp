#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns whether the low three bits of the word at 0x18 of the global at 0x5891D8 equal 6. */
u8 FUN_0015a2e8(void)
{
    return (g_nnAppletState.unk18 & 7) == 6;
}

} /* extern "C" */

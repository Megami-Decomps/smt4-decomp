#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the word at 0x18 of the global at 0x5891D8. */
u32 FUN_0015a2d8(void)
{
    return g_nnAppletState.unk18;
}

} /* extern "C" */

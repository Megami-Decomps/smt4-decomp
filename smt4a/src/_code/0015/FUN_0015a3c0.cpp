#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the byte at 0xC of the global at 0x5891D8. */
u8 FUN_0015a3c0(void)
{
    return g_nnAppletState.unk0C;
}

} /* extern "C" */

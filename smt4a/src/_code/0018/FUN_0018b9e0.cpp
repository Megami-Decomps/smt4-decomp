#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the byte at 0x2 of the global at 0x5891D8. */
u8 FUN_0018b9e0(void)
{
    return g_nnAppletState.unk02;
}

} /* extern "C" */

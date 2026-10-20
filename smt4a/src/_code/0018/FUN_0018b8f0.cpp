#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the byte at 0x3 of the global at 0x5891D8. */
u8 FUN_0018b8f0(void)
{
    return g_nnAppletState.unk03;
}

} /* extern "C" */

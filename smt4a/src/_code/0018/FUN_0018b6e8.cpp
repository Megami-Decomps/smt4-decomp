#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the signed byte at 0x7 of the global at 0x5891D8. */
s32 FUN_0018b6e8(void)
{
    return g_nnAppletState.unk07;
}

} /* extern "C" */

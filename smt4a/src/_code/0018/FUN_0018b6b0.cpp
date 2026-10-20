#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the signed byte at 0x8 of the global at 0x5891D8. */
s32 FUN_0018b6b0(void)
{
    return g_nnAppletState.unk08;
}

} /* extern "C" */

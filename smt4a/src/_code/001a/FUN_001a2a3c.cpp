#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the signed byte at 0x2 of the global at 0x5C0AA0. */
s32 FUN_001a2a3c(void)
{
    return g_nngxState.unk02;
}

} /* extern "C" */

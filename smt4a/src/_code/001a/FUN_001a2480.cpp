#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the signed byte at the start of the global at 0x5C0AA0. */
s32 FUN_001a2480(void)
{
    return g_nngxState.unk00;
}

} /* extern "C" */

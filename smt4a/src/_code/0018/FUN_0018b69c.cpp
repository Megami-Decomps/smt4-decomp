#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets the byte at 0x8 of the global at 0x5891D8 to 1. */
void FUN_0018b69c(void)
{
    g_nnAppletState.unk08 = 1;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets the byte at 0x7 of the global at 0x5891D8 to 1. */
void FUN_0018b6d4(void)
{
    g_nnAppletState.unk07 = 1;
}

} /* extern "C" */

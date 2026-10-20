#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets the byte at 0x3 of the global at 0x5891D8 to 0. */
void FUN_0018b92c(void)
{
    g_nnAppletState.unk03 = 0;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets the byte at 0x2 of the global at 0x5891D8 to 0. */
void FUN_0018ba00(void)
{
    g_nnAppletState.unk02 = 0;
}

} /* extern "C" */

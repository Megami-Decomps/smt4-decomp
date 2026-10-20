#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets the byte at 0x9 of the global at 0x5891D8. */
void FUN_00170a20(void)
{
    g_nnAppletState.unk09 = 1;
}

} /* extern "C" */

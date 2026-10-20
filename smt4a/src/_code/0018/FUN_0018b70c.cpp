#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the word at 0x14 of the global at 0x5891D8. */
u32 FUN_0018b70c(void)
{
    return g_nnAppletState.unk14;
}

} /* extern "C" */

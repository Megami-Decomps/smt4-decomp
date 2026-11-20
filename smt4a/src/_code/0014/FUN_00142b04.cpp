#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the word at 0x4 of the global block at 0x5B40B4. */
u32 FUN_00142b04(void)
{
    return g_processResultState.unk04;
}

} /* extern "C" */

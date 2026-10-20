#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the word at 0x4 of the global at 0x5C0AC8. */
u32 FUN_00188c94(void)
{
    return g_nnosHeapState.unk04;
}

} /* extern "C" */

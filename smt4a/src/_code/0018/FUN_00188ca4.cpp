#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the first word of the global at 0x5C0AC8. */
u32 FUN_00188ca4(void)
{
    return g_nnosHeapState.unk00;
}

} /* extern "C" */

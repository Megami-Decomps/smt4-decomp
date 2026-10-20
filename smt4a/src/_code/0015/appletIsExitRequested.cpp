#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the byte at 0x6 of the global at 0x5891D8. */
u8 appletIsExitRequested(void)
{
    return g_nnAppletState.unk06;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the byte at 0xB of the global at 0x5891D8. */
u8 FUN_0015a420(void)
{
    return g_nnAppletState.unk0B;
}

} /* extern "C" */

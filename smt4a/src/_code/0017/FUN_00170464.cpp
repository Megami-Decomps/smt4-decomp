#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the byte at 0xA of the global at 0x5891D8. */
u8 FUN_00170464(void)
{
    return g_nnAppletState.unk0A;
}

} /* extern "C" */

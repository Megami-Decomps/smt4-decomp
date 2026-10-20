#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the signed byte at 0xD of the global at 0x5891D8. */
s32 FUN_0015a430(void)
{
    return g_nnAppletState.unk0D;
}

} /* extern "C" */

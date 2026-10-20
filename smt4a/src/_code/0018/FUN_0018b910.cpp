#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x3 of the global at 0x5891D8. */
void FUN_0018b910(u8 value)
{
    g_nnAppletState.unk03 = value;
}

} /* extern "C" */

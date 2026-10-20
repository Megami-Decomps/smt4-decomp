#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0xC of the global at 0x5891D8. */
void FUN_0015a400(u8 value)
{
    g_nnAppletState.unk0C = value;
}

} /* extern "C" */

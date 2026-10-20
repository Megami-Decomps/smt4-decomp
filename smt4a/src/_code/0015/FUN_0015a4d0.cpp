#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x14 of the global at 0x5891D8. */
void FUN_0015a4d0(u32 value)
{
    g_nnAppletState.unk14 = value;
}

} /* extern "C" */

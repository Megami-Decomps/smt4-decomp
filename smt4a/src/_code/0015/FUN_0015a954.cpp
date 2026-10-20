#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x4 of the global at 0x5B4474. */
void FUN_0015a954(u32 value)
{
    g_nnAppletParameter.unk04 = value;
}

} /* extern "C" */

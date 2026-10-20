#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x8 of the global at 0x5B4474. */
void FUN_0015a5b0(u32 value)
{
    g_nnAppletParameter.unk08 = value;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x1 of the global at 0x5B4474. */
void FUN_0015a78c(u8 value)
{
    g_nnAppletParameter.unk01 = value;
}

} /* extern "C" */

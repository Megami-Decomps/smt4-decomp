#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x20 of the global block at 0x005b3d54. */
void FUN_0013f52c(u32 value)
{
    g_asdTextDefaults.unk20 = value;
}

} /* extern "C" */

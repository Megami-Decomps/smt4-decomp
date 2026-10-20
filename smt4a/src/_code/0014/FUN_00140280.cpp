#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x14 of the global block at 0x005b3d54. */
void FUN_00140280(u32 value)
{
    g_asdTextDefaults.unk14 = value;
}

} /* extern "C" */

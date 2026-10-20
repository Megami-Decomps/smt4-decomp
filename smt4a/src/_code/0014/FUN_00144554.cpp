#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x10 of the global block at 0x005b3d54. */
void FUN_00144554(u32 value)
{
    DAT_005b3d54.unk10 = value;
}

} /* extern "C" */

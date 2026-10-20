#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x18 of the global block at 0x005b3d54. */
void FUN_001418ec(u32 value)
{
    DAT_005b3d54.unk18 = value;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x6 of the global at 0x5891D8. */
void FUN_001713e8(u8 value)
{
    DAT_005891d8.unk06 = value;
}

} /* extern "C" */

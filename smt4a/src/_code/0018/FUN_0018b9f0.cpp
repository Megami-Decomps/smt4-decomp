#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x2 of the global at 0x5891D8. */
void FUN_0018b9f0(u8 value)
{
    DAT_005891d8.unk02 = value;
}

} /* extern "C" */

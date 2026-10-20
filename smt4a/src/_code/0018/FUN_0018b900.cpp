#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x4 of the global at 0x5891D8. */
void FUN_0018b900(u8 value)
{
    DAT_005891d8.unk04 = value;
}

} /* extern "C" */

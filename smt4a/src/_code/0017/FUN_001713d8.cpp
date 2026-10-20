#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x5 of the global at 0x5891D8. */
void FUN_001713d8(u8 value)
{
    DAT_005891d8.unk05 = value;
}

} /* extern "C" */

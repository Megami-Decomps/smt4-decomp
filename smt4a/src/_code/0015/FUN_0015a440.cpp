#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0xD of the global at 0x5891D8. */
void FUN_0015a440(u8 value)
{
    DAT_005891d8.unk0D = value;
}

} /* extern "C" */

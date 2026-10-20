#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0xB of the global at 0x5891D8. */
void FUN_00170484(u8 value)
{
    DAT_005891d8.unk0B = value;
}

} /* extern "C" */

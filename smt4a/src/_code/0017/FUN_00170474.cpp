#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0xA of the global at 0x5891D8. */
void FUN_00170474(u8 value)
{
    DAT_005891d8.unk0A = value;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x1E5 of the global at 0x61978C. */
void FUN_0013dee0(u8 value)
{
    DAT_0061978c.unk1E5 = value;
}

} /* extern "C" */

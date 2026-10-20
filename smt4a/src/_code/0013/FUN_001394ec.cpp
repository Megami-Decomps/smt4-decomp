#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0xC of the global block at 0x5B4000 unless it is 0; returns whether it was stored. */
u8 FUN_001394ec(s32 value)
{
    if (value != 0) {
        DAT_005b4000.unk0C = value;
    }
    return value != 0;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x10 of the global block at 0x5B4000 unless it is 0; returns whether it was stored. */
u8 FUN_001389ec(s32 value)
{
    if (value != 0) {
        g_padInputState.unk10 = value;
    }
    return value != 0;
}

} /* extern "C" */

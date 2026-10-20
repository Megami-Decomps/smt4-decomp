#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x8 of the global at 0x5B4464 unless it is already set. */
void FUN_0018b850(s32 value)
{
    if (DAT_005b4464.unk08 == 0) {
        DAT_005b4464.unk08 = value;
    }
}

} /* extern "C" */

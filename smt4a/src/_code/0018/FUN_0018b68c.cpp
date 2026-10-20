#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x10 of the global at 0x5891D8. */
void FUN_0018b68c(u32 value)
{
    DAT_005891d8.unk10 = value;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the word at 0x18 of the global at 0x5891D8. */
void FUN_0015a308(u32 value)
{
    DAT_005891d8.unk18 = value;
}

} /* extern "C" */

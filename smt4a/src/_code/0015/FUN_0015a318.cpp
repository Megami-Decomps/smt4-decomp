#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the low three bits of the word at 0x18 of the global at 0x5891D8. */
u32 FUN_0015a318(void)
{
    return DAT_005891d8.unk18 & 7;
}

} /* extern "C" */

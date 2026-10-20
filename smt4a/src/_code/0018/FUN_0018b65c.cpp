#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns whether the low three bits of the word at 0x18 of the global at 0x5891D8 equal 2. */
u8 FUN_0018b65c(void)
{
    return (DAT_005891d8.unk18 & 7) == 2;
}

} /* extern "C" */

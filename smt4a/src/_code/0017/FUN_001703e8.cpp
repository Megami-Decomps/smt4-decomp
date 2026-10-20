#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns whether the low three bits of the word at 0x18 of the global at 0x5891D8 are 0. */
u8 FUN_001703e8(void)
{
    return (DAT_005891d8.unk18 & 7) == 0;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the word at 0x8 of the global block at 0x5B40B4. */
u32 FUN_00144534(void)
{
    return DAT_005b40b4.unk08;
}

} /* extern "C" */

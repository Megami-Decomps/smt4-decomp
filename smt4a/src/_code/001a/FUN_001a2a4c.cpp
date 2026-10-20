#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the word at 0x1C of the global at 0x5C0AA0. */
u32 FUN_001a2a4c(void)
{
    return DAT_005c0aa0.unk1C;
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Returns the word at 0x44 of the global at 0x5B3BF4. */
u32 FUN_00183468(void)
{
    return g_gfxSettings.unk44;
}

} /* extern "C" */

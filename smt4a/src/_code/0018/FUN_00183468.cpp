#include "shard/GlobalBlocks.h"
#include "shard/FUN_00183468.h"

extern "C" {

/* Returns the word at 0x44 of the global at 0x5B3BF4. */
u32 FUN_00183468(u32 arg0)
{
    return g_gfxSettings.unk44;
}

} /* extern "C" */

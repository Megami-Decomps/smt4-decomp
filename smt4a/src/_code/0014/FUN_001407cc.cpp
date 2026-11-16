#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets or clears bit 0 of the word at 0x8 of the global block at 0x5B4000. */
void FUN_001407cc(s32 enable)
{
    if (enable != 0) {
        g_padInputState.unk08 = g_padInputState.unk08 | 1;
    } else {
        g_padInputState.unk08 = g_padInputState.unk08 & ~1;
    }
}

} /* extern "C" */

#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets or clears bit 0 of the word at 0x8 of the global block at 0x5B4000. */
void FUN_001407cc(s32 enable)
{
    if (enable != 0) {
        DAT_005b4000.unk08 = DAT_005b4000.unk08 | 1;
    } else {
        DAT_005b4000.unk08 = DAT_005b4000.unk08 & ~1;
    }
}

} /* extern "C" */

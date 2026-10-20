#include "shard/Shard003D.h"

extern "C" {

extern GameBlock2830C *gameDataBlocksGetSaveData(void);

/* Adds `delta` to the halfword at +0x2830E, clamped to 0..999. */
void FUN_003dfd08(s32 delta)
{
    GameBlock2830C *block = gameDataBlocksGetSaveData();

    delta = block->unk2830E + delta;
    if (delta >= 1000) {
        delta = 999;
    } else if (delta < 0) {
        delta = 0;
    }
    block->unk2830E = delta;
}

} /* extern "C" */

#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


int gameFlagIsSet(u32 id);

/* True when the data flag is set or gameFlagIsSet(0x528) succeeds. */
u32 FUN_0031d230(void)
{
    if (g_gameDataBlocks.saveBlock->save.sub.runtime.unk21D8C != 0) {
        return 1;
    }
    if (gameFlagIsSet(0x528) == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

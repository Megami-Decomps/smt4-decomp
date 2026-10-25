#include "gamedata/FlagsB.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

u8 *flagsBGetPtr(s32 index)
{
    u8 *base = reinterpret_cast<u8 *>(g_gameDataBlocks.saveBlock);

    return base + index + 0x28060;
}

} /* extern "C" */

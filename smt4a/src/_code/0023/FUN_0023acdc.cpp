/* NON_MATCHING: compiler folds sub/bitset offsets and uses indexed writeback; retail keeps the 0x88 sub-base and separate address adds. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

// Set the persistent entry bit for a valid identifier in the range 1..500.
extern "C" void FUN_0023acdc(u32 id)
{
    if (id != 0 && id < 501) {
        u8* flags = g_gameDataBlocks.block->sub.entryFlags;
        flags[(s32)id / 8] |= (u8)(1u << ((s32)id % 8));
    }
}

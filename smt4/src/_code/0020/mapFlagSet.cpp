#include "common.h"
#include "shard/SaveWork.h"

struct MapFlagBlock {
    u8 unk000[0x7d4]; // 0x000
    u32 flags[1];     // 0x7d4
};


// Set a map flag when the flag index is nonnegative.
extern "C" void mapFlagSet(s32 flagIndex)
{
    MapFlagBlock *map = reinterpret_cast<MapFlagBlock *>(gameGetMapBlock());
    if (flagIndex >= 0) {
        s32 word = flagIndex / 32;
        s32 bit = flagIndex % 32;
        map->flags[word] |= 1 << bit;
    }
}

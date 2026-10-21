/* NON_MATCHING: compiler folds the mask shift into ORR; retail emits a separate LSL. */
#include "common.h"

struct MapFlagBlock {
    u8 unk000[0x7d4]; // 0x000
    u32 flags[1];     // 0x7d4
};

extern "C" MapFlagBlock* gameGetMapBlock();

// Set a map flag when the flag index is nonnegative.
extern "C" void mapFlagSet(s32 flagIndex)
{
    MapFlagBlock* map = gameGetMapBlock();
    if (flagIndex >= 0) {
        map->flags[flagIndex / 32] |= 1u << (flagIndex % 32);
    }
}

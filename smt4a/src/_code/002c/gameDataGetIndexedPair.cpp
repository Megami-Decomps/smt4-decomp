#include "common.h"

extern "C" {

struct Pair { u32 first, second; };
/* The save block's pair table sits 0x88 bytes into the save data. */
struct PairBlock { u8 unk00[0x27E40]; Pair values[2]; };
struct SaveBlockView { u8 unk00[0x88]; PairBlock block; };

extern struct { u32 reserved; SaveBlockView *table; } g_gameDataBlocks;

/* Returns pair `index` (0 or 1) of the save block, otherwise `fallback`. */
Pair *gameDataGetIndexedPair(s32 index, Pair *fallback)
{
    Pair *result = fallback;

    if (index == 0 || index == 1) {
        PairBlock *block = &g_gameDataBlocks.table->block;
        result = &block->values[index];
    }
    return result;
}

}

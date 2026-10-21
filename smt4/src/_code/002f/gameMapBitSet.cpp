#include "common.h"

extern "C" {

typedef struct MapBitBlock {
    /* 0x000 */ u8 unk000[0xe58];
    /* 0xe58 */ u32 bits[1];   /* bit set, indexed from 0 */
} MapBitBlock;

MapBitBlock *gameGetMapBlock(void);

/* Sets or clears bit `index` of the bit set. */
void gameMapBitSet(s32 index, s32 value)
{
    MapBitBlock *block = gameGetMapBlock();
    s32 word = index / 32;

    if (value != 0) {
        block->bits[word] |= 1 << (index % 32);
    } else {
        block->bits[word] &= ~(1 << (index % 32));
    }
}

} /* extern "C" */

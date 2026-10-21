#include "common.h"

extern "C" {

typedef struct MapBitBlock {
    /* 0x000 */ u8 unk000[0xcd8];
    /* 0xcd8 */ u32 bits[1];   /* bit set, indexed from 0 */
} MapBitBlock;

MapBitBlock *gameGetMapBlock(void);

/* Tests bit `index` of the bit set. */
u8 mapBlockBitTest(s32 index)
{
    MapBitBlock *block = gameGetMapBlock();
    s32 word = index / 32;
    s32 bit = index % 32;

    return (block->bits[word] & (1 << bit)) != 0;
}

} /* extern "C" */

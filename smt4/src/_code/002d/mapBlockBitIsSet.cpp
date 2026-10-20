#include "common.h"

extern "C" {

typedef struct MapBitBlock {
    /* 0x000 */ u8 unk000[0xd18];
    /* 0xd18 */ u32 bits[1];   /* bit set indexed from 0 */
} MapBitBlock;

MapBitBlock *gameGetMapBlock(void);

/* Tests bit `index` of the map block's bit set. */
u8 mapBlockBitIsSet(s32 index)
{
    MapBitBlock *block = gameGetMapBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    return (block->bits[word] & (1 << shift)) != 0;
}

} /* extern "C" */

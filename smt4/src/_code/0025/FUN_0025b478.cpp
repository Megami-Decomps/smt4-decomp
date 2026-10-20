#include "common.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0x7D4];
    /* 0x7D4 */ u32 words[1];       /* one bit per flag */
} MapBlock;

MapBlock *gameGetMapBlock(void);

/* Returns whether bit `flag` of the map block's flag bitmap is set. */
bool FUN_0025b478(s32 flag)
{
    MapBlock *block = gameGetMapBlock();
    s32 index = flag / 32;
    s32 bit = flag % 32;

    return (block->words[index] & (1 << bit)) != 0;
}

} /* extern "C" */

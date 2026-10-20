#include "common.h"

extern "C" {

typedef struct Sub {
    /* 0x000 */ u8 unk000[0x1F0];
    /* 0x1F0 */ f32 value;
} Sub;

typedef struct Blocks {
    /* 0x0000 */ u8 unk0000[0x5274];
    /* 0x5274 */ Sub sub;
} Blocks;

typedef struct BlocksHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Blocks *blocks;
} BlocksHolder;

extern BlocksHolder g_gameDataBlocks;

static __inline void subAdd(Sub *sub, f32 amount)
{
    sub->value += amount;
}

/* Adds `amount` to the float at +0x1F0 of the sub-block at +0x5274 of the game data blocks. */
void gameDataBlocksAddFloat(f32 amount)
{
    subAdd(&g_gameDataBlocks.blocks->sub, amount);
}

} /* extern "C" */

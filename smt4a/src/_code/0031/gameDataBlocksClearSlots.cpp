/* NON_MATCHING: register allocation only: retail holds the 0x2DB4 offset in r3 and 0x2DB8 in r2; built swaps r2/r3. */
#include "common.h"

extern "C" {

typedef struct Slots {
    /* 0x00 */ u8 data[0x4C];
    /* 0x4C */ u32 first;
    /* 0x50 */ u32 second;
} Slots;

typedef struct Blocks {
    /* 0x0000 */ u8 unk0000[0x2D68];
    /* 0x2D68 */ Slots slots;
} Blocks;

typedef struct BlocksHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Blocks *blocks;
} BlocksHolder;

extern BlocksHolder g_gameDataBlocks;
int rt_memclr(void *dst, s32 size);

/* Clears the slot table of the game data blocks. */
void gameDataBlocksClearSlots(void)
{
    g_gameDataBlocks.blocks->slots.first = 0;
    g_gameDataBlocks.blocks->slots.second = 0;
    rt_memclr(g_gameDataBlocks.blocks->slots.data, 0x4C);
}

} /* extern "C" */

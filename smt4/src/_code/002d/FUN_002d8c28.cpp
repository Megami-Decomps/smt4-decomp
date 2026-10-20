#include "common.h"

extern "C" {

typedef struct Block {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 unk4;
} Block;

extern struct {
    u8 unk00[8];
    Block *block;
} g_gameDataBlocks;

u32 FUN_002d8c28(void)
{
    return g_gameDataBlocks.block->unk4;
}

} /* extern "C" */

#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 idle;
    /* 0x01 */ u8 unk01[0x13];
    /* 0x14 */ u32 holds;      /* bit set of reasons to stay busy */
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

void FUN_001406f0(s32 value);

/* Marks the game-data table busy, adds the given bits to `holds` and runs FUN_001406f0(0). */
void FUN_002c76d8(u32 bits)
{
    g_gameDataBlocks.idle = 0;
    g_gameDataBlocks.holds = bits | g_gameDataBlocks.holds;
    FUN_001406f0(0);
}

} /* extern "C" */

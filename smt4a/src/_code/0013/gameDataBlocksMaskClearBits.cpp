#include "common.h"

extern "C" {

typedef struct GameDataBlocks {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 maskEmpty;   /* 1 when `mask` has no bits set */
    /* 0x03 */ u8 unk03[0x19];
    /* 0x1c */ u32 mask;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

/* Clears `bits` from the mask and records whether the mask is now empty. */
void gameDataBlocksMaskClearBits(u32 bits)
{
    g_gameDataBlocks.mask &= ~bits;
    g_gameDataBlocks.maskEmpty = g_gameDataBlocks.mask == 0;
}

} /* extern "C" */

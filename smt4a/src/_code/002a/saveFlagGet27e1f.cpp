#include "common.h"

extern "C" {

typedef struct SaveBlock002a46d8 {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 flags[0x27e20];   /* byte flags */
} SaveBlock002a46d8;

typedef struct GameDataBlocks002a46d8 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SaveBlock002a46d8 *saveBlock;
} GameDataBlocks002a46d8;

extern GameDataBlocks002a46d8 g_gameDataBlocks; /* 0x57f698 */

/* Reads byte flag 0x27e1f of the save block. */
u8 saveFlagGet27e1f(void)
{
    u8 *flags = g_gameDataBlocks.saveBlock->flags;
    return flags[0x27e1f];
}

} /* extern "C" */

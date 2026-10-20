#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the game-data table pointer. */
u32 FUN_00261458(void)
{
    return g_gameDataBlocks.table;
}

} /* extern "C" */

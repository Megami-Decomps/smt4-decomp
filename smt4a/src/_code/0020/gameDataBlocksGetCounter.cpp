#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u16 *counter;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the game-data counter. */
u16 gameDataBlocksGetCounter(void)
{
    return *g_gameDataBlocks.counter;
}

} /* extern "C" */

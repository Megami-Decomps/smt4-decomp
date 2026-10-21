#include "common.h"

extern "C" {

struct SaveSelection {
    /* 0x00 */ u8 unk00[0x8b];
    /* 0x8b */ u8 index;
};
struct GameBlocks {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SaveSelection *save;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u32 *values;
};
extern GameBlocks g_gameDataBlocks;

u32 gameDataBlocksGetSelectedValue(void)
{
    return g_gameDataBlocks.values[g_gameDataBlocks.save->index];
}

} /* extern "C" */

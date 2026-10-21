#include "common.h"

extern "C" {

struct GameDataBlockView {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 *values;
};
extern GameDataBlockView g_gameDataBlocks;

void gameDataBlocksSetIndexedValue(u32 index, u32 value)
{
    u32 *values = g_gameDataBlocks.values;
    if (index < 5) {
        values[index] = value;
    }
}

} /* extern "C" */
